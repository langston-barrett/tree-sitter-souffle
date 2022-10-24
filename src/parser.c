#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 497
#define LARGE_STATE_COUNT 44
#define SYMBOL_COUNT 216
#define ALIAS_COUNT 0
#define TOKEN_COUNT 133
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 35
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 94

enum {
  anon_sym_POUNDline = 1,
  aux_sym_preprocessor_token1 = 2,
  anon_sym_SLASH_STAR = 3,
  aux_sym_block_comment_token1 = 4,
  anon_sym_SLASH = 5,
  anon_sym_SLASH_SLASH = 6,
  aux_sym_line_comment_token1 = 7,
  anon_sym_LF = 8,
  anon_sym_DOTpragma = 9,
  anon_sym_DOTfunctor = 10,
  anon_sym_LPAREN = 11,
  anon_sym_COMMA = 12,
  anon_sym_RPAREN = 13,
  anon_sym_COLON = 14,
  anon_sym_stateful = 15,
  anon_sym_DOTcomp = 16,
  anon_sym_LBRACE = 17,
  anon_sym_DOToverride = 18,
  anon_sym_RBRACE = 19,
  anon_sym_LT = 20,
  anon_sym_GT = 21,
  anon_sym_DOTinit = 22,
  anon_sym_EQ = 23,
  anon_sym_DOTinput = 24,
  anon_sym_DOTlimitsize = 25,
  anon_sym_DOToutput = 26,
  anon_sym_DOTprintsize = 27,
  anon_sym_true = 28,
  anon_sym_false = 29,
  anon_sym_COLON_DASH = 30,
  anon_sym_DOT = 31,
  anon_sym_LT_EQ = 32,
  anon_sym_DOTplan = 33,
  anon_sym_SEMI = 34,
  anon_sym_BANG = 35,
  anon_sym_match = 36,
  anon_sym_contains = 37,
  anon_sym_BANG_EQ = 38,
  anon_sym_GT_EQ = 39,
  anon_sym_DOLLAR = 40,
  anon_sym_LBRACK = 41,
  anon_sym_RBRACK = 42,
  sym_ipv4 = 43,
  sym_string = 44,
  aux_sym_decimal_token1 = 45,
  sym_unsigned = 46,
  sym_hex = 47,
  sym_binary = 48,
  aux_sym_float_token1 = 49,
  sym_nil = 50,
  sym_anonymous = 51,
  anon_sym_as = 52,
  anon_sym_AT = 53,
  anon_sym_acos = 54,
  anon_sym_acosh = 55,
  anon_sym_asin = 56,
  anon_sym_asinh = 57,
  anon_sym_atan = 58,
  anon_sym_atanh = 59,
  anon_sym_cos = 60,
  anon_sym_cosh = 61,
  anon_sym_exp = 62,
  anon_sym_log = 63,
  anon_sym_sin = 64,
  anon_sym_sinh = 65,
  anon_sym_tan = 66,
  anon_sym_tanh = 67,
  anon_sym_autoinc = 68,
  anon_sym_cat = 69,
  anon_sym_max = 70,
  anon_sym_min = 71,
  anon_sym_ord = 72,
  anon_sym_strlen = 73,
  anon_sym_substr = 74,
  anon_sym_to_float = 75,
  anon_sym_to_number = 76,
  anon_sym_to_string = 77,
  anon_sym_to_unsigned = 78,
  anon_sym_mean = 79,
  anon_sym_sum = 80,
  anon_sym_count = 81,
  anon_sym_range = 82,
  anon_sym_bnot = 83,
  anon_sym_lnot = 84,
  anon_sym_DASH = 85,
  anon_sym_TILDE = 86,
  anon_sym_PLUS = 87,
  anon_sym_STAR = 88,
  anon_sym_PERCENT = 89,
  anon_sym_CARET = 90,
  anon_sym_land = 91,
  anon_sym_lor = 92,
  anon_sym_lxor = 93,
  anon_sym_band = 94,
  anon_sym_bor = 95,
  anon_sym_bxor = 96,
  anon_sym_bshl = 97,
  anon_sym_bshr = 98,
  anon_sym_bshru = 99,
  anon_sym_AMP = 100,
  anon_sym_PIPE = 101,
  anon_sym_AMP_AMP = 102,
  anon_sym_PIPE_PIPE = 103,
  anon_sym_STAR_STAR = 104,
  anon_sym_CARET_CARET = 105,
  anon_sym_LT_LT = 106,
  anon_sym_GT_GT = 107,
  anon_sym_GT_GT_GT = 108,
  anon_sym_DOTdecl = 109,
  anon_sym_brie = 110,
  anon_sym_btree = 111,
  anon_sym_btree_delete = 112,
  anon_sym_eqrel = 113,
  anon_sym_inline = 114,
  anon_sym_magic = 115,
  anon_sym_no_inline = 116,
  anon_sym_no_magic = 117,
  anon_sym_override = 118,
  anon_sym_overridable = 119,
  anon_sym_input = 120,
  anon_sym_output = 121,
  anon_sym_printsize = 122,
  anon_sym_choice_DASHdomain = 123,
  anon_sym_DOTnumber_type = 124,
  anon_sym_DOTsymbol_type = 125,
  anon_sym_DOTtype = 126,
  anon_sym_LT_COLON = 127,
  anon_sym_number = 128,
  anon_sym_symbol = 129,
  anon_sym_unsigned = 130,
  anon_sym_float = 131,
  sym_ident = 132,
  sym_program = 133,
  sym_preprocessor = 134,
  sym_block_comment = 135,
  sym_line_comment = 136,
  sym_pragma = 137,
  sym_functor_decl = 138,
  sym_component_decl = 139,
  sym_component_type = 140,
  sym_component_init = 141,
  sym_directive = 142,
  sym__directive_qualifier = 143,
  sym__directive_value = 144,
  sym_bool = 145,
  sym__rule = 146,
  sym_monotonic_rule = 147,
  sym_subsumptive_rule = 148,
  sym_query_plan = 149,
  sym_disjunction = 150,
  sym_negation = 151,
  sym_conjunction = 152,
  sym__constraint = 153,
  sym_match = 154,
  sym_contains = 155,
  sym_comparison = 156,
  sym_fact = 157,
  sym_atom = 158,
  sym__argument = 159,
  sym_adt_constructor = 160,
  sym_record_constructor = 161,
  sym_constant = 162,
  sym_number = 163,
  sym_integer = 164,
  sym_decimal = 165,
  sym_float = 166,
  sym_variable = 167,
  sym_as = 168,
  sym_functor_call = 169,
  sym_user_defined_functor = 170,
  sym_intrinsic_functor = 171,
  sym_aggregator = 172,
  sym_range = 173,
  sym__unary_operator = 174,
  sym_unary_op = 175,
  sym_binary_op = 176,
  sym_relation_decl = 177,
  sym__relation_qualifier = 178,
  sym_choice_domain = 179,
  sym_legacy_type_decl = 180,
  sym_type_decl = 181,
  sym_legacy_bare_type_decl = 182,
  sym_subtype = 183,
  sym_type_synonym = 184,
  sym_type_union = 185,
  sym_type_record = 186,
  sym_adt = 187,
  sym__adt_branch = 188,
  sym__type_name = 189,
  sym_primitive_type = 190,
  sym_attribute = 191,
  sym_qualified_name = 192,
  aux_sym_program_repeat1 = 193,
  aux_sym_functor_decl_repeat1 = 194,
  aux_sym_component_decl_repeat1 = 195,
  aux_sym_component_decl_repeat2 = 196,
  aux_sym_component_type_repeat1 = 197,
  aux_sym_directive_repeat1 = 198,
  aux_sym_directive_repeat2 = 199,
  aux_sym_monotonic_rule_repeat1 = 200,
  aux_sym_query_plan_repeat1 = 201,
  aux_sym_query_plan_repeat2 = 202,
  aux_sym_disjunction_repeat1 = 203,
  aux_sym_conjunction_repeat1 = 204,
  aux_sym_conjunction_repeat2 = 205,
  aux_sym_match_repeat1 = 206,
  aux_sym_adt_constructor_repeat1 = 207,
  aux_sym_relation_decl_repeat1 = 208,
  aux_sym_relation_decl_repeat2 = 209,
  aux_sym_relation_decl_repeat3 = 210,
  aux_sym_choice_domain_repeat1 = 211,
  aux_sym_type_union_repeat1 = 212,
  aux_sym_adt_repeat1 = 213,
  aux_sym__adt_branch_repeat1 = 214,
  aux_sym_qualified_name_repeat1 = 215,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUNDline] = "#line",
  [aux_sym_preprocessor_token1] = "preprocessor_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [anon_sym_SLASH] = "/",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [anon_sym_LF] = "\n",
  [anon_sym_DOTpragma] = ".pragma",
  [anon_sym_DOTfunctor] = ".functor",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_stateful] = "stateful",
  [anon_sym_DOTcomp] = ".comp",
  [anon_sym_LBRACE] = "{",
  [anon_sym_DOToverride] = ".override",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_DOTinit] = ".init",
  [anon_sym_EQ] = "=",
  [anon_sym_DOTinput] = ".input",
  [anon_sym_DOTlimitsize] = ".limitsize",
  [anon_sym_DOToutput] = ".output",
  [anon_sym_DOTprintsize] = ".printsize",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_COLON_DASH] = ":-",
  [anon_sym_DOT] = ".",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_DOTplan] = ".plan",
  [anon_sym_SEMI] = ";",
  [anon_sym_BANG] = "!",
  [anon_sym_match] = "match",
  [anon_sym_contains] = "contains",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_ipv4] = "ipv4",
  [sym_string] = "string",
  [aux_sym_decimal_token1] = "decimal_token1",
  [sym_unsigned] = "unsigned",
  [sym_hex] = "hex",
  [sym_binary] = "binary",
  [aux_sym_float_token1] = "float_token1",
  [sym_nil] = "nil",
  [sym_anonymous] = "anonymous",
  [anon_sym_as] = "as",
  [anon_sym_AT] = "@",
  [anon_sym_acos] = "acos",
  [anon_sym_acosh] = "acosh",
  [anon_sym_asin] = "asin",
  [anon_sym_asinh] = "asinh",
  [anon_sym_atan] = "atan",
  [anon_sym_atanh] = "atanh",
  [anon_sym_cos] = "cos",
  [anon_sym_cosh] = "cosh",
  [anon_sym_exp] = "exp",
  [anon_sym_log] = "log",
  [anon_sym_sin] = "sin",
  [anon_sym_sinh] = "sinh",
  [anon_sym_tan] = "tan",
  [anon_sym_tanh] = "tanh",
  [anon_sym_autoinc] = "autoinc",
  [anon_sym_cat] = "cat",
  [anon_sym_max] = "max",
  [anon_sym_min] = "min",
  [anon_sym_ord] = "ord",
  [anon_sym_strlen] = "strlen",
  [anon_sym_substr] = "substr",
  [anon_sym_to_float] = "to_float",
  [anon_sym_to_number] = "to_number",
  [anon_sym_to_string] = "to_string",
  [anon_sym_to_unsigned] = "to_unsigned",
  [anon_sym_mean] = "mean",
  [anon_sym_sum] = "sum",
  [anon_sym_count] = "count",
  [anon_sym_range] = "range",
  [anon_sym_bnot] = "bnot",
  [anon_sym_lnot] = "lnot",
  [anon_sym_DASH] = "-",
  [anon_sym_TILDE] = "~",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_PERCENT] = "%",
  [anon_sym_CARET] = "^",
  [anon_sym_land] = "land",
  [anon_sym_lor] = "lor",
  [anon_sym_lxor] = "lxor",
  [anon_sym_band] = "band",
  [anon_sym_bor] = "bor",
  [anon_sym_bxor] = "bxor",
  [anon_sym_bshl] = "bshl",
  [anon_sym_bshr] = "bshr",
  [anon_sym_bshru] = "bshru",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_CARET_CARET] = "^^",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_GT_GT_GT] = ">>>",
  [anon_sym_DOTdecl] = ".decl",
  [anon_sym_brie] = "brie",
  [anon_sym_btree] = "btree",
  [anon_sym_btree_delete] = "btree_delete",
  [anon_sym_eqrel] = "eqrel",
  [anon_sym_inline] = "inline",
  [anon_sym_magic] = "magic",
  [anon_sym_no_inline] = "no_inline",
  [anon_sym_no_magic] = "no_magic",
  [anon_sym_override] = "override",
  [anon_sym_overridable] = "overridable",
  [anon_sym_input] = "input",
  [anon_sym_output] = "output",
  [anon_sym_printsize] = "printsize",
  [anon_sym_choice_DASHdomain] = "choice-domain",
  [anon_sym_DOTnumber_type] = ".number_type",
  [anon_sym_DOTsymbol_type] = ".symbol_type",
  [anon_sym_DOTtype] = ".type",
  [anon_sym_LT_COLON] = "<:",
  [anon_sym_number] = "number",
  [anon_sym_symbol] = "symbol",
  [anon_sym_unsigned] = "unsigned",
  [anon_sym_float] = "float",
  [sym_ident] = "ident",
  [sym_program] = "program",
  [sym_preprocessor] = "preprocessor",
  [sym_block_comment] = "block_comment",
  [sym_line_comment] = "line_comment",
  [sym_pragma] = "pragma",
  [sym_functor_decl] = "functor_decl",
  [sym_component_decl] = "component_decl",
  [sym_component_type] = "component_type",
  [sym_component_init] = "component_init",
  [sym_directive] = "directive",
  [sym__directive_qualifier] = "_directive_qualifier",
  [sym__directive_value] = "_directive_value",
  [sym_bool] = "bool",
  [sym__rule] = "_rule",
  [sym_monotonic_rule] = "monotonic_rule",
  [sym_subsumptive_rule] = "subsumptive_rule",
  [sym_query_plan] = "query_plan",
  [sym_disjunction] = "disjunction",
  [sym_negation] = "negation",
  [sym_conjunction] = "conjunction",
  [sym__constraint] = "_constraint",
  [sym_match] = "match",
  [sym_contains] = "contains",
  [sym_comparison] = "comparison",
  [sym_fact] = "fact",
  [sym_atom] = "atom",
  [sym__argument] = "_argument",
  [sym_adt_constructor] = "adt_constructor",
  [sym_record_constructor] = "record_constructor",
  [sym_constant] = "constant",
  [sym_number] = "number",
  [sym_integer] = "integer",
  [sym_decimal] = "decimal",
  [sym_float] = "float",
  [sym_variable] = "variable",
  [sym_as] = "as",
  [sym_functor_call] = "functor_call",
  [sym_user_defined_functor] = "user_defined_functor",
  [sym_intrinsic_functor] = "intrinsic_functor",
  [sym_aggregator] = "aggregator",
  [sym_range] = "range",
  [sym__unary_operator] = "_unary_operator",
  [sym_unary_op] = "unary_op",
  [sym_binary_op] = "binary_op",
  [sym_relation_decl] = "relation_decl",
  [sym__relation_qualifier] = "_relation_qualifier",
  [sym_choice_domain] = "choice_domain",
  [sym_legacy_type_decl] = "legacy_type_decl",
  [sym_type_decl] = "type_decl",
  [sym_legacy_bare_type_decl] = "legacy_bare_type_decl",
  [sym_subtype] = "subtype",
  [sym_type_synonym] = "type_synonym",
  [sym_type_union] = "type_union",
  [sym_type_record] = "type_record",
  [sym_adt] = "adt",
  [sym__adt_branch] = "_adt_branch",
  [sym__type_name] = "_type_name",
  [sym_primitive_type] = "primitive_type",
  [sym_attribute] = "attribute",
  [sym_qualified_name] = "qualified_name",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_functor_decl_repeat1] = "functor_decl_repeat1",
  [aux_sym_component_decl_repeat1] = "component_decl_repeat1",
  [aux_sym_component_decl_repeat2] = "component_decl_repeat2",
  [aux_sym_component_type_repeat1] = "component_type_repeat1",
  [aux_sym_directive_repeat1] = "directive_repeat1",
  [aux_sym_directive_repeat2] = "directive_repeat2",
  [aux_sym_monotonic_rule_repeat1] = "monotonic_rule_repeat1",
  [aux_sym_query_plan_repeat1] = "query_plan_repeat1",
  [aux_sym_query_plan_repeat2] = "query_plan_repeat2",
  [aux_sym_disjunction_repeat1] = "disjunction_repeat1",
  [aux_sym_conjunction_repeat1] = "conjunction_repeat1",
  [aux_sym_conjunction_repeat2] = "conjunction_repeat2",
  [aux_sym_match_repeat1] = "match_repeat1",
  [aux_sym_adt_constructor_repeat1] = "adt_constructor_repeat1",
  [aux_sym_relation_decl_repeat1] = "relation_decl_repeat1",
  [aux_sym_relation_decl_repeat2] = "relation_decl_repeat2",
  [aux_sym_relation_decl_repeat3] = "relation_decl_repeat3",
  [aux_sym_choice_domain_repeat1] = "choice_domain_repeat1",
  [aux_sym_type_union_repeat1] = "type_union_repeat1",
  [aux_sym_adt_repeat1] = "adt_repeat1",
  [aux_sym__adt_branch_repeat1] = "_adt_branch_repeat1",
  [aux_sym_qualified_name_repeat1] = "qualified_name_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUNDline] = anon_sym_POUNDline,
  [aux_sym_preprocessor_token1] = aux_sym_preprocessor_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_DOTpragma] = anon_sym_DOTpragma,
  [anon_sym_DOTfunctor] = anon_sym_DOTfunctor,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_stateful] = anon_sym_stateful,
  [anon_sym_DOTcomp] = anon_sym_DOTcomp,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_DOToverride] = anon_sym_DOToverride,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_DOTinit] = anon_sym_DOTinit,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOTinput] = anon_sym_DOTinput,
  [anon_sym_DOTlimitsize] = anon_sym_DOTlimitsize,
  [anon_sym_DOToutput] = anon_sym_DOToutput,
  [anon_sym_DOTprintsize] = anon_sym_DOTprintsize,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_COLON_DASH] = anon_sym_COLON_DASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_DOTplan] = anon_sym_DOTplan,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_contains] = anon_sym_contains,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_ipv4] = sym_ipv4,
  [sym_string] = sym_string,
  [aux_sym_decimal_token1] = aux_sym_decimal_token1,
  [sym_unsigned] = sym_unsigned,
  [sym_hex] = sym_hex,
  [sym_binary] = sym_binary,
  [aux_sym_float_token1] = aux_sym_float_token1,
  [sym_nil] = sym_nil,
  [sym_anonymous] = sym_anonymous,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_acos] = anon_sym_acos,
  [anon_sym_acosh] = anon_sym_acosh,
  [anon_sym_asin] = anon_sym_asin,
  [anon_sym_asinh] = anon_sym_asinh,
  [anon_sym_atan] = anon_sym_atan,
  [anon_sym_atanh] = anon_sym_atanh,
  [anon_sym_cos] = anon_sym_cos,
  [anon_sym_cosh] = anon_sym_cosh,
  [anon_sym_exp] = anon_sym_exp,
  [anon_sym_log] = anon_sym_log,
  [anon_sym_sin] = anon_sym_sin,
  [anon_sym_sinh] = anon_sym_sinh,
  [anon_sym_tan] = anon_sym_tan,
  [anon_sym_tanh] = anon_sym_tanh,
  [anon_sym_autoinc] = anon_sym_autoinc,
  [anon_sym_cat] = anon_sym_cat,
  [anon_sym_max] = anon_sym_max,
  [anon_sym_min] = anon_sym_min,
  [anon_sym_ord] = anon_sym_ord,
  [anon_sym_strlen] = anon_sym_strlen,
  [anon_sym_substr] = anon_sym_substr,
  [anon_sym_to_float] = anon_sym_to_float,
  [anon_sym_to_number] = anon_sym_to_number,
  [anon_sym_to_string] = anon_sym_to_string,
  [anon_sym_to_unsigned] = anon_sym_to_unsigned,
  [anon_sym_mean] = anon_sym_mean,
  [anon_sym_sum] = anon_sym_sum,
  [anon_sym_count] = anon_sym_count,
  [anon_sym_range] = anon_sym_range,
  [anon_sym_bnot] = anon_sym_bnot,
  [anon_sym_lnot] = anon_sym_lnot,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_land] = anon_sym_land,
  [anon_sym_lor] = anon_sym_lor,
  [anon_sym_lxor] = anon_sym_lxor,
  [anon_sym_band] = anon_sym_band,
  [anon_sym_bor] = anon_sym_bor,
  [anon_sym_bxor] = anon_sym_bxor,
  [anon_sym_bshl] = anon_sym_bshl,
  [anon_sym_bshr] = anon_sym_bshr,
  [anon_sym_bshru] = anon_sym_bshru,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_CARET_CARET] = anon_sym_CARET_CARET,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_GT_GT_GT] = anon_sym_GT_GT_GT,
  [anon_sym_DOTdecl] = anon_sym_DOTdecl,
  [anon_sym_brie] = anon_sym_brie,
  [anon_sym_btree] = anon_sym_btree,
  [anon_sym_btree_delete] = anon_sym_btree_delete,
  [anon_sym_eqrel] = anon_sym_eqrel,
  [anon_sym_inline] = anon_sym_inline,
  [anon_sym_magic] = anon_sym_magic,
  [anon_sym_no_inline] = anon_sym_no_inline,
  [anon_sym_no_magic] = anon_sym_no_magic,
  [anon_sym_override] = anon_sym_override,
  [anon_sym_overridable] = anon_sym_overridable,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_printsize] = anon_sym_printsize,
  [anon_sym_choice_DASHdomain] = anon_sym_choice_DASHdomain,
  [anon_sym_DOTnumber_type] = anon_sym_DOTnumber_type,
  [anon_sym_DOTsymbol_type] = anon_sym_DOTsymbol_type,
  [anon_sym_DOTtype] = anon_sym_DOTtype,
  [anon_sym_LT_COLON] = anon_sym_LT_COLON,
  [anon_sym_number] = anon_sym_number,
  [anon_sym_symbol] = anon_sym_symbol,
  [anon_sym_unsigned] = anon_sym_unsigned,
  [anon_sym_float] = anon_sym_float,
  [sym_ident] = sym_ident,
  [sym_program] = sym_program,
  [sym_preprocessor] = sym_preprocessor,
  [sym_block_comment] = sym_block_comment,
  [sym_line_comment] = sym_line_comment,
  [sym_pragma] = sym_pragma,
  [sym_functor_decl] = sym_functor_decl,
  [sym_component_decl] = sym_component_decl,
  [sym_component_type] = sym_component_type,
  [sym_component_init] = sym_component_init,
  [sym_directive] = sym_directive,
  [sym__directive_qualifier] = sym__directive_qualifier,
  [sym__directive_value] = sym__directive_value,
  [sym_bool] = sym_bool,
  [sym__rule] = sym__rule,
  [sym_monotonic_rule] = sym_monotonic_rule,
  [sym_subsumptive_rule] = sym_subsumptive_rule,
  [sym_query_plan] = sym_query_plan,
  [sym_disjunction] = sym_disjunction,
  [sym_negation] = sym_negation,
  [sym_conjunction] = sym_conjunction,
  [sym__constraint] = sym__constraint,
  [sym_match] = sym_match,
  [sym_contains] = sym_contains,
  [sym_comparison] = sym_comparison,
  [sym_fact] = sym_fact,
  [sym_atom] = sym_atom,
  [sym__argument] = sym__argument,
  [sym_adt_constructor] = sym_adt_constructor,
  [sym_record_constructor] = sym_record_constructor,
  [sym_constant] = sym_constant,
  [sym_number] = sym_number,
  [sym_integer] = sym_integer,
  [sym_decimal] = sym_decimal,
  [sym_float] = sym_float,
  [sym_variable] = sym_variable,
  [sym_as] = sym_as,
  [sym_functor_call] = sym_functor_call,
  [sym_user_defined_functor] = sym_user_defined_functor,
  [sym_intrinsic_functor] = sym_intrinsic_functor,
  [sym_aggregator] = sym_aggregator,
  [sym_range] = sym_range,
  [sym__unary_operator] = sym__unary_operator,
  [sym_unary_op] = sym_unary_op,
  [sym_binary_op] = sym_binary_op,
  [sym_relation_decl] = sym_relation_decl,
  [sym__relation_qualifier] = sym__relation_qualifier,
  [sym_choice_domain] = sym_choice_domain,
  [sym_legacy_type_decl] = sym_legacy_type_decl,
  [sym_type_decl] = sym_type_decl,
  [sym_legacy_bare_type_decl] = sym_legacy_bare_type_decl,
  [sym_subtype] = sym_subtype,
  [sym_type_synonym] = sym_type_synonym,
  [sym_type_union] = sym_type_union,
  [sym_type_record] = sym_type_record,
  [sym_adt] = sym_adt,
  [sym__adt_branch] = sym__adt_branch,
  [sym__type_name] = sym__type_name,
  [sym_primitive_type] = sym_primitive_type,
  [sym_attribute] = sym_attribute,
  [sym_qualified_name] = sym_qualified_name,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_functor_decl_repeat1] = aux_sym_functor_decl_repeat1,
  [aux_sym_component_decl_repeat1] = aux_sym_component_decl_repeat1,
  [aux_sym_component_decl_repeat2] = aux_sym_component_decl_repeat2,
  [aux_sym_component_type_repeat1] = aux_sym_component_type_repeat1,
  [aux_sym_directive_repeat1] = aux_sym_directive_repeat1,
  [aux_sym_directive_repeat2] = aux_sym_directive_repeat2,
  [aux_sym_monotonic_rule_repeat1] = aux_sym_monotonic_rule_repeat1,
  [aux_sym_query_plan_repeat1] = aux_sym_query_plan_repeat1,
  [aux_sym_query_plan_repeat2] = aux_sym_query_plan_repeat2,
  [aux_sym_disjunction_repeat1] = aux_sym_disjunction_repeat1,
  [aux_sym_conjunction_repeat1] = aux_sym_conjunction_repeat1,
  [aux_sym_conjunction_repeat2] = aux_sym_conjunction_repeat2,
  [aux_sym_match_repeat1] = aux_sym_match_repeat1,
  [aux_sym_adt_constructor_repeat1] = aux_sym_adt_constructor_repeat1,
  [aux_sym_relation_decl_repeat1] = aux_sym_relation_decl_repeat1,
  [aux_sym_relation_decl_repeat2] = aux_sym_relation_decl_repeat2,
  [aux_sym_relation_decl_repeat3] = aux_sym_relation_decl_repeat3,
  [aux_sym_choice_domain_repeat1] = aux_sym_choice_domain_repeat1,
  [aux_sym_type_union_repeat1] = aux_sym_type_union_repeat1,
  [aux_sym_adt_repeat1] = aux_sym_adt_repeat1,
  [aux_sym__adt_branch_repeat1] = aux_sym__adt_branch_repeat1,
  [aux_sym_qualified_name_repeat1] = aux_sym_qualified_name_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUNDline] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_preprocessor_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTpragma] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTfunctor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stateful] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTcomp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOToverride] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTinit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTinput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTlimitsize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOToutput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTprintsize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTplan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contains] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_ipv4] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_decimal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_unsigned] = {
    .visible = true,
    .named = true,
  },
  [sym_hex] = {
    .visible = true,
    .named = true,
  },
  [sym_binary] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_float_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_nil] = {
    .visible = true,
    .named = true,
  },
  [sym_anonymous] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_acos] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_acosh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asinh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_atan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_atanh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cos] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cosh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_log] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sinh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tanh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_autoinc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_min] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ord] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_strlen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_substr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to_number] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to_unsigned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_count] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_range] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bnot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lnot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_land] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lxor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_band] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bxor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bshl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bshr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bshru] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTdecl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brie] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_btree] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_btree_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eqrel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_magic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_inline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_magic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_override] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_overridable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_printsize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_choice_DASHdomain] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTnumber_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTsymbol_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTtype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_number] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_symbol] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsigned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_preprocessor] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_pragma] = {
    .visible = true,
    .named = true,
  },
  [sym_functor_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_component_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_component_type] = {
    .visible = true,
    .named = true,
  },
  [sym_component_init] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__directive_qualifier] = {
    .visible = false,
    .named = true,
  },
  [sym__directive_value] = {
    .visible = false,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym__rule] = {
    .visible = false,
    .named = true,
  },
  [sym_monotonic_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_subsumptive_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_query_plan] = {
    .visible = true,
    .named = true,
  },
  [sym_disjunction] = {
    .visible = true,
    .named = true,
  },
  [sym_negation] = {
    .visible = true,
    .named = true,
  },
  [sym_conjunction] = {
    .visible = true,
    .named = true,
  },
  [sym__constraint] = {
    .visible = false,
    .named = true,
  },
  [sym_match] = {
    .visible = true,
    .named = true,
  },
  [sym_contains] = {
    .visible = true,
    .named = true,
  },
  [sym_comparison] = {
    .visible = true,
    .named = true,
  },
  [sym_fact] = {
    .visible = true,
    .named = true,
  },
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [sym__argument] = {
    .visible = false,
    .named = true,
  },
  [sym_adt_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_record_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_as] = {
    .visible = true,
    .named = true,
  },
  [sym_functor_call] = {
    .visible = true,
    .named = true,
  },
  [sym_user_defined_functor] = {
    .visible = true,
    .named = true,
  },
  [sym_intrinsic_functor] = {
    .visible = true,
    .named = true,
  },
  [sym_aggregator] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym__unary_operator] = {
    .visible = false,
    .named = true,
  },
  [sym_unary_op] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_op] = {
    .visible = true,
    .named = true,
  },
  [sym_relation_decl] = {
    .visible = true,
    .named = true,
  },
  [sym__relation_qualifier] = {
    .visible = false,
    .named = true,
  },
  [sym_choice_domain] = {
    .visible = true,
    .named = true,
  },
  [sym_legacy_type_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_type_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_legacy_bare_type_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_subtype] = {
    .visible = true,
    .named = true,
  },
  [sym_type_synonym] = {
    .visible = true,
    .named = true,
  },
  [sym_type_union] = {
    .visible = true,
    .named = true,
  },
  [sym_type_record] = {
    .visible = true,
    .named = true,
  },
  [sym_adt] = {
    .visible = true,
    .named = true,
  },
  [sym__adt_branch] = {
    .visible = false,
    .named = true,
  },
  [sym__type_name] = {
    .visible = false,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_functor_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_component_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_component_decl_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_component_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_monotonic_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_query_plan_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_query_plan_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_disjunction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conjunction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conjunction_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_match_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_adt_constructor_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_relation_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_relation_decl_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_relation_decl_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_choice_domain_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_union_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_adt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__adt_branch_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_qualified_name_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_argument = 1,
  field_atom = 2,
  field_attribute = 3,
  field_body = 4,
  field_branch = 5,
  field_component = 6,
  field_constructor = 7,
  field_expr = 8,
  field_field = 9,
  field_file = 10,
  field_functor = 11,
  field_head = 12,
  field_high = 13,
  field_key = 14,
  field_left = 15,
  field_line = 16,
  field_low = 17,
  field_name = 18,
  field_operand = 19,
  field_operator = 20,
  field_param = 21,
  field_plan = 22,
  field_qualifier = 23,
  field_relation = 24,
  field_return = 25,
  field_right = 26,
  field_step = 27,
  field_subsumed = 28,
  field_subsumes = 29,
  field_subtype = 30,
  field_super = 31,
  field_supertype = 32,
  field_type = 33,
  field_value = 34,
  field_var = 35,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_atom] = "atom",
  [field_attribute] = "attribute",
  [field_body] = "body",
  [field_branch] = "branch",
  [field_component] = "component",
  [field_constructor] = "constructor",
  [field_expr] = "expr",
  [field_field] = "field",
  [field_file] = "file",
  [field_functor] = "functor",
  [field_head] = "head",
  [field_high] = "high",
  [field_key] = "key",
  [field_left] = "left",
  [field_line] = "line",
  [field_low] = "low",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_param] = "param",
  [field_plan] = "plan",
  [field_qualifier] = "qualifier",
  [field_relation] = "relation",
  [field_return] = "return",
  [field_right] = "right",
  [field_step] = "step",
  [field_subsumed] = "subsumed",
  [field_subsumes] = "subsumes",
  [field_subtype] = "subtype",
  [field_super] = "super",
  [field_supertype] = "supertype",
  [field_type] = "type",
  [field_value] = "value",
  [field_var] = "var",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 13, .length = 1},
  [11] = {.index = 14, .length = 2},
  [12] = {.index = 16, .length = 1},
  [13] = {.index = 17, .length = 1},
  [14] = {.index = 18, .length = 4},
  [15] = {.index = 22, .length = 2},
  [16] = {.index = 24, .length = 2},
  [17] = {.index = 26, .length = 1},
  [18] = {.index = 27, .length = 1},
  [19] = {.index = 28, .length = 2},
  [20] = {.index = 30, .length = 2},
  [21] = {.index = 32, .length = 1},
  [22] = {.index = 33, .length = 2},
  [23] = {.index = 35, .length = 2},
  [24] = {.index = 37, .length = 2},
  [25] = {.index = 39, .length = 1},
  [26] = {.index = 40, .length = 4},
  [27] = {.index = 44, .length = 2},
  [28] = {.index = 46, .length = 2},
  [29] = {.index = 48, .length = 2},
  [30] = {.index = 50, .length = 1},
  [31] = {.index = 51, .length = 2},
  [32] = {.index = 53, .length = 2},
  [33] = {.index = 55, .length = 1},
  [34] = {.index = 56, .length = 7},
  [35] = {.index = 63, .length = 3},
  [36] = {.index = 66, .length = 3},
  [37] = {.index = 69, .length = 4},
  [38] = {.index = 73, .length = 1},
  [39] = {.index = 74, .length = 3},
  [40] = {.index = 77, .length = 3},
  [41] = {.index = 80, .length = 1},
  [42] = {.index = 81, .length = 3},
  [43] = {.index = 84, .length = 3},
  [44] = {.index = 87, .length = 2},
  [45] = {.index = 89, .length = 1},
  [46] = {.index = 90, .length = 3},
  [47] = {.index = 93, .length = 2},
  [48] = {.index = 95, .length = 1},
  [49] = {.index = 96, .length = 2},
  [50] = {.index = 98, .length = 2},
  [51] = {.index = 100, .length = 1},
  [52] = {.index = 101, .length = 2},
  [53] = {.index = 103, .length = 3},
  [54] = {.index = 106, .length = 1},
  [55] = {.index = 107, .length = 2},
  [56] = {.index = 109, .length = 4},
  [57] = {.index = 113, .length = 4},
  [58] = {.index = 117, .length = 1},
  [59] = {.index = 118, .length = 1},
  [60] = {.index = 119, .length = 1},
  [61] = {.index = 120, .length = 2},
  [62] = {.index = 122, .length = 2},
  [63] = {.index = 124, .length = 3},
  [64] = {.index = 127, .length = 4},
  [65] = {.index = 131, .length = 3},
  [66] = {.index = 134, .length = 3},
  [67] = {.index = 137, .length = 4},
  [68] = {.index = 141, .length = 3},
  [69] = {.index = 144, .length = 3},
  [70] = {.index = 147, .length = 2},
  [71] = {.index = 149, .length = 3},
  [72] = {.index = 152, .length = 1},
  [73] = {.index = 153, .length = 2},
  [74] = {.index = 155, .length = 2},
  [75] = {.index = 157, .length = 2},
  [76] = {.index = 159, .length = 2},
  [77] = {.index = 161, .length = 3},
  [78] = {.index = 164, .length = 2},
  [79] = {.index = 166, .length = 3},
  [80] = {.index = 169, .length = 3},
  [81] = {.index = 172, .length = 4},
  [82] = {.index = 176, .length = 5},
  [83] = {.index = 181, .length = 5},
  [84] = {.index = 186, .length = 4},
  [85] = {.index = 190, .length = 3},
  [86] = {.index = 193, .length = 3},
  [87] = {.index = 196, .length = 5},
  [88] = {.index = 201, .length = 4},
  [89] = {.index = 205, .length = 2},
  [90] = {.index = 207, .length = 3},
  [91] = {.index = 210, .length = 2},
  [92] = {.index = 212, .length = 6},
  [93] = {.index = 218, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 1},
  [1] =
    {field_name, 0},
  [2] =
    {field_subtype, 1},
    {field_supertype, 0},
  [4] =
    {field_relation, 1},
  [5] =
    {field_atom, 0},
  [6] =
    {field_file, 2},
    {field_line, 1},
  [8] =
    {field_key, 1},
    {field_value, 2},
  [10] =
    {field_relation, 1},
    {field_relation, 2, .inherited = true},
  [12] =
    {field_relation, 0},
  [13] =
    {field_type, 1},
  [14] =
    {field_component, 3},
    {field_name, 1},
  [16] =
    {field_qualifier, 3},
  [17] =
    {field_head, 1},
  [18] =
    {field_branch, 2},
    {field_constructor, 2, .inherited = true},
    {field_field, 2, .inherited = true},
    {field_left, 0},
  [22] =
    {field_left, 0},
    {field_right, 2},
  [24] =
    {field_relation, 0, .inherited = true},
    {field_relation, 1, .inherited = true},
  [26] =
    {field_constructor, 1},
  [27] =
    {field_name, 1},
  [28] =
    {field_body, 2},
    {field_head, 0},
  [30] =
    {field_operand, 1},
    {field_operator, 0},
  [32] =
    {field_argument, 1},
  [33] =
    {field_argument, 2},
    {field_relation, 0},
  [35] =
    {field_argument, 2, .inherited = true},
    {field_relation, 0},
  [37] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [39] =
    {field_attribute, 1},
  [40] =
    {field_attribute, 0, .inherited = true},
    {field_attribute, 1, .inherited = true},
    {field_type, 0, .inherited = true},
    {field_type, 1, .inherited = true},
  [44] =
    {field_name, 0},
    {field_param, 2},
  [46] =
    {field_body, 3},
    {field_type, 1},
  [48] =
    {field_type, 2},
    {field_var, 0},
  [50] =
    {field_qualifier, 4},
  [51] =
    {field_head, 1},
    {field_qualifier, 4},
  [53] =
    {field_head, 1},
    {field_head, 2},
  [55] =
    {field_left, 0},
  [56] =
    {field_branch, 2},
    {field_branch, 3},
    {field_constructor, 2, .inherited = true},
    {field_constructor, 3, .inherited = true},
    {field_field, 2, .inherited = true},
    {field_field, 3, .inherited = true},
    {field_left, 0},
  [63] =
    {field_branch, 2},
    {field_branch, 3},
    {field_left, 0},
  [66] =
    {field_key, 3, .inherited = true},
    {field_relation, 1},
    {field_value, 3, .inherited = true},
  [69] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [73] =
    {field_body, 2},
  [74] =
    {field_body, 2},
    {field_head, 0},
    {field_plan, 4},
  [77] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [80] =
    {field_functor, 0},
  [81] =
    {field_body, 3},
    {field_head, 0},
    {field_head, 1},
  [84] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_relation, 0},
  [87] =
    {field_name, 1},
    {field_return, 5},
  [89] =
    {field_param, 1},
  [90] =
    {field_name, 0},
    {field_param, 2},
    {field_param, 3, .inherited = true},
  [93] =
    {field_param, 0, .inherited = true},
    {field_param, 1, .inherited = true},
  [95] =
    {field_super, 1},
  [96] =
    {field_super, 3},
    {field_type, 1},
  [98] =
    {field_super, 0, .inherited = true},
    {field_super, 1, .inherited = true},
  [100] =
    {field_qualifier, 5},
  [101] =
    {field_head, 1},
    {field_qualifier, 5},
  [103] =
    {field_head, 1},
    {field_head, 2},
    {field_qualifier, 5},
  [106] =
    {field_constructor, 0},
  [107] =
    {field_constructor, 1, .inherited = true},
    {field_field, 1, .inherited = true},
  [109] =
    {field_constructor, 0, .inherited = true},
    {field_constructor, 1, .inherited = true},
    {field_field, 0, .inherited = true},
    {field_field, 1, .inherited = true},
  [113] =
    {field_key, 4, .inherited = true},
    {field_relation, 1},
    {field_relation, 2, .inherited = true},
    {field_value, 4, .inherited = true},
  [117] =
    {field_argument, 2},
  [118] =
    {field_argument, 2, .inherited = true},
  [119] =
    {field_body, 3},
  [120] =
    {field_argument, 2},
    {field_functor, 0},
  [122] =
    {field_argument, 2, .inherited = true},
    {field_functor, 0},
  [124] =
    {field_body, 4},
    {field_subsumed, 0},
    {field_subsumes, 2},
  [127] =
    {field_body, 3},
    {field_head, 0},
    {field_head, 1},
    {field_plan, 5},
  [131] =
    {field_name, 1},
    {field_return, 6},
    {field_type, 3},
  [134] =
    {field_attribute, 3},
    {field_name, 1},
    {field_return, 6},
  [137] =
    {field_attribute, 3, .inherited = true},
    {field_name, 1},
    {field_return, 6},
    {field_type, 3, .inherited = true},
  [141] =
    {field_body, 5},
    {field_super, 3},
    {field_type, 1},
  [144] =
    {field_super, 3},
    {field_super, 4, .inherited = true},
    {field_type, 1},
  [147] =
    {field_head, 1},
    {field_qualifier, 6},
  [149] =
    {field_head, 1},
    {field_head, 2},
    {field_qualifier, 6},
  [152] =
    {field_field, 1},
  [153] =
    {field_constructor, 0},
    {field_field, 2},
  [155] =
    {field_constructor, 0},
    {field_field, 2, .inherited = true},
  [157] =
    {field_field, 0, .inherited = true},
    {field_field, 1, .inherited = true},
  [159] =
    {field_key, 1},
    {field_value, 3},
  [161] =
    {field_key, 3},
    {field_relation, 1},
    {field_value, 5},
  [164] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
  [166] =
    {field_body, 2},
    {field_body, 3},
    {field_body, 4},
  [169] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_functor, 0},
  [172] =
    {field_body, 4},
    {field_plan, 6},
    {field_subsumed, 0},
    {field_subsumes, 2},
  [176] =
    {field_attribute, 4, .inherited = true},
    {field_name, 1},
    {field_return, 7},
    {field_type, 3},
    {field_type, 4, .inherited = true},
  [181] =
    {field_attribute, 3},
    {field_attribute, 4, .inherited = true},
    {field_name, 1},
    {field_return, 7},
    {field_type, 4, .inherited = true},
  [186] =
    {field_body, 6},
    {field_super, 3},
    {field_super, 4, .inherited = true},
    {field_type, 1},
  [190] =
    {field_head, 1},
    {field_head, 2},
    {field_qualifier, 7},
  [193] =
    {field_constructor, 0},
    {field_field, 2},
    {field_field, 3, .inherited = true},
  [196] =
    {field_key, 3},
    {field_key, 6, .inherited = true},
    {field_relation, 1},
    {field_value, 5},
    {field_value, 6, .inherited = true},
  [201] =
    {field_key, 4},
    {field_relation, 1},
    {field_relation, 2, .inherited = true},
    {field_value, 6},
  [205] =
    {field_expr, 2},
    {field_type, 4},
  [207] =
    {field_body, 3},
    {field_body, 4},
    {field_body, 5},
  [210] =
    {field_high, 4},
    {field_low, 2},
  [212] =
    {field_key, 4},
    {field_key, 7, .inherited = true},
    {field_relation, 1},
    {field_relation, 2, .inherited = true},
    {field_value, 6},
    {field_value, 7, .inherited = true},
  [218] =
    {field_high, 4},
    {field_low, 2},
    {field_step, 6},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_ident_character_set_1(int32_t c) {
  return (c < 'a'
    ? (c < 'A'
      ? (c < '?'
        ? (c >= '0' && c <= '9')
        : c <= '?')
      : (c <= 'Z' || c == '_'))
    : (c <= 'e' || (c < 't'
      ? (c < 'o'
        ? (c >= 'g' && c <= 'm')
        : c <= 'r')
      : (c <= 't' || (c >= 'v' && c <= 'z')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(305);
      if (lookahead == '!') ADVANCE(354);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(148);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '%') ADVANCE(458);
      if (lookahead == '&') ADVANCE(469);
      if (lookahead == '(') ADVANCE(320);
      if (lookahead == ')') ADVANCE(322);
      if (lookahead == '*') ADVANCE(457);
      if (lookahead == '+') ADVANCE(456);
      if (lookahead == ',') ADVANCE(321);
      if (lookahead == '-') ADVANCE(454);
      if (lookahead == '.') ADVANCE(347);
      if (lookahead == '/') ADVANCE(313);
      if (lookahead == '0') ADVANCE(307);
      if (lookahead == ':') ADVANCE(324);
      if (lookahead == ';') ADVANCE(352);
      if (lookahead == '<') ADVANCE(332);
      if (lookahead == '=') ADVANCE(336);
      if (lookahead == '>') ADVANCE(334);
      if (lookahead == '@') ADVANCE(390);
      if (lookahead == '[') ADVANCE(362);
      if (lookahead == ']') ADVANCE(363);
      if (lookahead == '^') ADVANCE(459);
      if (lookahead == '_') ADVANCE(386);
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'c') ADVANCE(34);
      if (lookahead == 'e') ADVANCE(224);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(173);
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == 'm') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(225);
      if (lookahead == 'p') ADVANCE(241);
      if (lookahead == 'r') ADVANCE(42);
      if (lookahead == 's') ADVANCE(131);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(174);
      if (lookahead == '{') ADVANCE(328);
      if (lookahead == '|') ADVANCE(471);
      if (lookahead == '}') ADVANCE(330);
      if (lookahead == '~') ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(353);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '(') ADVANCE(320);
      if (lookahead == ')') ADVANCE(322);
      if (lookahead == ',') ADVANCE(321);
      if (lookahead == '-') ADVANCE(454);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '0') ADVANCE(373);
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == 'd' ||
          ('f' <= lookahead && lookahead <= 'k') ||
          lookahead == 'p' ||
          lookahead == 'q' ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == '@') ADVANCE(390);
      if (lookahead == '[') ADVANCE(362);
      if (lookahead == ']') ADVANCE(363);
      if (lookahead == '_') ADVANCE(387);
      if (lookahead == 'a') ADVANCE(520);
      if (lookahead == 'b') ADVANCE(622);
      if (lookahead == 'c') ADVANCE(533);
      if (lookahead == 'e') ADVANCE(689);
      if (lookahead == 'l') ADVANCE(531);
      if (lookahead == 'm') ADVANCE(523);
      if (lookahead == 'n') ADVANCE(586);
      if (lookahead == 'o') ADVANCE(648);
      if (lookahead == 'r') ADVANCE(694);
      if (lookahead == 's') ADVANCE(524);
      if (lookahead == 't') ADVANCE(534);
      if (lookahead == '~') ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(376);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(353);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '(') ADVANCE(320);
      if (lookahead == ',') ADVANCE(321);
      if (lookahead == '-') ADVANCE(454);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '/') ADVANCE(312);
      if (lookahead == '0') ADVANCE(373);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == 'd' ||
          ('g' <= lookahead && lookahead <= 'k') ||
          lookahead == 'p' ||
          lookahead == 'q' ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == '@') ADVANCE(390);
      if (lookahead == '[') ADVANCE(362);
      if (lookahead == '_') ADVANCE(387);
      if (lookahead == 'a') ADVANCE(520);
      if (lookahead == 'b') ADVANCE(622);
      if (lookahead == 'c') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(689);
      if (lookahead == 'f') ADVANCE(693);
      if (lookahead == 'l') ADVANCE(531);
      if (lookahead == 'm') ADVANCE(522);
      if (lookahead == 'n') ADVANCE(586);
      if (lookahead == 'o') ADVANCE(648);
      if (lookahead == 'r') ADVANCE(694);
      if (lookahead == 's') ADVANCE(524);
      if (lookahead == 't') ADVANCE(526);
      if (lookahead == '~') ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(376);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '%') ADVANCE(458);
      if (lookahead == '&') ADVANCE(469);
      if (lookahead == '(') ADVANCE(320);
      if (lookahead == ')') ADVANCE(322);
      if (lookahead == '*') ADVANCE(457);
      if (lookahead == '+') ADVANCE(456);
      if (lookahead == ',') ADVANCE(321);
      if (lookahead == '-') ADVANCE(453);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == '/') ADVANCE(312);
      if (lookahead == ':') ADVANCE(323);
      if (lookahead == ';') ADVANCE(352);
      if (lookahead == '<') ADVANCE(333);
      if (lookahead == '=') ADVANCE(336);
      if (lookahead == '>') ADVANCE(334);
      if (lookahead == ']') ADVANCE(363);
      if (lookahead == '^') ADVANCE(459);
      if (lookahead == 'b') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(41);
      if (lookahead == '|') ADVANCE(471);
      if (lookahead == '}') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '%') ADVANCE(458);
      if (lookahead == '&') ADVANCE(469);
      if (lookahead == ')') ADVANCE(322);
      if (lookahead == '*') ADVANCE(457);
      if (lookahead == '+') ADVANCE(456);
      if (lookahead == ',') ADVANCE(321);
      if (lookahead == '-') ADVANCE(453);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == '/') ADVANCE(312);
      if (lookahead == ':') ADVANCE(324);
      if (lookahead == ';') ADVANCE(352);
      if (lookahead == '<') ADVANCE(333);
      if (lookahead == '=') ADVANCE(336);
      if (lookahead == '>') ADVANCE(334);
      if (lookahead == ']') ADVANCE(363);
      if (lookahead == '^') ADVANCE(459);
      if (lookahead == 'b') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(41);
      if (lookahead == '|') ADVANCE(471);
      if (lookahead == '}') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(368);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(369);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(148);
      if (lookahead == '(') ADVANCE(320);
      if (lookahead == ',') ADVANCE(321);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '<') ADVANCE(24);
      if (lookahead == '=') ADVANCE(336);
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == '{') ADVANCE(328);
      if (lookahead == '|') ADVANCE(470);
      if (lookahead == '}') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(322);
      if (lookahead == ',') ADVANCE(321);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '<') ADVANCE(26);
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'r') ||
          lookahead == 't' ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == '[') ADVANCE(362);
      if (lookahead == 'f') ADVANCE(609);
      if (lookahead == 'n') ADVANCE(688);
      if (lookahead == 's') ADVANCE(691);
      if (lookahead == 'u') ADVANCE(635);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(310);
      if (lookahead == '/') ADVANCE(314);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(311);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(345);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(77);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(367);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(382);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(510);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(359);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(350);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(136);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(111);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(276);
      END_STATE();
    case 30:
      if (lookahead == '_') ADVANCE(278);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(318);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(254);
      if (lookahead == 'h') ADVANCE(206);
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'n') ADVANCE(207);
      if (lookahead == 'o') ADVANCE(227);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == 's') ADVANCE(120);
      if (lookahead == 't') ADVANCE(236);
      if (lookahead == 'x') ADVANCE(208);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'o') ADVANCE(227);
      if (lookahead == 's') ADVANCE(120);
      if (lookahead == 'x') ADVANCE(208);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(187);
      if (lookahead == 'n') ADVANCE(211);
      if (lookahead == 'o') ADVANCE(112);
      if (lookahead == 'x') ADVANCE(210);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(187);
      if (lookahead == 'o') ADVANCE(228);
      if (lookahead == 'x') ADVANCE(210);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(264);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 52:
      if (lookahead == 'b') ADVANCE(250);
      if (lookahead == 'm') ADVANCE(443);
      END_STATE();
    case 53:
      if (lookahead == 'b') ADVANCE(212);
      END_STATE();
    case 54:
      if (lookahead == 'b') ADVANCE(213);
      END_STATE();
    case 55:
      if (lookahead == 'b') ADVANCE(101);
      END_STATE();
    case 56:
      if (lookahead == 'b') ADVANCE(104);
      END_STATE();
    case 57:
      if (lookahead == 'b') ADVANCE(158);
      END_STATE();
    case 58:
      if (lookahead == 'b') ADVANCE(105);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == 'f') ADVANCE(281);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == 'l') ADVANCE(125);
      if (lookahead == 'n') ADVANCE(286);
      if (lookahead == 'o') ADVANCE(288);
      if (lookahead == 'p') ADVANCE(226);
      if (lookahead == 's') ADVANCE(292);
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == 'f') ADVANCE(281);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == 'l') ADVANCE(125);
      if (lookahead == 'n') ADVANCE(286);
      if (lookahead == 'o') ADVANCE(288);
      if (lookahead == 'p') ADVANCE(161);
      if (lookahead == 's') ADVANCE(292);
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(490);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(419);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(494);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(205);
      if (lookahead == 's') ADVANCE(388);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == 'u') ADVANCE(267);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(151);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(273);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(427);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(463);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(460);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(515);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(439);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(209);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(480);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(509);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(482);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(447);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(492);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(504);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(507);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(484);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 110:
      if (lookahead == 'f') ADVANCE(280);
      END_STATE();
    case 111:
      if (lookahead == 'f') ADVANCE(159);
      if (lookahead == 'n') ADVANCE(289);
      if (lookahead == 's') ADVANCE(275);
      if (lookahead == 'u') ADVANCE(201);
      END_STATE();
    case 112:
      if (lookahead == 'g') ADVANCE(409);
      if (lookahead == 'r') ADVANCE(461);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(437);
      END_STATE();
    case 114:
      if (lookahead == 'g') ADVANCE(167);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(85);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(197);
      END_STATE();
    case 117:
      if (lookahead == 'g') ADVANCE(199);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(129);
      if (lookahead == 't') ADVANCE(65);
      if (lookahead == 'x') ADVANCE(423);
      END_STATE();
    case 119:
      if (lookahead == 'g') ADVANCE(130);
      END_STATE();
    case 120:
      if (lookahead == 'h') ADVANCE(150);
      END_STATE();
    case 121:
      if (lookahead == 'h') ADVANCE(355);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == 'o') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(178);
      if (lookahead == 't') ADVANCE(43);
      if (lookahead == 'u') ADVANCE(52);
      if (lookahead == 'y') ADVANCE(165);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(257);
      if (lookahead == 'p') ADVANCE(283);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(200);
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(272);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(384);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(466);
      if (lookahead == 'r') ADVANCE(467);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(479);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(486);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(513);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(325);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(249);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(135);
      if (lookahead == 'p') ADVANCE(282);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 164:
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 165:
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(218);
      END_STATE();
    case 167:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(146);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 171:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 172:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(425);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(411);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(415);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(395);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(399);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(441);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(429);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(506);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(351);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(265);
      if (lookahead == 's') ADVANCE(403);
      if (lookahead == 'u') ADVANCE(194);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 206:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 207:
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 208:
      if (lookahead == 'o') ADVANCE(229);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(230);
      END_STATE();
    case 211:
      if (lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 212:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 213:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(233);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 217:
      if (lookahead == 'p') ADVANCE(407);
      END_STATE();
    case 218:
      if (lookahead == 'p') ADVANCE(327);
      END_STATE();
    case 219:
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 220:
      if (lookahead == 'p') ADVANCE(95);
      END_STATE();
    case 221:
      if (lookahead == 'p') ADVANCE(96);
      END_STATE();
    case 222:
      if (lookahead == 'p') ADVANCE(284);
      END_STATE();
    case 223:
      if (lookahead == 'p') ADVANCE(285);
      END_STATE();
    case 224:
      if (lookahead == 'q') ADVANCE(237);
      if (lookahead == 'x') ADVANCE(217);
      END_STATE();
    case 225:
      if (lookahead == 'r') ADVANCE(69);
      if (lookahead == 'u') ADVANCE(266);
      if (lookahead == 'v') ADVANCE(99);
      END_STATE();
    case 226:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(464);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(461);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(465);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(462);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(511);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(431);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(319);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(435);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 244:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 245:
      if (lookahead == 's') ADVANCE(391);
      END_STATE();
    case 246:
      if (lookahead == 's') ADVANCE(357);
      END_STATE();
    case 247:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 248:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 249:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 250:
      if (lookahead == 's') ADVANCE(268);
      END_STATE();
    case 251:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 252:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 253:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(449);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(451);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(335);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(445);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(517);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(500);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(337);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(502);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(339);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(433);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 279:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 280:
      if (lookahead == 'u') ADVANCE(154);
      END_STATE();
    case 281:
      if (lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 282:
      if (lookahead == 'u') ADVANCE(260);
      END_STATE();
    case 283:
      if (lookahead == 'u') ADVANCE(261);
      END_STATE();
    case 284:
      if (lookahead == 'u') ADVANCE(262);
      END_STATE();
    case 285:
      if (lookahead == 'u') ADVANCE(263);
      END_STATE();
    case 286:
      if (lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 287:
      if (lookahead == 'u') ADVANCE(277);
      END_STATE();
    case 288:
      if (lookahead == 'u') ADVANCE(277);
      if (lookahead == 'v') ADVANCE(109);
      END_STATE();
    case 289:
      if (lookahead == 'u') ADVANCE(172);
      END_STATE();
    case 290:
      if (lookahead == 'y') ADVANCE(219);
      END_STATE();
    case 291:
      if (lookahead == 'y') ADVANCE(220);
      END_STATE();
    case 292:
      if (lookahead == 'y') ADVANCE(169);
      END_STATE();
    case 293:
      if (lookahead == 'y') ADVANCE(221);
      END_STATE();
    case 294:
      if (lookahead == 'z') ADVANCE(91);
      END_STATE();
    case 295:
      if (lookahead == 'z') ADVANCE(92);
      END_STATE();
    case 296:
      if (lookahead == 'z') ADVANCE(93);
      END_STATE();
    case 297:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(379);
      END_STATE();
    case 298:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 299:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(383);
      END_STATE();
    case 300:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
      END_STATE();
    case 301:
      if (eof) ADVANCE(305);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(148);
      if (lookahead == '(') ADVANCE(320);
      if (lookahead == ')') ADVANCE(322);
      if (lookahead == ',') ADVANCE(321);
      if (lookahead == '-') ADVANCE(298);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(370);
      if (lookahead == ':') ADVANCE(323);
      if (lookahead == '<') ADVANCE(331);
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == ']') ADVANCE(363);
      if (lookahead == '{') ADVANCE(328);
      if (lookahead == '|') ADVANCE(470);
      if (lookahead == '}') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(301)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(371);
      END_STATE();
    case 302:
      if (eof) ADVANCE(305);
      if (lookahead == '#') ADVANCE(148);
      if (lookahead == '(') ADVANCE(320);
      if (lookahead == ',') ADVANCE(321);
      if (lookahead == '.') ADVANCE(348);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '<') ADVANCE(24);
      if (lookahead == '=') ADVANCE(336);
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == '{') ADVANCE(328);
      if (lookahead == '|') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(302)
      END_STATE();
    case 303:
      if (eof) ADVANCE(305);
      if (lookahead == '#') ADVANCE(148);
      if (lookahead == '.') ADVANCE(348);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 's') ADVANCE(682);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(303)
      END_STATE();
    case 304:
      if (eof) ADVANCE(305);
      if (lookahead == '#') ADVANCE(148);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'd' ||
          ('f' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'l') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'b') ADVANCE(535);
      if (lookahead == 'c') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(647);
      if (lookahead == 'i') ADVANCE(621);
      if (lookahead == 'm') ADVANCE(695);
      if (lookahead == 'n') ADVANCE(638);
      if (lookahead == 'o') ADVANCE(538);
      if (lookahead == 'p') ADVANCE(658);
      if (lookahead == '}') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(304)
      END_STATE();
    case 305:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_POUNDline);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == 'b') ADVANCE(297);
      if (lookahead == 'u') ADVANCE(377);
      if (lookahead == 'x') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == 'u') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '*') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(12);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(310);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_DOTpragma);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_DOTfunctor);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-') ADVANCE(345);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_stateful);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_stateful);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_DOTcomp);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_DOToverride);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == ':') ADVANCE(510);
      if (lookahead == '<') ADVANCE(476);
      if (lookahead == '=') ADVANCE(350);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(476);
      if (lookahead == '=') ADVANCE(350);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(360);
      if (lookahead == '>') ADVANCE(477);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_DOTinit);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_DOTinput);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_DOTlimitsize);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_DOToutput);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_DOTprintsize);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == 'f') ADVANCE(281);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == 'l') ADVANCE(125);
      if (lookahead == 'n') ADVANCE(286);
      if (lookahead == 'o') ADVANCE(288);
      if (lookahead == 'p') ADVANCE(226);
      if (lookahead == 's') ADVANCE(292);
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == 'f') ADVANCE(281);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == 'l') ADVANCE(125);
      if (lookahead == 'n') ADVANCE(286);
      if (lookahead == 'o') ADVANCE(287);
      if (lookahead == 'p') ADVANCE(226);
      if (lookahead == 's') ADVANCE(292);
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == 'l') ADVANCE(125);
      if (lookahead == 'o') ADVANCE(288);
      if (lookahead == 'p') ADVANCE(244);
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_DOTplan);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(359);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_match);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_contains);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_ipv4);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_ipv4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_ipv4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(365);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_ipv4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(368);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == 'b') ADVANCE(297);
      if (lookahead == 'u') ADVANCE(377);
      if (lookahead == 'x') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(371);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == 'u') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == 'b') ADVANCE(297);
      if (lookahead == 'u') ADVANCE(377);
      if (lookahead == 'x') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(375);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(371);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(374);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(375);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_unsigned);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(383);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(381);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_anonymous);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_anonymous);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'i') ADVANCE(617);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_acos);
      if (lookahead == 'h') ADVANCE(393);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_acos);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'g') ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'h') ADVANCE(394);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_acosh);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_acosh);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_asin);
      if (lookahead == 'h') ADVANCE(397);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_asin);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'g') ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'h') ADVANCE(398);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_asinh);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_asinh);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_atan);
      if (lookahead == 'h') ADVANCE(401);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_atan);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'g') ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'h') ADVANCE(402);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_atanh);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_atanh);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_cos);
      if (lookahead == 'h') ADVANCE(405);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_cos);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'g') ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'h') ADVANCE(406);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_cosh);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_cosh);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_exp);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_exp);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_log);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_log);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_sin);
      if (lookahead == 'h') ADVANCE(413);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_sin);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'g') ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'h') ADVANCE(414);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_sinh);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_sinh);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_tan);
      if (lookahead == 'h') ADVANCE(417);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_tan);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'g') ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'h') ADVANCE(418);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_tanh);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_tanh);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_autoinc);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_autoinc);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_cat);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_cat);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_ord);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_ord);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_strlen);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_strlen);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_substr);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_substr);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_to_float);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_to_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_to_number);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_to_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_to_string);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_to_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_to_unsigned);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_to_unsigned);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_mean);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_mean);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_sum);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_count);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_range);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_bnot);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_bnot);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_lnot);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_lnot);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(474);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '^') ADVANCE(475);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_land);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_lor);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_lxor);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_band);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_bor);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_bxor);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_bshl);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_bshr);
      if (lookahead == 'u') ADVANCE(468);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_bshru);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(472);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(473);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_CARET_CARET);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '>') ADVANCE(478);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_DOTdecl);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_brie);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_brie);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_btree);
      if (lookahead == '_') ADVANCE(75);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_btree);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == '_') ADVANCE(552);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_btree_delete);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_btree_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_eqrel);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_eqrel);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_inline);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_magic);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_magic);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_no_inline);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_no_inline);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_no_magic);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_no_magic);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_override);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_overridable);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_overridable);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_input);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_output);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_printsize);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_printsize);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_choice_DASHdomain);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_DOTnumber_type);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_DOTsymbol_type);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_DOTtype);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_symbol);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'r') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'c') ADVANCE(636);
      if (lookahead == 's') ADVANCE(389);
      if (lookahead == 't') ADVANCE(696);
      if (lookahead == 'u') ADVANCE(677);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_ident);
      if (sym_ident_character_set_1(lookahead)) ADVANCE(705);
      if (lookahead == 'f') ADVANCE(605);
      if (lookahead == 'n') ADVANCE(684);
      if (lookahead == 's') ADVANCE(678);
      if (lookahead == 'u') ADVANCE(626);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'a') ADVANCE(537);
      if (lookahead == 'e') ADVANCE(697);
      if (lookahead == 'i') ADVANCE(614);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'a') ADVANCE(690);
      if (lookahead == 'e') ADVANCE(697);
      if (lookahead == 'i') ADVANCE(614);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 's') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'i') ADVANCE(615);
      if (lookahead == 't') ADVANCE(652);
      if (lookahead == 'u') ADVANCE(527);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'r') ||
          lookahead == 't' ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'n') ADVANCE(675);
      if (lookahead == 's') ADVANCE(404);
      if (lookahead == 'u') ADVANCE(628);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'n') ||
          lookahead == 'p' ||
          lookahead == 'q' ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'a') ADVANCE(616);
      if (lookahead == 'o') ADVANCE(703);
      if (lookahead == 'r') ADVANCE(683);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          ('c' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'b') ADVANCE(663);
      if (lookahead == 'm') ADVANCE(444);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'a') ADVANCE(542);
      if (lookahead == 'e') ADVANCE(497);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'i') ADVANCE(629);
      if (lookahead == 'm') ADVANCE(701);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'l') ADVANCE(597);
      if (lookahead == 'p') ADVANCE(686);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'n') ADVANCE(642);
      if (lookahead == 'o') ADVANCE(576);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'a') ADVANCE(666);
      if (lookahead == 'o') ADVANCE(525);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'a') ADVANCE(666);
      if (lookahead == 'o') ADVANCE(536);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'a') ADVANCE(616);
      if (lookahead == 'o') ADVANCE(703);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          lookahead == 's' ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'r') ADVANCE(592);
      if (lookahead == 't') ADVANCE(655);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          lookahead == 't' ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 's') ADVANCE(404);
      if (lookahead == 'u') ADVANCE(628);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(705);
      if (lookahead == 't') ADVANCE(543);
      if (lookahead == 'x') ADVANCE(424);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('w' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'u') ADVANCE(674);
      if (lookahead == 'v') ADVANCE(569);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'b') ADVANCE(566);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'b') ADVANCE(643);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'b') ADVANCE(570);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'b') ADVANCE(608);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'c') ADVANCE(583);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'c') ADVANCE(420);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'c') ADVANCE(491);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'c') ADVANCE(495);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'c') ADVANCE(558);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'd') ADVANCE(428);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'd') ADVANCE(440);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'd') ADVANCE(528);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'd') ADVANCE(516);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'd') ADVANCE(574);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'e') ADVANCE(448);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'e') ADVANCE(481);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'e') ADVANCE(483);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'e') ADVANCE(519);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'e') ADVANCE(493);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'e') ADVANCE(499);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'e') ADVANCE(485);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'e') ADVANCE(575);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'e') ADVANCE(549);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'e') ADVANCE(650);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'e') ADVANCE(601);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'e') ADVANCE(551);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'e') ADVANCE(654);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'e') ADVANCE(651);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'e') ADVANCE(557);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'e') ADVANCE(620);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'e') ADVANCE(680);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'e') ADVANCE(607);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'f') ADVANCE(685);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'g') ADVANCE(410);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'g') ADVANCE(438);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'g') ADVANCE(555);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'g') ADVANCE(590);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'g') ADVANCE(591);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'g') ADVANCE(630);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'g') ADVANCE(634);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'g') ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'h') ADVANCE(356);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'g') ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'h') ADVANCE(641);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'i') ADVANCE(692);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'i') ADVANCE(600);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'i') ADVANCE(581);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'i') ADVANCE(547);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'i') ADVANCE(550);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'i') ADVANCE(545);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'i') ADVANCE(546);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'i') ADVANCE(556);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'i') ADVANCE(624);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'i') ADVANCE(627);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'i') ADVANCE(625);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'i') ADVANCE(631);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'i') ADVANCE(632);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'i') ADVANCE(633);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'i') ADVANCE(582);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'l') ADVANCE(385);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'l') ADVANCE(487);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'l') ADVANCE(326);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'l') ADVANCE(514);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'l') ADVANCE(661);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'l') ADVANCE(640);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'l') ADVANCE(572);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'l') ADVANCE(573);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'l') ADVANCE(562);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'l') ADVANCE(644);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'l') ADVANCE(598);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'm') ADVANCE(539);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'm') ADVANCE(540);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'm') ADVANCE(541);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'n') ADVANCE(426);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'n') ADVANCE(412);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'n') ADVANCE(416);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'n') ADVANCE(396);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'n') ADVANCE(400);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'n') ADVANCE(442);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'n') ADVANCE(430);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'n') ADVANCE(530);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'n') ADVANCE(639);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'n') ADVANCE(578);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'n') ADVANCE(544);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'n') ADVANCE(577);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'n') ADVANCE(662);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'n') ADVANCE(660);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'n') ADVANCE(669);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'n') ADVANCE(610);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'n') ADVANCE(565);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'n') ADVANCE(679);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'n') ADVANCE(559);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'n') ADVANCE(560);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'n') ADVANCE(568);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'n') ADVANCE(665);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'o') ADVANCE(659);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'o') ADVANCE(593);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'o') ADVANCE(704);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'o') ADVANCE(667);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'o') ADVANCE(698);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'o') ADVANCE(588);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'o') ADVANCE(668);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'o') ADVANCE(603);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'o') ADVANCE(699);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'p') ADVANCE(408);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'p') ADVANCE(687);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'p') ||
          ('r' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'q') ADVANCE(656);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'r') ADVANCE(548);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'r') ADVANCE(432);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'r') ADVANCE(436);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'r') ADVANCE(512);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'r') ADVANCE(606);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'r') ADVANCE(589);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'r') ADVANCE(653);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'r') ADVANCE(571);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'r') ADVANCE(567);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'r') ADVANCE(595);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'r') ADVANCE(596);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 's') ADVANCE(392);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 's') ADVANCE(358);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 's') ADVANCE(554);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 's') ADVANCE(587);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 's') ADVANCE(676);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 's') ADVANCE(585);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 's') ADVANCE(599);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 't') ADVANCE(422);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 't') ADVANCE(450);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 't') ADVANCE(452);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 't') ADVANCE(446);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 't') ADVANCE(501);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 't') ADVANCE(503);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 't') ADVANCE(518);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 't') ADVANCE(646);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 't') ADVANCE(700);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 't') ADVANCE(649);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 't') ADVANCE(637);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 't') ADVANCE(657);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 't') ADVANCE(664);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 't') ADVANCE(563);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 't') ADVANCE(564);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 't') ADVANCE(702);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'u') ADVANCE(553);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'u') ADVANCE(611);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'u') ADVANCE(602);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'u') ADVANCE(671);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'u') ADVANCE(672);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'u') ADVANCE(613);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(705);
      if (lookahead == 'x') ADVANCE(645);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(705);
      if (lookahead == 'x') ADVANCE(424);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(705);
      if (lookahead == 'y') ADVANCE(612);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(705);
      if (lookahead == 'z') ADVANCE(561);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'a') ADVANCE(604);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'a') ADVANCE(623);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'a') ADVANCE(579);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'a') ADVANCE(618);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'a') ADVANCE(619);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'a') ADVANCE(670);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'a') ADVANCE(673);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'a') ADVANCE(594);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'a') ADVANCE(580);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == 'a') ADVANCE(681);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == '_') ADVANCE(521);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      if (lookahead == '_') ADVANCE(529);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(705);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 301},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 304},
  [83] = {.lex_state = 301},
  [84] = {.lex_state = 304},
  [85] = {.lex_state = 304},
  [86] = {.lex_state = 304},
  [87] = {.lex_state = 304},
  [88] = {.lex_state = 304},
  [89] = {.lex_state = 304},
  [90] = {.lex_state = 304},
  [91] = {.lex_state = 304},
  [92] = {.lex_state = 304},
  [93] = {.lex_state = 304},
  [94] = {.lex_state = 304},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 304},
  [97] = {.lex_state = 304},
  [98] = {.lex_state = 304},
  [99] = {.lex_state = 304},
  [100] = {.lex_state = 304},
  [101] = {.lex_state = 304},
  [102] = {.lex_state = 301},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 304},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 301},
  [108] = {.lex_state = 301},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 301},
  [111] = {.lex_state = 301},
  [112] = {.lex_state = 301},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 301},
  [115] = {.lex_state = 301},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 301},
  [137] = {.lex_state = 301},
  [138] = {.lex_state = 302},
  [139] = {.lex_state = 301},
  [140] = {.lex_state = 301},
  [141] = {.lex_state = 302},
  [142] = {.lex_state = 302},
  [143] = {.lex_state = 301},
  [144] = {.lex_state = 301},
  [145] = {.lex_state = 301},
  [146] = {.lex_state = 301},
  [147] = {.lex_state = 301},
  [148] = {.lex_state = 301},
  [149] = {.lex_state = 301},
  [150] = {.lex_state = 302},
  [151] = {.lex_state = 301},
  [152] = {.lex_state = 301},
  [153] = {.lex_state = 301},
  [154] = {.lex_state = 301},
  [155] = {.lex_state = 301},
  [156] = {.lex_state = 301},
  [157] = {.lex_state = 301},
  [158] = {.lex_state = 301},
  [159] = {.lex_state = 301},
  [160] = {.lex_state = 301},
  [161] = {.lex_state = 301},
  [162] = {.lex_state = 302},
  [163] = {.lex_state = 301},
  [164] = {.lex_state = 301},
  [165] = {.lex_state = 301},
  [166] = {.lex_state = 301},
  [167] = {.lex_state = 301},
  [168] = {.lex_state = 301},
  [169] = {.lex_state = 301},
  [170] = {.lex_state = 301},
  [171] = {.lex_state = 301},
  [172] = {.lex_state = 301},
  [173] = {.lex_state = 301},
  [174] = {.lex_state = 301},
  [175] = {.lex_state = 301},
  [176] = {.lex_state = 303},
  [177] = {.lex_state = 301},
  [178] = {.lex_state = 303},
  [179] = {.lex_state = 303},
  [180] = {.lex_state = 301},
  [181] = {.lex_state = 301},
  [182] = {.lex_state = 301},
  [183] = {.lex_state = 301},
  [184] = {.lex_state = 301},
  [185] = {.lex_state = 301},
  [186] = {.lex_state = 301},
  [187] = {.lex_state = 301},
  [188] = {.lex_state = 301},
  [189] = {.lex_state = 301},
  [190] = {.lex_state = 301},
  [191] = {.lex_state = 301},
  [192] = {.lex_state = 301},
  [193] = {.lex_state = 301},
  [194] = {.lex_state = 301},
  [195] = {.lex_state = 301},
  [196] = {.lex_state = 301},
  [197] = {.lex_state = 301},
  [198] = {.lex_state = 301},
  [199] = {.lex_state = 301},
  [200] = {.lex_state = 303},
  [201] = {.lex_state = 301},
  [202] = {.lex_state = 301},
  [203] = {.lex_state = 301},
  [204] = {.lex_state = 301},
  [205] = {.lex_state = 8},
  [206] = {.lex_state = 301},
  [207] = {.lex_state = 301},
  [208] = {.lex_state = 8},
  [209] = {.lex_state = 301},
  [210] = {.lex_state = 302},
  [211] = {.lex_state = 301},
  [212] = {.lex_state = 301},
  [213] = {.lex_state = 8},
  [214] = {.lex_state = 301},
  [215] = {.lex_state = 301},
  [216] = {.lex_state = 301},
  [217] = {.lex_state = 301},
  [218] = {.lex_state = 301},
  [219] = {.lex_state = 301},
  [220] = {.lex_state = 301},
  [221] = {.lex_state = 301},
  [222] = {.lex_state = 301},
  [223] = {.lex_state = 301},
  [224] = {.lex_state = 301},
  [225] = {.lex_state = 301},
  [226] = {.lex_state = 301},
  [227] = {.lex_state = 301},
  [228] = {.lex_state = 301},
  [229] = {.lex_state = 301},
  [230] = {.lex_state = 301},
  [231] = {.lex_state = 301},
  [232] = {.lex_state = 301},
  [233] = {.lex_state = 301},
  [234] = {.lex_state = 301},
  [235] = {.lex_state = 301},
  [236] = {.lex_state = 301},
  [237] = {.lex_state = 303},
  [238] = {.lex_state = 8},
  [239] = {.lex_state = 303},
  [240] = {.lex_state = 303},
  [241] = {.lex_state = 303},
  [242] = {.lex_state = 8},
  [243] = {.lex_state = 303},
  [244] = {.lex_state = 303},
  [245] = {.lex_state = 303},
  [246] = {.lex_state = 301},
  [247] = {.lex_state = 301},
  [248] = {.lex_state = 301},
  [249] = {.lex_state = 301},
  [250] = {.lex_state = 301},
  [251] = {.lex_state = 301},
  [252] = {.lex_state = 301},
  [253] = {.lex_state = 301},
  [254] = {.lex_state = 301},
  [255] = {.lex_state = 301},
  [256] = {.lex_state = 301},
  [257] = {.lex_state = 301},
  [258] = {.lex_state = 8},
  [259] = {.lex_state = 301},
  [260] = {.lex_state = 301},
  [261] = {.lex_state = 301},
  [262] = {.lex_state = 301},
  [263] = {.lex_state = 9},
  [264] = {.lex_state = 301},
  [265] = {.lex_state = 301},
  [266] = {.lex_state = 301},
  [267] = {.lex_state = 9},
  [268] = {.lex_state = 9},
  [269] = {.lex_state = 9},
  [270] = {.lex_state = 9},
  [271] = {.lex_state = 9},
  [272] = {.lex_state = 9},
  [273] = {.lex_state = 9},
  [274] = {.lex_state = 9},
  [275] = {.lex_state = 9},
  [276] = {.lex_state = 9},
  [277] = {.lex_state = 9},
  [278] = {.lex_state = 9},
  [279] = {.lex_state = 9},
  [280] = {.lex_state = 9},
  [281] = {.lex_state = 9},
  [282] = {.lex_state = 9},
  [283] = {.lex_state = 301},
  [284] = {.lex_state = 301},
  [285] = {.lex_state = 4},
  [286] = {.lex_state = 4},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 4},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 4},
  [292] = {.lex_state = 301},
  [293] = {.lex_state = 301},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 4},
  [297] = {.lex_state = 301},
  [298] = {.lex_state = 9},
  [299] = {.lex_state = 301},
  [300] = {.lex_state = 4},
  [301] = {.lex_state = 301},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 4},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 4},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 4},
  [308] = {.lex_state = 4},
  [309] = {.lex_state = 4},
  [310] = {.lex_state = 4},
  [311] = {.lex_state = 4},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 4},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 4},
  [317] = {.lex_state = 4},
  [318] = {.lex_state = 4},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 301},
  [321] = {.lex_state = 4},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 301},
  [324] = {.lex_state = 301},
  [325] = {.lex_state = 4},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 4},
  [328] = {.lex_state = 4},
  [329] = {.lex_state = 4},
  [330] = {.lex_state = 4},
  [331] = {.lex_state = 4},
  [332] = {.lex_state = 4},
  [333] = {.lex_state = 301},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 301},
  [336] = {.lex_state = 4},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 4},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 4},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 4},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 3},
  [404] = {.lex_state = 301},
  [405] = {.lex_state = 301},
  [406] = {.lex_state = 3},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 301},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 301},
  [412] = {.lex_state = 301},
  [413] = {.lex_state = 301},
  [414] = {.lex_state = 301},
  [415] = {.lex_state = 301},
  [416] = {.lex_state = 301},
  [417] = {.lex_state = 301},
  [418] = {.lex_state = 301},
  [419] = {.lex_state = 301},
  [420] = {.lex_state = 301},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 3},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 301},
  [426] = {.lex_state = 301},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 301},
  [430] = {.lex_state = 301},
  [431] = {.lex_state = 301},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 301},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 4},
  [440] = {.lex_state = 301},
  [441] = {.lex_state = 301},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 301},
  [444] = {.lex_state = 301},
  [445] = {.lex_state = 4},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 301},
  [448] = {.lex_state = 4},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 301},
  [452] = {.lex_state = 3},
  [453] = {.lex_state = 301},
  [454] = {.lex_state = 301},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 301},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 1},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 301},
  [462] = {.lex_state = 3},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 4},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 301},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 4},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 4},
  [476] = {.lex_state = 301},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 301},
  [479] = {.lex_state = 301},
  [480] = {.lex_state = 301},
  [481] = {.lex_state = 301},
  [482] = {.lex_state = 301},
  [483] = {.lex_state = 301},
  [484] = {.lex_state = 301},
  [485] = {.lex_state = 301},
  [486] = {.lex_state = 301},
  [487] = {.lex_state = 301},
  [488] = {.lex_state = 301},
  [489] = {.lex_state = 4},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 315},
  [496] = {.lex_state = 11},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUNDline] = ACTIONS(1),
    [aux_sym_preprocessor_token1] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DOTpragma] = ACTIONS(1),
    [anon_sym_DOTfunctor] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_stateful] = ACTIONS(1),
    [anon_sym_DOTcomp] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_DOToverride] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DOTinit] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOTinput] = ACTIONS(1),
    [anon_sym_DOTlimitsize] = ACTIONS(1),
    [anon_sym_DOToutput] = ACTIONS(1),
    [anon_sym_DOTprintsize] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_COLON_DASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_contains] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [aux_sym_decimal_token1] = ACTIONS(1),
    [sym_unsigned] = ACTIONS(1),
    [sym_hex] = ACTIONS(1),
    [sym_binary] = ACTIONS(1),
    [aux_sym_float_token1] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [sym_anonymous] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_acos] = ACTIONS(1),
    [anon_sym_acosh] = ACTIONS(1),
    [anon_sym_asin] = ACTIONS(1),
    [anon_sym_asinh] = ACTIONS(1),
    [anon_sym_atan] = ACTIONS(1),
    [anon_sym_atanh] = ACTIONS(1),
    [anon_sym_cos] = ACTIONS(1),
    [anon_sym_cosh] = ACTIONS(1),
    [anon_sym_exp] = ACTIONS(1),
    [anon_sym_log] = ACTIONS(1),
    [anon_sym_sin] = ACTIONS(1),
    [anon_sym_sinh] = ACTIONS(1),
    [anon_sym_tan] = ACTIONS(1),
    [anon_sym_tanh] = ACTIONS(1),
    [anon_sym_autoinc] = ACTIONS(1),
    [anon_sym_cat] = ACTIONS(1),
    [anon_sym_max] = ACTIONS(1),
    [anon_sym_min] = ACTIONS(1),
    [anon_sym_ord] = ACTIONS(1),
    [anon_sym_strlen] = ACTIONS(1),
    [anon_sym_substr] = ACTIONS(1),
    [anon_sym_to_float] = ACTIONS(1),
    [anon_sym_to_number] = ACTIONS(1),
    [anon_sym_to_string] = ACTIONS(1),
    [anon_sym_to_unsigned] = ACTIONS(1),
    [anon_sym_mean] = ACTIONS(1),
    [anon_sym_sum] = ACTIONS(1),
    [anon_sym_count] = ACTIONS(1),
    [anon_sym_range] = ACTIONS(1),
    [anon_sym_bnot] = ACTIONS(1),
    [anon_sym_lnot] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_land] = ACTIONS(1),
    [anon_sym_lor] = ACTIONS(1),
    [anon_sym_lxor] = ACTIONS(1),
    [anon_sym_band] = ACTIONS(1),
    [anon_sym_bor] = ACTIONS(1),
    [anon_sym_bxor] = ACTIONS(1),
    [anon_sym_bshl] = ACTIONS(1),
    [anon_sym_bshr] = ACTIONS(1),
    [anon_sym_bshru] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_CARET_CARET] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_GT_GT_GT] = ACTIONS(1),
    [anon_sym_DOTdecl] = ACTIONS(1),
    [anon_sym_brie] = ACTIONS(1),
    [anon_sym_btree] = ACTIONS(1),
    [anon_sym_btree_delete] = ACTIONS(1),
    [anon_sym_eqrel] = ACTIONS(1),
    [anon_sym_inline] = ACTIONS(1),
    [anon_sym_magic] = ACTIONS(1),
    [anon_sym_no_inline] = ACTIONS(1),
    [anon_sym_no_magic] = ACTIONS(1),
    [anon_sym_override] = ACTIONS(1),
    [anon_sym_overridable] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_printsize] = ACTIONS(1),
    [anon_sym_choice_DASHdomain] = ACTIONS(1),
    [anon_sym_DOTnumber_type] = ACTIONS(1),
    [anon_sym_DOTsymbol_type] = ACTIONS(1),
    [anon_sym_DOTtype] = ACTIONS(1),
    [anon_sym_LT_COLON] = ACTIONS(1),
    [anon_sym_number] = ACTIONS(1),
    [anon_sym_symbol] = ACTIONS(1),
    [anon_sym_unsigned] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(469),
    [sym_preprocessor] = STATE(102),
    [sym_block_comment] = STATE(102),
    [sym_line_comment] = STATE(102),
    [sym_pragma] = STATE(102),
    [sym_functor_decl] = STATE(102),
    [sym_component_decl] = STATE(102),
    [sym_component_init] = STATE(102),
    [sym_directive] = STATE(102),
    [sym__directive_qualifier] = STATE(417),
    [sym__rule] = STATE(102),
    [sym_monotonic_rule] = STATE(102),
    [sym_subsumptive_rule] = STATE(102),
    [sym_fact] = STATE(102),
    [sym_atom] = STATE(298),
    [sym_relation_decl] = STATE(102),
    [sym_legacy_type_decl] = STATE(102),
    [sym_type_decl] = STATE(102),
    [sym_qualified_name] = STATE(466),
    [aux_sym_program_repeat1] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUNDline] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [anon_sym_SLASH_SLASH] = ACTIONS(9),
    [anon_sym_DOTpragma] = ACTIONS(11),
    [anon_sym_DOTfunctor] = ACTIONS(13),
    [anon_sym_DOTcomp] = ACTIONS(15),
    [anon_sym_DOTinit] = ACTIONS(17),
    [anon_sym_DOTinput] = ACTIONS(19),
    [anon_sym_DOTlimitsize] = ACTIONS(19),
    [anon_sym_DOToutput] = ACTIONS(19),
    [anon_sym_DOTprintsize] = ACTIONS(19),
    [anon_sym_DOTdecl] = ACTIONS(21),
    [anon_sym_DOTnumber_type] = ACTIONS(23),
    [anon_sym_DOTsymbol_type] = ACTIONS(23),
    [anon_sym_DOTtype] = ACTIONS(25),
    [sym_ident] = ACTIONS(27),
  },
  [2] = {
    [sym_bool] = STATE(331),
    [sym_disjunction] = STATE(489),
    [sym_negation] = STATE(15),
    [sym_conjunction] = STATE(339),
    [sym__constraint] = STATE(331),
    [sym_match] = STATE(331),
    [sym_contains] = STATE(331),
    [sym_comparison] = STATE(331),
    [sym_atom] = STATE(331),
    [sym__argument] = STATE(113),
    [sym_adt_constructor] = STATE(113),
    [sym_record_constructor] = STATE(113),
    [sym_constant] = STATE(113),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(113),
    [sym_as] = STATE(113),
    [sym_functor_call] = STATE(113),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(113),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(113),
    [sym_binary_op] = STATE(113),
    [sym_qualified_name] = STATE(466),
    [aux_sym_conjunction_repeat1] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(33),
    [anon_sym_match] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(53),
    [sym_anonymous] = ACTIONS(53),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(73),
  },
  [3] = {
    [sym_bool] = STATE(306),
    [sym_disjunction] = STATE(492),
    [sym_negation] = STATE(20),
    [sym_conjunction] = STATE(337),
    [sym__constraint] = STATE(306),
    [sym_match] = STATE(306),
    [sym_contains] = STATE(306),
    [sym_comparison] = STATE(306),
    [sym_atom] = STATE(306),
    [sym__argument] = STATE(106),
    [sym_adt_constructor] = STATE(106),
    [sym_record_constructor] = STATE(106),
    [sym_constant] = STATE(106),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(106),
    [sym_as] = STATE(106),
    [sym_functor_call] = STATE(106),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(106),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(106),
    [sym_binary_op] = STATE(106),
    [sym_qualified_name] = STATE(466),
    [aux_sym_conjunction_repeat1] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(33),
    [anon_sym_match] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(77),
    [sym_anonymous] = ACTIONS(77),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(73),
  },
  [4] = {
    [sym_bool] = STATE(331),
    [sym_disjunction] = STATE(448),
    [sym_negation] = STATE(15),
    [sym_conjunction] = STATE(339),
    [sym__constraint] = STATE(331),
    [sym_match] = STATE(331),
    [sym_contains] = STATE(331),
    [sym_comparison] = STATE(331),
    [sym_atom] = STATE(331),
    [sym__argument] = STATE(113),
    [sym_adt_constructor] = STATE(113),
    [sym_record_constructor] = STATE(113),
    [sym_constant] = STATE(113),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(113),
    [sym_as] = STATE(113),
    [sym_functor_call] = STATE(113),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(113),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(113),
    [sym_binary_op] = STATE(113),
    [sym_qualified_name] = STATE(466),
    [aux_sym_conjunction_repeat1] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(33),
    [anon_sym_match] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(53),
    [sym_anonymous] = ACTIONS(53),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(73),
  },
  [5] = {
    [sym_bool] = STATE(306),
    [sym_disjunction] = STATE(494),
    [sym_negation] = STATE(20),
    [sym_conjunction] = STATE(337),
    [sym__constraint] = STATE(306),
    [sym_match] = STATE(306),
    [sym_contains] = STATE(306),
    [sym_comparison] = STATE(306),
    [sym_atom] = STATE(306),
    [sym__argument] = STATE(106),
    [sym_adt_constructor] = STATE(106),
    [sym_record_constructor] = STATE(106),
    [sym_constant] = STATE(106),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(106),
    [sym_as] = STATE(106),
    [sym_functor_call] = STATE(106),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(106),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(106),
    [sym_binary_op] = STATE(106),
    [sym_qualified_name] = STATE(466),
    [aux_sym_conjunction_repeat1] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(33),
    [anon_sym_match] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(77),
    [sym_anonymous] = ACTIONS(77),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(73),
  },
  [6] = {
    [sym_bool] = STATE(306),
    [sym_disjunction] = STATE(433),
    [sym_negation] = STATE(20),
    [sym_conjunction] = STATE(337),
    [sym__constraint] = STATE(306),
    [sym_match] = STATE(306),
    [sym_contains] = STATE(306),
    [sym_comparison] = STATE(306),
    [sym_atom] = STATE(306),
    [sym__argument] = STATE(106),
    [sym_adt_constructor] = STATE(106),
    [sym_record_constructor] = STATE(106),
    [sym_constant] = STATE(106),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(106),
    [sym_as] = STATE(106),
    [sym_functor_call] = STATE(106),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(106),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(106),
    [sym_binary_op] = STATE(106),
    [sym_qualified_name] = STATE(466),
    [aux_sym_conjunction_repeat1] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(33),
    [anon_sym_match] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(77),
    [sym_anonymous] = ACTIONS(77),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(73),
  },
  [7] = {
    [sym_bool] = STATE(306),
    [sym_disjunction] = STATE(470),
    [sym_negation] = STATE(20),
    [sym_conjunction] = STATE(337),
    [sym__constraint] = STATE(306),
    [sym_match] = STATE(306),
    [sym_contains] = STATE(306),
    [sym_comparison] = STATE(306),
    [sym_atom] = STATE(306),
    [sym__argument] = STATE(106),
    [sym_adt_constructor] = STATE(106),
    [sym_record_constructor] = STATE(106),
    [sym_constant] = STATE(106),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(106),
    [sym_as] = STATE(106),
    [sym_functor_call] = STATE(106),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(106),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(106),
    [sym_binary_op] = STATE(106),
    [sym_qualified_name] = STATE(466),
    [aux_sym_conjunction_repeat1] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(33),
    [anon_sym_match] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(77),
    [sym_anonymous] = ACTIONS(77),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(73),
  },
  [8] = {
    [sym_bool] = STATE(306),
    [sym_disjunction] = STATE(493),
    [sym_negation] = STATE(20),
    [sym_conjunction] = STATE(337),
    [sym__constraint] = STATE(306),
    [sym_match] = STATE(306),
    [sym_contains] = STATE(306),
    [sym_comparison] = STATE(306),
    [sym_atom] = STATE(306),
    [sym__argument] = STATE(106),
    [sym_adt_constructor] = STATE(106),
    [sym_record_constructor] = STATE(106),
    [sym_constant] = STATE(106),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(106),
    [sym_as] = STATE(106),
    [sym_functor_call] = STATE(106),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(106),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(106),
    [sym_binary_op] = STATE(106),
    [sym_qualified_name] = STATE(466),
    [aux_sym_conjunction_repeat1] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(33),
    [anon_sym_match] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(77),
    [sym_anonymous] = ACTIONS(77),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(73),
  },
  [9] = {
    [sym_bool] = STATE(306),
    [sym_disjunction] = STATE(490),
    [sym_negation] = STATE(20),
    [sym_conjunction] = STATE(337),
    [sym__constraint] = STATE(306),
    [sym_match] = STATE(306),
    [sym_contains] = STATE(306),
    [sym_comparison] = STATE(306),
    [sym_atom] = STATE(306),
    [sym__argument] = STATE(106),
    [sym_adt_constructor] = STATE(106),
    [sym_record_constructor] = STATE(106),
    [sym_constant] = STATE(106),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(106),
    [sym_as] = STATE(106),
    [sym_functor_call] = STATE(106),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(106),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(106),
    [sym_binary_op] = STATE(106),
    [sym_qualified_name] = STATE(466),
    [aux_sym_conjunction_repeat1] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(33),
    [anon_sym_match] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(77),
    [sym_anonymous] = ACTIONS(77),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(73),
  },
  [10] = {
    [sym_bool] = STATE(306),
    [sym_disjunction] = STATE(472),
    [sym_negation] = STATE(20),
    [sym_conjunction] = STATE(337),
    [sym__constraint] = STATE(306),
    [sym_match] = STATE(306),
    [sym_contains] = STATE(306),
    [sym_comparison] = STATE(306),
    [sym_atom] = STATE(306),
    [sym__argument] = STATE(109),
    [sym_adt_constructor] = STATE(109),
    [sym_record_constructor] = STATE(109),
    [sym_constant] = STATE(109),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(109),
    [sym_as] = STATE(109),
    [sym_functor_call] = STATE(109),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(109),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(109),
    [sym_binary_op] = STATE(109),
    [sym_qualified_name] = STATE(466),
    [aux_sym_conjunction_repeat1] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(33),
    [anon_sym_match] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(79),
    [sym_anonymous] = ACTIONS(79),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(73),
  },
  [11] = {
    [sym_bool] = STATE(306),
    [sym_disjunction] = STATE(460),
    [sym_negation] = STATE(20),
    [sym_conjunction] = STATE(337),
    [sym__constraint] = STATE(306),
    [sym_match] = STATE(306),
    [sym_contains] = STATE(306),
    [sym_comparison] = STATE(306),
    [sym_atom] = STATE(306),
    [sym__argument] = STATE(109),
    [sym_adt_constructor] = STATE(109),
    [sym_record_constructor] = STATE(109),
    [sym_constant] = STATE(109),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(109),
    [sym_as] = STATE(109),
    [sym_functor_call] = STATE(109),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(109),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(109),
    [sym_binary_op] = STATE(109),
    [sym_qualified_name] = STATE(466),
    [aux_sym_conjunction_repeat1] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(33),
    [anon_sym_match] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(79),
    [sym_anonymous] = ACTIONS(79),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(73),
  },
  [12] = {
    [sym_bool] = STATE(331),
    [sym_disjunction] = STATE(475),
    [sym_negation] = STATE(15),
    [sym_conjunction] = STATE(339),
    [sym__constraint] = STATE(331),
    [sym_match] = STATE(331),
    [sym_contains] = STATE(331),
    [sym_comparison] = STATE(331),
    [sym_atom] = STATE(331),
    [sym__argument] = STATE(113),
    [sym_adt_constructor] = STATE(113),
    [sym_record_constructor] = STATE(113),
    [sym_constant] = STATE(113),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(113),
    [sym_as] = STATE(113),
    [sym_functor_call] = STATE(113),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(113),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(113),
    [sym_binary_op] = STATE(113),
    [sym_qualified_name] = STATE(466),
    [aux_sym_conjunction_repeat1] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(33),
    [anon_sym_match] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(53),
    [sym_anonymous] = ACTIONS(53),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(73),
  },
  [13] = {
    [sym_bool] = STATE(306),
    [sym_negation] = STATE(20),
    [sym_conjunction] = STATE(327),
    [sym__constraint] = STATE(306),
    [sym_match] = STATE(306),
    [sym_contains] = STATE(306),
    [sym_comparison] = STATE(306),
    [sym_atom] = STATE(306),
    [sym__argument] = STATE(109),
    [sym_adt_constructor] = STATE(109),
    [sym_record_constructor] = STATE(109),
    [sym_constant] = STATE(109),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(109),
    [sym_as] = STATE(109),
    [sym_functor_call] = STATE(109),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(109),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(109),
    [sym_binary_op] = STATE(109),
    [sym_qualified_name] = STATE(466),
    [aux_sym_conjunction_repeat1] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(33),
    [anon_sym_match] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(79),
    [sym_anonymous] = ACTIONS(79),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(73),
  },
  [14] = {
    [sym_bool] = STATE(331),
    [sym_negation] = STATE(15),
    [sym_conjunction] = STATE(327),
    [sym__constraint] = STATE(331),
    [sym_match] = STATE(331),
    [sym_contains] = STATE(331),
    [sym_comparison] = STATE(331),
    [sym_atom] = STATE(331),
    [sym__argument] = STATE(113),
    [sym_adt_constructor] = STATE(113),
    [sym_record_constructor] = STATE(113),
    [sym_constant] = STATE(113),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(113),
    [sym_as] = STATE(113),
    [sym_functor_call] = STATE(113),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(113),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(113),
    [sym_binary_op] = STATE(113),
    [sym_qualified_name] = STATE(466),
    [aux_sym_conjunction_repeat1] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(33),
    [anon_sym_match] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(53),
    [sym_anonymous] = ACTIONS(53),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(73),
  },
  [15] = {
    [sym_bool] = STATE(332),
    [sym_negation] = STATE(44),
    [sym__constraint] = STATE(332),
    [sym_match] = STATE(332),
    [sym_contains] = STATE(332),
    [sym_comparison] = STATE(332),
    [sym_atom] = STATE(332),
    [sym__argument] = STATE(113),
    [sym_adt_constructor] = STATE(113),
    [sym_record_constructor] = STATE(113),
    [sym_constant] = STATE(113),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(113),
    [sym_as] = STATE(113),
    [sym_functor_call] = STATE(113),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(113),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(113),
    [sym_binary_op] = STATE(113),
    [sym_qualified_name] = STATE(466),
    [aux_sym_conjunction_repeat1] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(33),
    [anon_sym_match] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(53),
    [sym_anonymous] = ACTIONS(53),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(73),
  },
  [16] = {
    [sym_bool] = STATE(296),
    [sym_negation] = STATE(44),
    [sym__constraint] = STATE(296),
    [sym_match] = STATE(296),
    [sym_contains] = STATE(296),
    [sym_comparison] = STATE(296),
    [sym_atom] = STATE(296),
    [sym__argument] = STATE(113),
    [sym_adt_constructor] = STATE(113),
    [sym_record_constructor] = STATE(113),
    [sym_constant] = STATE(113),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(113),
    [sym_as] = STATE(113),
    [sym_functor_call] = STATE(113),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(113),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(113),
    [sym_binary_op] = STATE(113),
    [sym_qualified_name] = STATE(466),
    [aux_sym_conjunction_repeat1] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(33),
    [anon_sym_match] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(53),
    [sym_anonymous] = ACTIONS(53),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(73),
  },
  [17] = {
    [sym_bool] = STATE(285),
    [sym_negation] = STATE(18),
    [sym__constraint] = STATE(285),
    [sym_match] = STATE(285),
    [sym_contains] = STATE(285),
    [sym_comparison] = STATE(285),
    [sym_atom] = STATE(285),
    [sym__argument] = STATE(109),
    [sym_adt_constructor] = STATE(109),
    [sym_record_constructor] = STATE(109),
    [sym_constant] = STATE(109),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(109),
    [sym_as] = STATE(109),
    [sym_functor_call] = STATE(109),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(109),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(109),
    [sym_binary_op] = STATE(109),
    [sym_qualified_name] = STATE(466),
    [aux_sym_conjunction_repeat1] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(33),
    [anon_sym_match] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(79),
    [sym_anonymous] = ACTIONS(79),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(73),
  },
  [18] = {
    [sym_bool] = STATE(296),
    [sym_negation] = STATE(44),
    [sym__constraint] = STATE(296),
    [sym_match] = STATE(296),
    [sym_contains] = STATE(296),
    [sym_comparison] = STATE(296),
    [sym_atom] = STATE(296),
    [sym__argument] = STATE(109),
    [sym_adt_constructor] = STATE(109),
    [sym_record_constructor] = STATE(109),
    [sym_constant] = STATE(109),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(109),
    [sym_as] = STATE(109),
    [sym_functor_call] = STATE(109),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(109),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(109),
    [sym_binary_op] = STATE(109),
    [sym_qualified_name] = STATE(466),
    [aux_sym_conjunction_repeat1] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(33),
    [anon_sym_match] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(79),
    [sym_anonymous] = ACTIONS(79),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(73),
  },
  [19] = {
    [sym_bool] = STATE(285),
    [sym_negation] = STATE(16),
    [sym__constraint] = STATE(285),
    [sym_match] = STATE(285),
    [sym_contains] = STATE(285),
    [sym_comparison] = STATE(285),
    [sym_atom] = STATE(285),
    [sym__argument] = STATE(113),
    [sym_adt_constructor] = STATE(113),
    [sym_record_constructor] = STATE(113),
    [sym_constant] = STATE(113),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(113),
    [sym_as] = STATE(113),
    [sym_functor_call] = STATE(113),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(113),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(113),
    [sym_binary_op] = STATE(113),
    [sym_qualified_name] = STATE(466),
    [aux_sym_conjunction_repeat1] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(33),
    [anon_sym_match] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(53),
    [sym_anonymous] = ACTIONS(53),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(73),
  },
  [20] = {
    [sym_bool] = STATE(294),
    [sym_negation] = STATE(44),
    [sym__constraint] = STATE(294),
    [sym_match] = STATE(294),
    [sym_contains] = STATE(294),
    [sym_comparison] = STATE(294),
    [sym_atom] = STATE(294),
    [sym__argument] = STATE(109),
    [sym_adt_constructor] = STATE(109),
    [sym_record_constructor] = STATE(109),
    [sym_constant] = STATE(109),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(109),
    [sym_as] = STATE(109),
    [sym_functor_call] = STATE(109),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(109),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(109),
    [sym_binary_op] = STATE(109),
    [sym_qualified_name] = STATE(466),
    [aux_sym_conjunction_repeat1] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(33),
    [anon_sym_match] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(79),
    [sym_anonymous] = ACTIONS(79),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(73),
  },
  [21] = {
    [sym__argument] = STATE(119),
    [sym_adt_constructor] = STATE(119),
    [sym_record_constructor] = STATE(119),
    [sym_constant] = STATE(119),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(119),
    [sym_as] = STATE(119),
    [sym_functor_call] = STATE(119),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(119),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(119),
    [sym_binary_op] = STATE(119),
    [aux_sym_match_repeat1] = STATE(358),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(93),
    [anon_sym_BANG] = ACTIONS(71),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(95),
    [sym_anonymous] = ACTIONS(95),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(97),
  },
  [22] = {
    [sym__argument] = STATE(125),
    [sym_adt_constructor] = STATE(125),
    [sym_record_constructor] = STATE(125),
    [sym_constant] = STATE(125),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(125),
    [sym_as] = STATE(125),
    [sym_functor_call] = STATE(125),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(125),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(125),
    [sym_binary_op] = STATE(125),
    [aux_sym_match_repeat1] = STATE(400),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(99),
    [anon_sym_BANG] = ACTIONS(71),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(101),
    [sym_anonymous] = ACTIONS(101),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(97),
  },
  [23] = {
    [sym__argument] = STATE(121),
    [sym_adt_constructor] = STATE(121),
    [sym_record_constructor] = STATE(121),
    [sym_constant] = STATE(121),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(121),
    [sym_as] = STATE(121),
    [sym_functor_call] = STATE(121),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(121),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(121),
    [sym_binary_op] = STATE(121),
    [aux_sym_match_repeat1] = STATE(350),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(71),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(105),
    [sym_anonymous] = ACTIONS(105),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(97),
  },
  [24] = {
    [sym__argument] = STATE(120),
    [sym_adt_constructor] = STATE(120),
    [sym_record_constructor] = STATE(120),
    [sym_constant] = STATE(120),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(120),
    [sym_as] = STATE(120),
    [sym_functor_call] = STATE(120),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(120),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(120),
    [sym_binary_op] = STATE(120),
    [aux_sym_adt_constructor_repeat1] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(71),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(111),
    [sym_anonymous] = ACTIONS(111),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(97),
  },
  [25] = {
    [sym__argument] = STATE(126),
    [sym_adt_constructor] = STATE(126),
    [sym_record_constructor] = STATE(126),
    [sym_constant] = STATE(126),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(126),
    [sym_as] = STATE(126),
    [sym_functor_call] = STATE(126),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(126),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(126),
    [sym_binary_op] = STATE(126),
    [aux_sym_adt_constructor_repeat1] = STATE(376),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(107),
    [anon_sym_BANG] = ACTIONS(71),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_RBRACK] = ACTIONS(113),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(115),
    [sym_anonymous] = ACTIONS(115),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(97),
  },
  [26] = {
    [sym__argument] = STATE(122),
    [sym_adt_constructor] = STATE(122),
    [sym_record_constructor] = STATE(122),
    [sym_constant] = STATE(122),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(122),
    [sym_as] = STATE(122),
    [sym_functor_call] = STATE(122),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(122),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(122),
    [sym_binary_op] = STATE(122),
    [aux_sym_match_repeat1] = STATE(340),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_BANG] = ACTIONS(71),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(119),
    [sym_anonymous] = ACTIONS(119),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(97),
  },
  [27] = {
    [sym__argument] = STATE(130),
    [sym_adt_constructor] = STATE(130),
    [sym_record_constructor] = STATE(130),
    [sym_constant] = STATE(130),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(130),
    [sym_as] = STATE(130),
    [sym_functor_call] = STATE(130),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(130),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(130),
    [sym_binary_op] = STATE(130),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_BANG] = ACTIONS(71),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(121),
    [sym_anonymous] = ACTIONS(121),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(97),
  },
  [28] = {
    [sym__argument] = STATE(95),
    [sym_adt_constructor] = STATE(95),
    [sym_record_constructor] = STATE(95),
    [sym_constant] = STATE(95),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(95),
    [sym_as] = STATE(95),
    [sym_functor_call] = STATE(95),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(95),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(95),
    [sym_binary_op] = STATE(95),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_BANG] = ACTIONS(71),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(123),
    [sym_anonymous] = ACTIONS(123),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(97),
  },
  [29] = {
    [sym__argument] = STATE(131),
    [sym_adt_constructor] = STATE(131),
    [sym_record_constructor] = STATE(131),
    [sym_constant] = STATE(131),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(131),
    [sym_as] = STATE(131),
    [sym_functor_call] = STATE(131),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(131),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(131),
    [sym_binary_op] = STATE(131),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_BANG] = ACTIONS(71),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(125),
    [sym_anonymous] = ACTIONS(125),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(97),
  },
  [30] = {
    [sym__argument] = STATE(132),
    [sym_adt_constructor] = STATE(132),
    [sym_record_constructor] = STATE(132),
    [sym_constant] = STATE(132),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(132),
    [sym_as] = STATE(132),
    [sym_functor_call] = STATE(132),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(132),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(132),
    [sym_binary_op] = STATE(132),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_BANG] = ACTIONS(71),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(127),
    [sym_anonymous] = ACTIONS(127),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(97),
  },
  [31] = {
    [sym__argument] = STATE(131),
    [sym_adt_constructor] = STATE(131),
    [sym_record_constructor] = STATE(131),
    [sym_constant] = STATE(131),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(131),
    [sym_as] = STATE(131),
    [sym_functor_call] = STATE(131),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(131),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(131),
    [sym_binary_op] = STATE(131),
    [anon_sym_LPAREN] = ACTIONS(129),
    [anon_sym_BANG] = ACTIONS(71),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(125),
    [sym_anonymous] = ACTIONS(125),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(97),
  },
  [32] = {
    [sym__argument] = STATE(123),
    [sym_adt_constructor] = STATE(123),
    [sym_record_constructor] = STATE(123),
    [sym_constant] = STATE(123),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(123),
    [sym_as] = STATE(123),
    [sym_functor_call] = STATE(123),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(123),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(36),
    [sym_unary_op] = STATE(123),
    [sym_binary_op] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_BANG] = ACTIONS(131),
    [anon_sym_DOLLAR] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(135),
    [sym_anonymous] = ACTIONS(135),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(137),
    [anon_sym_lnot] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(137),
    [anon_sym_TILDE] = ACTIONS(131),
    [sym_ident] = ACTIONS(97),
  },
  [33] = {
    [sym__argument] = STATE(124),
    [sym_adt_constructor] = STATE(124),
    [sym_record_constructor] = STATE(124),
    [sym_constant] = STATE(124),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(124),
    [sym_as] = STATE(124),
    [sym_functor_call] = STATE(124),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(124),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(124),
    [sym_binary_op] = STATE(124),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_BANG] = ACTIONS(71),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(139),
    [sym_anonymous] = ACTIONS(139),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(97),
  },
  [34] = {
    [sym__argument] = STATE(73),
    [sym_adt_constructor] = STATE(73),
    [sym_record_constructor] = STATE(73),
    [sym_constant] = STATE(73),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(73),
    [sym_as] = STATE(73),
    [sym_functor_call] = STATE(73),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(73),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(36),
    [sym_unary_op] = STATE(73),
    [sym_binary_op] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_BANG] = ACTIONS(131),
    [anon_sym_DOLLAR] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(141),
    [sym_anonymous] = ACTIONS(141),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(137),
    [anon_sym_lnot] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(137),
    [anon_sym_TILDE] = ACTIONS(131),
    [sym_ident] = ACTIONS(97),
  },
  [35] = {
    [sym__argument] = STATE(127),
    [sym_adt_constructor] = STATE(127),
    [sym_record_constructor] = STATE(127),
    [sym_constant] = STATE(127),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(127),
    [sym_as] = STATE(127),
    [sym_functor_call] = STATE(127),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(127),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(36),
    [sym_unary_op] = STATE(127),
    [sym_binary_op] = STATE(127),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_BANG] = ACTIONS(131),
    [anon_sym_DOLLAR] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(143),
    [sym_anonymous] = ACTIONS(143),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(137),
    [anon_sym_lnot] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(137),
    [anon_sym_TILDE] = ACTIONS(131),
    [sym_ident] = ACTIONS(97),
  },
  [36] = {
    [sym__argument] = STATE(128),
    [sym_adt_constructor] = STATE(128),
    [sym_record_constructor] = STATE(128),
    [sym_constant] = STATE(128),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(128),
    [sym_as] = STATE(128),
    [sym_functor_call] = STATE(128),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(128),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(36),
    [sym_unary_op] = STATE(128),
    [sym_binary_op] = STATE(128),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_BANG] = ACTIONS(131),
    [anon_sym_DOLLAR] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(145),
    [sym_anonymous] = ACTIONS(145),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(137),
    [anon_sym_lnot] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(137),
    [anon_sym_TILDE] = ACTIONS(131),
    [sym_ident] = ACTIONS(97),
  },
  [37] = {
    [sym__argument] = STATE(103),
    [sym_adt_constructor] = STATE(103),
    [sym_record_constructor] = STATE(103),
    [sym_constant] = STATE(103),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(103),
    [sym_as] = STATE(103),
    [sym_functor_call] = STATE(103),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(103),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(103),
    [sym_binary_op] = STATE(103),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_BANG] = ACTIONS(71),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(147),
    [sym_anonymous] = ACTIONS(147),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(97),
  },
  [38] = {
    [sym__argument] = STATE(118),
    [sym_adt_constructor] = STATE(118),
    [sym_record_constructor] = STATE(118),
    [sym_constant] = STATE(118),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(118),
    [sym_as] = STATE(118),
    [sym_functor_call] = STATE(118),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(118),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(118),
    [sym_binary_op] = STATE(118),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_BANG] = ACTIONS(71),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(149),
    [sym_anonymous] = ACTIONS(149),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(97),
  },
  [39] = {
    [sym__argument] = STATE(133),
    [sym_adt_constructor] = STATE(133),
    [sym_record_constructor] = STATE(133),
    [sym_constant] = STATE(133),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(133),
    [sym_as] = STATE(133),
    [sym_functor_call] = STATE(133),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(133),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(133),
    [sym_binary_op] = STATE(133),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_BANG] = ACTIONS(71),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(151),
    [sym_anonymous] = ACTIONS(151),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(97),
  },
  [40] = {
    [sym__argument] = STATE(134),
    [sym_adt_constructor] = STATE(134),
    [sym_record_constructor] = STATE(134),
    [sym_constant] = STATE(134),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(134),
    [sym_as] = STATE(134),
    [sym_functor_call] = STATE(134),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(134),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(134),
    [sym_binary_op] = STATE(134),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_BANG] = ACTIONS(71),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(153),
    [sym_anonymous] = ACTIONS(153),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(97),
  },
  [41] = {
    [sym__argument] = STATE(129),
    [sym_adt_constructor] = STATE(129),
    [sym_record_constructor] = STATE(129),
    [sym_constant] = STATE(129),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(129),
    [sym_as] = STATE(129),
    [sym_functor_call] = STATE(129),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(129),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(129),
    [sym_binary_op] = STATE(129),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_BANG] = ACTIONS(71),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(155),
    [sym_anonymous] = ACTIONS(155),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(97),
  },
  [42] = {
    [sym__argument] = STATE(135),
    [sym_adt_constructor] = STATE(135),
    [sym_record_constructor] = STATE(135),
    [sym_constant] = STATE(135),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(135),
    [sym_as] = STATE(135),
    [sym_functor_call] = STATE(135),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(135),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(135),
    [sym_binary_op] = STATE(135),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_BANG] = ACTIONS(71),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(157),
    [sym_anonymous] = ACTIONS(157),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(97),
  },
  [43] = {
    [sym__argument] = STATE(73),
    [sym_adt_constructor] = STATE(73),
    [sym_record_constructor] = STATE(73),
    [sym_constant] = STATE(73),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(73),
    [sym_as] = STATE(73),
    [sym_functor_call] = STATE(73),
    [sym_user_defined_functor] = STATE(450),
    [sym_intrinsic_functor] = STATE(450),
    [sym_aggregator] = STATE(73),
    [sym_range] = STATE(71),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(73),
    [sym_binary_op] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_BANG] = ACTIONS(71),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_ipv4] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_decimal_token1] = ACTIONS(45),
    [sym_unsigned] = ACTIONS(47),
    [sym_hex] = ACTIONS(49),
    [sym_binary] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [sym_nil] = ACTIONS(141),
    [sym_anonymous] = ACTIONS(141),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_acos] = ACTIONS(59),
    [anon_sym_acosh] = ACTIONS(59),
    [anon_sym_asin] = ACTIONS(59),
    [anon_sym_asinh] = ACTIONS(59),
    [anon_sym_atan] = ACTIONS(59),
    [anon_sym_atanh] = ACTIONS(59),
    [anon_sym_cos] = ACTIONS(59),
    [anon_sym_cosh] = ACTIONS(59),
    [anon_sym_exp] = ACTIONS(59),
    [anon_sym_log] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_sinh] = ACTIONS(59),
    [anon_sym_tan] = ACTIONS(59),
    [anon_sym_tanh] = ACTIONS(59),
    [anon_sym_autoinc] = ACTIONS(59),
    [anon_sym_cat] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(61),
    [anon_sym_min] = ACTIONS(61),
    [anon_sym_ord] = ACTIONS(59),
    [anon_sym_strlen] = ACTIONS(59),
    [anon_sym_substr] = ACTIONS(59),
    [anon_sym_to_float] = ACTIONS(59),
    [anon_sym_to_number] = ACTIONS(59),
    [anon_sym_to_string] = ACTIONS(59),
    [anon_sym_to_unsigned] = ACTIONS(59),
    [anon_sym_mean] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_count] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(97),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(163), 1,
      anon_sym_BANG,
    STATE(44), 2,
      sym_negation,
      aux_sym_conjunction_repeat1,
    ACTIONS(159), 10,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      sym_ipv4,
      sym_string,
      sym_unsigned,
      sym_hex,
      sym_binary,
      anon_sym_AT,
      anon_sym_TILDE,
    ACTIONS(161), 42,
      anon_sym_true,
      anon_sym_false,
      anon_sym_match,
      anon_sym_contains,
      aux_sym_decimal_token1,
      aux_sym_float_token1,
      sym_nil,
      sym_anonymous,
      anon_sym_as,
      anon_sym_acos,
      anon_sym_acosh,
      anon_sym_asin,
      anon_sym_asinh,
      anon_sym_atan,
      anon_sym_atanh,
      anon_sym_cos,
      anon_sym_cosh,
      anon_sym_exp,
      anon_sym_log,
      anon_sym_sin,
      anon_sym_sinh,
      anon_sym_tan,
      anon_sym_tanh,
      anon_sym_autoinc,
      anon_sym_cat,
      anon_sym_max,
      anon_sym_min,
      anon_sym_ord,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_mean,
      anon_sym_sum,
      anon_sym_count,
      anon_sym_range,
      anon_sym_bnot,
      anon_sym_lnot,
      anon_sym_DASH,
      sym_ident,
  [64] = 2,
    ACTIONS(166), 11,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      sym_ipv4,
      sym_string,
      sym_unsigned,
      sym_hex,
      sym_binary,
      anon_sym_AT,
      anon_sym_TILDE,
    ACTIONS(168), 42,
      anon_sym_true,
      anon_sym_false,
      anon_sym_match,
      anon_sym_contains,
      aux_sym_decimal_token1,
      aux_sym_float_token1,
      sym_nil,
      sym_anonymous,
      anon_sym_as,
      anon_sym_acos,
      anon_sym_acosh,
      anon_sym_asin,
      anon_sym_asinh,
      anon_sym_atan,
      anon_sym_atanh,
      anon_sym_cos,
      anon_sym_cosh,
      anon_sym_exp,
      anon_sym_log,
      anon_sym_sin,
      anon_sym_sinh,
      anon_sym_tan,
      anon_sym_tanh,
      anon_sym_autoinc,
      anon_sym_cat,
      anon_sym_max,
      anon_sym_min,
      anon_sym_ord,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_mean,
      anon_sym_sum,
      anon_sym_count,
      anon_sym_range,
      anon_sym_bnot,
      anon_sym_lnot,
      anon_sym_DASH,
      sym_ident,
  [122] = 2,
    ACTIONS(166), 11,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      sym_ipv4,
      sym_string,
      sym_unsigned,
      sym_hex,
      sym_binary,
      anon_sym_AT,
      anon_sym_TILDE,
    ACTIONS(168), 42,
      anon_sym_true,
      anon_sym_false,
      anon_sym_match,
      anon_sym_contains,
      aux_sym_decimal_token1,
      aux_sym_float_token1,
      sym_nil,
      sym_anonymous,
      anon_sym_as,
      anon_sym_acos,
      anon_sym_acosh,
      anon_sym_asin,
      anon_sym_asinh,
      anon_sym_atan,
      anon_sym_atanh,
      anon_sym_cos,
      anon_sym_cosh,
      anon_sym_exp,
      anon_sym_log,
      anon_sym_sin,
      anon_sym_sinh,
      anon_sym_tan,
      anon_sym_tanh,
      anon_sym_autoinc,
      anon_sym_cat,
      anon_sym_max,
      anon_sym_min,
      anon_sym_ord,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_mean,
      anon_sym_sum,
      anon_sym_count,
      anon_sym_range,
      anon_sym_bnot,
      anon_sym_lnot,
      anon_sym_DASH,
      sym_ident,
  [180] = 4,
    ACTIONS(174), 1,
      anon_sym_DOT,
    STATE(47), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(172), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(170), 29,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [228] = 4,
    ACTIONS(181), 1,
      anon_sym_DOT,
    STATE(47), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(179), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(177), 29,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [276] = 4,
    ACTIONS(181), 1,
      anon_sym_DOT,
    STATE(48), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(185), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(183), 29,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [324] = 2,
    ACTIONS(189), 9,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(187), 29,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_COLON_DASH,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [367] = 3,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(191), 29,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [412] = 2,
    ACTIONS(199), 9,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(197), 29,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_COLON_DASH,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [455] = 2,
    ACTIONS(203), 9,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(201), 29,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_COLON_DASH,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [498] = 2,
    ACTIONS(172), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(170), 30,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [541] = 2,
    ACTIONS(207), 9,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(205), 29,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_COLON_DASH,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [584] = 2,
    ACTIONS(211), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(209), 29,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [626] = 2,
    ACTIONS(215), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(213), 29,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [668] = 2,
    ACTIONS(219), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(217), 29,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [710] = 2,
    ACTIONS(223), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(221), 29,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [752] = 2,
    ACTIONS(227), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(225), 29,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [794] = 2,
    ACTIONS(231), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(229), 29,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [836] = 2,
    ACTIONS(235), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(233), 29,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [878] = 2,
    ACTIONS(239), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(237), 29,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [920] = 2,
    ACTIONS(243), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(241), 29,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [962] = 2,
    ACTIONS(247), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(245), 29,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [1004] = 2,
    ACTIONS(251), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(249), 29,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [1046] = 2,
    ACTIONS(255), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(253), 29,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [1088] = 2,
    ACTIONS(259), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(257), 29,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [1130] = 2,
    ACTIONS(263), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(261), 29,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [1172] = 2,
    ACTIONS(267), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(265), 29,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [1214] = 2,
    ACTIONS(271), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(269), 29,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [1256] = 2,
    ACTIONS(275), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(273), 29,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [1298] = 2,
    ACTIONS(279), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(277), 29,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [1340] = 2,
    ACTIONS(283), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(281), 29,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [1382] = 2,
    ACTIONS(287), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(285), 29,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [1424] = 2,
    ACTIONS(291), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(289), 29,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [1466] = 2,
    ACTIONS(295), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(293), 29,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [1508] = 2,
    ACTIONS(299), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(297), 29,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [1550] = 2,
    ACTIONS(303), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(301), 29,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [1592] = 2,
    ACTIONS(307), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(305), 29,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [1634] = 2,
    ACTIONS(311), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(309), 29,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [1676] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(319), 1,
      sym_ident,
    STATE(190), 1,
      sym_choice_domain,
    STATE(90), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(315), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(313), 18,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [1725] = 17,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    ACTIONS(323), 1,
      anon_sym_POUNDline,
    ACTIONS(326), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(329), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(332), 1,
      anon_sym_DOTpragma,
    ACTIONS(335), 1,
      anon_sym_DOTfunctor,
    ACTIONS(338), 1,
      anon_sym_DOTcomp,
    ACTIONS(341), 1,
      anon_sym_DOTinit,
    ACTIONS(347), 1,
      anon_sym_DOTdecl,
    ACTIONS(353), 1,
      anon_sym_DOTtype,
    ACTIONS(356), 1,
      sym_ident,
    STATE(298), 1,
      sym_atom,
    STATE(417), 1,
      sym__directive_qualifier,
    STATE(466), 1,
      sym_qualified_name,
    ACTIONS(350), 2,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
    ACTIONS(344), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(83), 16,
      sym_preprocessor,
      sym_block_comment,
      sym_line_comment,
      sym_pragma,
      sym_functor_decl,
      sym_component_decl,
      sym_component_init,
      sym_directive,
      sym__rule,
      sym_monotonic_rule,
      sym_subsumptive_rule,
      sym_fact,
      sym_relation_decl,
      sym_legacy_type_decl,
      sym_type_decl,
      aux_sym_program_repeat1,
  [1796] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(363), 1,
      sym_ident,
    STATE(191), 1,
      sym_choice_domain,
    STATE(104), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(361), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(359), 18,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [1845] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(369), 1,
      sym_ident,
    STATE(188), 1,
      sym_choice_domain,
    STATE(92), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(367), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(365), 18,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [1894] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(373), 1,
      sym_ident,
    STATE(192), 1,
      sym_choice_domain,
    STATE(104), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(361), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(371), 18,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [1943] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(377), 1,
      sym_ident,
    STATE(202), 1,
      sym_choice_domain,
    STATE(104), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(361), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(375), 18,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [1992] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(383), 1,
      sym_ident,
    STATE(196), 1,
      sym_choice_domain,
    STATE(84), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(381), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(379), 18,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [2041] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(389), 1,
      sym_ident,
    STATE(220), 1,
      sym_choice_domain,
    STATE(91), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(387), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(385), 18,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [2090] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(393), 1,
      sym_ident,
    STATE(195), 1,
      sym_choice_domain,
    STATE(104), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(361), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(391), 18,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [2139] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(397), 1,
      sym_ident,
    STATE(214), 1,
      sym_choice_domain,
    STATE(104), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(361), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(395), 18,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [2188] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(401), 1,
      sym_ident,
    STATE(217), 1,
      sym_choice_domain,
    STATE(104), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(361), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(399), 18,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [2237] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(407), 1,
      sym_ident,
    STATE(204), 1,
      sym_choice_domain,
    STATE(87), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(405), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(403), 18,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [2286] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(411), 1,
      sym_ident,
    STATE(219), 1,
      sym_choice_domain,
    STATE(104), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(361), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(409), 18,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [2335] = 4,
    ACTIONS(279), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(415), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(277), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(413), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [2380] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(421), 1,
      sym_ident,
    STATE(201), 1,
      sym_choice_domain,
    STATE(86), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(419), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(417), 18,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [2429] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(427), 1,
      sym_ident,
    STATE(199), 1,
      sym_choice_domain,
    STATE(94), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(425), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(423), 18,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [2478] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(431), 1,
      sym_ident,
    STATE(198), 1,
      sym_choice_domain,
    STATE(104), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(361), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(429), 18,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [2527] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(437), 1,
      sym_ident,
    STATE(227), 1,
      sym_choice_domain,
    STATE(100), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(435), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(433), 18,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [2576] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(441), 1,
      sym_ident,
    STATE(235), 1,
      sym_choice_domain,
    STATE(104), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(361), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(439), 18,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [2625] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(447), 1,
      sym_ident,
    STATE(216), 1,
      sym_choice_domain,
    STATE(98), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(445), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(443), 18,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [2674] = 17,
    ACTIONS(5), 1,
      anon_sym_POUNDline,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_DOTpragma,
    ACTIONS(13), 1,
      anon_sym_DOTfunctor,
    ACTIONS(15), 1,
      anon_sym_DOTcomp,
    ACTIONS(17), 1,
      anon_sym_DOTinit,
    ACTIONS(21), 1,
      anon_sym_DOTdecl,
    ACTIONS(25), 1,
      anon_sym_DOTtype,
    ACTIONS(27), 1,
      sym_ident,
    ACTIONS(449), 1,
      ts_builtin_sym_end,
    STATE(298), 1,
      sym_atom,
    STATE(417), 1,
      sym__directive_qualifier,
    STATE(466), 1,
      sym_qualified_name,
    ACTIONS(23), 2,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
    ACTIONS(19), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(83), 16,
      sym_preprocessor,
      sym_block_comment,
      sym_line_comment,
      sym_pragma,
      sym_functor_decl,
      sym_component_decl,
      sym_component_init,
      sym_directive,
      sym__rule,
      sym_monotonic_rule,
      sym_subsumptive_rule,
      sym_fact,
      sym_relation_decl,
      sym_legacy_type_decl,
      sym_type_decl,
      aux_sym_program_repeat1,
  [2745] = 5,
    ACTIONS(453), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(455), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(415), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(451), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
    ACTIONS(413), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [2792] = 4,
    ACTIONS(462), 1,
      sym_ident,
    STATE(104), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(459), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(457), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_choice_DASHdomain,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [2836] = 5,
    ACTIONS(181), 1,
      anon_sym_DOT,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(223), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(221), 23,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [2881] = 6,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    ACTIONS(455), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(466), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(468), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(415), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(413), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [2925] = 15,
    ACTIONS(5), 1,
      anon_sym_POUNDline,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      anon_sym_DOTcomp,
    ACTIONS(17), 1,
      anon_sym_DOTinit,
    ACTIONS(21), 1,
      anon_sym_DOTdecl,
    ACTIONS(27), 1,
      sym_ident,
    ACTIONS(470), 1,
      anon_sym_DOToverride,
    ACTIONS(472), 1,
      anon_sym_RBRACE,
    ACTIONS(476), 1,
      anon_sym_DOTtype,
    STATE(298), 1,
      sym_atom,
    STATE(414), 1,
      sym__directive_qualifier,
    STATE(466), 1,
      sym_qualified_name,
    ACTIONS(474), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(111), 13,
      sym_preprocessor,
      sym_block_comment,
      sym_line_comment,
      sym_component_decl,
      sym_component_init,
      sym_directive,
      sym__rule,
      sym_monotonic_rule,
      sym_subsumptive_rule,
      sym_fact,
      sym_relation_decl,
      sym_type_decl,
      aux_sym_component_decl_repeat2,
  [2986] = 15,
    ACTIONS(478), 1,
      anon_sym_POUNDline,
    ACTIONS(481), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(484), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(487), 1,
      anon_sym_DOTcomp,
    ACTIONS(490), 1,
      anon_sym_DOToverride,
    ACTIONS(493), 1,
      anon_sym_RBRACE,
    ACTIONS(495), 1,
      anon_sym_DOTinit,
    ACTIONS(501), 1,
      anon_sym_DOTdecl,
    ACTIONS(504), 1,
      anon_sym_DOTtype,
    ACTIONS(507), 1,
      sym_ident,
    STATE(298), 1,
      sym_atom,
    STATE(414), 1,
      sym__directive_qualifier,
    STATE(466), 1,
      sym_qualified_name,
    ACTIONS(498), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(108), 13,
      sym_preprocessor,
      sym_block_comment,
      sym_line_comment,
      sym_component_decl,
      sym_component_init,
      sym_directive,
      sym__rule,
      sym_monotonic_rule,
      sym_subsumptive_rule,
      sym_fact,
      sym_relation_decl,
      sym_type_decl,
      aux_sym_component_decl_repeat2,
  [3047] = 5,
    ACTIONS(455), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(466), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(468), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(415), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(413), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3088] = 15,
    ACTIONS(5), 1,
      anon_sym_POUNDline,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      anon_sym_DOTcomp,
    ACTIONS(17), 1,
      anon_sym_DOTinit,
    ACTIONS(21), 1,
      anon_sym_DOTdecl,
    ACTIONS(27), 1,
      sym_ident,
    ACTIONS(470), 1,
      anon_sym_DOToverride,
    ACTIONS(476), 1,
      anon_sym_DOTtype,
    ACTIONS(510), 1,
      anon_sym_RBRACE,
    STATE(298), 1,
      sym_atom,
    STATE(414), 1,
      sym__directive_qualifier,
    STATE(466), 1,
      sym_qualified_name,
    ACTIONS(474), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(112), 13,
      sym_preprocessor,
      sym_block_comment,
      sym_line_comment,
      sym_component_decl,
      sym_component_init,
      sym_directive,
      sym__rule,
      sym_monotonic_rule,
      sym_subsumptive_rule,
      sym_fact,
      sym_relation_decl,
      sym_type_decl,
      aux_sym_component_decl_repeat2,
  [3149] = 15,
    ACTIONS(5), 1,
      anon_sym_POUNDline,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      anon_sym_DOTcomp,
    ACTIONS(17), 1,
      anon_sym_DOTinit,
    ACTIONS(21), 1,
      anon_sym_DOTdecl,
    ACTIONS(27), 1,
      sym_ident,
    ACTIONS(470), 1,
      anon_sym_DOToverride,
    ACTIONS(476), 1,
      anon_sym_DOTtype,
    ACTIONS(512), 1,
      anon_sym_RBRACE,
    STATE(298), 1,
      sym_atom,
    STATE(414), 1,
      sym__directive_qualifier,
    STATE(466), 1,
      sym_qualified_name,
    ACTIONS(474), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(108), 13,
      sym_preprocessor,
      sym_block_comment,
      sym_line_comment,
      sym_component_decl,
      sym_component_init,
      sym_directive,
      sym__rule,
      sym_monotonic_rule,
      sym_subsumptive_rule,
      sym_fact,
      sym_relation_decl,
      sym_type_decl,
      aux_sym_component_decl_repeat2,
  [3210] = 15,
    ACTIONS(5), 1,
      anon_sym_POUNDline,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      anon_sym_DOTcomp,
    ACTIONS(17), 1,
      anon_sym_DOTinit,
    ACTIONS(21), 1,
      anon_sym_DOTdecl,
    ACTIONS(27), 1,
      sym_ident,
    ACTIONS(470), 1,
      anon_sym_DOToverride,
    ACTIONS(476), 1,
      anon_sym_DOTtype,
    ACTIONS(514), 1,
      anon_sym_RBRACE,
    STATE(298), 1,
      sym_atom,
    STATE(414), 1,
      sym__directive_qualifier,
    STATE(466), 1,
      sym_qualified_name,
    ACTIONS(474), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(108), 13,
      sym_preprocessor,
      sym_block_comment,
      sym_line_comment,
      sym_component_decl,
      sym_component_init,
      sym_directive,
      sym__rule,
      sym_monotonic_rule,
      sym_subsumptive_rule,
      sym_fact,
      sym_relation_decl,
      sym_type_decl,
      aux_sym_component_decl_repeat2,
  [3271] = 5,
    ACTIONS(455), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(516), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(518), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(415), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(413), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3312] = 15,
    ACTIONS(5), 1,
      anon_sym_POUNDline,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      anon_sym_DOTcomp,
    ACTIONS(17), 1,
      anon_sym_DOTinit,
    ACTIONS(21), 1,
      anon_sym_DOTdecl,
    ACTIONS(27), 1,
      sym_ident,
    ACTIONS(470), 1,
      anon_sym_DOToverride,
    ACTIONS(476), 1,
      anon_sym_DOTtype,
    ACTIONS(520), 1,
      anon_sym_RBRACE,
    STATE(298), 1,
      sym_atom,
    STATE(414), 1,
      sym__directive_qualifier,
    STATE(466), 1,
      sym_qualified_name,
    ACTIONS(474), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(108), 13,
      sym_preprocessor,
      sym_block_comment,
      sym_line_comment,
      sym_component_decl,
      sym_component_init,
      sym_directive,
      sym__rule,
      sym_monotonic_rule,
      sym_subsumptive_rule,
      sym_fact,
      sym_relation_decl,
      sym_type_decl,
      aux_sym_component_decl_repeat2,
  [3373] = 15,
    ACTIONS(5), 1,
      anon_sym_POUNDline,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      anon_sym_DOTcomp,
    ACTIONS(17), 1,
      anon_sym_DOTinit,
    ACTIONS(21), 1,
      anon_sym_DOTdecl,
    ACTIONS(27), 1,
      sym_ident,
    ACTIONS(470), 1,
      anon_sym_DOToverride,
    ACTIONS(476), 1,
      anon_sym_DOTtype,
    ACTIONS(522), 1,
      anon_sym_RBRACE,
    STATE(298), 1,
      sym_atom,
    STATE(414), 1,
      sym__directive_qualifier,
    STATE(466), 1,
      sym_qualified_name,
    ACTIONS(474), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(114), 13,
      sym_preprocessor,
      sym_block_comment,
      sym_line_comment,
      sym_component_decl,
      sym_component_init,
      sym_directive,
      sym__rule,
      sym_monotonic_rule,
      sym_subsumptive_rule,
      sym_fact,
      sym_relation_decl,
      sym_type_decl,
      aux_sym_component_decl_repeat2,
  [3434] = 3,
    STATE(47), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(179), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(177), 22,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3470] = 3,
    STATE(116), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(185), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(183), 22,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3506] = 4,
    ACTIONS(455), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(524), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(415), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(413), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3543] = 6,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_RPAREN,
    STATE(343), 1,
      aux_sym_match_repeat1,
    ACTIONS(455), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(415), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(413), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3583] = 6,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
    STATE(373), 1,
      aux_sym_adt_constructor_repeat1,
    ACTIONS(455), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(415), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(413), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3623] = 6,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
    STATE(361), 1,
      aux_sym_match_repeat1,
    ACTIONS(455), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(415), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(413), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3663] = 6,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
    STATE(369), 1,
      aux_sym_match_repeat1,
    ACTIONS(455), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(415), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(413), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3703] = 3,
    ACTIONS(277), 5,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(536), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(534), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3737] = 4,
    ACTIONS(455), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(538), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(415), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(413), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3773] = 6,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
    STATE(364), 1,
      aux_sym_match_repeat1,
    ACTIONS(455), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(415), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(413), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3813] = 6,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    ACTIONS(542), 1,
      anon_sym_RBRACK,
    STATE(391), 1,
      aux_sym_adt_constructor_repeat1,
    ACTIONS(455), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(415), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(413), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3853] = 4,
    ACTIONS(544), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(524), 3,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
    ACTIONS(536), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(534), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3889] = 4,
    ACTIONS(544), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(451), 3,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
    ACTIONS(536), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(534), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3925] = 4,
    ACTIONS(455), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(546), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(415), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(413), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3960] = 5,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    ACTIONS(550), 1,
      anon_sym_RPAREN,
    ACTIONS(455), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(415), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(413), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3997] = 4,
    ACTIONS(552), 1,
      anon_sym_COLON,
    ACTIONS(455), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(415), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(413), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [4031] = 4,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(455), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(415), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(413), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [4065] = 4,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
    ACTIONS(455), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(415), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(413), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [4099] = 4,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    ACTIONS(455), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(415), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(413), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [4133] = 4,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    ACTIONS(455), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(415), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(413), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [4167] = 1,
    ACTIONS(560), 23,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4193] = 2,
    ACTIONS(564), 1,
      anon_sym_LT,
    ACTIONS(562), 22,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOTcomp,
      anon_sym_LBRACE,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4221] = 3,
    ACTIONS(566), 1,
      anon_sym_DOT,
    STATE(142), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(183), 20,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_PIPE,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4250] = 1,
    ACTIONS(568), 22,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOTcomp,
      anon_sym_LBRACE,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4275] = 1,
    ACTIONS(570), 22,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOTcomp,
      anon_sym_LBRACE,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4300] = 3,
    ACTIONS(572), 1,
      anon_sym_DOT,
    STATE(141), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(170), 20,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_PIPE,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4329] = 3,
    ACTIONS(566), 1,
      anon_sym_DOT,
    STATE(141), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(177), 20,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_PIPE,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4358] = 3,
    ACTIONS(577), 1,
      anon_sym_PIPE,
    STATE(155), 1,
      aux_sym_adt_repeat1,
    ACTIONS(575), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4386] = 3,
    ACTIONS(581), 1,
      anon_sym_DOTplan,
    STATE(207), 1,
      sym_query_plan,
    ACTIONS(579), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4414] = 3,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    STATE(159), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(583), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4442] = 3,
    ACTIONS(581), 1,
      anon_sym_DOTplan,
    STATE(203), 1,
      sym_query_plan,
    ACTIONS(587), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4470] = 3,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    STATE(148), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(589), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4498] = 3,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    STATE(163), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(593), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4526] = 3,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(593), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4554] = 4,
    ACTIONS(566), 1,
      anon_sym_DOT,
    ACTIONS(595), 1,
      anon_sym_LBRACE,
    STATE(142), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(183), 18,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_PIPE,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4584] = 3,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(597), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4612] = 3,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(599), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4640] = 3,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(601), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4668] = 3,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    STATE(152), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(597), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4696] = 3,
    ACTIONS(577), 1,
      anon_sym_PIPE,
    STATE(158), 1,
      aux_sym_adt_repeat1,
    ACTIONS(603), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4724] = 3,
    ACTIONS(581), 1,
      anon_sym_DOTplan,
    STATE(228), 1,
      sym_query_plan,
    ACTIONS(605), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4752] = 3,
    ACTIONS(609), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(607), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4780] = 3,
    ACTIONS(614), 1,
      anon_sym_PIPE,
    STATE(158), 1,
      aux_sym_adt_repeat1,
    ACTIONS(612), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4808] = 3,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(617), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4836] = 3,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    STATE(163), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(619), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4864] = 3,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(619), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4892] = 2,
    ACTIONS(172), 1,
      anon_sym_DOT,
    ACTIONS(170), 20,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_PIPE,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4918] = 3,
    ACTIONS(623), 1,
      anon_sym_COMMA,
    STATE(163), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(621), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4946] = 1,
    ACTIONS(626), 21,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4970] = 3,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    STATE(163), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(628), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4998] = 1,
    ACTIONS(630), 20,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_COMMA,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5021] = 1,
    ACTIONS(632), 20,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_COMMA,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5044] = 1,
    ACTIONS(634), 20,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_COMMA,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5067] = 1,
    ACTIONS(636), 20,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_PIPE,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5090] = 4,
    ACTIONS(640), 1,
      anon_sym_LPAREN,
    ACTIONS(642), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      aux_sym_directive_repeat1,
    ACTIONS(638), 17,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5119] = 1,
    ACTIONS(644), 20,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_PIPE,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5142] = 1,
    ACTIONS(646), 20,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_PIPE,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5165] = 1,
    ACTIONS(648), 20,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_PIPE,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5188] = 1,
    ACTIONS(650), 20,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_PIPE,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5211] = 1,
    ACTIONS(652), 20,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_PIPE,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5234] = 4,
    ACTIONS(654), 1,
      anon_sym_DOT,
    STATE(176), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(172), 2,
      anon_sym_stateful,
      sym_ident,
    ACTIONS(170), 16,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [5263] = 1,
    ACTIONS(607), 20,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_COMMA,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5286] = 4,
    ACTIONS(657), 1,
      anon_sym_DOT,
    STATE(176), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(179), 2,
      anon_sym_stateful,
      sym_ident,
    ACTIONS(177), 16,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [5315] = 4,
    ACTIONS(657), 1,
      anon_sym_DOT,
    STATE(178), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(185), 2,
      anon_sym_stateful,
      sym_ident,
    ACTIONS(183), 16,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [5344] = 1,
    ACTIONS(659), 20,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_COMMA,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5367] = 3,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      aux_sym_directive_repeat1,
    ACTIONS(661), 18,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_LPAREN,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5394] = 1,
    ACTIONS(666), 20,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_COMMA,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5417] = 4,
    ACTIONS(642), 1,
      anon_sym_COMMA,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    STATE(170), 1,
      aux_sym_directive_repeat1,
    ACTIONS(668), 17,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5446] = 3,
    ACTIONS(674), 1,
      anon_sym_PIPE,
    STATE(218), 1,
      aux_sym_type_union_repeat1,
    ACTIONS(672), 17,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5472] = 1,
    ACTIONS(676), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5494] = 1,
    ACTIONS(678), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5516] = 1,
    ACTIONS(680), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5538] = 1,
    ACTIONS(682), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5560] = 1,
    ACTIONS(684), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5582] = 1,
    ACTIONS(686), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5604] = 1,
    ACTIONS(688), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5626] = 1,
    ACTIONS(690), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5648] = 1,
    ACTIONS(692), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5670] = 1,
    ACTIONS(694), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5692] = 1,
    ACTIONS(696), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5714] = 1,
    ACTIONS(365), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5736] = 1,
    ACTIONS(698), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5758] = 1,
    ACTIONS(700), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5780] = 1,
    ACTIONS(433), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5802] = 2,
    ACTIONS(172), 3,
      anon_sym_stateful,
      anon_sym_DOT,
      sym_ident,
    ACTIONS(170), 16,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [5826] = 1,
    ACTIONS(313), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5848] = 1,
    ACTIONS(702), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5870] = 1,
    ACTIONS(704), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5892] = 1,
    ACTIONS(379), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5914] = 3,
    ACTIONS(706), 1,
      anon_sym_DOT,
    STATE(205), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(170), 17,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_PIPE,
      anon_sym_DOTdecl,
      anon_sym_DOTtype,
      sym_ident,
  [5940] = 1,
    ACTIONS(709), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5962] = 1,
    ACTIONS(711), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5984] = 3,
    ACTIONS(713), 1,
      anon_sym_DOT,
    STATE(205), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(177), 17,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_PIPE,
      anon_sym_DOTdecl,
      anon_sym_DOTtype,
      sym_ident,
  [6010] = 1,
    ACTIONS(715), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6032] = 3,
    ACTIONS(719), 1,
      anon_sym_EQ,
    ACTIONS(721), 1,
      anon_sym_LT_COLON,
    ACTIONS(717), 17,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6058] = 1,
    ACTIONS(723), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6080] = 1,
    ACTIONS(725), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6102] = 3,
    ACTIONS(713), 1,
      anon_sym_DOT,
    STATE(208), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(183), 17,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_PIPE,
      anon_sym_DOTdecl,
      anon_sym_DOTtype,
      sym_ident,
  [6128] = 1,
    ACTIONS(727), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6150] = 1,
    ACTIONS(729), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6172] = 1,
    ACTIONS(417), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6194] = 1,
    ACTIONS(731), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6216] = 3,
    ACTIONS(674), 1,
      anon_sym_PIPE,
    STATE(230), 1,
      aux_sym_type_union_repeat1,
    ACTIONS(733), 17,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6242] = 1,
    ACTIONS(735), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6264] = 1,
    ACTIONS(423), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6286] = 1,
    ACTIONS(737), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6308] = 1,
    ACTIONS(739), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6330] = 1,
    ACTIONS(741), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6352] = 1,
    ACTIONS(743), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6374] = 1,
    ACTIONS(745), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6396] = 1,
    ACTIONS(747), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6418] = 1,
    ACTIONS(749), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6440] = 1,
    ACTIONS(751), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6462] = 1,
    ACTIONS(753), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6484] = 3,
    ACTIONS(755), 1,
      anon_sym_PIPE,
    STATE(230), 1,
      aux_sym_type_union_repeat1,
    ACTIONS(644), 17,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6510] = 1,
    ACTIONS(758), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6532] = 1,
    ACTIONS(760), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6554] = 1,
    ACTIONS(762), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6576] = 1,
    ACTIONS(764), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6598] = 1,
    ACTIONS(766), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6620] = 1,
    ACTIONS(768), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6642] = 3,
    ACTIONS(772), 1,
      anon_sym_stateful,
    ACTIONS(774), 1,
      sym_ident,
    ACTIONS(770), 16,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [6667] = 4,
    ACTIONS(595), 1,
      anon_sym_LBRACE,
    ACTIONS(713), 1,
      anon_sym_DOT,
    STATE(208), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(183), 15,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_PIPE,
      anon_sym_DOTdecl,
      anon_sym_DOTtype,
      sym_ident,
  [6694] = 3,
    ACTIONS(778), 1,
      anon_sym_stateful,
    ACTIONS(780), 1,
      sym_ident,
    ACTIONS(776), 16,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [6719] = 3,
    ACTIONS(784), 1,
      anon_sym_stateful,
    ACTIONS(786), 1,
      sym_ident,
    ACTIONS(782), 16,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [6744] = 3,
    ACTIONS(790), 1,
      anon_sym_stateful,
    ACTIONS(792), 1,
      sym_ident,
    ACTIONS(788), 16,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [6769] = 2,
    ACTIONS(172), 1,
      anon_sym_DOT,
    ACTIONS(170), 17,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_PIPE,
      anon_sym_DOTdecl,
      anon_sym_DOTtype,
      sym_ident,
  [6792] = 3,
    ACTIONS(796), 1,
      anon_sym_stateful,
    ACTIONS(798), 1,
      sym_ident,
    ACTIONS(794), 16,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [6817] = 2,
    ACTIONS(800), 2,
      anon_sym_stateful,
      sym_ident,
    ACTIONS(560), 16,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [6840] = 3,
    ACTIONS(804), 1,
      anon_sym_stateful,
    ACTIONS(806), 1,
      sym_ident,
    ACTIONS(802), 16,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [6865] = 2,
    ACTIONS(810), 1,
      sym_string,
    ACTIONS(808), 17,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6888] = 4,
    ACTIONS(640), 1,
      anon_sym_LPAREN,
    ACTIONS(812), 1,
      anon_sym_COMMA,
    STATE(256), 1,
      aux_sym_directive_repeat1,
    ACTIONS(638), 14,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTtype,
      sym_ident,
  [6914] = 1,
    ACTIONS(814), 17,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6934] = 4,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(812), 1,
      anon_sym_COMMA,
    STATE(247), 1,
      aux_sym_directive_repeat1,
    ACTIONS(668), 14,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTtype,
      sym_ident,
  [6960] = 1,
    ACTIONS(816), 17,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6980] = 1,
    ACTIONS(818), 17,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7000] = 1,
    ACTIONS(820), 17,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7020] = 1,
    ACTIONS(822), 17,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7040] = 1,
    ACTIONS(824), 17,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7060] = 1,
    ACTIONS(826), 17,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7080] = 3,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    STATE(256), 1,
      aux_sym_directive_repeat1,
    ACTIONS(661), 15,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LPAREN,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTtype,
      sym_ident,
  [7104] = 1,
    ACTIONS(831), 17,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7124] = 3,
    ACTIONS(833), 1,
      anon_sym_EQ,
    ACTIONS(835), 1,
      anon_sym_LT_COLON,
    ACTIONS(717), 14,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTtype,
      sym_ident,
  [7147] = 3,
    ACTIONS(837), 1,
      anon_sym_PIPE,
    STATE(260), 1,
      aux_sym_type_union_repeat1,
    ACTIONS(733), 14,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTtype,
      sym_ident,
  [7170] = 3,
    ACTIONS(839), 1,
      anon_sym_PIPE,
    STATE(260), 1,
      aux_sym_type_union_repeat1,
    ACTIONS(644), 14,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTtype,
      sym_ident,
  [7193] = 3,
    ACTIONS(837), 1,
      anon_sym_PIPE,
    STATE(259), 1,
      aux_sym_type_union_repeat1,
    ACTIONS(672), 14,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTtype,
      sym_ident,
  [7216] = 1,
    ACTIONS(493), 14,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTtype,
      sym_ident,
  [7233] = 7,
    ACTIONS(842), 1,
      anon_sym_COMMA,
    ACTIONS(844), 1,
      anon_sym_RPAREN,
    ACTIONS(848), 1,
      sym_ident,
    STATE(394), 1,
      aux_sym_functor_decl_repeat1,
    STATE(396), 1,
      sym_attribute,
    STATE(397), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(846), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7260] = 8,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      sym_unsigned,
    ACTIONS(852), 1,
      aux_sym_float_token1,
    STATE(80), 1,
      sym_decimal,
    ACTIONS(49), 2,
      sym_hex,
      sym_binary,
    ACTIONS(850), 2,
      sym_string,
      sym_ident,
    STATE(79), 2,
      sym_integer,
      sym_float,
    STATE(355), 2,
      sym__directive_value,
      sym_number,
  [7289] = 8,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      sym_unsigned,
    ACTIONS(852), 1,
      aux_sym_float_token1,
    STATE(80), 1,
      sym_decimal,
    ACTIONS(49), 2,
      sym_hex,
      sym_binary,
    ACTIONS(854), 2,
      sym_string,
      sym_ident,
    STATE(79), 2,
      sym_integer,
      sym_float,
    STATE(372), 2,
      sym__directive_value,
      sym_number,
  [7318] = 8,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      sym_unsigned,
    ACTIONS(852), 1,
      aux_sym_float_token1,
    STATE(80), 1,
      sym_decimal,
    ACTIONS(49), 2,
      sym_hex,
      sym_binary,
    ACTIONS(856), 2,
      sym_string,
      sym_ident,
    STATE(79), 2,
      sym_integer,
      sym_float,
    STATE(423), 2,
      sym__directive_value,
      sym_number,
  [7347] = 5,
    ACTIONS(858), 1,
      anon_sym_LBRACK,
    ACTIONS(860), 1,
      sym_ident,
    STATE(143), 1,
      sym__adt_branch,
    STATE(261), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(846), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7368] = 5,
    ACTIONS(858), 1,
      anon_sym_LBRACK,
    ACTIONS(862), 1,
      sym_ident,
    STATE(143), 1,
      sym__adt_branch,
    STATE(184), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(846), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7389] = 4,
    ACTIONS(848), 1,
      sym_ident,
    STATE(427), 1,
      sym_attribute,
    STATE(421), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(846), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7407] = 3,
    ACTIONS(864), 1,
      sym_ident,
    STATE(334), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(846), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7422] = 3,
    ACTIONS(868), 1,
      sym_ident,
    STATE(243), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(866), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7437] = 3,
    ACTIONS(868), 1,
      sym_ident,
    STATE(239), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(866), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7452] = 3,
    ACTIONS(868), 1,
      sym_ident,
    STATE(237), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(866), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7467] = 3,
    ACTIONS(868), 1,
      sym_ident,
    STATE(245), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(866), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7482] = 3,
    ACTIONS(870), 1,
      sym_ident,
    STATE(171), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(846), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7497] = 3,
    ACTIONS(864), 1,
      sym_ident,
    STATE(474), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(846), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7512] = 3,
    ACTIONS(870), 1,
      sym_ident,
    STATE(255), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(846), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7527] = 3,
    ACTIONS(870), 1,
      sym_ident,
    STATE(209), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(846), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7542] = 3,
    ACTIONS(868), 1,
      sym_ident,
    STATE(241), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(866), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7557] = 3,
    ACTIONS(872), 1,
      sym_ident,
    STATE(209), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(846), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7572] = 3,
    ACTIONS(868), 1,
      sym_ident,
    STATE(240), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(866), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7587] = 3,
    ACTIONS(872), 1,
      sym_ident,
    STATE(171), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(846), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7602] = 2,
    ACTIONS(874), 1,
      sym_ident,
    STATE(212), 6,
      sym_legacy_bare_type_decl,
      sym_subtype,
      sym_type_synonym,
      sym_type_union,
      sym_type_record,
      sym_adt,
  [7614] = 2,
    ACTIONS(876), 1,
      sym_ident,
    STATE(212), 6,
      sym_legacy_bare_type_decl,
      sym_subtype,
      sym_type_synonym,
      sym_type_union,
      sym_type_record,
      sym_adt,
  [7626] = 1,
    ACTIONS(878), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7634] = 1,
    ACTIONS(880), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7642] = 3,
    ACTIONS(882), 1,
      anon_sym_COMMA,
    STATE(287), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(878), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [7654] = 3,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    STATE(287), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(887), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [7666] = 1,
    ACTIONS(889), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7674] = 3,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    STATE(304), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(891), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [7686] = 1,
    ACTIONS(893), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7694] = 5,
    ACTIONS(895), 1,
      anon_sym_COMMA,
    ACTIONS(897), 1,
      anon_sym_RBRACK,
    ACTIONS(899), 1,
      sym_ident,
    STATE(342), 1,
      aux_sym_relation_decl_repeat2,
    STATE(344), 1,
      sym_attribute,
  [7710] = 5,
    ACTIONS(895), 1,
      anon_sym_COMMA,
    ACTIONS(899), 1,
      sym_ident,
    ACTIONS(901), 1,
      anon_sym_RPAREN,
    STATE(345), 1,
      aux_sym_relation_decl_repeat2,
    STATE(346), 1,
      sym_attribute,
  [7726] = 3,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    STATE(312), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(903), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [7738] = 3,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    STATE(287), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(903), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [7750] = 1,
    ACTIONS(905), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7758] = 5,
    ACTIONS(899), 1,
      sym_ident,
    ACTIONS(907), 1,
      anon_sym_COMMA,
    ACTIONS(909), 1,
      anon_sym_RBRACE,
    STATE(377), 1,
      sym_attribute,
    STATE(381), 1,
      aux_sym__adt_branch_repeat1,
  [7774] = 5,
    ACTIONS(911), 1,
      anon_sym_COMMA,
    ACTIONS(913), 1,
      anon_sym_COLON_DASH,
    ACTIONS(915), 1,
      anon_sym_DOT,
    ACTIONS(917), 1,
      anon_sym_LT_EQ,
    STATE(406), 1,
      aux_sym_monotonic_rule_repeat1,
  [7790] = 5,
    ACTIONS(895), 1,
      anon_sym_COMMA,
    ACTIONS(899), 1,
      sym_ident,
    ACTIONS(919), 1,
      anon_sym_RPAREN,
    STATE(382), 1,
      aux_sym_relation_decl_repeat2,
    STATE(386), 1,
      sym_attribute,
  [7806] = 1,
    ACTIONS(921), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7814] = 5,
    ACTIONS(895), 1,
      anon_sym_COMMA,
    ACTIONS(899), 1,
      sym_ident,
    ACTIONS(923), 1,
      anon_sym_RPAREN,
    STATE(338), 1,
      aux_sym_relation_decl_repeat2,
    STATE(385), 1,
      sym_attribute,
  [7830] = 3,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    STATE(288), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(925), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [7842] = 1,
    ACTIONS(927), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7850] = 3,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    STATE(287), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(925), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [7862] = 1,
    ACTIONS(929), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7870] = 3,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    STATE(295), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(931), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [7882] = 4,
    ACTIONS(181), 1,
      anon_sym_DOT,
    ACTIONS(933), 1,
      anon_sym_COLON,
    STATE(48), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(183), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7896] = 1,
    ACTIONS(935), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7904] = 1,
    ACTIONS(937), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7912] = 1,
    ACTIONS(939), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7920] = 1,
    ACTIONS(941), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7928] = 3,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    STATE(287), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(891), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [7940] = 1,
    ACTIONS(943), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7948] = 3,
    ACTIONS(947), 1,
      anon_sym_SEMI,
    STATE(326), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(945), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [7959] = 3,
    ACTIONS(949), 1,
      anon_sym_COMMA,
    STATE(315), 1,
      aux_sym_adt_constructor_repeat1,
    ACTIONS(538), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7970] = 4,
    ACTIONS(952), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(954), 1,
      anon_sym_COMMA,
    ACTIONS(956), 1,
      anon_sym_RPAREN,
    STATE(383), 1,
      aux_sym_query_plan_repeat1,
  [7983] = 3,
    ACTIONS(958), 1,
      anon_sym_COMMA,
    STATE(329), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(925), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7994] = 3,
    ACTIONS(958), 1,
      anon_sym_COMMA,
    STATE(317), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(891), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8005] = 3,
    ACTIONS(960), 1,
      anon_sym_COMMA,
    STATE(319), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(963), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [8016] = 4,
    ACTIONS(965), 1,
      anon_sym_COMMA,
    ACTIONS(967), 1,
      anon_sym_RPAREN,
    ACTIONS(969), 1,
      sym_ident,
    STATE(380), 1,
      aux_sym_directive_repeat2,
  [8029] = 3,
    ACTIONS(958), 1,
      anon_sym_COMMA,
    STATE(329), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(891), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8040] = 3,
    ACTIONS(973), 1,
      anon_sym_COMMA,
    STATE(322), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(971), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [8051] = 4,
    ACTIONS(27), 1,
      sym_ident,
    ACTIONS(976), 1,
      anon_sym_LBRACE,
    STATE(61), 1,
      sym_atom,
    STATE(466), 1,
      sym_qualified_name,
  [8064] = 4,
    ACTIONS(978), 1,
      anon_sym_LPAREN,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    ACTIONS(982), 1,
      sym_ident,
    STATE(399), 1,
      aux_sym_relation_decl_repeat1,
  [8077] = 4,
    ACTIONS(954), 1,
      anon_sym_COMMA,
    ACTIONS(984), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(986), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      aux_sym_query_plan_repeat1,
  [8090] = 3,
    ACTIONS(990), 1,
      anon_sym_SEMI,
    STATE(326), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(988), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [8101] = 1,
    ACTIONS(988), 4,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8108] = 3,
    ACTIONS(958), 1,
      anon_sym_COMMA,
    STATE(329), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(887), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8119] = 3,
    ACTIONS(993), 1,
      anon_sym_COMMA,
    STATE(329), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(878), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8130] = 3,
    ACTIONS(958), 1,
      anon_sym_COMMA,
    STATE(328), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(925), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8141] = 3,
    ACTIONS(958), 1,
      anon_sym_COMMA,
    STATE(336), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(931), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8152] = 3,
    ACTIONS(958), 1,
      anon_sym_COMMA,
    STATE(321), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(903), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8163] = 4,
    ACTIONS(27), 1,
      sym_ident,
    ACTIONS(996), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_atom,
    STATE(466), 1,
      sym_qualified_name,
  [8176] = 1,
    ACTIONS(998), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [8183] = 4,
    ACTIONS(965), 1,
      anon_sym_COMMA,
    ACTIONS(1000), 1,
      anon_sym_RPAREN,
    ACTIONS(1002), 1,
      sym_ident,
    STATE(375), 1,
      aux_sym_directive_repeat2,
  [8196] = 3,
    ACTIONS(958), 1,
      anon_sym_COMMA,
    STATE(329), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(903), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8207] = 3,
    ACTIONS(947), 1,
      anon_sym_SEMI,
    STATE(314), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(1004), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [8218] = 3,
    ACTIONS(895), 1,
      anon_sym_COMMA,
    ACTIONS(1006), 1,
      anon_sym_RPAREN,
    STATE(319), 1,
      aux_sym_relation_decl_repeat2,
  [8228] = 3,
    ACTIONS(1004), 1,
      anon_sym_DOT,
    ACTIONS(1008), 1,
      anon_sym_SEMI,
    STATE(370), 1,
      aux_sym_disjunction_repeat1,
  [8238] = 3,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(1010), 1,
      anon_sym_RPAREN,
    STATE(363), 1,
      aux_sym_match_repeat1,
  [8248] = 3,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    ACTIONS(1012), 1,
      anon_sym_LPAREN,
    STATE(322), 1,
      aux_sym_relation_decl_repeat1,
  [8258] = 3,
    ACTIONS(895), 1,
      anon_sym_COMMA,
    ACTIONS(1014), 1,
      anon_sym_RBRACK,
    STATE(319), 1,
      aux_sym_relation_decl_repeat2,
  [8268] = 3,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(1016), 1,
      anon_sym_RPAREN,
    STATE(363), 1,
      aux_sym_match_repeat1,
  [8278] = 3,
    ACTIONS(895), 1,
      anon_sym_COMMA,
    ACTIONS(1014), 1,
      anon_sym_RBRACK,
    STATE(374), 1,
      aux_sym_relation_decl_repeat2,
  [8288] = 3,
    ACTIONS(895), 1,
      anon_sym_COMMA,
    ACTIONS(1018), 1,
      anon_sym_RPAREN,
    STATE(319), 1,
      aux_sym_relation_decl_repeat2,
  [8298] = 3,
    ACTIONS(895), 1,
      anon_sym_COMMA,
    ACTIONS(1018), 1,
      anon_sym_RPAREN,
    STATE(365), 1,
      aux_sym_relation_decl_repeat2,
  [8308] = 3,
    ACTIONS(895), 1,
      anon_sym_COMMA,
    ACTIONS(1020), 1,
      anon_sym_RPAREN,
    STATE(319), 1,
      aux_sym_relation_decl_repeat2,
  [8318] = 3,
    ACTIONS(1022), 1,
      anon_sym_COMMA,
    ACTIONS(1025), 1,
      anon_sym_LBRACE,
    STATE(348), 1,
      aux_sym_component_decl_repeat1,
  [8328] = 3,
    ACTIONS(1027), 1,
      anon_sym_COMMA,
    ACTIONS(1029), 1,
      anon_sym_LBRACE,
    STATE(348), 1,
      aux_sym_component_decl_repeat1,
  [8338] = 3,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(1031), 1,
      anon_sym_RPAREN,
    STATE(363), 1,
      aux_sym_match_repeat1,
  [8348] = 3,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1035), 1,
      anon_sym_GT,
    STATE(384), 1,
      aux_sym_component_type_repeat1,
  [8358] = 3,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    ACTIONS(1037), 1,
      anon_sym_RPAREN,
    STATE(354), 1,
      aux_sym_relation_decl_repeat1,
  [8368] = 3,
    ACTIONS(1039), 1,
      anon_sym_COMMA,
    ACTIONS(1042), 1,
      anon_sym_RPAREN,
    STATE(353), 1,
      aux_sym_functor_decl_repeat1,
  [8378] = 3,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    ACTIONS(1044), 1,
      anon_sym_RPAREN,
    STATE(322), 1,
      aux_sym_relation_decl_repeat1,
  [8388] = 3,
    ACTIONS(965), 1,
      anon_sym_COMMA,
    ACTIONS(1046), 1,
      anon_sym_RPAREN,
    STATE(371), 1,
      aux_sym_directive_repeat2,
  [8398] = 3,
    ACTIONS(954), 1,
      anon_sym_COMMA,
    ACTIONS(1048), 1,
      anon_sym_RPAREN,
    STATE(378), 1,
      aux_sym_query_plan_repeat1,
  [8408] = 3,
    ACTIONS(842), 1,
      anon_sym_COMMA,
    ACTIONS(1050), 1,
      anon_sym_RPAREN,
    STATE(353), 1,
      aux_sym_functor_decl_repeat1,
  [8418] = 3,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(1052), 1,
      anon_sym_RPAREN,
    STATE(363), 1,
      aux_sym_match_repeat1,
  [8428] = 3,
    ACTIONS(842), 1,
      anon_sym_COMMA,
    ACTIONS(1054), 1,
      anon_sym_RPAREN,
    STATE(353), 1,
      aux_sym_functor_decl_repeat1,
  [8438] = 3,
    ACTIONS(988), 1,
      anon_sym_DOT,
    ACTIONS(1056), 1,
      anon_sym_SEMI,
    STATE(360), 1,
      aux_sym_disjunction_repeat1,
  [8448] = 3,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(1059), 1,
      anon_sym_RPAREN,
    STATE(363), 1,
      aux_sym_match_repeat1,
  [8458] = 3,
    ACTIONS(954), 1,
      anon_sym_COMMA,
    ACTIONS(1061), 1,
      anon_sym_RPAREN,
    STATE(378), 1,
      aux_sym_query_plan_repeat1,
  [8468] = 3,
    ACTIONS(1063), 1,
      anon_sym_COMMA,
    ACTIONS(1066), 1,
      anon_sym_RPAREN,
    STATE(363), 1,
      aux_sym_match_repeat1,
  [8478] = 3,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(1068), 1,
      anon_sym_RPAREN,
    STATE(363), 1,
      aux_sym_match_repeat1,
  [8488] = 3,
    ACTIONS(895), 1,
      anon_sym_COMMA,
    ACTIONS(1070), 1,
      anon_sym_RPAREN,
    STATE(319), 1,
      aux_sym_relation_decl_repeat2,
  [8498] = 3,
    ACTIONS(954), 1,
      anon_sym_COMMA,
    ACTIONS(1061), 1,
      anon_sym_RPAREN,
    STATE(356), 1,
      aux_sym_query_plan_repeat1,
  [8508] = 3,
    ACTIONS(907), 1,
      anon_sym_COMMA,
    ACTIONS(1072), 1,
      anon_sym_RBRACE,
    STATE(368), 1,
      aux_sym__adt_branch_repeat1,
  [8518] = 3,
    ACTIONS(1074), 1,
      anon_sym_COMMA,
    ACTIONS(1077), 1,
      anon_sym_RBRACE,
    STATE(368), 1,
      aux_sym__adt_branch_repeat1,
  [8528] = 3,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(1079), 1,
      anon_sym_RPAREN,
    STATE(363), 1,
      aux_sym_match_repeat1,
  [8538] = 3,
    ACTIONS(945), 1,
      anon_sym_DOT,
    ACTIONS(1008), 1,
      anon_sym_SEMI,
    STATE(360), 1,
      aux_sym_disjunction_repeat1,
  [8548] = 3,
    ACTIONS(965), 1,
      anon_sym_COMMA,
    ACTIONS(1081), 1,
      anon_sym_RPAREN,
    STATE(401), 1,
      aux_sym_directive_repeat2,
  [8558] = 3,
    ACTIONS(965), 1,
      anon_sym_COMMA,
    ACTIONS(1083), 1,
      anon_sym_RPAREN,
    STATE(395), 1,
      aux_sym_directive_repeat2,
  [8568] = 3,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    ACTIONS(1085), 1,
      anon_sym_RPAREN,
    STATE(315), 1,
      aux_sym_adt_constructor_repeat1,
  [8578] = 3,
    ACTIONS(895), 1,
      anon_sym_COMMA,
    ACTIONS(1087), 1,
      anon_sym_RBRACK,
    STATE(319), 1,
      aux_sym_relation_decl_repeat2,
  [8588] = 3,
    ACTIONS(965), 1,
      anon_sym_COMMA,
    ACTIONS(1089), 1,
      anon_sym_RPAREN,
    STATE(401), 1,
      aux_sym_directive_repeat2,
  [8598] = 3,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    ACTIONS(542), 1,
      anon_sym_RBRACK,
    STATE(315), 1,
      aux_sym_adt_constructor_repeat1,
  [8608] = 3,
    ACTIONS(907), 1,
      anon_sym_COMMA,
    ACTIONS(1091), 1,
      anon_sym_RBRACE,
    STATE(367), 1,
      aux_sym__adt_branch_repeat1,
  [8618] = 3,
    ACTIONS(1093), 1,
      anon_sym_COMMA,
    ACTIONS(1096), 1,
      anon_sym_RPAREN,
    STATE(378), 1,
      aux_sym_query_plan_repeat1,
  [8628] = 3,
    ACTIONS(954), 1,
      anon_sym_COMMA,
    ACTIONS(1098), 1,
      anon_sym_RPAREN,
    STATE(378), 1,
      aux_sym_query_plan_repeat1,
  [8638] = 3,
    ACTIONS(965), 1,
      anon_sym_COMMA,
    ACTIONS(1100), 1,
      anon_sym_RPAREN,
    STATE(401), 1,
      aux_sym_directive_repeat2,
  [8648] = 3,
    ACTIONS(907), 1,
      anon_sym_COMMA,
    ACTIONS(1102), 1,
      anon_sym_RBRACE,
    STATE(368), 1,
      aux_sym__adt_branch_repeat1,
  [8658] = 3,
    ACTIONS(895), 1,
      anon_sym_COMMA,
    ACTIONS(1104), 1,
      anon_sym_RPAREN,
    STATE(319), 1,
      aux_sym_relation_decl_repeat2,
  [8668] = 3,
    ACTIONS(954), 1,
      anon_sym_COMMA,
    ACTIONS(1106), 1,
      anon_sym_RPAREN,
    STATE(378), 1,
      aux_sym_query_plan_repeat1,
  [8678] = 3,
    ACTIONS(1108), 1,
      anon_sym_COMMA,
    ACTIONS(1111), 1,
      anon_sym_GT,
    STATE(384), 1,
      aux_sym_component_type_repeat1,
  [8688] = 3,
    ACTIONS(895), 1,
      anon_sym_COMMA,
    ACTIONS(1006), 1,
      anon_sym_RPAREN,
    STATE(347), 1,
      aux_sym_relation_decl_repeat2,
  [8698] = 3,
    ACTIONS(895), 1,
      anon_sym_COMMA,
    ACTIONS(1104), 1,
      anon_sym_RPAREN,
    STATE(388), 1,
      aux_sym_relation_decl_repeat2,
  [8708] = 3,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    ACTIONS(1113), 1,
      anon_sym_RPAREN,
    STATE(407), 1,
      aux_sym_relation_decl_repeat1,
  [8718] = 3,
    ACTIONS(895), 1,
      anon_sym_COMMA,
    ACTIONS(1115), 1,
      anon_sym_RPAREN,
    STATE(319), 1,
      aux_sym_relation_decl_repeat2,
  [8728] = 3,
    ACTIONS(954), 1,
      anon_sym_COMMA,
    ACTIONS(1106), 1,
      anon_sym_RPAREN,
    STATE(379), 1,
      aux_sym_query_plan_repeat1,
  [8738] = 1,
    ACTIONS(963), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [8744] = 3,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    ACTIONS(1117), 1,
      anon_sym_RBRACK,
    STATE(315), 1,
      aux_sym_adt_constructor_repeat1,
  [8754] = 3,
    ACTIONS(1027), 1,
      anon_sym_COMMA,
    ACTIONS(1119), 1,
      anon_sym_LBRACE,
    STATE(349), 1,
      aux_sym_component_decl_repeat1,
  [8764] = 3,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1121), 1,
      anon_sym_GT,
    STATE(351), 1,
      aux_sym_component_type_repeat1,
  [8774] = 3,
    ACTIONS(842), 1,
      anon_sym_COMMA,
    ACTIONS(1123), 1,
      anon_sym_RPAREN,
    STATE(353), 1,
      aux_sym_functor_decl_repeat1,
  [8784] = 3,
    ACTIONS(965), 1,
      anon_sym_COMMA,
    ACTIONS(1125), 1,
      anon_sym_RPAREN,
    STATE(401), 1,
      aux_sym_directive_repeat2,
  [8794] = 3,
    ACTIONS(842), 1,
      anon_sym_COMMA,
    ACTIONS(1127), 1,
      anon_sym_RPAREN,
    STATE(357), 1,
      aux_sym_functor_decl_repeat1,
  [8804] = 3,
    ACTIONS(842), 1,
      anon_sym_COMMA,
    ACTIONS(1129), 1,
      anon_sym_RPAREN,
    STATE(359), 1,
      aux_sym_functor_decl_repeat1,
  [8814] = 3,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    ACTIONS(1131), 1,
      anon_sym_LPAREN,
    STATE(341), 1,
      aux_sym_relation_decl_repeat1,
  [8824] = 3,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    ACTIONS(1131), 1,
      anon_sym_LPAREN,
    STATE(322), 1,
      aux_sym_relation_decl_repeat1,
  [8834] = 3,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(1133), 1,
      anon_sym_RPAREN,
    STATE(363), 1,
      aux_sym_match_repeat1,
  [8844] = 3,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    ACTIONS(1138), 1,
      anon_sym_RPAREN,
    STATE(401), 1,
      aux_sym_directive_repeat2,
  [8854] = 3,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
    STATE(315), 1,
      aux_sym_adt_constructor_repeat1,
  [8864] = 3,
    ACTIONS(1140), 1,
      anon_sym_COMMA,
    ACTIONS(1143), 1,
      anon_sym_COLON_DASH,
    STATE(403), 1,
      aux_sym_monotonic_rule_repeat1,
  [8874] = 3,
    ACTIONS(27), 1,
      sym_ident,
    STATE(422), 1,
      sym_atom,
    STATE(466), 1,
      sym_qualified_name,
  [8884] = 3,
    ACTIONS(27), 1,
      sym_ident,
    STATE(452), 1,
      sym_atom,
    STATE(466), 1,
      sym_qualified_name,
  [8894] = 3,
    ACTIONS(911), 1,
      anon_sym_COMMA,
    ACTIONS(1145), 1,
      anon_sym_COLON_DASH,
    STATE(403), 1,
      aux_sym_monotonic_rule_repeat1,
  [8904] = 3,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    ACTIONS(1147), 1,
      anon_sym_RPAREN,
    STATE(322), 1,
      aux_sym_relation_decl_repeat1,
  [8914] = 1,
    ACTIONS(971), 3,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8920] = 2,
    ACTIONS(899), 1,
      sym_ident,
    STATE(424), 1,
      sym_attribute,
  [8927] = 1,
    ACTIONS(1096), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8932] = 2,
    ACTIONS(1149), 1,
      anon_sym_LPAREN,
    ACTIONS(1151), 1,
      sym_ident,
  [8939] = 2,
    ACTIONS(899), 1,
      sym_ident,
    STATE(390), 1,
      sym_attribute,
  [8946] = 2,
    ACTIONS(1153), 1,
      anon_sym_COLON,
    ACTIONS(1155), 1,
      anon_sym_LBRACE,
  [8953] = 2,
    ACTIONS(1157), 1,
      sym_ident,
    STATE(249), 1,
      sym_qualified_name,
  [8960] = 2,
    ACTIONS(1159), 1,
      sym_ident,
    STATE(51), 1,
      sym_qualified_name,
  [8967] = 2,
    ACTIONS(1157), 1,
      sym_ident,
    STATE(164), 1,
      sym_qualified_name,
  [8974] = 2,
    ACTIONS(1161), 1,
      sym_ident,
    STATE(183), 1,
      sym_qualified_name,
  [8981] = 2,
    ACTIONS(1163), 1,
      sym_ident,
    STATE(169), 1,
      sym__adt_branch,
  [8988] = 2,
    ACTIONS(1165), 1,
      sym_ident,
    STATE(432), 1,
      sym_component_type,
  [8995] = 2,
    ACTIONS(1165), 1,
      sym_ident,
    STATE(222), 1,
      sym_component_type,
  [9002] = 1,
    ACTIONS(1167), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9007] = 1,
    ACTIONS(1143), 2,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
  [9012] = 1,
    ACTIONS(1169), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9017] = 1,
    ACTIONS(1171), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9022] = 2,
    ACTIONS(1161), 1,
      sym_ident,
    STATE(164), 1,
      sym_qualified_name,
  [9029] = 2,
    ACTIONS(1165), 1,
      sym_ident,
    STATE(392), 1,
      sym_component_type,
  [9036] = 1,
    ACTIONS(1173), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9041] = 1,
    ACTIONS(1175), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [9046] = 2,
    ACTIONS(1177), 1,
      anon_sym_LPAREN,
    ACTIONS(1179), 1,
      sym_ident,
  [9053] = 2,
    ACTIONS(27), 1,
      sym_ident,
    STATE(51), 1,
      sym_qualified_name,
  [9060] = 2,
    ACTIONS(1165), 1,
      sym_ident,
    STATE(413), 1,
      sym_component_type,
  [9067] = 1,
    ACTIONS(1181), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [9072] = 1,
    ACTIONS(1183), 1,
      anon_sym_RPAREN,
  [9076] = 1,
    ACTIONS(1185), 1,
      anon_sym_LPAREN,
  [9080] = 1,
    ACTIONS(1187), 1,
      anon_sym_LPAREN,
  [9084] = 1,
    ACTIONS(1189), 1,
      anon_sym_LPAREN,
  [9088] = 1,
    ACTIONS(1191), 1,
      anon_sym_COLON,
  [9092] = 1,
    ACTIONS(1193), 1,
      anon_sym_LPAREN,
  [9096] = 1,
    ACTIONS(1195), 1,
      aux_sym_preprocessor_token1,
  [9100] = 1,
    ACTIONS(1197), 1,
      anon_sym_COLON,
  [9104] = 1,
    ACTIONS(1199), 1,
      sym_ident,
  [9108] = 1,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
  [9112] = 1,
    ACTIONS(933), 1,
      anon_sym_COLON,
  [9116] = 1,
    ACTIONS(1201), 1,
      anon_sym_COLON,
  [9120] = 1,
    ACTIONS(1203), 1,
      aux_sym_preprocessor_token1,
  [9124] = 1,
    ACTIONS(1205), 1,
      anon_sym_LPAREN,
  [9128] = 1,
    ACTIONS(1207), 1,
      sym_ident,
  [9132] = 1,
    ACTIONS(1209), 1,
      anon_sym_DOT,
  [9136] = 1,
    ACTIONS(1211), 1,
      anon_sym_EQ,
  [9140] = 1,
    ACTIONS(1213), 1,
      anon_sym_LPAREN,
  [9144] = 1,
    ACTIONS(1215), 1,
      sym_ident,
  [9148] = 1,
    ACTIONS(1217), 1,
      anon_sym_COLON_DASH,
  [9152] = 1,
    ACTIONS(1219), 1,
      anon_sym_COLON,
  [9156] = 1,
    ACTIONS(1221), 1,
      sym_ident,
  [9160] = 1,
    ACTIONS(1223), 1,
      anon_sym_EQ,
  [9164] = 1,
    ACTIONS(1225), 1,
      anon_sym_EQ,
  [9168] = 1,
    ACTIONS(1227), 1,
      sym_ident,
  [9172] = 1,
    ACTIONS(1229), 1,
      anon_sym_LPAREN,
  [9176] = 1,
    ACTIONS(1231), 1,
      anon_sym_LF,
  [9180] = 1,
    ACTIONS(1233), 1,
      anon_sym_RBRACE,
  [9184] = 1,
    ACTIONS(1235), 1,
      sym_ident,
  [9188] = 1,
    ACTIONS(1237), 1,
      anon_sym_SLASH,
  [9192] = 1,
    ACTIONS(595), 1,
      anon_sym_LBRACE,
  [9196] = 1,
    ACTIONS(1239), 1,
      aux_sym_preprocessor_token1,
  [9200] = 1,
    ACTIONS(1241), 1,
      sym_string,
  [9204] = 1,
    ACTIONS(1243), 1,
      anon_sym_LPAREN,
  [9208] = 1,
    ACTIONS(1245), 1,
      sym_ident,
  [9212] = 1,
    ACTIONS(1247), 1,
      anon_sym_EQ,
  [9216] = 1,
    ACTIONS(1249), 1,
      ts_builtin_sym_end,
  [9220] = 1,
    ACTIONS(1251), 1,
      anon_sym_RPAREN,
  [9224] = 1,
    ACTIONS(1253), 1,
      anon_sym_LPAREN,
  [9228] = 1,
    ACTIONS(1255), 1,
      anon_sym_RBRACE,
  [9232] = 1,
    ACTIONS(1257), 1,
      aux_sym_preprocessor_token1,
  [9236] = 1,
    ACTIONS(1259), 1,
      anon_sym_RPAREN,
  [9240] = 1,
    ACTIONS(1261), 1,
      anon_sym_DOT,
  [9244] = 1,
    ACTIONS(1263), 1,
      anon_sym_COLON,
  [9248] = 1,
    ACTIONS(1265), 1,
      anon_sym_LPAREN,
  [9252] = 1,
    ACTIONS(1267), 1,
      anon_sym_COLON,
  [9256] = 1,
    ACTIONS(1269), 1,
      anon_sym_COLON,
  [9260] = 1,
    ACTIONS(1271), 1,
      anon_sym_COLON,
  [9264] = 1,
    ACTIONS(1273), 1,
      sym_ident,
  [9268] = 1,
    ACTIONS(1275), 1,
      anon_sym_COLON,
  [9272] = 1,
    ACTIONS(1277), 1,
      sym_ident,
  [9276] = 1,
    ACTIONS(1279), 1,
      sym_ident,
  [9280] = 1,
    ACTIONS(1281), 1,
      sym_ident,
  [9284] = 1,
    ACTIONS(1283), 1,
      sym_ident,
  [9288] = 1,
    ACTIONS(1285), 1,
      sym_ident,
  [9292] = 1,
    ACTIONS(1287), 1,
      sym_ident,
  [9296] = 1,
    ACTIONS(1289), 1,
      anon_sym_DOT,
  [9300] = 1,
    ACTIONS(1291), 1,
      anon_sym_RPAREN,
  [9304] = 1,
    ACTIONS(1293), 1,
      sym_string,
  [9308] = 1,
    ACTIONS(1295), 1,
      anon_sym_RPAREN,
  [9312] = 1,
    ACTIONS(1297), 1,
      anon_sym_RPAREN,
  [9316] = 1,
    ACTIONS(1299), 1,
      anon_sym_RPAREN,
  [9320] = 1,
    ACTIONS(1301), 1,
      aux_sym_line_comment_token1,
  [9324] = 1,
    ACTIONS(1303), 1,
      aux_sym_block_comment_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(44)] = 0,
  [SMALL_STATE(45)] = 64,
  [SMALL_STATE(46)] = 122,
  [SMALL_STATE(47)] = 180,
  [SMALL_STATE(48)] = 228,
  [SMALL_STATE(49)] = 276,
  [SMALL_STATE(50)] = 324,
  [SMALL_STATE(51)] = 367,
  [SMALL_STATE(52)] = 412,
  [SMALL_STATE(53)] = 455,
  [SMALL_STATE(54)] = 498,
  [SMALL_STATE(55)] = 541,
  [SMALL_STATE(56)] = 584,
  [SMALL_STATE(57)] = 626,
  [SMALL_STATE(58)] = 668,
  [SMALL_STATE(59)] = 710,
  [SMALL_STATE(60)] = 752,
  [SMALL_STATE(61)] = 794,
  [SMALL_STATE(62)] = 836,
  [SMALL_STATE(63)] = 878,
  [SMALL_STATE(64)] = 920,
  [SMALL_STATE(65)] = 962,
  [SMALL_STATE(66)] = 1004,
  [SMALL_STATE(67)] = 1046,
  [SMALL_STATE(68)] = 1088,
  [SMALL_STATE(69)] = 1130,
  [SMALL_STATE(70)] = 1172,
  [SMALL_STATE(71)] = 1214,
  [SMALL_STATE(72)] = 1256,
  [SMALL_STATE(73)] = 1298,
  [SMALL_STATE(74)] = 1340,
  [SMALL_STATE(75)] = 1382,
  [SMALL_STATE(76)] = 1424,
  [SMALL_STATE(77)] = 1466,
  [SMALL_STATE(78)] = 1508,
  [SMALL_STATE(79)] = 1550,
  [SMALL_STATE(80)] = 1592,
  [SMALL_STATE(81)] = 1634,
  [SMALL_STATE(82)] = 1676,
  [SMALL_STATE(83)] = 1725,
  [SMALL_STATE(84)] = 1796,
  [SMALL_STATE(85)] = 1845,
  [SMALL_STATE(86)] = 1894,
  [SMALL_STATE(87)] = 1943,
  [SMALL_STATE(88)] = 1992,
  [SMALL_STATE(89)] = 2041,
  [SMALL_STATE(90)] = 2090,
  [SMALL_STATE(91)] = 2139,
  [SMALL_STATE(92)] = 2188,
  [SMALL_STATE(93)] = 2237,
  [SMALL_STATE(94)] = 2286,
  [SMALL_STATE(95)] = 2335,
  [SMALL_STATE(96)] = 2380,
  [SMALL_STATE(97)] = 2429,
  [SMALL_STATE(98)] = 2478,
  [SMALL_STATE(99)] = 2527,
  [SMALL_STATE(100)] = 2576,
  [SMALL_STATE(101)] = 2625,
  [SMALL_STATE(102)] = 2674,
  [SMALL_STATE(103)] = 2745,
  [SMALL_STATE(104)] = 2792,
  [SMALL_STATE(105)] = 2836,
  [SMALL_STATE(106)] = 2881,
  [SMALL_STATE(107)] = 2925,
  [SMALL_STATE(108)] = 2986,
  [SMALL_STATE(109)] = 3047,
  [SMALL_STATE(110)] = 3088,
  [SMALL_STATE(111)] = 3149,
  [SMALL_STATE(112)] = 3210,
  [SMALL_STATE(113)] = 3271,
  [SMALL_STATE(114)] = 3312,
  [SMALL_STATE(115)] = 3373,
  [SMALL_STATE(116)] = 3434,
  [SMALL_STATE(117)] = 3470,
  [SMALL_STATE(118)] = 3506,
  [SMALL_STATE(119)] = 3543,
  [SMALL_STATE(120)] = 3583,
  [SMALL_STATE(121)] = 3623,
  [SMALL_STATE(122)] = 3663,
  [SMALL_STATE(123)] = 3703,
  [SMALL_STATE(124)] = 3737,
  [SMALL_STATE(125)] = 3773,
  [SMALL_STATE(126)] = 3813,
  [SMALL_STATE(127)] = 3853,
  [SMALL_STATE(128)] = 3889,
  [SMALL_STATE(129)] = 3925,
  [SMALL_STATE(130)] = 3960,
  [SMALL_STATE(131)] = 3997,
  [SMALL_STATE(132)] = 4031,
  [SMALL_STATE(133)] = 4065,
  [SMALL_STATE(134)] = 4099,
  [SMALL_STATE(135)] = 4133,
  [SMALL_STATE(136)] = 4167,
  [SMALL_STATE(137)] = 4193,
  [SMALL_STATE(138)] = 4221,
  [SMALL_STATE(139)] = 4250,
  [SMALL_STATE(140)] = 4275,
  [SMALL_STATE(141)] = 4300,
  [SMALL_STATE(142)] = 4329,
  [SMALL_STATE(143)] = 4358,
  [SMALL_STATE(144)] = 4386,
  [SMALL_STATE(145)] = 4414,
  [SMALL_STATE(146)] = 4442,
  [SMALL_STATE(147)] = 4470,
  [SMALL_STATE(148)] = 4498,
  [SMALL_STATE(149)] = 4526,
  [SMALL_STATE(150)] = 4554,
  [SMALL_STATE(151)] = 4584,
  [SMALL_STATE(152)] = 4612,
  [SMALL_STATE(153)] = 4640,
  [SMALL_STATE(154)] = 4668,
  [SMALL_STATE(155)] = 4696,
  [SMALL_STATE(156)] = 4724,
  [SMALL_STATE(157)] = 4752,
  [SMALL_STATE(158)] = 4780,
  [SMALL_STATE(159)] = 4808,
  [SMALL_STATE(160)] = 4836,
  [SMALL_STATE(161)] = 4864,
  [SMALL_STATE(162)] = 4892,
  [SMALL_STATE(163)] = 4918,
  [SMALL_STATE(164)] = 4946,
  [SMALL_STATE(165)] = 4970,
  [SMALL_STATE(166)] = 4998,
  [SMALL_STATE(167)] = 5021,
  [SMALL_STATE(168)] = 5044,
  [SMALL_STATE(169)] = 5067,
  [SMALL_STATE(170)] = 5090,
  [SMALL_STATE(171)] = 5119,
  [SMALL_STATE(172)] = 5142,
  [SMALL_STATE(173)] = 5165,
  [SMALL_STATE(174)] = 5188,
  [SMALL_STATE(175)] = 5211,
  [SMALL_STATE(176)] = 5234,
  [SMALL_STATE(177)] = 5263,
  [SMALL_STATE(178)] = 5286,
  [SMALL_STATE(179)] = 5315,
  [SMALL_STATE(180)] = 5344,
  [SMALL_STATE(181)] = 5367,
  [SMALL_STATE(182)] = 5394,
  [SMALL_STATE(183)] = 5417,
  [SMALL_STATE(184)] = 5446,
  [SMALL_STATE(185)] = 5472,
  [SMALL_STATE(186)] = 5494,
  [SMALL_STATE(187)] = 5516,
  [SMALL_STATE(188)] = 5538,
  [SMALL_STATE(189)] = 5560,
  [SMALL_STATE(190)] = 5582,
  [SMALL_STATE(191)] = 5604,
  [SMALL_STATE(192)] = 5626,
  [SMALL_STATE(193)] = 5648,
  [SMALL_STATE(194)] = 5670,
  [SMALL_STATE(195)] = 5692,
  [SMALL_STATE(196)] = 5714,
  [SMALL_STATE(197)] = 5736,
  [SMALL_STATE(198)] = 5758,
  [SMALL_STATE(199)] = 5780,
  [SMALL_STATE(200)] = 5802,
  [SMALL_STATE(201)] = 5826,
  [SMALL_STATE(202)] = 5848,
  [SMALL_STATE(203)] = 5870,
  [SMALL_STATE(204)] = 5892,
  [SMALL_STATE(205)] = 5914,
  [SMALL_STATE(206)] = 5940,
  [SMALL_STATE(207)] = 5962,
  [SMALL_STATE(208)] = 5984,
  [SMALL_STATE(209)] = 6010,
  [SMALL_STATE(210)] = 6032,
  [SMALL_STATE(211)] = 6058,
  [SMALL_STATE(212)] = 6080,
  [SMALL_STATE(213)] = 6102,
  [SMALL_STATE(214)] = 6128,
  [SMALL_STATE(215)] = 6150,
  [SMALL_STATE(216)] = 6172,
  [SMALL_STATE(217)] = 6194,
  [SMALL_STATE(218)] = 6216,
  [SMALL_STATE(219)] = 6242,
  [SMALL_STATE(220)] = 6264,
  [SMALL_STATE(221)] = 6286,
  [SMALL_STATE(222)] = 6308,
  [SMALL_STATE(223)] = 6330,
  [SMALL_STATE(224)] = 6352,
  [SMALL_STATE(225)] = 6374,
  [SMALL_STATE(226)] = 6396,
  [SMALL_STATE(227)] = 6418,
  [SMALL_STATE(228)] = 6440,
  [SMALL_STATE(229)] = 6462,
  [SMALL_STATE(230)] = 6484,
  [SMALL_STATE(231)] = 6510,
  [SMALL_STATE(232)] = 6532,
  [SMALL_STATE(233)] = 6554,
  [SMALL_STATE(234)] = 6576,
  [SMALL_STATE(235)] = 6598,
  [SMALL_STATE(236)] = 6620,
  [SMALL_STATE(237)] = 6642,
  [SMALL_STATE(238)] = 6667,
  [SMALL_STATE(239)] = 6694,
  [SMALL_STATE(240)] = 6719,
  [SMALL_STATE(241)] = 6744,
  [SMALL_STATE(242)] = 6769,
  [SMALL_STATE(243)] = 6792,
  [SMALL_STATE(244)] = 6817,
  [SMALL_STATE(245)] = 6840,
  [SMALL_STATE(246)] = 6865,
  [SMALL_STATE(247)] = 6888,
  [SMALL_STATE(248)] = 6914,
  [SMALL_STATE(249)] = 6934,
  [SMALL_STATE(250)] = 6960,
  [SMALL_STATE(251)] = 6980,
  [SMALL_STATE(252)] = 7000,
  [SMALL_STATE(253)] = 7020,
  [SMALL_STATE(254)] = 7040,
  [SMALL_STATE(255)] = 7060,
  [SMALL_STATE(256)] = 7080,
  [SMALL_STATE(257)] = 7104,
  [SMALL_STATE(258)] = 7124,
  [SMALL_STATE(259)] = 7147,
  [SMALL_STATE(260)] = 7170,
  [SMALL_STATE(261)] = 7193,
  [SMALL_STATE(262)] = 7216,
  [SMALL_STATE(263)] = 7233,
  [SMALL_STATE(264)] = 7260,
  [SMALL_STATE(265)] = 7289,
  [SMALL_STATE(266)] = 7318,
  [SMALL_STATE(267)] = 7347,
  [SMALL_STATE(268)] = 7368,
  [SMALL_STATE(269)] = 7389,
  [SMALL_STATE(270)] = 7407,
  [SMALL_STATE(271)] = 7422,
  [SMALL_STATE(272)] = 7437,
  [SMALL_STATE(273)] = 7452,
  [SMALL_STATE(274)] = 7467,
  [SMALL_STATE(275)] = 7482,
  [SMALL_STATE(276)] = 7497,
  [SMALL_STATE(277)] = 7512,
  [SMALL_STATE(278)] = 7527,
  [SMALL_STATE(279)] = 7542,
  [SMALL_STATE(280)] = 7557,
  [SMALL_STATE(281)] = 7572,
  [SMALL_STATE(282)] = 7587,
  [SMALL_STATE(283)] = 7602,
  [SMALL_STATE(284)] = 7614,
  [SMALL_STATE(285)] = 7626,
  [SMALL_STATE(286)] = 7634,
  [SMALL_STATE(287)] = 7642,
  [SMALL_STATE(288)] = 7654,
  [SMALL_STATE(289)] = 7666,
  [SMALL_STATE(290)] = 7674,
  [SMALL_STATE(291)] = 7686,
  [SMALL_STATE(292)] = 7694,
  [SMALL_STATE(293)] = 7710,
  [SMALL_STATE(294)] = 7726,
  [SMALL_STATE(295)] = 7738,
  [SMALL_STATE(296)] = 7750,
  [SMALL_STATE(297)] = 7758,
  [SMALL_STATE(298)] = 7774,
  [SMALL_STATE(299)] = 7790,
  [SMALL_STATE(300)] = 7806,
  [SMALL_STATE(301)] = 7814,
  [SMALL_STATE(302)] = 7830,
  [SMALL_STATE(303)] = 7842,
  [SMALL_STATE(304)] = 7850,
  [SMALL_STATE(305)] = 7862,
  [SMALL_STATE(306)] = 7870,
  [SMALL_STATE(307)] = 7882,
  [SMALL_STATE(308)] = 7896,
  [SMALL_STATE(309)] = 7904,
  [SMALL_STATE(310)] = 7912,
  [SMALL_STATE(311)] = 7920,
  [SMALL_STATE(312)] = 7928,
  [SMALL_STATE(313)] = 7940,
  [SMALL_STATE(314)] = 7948,
  [SMALL_STATE(315)] = 7959,
  [SMALL_STATE(316)] = 7970,
  [SMALL_STATE(317)] = 7983,
  [SMALL_STATE(318)] = 7994,
  [SMALL_STATE(319)] = 8005,
  [SMALL_STATE(320)] = 8016,
  [SMALL_STATE(321)] = 8029,
  [SMALL_STATE(322)] = 8040,
  [SMALL_STATE(323)] = 8051,
  [SMALL_STATE(324)] = 8064,
  [SMALL_STATE(325)] = 8077,
  [SMALL_STATE(326)] = 8090,
  [SMALL_STATE(327)] = 8101,
  [SMALL_STATE(328)] = 8108,
  [SMALL_STATE(329)] = 8119,
  [SMALL_STATE(330)] = 8130,
  [SMALL_STATE(331)] = 8141,
  [SMALL_STATE(332)] = 8152,
  [SMALL_STATE(333)] = 8163,
  [SMALL_STATE(334)] = 8176,
  [SMALL_STATE(335)] = 8183,
  [SMALL_STATE(336)] = 8196,
  [SMALL_STATE(337)] = 8207,
  [SMALL_STATE(338)] = 8218,
  [SMALL_STATE(339)] = 8228,
  [SMALL_STATE(340)] = 8238,
  [SMALL_STATE(341)] = 8248,
  [SMALL_STATE(342)] = 8258,
  [SMALL_STATE(343)] = 8268,
  [SMALL_STATE(344)] = 8278,
  [SMALL_STATE(345)] = 8288,
  [SMALL_STATE(346)] = 8298,
  [SMALL_STATE(347)] = 8308,
  [SMALL_STATE(348)] = 8318,
  [SMALL_STATE(349)] = 8328,
  [SMALL_STATE(350)] = 8338,
  [SMALL_STATE(351)] = 8348,
  [SMALL_STATE(352)] = 8358,
  [SMALL_STATE(353)] = 8368,
  [SMALL_STATE(354)] = 8378,
  [SMALL_STATE(355)] = 8388,
  [SMALL_STATE(356)] = 8398,
  [SMALL_STATE(357)] = 8408,
  [SMALL_STATE(358)] = 8418,
  [SMALL_STATE(359)] = 8428,
  [SMALL_STATE(360)] = 8438,
  [SMALL_STATE(361)] = 8448,
  [SMALL_STATE(362)] = 8458,
  [SMALL_STATE(363)] = 8468,
  [SMALL_STATE(364)] = 8478,
  [SMALL_STATE(365)] = 8488,
  [SMALL_STATE(366)] = 8498,
  [SMALL_STATE(367)] = 8508,
  [SMALL_STATE(368)] = 8518,
  [SMALL_STATE(369)] = 8528,
  [SMALL_STATE(370)] = 8538,
  [SMALL_STATE(371)] = 8548,
  [SMALL_STATE(372)] = 8558,
  [SMALL_STATE(373)] = 8568,
  [SMALL_STATE(374)] = 8578,
  [SMALL_STATE(375)] = 8588,
  [SMALL_STATE(376)] = 8598,
  [SMALL_STATE(377)] = 8608,
  [SMALL_STATE(378)] = 8618,
  [SMALL_STATE(379)] = 8628,
  [SMALL_STATE(380)] = 8638,
  [SMALL_STATE(381)] = 8648,
  [SMALL_STATE(382)] = 8658,
  [SMALL_STATE(383)] = 8668,
  [SMALL_STATE(384)] = 8678,
  [SMALL_STATE(385)] = 8688,
  [SMALL_STATE(386)] = 8698,
  [SMALL_STATE(387)] = 8708,
  [SMALL_STATE(388)] = 8718,
  [SMALL_STATE(389)] = 8728,
  [SMALL_STATE(390)] = 8738,
  [SMALL_STATE(391)] = 8744,
  [SMALL_STATE(392)] = 8754,
  [SMALL_STATE(393)] = 8764,
  [SMALL_STATE(394)] = 8774,
  [SMALL_STATE(395)] = 8784,
  [SMALL_STATE(396)] = 8794,
  [SMALL_STATE(397)] = 8804,
  [SMALL_STATE(398)] = 8814,
  [SMALL_STATE(399)] = 8824,
  [SMALL_STATE(400)] = 8834,
  [SMALL_STATE(401)] = 8844,
  [SMALL_STATE(402)] = 8854,
  [SMALL_STATE(403)] = 8864,
  [SMALL_STATE(404)] = 8874,
  [SMALL_STATE(405)] = 8884,
  [SMALL_STATE(406)] = 8894,
  [SMALL_STATE(407)] = 8904,
  [SMALL_STATE(408)] = 8914,
  [SMALL_STATE(409)] = 8920,
  [SMALL_STATE(410)] = 8927,
  [SMALL_STATE(411)] = 8932,
  [SMALL_STATE(412)] = 8939,
  [SMALL_STATE(413)] = 8946,
  [SMALL_STATE(414)] = 8953,
  [SMALL_STATE(415)] = 8960,
  [SMALL_STATE(416)] = 8967,
  [SMALL_STATE(417)] = 8974,
  [SMALL_STATE(418)] = 8981,
  [SMALL_STATE(419)] = 8988,
  [SMALL_STATE(420)] = 8995,
  [SMALL_STATE(421)] = 9002,
  [SMALL_STATE(422)] = 9007,
  [SMALL_STATE(423)] = 9012,
  [SMALL_STATE(424)] = 9017,
  [SMALL_STATE(425)] = 9022,
  [SMALL_STATE(426)] = 9029,
  [SMALL_STATE(427)] = 9036,
  [SMALL_STATE(428)] = 9041,
  [SMALL_STATE(429)] = 9046,
  [SMALL_STATE(430)] = 9053,
  [SMALL_STATE(431)] = 9060,
  [SMALL_STATE(432)] = 9067,
  [SMALL_STATE(433)] = 9072,
  [SMALL_STATE(434)] = 9076,
  [SMALL_STATE(435)] = 9080,
  [SMALL_STATE(436)] = 9084,
  [SMALL_STATE(437)] = 9088,
  [SMALL_STATE(438)] = 9092,
  [SMALL_STATE(439)] = 9096,
  [SMALL_STATE(440)] = 9100,
  [SMALL_STATE(441)] = 9104,
  [SMALL_STATE(442)] = 9108,
  [SMALL_STATE(443)] = 9112,
  [SMALL_STATE(444)] = 9116,
  [SMALL_STATE(445)] = 9120,
  [SMALL_STATE(446)] = 9124,
  [SMALL_STATE(447)] = 9128,
  [SMALL_STATE(448)] = 9132,
  [SMALL_STATE(449)] = 9136,
  [SMALL_STATE(450)] = 9140,
  [SMALL_STATE(451)] = 9144,
  [SMALL_STATE(452)] = 9148,
  [SMALL_STATE(453)] = 9152,
  [SMALL_STATE(454)] = 9156,
  [SMALL_STATE(455)] = 9160,
  [SMALL_STATE(456)] = 9164,
  [SMALL_STATE(457)] = 9168,
  [SMALL_STATE(458)] = 9172,
  [SMALL_STATE(459)] = 9176,
  [SMALL_STATE(460)] = 9180,
  [SMALL_STATE(461)] = 9184,
  [SMALL_STATE(462)] = 9188,
  [SMALL_STATE(463)] = 9192,
  [SMALL_STATE(464)] = 9196,
  [SMALL_STATE(465)] = 9200,
  [SMALL_STATE(466)] = 9204,
  [SMALL_STATE(467)] = 9208,
  [SMALL_STATE(468)] = 9212,
  [SMALL_STATE(469)] = 9216,
  [SMALL_STATE(470)] = 9220,
  [SMALL_STATE(471)] = 9224,
  [SMALL_STATE(472)] = 9228,
  [SMALL_STATE(473)] = 9232,
  [SMALL_STATE(474)] = 9236,
  [SMALL_STATE(475)] = 9240,
  [SMALL_STATE(476)] = 9244,
  [SMALL_STATE(477)] = 9248,
  [SMALL_STATE(478)] = 9252,
  [SMALL_STATE(479)] = 9256,
  [SMALL_STATE(480)] = 9260,
  [SMALL_STATE(481)] = 9264,
  [SMALL_STATE(482)] = 9268,
  [SMALL_STATE(483)] = 9272,
  [SMALL_STATE(484)] = 9276,
  [SMALL_STATE(485)] = 9280,
  [SMALL_STATE(486)] = 9284,
  [SMALL_STATE(487)] = 9288,
  [SMALL_STATE(488)] = 9292,
  [SMALL_STATE(489)] = 9296,
  [SMALL_STATE(490)] = 9300,
  [SMALL_STATE(491)] = 9304,
  [SMALL_STATE(492)] = 9308,
  [SMALL_STATE(493)] = 9312,
  [SMALL_STATE(494)] = 9316,
  [SMALL_STATE(495)] = 9320,
  [SMALL_STATE(496)] = 9324,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intrinsic_functor, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(45),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negation, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negation, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(451),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 5, .production_id = 43),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 5, .production_id = 43),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_constructor, 2, .production_id = 17),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adt_constructor, 2, .production_id = 17),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4, .production_id = 22),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 4, .production_id = 22),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4, .production_id = 23),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 4, .production_id = 23),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 3, .production_id = 9),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 3, .production_id = 9),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_constructor, 5, .production_id = 17),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adt_constructor, 5, .production_id = 17),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_constructor, 4, .production_id = 17),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adt_constructor, 4, .production_id = 17),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as, 6, .production_id = 89),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as, 6, .production_id = 89),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_constructor, 4),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_constructor, 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 4, .production_id = 60),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 4, .production_id = 60),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_constructor, 3),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_constructor, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 8, .production_id = 93),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 8, .production_id = 93),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_constructor, 6, .production_id = 17),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adt_constructor, 6, .production_id = 17),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 3),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 6, .production_id = 91),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 6, .production_id = 91),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_call, 4, .production_id = 61),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_call, 4, .production_id = 61),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 3, .production_id = 38),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 3, .production_id = 38),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 6, .production_id = 90),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 6, .production_id = 90),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_call, 4, .production_id = 62),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_call, 4, .production_id = 62),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_op, 3, .production_id = 40),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_op, 3, .production_id = 40),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_constructor, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_constructor, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 5, .production_id = 79),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 5, .production_id = 79),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_call, 3, .production_id = 41),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_call, 3, .production_id = 41),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_call, 5, .production_id = 80),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_call, 5, .production_id = 80),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(464),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(496),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(495),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(491),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(488),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(431),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(481),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(417),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(324),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(277),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(283),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(49),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 52),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 52),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 13),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 13),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 30),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 30),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 31),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 31),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 13),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 13),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 32),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 32),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 51),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 51),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 53),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 53),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 70),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 70),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 4, .production_id = 13),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 4, .production_id = 13),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 71),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 71),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 4),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 4),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 32),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 32),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 4, .production_id = 12),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 4, .production_id = 12),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 32),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 32),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 85),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 8, .production_id = 85),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 3),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 3),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_op, 2, .production_id = 20),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_op, 2, .production_id = 20),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2), SHIFT_REPEAT(104),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(464),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(496),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(495),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(431),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(457),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(481),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(414),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(324),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(284),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(49),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 3, .production_id = 40),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_adt_constructor_repeat1, 2),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_repeat1, 2, .production_id = 21),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_type, 1, .production_id = 2),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_type, 5, .production_id = 46),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_type, 4, .production_id = 27),
  [572] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(461),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt, 3, .production_id = 14),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_monotonic_rule, 5, .production_id = 42),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 2),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsumptive_rule, 6, .production_id = 63),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 5),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 6),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 5),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 6),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 4),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt, 4, .production_id = 34),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_monotonic_rule, 4, .production_id = 19),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2), SHIFT_REPEAT(429),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_adt_repeat1, 2, .production_id = 56),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_adt_repeat1, 2, .production_id = 56), SHIFT_REPEAT(418),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 3),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 7),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 2),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 2), SHIFT_REPEAT(439),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2, .production_id = 4),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 8),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 7),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 6),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 5),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_adt_repeat1, 2, .production_id = 55),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, .production_id = 8),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_union_repeat1, 2),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__adt_branch, 5, .production_id = 86),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__adt_branch, 4, .production_id = 73),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__adt_branch, 3, .production_id = 54),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__adt_branch, 4, .production_id = 74),
  [654] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(486),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 4),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2, .production_id = 16),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2, .production_id = 16), SHIFT_REPEAT(425),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 5),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, .production_id = 4),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_synonym, 3, .production_id = 15),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2, .production_id = 5),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 7, .production_id = 77),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_decl, 7, .production_id = 69),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 13),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_decl, 7, .production_id = 68),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 52),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 30),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_decl, 6, .production_id = 49),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_decl, 5, .production_id = 28),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 51),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_record, 6, .production_id = 33),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 12),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 31),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsumptive_rule, 7, .production_id = 81),
  [706] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(485),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, .production_id = 4),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_monotonic_rule, 6, .production_id = 64),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtype, 3, .production_id = 15),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_legacy_bare_type_decl, 1, .production_id = 2),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_record, 4, .production_id = 33),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 2),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 53),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_decl, 8, .production_id = 84),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 70),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_union, 4, .production_id = 35),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 71),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, .production_id = 36),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_init, 4, .production_id = 11),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, .production_id = 8),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_decl, 4, .production_id = 10),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 6, .production_id = 57),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor, 3, .production_id = 6),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 32),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_monotonic_rule, 5, .production_id = 39),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 8, .production_id = 87),
  [755] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_union_repeat1, 2), SHIFT_REPEAT(275),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 8, .production_id = 88),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 3),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_record, 5, .production_id = 33),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 9, .production_id = 85),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 9, .production_id = 92),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 6, .production_id = 44),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 6, .production_id = 44),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 82),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 8, .production_id = 82),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 7, .production_id = 67),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 7, .production_id = 67),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 7, .production_id = 66),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 7, .production_id = 66),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 83),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 8, .production_id = 83),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 7, .production_id = 65),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 7, .production_id = 65),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 2, .production_id = 1),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 9, .production_id = 83),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 3, .production_id = 7),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 9, .production_id = 82),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 67),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 66),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 65),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_legacy_type_decl, 2, .production_id = 3),
  [828] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2, .production_id = 16), SHIFT_REPEAT(416),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 7, .production_id = 44),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [839] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_union_repeat1, 2), SHIFT_REPEAT(282),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [872] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [882] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(17),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 5),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains, 5, .production_id = 78),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 3),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 5, .production_id = 78),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 3),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 4),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 4),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains, 3),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 3),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 4, .production_id = 58),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 5),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 4, .production_id = 59),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains, 4, .production_id = 58),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains, 4, .production_id = 59),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 2),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [949] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_adt_constructor_repeat1, 2), SHIFT_REPEAT(33),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [960] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2), SHIFT_REPEAT(412),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2),
  [973] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2), SHIFT_REPEAT(454),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [990] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(13),
  [993] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(19),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 29),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 1),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1022] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat1, 2, .production_id = 50), SHIFT_REPEAT(419),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat1, 2, .production_id = 50),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1039] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functor_decl_repeat1, 2, .production_id = 26), SHIFT_REPEAT(269),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functor_decl_repeat1, 2, .production_id = 26),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1056] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(14),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1063] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_repeat1, 2, .production_id = 24), SHIFT_REPEAT(41),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_repeat1, 2, .production_id = 24),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1074] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__adt_branch_repeat1, 2, .production_id = 75), SHIFT_REPEAT(409),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__adt_branch_repeat1, 2, .production_id = 75),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1093] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat1, 2), SHIFT_REPEAT(445),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat1, 2),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_type_repeat1, 2, .production_id = 47), SHIFT_REPEAT(484),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_type_repeat1, 2, .production_id = 47),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2, .production_id = 37), SHIFT_REPEAT(467),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2, .production_id = 37),
  [1140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_monotonic_rule_repeat1, 2), SHIFT_REPEAT(404),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_monotonic_rule_repeat1, 2),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functor_decl_repeat1, 2, .production_id = 10),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 4, .production_id = 76),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__adt_branch_repeat1, 2, .production_id = 72),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functor_decl_repeat1, 2, .production_id = 25),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_type_repeat1, 2, .production_id = 45),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat1, 2, .production_id = 48),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1249] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined_functor, 2, .production_id = 18),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_souffle(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
