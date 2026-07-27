import "../src/yml2hml"

test "yaml_to_hml_scalar_key" {
    assert_eq(yaml_to_hml("key: value"), "key: \"value\"")
}

test "yaml_to_hml_integer_value" {
    assert_eq(yaml_to_hml("count: 5"), "count: 5")
}

test "yaml_to_hml_underscore_key_converted" {
    assert_eq(yaml_to_hml("my_key: yes"), "my-key: true")
}

test "yaml_to_hml_scalar_list" {
    assert_eq(yaml_to_hml("items:\n  - a\n  - b"), "items: [\"a\", \"b\"]")
}

test "yaml_to_hml_nested_object" {
    let input = "parent:\n  child: value"
    let expected = "@parent \{\n    child: \"value\"\n\}"
    assert_eq(yaml_to_hml(input), expected)
}

test "yaml_to_hml_list_of_objects" {
    let input = "users:\n  - name: alice\n    age: 30\n  - name: bob\n    age: 25"
    let expected = "@users \{\n    name: \"alice\"\n    age: 30\n\}\n@users \{\n    name: \"bob\"\n    age: 25\n\}"
    assert_eq(yaml_to_hml(input), expected)
}

test "yaml_to_hml_flow_map" {
    assert_eq(
        yaml_to_hml("item: \{name: foo, enabled: yes\}"),
        "@item \{\n    name: \"foo\"\n    enabled: true\n\}"
    )
}
