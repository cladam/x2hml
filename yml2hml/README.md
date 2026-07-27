# yml2hml

yml2hml is a standalone tool written in [hica](https://www.hica.dev) that converts YAML files to HML format.

HML stands for Hica Markup Language, read the specidication at [HML Specification](https://www.hica.dev/docs/HML-specification/)

## Quick Install

Using standard `curl`:
```sh
curl -fsSL https://github.com/cladam/x2hml/yml2hml/releases/latest/download/install.sh | sh
```

Installs binary (`macos-arm64`, `linux-arm64`, `linux-x86_64`) to `~/.local/bin`. Override target location with `YML2HML_INSTALL_DIR=/usr/local/bin`.

```sh
YML2HML_INSTALL_DIR=/usr/local/bin curl -fsSL https://github.com/cladam/x2hml/yml2hml/releases/latest/download/install.sh | sh
```

**Note:** _No Windows installer yet_

## Usage

```sh
hica build   # compile to binary
hica run     # compile and run
hica fmt     # format according to hica style guide
hica check   # type-check without emitting
hica test    # run tests
hica clean   # remove generated files
```

### Running the Converter

Run from source:
```sh
hica run src/main.hc -- input.yml output.hml
```

Or build and run:
```sh
hica build -o yml2hml
./yml2hml input.yml output.hml
```

## Features

| YAML feature | HML output |
|---|---|
| Scalars (strings, ints, floats, bools, null) | Typed values (`"hello"`, `42`, `true`, `null`) |
| Nested objects | `@element { ... }` blocks |
| Scalar lists (`- item`) | Arrays (`["a", "b", "c"]`) |
| Lists of objects (`- key: val`) | Repeated `@element` blocks |
| Flow sequences (`[a, b, c]`) | Arrays |
| Flow mappings (`{key: val}`) | Inline `@element(attrs)` |
| Multi-line strings (`\|` and `>`) | Triple-quoted strings (`"""..."""`) |
| Comments (`#`) | HML comments (`//`) |
| Underscore keys (`my_key`) | Dashed keys (`my-key`) |

## Limitations

- Anchors and aliases (`&anchor`, `*alias`)
- Complex or multi-line keys
- Merge keys (`<<`)
- YAML tags (`!tag`)