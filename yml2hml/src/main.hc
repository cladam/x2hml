import "std/cli"
import "yml2hml"

fun make_spec() =>
    cli("yml2hml", "1.0.0", "convert YAML files to HML format")
        |> arg("input", "YAML file to convert", true)
        |> arg("output", "output HML file (default: stdout)", false)

fun convert(r) {
    let input_path = r.cli_positionals[0]
    match read_file(input_path) {
        Ok(content) => {
            let hml_output = yml2hml.yaml_to_hml(content)
            match get_positional(r, 1) {
                Some(output_path) => {
                    write_file(output_path, hml_output + "\n")
                    println("Converted {input_path} -> {output_path}")
                },
                None => println(hml_output)
            }
        },
        Err(e) => eprintln("error: could not read {input_path}: {e}")
    }
}

fun main() {
    let spec = make_spec()
    match cli_parse(spec) {
        Help          => println(cli_help(spec)),
        Version       => println(cli_version_str(spec)),
        CliError(msg) => eprintln("error: {msg}"),
        Parsed(r)     => convert(r)
    }
}