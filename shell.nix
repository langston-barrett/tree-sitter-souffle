{ pkgs ? import <nixpkgs> { }
}:

with pkgs; mkShell {
  nativeBuildInputs = [
    cargo
    nodejs
    rustc
    tree-sitter
  ];
}
