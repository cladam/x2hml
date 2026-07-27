# json2hml

**Note:** This project hasn't started yet.

json2hml is a standalone tool written in [hica](https://www.hica.dev) that converts JSON files to HML format.

HML stands for Hica Markup Language, read the specidication at [HML Specification](https://www.hica.dev/docs/HML-specification/)

## Quick Install

Using standard `curl`:
```sh
curl -fsSL https://github.com/cladam/x2hml/json2hml/releases/latest/download/install.sh | sh
```

Installs binary (`macos-arm64`, `linux-arm64`, `linux-x86_64`) to `~/.local/bin`. Override target location with `JSON2HML_INSTALL_DIR=/usr/local/bin`.

```sh
JSON2HML_INSTALL_DIR=/usr/local/bin curl -fsSL https://github.com/cladam/x2hml/json2hml/releases/latest/download/install.sh | sh
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