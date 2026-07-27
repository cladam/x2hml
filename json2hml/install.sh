#!/bin/sh
set -e

REPO="cladam/x2hml"
PROJECT="json2hml"
INSTALL_DIR="${YML2HML_INSTALL_DIR:-$HOME/.local/bin}"

main() {
  need_cmd curl
  need_cmd uname

  local os arch artifact
  os="$(uname -s)"
  arch="$(uname -m)"

  case "$os" in
    Linux)  os="linux" ;;
    Darwin) os="macos" ;;
    *)      err "unsupported OS: $os" ;;
  esac

  case "$arch" in
    x86_64|amd64)  arch="x86_64" ;;
    aarch64|arm64) arch="arm64" ;;
    *)             err "unsupported architecture: $arch" ;;
  esac

  artifact="${PROJECT}-${os}-${arch}"

  echo "Fetching latest release tag for ${PROJECT}..."
  
  # Query GitHub API for releases and grab the newest tag starting with yml2hml/
  TAG=$(curl -s "https://api.github.com/repos/${REPO}/releases" \
    | grep -oE "\"tag_name\": *\"${PROJECT}/v[^\"]+\"" \
    | head -n 1 \
    | cut -d'"' -f4)

  if [ -z "$TAG" ]; then
    err "could not find any release tag matching '${PROJECT}/v*'"
  fi

  # GitHub release download URLs accept slashes in tag names (yml2hml/v0.1.1-1)
  local url="https://github.com/${REPO}/releases/download/${TAG}/${artifact}"

  echo "Installing ${PROJECT} (${TAG})..."
  echo "  os:      $os"
  echo "  arch:    $arch"
  echo "  install: $INSTALL_DIR"
  echo "  url:     $url"
  echo ""

  mkdir -p "$INSTALL_DIR"
  curl -fsSL "$url" -o "$INSTALL_DIR/${PROJECT}" \
    || err "download failed — check that binary '${artifact}' exists for release ${TAG}"

  chmod +x "$INSTALL_DIR/${PROJECT}"

  echo "${PROJECT} installed to $INSTALL_DIR/${PROJECT}"

  if ! echo "$PATH" | tr ':' '\n' | grep -qx "$INSTALL_DIR"; then
    echo ""
    echo "Add ${PROJECT} to your PATH by adding this to your shell profile:"
    echo "  export PATH=\"$INSTALL_DIR:\$PATH\""
  fi

  echo ""
  "$INSTALL_DIR/${PROJECT}" --version
}

need_cmd() {
  if ! command -v "$1" > /dev/null 2>&1; then
    err "need '$1' (not found)"
  fi
}

err() {
  echo "error: $1" >&2
  exit 1
}

main