// yml2hml.hc — Convert YAML files to HML format
// HML Specification: https://www.hica.dev/docs/HML-specification/

import "yaml"
import "hml"
import "std/string"
import "std/datetime"

pub fun to_hml_key(k: string) : string => replace(k, "_", "-")

pub fun yaml_to_hml_node(y: Yaml, parent_key: string) : HmlNode => match y {
  YMap(entries) => {
    let attrs = [] // We don't map YAML to HML attributes natively here to keep it simple, or we could if they are simple types. Let's just use properties for simplicity, or we map to properties inside the element body.
    let body = map(entries, (e) => {
      let key = to_hml_key(e.0)
      match e.1 {
        YMap(_) | YList(_) => NElem(HElement(key, [], yaml_to_hml_nodes(e.1, key))),
        _ => NProp(key, yaml_to_hml_value(e.1))
      }
    })
    NElem(HElement(parent_key, [], body))
  },
  _ => NProp(parent_key, yaml_to_hml_value(y))
}

pub fun yaml_to_hml_nodes(y: Yaml, parent_key: string) : list<HmlNode> => match y {
  YMap(entries) => flat_map(entries, (e) => {
    let key = to_hml_key(e.0)
    match e.1 {
      YMap(_) => [NElem(HElement(key, [], yaml_to_hml_nodes(e.1, key)))],
      YList(items) => {
        let is_objects = any(items, (i) => match i { YMap(_) => true, _ => false })
        if is_objects {
          yaml_to_hml_nodes(e.1, key)
        } else {
          [NProp(key, yaml_to_hml_value(e.1))]
        }
      },
      _ => [NProp(key, yaml_to_hml_value(e.1))]
    }
  }),
  YList(items) => {
    // Check if list items are maps or simple scalars
    let is_objects = any(items, (i) => match i { YMap(_) => true, _ => false })
    if is_objects {
      // Repeat the element for each item
      map(items, (i) => {
        match i {
          YMap(inner_entries) => {
            let body = map(inner_entries, (ie) => {
              let inner_key = to_hml_key(ie.0)
              match ie.1 {
                YMap(_) | YList(_) => NElem(HElement(inner_key, [], yaml_to_hml_nodes(ie.1, inner_key))),
                _ => NProp(inner_key, yaml_to_hml_value(ie.1))
              }
            })
            NElem(HElement(parent_key, [], body))
          },
          _ => NProp(parent_key, yaml_to_hml_value(i)) // Should not happen often in mixed lists
        }
      })
    } else {
      [NProp(parent_key, HArray(map(items, yaml_to_hml_value)))]
    }
  },
  _ => [NProp(parent_key, yaml_to_hml_value(y))]
}

pub fun is_hml_duration(v: string) : bool {
    let len = str_length(v)
    if len < 2 { false }
    else if ends_with(v, "ns") || ends_with(v, "us") || ends_with(v, "ms") {
        match parse_int(v[:len - 2]) {
            Some(_) => true,
            None => false
        }
    } else if ends_with(v, "s") || ends_with(v, "m") || ends_with(v, "h") || ends_with(v, "d") {
        match parse_int(v[:len - 1]) {
            Some(_) => true,
            None => false
        }
    } else { false }
}

pub fun is_datetime(v: string) : bool =>
    datetime_kind(v) != "invalid"

pub fun yaml_to_hml_value(y: Yaml) : Hml => match y {
  YStr(s) => {
    if s == "null" || s == "~" { HNull }
    else if s == "true" || s == "yes" || s == "on" { HBool(true) }
    else if s == "false" || s == "no" || s == "off" { HBool(false) }
    else if is_hml_duration(s) {
        let len = str_length(s)
        if ends_with(s, "ns") || ends_with(s, "us") || ends_with(s, "ms") {
            let amount = match parse_int(s[:len - 2]) { Some(v) => v, None => 0 }
            HDuration(amount, s[len - 2:])
        } else {
            let amount = match parse_int(s[:len - 1]) { Some(v) => v, None => 0 }
            HDuration(amount, s[len - 1:])
        }
    }
    else if is_datetime(s) { HDatetime(s) }
    else {
      let opt_i = parse_int(s)
      let opt_f = parse_float(s)
      match (opt_i, opt_f) {
        (Some(i), _) => HInt(i),
        (_, Some(f)) => HFloat(f),
        _ => HStr(s)
      }
    }
  },
  YInt(i) => HInt(i),
  YFloat(f) => HFloat(f),
  YBool(b) => HBool(b),
  YNull => HNull,
  YList(items) => HArray(map(items, yaml_to_hml_value)),
  YMap(_) => HNull // Map shouldn't be parsed as value directly in this flow
}

pub fun to_hml_doc(y: Yaml) : list<HmlNode> => match y {
  YMap(_) => yaml_to_hml_nodes(y, ""),
  _ => []
}

// ============================================================
// HML String Generation (Inlined to bypass module pathing issue)
// ============================================================

pub fun hml_show(v: Hml) : string => match v {
  HStr(s) => if contains(s, "\n") { "\"\"\"\n" + s + "\n\"\"\"" } else { "\"" + s + "\"" },
  HInt(n) => show(n),
  HFloat(f) => show(f),
  HBool(b) => if b { "true" } else { "false" },
  HDuration(amount, unit) => show(amount) + unit,
  HDatetime(s) => s,
  HNull => "null",
  HArray(items) => "[" + join(map(items, (i) => hml_show(i)), ", ") + "]",
  HElement(name, attrs, body) => show_element(name, attrs, body)
}

pub fun show_element(name: string, attrs: list<(string, Hml)>, body: list<HmlNode>) : string {
  let attr_str = if length(attrs) == 0 { "" }
                 else { "(" + join(map(attrs, (a) => show_attr(a)), ", ") + ")" }
  let body_str = if length(body) == 0 { "" }
                 else { " \{ ... \}" }
  "@" + name + attr_str + body_str
}

pub fun show_attr(entry: (string, Hml)) : string => match entry {
  (k, HBool(true)) => k,
  (k, v) => k + ": " + hml_show(v)
}

pub fun make_hml_indent(n: int) : string =>
  if n <= 0 { "" } else { "    " + make_hml_indent(n - 1) }

pub fun hml_pretty(nodes: list<HmlNode>, indent: int) : string =>
  join(map(nodes, (node) => pretty_node(node, indent)), "\n")

pub fun pretty_node(node: HmlNode, indent: int) : string {
  let pad = make_hml_indent(indent)
  match node {
    NProp(key, val) => pad + key + ": " + hml_show(val),
    NElem(HElement(name, attrs, body)) => {
      let attr_str = if length(attrs) == 0 { "" }
                     else { "(" + join(map(attrs, (a) => show_attr(a)), ", ") + ")" }
      if length(body) == 0 { pad + "@" + name + attr_str }
      else {
        let header = pad + "@" + name + attr_str + " \{"
        let content = hml_pretty(body, indent + 1)
        let footer = pad + "\}"
        join([header, content, footer], "\n")
      }
    },
    NElem(_) => pad + "// unknown element",
    NText(content) => pad + content,
    NComment(text) => pad + "// " + text,
    NNamespace(pfx, uri) => pad + "#namespace " + pfx + ": \"" + uri + "\""
  }
}

// Top-level converter
pub fun yaml_to_hml(input: string) : string {
  let safe_input = replace(input, "#!/", "___SHEBANG___")
  match yaml_parse(safe_input) {
    Ok(y) => {
      let out = hml_pretty(to_hml_doc(y), 0)
      replace(out, "___SHEBANG___", "#!/")
    },
    Err(e) => "// Error parsing YAML: " + e
  }
}
