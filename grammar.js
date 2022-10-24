// Up-to-date as of Soufflé v2.3.
//
// Nonterminal names taken from the documentation and C++ parser.

// ---------------------------------------------------------

function sep(s, x) {
  return seq(optional(x), repeat(seq(s, x)));
}

function sep1(s, x) {
  return seq(x, repeat(seq(s, x)));
}

function spaces(x) {
  return sep(' ', x);
}

function commas(x) {
  return sep(',', x);
}

function commas1(x) {
  return sep1(',', x);
}

function dots1(x) {
  return sep1('.', x);
}

function angles(x) {
  return seq('<', x, '>');
}

function parens(x) {
  return seq('(', x, ')');
}

function brackets(x) {
  return seq('[', x, ']');
}

function braces(x) {
  return seq('{', x, '}');
}

const NATURAL = /[0-9]+/;

// ---------------------------------------------------------

// TODO(#11)
//
// https://github.com/souffle-lang/souffle/blob/2.3/src/parser/parser.yy#L282
const PREC = {
  plus: 18,
  times: 19
};

// https://souffle-lang.github.io/arguments#binary-operation
const BINOP = [
  [prec.left, '+', PREC.plus],
  [prec.left, '-', PREC.plus],
  [prec.left, '*', PREC.times],
  [prec.left, '/', PREC.times],
  [prec.left, '%', PREC.times],
  [prec.left, '^', PREC.times],
  [prec.left, 'land', PREC.times],
  [prec.left, 'lor', PREC.times],
  [prec.left, 'lxor', PREC.times],
  [prec.left, 'band', PREC.times],
  [prec.left, 'bor', PREC.times],
  [prec.left, 'bxor', PREC.times],
  [prec.left, 'bshl', PREC.times],
  [prec.left, 'bshr', PREC.times],
  [prec.left, 'bshru', PREC.times],
  // Undocumented, but appear in Soufflé parser:
  [prec.left, '&', PREC.times],
  [prec.left, '|', PREC.times],
  [prec.left, '&&', PREC.times],
  [prec.left, '||', PREC.times],
  [prec.left, '**', PREC.times],
  [prec.left, '^^', PREC.times],
  [prec.left, '<<', PREC.times],
  [prec.left, '>>', PREC.times],
  [prec.left, '>>>', PREC.times],
];

// ---------------------------------------------------------

