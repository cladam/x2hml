# x2hml

[![Build Status](https://img.shields.io/github/actions/workflow/status/cladam/x2hml/ci.yml?branch=main&style=flat-square)](https://github.com/cladam/x2hml/actions)
[![License](https://img.shields.io/github/license/cladam/x2hml?style=flat-square)](LICENSE)
[![Docs](https://img.shields.io/badge/docs-hica.dev-blue?style=flat-square)](https://www.hica.dev/docs/HML-specification/)

The official suite of data converters for transforming structured data formats (YAML, JSON, TOML, and more) into [HML](https://www.hica.dev/docs/HML-specification/).

`x2hml` is maintained as a monorepo containing standalone command-line tools and libraries for each source format.

## Packages

| Package | Language | Description | Status |
| :--- | :--- | :--- | :--- |
| [**`yml2hml`**](./yml2hml) | hica | Convert YAML documents and streams to HML | 🟡 Active Dev |
| [**`json2hml`**](./json2hml) | hica | Convert JSON payloads and streams to HML | 📑 Planned |

### Basic Usage

#### Command Line

```bash
# Convert a YAML file to HML
yml2hml input.yaml > output.hml

# Pipeline into query tools like hq
yml2hml service.yml | hq '.spec.ports[]'

```

## Related Projects

* **[HML Specification](https://www.hica.dev/docs/hml/)** – The target markup language definition.
* **[hq](https://github.com/cladam/hq)** – A command-line HML query and stream processor (_not started yet_).

## 📄 License

Licensed under the MIT License.

