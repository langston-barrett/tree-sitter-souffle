{ pkgs ? import <nixpkgs> { }
}:

with pkgs; mkShell {
  nativeBuildInputs = [
    cargo
    nodejs
    clippy
    rustc
    rustfmt
    tree-sitter
  ];
}
