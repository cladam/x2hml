import "../src/yml2hml"

test "count_indent: empty string" {
    assert_eq(count_indent(""), 0)
}

test "count_indent: no indent" {
    assert_eq(count_indent("key: val"), 0)
}

test "count_indent: two spaces" {
    assert_eq(count_indent("  key: val"), 2)
}

test "count_indent: four spaces" {
    assert_eq(count_indent("    value"), 4)
}

test "to_hml_key: underscores become dashes" {
    assert_eq(to_hml_key("my_key_name"), "my-key-name")
}

test "to_hml_key: no underscores unchanged" {
    assert_eq(to_hml_key("key"), "key")
}

test "hml_value: bare string gets quoted" {
    assert_eq(hml_value("hello"), "\"hello\"")
}

test "hml_value: integer stays unquoted" {
    assert_eq(hml_value("42"), "42")
}

test "hml_value: float stays unquoted" {
    assert_eq(hml_value("3.14"), "3.14")
}

test "hml_value: duration stays unquoted" {
    assert_eq(hml_value("30s"), "30s")
    assert_eq(hml_value("500ms"), "500ms")
    assert_eq(hml_value("24h"), "24h")
    assert_eq(hml_value("5m"), "5m")
}

test "hml_value: datetime stays unquoted" {
    assert_eq(hml_value("2024-05-27T07:32:00Z"), "2024-05-27T07:32:00Z")
    assert_eq(hml_value("2024-05-27"), "2024-05-27")
    assert_eq(hml_value("07:32:00"), "07:32:00")
}

test "hml_value: true bool" {
    assert_eq(hml_value("true"), "true")
}

test "hml_value: yes maps to true" {
    assert_eq(hml_value("yes"), "true")
}

test "hml_value: false bool" {
    assert_eq(hml_value("false"), "false")
}

test "hml_value: off maps to false" {
    assert_eq(hml_value("off"), "false")
}

test "hml_value: null" {
    assert_eq(hml_value("null"), "null")
}

test "hml_value: tilde is null" {
    assert_eq(hml_value("~"), "null")
}

test "hml_value: empty string" {
    assert_eq(hml_value(""), "\"\"")
}

test "hml_value: already double-quoted passthrough" {
    assert_eq(hml_value("\"hello world\""), "\"hello world\"")
}

test "hml_value: single-quoted becomes double-quoted" {
    assert_eq(hml_value("'hello'"), "\"hello\"")
}

test "hml_value: flow sequence" {
    assert_eq(hml_value("[a, b, c]"), "[\"a\", \"b\", \"c\"]")
}

test "strip_inline_comment: no comment" {
    assert_eq(strip_inline_comment("value"), "value")
}

test "strip_inline_comment: strips trailing comment" {
    assert_eq(strip_inline_comment("value # note"), "value")
}

test "strip_inline_comment: quoted value preserves hash" {
    assert_eq(strip_inline_comment("\"val # not a comment\""), "\"val # not a comment\"")
}

test "find_key_sep: finds colon-space" {
    assert_eq(find_key_sep("key: value"), 3)
}

test "find_key_sep: key-only colon at end" {
    assert_eq(find_key_sep("key:"), 3)
}

test "find_key_sep: url colon ignored" {
    assert_eq(find_key_sep("url: https://example.com"), 3)
}

test "find_key_sep: no separator" {
    assert_eq(find_key_sep("just a value"), -1)
}

test "convert_flow_seq: empty sequence" {
    assert_eq(convert_flow_seq("[]"), "[]")
}

test "convert_flow_seq: int items" {
    assert_eq(convert_flow_seq("[1, 2, 3]"), "[1, 2, 3]")
}

test "convert_flow_seq: string items" {
    assert_eq(convert_flow_seq("[a, b]"), "[\"a\", \"b\"]")
}

test "convert_flow_map: empty map" {
    assert_eq(convert_flow_map("\{\}", "elem"), "@elem")
}

test "convert_flow_map: single pair" {
    assert_eq(convert_flow_map("\{name: foo\}", "tag"), "@tag(name: \"foo\")")
}

test "yaml_to_hml: scalar key" {
    assert_eq(yaml_to_hml("key: value"), "key: \"value\"")
}

test "yaml_to_hml: integer value" {
    assert_eq(yaml_to_hml("count: 5"), "count: 5")
}

test "yaml_to_hml: underscore key converted" {
    assert_eq(yaml_to_hml("my_key: yes"), "my-key: true")
}

test "yaml_to_hml: comment converted" {
    assert_eq(yaml_to_hml("# a note"), "// a note")
}

test "yaml_to_hml: scalar list" {
    assert_eq(yaml_to_hml("items:\n  - a\n  - b"), "items: [\"a\", \"b\"]")
}

test "yaml_to_hml: nested object becomes element block" {
    assert_eq(
        yaml_to_hml("parent:\n  child: value"),
        "@parent \{\n    child: \"value\"\n\}"
    )
}

test "yaml_to_hml: list of objects becomes repeated elements" {
    assert_eq(
        yaml_to_hml("users:\n  - name: alice\n    age: 30\n  - name: bob\n    age: 25"),
        "@users \{\n    name: \"alice\"\n    age: 30\n\}\n@users \{\n    name: \"bob\"\n    age: 25\n\}"
    )
}

test "yaml_to_hml: flow map becomes inline element" {
    assert_eq(
        yaml_to_hml("item: \{name: foo, enabled: yes\}"),
        "@item(name: \"foo\", enabled: true)"
    )
}

test "yaml_to_hml: block scalar becomes triple quoted string" {
    assert_eq(
        yaml_to_hml("desc: |\n  hello\n  world"),
        "desc: \"\"\"\nhello\nworld\n\"\"\""
    )
}
