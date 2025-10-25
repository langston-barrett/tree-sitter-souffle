# Changelog

<!-- See: https://keepachangelog.com/en/1.0.0/ -->

## [0.5.0] - 2025-10-25

[Compare to v0.4.0][0.4.0...0.5.0]

- Upgraded `tree-sitter` version

## [0.4.0] - 2022-10-24

[Compare to v0.3.0][0.3.0...0.4.0]

### Added

- Added fields to these nonterminals:
  - `adt_branch`
  - `adt_constructor`
  - `atom`
  - `component_init`
  - `component_type`
  - `contains`
  - `directive`
  - `directive`
  - `fact`
  - `functor_call`
  - `functor_decl`
  - `match`
  - `query_plan`
  - `relation_decl`
  - `relation_decl`
  - `type_record`

### Changed

- Hid the following nonterminals:
  - `adt_branch`
  - `argument`
  - `constraint`
  - `directive_qualifier`
  - `directive_value`
  - `relation_qualifier`
  - `rule`
  - `type_decl`
  - `unary_operator`

### Fixed

- Fixed parsing of legacy type declarations

## [0.3.0] - 2022-10-21

[Compare to v0.2.0][0.2.0...0.3.0]

- v0.1.0 on crates.io actually corresponded to v0.2.0 in this repo. Now fixed.

## [0.2.0] - 2022-10-21

[Compare to v0.1.0][0.1.0...0.2.0]

### Added

- Added fields to `Cargo.toml` to support publishing to crates.io

## [0.1.0] - 2022-10-21

First release!

[0.1.0]: https://github.com/langston-barrett/tree-sitter-souffle/releases/tag/v0.1.0
[0.2.0]: https://github.com/langston-barrett/tree-sitter-souffle/releases/tag/v0.2.0
[0.3.0]: https://github.com/langston-barrett/tree-sitter-souffle/releases/tag/v0.3.0
[0.4.0]: https://github.com/langston-barrett/tree-sitter-souffle/releases/tag/v0.4.0
[0.5.0]: https://github.com/langston-barrett/tree-sitter-souffle/releases/tag/v0.5.0
[0.4.0...0.5.0]: https://github.com/langston-barrett/tree-sitter-souffle/compare/v0.4.0...v0.5.0
[0.3.0...0.4.0]: https://github.com/langston-barrett/tree-sitter-souffle/compare/v0.3.0...v0.4.0
[0.2.0...0.3.0]: https://github.com/langston-barrett/tree-sitter-souffle/compare/v0.2.0...v0.3.0
[0.1.0...0.2.0]: https://github.com/langston-barrett/tree-sitter-souffle/compare/v0.1.0...v0.2.0
