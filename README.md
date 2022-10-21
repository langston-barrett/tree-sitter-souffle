# tree-sitter-souffle

![crates.io](https://img.shields.io/crates/v/tree-sitter-souffle.svg)

A [tree-sitter][tree-sitter] grammar for [Soufflé][souffle].

## Contents

<!-- markdown-toc start - Don't edit this section. Run M-x markdown-toc-refresh-toc -->
**Table of Contents**

- [tree-sitter-souffle](#tree-sitter-souffle)
    - [Contents](#contents)
    - [Status](#status)
        - [Known Issues](#known-issues)
    - [Use-Cases](#use-cases)
    - [On the C Pre-Processor](#on-the-c-pre-processor)
    - [Design](#design)
    - [Development](#development)
        - [Tests](#tests)
        - [References](#references)
<!-- markdown-toc end -->

## Status

The grammar is fairly complete. It parses:

- 500/503 test cases from the Soufflé repo (v2.3) 
- [ddisasm][ddisasm]
- The [Soufflé benchmarks][benchmarks]

### Known Issues

<!-- TODO(lb): Replace with links to Github issues -->

The parser can't handle qualified names where `.type` is one of the "middle"
names, e.g.,
```
.output bar.type.foo
```

It also doesn't handle legacy type declarations, e.g.,
```
.type foo
```

It can't handle relations with names that conflict with builtins, e.g. `exp`.

## Use-Cases

This grammar aims to support the following use-cases:

- Editor integration
  - Code navigation (e.g., jump-to-definition, show references)
  - Syntax highlighting
- Evaluation
- Linting
- Static analysis

It does *not* currently aim to support round-trip printing (i.e., code
formatting and refactoring).

## On the C Pre-Processor

This parser has limited support for parsing C pre-processor `#line` directives,
which may be helpful for analysis tasks. To avoid over-complicating the grammar,
it does not handle directives in the middle of top-level entities (e.g., in
between two conjuncts of a rule). You can configure your preprocessor to not
emit such tokens (`-P` for `mcpp`).

## Design

The grammar doesn't mirror the structure of the Soufflé C++ parser
implementation nor the grammar as presented in the Soufflé documentation. It
instead tries to map nonterminals to more abstract categories, i.e., categories
that match the way we think about the language. For instance, the Soufflé C++
parser doesn't have a nonterminal for constants, whereas this parser does. As
another example, the Soufflé documentation has this specification for type
declarations:

```
type_decl ::= '.type' IDENT ("<:" type_name | "=" ( type_name ( "|" type_name )* | record_list | adt_branch ( "|" adt_branch )* ))
```
This grammar instead has something more like
```javascript
type_decl ::= subtype | type_synonym | type_union | record | adt
```
so that the parse tree encodes a bit more "semantic" information. The hope is
that these choices make it easier to write [tree-sitter queries][queries].

For the same reason, the grammar doesn't specify keywords and operators like
`.functor`, `eqrel`, `*`, and `:-` as their own nonterminals, but rather inlines
them into the grammar.

## Development

### Tests

Run
```bash
tree-sitter test
```
or equivalently
```
npm test
```

This script downloads the Soufflé, ddisasm, cclyzer++, and other repos and attempts to parse their Datalog files.
```
./scripts/parse-examples
```

### References

- [Soufflé Documentation](https://souffle-lang.github.io/program#program)
- [Soufflé Parser](https://github.com/souffle-lang/souffle/blob/master/src/parser/parser.yy)

### Releasing

1. Update [`CHANGELOG.md`](./CHANGELOG.md)
2. Update the version number in [`Cargo.toml`](./Cargo.toml)
3. `git checkout main && git pull origin && git tag -a vX.Y.Z -m vX.Y.Z && git push --tags`
4. `cargo publish``
5. Release the pre-release created by CI

[benchmarks]: https://github.com/souffle-lang/benchmarks/
[ddisasm]: https://github.com/grammatech/ddisasm
[queries]: https://tree-sitter.github.io/tree-sitter/using-parsers#pattern-matching-with-queries
[souffle]: https://souffle-lang.github.io/index.html
[tree-sitter]: https://tree-sitter.github.io/tree-sitter/