module.exports = grammar({
  name: 'souffle',

  // TODO(lb): Does this work?
  // inline: $ => [
  //   $._natural,
  // ],

  rules: {
    // program  ::= ( pragma | functor_decl | component_decl | component_init | directive | rule | fact | relation_decl | type_decl )*
    //
    // https://souffle-lang.github.io/program#program
    // https://github.com/souffle-lang/souffle/blob/2.3/src/parser/parser.yy#L308
    //
    program: $ => repeat(choice(
      $.block_comment,
      $.line_comment,
      $.pragma,
      $.functor_decl,
      $.component_decl,
      $.component_init,
      $.directive,
      $._rule,
      $.fact,
      $.relation_decl,
      $.type_decl,
      $.legacy_type_decl,
      $.preprocessor,
    )),

    // https://gcc.gnu.org/onlinedocs/cpp/Preprocessor-Output.html
    preprocessor: $ => seq(
      '#line',
      field('line', NATURAL),
      field('file', $.string),
      // TODO(lb)
      // optional(field('flag', spaces(NATURAL))),
    ),

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    block_comment: $ => seq(
      '/*',
      /[^*]*\*+([^/*][^*]*\*+)*/,
      '/'
    ),
    line_comment: $ => seq('//', /[^\n]*/, '\n'),

    // pragma   ::= '.pragma' STRING STRING?
    //
    // https://souffle-lang.github.io/pragmas#pragma
    // https://github.com/souffle-lang/souffle/blob/2.3/src/parser/parser.yy#L1394
    //
    pragma: $ => seq(
      '.pragma',
      field('key', $.string),
      optional(field('value', $.string))
    ),

    // functor_decl ::= '.functor' IDENT '(' ( attribute ( ',' attribute )* )? ')' ':' type_name 'stateful'?
    //
    // https://souffle-lang.github.io/functors#user-defined-functors
    //
    functor_decl: $ => seq(
      '.functor',
      field('name', $.ident),
      // TODO(lb): Soufflé docs don't reflect that $._type_name may be used here
      parens(commas(choice(
        field('type', $._type_name),
        field('attribute', $.attribute)
      ))),
      ':',
      field('return', $._type_name),
      optional('stateful'),
    ),

    // component_decl ::=
    //   '.comp' component_type ( ( ':' | ',' ) component_type )*
    //   '{'
    // ( type_decl | relation_decl | rule | fact | directive | '.override' IDENT | component_init | component_decl )*
    //   '}'
    //
    //
    // https://souffle-lang.github.io/components#component-declaration
    component_decl: $ => seq(
      '.comp',
      field('type', $.component_type),
      optional(seq(':', commas1(field('super', $.component_type)))),
      '{',
      field('body', repeat(choice(
        $.block_comment,
        $.line_comment,
        $.component_decl,
        $.component_init,
        $.directive,
        $.fact,
        $.relation_decl,
        $._rule,
        $.type_decl,
        $.preprocessor,
        seq('.override', $.ident),
      ))),
      '}',
    ),

    // component_type ::= IDENT ( '<' IDENT ( ',' IDENT )* '>' )?
    //
    // https://souffle-lang.github.io/components#component-type
    component_type: $ => seq(
      field('name', $.ident),
      optional(angles(commas1(field('param', $.ident))))
    ),

    // component_init ::= '.init' IDENT '=' component_type
    //
    // https://souffle-lang.github.io/components#component-initialisation
    component_init: $ => seq(
      '.init',
      field('name', $.ident),
      '=',
      field('component', $.component_type)
    ),

    // directive ::= directive_qualifier qualified_name ( ',' qualified_name )* ( '(' ( IDENT '=' directive_value ( ',' IDENT '=' directive_value )* )? ')' )?
    //
    // https://souffle-lang.github.io/directives#directive
    //
    directive: $ => seq(
      $._directive_qualifier,  // TODO(17): Make into a field
      commas1(field('relation', $.qualified_name)),
      optional(parens(commas(seq(
        field('key', $.ident),
        '=',
        field('value', $._directive_value)
      ))))
    ),

    // directive_qualifier  ::= '.input' | '.output' | '.printsize' | '.limitsize'
    //
    // https://souffle-lang.github.io/directives#directive-qualifier
    //
    _directive_qualifier: $ => choice(
      '.input',
      '.limitsize',
      '.output',
      '.printsize',
    ),

    // directive_value ::= STRING | IDENT | NUMBER | 'true' | 'false'
    //
    // https://souffle-lang.github.io/directives#directive-value
    //
    _directive_value: $ => choice(
      $.string,
      $.ident,
      $.number,
    ),

    bool: $ => choice('true', 'false'),

    _rule: $ => choice(
      $.monotonic_rule,
      $.subsumptive_rule,
    ),

    // rule ::= atom ( ',' atom )* ':-' disjunction '.' query_plan?
    //
    // https://souffle-lang.github.io/rules#rule
    //
    monotonic_rule: $ => seq(
      field('head', commas1($.atom)),
      ':-',
      field('body', $.disjunction),
      '.',
      field('plan', optional($.query_plan)),
    ),

    // rule ::= atom '<=' atom ':-' disjunction '.' query_plan?
    //
    // https://souffle-lang.github.io/subsumption#subsumptive-rule
    subsumptive_rule: $ => seq(
      // TODO(lb): Check that the field names are right
      field('subsumed', $.atom),
      '<=',
      field('subsumes', $.atom),
      ':-',
      field('body', $.disjunction),
      '.',
      field('plan', optional($.query_plan)),
    ),

    // query_plan ::= '.plan' NUMBER ':' '(' ( NUMBER ( ',' NUMBER )* )? ')' ( ',' NUMBER ':' '(' ( NUMBER ( ',' NUMBER )* )? ')' )*
    //
    // https://souffle-lang.github.io/rules#query-plan-1
    query_plan: $ => seq(
      '.plan',
      commas1(seq(
        NATURAL,  // TODO(17): Make natural into a field
        ':',
        parens(commas(NATURAL)),  // TODO(17): Make natural into a field
      ))
    ),

    // disjunction ::= conjunction ( ';' conjunction )*
    //
    // https://souffle-lang.github.io/rules#disjunction-1
    //
    disjunction: $ => prec.left(seq(
      $.conjunction,
      repeat(seq(';', $.conjunction)),
    )),

    // conjunction ::= '!'* ( atom | constraint | '(' disjunction ')' ) ( ',' '!'* ( atom | constraint | '(' disjunction ')' ) )*
    //
    // https://souffle-lang.github.io/rules#query-plan-1
    negation: $ => prec.left(2, '!'),  // conflict: unary_op
    conjunction: $ => commas1(seq(
      repeat($.negation),
      choice(
        $.atom,
        $._constraint,
        parens($.disjunction)
      ),
    )),

    // constraint ::= argument ( '<' | '>' | '<=' | '>=' | '=' | '!=' ) argument
    //            | ( 'match' | 'contains' ) '(' argument ',' argument ')'
    //            | 'true'
    //            | 'false'
    //
    _constraint: $ => choice(
      $.bool,
      $.comparison,
      $.match,
      $.contains,
    ),

    // TODO(#17): Make arguments into a field
    match: $ => seq('match', parens(commas($._argument))),

    // TODO(#17): Make arguments into a field
    contains: $ => seq('contains', parens(commas($._argument))),

    comparison: $ => seq(
      field('left', $._argument),
      field('operator', choice(
        '=',
        '!=',
        '<=',
        '>=',
        '<',
        '>',
      )),
      field('right', $._argument),
    ),

    //
    //
    //
    fact: $ => seq(field('atom', $.atom), '.'),

    // atom ::= qualified_name '(' ( argument ( ',' argument )* )? ')'
    //
    // https://souffle-lang.github.io/facts#atom
    //
    atom: $ => seq(
      field('relation', $.qualified_name),
      parens(commas(field('argument', $._argument)))
    ),

    // argument ::=
    //     constant
    //     | variable
    //     | 'nil'
    //     | '[' argument_list ']'
    //     | '$' IDENT ( '(' argument_list ')' )?
    //     | '(' argument ')'
    //     | 'as' '(' argument ',' type_name ')'
    //     | ( userdef_functor | intrinsic_functor ) '(' argument_list ')'
    //     | aggregator
    //     | ( unary_operation | argument binary_operation ) argument
    //
    // https://souffle-lang.github.io/arguments#argument-value
    //
    _argument: $ => choice(
      $.anonymous,
      $.constant,
      $.variable,
      $.nil,
      $.record_constructor,
      $.adt_constructor,
      seq('(', $._argument, ')'),
      $.as,
      $.functor_call,
      $.aggregator,
      $.unary_op,
      $.binary_op,
    ),

    adt_constructor: $ => seq(
      '$',
      field('constructor', $.qualified_name),
      optional(parens(commas($._argument))),  // TODO(17): Make into a field
    ),

    record_constructor: $ => seq(brackets(commas($._argument))),

    // constant ::= STRING | NUMBER | UNSIGNED | FLOAT
    //
    // https://souffle-lang.github.io/arguments#argument-value
    //
    // NOTE: This is not anonymized because it is useful in tree-sitter queries.
    constant: $ => choice(
      $.ipv4,
      $.number,
      $.string,
    ),

    // Are you kidding me?
    ipv4: $ => /[0-9]{0,3}\.[0-9]{0,3}\.[0-9]{0,3}\.[0-9]{0,3}/,

    string: $ => /"([^"]|\\")*"/,
    // NOTE: This is not anonymized because it is useful in tree-sitter queries.
    number: $ => choice(
      $.float,
      $.integer,
      $.unsigned,
    ),
    // NOTE: This is not anonymized because it is useful in tree-sitter queries.
    integer: $ => choice(
      $.decimal,
      $.hex,
      $.binary,
    ),
    decimal: $ => prec.left(2, /-?[0-9]+/),
    unsigned: $ => /[0-9]+u/,
    hex: $ => /0x([0-9]|[A-F]|[a-f])+/,
    binary: $ => /0b[0-1]+/,
    float: $ => prec.left(1, /-?[0-9]+\.[0-9]+/),

    variable: $ => $.ident,
    nil: $ => 'nil',
    anonymous: $ => '_',

    as: $ => seq(
      'as',
      '(',
      field('expr', $._argument),
      ',',
      field('type', $._type_name),
      ')',
    ),

    // TODO(#17): Fields
    functor_call: $ => seq(
      choice($.user_defined_functor, $.intrinsic_functor),
      parens(commas($._argument)),
    ),

    user_defined_functor: $ => seq('@', $.ident),

    // intrinsic_functor ::= 'ord' | 'to_float' | 'to_number' | 'to_string' | 'to_unsigned' | 'cat' | 'strlen' | 'substr' | 'autoinc'
    //
    // https://souffle-lang.github.io/arguments#intrinsic-functor
    //
    // TODO(lb): Perhaps parse these only with the proper arity?
    // NOTE: This is not anonymized because it is useful in tree-sitter queries.
    intrinsic_functor: $ => prec.left(2, choice(  // conflict: aggregator
      // math
      'acos',
      'acosh',
      'asin',
      'asinh',
      'atan',
      'atanh',
      'cos',
      'cosh',
      'exp',
      'log',
      'sin',
      'sinh',
      'tan',
      'tanh',
      // other
      'autoinc',
      'cat',
      'max',
      'min',
      'ord',
      'strlen',
      'substr',
      'to_float',
      'to_number',
      'to_string',
      'to_unsigned',
    )),

    // aggregator  ::= (( ( 'max' | 'mean' | 'min' | 'sum' ) argument | 'count' ) ':' ( '{' disjunction '}' | atom )) |
    //   'range' '(' argument ',' argument (',' argument)? ')'
    //
    // https://souffle-lang.github.io/aggregates#aggregator
    // TODO(#17): Fields
    aggregator: $ => seq(
      choice(
        seq(
          choice(
            seq(
              choice(
                'max',
                'mean',
                'min',
                'sum',
              ),
              $._argument,
            ),
            'count'
          ),
          ':',
          field('body', choice($.atom, seq('{', $.disjunction, '}')))
        ),
        $.range
      )
    ),

    range: $ => seq(
      'range',
      parens(seq(
        field('low', $._argument),
        ',',
        field('high', $._argument),
        optional(seq(
          ',',
          field('step', $._argument),
        )),
      ))
    ),

    _unary_operator: $ => prec.left(1, choice(  // conflict: negation
      'bnot',
      'lnot',
      '-',
      '~',
      '!',
    )),
    unary_op: $ => prec.left(1, seq(
      field('operator', $._unary_operator),
      field('operand', $._argument),
    )),

    // binary_operation ::= '+' | '-' | '*' | '/' | '%' | '^' | 'land' | 'lor' | 'lxor' | 'band' | 'bor' | 'bxor' | 'bshl' | 'bshr' | 'bshru'
    //
    // https://souffle-lang.github.io/arguments#binary-operation
    binary_op: $ => choice(...BINOP.map(([fn, operator, precedence]) => fn(precedence, seq(
      field('left', $._argument),
      field('operator', operator),
      field('right', $._argument)
    )))),

    // relation_decl ::= '.decl' IDENT ( ',' IDENT )* '(' attribute ( ',' attribute )* ')' ( 'override' | 'inline' | 'no_inline' | 'magic' | 'no_magic' | 'brie' | 'btree' | 'eqrel' )* choice_domain
    //
    // https://souffle-lang.github.io/relations#relation-declaration
    // https://github.com/souffle-lang/souffle/blob/2.3/src/parser/parser.yy#L463
    //
    // TODO(#17): Fields
    relation_decl: $ => seq(
      '.decl',
      field('head', commas($.ident)),
      parens(commas($.attribute)),
      field('qualifier', repeat($._relation_qualifier)),
      optional($.choice_domain),
    ),

    // https://github.com/souffle-lang/souffle/blob/2.3/src/parser/parser.yy#L537
    _relation_qualifier: $ => choice(
      'brie',
      'btree',
      'btree_delete',
      'eqrel',
      'inline',
      'magic',
      'no_inline',
      'no_magic',
      'override',
      'overridable',
      // Deprecated:
      'input',
      'output',
      'printsize',
    ),

    // choice_domain ::= ( 'choice-domain' ( IDENT | '(' IDENT ( ',' IDENT )* ')' ) ( ',' ( IDENT | '(' IDENT ( ',' IDENT )* ')' ) )* )?
    //
    // https://souffle-lang.github.io/choice#choice-domain
    choice_domain: $ => seq(
      'choice-domain',
      commas1(choice($.ident, parens(commas1($.ident)))),
    ),

    // TODO(lb): Split into separate number/symbol type decls
    legacy_type_decl: $ => seq(
      field('supertype',
        choice(
          '.number_type',
          '.symbol_type',
        ),
      ),
      field('subtype',
        $._type_name,
      ),
    ),

    // type_decl ::= TYPE IDENT ("<:" type_name | "=" ( type_name ( "|" type_name )* | record_list | adt_branch ( "|" adt_branch )* ))
    //
    // https://souffle-lang.github.io/types#type-declaration
    //
    type_decl: $ => seq(
      '.type',
      choice(
        choice(
          $.type_synonym,
          $.subtype,
          $.type_union,
          $.type_record,
          $.adt,
        ),
        $.legacy_bare_type_decl
      )
    ),

    legacy_bare_type_decl: $ => field('name', $.ident),

    subtype: $ => seq(
      field('left', $.ident),
      '<:',
      field('right', $._type_name),
    ),

    type_synonym: $ => seq(
      field('left', $.ident),
      '=',
      field('right', $._type_name),
    ),

    type_union: $ => prec.left(2, seq(
      field('left', $.ident),
      '=',
      field(
        'branch',
        seq($._type_name, repeat1(seq('|', $._type_name))),
      )
    )),

    type_record: $ => prec.left(1, seq(
      field('left', $.ident),
      '=',
      brackets(commas($.attribute)),  // TODO(#17): Fields
    )),

    adt: $ => prec.left(1, seq(
      field('left', $.ident),
      '=',
      field('branch', sep1('|', $._adt_branch)),
    )),

    _adt_branch: $ => seq(
      field('constructor', $.ident),
      braces(commas(field('field', $.attribute)))
    ),

    // type_name ::=  "number" | "symbol" |"unsigned" | "float"  | IDENT ("." IDENT )*
    //
    // https://souffle-lang.github.io/types#type-name
    //
    _type_name: $ => choice(
      $.primitive_type,
      $.qualified_name
    ),

    // NOTE: This is not anonymized because it is useful in tree-sitter queries.
    primitive_type: $ => choice(
      'number',
      'symbol',
      'unsigned',
      'float',
    ),

    // https://souffle-lang.github.io/relations#attribute-declaration
    // https://github.com/souffle-lang/souffle/blob/2.3/src/parser/parser.yy#L505
    // https://github.com/souffle-lang/souffle/blob/2.3/src/parser/parser.yy#L529
    attribute: $ => seq(field('var', $.ident), ':', field('type', $._type_name)),

    // https://souffle-lang.github.io/facts#syntax
    qualified_name: $ => prec.left(dots1($.ident)),
    ident: $ => /(_|\?|[A-Z]|[a-z])(([A-Z]|[a-z])|[0-9]|_|\?)*/,
  }
});

// Local Variables:
// js2-basic-offset: 2
// End:
