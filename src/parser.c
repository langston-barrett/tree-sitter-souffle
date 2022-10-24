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
#define STATE_COUNT 492
#define LARGE_STATE_COUNT 44
#define SYMBOL_COUNT 215
#define ALIAS_COUNT 0
#define TOKEN_COUNT 133
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 32
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 68

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
  sym_directive_qualifier = 143,
  sym__directive_value = 144,
  sym_bool = 145,
  sym_rule = 146,
  sym_monotonic_rule = 147,
  sym_subsumptive_rule = 148,
  sym_query_plan = 149,
  sym_disjunction = 150,
  sym_negation = 151,
  sym_conjunction = 152,
  sym_constraint = 153,
  sym_match = 154,
  sym_contains = 155,
  sym_comparison = 156,
  sym_fact = 157,
  sym_atom = 158,
  sym_argument = 159,
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
  sym_unary_operator = 174,
  sym_unary_op = 175,
  sym_binary_op = 176,
  sym_relation_decl = 177,
  sym_relation_qualifier = 178,
  sym_choice_domain = 179,
  sym_legacy_type_decl = 180,
  sym_type_decl = 181,
  sym_legacy_bare_type_decl = 182,
  sym_subtype = 183,
  sym_type_synonym = 184,
  sym_type_union = 185,
  sym_type_record = 186,
  sym_adt = 187,
  sym_adt_branch = 188,
  sym_type_name = 189,
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
  aux_sym_atom_repeat1 = 207,
  aux_sym_relation_decl_repeat1 = 208,
  aux_sym_relation_decl_repeat2 = 209,
  aux_sym_relation_decl_repeat3 = 210,
  aux_sym_choice_domain_repeat1 = 211,
  aux_sym_type_union_repeat1 = 212,
  aux_sym_adt_repeat1 = 213,
  aux_sym_qualified_name_repeat1 = 214,
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
  [sym_directive_qualifier] = "directive_qualifier",
  [sym__directive_value] = "_directive_value",
  [sym_bool] = "bool",
  [sym_rule] = "rule",
  [sym_monotonic_rule] = "monotonic_rule",
  [sym_subsumptive_rule] = "subsumptive_rule",
  [sym_query_plan] = "query_plan",
  [sym_disjunction] = "disjunction",
  [sym_negation] = "negation",
  [sym_conjunction] = "conjunction",
  [sym_constraint] = "constraint",
  [sym_match] = "match",
  [sym_contains] = "contains",
  [sym_comparison] = "comparison",
  [sym_fact] = "fact",
  [sym_atom] = "atom",
  [sym_argument] = "argument",
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
  [sym_unary_operator] = "unary_operator",
  [sym_unary_op] = "unary_op",
  [sym_binary_op] = "binary_op",
  [sym_relation_decl] = "relation_decl",
  [sym_relation_qualifier] = "relation_qualifier",
  [sym_choice_domain] = "choice_domain",
  [sym_legacy_type_decl] = "legacy_type_decl",
  [sym_type_decl] = "type_decl",
  [sym_legacy_bare_type_decl] = "legacy_bare_type_decl",
  [sym_subtype] = "subtype",
  [sym_type_synonym] = "type_synonym",
  [sym_type_union] = "type_union",
  [sym_type_record] = "type_record",
  [sym_adt] = "adt",
  [sym_adt_branch] = "adt_branch",
  [sym_type_name] = "type_name",
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
  [aux_sym_atom_repeat1] = "atom_repeat1",
  [aux_sym_relation_decl_repeat1] = "relation_decl_repeat1",
  [aux_sym_relation_decl_repeat2] = "relation_decl_repeat2",
  [aux_sym_relation_decl_repeat3] = "relation_decl_repeat3",
  [aux_sym_choice_domain_repeat1] = "choice_domain_repeat1",
  [aux_sym_type_union_repeat1] = "type_union_repeat1",
  [aux_sym_adt_repeat1] = "adt_repeat1",
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
  [sym_directive_qualifier] = sym_directive_qualifier,
  [sym__directive_value] = sym__directive_value,
  [sym_bool] = sym_bool,
  [sym_rule] = sym_rule,
  [sym_monotonic_rule] = sym_monotonic_rule,
  [sym_subsumptive_rule] = sym_subsumptive_rule,
  [sym_query_plan] = sym_query_plan,
  [sym_disjunction] = sym_disjunction,
  [sym_negation] = sym_negation,
  [sym_conjunction] = sym_conjunction,
  [sym_constraint] = sym_constraint,
  [sym_match] = sym_match,
  [sym_contains] = sym_contains,
  [sym_comparison] = sym_comparison,
  [sym_fact] = sym_fact,
  [sym_atom] = sym_atom,
  [sym_argument] = sym_argument,
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
  [sym_unary_operator] = sym_unary_operator,
  [sym_unary_op] = sym_unary_op,
  [sym_binary_op] = sym_binary_op,
  [sym_relation_decl] = sym_relation_decl,
  [sym_relation_qualifier] = sym_relation_qualifier,
  [sym_choice_domain] = sym_choice_domain,
  [sym_legacy_type_decl] = sym_legacy_type_decl,
  [sym_type_decl] = sym_type_decl,
  [sym_legacy_bare_type_decl] = sym_legacy_bare_type_decl,
  [sym_subtype] = sym_subtype,
  [sym_type_synonym] = sym_type_synonym,
  [sym_type_union] = sym_type_union,
  [sym_type_record] = sym_type_record,
  [sym_adt] = sym_adt,
  [sym_adt_branch] = sym_adt_branch,
  [sym_type_name] = sym_type_name,
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
  [aux_sym_atom_repeat1] = aux_sym_atom_repeat1,
  [aux_sym_relation_decl_repeat1] = aux_sym_relation_decl_repeat1,
  [aux_sym_relation_decl_repeat2] = aux_sym_relation_decl_repeat2,
  [aux_sym_relation_decl_repeat3] = aux_sym_relation_decl_repeat3,
  [aux_sym_choice_domain_repeat1] = aux_sym_choice_domain_repeat1,
  [aux_sym_type_union_repeat1] = aux_sym_type_union_repeat1,
  [aux_sym_adt_repeat1] = aux_sym_adt_repeat1,
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
  [sym_directive_qualifier] = {
    .visible = true,
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
  [sym_rule] = {
    .visible = true,
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
  [sym_constraint] = {
    .visible = true,
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
  [sym_argument] = {
    .visible = true,
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
  [sym_unary_operator] = {
    .visible = true,
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
  [sym_relation_qualifier] = {
    .visible = true,
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
  [sym_adt_branch] = {
    .visible = true,
    .named = true,
  },
  [sym_type_name] = {
    .visible = true,
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
  [aux_sym_atom_repeat1] = {
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
  field_file = 9,
  field_head = 10,
  field_high = 11,
  field_key = 12,
  field_left = 13,
  field_line = 14,
  field_low = 15,
  field_name = 16,
  field_operand = 17,
  field_operator = 18,
  field_param = 19,
  field_plan = 20,
  field_relation = 21,
  field_return = 22,
  field_right = 23,
  field_step = 24,
  field_subsumed = 25,
  field_subsumes = 26,
  field_subtype = 27,
  field_super = 28,
  field_supertype = 29,
  field_type = 30,
  field_value = 31,
  field_var = 32,
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
  [field_file] = "file",
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
  [13] = {.index = 17, .length = 2},
  [14] = {.index = 19, .length = 2},
  [15] = {.index = 21, .length = 2},
  [16] = {.index = 23, .length = 1},
  [17] = {.index = 24, .length = 2},
  [18] = {.index = 26, .length = 2},
  [19] = {.index = 28, .length = 1},
  [20] = {.index = 29, .length = 2},
  [21] = {.index = 31, .length = 2},
  [22] = {.index = 33, .length = 2},
  [23] = {.index = 35, .length = 1},
  [24] = {.index = 36, .length = 4},
  [25] = {.index = 40, .length = 2},
  [26] = {.index = 42, .length = 2},
  [27] = {.index = 44, .length = 2},
  [28] = {.index = 46, .length = 2},
  [29] = {.index = 48, .length = 1},
  [30] = {.index = 49, .length = 3},
  [31] = {.index = 52, .length = 3},
  [32] = {.index = 55, .length = 4},
  [33] = {.index = 59, .length = 1},
  [34] = {.index = 60, .length = 3},
  [35] = {.index = 63, .length = 3},
  [36] = {.index = 66, .length = 3},
  [37] = {.index = 69, .length = 3},
  [38] = {.index = 72, .length = 2},
  [39] = {.index = 74, .length = 1},
  [40] = {.index = 75, .length = 3},
  [41] = {.index = 78, .length = 2},
  [42] = {.index = 80, .length = 1},
  [43] = {.index = 81, .length = 2},
  [44] = {.index = 83, .length = 2},
  [45] = {.index = 85, .length = 4},
  [46] = {.index = 89, .length = 1},
  [47] = {.index = 90, .length = 3},
  [48] = {.index = 93, .length = 4},
  [49] = {.index = 97, .length = 3},
  [50] = {.index = 100, .length = 3},
  [51] = {.index = 103, .length = 4},
  [52] = {.index = 107, .length = 3},
  [53] = {.index = 110, .length = 3},
  [54] = {.index = 113, .length = 2},
  [55] = {.index = 115, .length = 3},
  [56] = {.index = 118, .length = 3},
  [57] = {.index = 121, .length = 4},
  [58] = {.index = 125, .length = 5},
  [59] = {.index = 130, .length = 5},
  [60] = {.index = 135, .length = 4},
  [61] = {.index = 139, .length = 5},
  [62] = {.index = 144, .length = 4},
  [63] = {.index = 148, .length = 2},
  [64] = {.index = 150, .length = 3},
  [65] = {.index = 153, .length = 2},
  [66] = {.index = 155, .length = 6},
  [67] = {.index = 161, .length = 3},
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
    {field_head, 1},
  [17] =
    {field_branch, 2},
    {field_left, 0},
  [19] =
    {field_left, 0},
    {field_right, 2},
  [21] =
    {field_relation, 0, .inherited = true},
    {field_relation, 1, .inherited = true},
  [23] =
    {field_constructor, 1},
  [24] =
    {field_body, 2},
    {field_head, 0},
  [26] =
    {field_operand, 1},
    {field_operator, 0},
  [28] =
    {field_argument, 1},
  [29] =
    {field_argument, 2},
    {field_relation, 0},
  [31] =
    {field_argument, 2, .inherited = true},
    {field_relation, 0},
  [33] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [35] =
    {field_attribute, 1},
  [36] =
    {field_attribute, 0, .inherited = true},
    {field_attribute, 1, .inherited = true},
    {field_type, 0, .inherited = true},
    {field_type, 1, .inherited = true},
  [40] =
    {field_name, 0},
    {field_param, 2},
  [42] =
    {field_body, 3},
    {field_type, 1},
  [44] =
    {field_type, 2},
    {field_var, 0},
  [46] =
    {field_head, 1},
    {field_head, 2},
  [48] =
    {field_left, 0},
  [49] =
    {field_branch, 2},
    {field_branch, 3},
    {field_left, 0},
  [52] =
    {field_key, 3, .inherited = true},
    {field_relation, 1},
    {field_value, 3, .inherited = true},
  [55] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [59] =
    {field_body, 2},
  [60] =
    {field_body, 2},
    {field_head, 0},
    {field_plan, 4},
  [63] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [66] =
    {field_body, 3},
    {field_head, 0},
    {field_head, 1},
  [69] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_relation, 0},
  [72] =
    {field_name, 1},
    {field_return, 5},
  [74] =
    {field_param, 1},
  [75] =
    {field_name, 0},
    {field_param, 2},
    {field_param, 3, .inherited = true},
  [78] =
    {field_param, 0, .inherited = true},
    {field_param, 1, .inherited = true},
  [80] =
    {field_super, 1},
  [81] =
    {field_super, 3},
    {field_type, 1},
  [83] =
    {field_super, 0, .inherited = true},
    {field_super, 1, .inherited = true},
  [85] =
    {field_key, 4, .inherited = true},
    {field_relation, 1},
    {field_relation, 2, .inherited = true},
    {field_value, 4, .inherited = true},
  [89] =
    {field_body, 3},
  [90] =
    {field_body, 4},
    {field_subsumed, 0},
    {field_subsumes, 2},
  [93] =
    {field_body, 3},
    {field_head, 0},
    {field_head, 1},
    {field_plan, 5},
  [97] =
    {field_name, 1},
    {field_return, 6},
    {field_type, 3},
  [100] =
    {field_attribute, 3},
    {field_name, 1},
    {field_return, 6},
  [103] =
    {field_attribute, 3, .inherited = true},
    {field_name, 1},
    {field_return, 6},
    {field_type, 3, .inherited = true},
  [107] =
    {field_body, 5},
    {field_super, 3},
    {field_type, 1},
  [110] =
    {field_super, 3},
    {field_super, 4, .inherited = true},
    {field_type, 1},
  [113] =
    {field_key, 1},
    {field_value, 3},
  [115] =
    {field_key, 3},
    {field_relation, 1},
    {field_value, 5},
  [118] =
    {field_body, 2},
    {field_body, 3},
    {field_body, 4},
  [121] =
    {field_body, 4},
    {field_plan, 6},
    {field_subsumed, 0},
    {field_subsumes, 2},
  [125] =
    {field_attribute, 4, .inherited = true},
    {field_name, 1},
    {field_return, 7},
    {field_type, 3},
    {field_type, 4, .inherited = true},
  [130] =
    {field_attribute, 3},
    {field_attribute, 4, .inherited = true},
    {field_name, 1},
    {field_return, 7},
    {field_type, 4, .inherited = true},
  [135] =
    {field_body, 6},
    {field_super, 3},
    {field_super, 4, .inherited = true},
    {field_type, 1},
  [139] =
    {field_key, 3},
    {field_key, 6, .inherited = true},
    {field_relation, 1},
    {field_value, 5},
    {field_value, 6, .inherited = true},
  [144] =
    {field_key, 4},
    {field_relation, 1},
    {field_relation, 2, .inherited = true},
    {field_value, 6},
  [148] =
    {field_expr, 2},
    {field_type, 4},
  [150] =
    {field_body, 3},
    {field_body, 4},
    {field_body, 5},
  [153] =
    {field_high, 4},
    {field_low, 2},
  [155] =
    {field_key, 4},
    {field_key, 7, .inherited = true},
    {field_relation, 1},
    {field_relation, 2, .inherited = true},
    {field_value, 6},
    {field_value, 7, .inherited = true},
  [161] =
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
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 5},
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
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 301},
  [84] = {.lex_state = 4},
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
  [95] = {.lex_state = 304},
  [96] = {.lex_state = 304},
  [97] = {.lex_state = 304},
  [98] = {.lex_state = 304},
  [99] = {.lex_state = 304},
  [100] = {.lex_state = 304},
  [101] = {.lex_state = 301},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 304},
  [104] = {.lex_state = 304},
  [105] = {.lex_state = 304},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 304},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 301},
  [110] = {.lex_state = 301},
  [111] = {.lex_state = 301},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 301},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 301},
  [116] = {.lex_state = 301},
  [117] = {.lex_state = 301},
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
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 301},
  [139] = {.lex_state = 301},
  [140] = {.lex_state = 301},
  [141] = {.lex_state = 302},
  [142] = {.lex_state = 302},
  [143] = {.lex_state = 301},
  [144] = {.lex_state = 302},
  [145] = {.lex_state = 301},
  [146] = {.lex_state = 301},
  [147] = {.lex_state = 301},
  [148] = {.lex_state = 301},
  [149] = {.lex_state = 301},
  [150] = {.lex_state = 301},
  [151] = {.lex_state = 301},
  [152] = {.lex_state = 301},
  [153] = {.lex_state = 301},
  [154] = {.lex_state = 301},
  [155] = {.lex_state = 301},
  [156] = {.lex_state = 301},
  [157] = {.lex_state = 301},
  [158] = {.lex_state = 301},
  [159] = {.lex_state = 302},
  [160] = {.lex_state = 301},
  [161] = {.lex_state = 301},
  [162] = {.lex_state = 301},
  [163] = {.lex_state = 301},
  [164] = {.lex_state = 301},
  [165] = {.lex_state = 302},
  [166] = {.lex_state = 301},
  [167] = {.lex_state = 301},
  [168] = {.lex_state = 301},
  [169] = {.lex_state = 301},
  [170] = {.lex_state = 301},
  [171] = {.lex_state = 301},
  [172] = {.lex_state = 301},
  [173] = {.lex_state = 301},
  [174] = {.lex_state = 303},
  [175] = {.lex_state = 301},
  [176] = {.lex_state = 303},
  [177] = {.lex_state = 303},
  [178] = {.lex_state = 301},
  [179] = {.lex_state = 301},
  [180] = {.lex_state = 301},
  [181] = {.lex_state = 301},
  [182] = {.lex_state = 301},
  [183] = {.lex_state = 301},
  [184] = {.lex_state = 301},
  [185] = {.lex_state = 301},
  [186] = {.lex_state = 301},
  [187] = {.lex_state = 302},
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
  [200] = {.lex_state = 301},
  [201] = {.lex_state = 301},
  [202] = {.lex_state = 301},
  [203] = {.lex_state = 301},
  [204] = {.lex_state = 301},
  [205] = {.lex_state = 301},
  [206] = {.lex_state = 301},
  [207] = {.lex_state = 301},
  [208] = {.lex_state = 301},
  [209] = {.lex_state = 301},
  [210] = {.lex_state = 301},
  [211] = {.lex_state = 301},
  [212] = {.lex_state = 301},
  [213] = {.lex_state = 301},
  [214] = {.lex_state = 301},
  [215] = {.lex_state = 301},
  [216] = {.lex_state = 301},
  [217] = {.lex_state = 301},
  [218] = {.lex_state = 301},
  [219] = {.lex_state = 301},
  [220] = {.lex_state = 301},
  [221] = {.lex_state = 301},
  [222] = {.lex_state = 301},
  [223] = {.lex_state = 8},
  [224] = {.lex_state = 301},
  [225] = {.lex_state = 301},
  [226] = {.lex_state = 301},
  [227] = {.lex_state = 303},
  [228] = {.lex_state = 301},
  [229] = {.lex_state = 301},
  [230] = {.lex_state = 8},
  [231] = {.lex_state = 301},
  [232] = {.lex_state = 301},
  [233] = {.lex_state = 8},
  [234] = {.lex_state = 303},
  [235] = {.lex_state = 303},
  [236] = {.lex_state = 303},
  [237] = {.lex_state = 303},
  [238] = {.lex_state = 8},
  [239] = {.lex_state = 301},
  [240] = {.lex_state = 8},
  [241] = {.lex_state = 303},
  [242] = {.lex_state = 303},
  [243] = {.lex_state = 303},
  [244] = {.lex_state = 303},
  [245] = {.lex_state = 301},
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
  [257] = {.lex_state = 8},
  [258] = {.lex_state = 301},
  [259] = {.lex_state = 301},
  [260] = {.lex_state = 301},
  [261] = {.lex_state = 301},
  [262] = {.lex_state = 301},
  [263] = {.lex_state = 9},
  [264] = {.lex_state = 301},
  [265] = {.lex_state = 9},
  [266] = {.lex_state = 9},
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
  [281] = {.lex_state = 301},
  [282] = {.lex_state = 301},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 301},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 301},
  [287] = {.lex_state = 4},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 4},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 4},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 4},
  [296] = {.lex_state = 4},
  [297] = {.lex_state = 9},
  [298] = {.lex_state = 4},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 301},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 4},
  [303] = {.lex_state = 301},
  [304] = {.lex_state = 4},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 4},
  [307] = {.lex_state = 301},
  [308] = {.lex_state = 4},
  [309] = {.lex_state = 4},
  [310] = {.lex_state = 4},
  [311] = {.lex_state = 4},
  [312] = {.lex_state = 4},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 4},
  [315] = {.lex_state = 4},
  [316] = {.lex_state = 4},
  [317] = {.lex_state = 4},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 4},
  [320] = {.lex_state = 4},
  [321] = {.lex_state = 4},
  [322] = {.lex_state = 301},
  [323] = {.lex_state = 301},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 301},
  [326] = {.lex_state = 4},
  [327] = {.lex_state = 4},
  [328] = {.lex_state = 4},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 301},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 301},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 4},
  [336] = {.lex_state = 0},
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
  [347] = {.lex_state = 4},
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
  [360] = {.lex_state = 0},
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
  [373] = {.lex_state = 3},
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
  [394] = {.lex_state = 301},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 301},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 3},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 301},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 3},
  [412] = {.lex_state = 301},
  [413] = {.lex_state = 301},
  [414] = {.lex_state = 301},
  [415] = {.lex_state = 301},
  [416] = {.lex_state = 301},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 301},
  [419] = {.lex_state = 301},
  [420] = {.lex_state = 301},
  [421] = {.lex_state = 301},
  [422] = {.lex_state = 301},
  [423] = {.lex_state = 301},
  [424] = {.lex_state = 301},
  [425] = {.lex_state = 301},
  [426] = {.lex_state = 301},
  [427] = {.lex_state = 301},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 301},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 301},
  [432] = {.lex_state = 3},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 4},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 301},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 1},
  [440] = {.lex_state = 3},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 4},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 301},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 301},
  [454] = {.lex_state = 301},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 301},
  [457] = {.lex_state = 301},
  [458] = {.lex_state = 301},
  [459] = {.lex_state = 301},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 301},
  [462] = {.lex_state = 301},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 301},
  [466] = {.lex_state = 301},
  [467] = {.lex_state = 4},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 4},
  [470] = {.lex_state = 301},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 301},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 301},
  [476] = {.lex_state = 301},
  [477] = {.lex_state = 301},
  [478] = {.lex_state = 301},
  [479] = {.lex_state = 4},
  [480] = {.lex_state = 301},
  [481] = {.lex_state = 301},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 301},
  [484] = {.lex_state = 4},
  [485] = {.lex_state = 301},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 4},
  [490] = {.lex_state = 315},
  [491] = {.lex_state = 11},
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
    [sym_program] = STATE(450),
    [sym_preprocessor] = STATE(101),
    [sym_block_comment] = STATE(101),
    [sym_line_comment] = STATE(101),
    [sym_pragma] = STATE(101),
    [sym_functor_decl] = STATE(101),
    [sym_component_decl] = STATE(101),
    [sym_component_init] = STATE(101),
    [sym_directive] = STATE(101),
    [sym_directive_qualifier] = STATE(421),
    [sym_rule] = STATE(101),
    [sym_monotonic_rule] = STATE(228),
    [sym_subsumptive_rule] = STATE(228),
    [sym_fact] = STATE(101),
    [sym_atom] = STATE(297),
    [sym_relation_decl] = STATE(101),
    [sym_legacy_type_decl] = STATE(101),
    [sym_type_decl] = STATE(101),
    [sym_qualified_name] = STATE(442),
    [aux_sym_program_repeat1] = STATE(101),
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
    [sym_bool] = STATE(306),
    [sym_disjunction] = STATE(488),
    [sym_negation] = STATE(19),
    [sym_conjunction] = STATE(330),
    [sym_constraint] = STATE(294),
    [sym_match] = STATE(306),
    [sym_contains] = STATE(306),
    [sym_comparison] = STATE(306),
    [sym_atom] = STATE(294),
    [sym_argument] = STATE(108),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(30),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [sym_qualified_name] = STATE(442),
    [aux_sym_conjunction_repeat1] = STATE(19),
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
    [sym_disjunction] = STATE(487),
    [sym_negation] = STATE(19),
    [sym_conjunction] = STATE(330),
    [sym_constraint] = STATE(294),
    [sym_match] = STATE(306),
    [sym_contains] = STATE(306),
    [sym_comparison] = STATE(306),
    [sym_atom] = STATE(294),
    [sym_argument] = STATE(108),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(30),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [sym_qualified_name] = STATE(442),
    [aux_sym_conjunction_repeat1] = STATE(19),
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
  [4] = {
    [sym_bool] = STATE(306),
    [sym_disjunction] = STATE(446),
    [sym_negation] = STATE(19),
    [sym_conjunction] = STATE(330),
    [sym_constraint] = STATE(294),
    [sym_match] = STATE(306),
    [sym_contains] = STATE(306),
    [sym_comparison] = STATE(306),
    [sym_atom] = STATE(294),
    [sym_argument] = STATE(114),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(30),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [sym_qualified_name] = STATE(442),
    [aux_sym_conjunction_repeat1] = STATE(19),
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
    [sym_disjunction] = STATE(428),
    [sym_negation] = STATE(19),
    [sym_conjunction] = STATE(330),
    [sym_constraint] = STATE(294),
    [sym_match] = STATE(306),
    [sym_contains] = STATE(306),
    [sym_comparison] = STATE(306),
    [sym_atom] = STATE(294),
    [sym_argument] = STATE(114),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(30),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [sym_qualified_name] = STATE(442),
    [aux_sym_conjunction_repeat1] = STATE(19),
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
  [6] = {
    [sym_bool] = STATE(306),
    [sym_disjunction] = STATE(468),
    [sym_negation] = STATE(19),
    [sym_conjunction] = STATE(330),
    [sym_constraint] = STATE(294),
    [sym_match] = STATE(306),
    [sym_contains] = STATE(306),
    [sym_comparison] = STATE(306),
    [sym_atom] = STATE(294),
    [sym_argument] = STATE(108),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(30),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [sym_qualified_name] = STATE(442),
    [aux_sym_conjunction_repeat1] = STATE(19),
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
  [7] = {
    [sym_bool] = STATE(306),
    [sym_disjunction] = STATE(451),
    [sym_negation] = STATE(19),
    [sym_conjunction] = STATE(330),
    [sym_constraint] = STATE(294),
    [sym_match] = STATE(306),
    [sym_contains] = STATE(306),
    [sym_comparison] = STATE(306),
    [sym_atom] = STATE(294),
    [sym_argument] = STATE(108),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(30),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [sym_qualified_name] = STATE(442),
    [aux_sym_conjunction_repeat1] = STATE(19),
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
  [8] = {
    [sym_bool] = STATE(306),
    [sym_disjunction] = STATE(489),
    [sym_negation] = STATE(16),
    [sym_conjunction] = STATE(347),
    [sym_constraint] = STATE(315),
    [sym_match] = STATE(306),
    [sym_contains] = STATE(306),
    [sym_comparison] = STATE(306),
    [sym_atom] = STATE(315),
    [sym_argument] = STATE(112),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(30),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [sym_qualified_name] = STATE(442),
    [aux_sym_conjunction_repeat1] = STATE(16),
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
  [9] = {
    [sym_bool] = STATE(306),
    [sym_disjunction] = STATE(484),
    [sym_negation] = STATE(16),
    [sym_conjunction] = STATE(347),
    [sym_constraint] = STATE(315),
    [sym_match] = STATE(306),
    [sym_contains] = STATE(306),
    [sym_comparison] = STATE(306),
    [sym_atom] = STATE(315),
    [sym_argument] = STATE(112),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(30),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [sym_qualified_name] = STATE(442),
    [aux_sym_conjunction_repeat1] = STATE(16),
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
  [10] = {
    [sym_bool] = STATE(306),
    [sym_disjunction] = STATE(469),
    [sym_negation] = STATE(16),
    [sym_conjunction] = STATE(347),
    [sym_constraint] = STATE(315),
    [sym_match] = STATE(306),
    [sym_contains] = STATE(306),
    [sym_comparison] = STATE(306),
    [sym_atom] = STATE(315),
    [sym_argument] = STATE(112),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(30),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [sym_qualified_name] = STATE(442),
    [aux_sym_conjunction_repeat1] = STATE(16),
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
  [11] = {
    [sym_bool] = STATE(306),
    [sym_disjunction] = STATE(438),
    [sym_negation] = STATE(19),
    [sym_conjunction] = STATE(330),
    [sym_constraint] = STATE(294),
    [sym_match] = STATE(306),
    [sym_contains] = STATE(306),
    [sym_comparison] = STATE(306),
    [sym_atom] = STATE(294),
    [sym_argument] = STATE(108),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(30),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [sym_qualified_name] = STATE(442),
    [aux_sym_conjunction_repeat1] = STATE(19),
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
  [12] = {
    [sym_bool] = STATE(306),
    [sym_disjunction] = STATE(455),
    [sym_negation] = STATE(19),
    [sym_conjunction] = STATE(330),
    [sym_constraint] = STATE(294),
    [sym_match] = STATE(306),
    [sym_contains] = STATE(306),
    [sym_comparison] = STATE(306),
    [sym_atom] = STATE(294),
    [sym_argument] = STATE(108),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(30),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [sym_qualified_name] = STATE(442),
    [aux_sym_conjunction_repeat1] = STATE(19),
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
    [sym_negation] = STATE(19),
    [sym_conjunction] = STATE(321),
    [sym_constraint] = STATE(294),
    [sym_match] = STATE(306),
    [sym_contains] = STATE(306),
    [sym_comparison] = STATE(306),
    [sym_atom] = STATE(294),
    [sym_argument] = STATE(114),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(30),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [sym_qualified_name] = STATE(442),
    [aux_sym_conjunction_repeat1] = STATE(19),
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
  [14] = {
    [sym_bool] = STATE(306),
    [sym_negation] = STATE(16),
    [sym_conjunction] = STATE(321),
    [sym_constraint] = STATE(315),
    [sym_match] = STATE(306),
    [sym_contains] = STATE(306),
    [sym_comparison] = STATE(306),
    [sym_atom] = STATE(315),
    [sym_argument] = STATE(112),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(30),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [sym_qualified_name] = STATE(442),
    [aux_sym_conjunction_repeat1] = STATE(16),
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
    [sym_bool] = STATE(306),
    [sym_negation] = STATE(44),
    [sym_constraint] = STATE(302),
    [sym_match] = STATE(306),
    [sym_contains] = STATE(306),
    [sym_comparison] = STATE(306),
    [sym_atom] = STATE(302),
    [sym_argument] = STATE(114),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(30),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [sym_qualified_name] = STATE(442),
    [aux_sym_conjunction_repeat1] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(77),
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
    [sym_bool] = STATE(306),
    [sym_negation] = STATE(44),
    [sym_constraint] = STATE(327),
    [sym_match] = STATE(306),
    [sym_contains] = STATE(306),
    [sym_comparison] = STATE(306),
    [sym_atom] = STATE(327),
    [sym_argument] = STATE(112),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(30),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [sym_qualified_name] = STATE(442),
    [aux_sym_conjunction_repeat1] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(79),
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
    [sym_bool] = STATE(306),
    [sym_negation] = STATE(44),
    [sym_constraint] = STATE(302),
    [sym_match] = STATE(306),
    [sym_contains] = STATE(306),
    [sym_comparison] = STATE(306),
    [sym_atom] = STATE(302),
    [sym_argument] = STATE(112),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(30),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [sym_qualified_name] = STATE(442),
    [aux_sym_conjunction_repeat1] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(77),
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
  [18] = {
    [sym_bool] = STATE(306),
    [sym_negation] = STATE(17),
    [sym_constraint] = STATE(309),
    [sym_match] = STATE(306),
    [sym_contains] = STATE(306),
    [sym_comparison] = STATE(306),
    [sym_atom] = STATE(309),
    [sym_argument] = STATE(112),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(30),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [sym_qualified_name] = STATE(442),
    [aux_sym_conjunction_repeat1] = STATE(17),
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
  [19] = {
    [sym_bool] = STATE(306),
    [sym_negation] = STATE(44),
    [sym_constraint] = STATE(285),
    [sym_match] = STATE(306),
    [sym_contains] = STATE(306),
    [sym_comparison] = STATE(306),
    [sym_atom] = STATE(285),
    [sym_argument] = STATE(114),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(30),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [sym_qualified_name] = STATE(442),
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
  [20] = {
    [sym_bool] = STATE(306),
    [sym_negation] = STATE(15),
    [sym_constraint] = STATE(309),
    [sym_match] = STATE(306),
    [sym_contains] = STATE(306),
    [sym_comparison] = STATE(306),
    [sym_atom] = STATE(309),
    [sym_argument] = STATE(114),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(30),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [sym_qualified_name] = STATE(442),
    [aux_sym_conjunction_repeat1] = STATE(15),
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
  [21] = {
    [sym_argument] = STATE(126),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(30),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [aux_sym_match_repeat1] = STATE(336),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(89),
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
    [sym_ident] = ACTIONS(91),
  },
  [22] = {
    [sym_argument] = STATE(122),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(30),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [aux_sym_atom_repeat1] = STATE(377),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(93),
    [anon_sym_RPAREN] = ACTIONS(95),
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
    [sym_ident] = ACTIONS(91),
  },
  [23] = {
    [sym_argument] = STATE(121),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(30),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [aux_sym_match_repeat1] = STATE(365),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(97),
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
    [sym_ident] = ACTIONS(91),
  },
  [24] = {
    [sym_argument] = STATE(123),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(30),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [aux_sym_match_repeat1] = STATE(350),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(87),
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
    [sym_ident] = ACTIONS(91),
  },
  [25] = {
    [sym_argument] = STATE(128),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(30),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [aux_sym_match_repeat1] = STATE(338),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_BANG] = ACTIONS(71),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_RBRACK] = ACTIONS(101),
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
    [sym_ident] = ACTIONS(91),
  },
  [26] = {
    [sym_argument] = STATE(124),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(30),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [aux_sym_match_repeat1] = STATE(364),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(87),
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
    [sym_ident] = ACTIONS(91),
  },
  [27] = {
    [sym_argument] = STATE(135),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(30),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(105),
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
    [sym_ident] = ACTIONS(91),
  },
  [28] = {
    [sym_argument] = STATE(131),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(30),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(85),
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
    [sym_ident] = ACTIONS(91),
  },
  [29] = {
    [sym_argument] = STATE(127),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(30),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(85),
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
    [sym_ident] = ACTIONS(91),
  },
  [30] = {
    [sym_argument] = STATE(102),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(30),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(85),
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
    [sym_ident] = ACTIONS(91),
  },
  [31] = {
    [sym_argument] = STATE(134),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(30),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(85),
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
    [sym_ident] = ACTIONS(91),
  },
  [32] = {
    [sym_argument] = STATE(133),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(30),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(85),
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
    [sym_ident] = ACTIONS(91),
  },
  [33] = {
    [sym_argument] = STATE(125),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(33),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(71),
    [anon_sym_DOLLAR] = ACTIONS(107),
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
    [sym_ident] = ACTIONS(91),
  },
  [34] = {
    [sym_argument] = STATE(137),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(30),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(85),
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
    [sym_ident] = ACTIONS(91),
  },
  [35] = {
    [sym_argument] = STATE(57),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(33),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(71),
    [anon_sym_DOLLAR] = ACTIONS(107),
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
    [sym_ident] = ACTIONS(91),
  },
  [36] = {
    [sym_argument] = STATE(120),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(30),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(85),
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
    [sym_ident] = ACTIONS(91),
  },
  [37] = {
    [sym_argument] = STATE(136),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(30),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(85),
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
    [sym_ident] = ACTIONS(91),
  },
  [38] = {
    [sym_argument] = STATE(130),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(33),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(71),
    [anon_sym_DOLLAR] = ACTIONS(107),
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
    [sym_ident] = ACTIONS(91),
  },
  [39] = {
    [sym_argument] = STATE(135),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(30),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(85),
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
    [sym_ident] = ACTIONS(91),
  },
  [40] = {
    [sym_argument] = STATE(57),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(30),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(85),
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
    [sym_ident] = ACTIONS(91),
  },
  [41] = {
    [sym_argument] = STATE(132),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(30),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(85),
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
    [sym_ident] = ACTIONS(91),
  },
  [42] = {
    [sym_argument] = STATE(129),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(33),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(71),
    [anon_sym_DOLLAR] = ACTIONS(107),
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
    [sym_ident] = ACTIONS(91),
  },
  [43] = {
    [sym_argument] = STATE(84),
    [sym_adt_constructor] = STATE(65),
    [sym_record_constructor] = STATE(65),
    [sym_constant] = STATE(65),
    [sym_number] = STATE(80),
    [sym_integer] = STATE(82),
    [sym_decimal] = STATE(75),
    [sym_float] = STATE(82),
    [sym_variable] = STATE(65),
    [sym_as] = STATE(65),
    [sym_functor_call] = STATE(65),
    [sym_user_defined_functor] = STATE(433),
    [sym_intrinsic_functor] = STATE(433),
    [sym_aggregator] = STATE(65),
    [sym_range] = STATE(59),
    [sym_unary_operator] = STATE(30),
    [sym_unary_op] = STATE(65),
    [sym_binary_op] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(85),
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
    [sym_ident] = ACTIONS(91),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(113), 1,
      anon_sym_BANG,
    STATE(44), 2,
      sym_negation,
      aux_sym_conjunction_repeat1,
    ACTIONS(109), 10,
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
    ACTIONS(111), 42,
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
    ACTIONS(116), 11,
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
    ACTIONS(118), 42,
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
    ACTIONS(116), 11,
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
    ACTIONS(118), 42,
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
  [180] = 2,
    ACTIONS(120), 11,
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
    ACTIONS(122), 38,
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
  [234] = 4,
    ACTIONS(128), 1,
      anon_sym_DOT,
    STATE(50), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(126), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(124), 29,
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
  [282] = 4,
    ACTIONS(134), 1,
      anon_sym_DOT,
    STATE(49), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(132), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(130), 29,
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
  [330] = 4,
    ACTIONS(128), 1,
      anon_sym_DOT,
    STATE(49), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(139), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(137), 29,
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
  [378] = 2,
    ACTIONS(143), 9,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(141), 29,
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
  [421] = 2,
    ACTIONS(147), 9,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(145), 29,
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
  [464] = 3,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(149), 29,
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
  [509] = 2,
    ACTIONS(157), 9,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(155), 29,
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
  [552] = 2,
    ACTIONS(161), 9,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(159), 29,
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
  [595] = 2,
    ACTIONS(132), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(130), 30,
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
  [638] = 2,
    ACTIONS(165), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(163), 29,
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
  [680] = 2,
    ACTIONS(169), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(167), 29,
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
  [722] = 2,
    ACTIONS(173), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(171), 29,
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
  [764] = 2,
    ACTIONS(177), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(175), 29,
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
  [806] = 2,
    ACTIONS(181), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(179), 29,
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
  [848] = 2,
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
  [890] = 2,
    ACTIONS(189), 8,
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
  [932] = 2,
    ACTIONS(193), 8,
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
  [974] = 2,
    ACTIONS(197), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(195), 29,
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
  [1016] = 2,
    ACTIONS(201), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(199), 29,
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
  [1058] = 2,
    ACTIONS(205), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(203), 29,
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
  [1100] = 2,
    ACTIONS(209), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(207), 29,
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
  [1142] = 2,
    ACTIONS(213), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(211), 29,
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
  [1184] = 2,
    ACTIONS(217), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(215), 29,
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
  [1226] = 2,
    ACTIONS(221), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(219), 29,
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
  [1268] = 2,
    ACTIONS(225), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(223), 29,
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
  [1310] = 2,
    ACTIONS(229), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(227), 29,
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
  [1352] = 2,
    ACTIONS(233), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(231), 29,
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
  [1394] = 2,
    ACTIONS(237), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(235), 29,
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
  [1436] = 2,
    ACTIONS(241), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(239), 29,
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
  [1478] = 2,
    ACTIONS(245), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(243), 29,
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
  [1520] = 2,
    ACTIONS(249), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(247), 29,
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
  [1562] = 2,
    ACTIONS(253), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(251), 29,
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
  [1604] = 2,
    ACTIONS(257), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(255), 29,
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
  [1646] = 2,
    ACTIONS(261), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(259), 29,
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
  [1688] = 2,
    ACTIONS(265), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(263), 29,
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
  [1730] = 18,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    ACTIONS(269), 1,
      anon_sym_POUNDline,
    ACTIONS(272), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(275), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_DOTpragma,
    ACTIONS(281), 1,
      anon_sym_DOTfunctor,
    ACTIONS(284), 1,
      anon_sym_DOTcomp,
    ACTIONS(287), 1,
      anon_sym_DOTinit,
    ACTIONS(293), 1,
      anon_sym_DOTdecl,
    ACTIONS(299), 1,
      anon_sym_DOTtype,
    ACTIONS(302), 1,
      sym_ident,
    STATE(297), 1,
      sym_atom,
    STATE(421), 1,
      sym_directive_qualifier,
    STATE(442), 1,
      sym_qualified_name,
    ACTIONS(296), 2,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
    STATE(228), 2,
      sym_monotonic_rule,
      sym_subsumptive_rule,
    ACTIONS(290), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(83), 14,
      sym_preprocessor,
      sym_block_comment,
      sym_line_comment,
      sym_pragma,
      sym_functor_decl,
      sym_component_decl,
      sym_component_init,
      sym_directive,
      sym_rule,
      sym_fact,
      sym_relation_decl,
      sym_legacy_type_decl,
      sym_type_decl,
      aux_sym_program_repeat1,
  [1803] = 4,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(307), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(163), 12,
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
    ACTIONS(305), 16,
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
  [1848] = 6,
    ACTIONS(313), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(315), 1,
      sym_ident,
    STATE(203), 1,
      sym_choice_domain,
    STATE(97), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(311), 13,
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
    ACTIONS(309), 18,
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
  [1897] = 6,
    ACTIONS(313), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(319), 1,
      sym_ident,
    STATE(204), 1,
      sym_choice_domain,
    STATE(103), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(311), 13,
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
    ACTIONS(317), 18,
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
  [1946] = 6,
    ACTIONS(313), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(319), 1,
      sym_ident,
    STATE(204), 1,
      sym_choice_domain,
    STATE(105), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(311), 13,
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
    ACTIONS(317), 18,
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
  [1995] = 6,
    ACTIONS(313), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(323), 1,
      sym_ident,
    STATE(202), 1,
      sym_choice_domain,
    STATE(105), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(311), 13,
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
    ACTIONS(321), 18,
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
  [2044] = 6,
    ACTIONS(313), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(327), 1,
      sym_ident,
    STATE(205), 1,
      sym_choice_domain,
    STATE(96), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(311), 13,
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
    ACTIONS(325), 18,
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
  [2093] = 6,
    ACTIONS(313), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(315), 1,
      sym_ident,
    STATE(203), 1,
      sym_choice_domain,
    STATE(105), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(311), 13,
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
    ACTIONS(309), 18,
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
  [2142] = 6,
    ACTIONS(313), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(327), 1,
      sym_ident,
    STATE(205), 1,
      sym_choice_domain,
    STATE(105), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(311), 13,
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
    ACTIONS(325), 18,
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
  [2191] = 6,
    ACTIONS(313), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(331), 1,
      sym_ident,
    STATE(216), 1,
      sym_choice_domain,
    STATE(90), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(311), 13,
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
    ACTIONS(329), 18,
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
  [2240] = 6,
    ACTIONS(313), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(335), 1,
      sym_ident,
    STATE(214), 1,
      sym_choice_domain,
    STATE(91), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(311), 13,
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
    ACTIONS(333), 18,
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
  [2289] = 6,
    ACTIONS(313), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(335), 1,
      sym_ident,
    STATE(214), 1,
      sym_choice_domain,
    STATE(105), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(311), 13,
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
    ACTIONS(333), 18,
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
  [2338] = 6,
    ACTIONS(313), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(339), 1,
      sym_ident,
    STATE(201), 1,
      sym_choice_domain,
    STATE(99), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(311), 13,
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
    ACTIONS(337), 18,
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
  [2387] = 6,
    ACTIONS(313), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(343), 1,
      sym_ident,
    STATE(191), 1,
      sym_choice_domain,
    STATE(105), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(311), 13,
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
    ACTIONS(341), 18,
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
  [2436] = 6,
    ACTIONS(313), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(347), 1,
      sym_ident,
    STATE(190), 1,
      sym_choice_domain,
    STATE(105), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(311), 13,
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
    ACTIONS(345), 18,
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
  [2485] = 6,
    ACTIONS(313), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(347), 1,
      sym_ident,
    STATE(190), 1,
      sym_choice_domain,
    STATE(88), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(311), 13,
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
    ACTIONS(345), 18,
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
  [2534] = 6,
    ACTIONS(313), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(351), 1,
      sym_ident,
    STATE(189), 1,
      sym_choice_domain,
    STATE(105), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(311), 13,
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
    ACTIONS(349), 18,
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
  [2583] = 6,
    ACTIONS(313), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(351), 1,
      sym_ident,
    STATE(189), 1,
      sym_choice_domain,
    STATE(87), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(311), 13,
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
    ACTIONS(349), 18,
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
  [2632] = 18,
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
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    STATE(297), 1,
      sym_atom,
    STATE(421), 1,
      sym_directive_qualifier,
    STATE(442), 1,
      sym_qualified_name,
    ACTIONS(23), 2,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
    STATE(228), 2,
      sym_monotonic_rule,
      sym_subsumptive_rule,
    ACTIONS(19), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(83), 14,
      sym_preprocessor,
      sym_block_comment,
      sym_line_comment,
      sym_pragma,
      sym_functor_decl,
      sym_component_decl,
      sym_component_init,
      sym_directive,
      sym_rule,
      sym_fact,
      sym_relation_decl,
      sym_legacy_type_decl,
      sym_type_decl,
      aux_sym_program_repeat1,
  [2705] = 5,
    ACTIONS(357), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(359), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(307), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(355), 10,
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
    ACTIONS(305), 16,
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
  [2752] = 6,
    ACTIONS(313), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(363), 1,
      sym_ident,
    STATE(210), 1,
      sym_choice_domain,
    STATE(105), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(311), 13,
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
    ACTIONS(361), 18,
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
  [2801] = 6,
    ACTIONS(313), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(367), 1,
      sym_ident,
    STATE(221), 1,
      sym_choice_domain,
    STATE(94), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(311), 13,
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
  [2850] = 4,
    ACTIONS(374), 1,
      sym_ident,
    STATE(105), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(371), 13,
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
    ACTIONS(369), 19,
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
  [2894] = 5,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_DOT,
    STATE(50), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(221), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(219), 23,
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
  [2939] = 2,
    ACTIONS(378), 14,
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
      sym_ident,
    ACTIONS(376), 19,
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
  [2977] = 6,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
    ACTIONS(359), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(307), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(305), 16,
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
  [3021] = 16,
    ACTIONS(386), 1,
      anon_sym_POUNDline,
    ACTIONS(389), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(392), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(395), 1,
      anon_sym_DOTcomp,
    ACTIONS(398), 1,
      anon_sym_DOToverride,
    ACTIONS(401), 1,
      anon_sym_RBRACE,
    ACTIONS(403), 1,
      anon_sym_DOTinit,
    ACTIONS(409), 1,
      anon_sym_DOTdecl,
    ACTIONS(412), 1,
      anon_sym_DOTtype,
    ACTIONS(415), 1,
      sym_ident,
    STATE(297), 1,
      sym_atom,
    STATE(419), 1,
      sym_directive_qualifier,
    STATE(442), 1,
      sym_qualified_name,
    STATE(228), 2,
      sym_monotonic_rule,
      sym_subsumptive_rule,
    ACTIONS(406), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(109), 11,
      sym_preprocessor,
      sym_block_comment,
      sym_line_comment,
      sym_component_decl,
      sym_component_init,
      sym_directive,
      sym_rule,
      sym_fact,
      sym_relation_decl,
      sym_type_decl,
      aux_sym_component_decl_repeat2,
  [3084] = 16,
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
    ACTIONS(418), 1,
      anon_sym_DOToverride,
    ACTIONS(420), 1,
      anon_sym_RBRACE,
    ACTIONS(422), 1,
      anon_sym_DOTtype,
    STATE(297), 1,
      sym_atom,
    STATE(419), 1,
      sym_directive_qualifier,
    STATE(442), 1,
      sym_qualified_name,
    STATE(228), 2,
      sym_monotonic_rule,
      sym_subsumptive_rule,
    ACTIONS(19), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(117), 11,
      sym_preprocessor,
      sym_block_comment,
      sym_line_comment,
      sym_component_decl,
      sym_component_init,
      sym_directive,
      sym_rule,
      sym_fact,
      sym_relation_decl,
      sym_type_decl,
      aux_sym_component_decl_repeat2,
  [3147] = 16,
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
    ACTIONS(418), 1,
      anon_sym_DOToverride,
    ACTIONS(422), 1,
      anon_sym_DOTtype,
    ACTIONS(424), 1,
      anon_sym_RBRACE,
    STATE(297), 1,
      sym_atom,
    STATE(419), 1,
      sym_directive_qualifier,
    STATE(442), 1,
      sym_qualified_name,
    STATE(228), 2,
      sym_monotonic_rule,
      sym_subsumptive_rule,
    ACTIONS(19), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(109), 11,
      sym_preprocessor,
      sym_block_comment,
      sym_line_comment,
      sym_component_decl,
      sym_component_init,
      sym_directive,
      sym_rule,
      sym_fact,
      sym_relation_decl,
      sym_type_decl,
      aux_sym_component_decl_repeat2,
  [3210] = 5,
    ACTIONS(359), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(426), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(428), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(307), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(305), 16,
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
  [3251] = 16,
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
    ACTIONS(418), 1,
      anon_sym_DOToverride,
    ACTIONS(422), 1,
      anon_sym_DOTtype,
    ACTIONS(430), 1,
      anon_sym_RBRACE,
    STATE(297), 1,
      sym_atom,
    STATE(419), 1,
      sym_directive_qualifier,
    STATE(442), 1,
      sym_qualified_name,
    STATE(228), 2,
      sym_monotonic_rule,
      sym_subsumptive_rule,
    ACTIONS(19), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(115), 11,
      sym_preprocessor,
      sym_block_comment,
      sym_line_comment,
      sym_component_decl,
      sym_component_init,
      sym_directive,
      sym_rule,
      sym_fact,
      sym_relation_decl,
      sym_type_decl,
      aux_sym_component_decl_repeat2,
  [3314] = 5,
    ACTIONS(359), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(307), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(305), 16,
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
  [3355] = 16,
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
    ACTIONS(418), 1,
      anon_sym_DOToverride,
    ACTIONS(422), 1,
      anon_sym_DOTtype,
    ACTIONS(432), 1,
      anon_sym_RBRACE,
    STATE(297), 1,
      sym_atom,
    STATE(419), 1,
      sym_directive_qualifier,
    STATE(442), 1,
      sym_qualified_name,
    STATE(228), 2,
      sym_monotonic_rule,
      sym_subsumptive_rule,
    ACTIONS(19), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(109), 11,
      sym_preprocessor,
      sym_block_comment,
      sym_line_comment,
      sym_component_decl,
      sym_component_init,
      sym_directive,
      sym_rule,
      sym_fact,
      sym_relation_decl,
      sym_type_decl,
      aux_sym_component_decl_repeat2,
  [3418] = 16,
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
    ACTIONS(418), 1,
      anon_sym_DOToverride,
    ACTIONS(422), 1,
      anon_sym_DOTtype,
    ACTIONS(434), 1,
      anon_sym_RBRACE,
    STATE(297), 1,
      sym_atom,
    STATE(419), 1,
      sym_directive_qualifier,
    STATE(442), 1,
      sym_qualified_name,
    STATE(228), 2,
      sym_monotonic_rule,
      sym_subsumptive_rule,
    ACTIONS(19), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(111), 11,
      sym_preprocessor,
      sym_block_comment,
      sym_line_comment,
      sym_component_decl,
      sym_component_init,
      sym_directive,
      sym_rule,
      sym_fact,
      sym_relation_decl,
      sym_type_decl,
      aux_sym_component_decl_repeat2,
  [3481] = 16,
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
    ACTIONS(418), 1,
      anon_sym_DOToverride,
    ACTIONS(422), 1,
      anon_sym_DOTtype,
    ACTIONS(436), 1,
      anon_sym_RBRACE,
    STATE(297), 1,
      sym_atom,
    STATE(419), 1,
      sym_directive_qualifier,
    STATE(442), 1,
      sym_qualified_name,
    STATE(228), 2,
      sym_monotonic_rule,
      sym_subsumptive_rule,
    ACTIONS(19), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(109), 11,
      sym_preprocessor,
      sym_block_comment,
      sym_line_comment,
      sym_component_decl,
      sym_component_init,
      sym_directive,
      sym_rule,
      sym_fact,
      sym_relation_decl,
      sym_type_decl,
      aux_sym_component_decl_repeat2,
  [3544] = 3,
    STATE(119), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(126), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(124), 22,
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
  [3580] = 3,
    STATE(49), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(139), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(137), 22,
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
  [3616] = 4,
    ACTIONS(359), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(438), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(307), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(305), 16,
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
  [3653] = 6,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    STATE(361), 1,
      aux_sym_match_repeat1,
    ACTIONS(359), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(307), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(305), 16,
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
  [3693] = 6,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    ACTIONS(442), 1,
      anon_sym_RPAREN,
    STATE(340), 1,
      aux_sym_atom_repeat1,
    ACTIONS(359), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(307), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(305), 16,
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
  [3733] = 6,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    STATE(363), 1,
      aux_sym_match_repeat1,
    ACTIONS(359), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(307), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(305), 16,
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
    ACTIONS(87), 1,
      anon_sym_COMMA,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
    STATE(360), 1,
      aux_sym_match_repeat1,
    ACTIONS(359), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(307), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(305), 16,
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
  [3813] = 4,
    ACTIONS(450), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(355), 3,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
    ACTIONS(452), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(448), 16,
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
  [3849] = 6,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    STATE(346), 1,
      aux_sym_match_repeat1,
    ACTIONS(359), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(307), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(305), 16,
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
    ACTIONS(359), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(456), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(307), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(305), 16,
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
  [3925] = 6,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    ACTIONS(458), 1,
      anon_sym_RBRACK,
    STATE(368), 1,
      aux_sym_match_repeat1,
    ACTIONS(359), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(307), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(305), 16,
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
  [3965] = 4,
    ACTIONS(450), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(438), 3,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
    ACTIONS(452), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(448), 16,
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
  [4001] = 3,
    ACTIONS(163), 5,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(452), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(448), 16,
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
  [4035] = 5,
    ACTIONS(460), 1,
      anon_sym_COMMA,
    ACTIONS(462), 1,
      anon_sym_RPAREN,
    ACTIONS(359), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(307), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(305), 16,
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
  [4072] = 4,
    ACTIONS(359), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(464), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(307), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(305), 16,
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
  [4107] = 4,
    ACTIONS(466), 1,
      anon_sym_COMMA,
    ACTIONS(359), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(307), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(305), 16,
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
  [4141] = 4,
    ACTIONS(468), 1,
      anon_sym_COMMA,
    ACTIONS(359), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(307), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(305), 16,
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
  [4175] = 4,
    ACTIONS(470), 1,
      anon_sym_COLON,
    ACTIONS(359), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(307), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(305), 16,
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
  [4209] = 4,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
    ACTIONS(359), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(307), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(305), 16,
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
  [4243] = 4,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
    ACTIONS(359), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(307), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(305), 16,
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
  [4277] = 1,
    ACTIONS(474), 23,
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
  [4303] = 2,
    ACTIONS(478), 1,
      anon_sym_LT,
    ACTIONS(476), 22,
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
  [4331] = 1,
    ACTIONS(480), 23,
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
  [4357] = 3,
    ACTIONS(482), 1,
      anon_sym_DOT,
    STATE(142), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(124), 20,
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
  [4386] = 3,
    ACTIONS(482), 1,
      anon_sym_DOT,
    STATE(144), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(137), 20,
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
  [4415] = 1,
    ACTIONS(484), 22,
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
  [4440] = 3,
    ACTIONS(486), 1,
      anon_sym_DOT,
    STATE(144), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(130), 20,
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
  [4469] = 1,
    ACTIONS(489), 22,
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
  [4494] = 3,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(491), 19,
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
  [4522] = 3,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    STATE(158), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(495), 19,
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
  [4550] = 3,
    ACTIONS(501), 1,
      anon_sym_PIPE,
    STATE(168), 1,
      aux_sym_adt_repeat1,
    ACTIONS(499), 19,
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
  [4578] = 3,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(503), 19,
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
  [4606] = 3,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(495), 19,
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
  [4634] = 3,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    STATE(158), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(508), 19,
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
  [4662] = 3,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(510), 19,
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
  [4690] = 3,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    STATE(158), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(512), 19,
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
  [4718] = 3,
    ACTIONS(516), 1,
      anon_sym_DOTplan,
    STATE(197), 1,
      sym_query_plan,
    ACTIONS(514), 19,
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
  [4746] = 3,
    ACTIONS(520), 1,
      anon_sym_PIPE,
    STATE(155), 1,
      aux_sym_adt_repeat1,
    ACTIONS(518), 19,
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
  [4774] = 1,
    ACTIONS(523), 21,
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
  [4798] = 3,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(525), 19,
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
  [4826] = 3,
    ACTIONS(529), 1,
      anon_sym_COMMA,
    STATE(158), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(527), 19,
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
  [4854] = 4,
    ACTIONS(482), 1,
      anon_sym_DOT,
    ACTIONS(532), 1,
      anon_sym_LBRACE,
    STATE(142), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(124), 18,
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
  [4884] = 3,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(534), 19,
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
  [4912] = 3,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(508), 19,
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
  [4940] = 3,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(536), 19,
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
  [4968] = 3,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(534), 19,
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
  [4996] = 3,
    ACTIONS(516), 1,
      anon_sym_DOTplan,
    STATE(232), 1,
      sym_query_plan,
    ACTIONS(538), 19,
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
  [5024] = 2,
    ACTIONS(132), 1,
      anon_sym_DOT,
    ACTIONS(130), 20,
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
  [5050] = 3,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(540), 19,
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
  [5078] = 3,
    ACTIONS(516), 1,
      anon_sym_DOTplan,
    STATE(194), 1,
      sym_query_plan,
    ACTIONS(542), 19,
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
  [5106] = 3,
    ACTIONS(501), 1,
      anon_sym_PIPE,
    STATE(155), 1,
      aux_sym_adt_repeat1,
    ACTIONS(544), 19,
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
  [5134] = 1,
    ACTIONS(546), 20,
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
  [5157] = 1,
    ACTIONS(548), 20,
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
  [5180] = 1,
    ACTIONS(550), 20,
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
  [5203] = 1,
    ACTIONS(552), 20,
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
  [5226] = 1,
    ACTIONS(518), 20,
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
  [5249] = 4,
    ACTIONS(554), 1,
      anon_sym_DOT,
    STATE(176), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(126), 2,
      anon_sym_stateful,
      sym_ident,
    ACTIONS(124), 16,
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
  [5278] = 3,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      aux_sym_directive_repeat1,
    ACTIONS(556), 18,
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
  [5305] = 4,
    ACTIONS(554), 1,
      anon_sym_DOT,
    STATE(177), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(139), 2,
      anon_sym_stateful,
      sym_ident,
    ACTIONS(137), 16,
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
  [5334] = 4,
    ACTIONS(561), 1,
      anon_sym_DOT,
    STATE(177), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(132), 2,
      anon_sym_stateful,
      sym_ident,
    ACTIONS(130), 16,
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
  [5363] = 1,
    ACTIONS(564), 20,
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
  [5386] = 1,
    ACTIONS(566), 20,
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
  [5409] = 1,
    ACTIONS(568), 20,
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
  [5432] = 1,
    ACTIONS(570), 20,
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
  [5455] = 1,
    ACTIONS(572), 20,
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
  [5478] = 1,
    ACTIONS(503), 20,
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
  [5501] = 4,
    ACTIONS(576), 1,
      anon_sym_LPAREN,
    ACTIONS(578), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym_directive_repeat1,
    ACTIONS(574), 17,
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
  [5530] = 4,
    ACTIONS(578), 1,
      anon_sym_COMMA,
    ACTIONS(582), 1,
      anon_sym_LPAREN,
    STATE(175), 1,
      aux_sym_directive_repeat1,
    ACTIONS(580), 17,
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
  [5559] = 1,
    ACTIONS(584), 19,
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
  [5581] = 3,
    ACTIONS(588), 1,
      anon_sym_EQ,
    ACTIONS(590), 1,
      anon_sym_LT_COLON,
    ACTIONS(586), 17,
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
  [5607] = 1,
    ACTIONS(592), 19,
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
  [5629] = 1,
    ACTIONS(317), 19,
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
  [5651] = 1,
    ACTIONS(321), 19,
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
  [5673] = 1,
    ACTIONS(594), 19,
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
  [5695] = 1,
    ACTIONS(596), 19,
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
  [5717] = 1,
    ACTIONS(598), 19,
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
  [5739] = 1,
    ACTIONS(600), 19,
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
  [5761] = 1,
    ACTIONS(602), 19,
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
  [5783] = 3,
    ACTIONS(604), 1,
      anon_sym_PIPE,
    STATE(196), 1,
      aux_sym_type_union_repeat1,
    ACTIONS(568), 17,
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
  [5809] = 1,
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
  [5831] = 1,
    ACTIONS(609), 19,
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
  [5853] = 1,
    ACTIONS(611), 19,
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
  [5875] = 1,
    ACTIONS(613), 19,
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
  [5897] = 1,
    ACTIONS(349), 19,
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
  [5919] = 1,
    ACTIONS(615), 19,
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
  [5941] = 1,
    ACTIONS(345), 19,
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
  [5963] = 1,
    ACTIONS(361), 19,
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
  [5985] = 1,
    ACTIONS(341), 19,
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
  [6007] = 1,
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
  [6029] = 1,
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
  [6051] = 1,
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
  [6073] = 1,
    ACTIONS(623), 19,
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
  [6095] = 1,
    ACTIONS(625), 19,
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
  [6117] = 1,
    ACTIONS(627), 19,
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
  [6139] = 1,
    ACTIONS(629), 19,
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
  [6161] = 1,
    ACTIONS(631), 19,
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
  [6183] = 1,
    ACTIONS(325), 19,
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
  [6205] = 1,
    ACTIONS(633), 19,
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
  [6227] = 1,
    ACTIONS(309), 19,
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
  [6249] = 1,
    ACTIONS(635), 19,
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
  [6271] = 1,
    ACTIONS(637), 19,
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
  [6293] = 1,
    ACTIONS(639), 19,
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
  [6315] = 1,
    ACTIONS(641), 19,
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
  [6337] = 1,
    ACTIONS(333), 19,
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
  [6359] = 1,
    ACTIONS(643), 19,
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
  [6381] = 3,
    ACTIONS(645), 1,
      anon_sym_DOT,
    STATE(233), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(124), 17,
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
  [6407] = 1,
    ACTIONS(647), 19,
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
  [6429] = 3,
    ACTIONS(651), 1,
      anon_sym_PIPE,
    STATE(226), 1,
      aux_sym_type_union_repeat1,
    ACTIONS(649), 17,
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
  [6455] = 3,
    ACTIONS(651), 1,
      anon_sym_PIPE,
    STATE(196), 1,
      aux_sym_type_union_repeat1,
    ACTIONS(653), 17,
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
  [6481] = 2,
    ACTIONS(132), 3,
      anon_sym_stateful,
      anon_sym_DOT,
      sym_ident,
    ACTIONS(130), 16,
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
  [6505] = 1,
    ACTIONS(655), 19,
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
  [6527] = 1,
    ACTIONS(657), 19,
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
  [6549] = 3,
    ACTIONS(659), 1,
      anon_sym_DOT,
    STATE(230), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(130), 17,
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
  [6575] = 1,
    ACTIONS(662), 19,
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
  [6597] = 1,
    ACTIONS(664), 19,
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
  [6619] = 3,
    ACTIONS(645), 1,
      anon_sym_DOT,
    STATE(230), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(137), 17,
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
  [6645] = 3,
    ACTIONS(668), 1,
      anon_sym_stateful,
    ACTIONS(670), 1,
      sym_ident,
    ACTIONS(666), 16,
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
  [6670] = 3,
    ACTIONS(674), 1,
      anon_sym_stateful,
    ACTIONS(676), 1,
      sym_ident,
    ACTIONS(672), 16,
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
  [6695] = 3,
    ACTIONS(680), 1,
      anon_sym_stateful,
    ACTIONS(682), 1,
      sym_ident,
    ACTIONS(678), 16,
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
  [6720] = 3,
    ACTIONS(686), 1,
      anon_sym_stateful,
    ACTIONS(688), 1,
      sym_ident,
    ACTIONS(684), 16,
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
  [6745] = 4,
    ACTIONS(532), 1,
      anon_sym_LBRACE,
    ACTIONS(645), 1,
      anon_sym_DOT,
    STATE(233), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(124), 15,
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
  [6772] = 2,
    ACTIONS(692), 1,
      sym_string,
    ACTIONS(690), 17,
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
  [6795] = 2,
    ACTIONS(132), 1,
      anon_sym_DOT,
    ACTIONS(130), 17,
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
  [6818] = 2,
    ACTIONS(694), 2,
      anon_sym_stateful,
      sym_ident,
    ACTIONS(480), 16,
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
  [6841] = 3,
    ACTIONS(698), 1,
      anon_sym_stateful,
    ACTIONS(700), 1,
      sym_ident,
    ACTIONS(696), 16,
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
  [6866] = 2,
    ACTIONS(702), 2,
      anon_sym_stateful,
      sym_ident,
    ACTIONS(474), 16,
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
  [6889] = 3,
    ACTIONS(706), 1,
      anon_sym_stateful,
    ACTIONS(708), 1,
      sym_ident,
    ACTIONS(704), 16,
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
  [6914] = 1,
    ACTIONS(710), 17,
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
  [6934] = 1,
    ACTIONS(712), 17,
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
  [6954] = 4,
    ACTIONS(582), 1,
      anon_sym_LPAREN,
    ACTIONS(714), 1,
      anon_sym_COMMA,
    STATE(250), 1,
      aux_sym_directive_repeat1,
    ACTIONS(580), 14,
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
  [6980] = 1,
    ACTIONS(716), 17,
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
    ACTIONS(718), 17,
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
  [7020] = 3,
    ACTIONS(720), 1,
      anon_sym_COMMA,
    STATE(250), 1,
      aux_sym_directive_repeat1,
    ACTIONS(556), 15,
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
  [7044] = 1,
    ACTIONS(723), 17,
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
  [7064] = 1,
    ACTIONS(725), 17,
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
  [7084] = 4,
    ACTIONS(576), 1,
      anon_sym_LPAREN,
    ACTIONS(714), 1,
      anon_sym_COMMA,
    STATE(247), 1,
      aux_sym_directive_repeat1,
    ACTIONS(574), 14,
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
  [7110] = 1,
    ACTIONS(727), 17,
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
  [7130] = 1,
    ACTIONS(729), 17,
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
  [7150] = 3,
    ACTIONS(731), 1,
      anon_sym_PIPE,
    STATE(256), 1,
      aux_sym_type_union_repeat1,
    ACTIONS(568), 14,
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
  [7173] = 3,
    ACTIONS(734), 1,
      anon_sym_EQ,
    ACTIONS(736), 1,
      anon_sym_LT_COLON,
    ACTIONS(586), 14,
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
  [7196] = 3,
    ACTIONS(738), 1,
      anon_sym_PIPE,
    STATE(256), 1,
      aux_sym_type_union_repeat1,
    ACTIONS(653), 14,
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
  [7219] = 3,
    ACTIONS(738), 1,
      anon_sym_PIPE,
    STATE(258), 1,
      aux_sym_type_union_repeat1,
    ACTIONS(649), 14,
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
  [7242] = 1,
    ACTIONS(401), 14,
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
  [7259] = 8,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      sym_unsigned,
    ACTIONS(742), 1,
      aux_sym_float_token1,
    STATE(75), 1,
      sym_decimal,
    ACTIONS(49), 2,
      sym_hex,
      sym_binary,
    ACTIONS(740), 2,
      sym_string,
      sym_ident,
    STATE(82), 2,
      sym_integer,
      sym_float,
    STATE(359), 2,
      sym__directive_value,
      sym_number,
  [7288] = 8,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      sym_unsigned,
    ACTIONS(742), 1,
      aux_sym_float_token1,
    STATE(75), 1,
      sym_decimal,
    ACTIONS(49), 2,
      sym_hex,
      sym_binary,
    ACTIONS(744), 2,
      sym_string,
      sym_ident,
    STATE(82), 2,
      sym_integer,
      sym_float,
    STATE(417), 2,
      sym__directive_value,
      sym_number,
  [7317] = 8,
    ACTIONS(746), 1,
      anon_sym_COMMA,
    ACTIONS(748), 1,
      anon_sym_RPAREN,
    ACTIONS(752), 1,
      sym_ident,
    STATE(384), 1,
      sym_type_name,
    STATE(387), 1,
      sym_attribute,
    STATE(388), 1,
      aux_sym_functor_decl_repeat1,
    STATE(138), 2,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(750), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7346] = 8,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      sym_unsigned,
    ACTIONS(742), 1,
      aux_sym_float_token1,
    STATE(75), 1,
      sym_decimal,
    ACTIONS(49), 2,
      sym_hex,
      sym_binary,
    ACTIONS(754), 2,
      sym_string,
      sym_ident,
    STATE(82), 2,
      sym_integer,
      sym_float,
    STATE(369), 2,
      sym__directive_value,
      sym_number,
  [7375] = 6,
    ACTIONS(756), 1,
      anon_sym_LBRACK,
    ACTIONS(758), 1,
      sym_ident,
    STATE(148), 1,
      sym_adt_branch,
    STATE(225), 1,
      sym_type_name,
    STATE(138), 2,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(750), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7398] = 6,
    ACTIONS(756), 1,
      anon_sym_LBRACK,
    ACTIONS(760), 1,
      sym_ident,
    STATE(148), 1,
      sym_adt_branch,
    STATE(259), 1,
      sym_type_name,
    STATE(138), 2,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(750), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7421] = 5,
    ACTIONS(752), 1,
      sym_ident,
    STATE(409), 1,
      sym_type_name,
    STATE(410), 1,
      sym_attribute,
    STATE(138), 2,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(750), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7441] = 4,
    ACTIONS(762), 1,
      sym_ident,
    STATE(224), 1,
      sym_type_name,
    STATE(138), 2,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(750), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7458] = 4,
    ACTIONS(764), 1,
      sym_ident,
    STATE(224), 1,
      sym_type_name,
    STATE(138), 2,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(750), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7475] = 4,
    ACTIONS(768), 1,
      sym_ident,
    STATE(244), 1,
      sym_type_name,
    STATE(243), 2,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(766), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7492] = 4,
    ACTIONS(768), 1,
      sym_ident,
    STATE(236), 1,
      sym_type_name,
    STATE(243), 2,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(766), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7509] = 4,
    ACTIONS(768), 1,
      sym_ident,
    STATE(235), 1,
      sym_type_name,
    STATE(243), 2,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(766), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7526] = 4,
    ACTIONS(768), 1,
      sym_ident,
    STATE(237), 1,
      sym_type_name,
    STATE(243), 2,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(766), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7543] = 4,
    ACTIONS(768), 1,
      sym_ident,
    STATE(242), 1,
      sym_type_name,
    STATE(243), 2,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(766), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7560] = 4,
    ACTIONS(762), 1,
      sym_ident,
    STATE(180), 1,
      sym_type_name,
    STATE(138), 2,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(750), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7577] = 4,
    ACTIONS(762), 1,
      sym_ident,
    STATE(245), 1,
      sym_type_name,
    STATE(138), 2,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(750), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7594] = 4,
    ACTIONS(770), 1,
      sym_ident,
    STATE(447), 1,
      sym_type_name,
    STATE(138), 2,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(750), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7611] = 4,
    ACTIONS(768), 1,
      sym_ident,
    STATE(234), 1,
      sym_type_name,
    STATE(243), 2,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(766), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7628] = 4,
    ACTIONS(770), 1,
      sym_ident,
    STATE(332), 1,
      sym_type_name,
    STATE(138), 2,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(750), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7645] = 4,
    ACTIONS(764), 1,
      sym_ident,
    STATE(180), 1,
      sym_type_name,
    STATE(138), 2,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(750), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7662] = 2,
    ACTIONS(772), 1,
      sym_ident,
    STATE(219), 6,
      sym_legacy_bare_type_decl,
      sym_subtype,
      sym_type_synonym,
      sym_type_union,
      sym_type_record,
      sym_adt,
  [7674] = 2,
    ACTIONS(774), 1,
      sym_ident,
    STATE(219), 6,
      sym_legacy_bare_type_decl,
      sym_subtype,
      sym_type_synonym,
      sym_type_union,
      sym_type_record,
      sym_adt,
  [7686] = 3,
    ACTIONS(776), 1,
      anon_sym_COMMA,
    STATE(283), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(779), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [7698] = 5,
    ACTIONS(781), 1,
      anon_sym_COMMA,
    ACTIONS(783), 1,
      anon_sym_RBRACK,
    ACTIONS(785), 1,
      sym_ident,
    STATE(354), 1,
      sym_attribute,
    STATE(356), 1,
      aux_sym_relation_decl_repeat2,
  [7714] = 3,
    ACTIONS(787), 1,
      anon_sym_COMMA,
    STATE(292), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(789), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [7726] = 5,
    ACTIONS(781), 1,
      anon_sym_COMMA,
    ACTIONS(785), 1,
      sym_ident,
    ACTIONS(791), 1,
      anon_sym_RBRACE,
    STATE(375), 1,
      aux_sym_relation_decl_repeat2,
    STATE(376), 1,
      sym_attribute,
  [7742] = 1,
    ACTIONS(793), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7750] = 3,
    ACTIONS(787), 1,
      anon_sym_COMMA,
    STATE(299), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(795), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [7762] = 1,
    ACTIONS(797), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7770] = 3,
    ACTIONS(799), 1,
      anon_sym_COMMA,
    STATE(290), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(802), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [7782] = 4,
    ACTIONS(128), 1,
      anon_sym_DOT,
    ACTIONS(804), 1,
      anon_sym_COLON,
    STATE(50), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(124), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7796] = 3,
    ACTIONS(787), 1,
      anon_sym_COMMA,
    STATE(290), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(795), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [7808] = 3,
    ACTIONS(787), 1,
      anon_sym_COMMA,
    STATE(290), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(789), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [7820] = 3,
    ACTIONS(787), 1,
      anon_sym_COMMA,
    STATE(293), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(806), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [7832] = 1,
    ACTIONS(808), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7840] = 1,
    ACTIONS(810), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7848] = 5,
    ACTIONS(812), 1,
      anon_sym_COMMA,
    ACTIONS(814), 1,
      anon_sym_COLON_DASH,
    ACTIONS(816), 1,
      anon_sym_DOT,
    ACTIONS(818), 1,
      anon_sym_LT_EQ,
    STATE(404), 1,
      aux_sym_monotonic_rule_repeat1,
  [7864] = 1,
    ACTIONS(820), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7872] = 3,
    ACTIONS(787), 1,
      anon_sym_COMMA,
    STATE(290), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(822), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [7884] = 5,
    ACTIONS(781), 1,
      anon_sym_COMMA,
    ACTIONS(785), 1,
      sym_ident,
    ACTIONS(824), 1,
      anon_sym_RPAREN,
    STATE(381), 1,
      aux_sym_relation_decl_repeat2,
    STATE(385), 1,
      sym_attribute,
  [7900] = 3,
    ACTIONS(787), 1,
      anon_sym_COMMA,
    STATE(305), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(822), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [7912] = 1,
    ACTIONS(826), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7920] = 5,
    ACTIONS(781), 1,
      anon_sym_COMMA,
    ACTIONS(785), 1,
      sym_ident,
    ACTIONS(828), 1,
      anon_sym_RPAREN,
    STATE(371), 1,
      aux_sym_relation_decl_repeat2,
    STATE(391), 1,
      sym_attribute,
  [7936] = 1,
    ACTIONS(830), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7944] = 3,
    ACTIONS(787), 1,
      anon_sym_COMMA,
    STATE(290), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(832), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [7956] = 1,
    ACTIONS(834), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7964] = 5,
    ACTIONS(781), 1,
      anon_sym_COMMA,
    ACTIONS(785), 1,
      sym_ident,
    ACTIONS(836), 1,
      anon_sym_RPAREN,
    STATE(352), 1,
      sym_attribute,
    STATE(353), 1,
      aux_sym_relation_decl_repeat2,
  [7980] = 1,
    ACTIONS(838), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7988] = 1,
    ACTIONS(802), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7996] = 1,
    ACTIONS(840), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8004] = 1,
    ACTIONS(842), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8012] = 3,
    ACTIONS(844), 1,
      anon_sym_COMMA,
    STATE(317), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(795), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8023] = 3,
    ACTIONS(848), 1,
      anon_sym_SEMI,
    STATE(313), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(846), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [8034] = 3,
    ACTIONS(844), 1,
      anon_sym_COMMA,
    STATE(317), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(822), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8045] = 3,
    ACTIONS(844), 1,
      anon_sym_COMMA,
    STATE(328), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(806), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8056] = 4,
    ACTIONS(851), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(853), 1,
      anon_sym_COMMA,
    ACTIONS(855), 1,
      anon_sym_RPAREN,
    STATE(383), 1,
      aux_sym_query_plan_repeat1,
  [8069] = 3,
    ACTIONS(857), 1,
      anon_sym_COMMA,
    STATE(317), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(802), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8080] = 3,
    ACTIONS(862), 1,
      anon_sym_COMMA,
    STATE(318), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(860), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [8091] = 3,
    ACTIONS(844), 1,
      anon_sym_COMMA,
    STATE(320), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(822), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8102] = 3,
    ACTIONS(844), 1,
      anon_sym_COMMA,
    STATE(317), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(832), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8113] = 1,
    ACTIONS(846), 4,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8120] = 4,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    ACTIONS(867), 1,
      anon_sym_RPAREN,
    ACTIONS(869), 1,
      sym_ident,
    STATE(362), 1,
      aux_sym_directive_repeat2,
  [8133] = 4,
    ACTIONS(27), 1,
      sym_ident,
    ACTIONS(871), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_atom,
    STATE(442), 1,
      sym_qualified_name,
  [8146] = 3,
    ACTIONS(873), 1,
      anon_sym_COMMA,
    STATE(324), 1,
      aux_sym_match_repeat1,
    ACTIONS(456), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [8157] = 4,
    ACTIONS(876), 1,
      anon_sym_LPAREN,
    ACTIONS(878), 1,
      anon_sym_COMMA,
    ACTIONS(880), 1,
      sym_ident,
    STATE(386), 1,
      aux_sym_relation_decl_repeat1,
  [8170] = 4,
    ACTIONS(853), 1,
      anon_sym_COMMA,
    ACTIONS(882), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(884), 1,
      anon_sym_RPAREN,
    STATE(403), 1,
      aux_sym_query_plan_repeat1,
  [8183] = 3,
    ACTIONS(844), 1,
      anon_sym_COMMA,
    STATE(312), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(789), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8194] = 3,
    ACTIONS(844), 1,
      anon_sym_COMMA,
    STATE(317), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(789), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8205] = 1,
    ACTIONS(779), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [8212] = 3,
    ACTIONS(888), 1,
      anon_sym_SEMI,
    STATE(334), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(886), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [8223] = 4,
    ACTIONS(27), 1,
      sym_ident,
    ACTIONS(890), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      sym_atom,
    STATE(442), 1,
      sym_qualified_name,
  [8236] = 1,
    ACTIONS(892), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [8243] = 4,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    ACTIONS(894), 1,
      anon_sym_RPAREN,
    ACTIONS(896), 1,
      sym_ident,
    STATE(366), 1,
      aux_sym_directive_repeat2,
  [8256] = 3,
    ACTIONS(888), 1,
      anon_sym_SEMI,
    STATE(313), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(898), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [8267] = 3,
    ACTIONS(844), 1,
      anon_sym_COMMA,
    STATE(314), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(795), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8278] = 3,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    STATE(324), 1,
      aux_sym_match_repeat1,
  [8288] = 3,
    ACTIONS(853), 1,
      anon_sym_COMMA,
    ACTIONS(900), 1,
      anon_sym_RPAREN,
    STATE(402), 1,
      aux_sym_query_plan_repeat1,
  [8298] = 3,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    ACTIONS(458), 1,
      anon_sym_RBRACK,
    STATE(324), 1,
      aux_sym_match_repeat1,
  [8308] = 3,
    ACTIONS(898), 1,
      anon_sym_DOT,
    ACTIONS(902), 1,
      anon_sym_SEMI,
    STATE(370), 1,
      aux_sym_disjunction_repeat1,
  [8318] = 3,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    ACTIONS(904), 1,
      anon_sym_RPAREN,
    STATE(341), 1,
      aux_sym_atom_repeat1,
  [8328] = 3,
    ACTIONS(906), 1,
      anon_sym_COMMA,
    ACTIONS(909), 1,
      anon_sym_RPAREN,
    STATE(341), 1,
      aux_sym_atom_repeat1,
  [8338] = 3,
    ACTIONS(746), 1,
      anon_sym_COMMA,
    ACTIONS(911), 1,
      anon_sym_RPAREN,
    STATE(345), 1,
      aux_sym_functor_decl_repeat1,
  [8348] = 3,
    ACTIONS(878), 1,
      anon_sym_COMMA,
    ACTIONS(913), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      aux_sym_relation_decl_repeat1,
  [8358] = 3,
    ACTIONS(746), 1,
      anon_sym_COMMA,
    ACTIONS(915), 1,
      anon_sym_RPAREN,
    STATE(345), 1,
      aux_sym_functor_decl_repeat1,
  [8368] = 3,
    ACTIONS(917), 1,
      anon_sym_COMMA,
    ACTIONS(920), 1,
      anon_sym_RPAREN,
    STATE(345), 1,
      aux_sym_functor_decl_repeat1,
  [8378] = 3,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    ACTIONS(922), 1,
      anon_sym_RPAREN,
    STATE(324), 1,
      aux_sym_match_repeat1,
  [8388] = 3,
    ACTIONS(886), 1,
      anon_sym_DOT,
    ACTIONS(902), 1,
      anon_sym_SEMI,
    STATE(339), 1,
      aux_sym_disjunction_repeat1,
  [8398] = 3,
    ACTIONS(924), 1,
      anon_sym_COMMA,
    ACTIONS(926), 1,
      anon_sym_GT,
    STATE(400), 1,
      aux_sym_component_type_repeat1,
  [8408] = 3,
    ACTIONS(928), 1,
      anon_sym_COMMA,
    ACTIONS(930), 1,
      anon_sym_LBRACE,
    STATE(396), 1,
      aux_sym_component_decl_repeat1,
  [8418] = 3,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    STATE(324), 1,
      aux_sym_match_repeat1,
  [8428] = 3,
    ACTIONS(781), 1,
      anon_sym_COMMA,
    ACTIONS(932), 1,
      anon_sym_RPAREN,
    STATE(283), 1,
      aux_sym_relation_decl_repeat2,
  [8438] = 3,
    ACTIONS(781), 1,
      anon_sym_COMMA,
    ACTIONS(934), 1,
      anon_sym_RPAREN,
    STATE(379), 1,
      aux_sym_relation_decl_repeat2,
  [8448] = 3,
    ACTIONS(781), 1,
      anon_sym_COMMA,
    ACTIONS(934), 1,
      anon_sym_RPAREN,
    STATE(283), 1,
      aux_sym_relation_decl_repeat2,
  [8458] = 3,
    ACTIONS(781), 1,
      anon_sym_COMMA,
    ACTIONS(936), 1,
      anon_sym_RBRACK,
    STATE(378), 1,
      aux_sym_relation_decl_repeat2,
  [8468] = 3,
    ACTIONS(781), 1,
      anon_sym_COMMA,
    ACTIONS(938), 1,
      anon_sym_RBRACE,
    STATE(283), 1,
      aux_sym_relation_decl_repeat2,
  [8478] = 3,
    ACTIONS(781), 1,
      anon_sym_COMMA,
    ACTIONS(936), 1,
      anon_sym_RBRACK,
    STATE(283), 1,
      aux_sym_relation_decl_repeat2,
  [8488] = 3,
    ACTIONS(940), 1,
      anon_sym_COMMA,
    ACTIONS(943), 1,
      anon_sym_RPAREN,
    STATE(357), 1,
      aux_sym_directive_repeat2,
  [8498] = 3,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    ACTIONS(945), 1,
      anon_sym_RPAREN,
    STATE(357), 1,
      aux_sym_directive_repeat2,
  [8508] = 3,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    ACTIONS(947), 1,
      anon_sym_RPAREN,
    STATE(389), 1,
      aux_sym_directive_repeat2,
  [8518] = 3,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    ACTIONS(949), 1,
      anon_sym_RPAREN,
    STATE(324), 1,
      aux_sym_match_repeat1,
  [8528] = 3,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    ACTIONS(951), 1,
      anon_sym_RPAREN,
    STATE(324), 1,
      aux_sym_match_repeat1,
  [8538] = 3,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    ACTIONS(953), 1,
      anon_sym_RPAREN,
    STATE(357), 1,
      aux_sym_directive_repeat2,
  [8548] = 3,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    ACTIONS(955), 1,
      anon_sym_RPAREN,
    STATE(324), 1,
      aux_sym_match_repeat1,
  [8558] = 3,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
    STATE(324), 1,
      aux_sym_match_repeat1,
  [8568] = 3,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    STATE(324), 1,
      aux_sym_match_repeat1,
  [8578] = 3,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    ACTIONS(957), 1,
      anon_sym_RPAREN,
    STATE(357), 1,
      aux_sym_directive_repeat2,
  [8588] = 3,
    ACTIONS(878), 1,
      anon_sym_COMMA,
    ACTIONS(959), 1,
      anon_sym_LPAREN,
    STATE(318), 1,
      aux_sym_relation_decl_repeat1,
  [8598] = 3,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    ACTIONS(961), 1,
      anon_sym_RBRACK,
    STATE(324), 1,
      aux_sym_match_repeat1,
  [8608] = 3,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    ACTIONS(963), 1,
      anon_sym_RPAREN,
    STATE(358), 1,
      aux_sym_directive_repeat2,
  [8618] = 3,
    ACTIONS(846), 1,
      anon_sym_DOT,
    ACTIONS(965), 1,
      anon_sym_SEMI,
    STATE(370), 1,
      aux_sym_disjunction_repeat1,
  [8628] = 3,
    ACTIONS(781), 1,
      anon_sym_COMMA,
    ACTIONS(968), 1,
      anon_sym_RPAREN,
    STATE(283), 1,
      aux_sym_relation_decl_repeat2,
  [8638] = 3,
    ACTIONS(853), 1,
      anon_sym_COMMA,
    ACTIONS(970), 1,
      anon_sym_RPAREN,
    STATE(393), 1,
      aux_sym_query_plan_repeat1,
  [8648] = 3,
    ACTIONS(972), 1,
      anon_sym_COMMA,
    ACTIONS(975), 1,
      anon_sym_COLON_DASH,
    STATE(373), 1,
      aux_sym_monotonic_rule_repeat1,
  [8658] = 3,
    ACTIONS(878), 1,
      anon_sym_COMMA,
    ACTIONS(977), 1,
      anon_sym_LPAREN,
    STATE(367), 1,
      aux_sym_relation_decl_repeat1,
  [8668] = 3,
    ACTIONS(781), 1,
      anon_sym_COMMA,
    ACTIONS(979), 1,
      anon_sym_RBRACE,
    STATE(283), 1,
      aux_sym_relation_decl_repeat2,
  [8678] = 3,
    ACTIONS(781), 1,
      anon_sym_COMMA,
    ACTIONS(979), 1,
      anon_sym_RBRACE,
    STATE(355), 1,
      aux_sym_relation_decl_repeat2,
  [8688] = 3,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    ACTIONS(981), 1,
      anon_sym_RPAREN,
    STATE(341), 1,
      aux_sym_atom_repeat1,
  [8698] = 3,
    ACTIONS(781), 1,
      anon_sym_COMMA,
    ACTIONS(983), 1,
      anon_sym_RBRACK,
    STATE(283), 1,
      aux_sym_relation_decl_repeat2,
  [8708] = 3,
    ACTIONS(781), 1,
      anon_sym_COMMA,
    ACTIONS(985), 1,
      anon_sym_RPAREN,
    STATE(283), 1,
      aux_sym_relation_decl_repeat2,
  [8718] = 1,
    ACTIONS(860), 3,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8724] = 3,
    ACTIONS(781), 1,
      anon_sym_COMMA,
    ACTIONS(987), 1,
      anon_sym_RPAREN,
    STATE(283), 1,
      aux_sym_relation_decl_repeat2,
  [8734] = 3,
    ACTIONS(878), 1,
      anon_sym_COMMA,
    ACTIONS(989), 1,
      anon_sym_RPAREN,
    STATE(401), 1,
      aux_sym_relation_decl_repeat1,
  [8744] = 3,
    ACTIONS(853), 1,
      anon_sym_COMMA,
    ACTIONS(991), 1,
      anon_sym_RPAREN,
    STATE(393), 1,
      aux_sym_query_plan_repeat1,
  [8754] = 3,
    ACTIONS(746), 1,
      anon_sym_COMMA,
    ACTIONS(993), 1,
      anon_sym_RPAREN,
    STATE(342), 1,
      aux_sym_functor_decl_repeat1,
  [8764] = 3,
    ACTIONS(781), 1,
      anon_sym_COMMA,
    ACTIONS(987), 1,
      anon_sym_RPAREN,
    STATE(392), 1,
      aux_sym_relation_decl_repeat2,
  [8774] = 3,
    ACTIONS(878), 1,
      anon_sym_COMMA,
    ACTIONS(977), 1,
      anon_sym_LPAREN,
    STATE(318), 1,
      aux_sym_relation_decl_repeat1,
  [8784] = 3,
    ACTIONS(746), 1,
      anon_sym_COMMA,
    ACTIONS(995), 1,
      anon_sym_RPAREN,
    STATE(344), 1,
      aux_sym_functor_decl_repeat1,
  [8794] = 3,
    ACTIONS(746), 1,
      anon_sym_COMMA,
    ACTIONS(997), 1,
      anon_sym_RPAREN,
    STATE(345), 1,
      aux_sym_functor_decl_repeat1,
  [8804] = 3,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    ACTIONS(999), 1,
      anon_sym_RPAREN,
    STATE(357), 1,
      aux_sym_directive_repeat2,
  [8814] = 3,
    ACTIONS(853), 1,
      anon_sym_COMMA,
    ACTIONS(991), 1,
      anon_sym_RPAREN,
    STATE(372), 1,
      aux_sym_query_plan_repeat1,
  [8824] = 3,
    ACTIONS(781), 1,
      anon_sym_COMMA,
    ACTIONS(968), 1,
      anon_sym_RPAREN,
    STATE(351), 1,
      aux_sym_relation_decl_repeat2,
  [8834] = 3,
    ACTIONS(781), 1,
      anon_sym_COMMA,
    ACTIONS(1001), 1,
      anon_sym_RPAREN,
    STATE(283), 1,
      aux_sym_relation_decl_repeat2,
  [8844] = 3,
    ACTIONS(1003), 1,
      anon_sym_COMMA,
    ACTIONS(1006), 1,
      anon_sym_RPAREN,
    STATE(393), 1,
      aux_sym_query_plan_repeat1,
  [8854] = 3,
    ACTIONS(27), 1,
      sym_ident,
    STATE(411), 1,
      sym_atom,
    STATE(442), 1,
      sym_qualified_name,
  [8864] = 3,
    ACTIONS(878), 1,
      anon_sym_COMMA,
    ACTIONS(1008), 1,
      anon_sym_RPAREN,
    STATE(343), 1,
      aux_sym_relation_decl_repeat1,
  [8874] = 3,
    ACTIONS(1010), 1,
      anon_sym_COMMA,
    ACTIONS(1013), 1,
      anon_sym_LBRACE,
    STATE(396), 1,
      aux_sym_component_decl_repeat1,
  [8884] = 3,
    ACTIONS(924), 1,
      anon_sym_COMMA,
    ACTIONS(1015), 1,
      anon_sym_GT,
    STATE(348), 1,
      aux_sym_component_type_repeat1,
  [8894] = 3,
    ACTIONS(928), 1,
      anon_sym_COMMA,
    ACTIONS(1017), 1,
      anon_sym_LBRACE,
    STATE(349), 1,
      aux_sym_component_decl_repeat1,
  [8904] = 3,
    ACTIONS(27), 1,
      sym_ident,
    STATE(432), 1,
      sym_atom,
    STATE(442), 1,
      sym_qualified_name,
  [8914] = 3,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1022), 1,
      anon_sym_GT,
    STATE(400), 1,
      aux_sym_component_type_repeat1,
  [8924] = 3,
    ACTIONS(878), 1,
      anon_sym_COMMA,
    ACTIONS(1024), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      aux_sym_relation_decl_repeat1,
  [8934] = 3,
    ACTIONS(853), 1,
      anon_sym_COMMA,
    ACTIONS(1026), 1,
      anon_sym_RPAREN,
    STATE(393), 1,
      aux_sym_query_plan_repeat1,
  [8944] = 3,
    ACTIONS(853), 1,
      anon_sym_COMMA,
    ACTIONS(900), 1,
      anon_sym_RPAREN,
    STATE(393), 1,
      aux_sym_query_plan_repeat1,
  [8954] = 3,
    ACTIONS(812), 1,
      anon_sym_COMMA,
    ACTIONS(1028), 1,
      anon_sym_COLON_DASH,
    STATE(373), 1,
      aux_sym_monotonic_rule_repeat1,
  [8964] = 1,
    ACTIONS(1006), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8969] = 1,
    ACTIONS(1030), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [8974] = 2,
    ACTIONS(27), 1,
      sym_ident,
    STATE(53), 1,
      sym_qualified_name,
  [8981] = 1,
    ACTIONS(1032), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [8986] = 1,
    ACTIONS(1034), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8991] = 1,
    ACTIONS(1036), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8996] = 1,
    ACTIONS(975), 2,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
  [9001] = 2,
    ACTIONS(1038), 1,
      sym_ident,
    STATE(406), 1,
      sym_component_type,
  [9008] = 2,
    ACTIONS(1040), 1,
      sym_ident,
    STATE(156), 1,
      sym_qualified_name,
  [9015] = 2,
    ACTIONS(1038), 1,
      sym_ident,
    STATE(422), 1,
      sym_component_type,
  [9022] = 2,
    ACTIONS(1042), 1,
      sym_ident,
    STATE(156), 1,
      sym_qualified_name,
  [9029] = 2,
    ACTIONS(1044), 1,
      anon_sym_LPAREN,
    ACTIONS(1046), 1,
      sym_ident,
  [9036] = 1,
    ACTIONS(1048), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9041] = 2,
    ACTIONS(1050), 1,
      anon_sym_LPAREN,
    ACTIONS(1052), 1,
      sym_ident,
  [9048] = 2,
    ACTIONS(1042), 1,
      sym_ident,
    STATE(253), 1,
      sym_qualified_name,
  [9055] = 2,
    ACTIONS(1054), 1,
      sym_ident,
    STATE(173), 1,
      sym_adt_branch,
  [9062] = 2,
    ACTIONS(1040), 1,
      sym_ident,
    STATE(184), 1,
      sym_qualified_name,
  [9069] = 2,
    ACTIONS(1056), 1,
      anon_sym_COLON,
    ACTIONS(1058), 1,
      anon_sym_LBRACE,
  [9076] = 2,
    ACTIONS(1038), 1,
      sym_ident,
    STATE(398), 1,
      sym_component_type,
  [9083] = 2,
    ACTIONS(1038), 1,
      sym_ident,
    STATE(215), 1,
      sym_component_type,
  [9090] = 2,
    ACTIONS(785), 1,
      sym_ident,
    STATE(329), 1,
      sym_attribute,
  [9097] = 2,
    ACTIONS(1060), 1,
      sym_ident,
    STATE(53), 1,
      sym_qualified_name,
  [9104] = 1,
    ACTIONS(1062), 1,
      anon_sym_COLON,
  [9108] = 1,
    ACTIONS(1064), 1,
      anon_sym_RBRACE,
  [9112] = 1,
    ACTIONS(804), 1,
      anon_sym_COLON,
  [9116] = 1,
    ACTIONS(532), 1,
      anon_sym_LBRACE,
  [9120] = 1,
    ACTIONS(1066), 1,
      sym_ident,
  [9124] = 1,
    ACTIONS(1068), 1,
      anon_sym_COLON_DASH,
  [9128] = 1,
    ACTIONS(1070), 1,
      anon_sym_LPAREN,
  [9132] = 1,
    ACTIONS(1072), 1,
      aux_sym_preprocessor_token1,
  [9136] = 1,
    ACTIONS(1074), 1,
      anon_sym_EQ,
  [9140] = 1,
    ACTIONS(1076), 1,
      anon_sym_LPAREN,
  [9144] = 1,
    ACTIONS(1078), 1,
      sym_ident,
  [9148] = 1,
    ACTIONS(1080), 1,
      anon_sym_RPAREN,
  [9152] = 1,
    ACTIONS(1082), 1,
      anon_sym_LF,
  [9156] = 1,
    ACTIONS(1084), 1,
      anon_sym_SLASH,
  [9160] = 1,
    ACTIONS(1086), 1,
      sym_string,
  [9164] = 1,
    ACTIONS(1088), 1,
      anon_sym_LPAREN,
  [9168] = 1,
    ACTIONS(1090), 1,
      anon_sym_EQ,
  [9172] = 1,
    ACTIONS(1092), 1,
      anon_sym_LPAREN,
  [9176] = 1,
    ACTIONS(1094), 1,
      aux_sym_preprocessor_token1,
  [9180] = 1,
    ACTIONS(1096), 1,
      anon_sym_RBRACE,
  [9184] = 1,
    ACTIONS(1098), 1,
      anon_sym_RPAREN,
  [9188] = 1,
    ACTIONS(1100), 1,
      anon_sym_EQ,
  [9192] = 1,
    ACTIONS(1102), 1,
      sym_ident,
  [9196] = 1,
    ACTIONS(1104), 1,
      ts_builtin_sym_end,
  [9200] = 1,
    ACTIONS(1106), 1,
      anon_sym_RPAREN,
  [9204] = 1,
    ACTIONS(1108), 1,
      anon_sym_EQ,
  [9208] = 1,
    ACTIONS(1110), 1,
      sym_ident,
  [9212] = 1,
    ACTIONS(1112), 1,
      anon_sym_COLON,
  [9216] = 1,
    ACTIONS(1114), 1,
      anon_sym_RPAREN,
  [9220] = 1,
    ACTIONS(1116), 1,
      sym_ident,
  [9224] = 1,
    ACTIONS(1118), 1,
      anon_sym_COLON,
  [9228] = 1,
    ACTIONS(1120), 1,
      anon_sym_COLON,
  [9232] = 1,
    ACTIONS(1122), 1,
      sym_ident,
  [9236] = 1,
    ACTIONS(1124), 1,
      anon_sym_LPAREN,
  [9240] = 1,
    ACTIONS(1126), 1,
      sym_ident,
  [9244] = 1,
    ACTIONS(1128), 1,
      sym_ident,
  [9248] = 1,
    ACTIONS(1130), 1,
      anon_sym_LPAREN,
  [9252] = 1,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
  [9256] = 1,
    ACTIONS(1132), 1,
      sym_ident,
  [9260] = 1,
    ACTIONS(1134), 1,
      sym_ident,
  [9264] = 1,
    ACTIONS(1136), 1,
      aux_sym_preprocessor_token1,
  [9268] = 1,
    ACTIONS(1138), 1,
      anon_sym_RPAREN,
  [9272] = 1,
    ACTIONS(1140), 1,
      anon_sym_DOT,
  [9276] = 1,
    ACTIONS(1142), 1,
      sym_ident,
  [9280] = 1,
    ACTIONS(1144), 1,
      anon_sym_LPAREN,
  [9284] = 1,
    ACTIONS(1146), 1,
      anon_sym_COLON,
  [9288] = 1,
    ACTIONS(1148), 1,
      sym_string,
  [9292] = 1,
    ACTIONS(1150), 1,
      anon_sym_LPAREN,
  [9296] = 1,
    ACTIONS(1152), 1,
      anon_sym_COLON,
  [9300] = 1,
    ACTIONS(1154), 1,
      sym_ident,
  [9304] = 1,
    ACTIONS(1156), 1,
      anon_sym_COLON,
  [9308] = 1,
    ACTIONS(1158), 1,
      anon_sym_COLON,
  [9312] = 1,
    ACTIONS(1160), 1,
      aux_sym_preprocessor_token1,
  [9316] = 1,
    ACTIONS(1162), 1,
      sym_ident,
  [9320] = 1,
    ACTIONS(1164), 1,
      sym_ident,
  [9324] = 1,
    ACTIONS(1166), 1,
      anon_sym_LPAREN,
  [9328] = 1,
    ACTIONS(1168), 1,
      anon_sym_COLON,
  [9332] = 1,
    ACTIONS(1170), 1,
      anon_sym_DOT,
  [9336] = 1,
    ACTIONS(1172), 1,
      sym_ident,
  [9340] = 1,
    ACTIONS(1174), 1,
      anon_sym_LPAREN,
  [9344] = 1,
    ACTIONS(1176), 1,
      anon_sym_RPAREN,
  [9348] = 1,
    ACTIONS(1178), 1,
      anon_sym_RPAREN,
  [9352] = 1,
    ACTIONS(1180), 1,
      anon_sym_DOT,
  [9356] = 1,
    ACTIONS(1182), 1,
      aux_sym_line_comment_token1,
  [9360] = 1,
    ACTIONS(1184), 1,
      aux_sym_block_comment_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(44)] = 0,
  [SMALL_STATE(45)] = 64,
  [SMALL_STATE(46)] = 122,
  [SMALL_STATE(47)] = 180,
  [SMALL_STATE(48)] = 234,
  [SMALL_STATE(49)] = 282,
  [SMALL_STATE(50)] = 330,
  [SMALL_STATE(51)] = 378,
  [SMALL_STATE(52)] = 421,
  [SMALL_STATE(53)] = 464,
  [SMALL_STATE(54)] = 509,
  [SMALL_STATE(55)] = 552,
  [SMALL_STATE(56)] = 595,
  [SMALL_STATE(57)] = 638,
  [SMALL_STATE(58)] = 680,
  [SMALL_STATE(59)] = 722,
  [SMALL_STATE(60)] = 764,
  [SMALL_STATE(61)] = 806,
  [SMALL_STATE(62)] = 848,
  [SMALL_STATE(63)] = 890,
  [SMALL_STATE(64)] = 932,
  [SMALL_STATE(65)] = 974,
  [SMALL_STATE(66)] = 1016,
  [SMALL_STATE(67)] = 1058,
  [SMALL_STATE(68)] = 1100,
  [SMALL_STATE(69)] = 1142,
  [SMALL_STATE(70)] = 1184,
  [SMALL_STATE(71)] = 1226,
  [SMALL_STATE(72)] = 1268,
  [SMALL_STATE(73)] = 1310,
  [SMALL_STATE(74)] = 1352,
  [SMALL_STATE(75)] = 1394,
  [SMALL_STATE(76)] = 1436,
  [SMALL_STATE(77)] = 1478,
  [SMALL_STATE(78)] = 1520,
  [SMALL_STATE(79)] = 1562,
  [SMALL_STATE(80)] = 1604,
  [SMALL_STATE(81)] = 1646,
  [SMALL_STATE(82)] = 1688,
  [SMALL_STATE(83)] = 1730,
  [SMALL_STATE(84)] = 1803,
  [SMALL_STATE(85)] = 1848,
  [SMALL_STATE(86)] = 1897,
  [SMALL_STATE(87)] = 1946,
  [SMALL_STATE(88)] = 1995,
  [SMALL_STATE(89)] = 2044,
  [SMALL_STATE(90)] = 2093,
  [SMALL_STATE(91)] = 2142,
  [SMALL_STATE(92)] = 2191,
  [SMALL_STATE(93)] = 2240,
  [SMALL_STATE(94)] = 2289,
  [SMALL_STATE(95)] = 2338,
  [SMALL_STATE(96)] = 2387,
  [SMALL_STATE(97)] = 2436,
  [SMALL_STATE(98)] = 2485,
  [SMALL_STATE(99)] = 2534,
  [SMALL_STATE(100)] = 2583,
  [SMALL_STATE(101)] = 2632,
  [SMALL_STATE(102)] = 2705,
  [SMALL_STATE(103)] = 2752,
  [SMALL_STATE(104)] = 2801,
  [SMALL_STATE(105)] = 2850,
  [SMALL_STATE(106)] = 2894,
  [SMALL_STATE(107)] = 2939,
  [SMALL_STATE(108)] = 2977,
  [SMALL_STATE(109)] = 3021,
  [SMALL_STATE(110)] = 3084,
  [SMALL_STATE(111)] = 3147,
  [SMALL_STATE(112)] = 3210,
  [SMALL_STATE(113)] = 3251,
  [SMALL_STATE(114)] = 3314,
  [SMALL_STATE(115)] = 3355,
  [SMALL_STATE(116)] = 3418,
  [SMALL_STATE(117)] = 3481,
  [SMALL_STATE(118)] = 3544,
  [SMALL_STATE(119)] = 3580,
  [SMALL_STATE(120)] = 3616,
  [SMALL_STATE(121)] = 3653,
  [SMALL_STATE(122)] = 3693,
  [SMALL_STATE(123)] = 3733,
  [SMALL_STATE(124)] = 3773,
  [SMALL_STATE(125)] = 3813,
  [SMALL_STATE(126)] = 3849,
  [SMALL_STATE(127)] = 3889,
  [SMALL_STATE(128)] = 3925,
  [SMALL_STATE(129)] = 3965,
  [SMALL_STATE(130)] = 4001,
  [SMALL_STATE(131)] = 4035,
  [SMALL_STATE(132)] = 4072,
  [SMALL_STATE(133)] = 4107,
  [SMALL_STATE(134)] = 4141,
  [SMALL_STATE(135)] = 4175,
  [SMALL_STATE(136)] = 4209,
  [SMALL_STATE(137)] = 4243,
  [SMALL_STATE(138)] = 4277,
  [SMALL_STATE(139)] = 4303,
  [SMALL_STATE(140)] = 4331,
  [SMALL_STATE(141)] = 4357,
  [SMALL_STATE(142)] = 4386,
  [SMALL_STATE(143)] = 4415,
  [SMALL_STATE(144)] = 4440,
  [SMALL_STATE(145)] = 4469,
  [SMALL_STATE(146)] = 4494,
  [SMALL_STATE(147)] = 4522,
  [SMALL_STATE(148)] = 4550,
  [SMALL_STATE(149)] = 4578,
  [SMALL_STATE(150)] = 4606,
  [SMALL_STATE(151)] = 4634,
  [SMALL_STATE(152)] = 4662,
  [SMALL_STATE(153)] = 4690,
  [SMALL_STATE(154)] = 4718,
  [SMALL_STATE(155)] = 4746,
  [SMALL_STATE(156)] = 4774,
  [SMALL_STATE(157)] = 4798,
  [SMALL_STATE(158)] = 4826,
  [SMALL_STATE(159)] = 4854,
  [SMALL_STATE(160)] = 4884,
  [SMALL_STATE(161)] = 4912,
  [SMALL_STATE(162)] = 4940,
  [SMALL_STATE(163)] = 4968,
  [SMALL_STATE(164)] = 4996,
  [SMALL_STATE(165)] = 5024,
  [SMALL_STATE(166)] = 5050,
  [SMALL_STATE(167)] = 5078,
  [SMALL_STATE(168)] = 5106,
  [SMALL_STATE(169)] = 5134,
  [SMALL_STATE(170)] = 5157,
  [SMALL_STATE(171)] = 5180,
  [SMALL_STATE(172)] = 5203,
  [SMALL_STATE(173)] = 5226,
  [SMALL_STATE(174)] = 5249,
  [SMALL_STATE(175)] = 5278,
  [SMALL_STATE(176)] = 5305,
  [SMALL_STATE(177)] = 5334,
  [SMALL_STATE(178)] = 5363,
  [SMALL_STATE(179)] = 5386,
  [SMALL_STATE(180)] = 5409,
  [SMALL_STATE(181)] = 5432,
  [SMALL_STATE(182)] = 5455,
  [SMALL_STATE(183)] = 5478,
  [SMALL_STATE(184)] = 5501,
  [SMALL_STATE(185)] = 5530,
  [SMALL_STATE(186)] = 5559,
  [SMALL_STATE(187)] = 5581,
  [SMALL_STATE(188)] = 5607,
  [SMALL_STATE(189)] = 5629,
  [SMALL_STATE(190)] = 5651,
  [SMALL_STATE(191)] = 5673,
  [SMALL_STATE(192)] = 5695,
  [SMALL_STATE(193)] = 5717,
  [SMALL_STATE(194)] = 5739,
  [SMALL_STATE(195)] = 5761,
  [SMALL_STATE(196)] = 5783,
  [SMALL_STATE(197)] = 5809,
  [SMALL_STATE(198)] = 5831,
  [SMALL_STATE(199)] = 5853,
  [SMALL_STATE(200)] = 5875,
  [SMALL_STATE(201)] = 5897,
  [SMALL_STATE(202)] = 5919,
  [SMALL_STATE(203)] = 5941,
  [SMALL_STATE(204)] = 5963,
  [SMALL_STATE(205)] = 5985,
  [SMALL_STATE(206)] = 6007,
  [SMALL_STATE(207)] = 6029,
  [SMALL_STATE(208)] = 6051,
  [SMALL_STATE(209)] = 6073,
  [SMALL_STATE(210)] = 6095,
  [SMALL_STATE(211)] = 6117,
  [SMALL_STATE(212)] = 6139,
  [SMALL_STATE(213)] = 6161,
  [SMALL_STATE(214)] = 6183,
  [SMALL_STATE(215)] = 6205,
  [SMALL_STATE(216)] = 6227,
  [SMALL_STATE(217)] = 6249,
  [SMALL_STATE(218)] = 6271,
  [SMALL_STATE(219)] = 6293,
  [SMALL_STATE(220)] = 6315,
  [SMALL_STATE(221)] = 6337,
  [SMALL_STATE(222)] = 6359,
  [SMALL_STATE(223)] = 6381,
  [SMALL_STATE(224)] = 6407,
  [SMALL_STATE(225)] = 6429,
  [SMALL_STATE(226)] = 6455,
  [SMALL_STATE(227)] = 6481,
  [SMALL_STATE(228)] = 6505,
  [SMALL_STATE(229)] = 6527,
  [SMALL_STATE(230)] = 6549,
  [SMALL_STATE(231)] = 6575,
  [SMALL_STATE(232)] = 6597,
  [SMALL_STATE(233)] = 6619,
  [SMALL_STATE(234)] = 6645,
  [SMALL_STATE(235)] = 6670,
  [SMALL_STATE(236)] = 6695,
  [SMALL_STATE(237)] = 6720,
  [SMALL_STATE(238)] = 6745,
  [SMALL_STATE(239)] = 6772,
  [SMALL_STATE(240)] = 6795,
  [SMALL_STATE(241)] = 6818,
  [SMALL_STATE(242)] = 6841,
  [SMALL_STATE(243)] = 6866,
  [SMALL_STATE(244)] = 6889,
  [SMALL_STATE(245)] = 6914,
  [SMALL_STATE(246)] = 6934,
  [SMALL_STATE(247)] = 6954,
  [SMALL_STATE(248)] = 6980,
  [SMALL_STATE(249)] = 7000,
  [SMALL_STATE(250)] = 7020,
  [SMALL_STATE(251)] = 7044,
  [SMALL_STATE(252)] = 7064,
  [SMALL_STATE(253)] = 7084,
  [SMALL_STATE(254)] = 7110,
  [SMALL_STATE(255)] = 7130,
  [SMALL_STATE(256)] = 7150,
  [SMALL_STATE(257)] = 7173,
  [SMALL_STATE(258)] = 7196,
  [SMALL_STATE(259)] = 7219,
  [SMALL_STATE(260)] = 7242,
  [SMALL_STATE(261)] = 7259,
  [SMALL_STATE(262)] = 7288,
  [SMALL_STATE(263)] = 7317,
  [SMALL_STATE(264)] = 7346,
  [SMALL_STATE(265)] = 7375,
  [SMALL_STATE(266)] = 7398,
  [SMALL_STATE(267)] = 7421,
  [SMALL_STATE(268)] = 7441,
  [SMALL_STATE(269)] = 7458,
  [SMALL_STATE(270)] = 7475,
  [SMALL_STATE(271)] = 7492,
  [SMALL_STATE(272)] = 7509,
  [SMALL_STATE(273)] = 7526,
  [SMALL_STATE(274)] = 7543,
  [SMALL_STATE(275)] = 7560,
  [SMALL_STATE(276)] = 7577,
  [SMALL_STATE(277)] = 7594,
  [SMALL_STATE(278)] = 7611,
  [SMALL_STATE(279)] = 7628,
  [SMALL_STATE(280)] = 7645,
  [SMALL_STATE(281)] = 7662,
  [SMALL_STATE(282)] = 7674,
  [SMALL_STATE(283)] = 7686,
  [SMALL_STATE(284)] = 7698,
  [SMALL_STATE(285)] = 7714,
  [SMALL_STATE(286)] = 7726,
  [SMALL_STATE(287)] = 7742,
  [SMALL_STATE(288)] = 7750,
  [SMALL_STATE(289)] = 7762,
  [SMALL_STATE(290)] = 7770,
  [SMALL_STATE(291)] = 7782,
  [SMALL_STATE(292)] = 7796,
  [SMALL_STATE(293)] = 7808,
  [SMALL_STATE(294)] = 7820,
  [SMALL_STATE(295)] = 7832,
  [SMALL_STATE(296)] = 7840,
  [SMALL_STATE(297)] = 7848,
  [SMALL_STATE(298)] = 7864,
  [SMALL_STATE(299)] = 7872,
  [SMALL_STATE(300)] = 7884,
  [SMALL_STATE(301)] = 7900,
  [SMALL_STATE(302)] = 7912,
  [SMALL_STATE(303)] = 7920,
  [SMALL_STATE(304)] = 7936,
  [SMALL_STATE(305)] = 7944,
  [SMALL_STATE(306)] = 7956,
  [SMALL_STATE(307)] = 7964,
  [SMALL_STATE(308)] = 7980,
  [SMALL_STATE(309)] = 7988,
  [SMALL_STATE(310)] = 7996,
  [SMALL_STATE(311)] = 8004,
  [SMALL_STATE(312)] = 8012,
  [SMALL_STATE(313)] = 8023,
  [SMALL_STATE(314)] = 8034,
  [SMALL_STATE(315)] = 8045,
  [SMALL_STATE(316)] = 8056,
  [SMALL_STATE(317)] = 8069,
  [SMALL_STATE(318)] = 8080,
  [SMALL_STATE(319)] = 8091,
  [SMALL_STATE(320)] = 8102,
  [SMALL_STATE(321)] = 8113,
  [SMALL_STATE(322)] = 8120,
  [SMALL_STATE(323)] = 8133,
  [SMALL_STATE(324)] = 8146,
  [SMALL_STATE(325)] = 8157,
  [SMALL_STATE(326)] = 8170,
  [SMALL_STATE(327)] = 8183,
  [SMALL_STATE(328)] = 8194,
  [SMALL_STATE(329)] = 8205,
  [SMALL_STATE(330)] = 8212,
  [SMALL_STATE(331)] = 8223,
  [SMALL_STATE(332)] = 8236,
  [SMALL_STATE(333)] = 8243,
  [SMALL_STATE(334)] = 8256,
  [SMALL_STATE(335)] = 8267,
  [SMALL_STATE(336)] = 8278,
  [SMALL_STATE(337)] = 8288,
  [SMALL_STATE(338)] = 8298,
  [SMALL_STATE(339)] = 8308,
  [SMALL_STATE(340)] = 8318,
  [SMALL_STATE(341)] = 8328,
  [SMALL_STATE(342)] = 8338,
  [SMALL_STATE(343)] = 8348,
  [SMALL_STATE(344)] = 8358,
  [SMALL_STATE(345)] = 8368,
  [SMALL_STATE(346)] = 8378,
  [SMALL_STATE(347)] = 8388,
  [SMALL_STATE(348)] = 8398,
  [SMALL_STATE(349)] = 8408,
  [SMALL_STATE(350)] = 8418,
  [SMALL_STATE(351)] = 8428,
  [SMALL_STATE(352)] = 8438,
  [SMALL_STATE(353)] = 8448,
  [SMALL_STATE(354)] = 8458,
  [SMALL_STATE(355)] = 8468,
  [SMALL_STATE(356)] = 8478,
  [SMALL_STATE(357)] = 8488,
  [SMALL_STATE(358)] = 8498,
  [SMALL_STATE(359)] = 8508,
  [SMALL_STATE(360)] = 8518,
  [SMALL_STATE(361)] = 8528,
  [SMALL_STATE(362)] = 8538,
  [SMALL_STATE(363)] = 8548,
  [SMALL_STATE(364)] = 8558,
  [SMALL_STATE(365)] = 8568,
  [SMALL_STATE(366)] = 8578,
  [SMALL_STATE(367)] = 8588,
  [SMALL_STATE(368)] = 8598,
  [SMALL_STATE(369)] = 8608,
  [SMALL_STATE(370)] = 8618,
  [SMALL_STATE(371)] = 8628,
  [SMALL_STATE(372)] = 8638,
  [SMALL_STATE(373)] = 8648,
  [SMALL_STATE(374)] = 8658,
  [SMALL_STATE(375)] = 8668,
  [SMALL_STATE(376)] = 8678,
  [SMALL_STATE(377)] = 8688,
  [SMALL_STATE(378)] = 8698,
  [SMALL_STATE(379)] = 8708,
  [SMALL_STATE(380)] = 8718,
  [SMALL_STATE(381)] = 8724,
  [SMALL_STATE(382)] = 8734,
  [SMALL_STATE(383)] = 8744,
  [SMALL_STATE(384)] = 8754,
  [SMALL_STATE(385)] = 8764,
  [SMALL_STATE(386)] = 8774,
  [SMALL_STATE(387)] = 8784,
  [SMALL_STATE(388)] = 8794,
  [SMALL_STATE(389)] = 8804,
  [SMALL_STATE(390)] = 8814,
  [SMALL_STATE(391)] = 8824,
  [SMALL_STATE(392)] = 8834,
  [SMALL_STATE(393)] = 8844,
  [SMALL_STATE(394)] = 8854,
  [SMALL_STATE(395)] = 8864,
  [SMALL_STATE(396)] = 8874,
  [SMALL_STATE(397)] = 8884,
  [SMALL_STATE(398)] = 8894,
  [SMALL_STATE(399)] = 8904,
  [SMALL_STATE(400)] = 8914,
  [SMALL_STATE(401)] = 8924,
  [SMALL_STATE(402)] = 8934,
  [SMALL_STATE(403)] = 8944,
  [SMALL_STATE(404)] = 8954,
  [SMALL_STATE(405)] = 8964,
  [SMALL_STATE(406)] = 8969,
  [SMALL_STATE(407)] = 8974,
  [SMALL_STATE(408)] = 8981,
  [SMALL_STATE(409)] = 8986,
  [SMALL_STATE(410)] = 8991,
  [SMALL_STATE(411)] = 8996,
  [SMALL_STATE(412)] = 9001,
  [SMALL_STATE(413)] = 9008,
  [SMALL_STATE(414)] = 9015,
  [SMALL_STATE(415)] = 9022,
  [SMALL_STATE(416)] = 9029,
  [SMALL_STATE(417)] = 9036,
  [SMALL_STATE(418)] = 9041,
  [SMALL_STATE(419)] = 9048,
  [SMALL_STATE(420)] = 9055,
  [SMALL_STATE(421)] = 9062,
  [SMALL_STATE(422)] = 9069,
  [SMALL_STATE(423)] = 9076,
  [SMALL_STATE(424)] = 9083,
  [SMALL_STATE(425)] = 9090,
  [SMALL_STATE(426)] = 9097,
  [SMALL_STATE(427)] = 9104,
  [SMALL_STATE(428)] = 9108,
  [SMALL_STATE(429)] = 9112,
  [SMALL_STATE(430)] = 9116,
  [SMALL_STATE(431)] = 9120,
  [SMALL_STATE(432)] = 9124,
  [SMALL_STATE(433)] = 9128,
  [SMALL_STATE(434)] = 9132,
  [SMALL_STATE(435)] = 9136,
  [SMALL_STATE(436)] = 9140,
  [SMALL_STATE(437)] = 9144,
  [SMALL_STATE(438)] = 9148,
  [SMALL_STATE(439)] = 9152,
  [SMALL_STATE(440)] = 9156,
  [SMALL_STATE(441)] = 9160,
  [SMALL_STATE(442)] = 9164,
  [SMALL_STATE(443)] = 9168,
  [SMALL_STATE(444)] = 9172,
  [SMALL_STATE(445)] = 9176,
  [SMALL_STATE(446)] = 9180,
  [SMALL_STATE(447)] = 9184,
  [SMALL_STATE(448)] = 9188,
  [SMALL_STATE(449)] = 9192,
  [SMALL_STATE(450)] = 9196,
  [SMALL_STATE(451)] = 9200,
  [SMALL_STATE(452)] = 9204,
  [SMALL_STATE(453)] = 9208,
  [SMALL_STATE(454)] = 9212,
  [SMALL_STATE(455)] = 9216,
  [SMALL_STATE(456)] = 9220,
  [SMALL_STATE(457)] = 9224,
  [SMALL_STATE(458)] = 9228,
  [SMALL_STATE(459)] = 9232,
  [SMALL_STATE(460)] = 9236,
  [SMALL_STATE(461)] = 9240,
  [SMALL_STATE(462)] = 9244,
  [SMALL_STATE(463)] = 9248,
  [SMALL_STATE(464)] = 9252,
  [SMALL_STATE(465)] = 9256,
  [SMALL_STATE(466)] = 9260,
  [SMALL_STATE(467)] = 9264,
  [SMALL_STATE(468)] = 9268,
  [SMALL_STATE(469)] = 9272,
  [SMALL_STATE(470)] = 9276,
  [SMALL_STATE(471)] = 9280,
  [SMALL_STATE(472)] = 9284,
  [SMALL_STATE(473)] = 9288,
  [SMALL_STATE(474)] = 9292,
  [SMALL_STATE(475)] = 9296,
  [SMALL_STATE(476)] = 9300,
  [SMALL_STATE(477)] = 9304,
  [SMALL_STATE(478)] = 9308,
  [SMALL_STATE(479)] = 9312,
  [SMALL_STATE(480)] = 9316,
  [SMALL_STATE(481)] = 9320,
  [SMALL_STATE(482)] = 9324,
  [SMALL_STATE(483)] = 9328,
  [SMALL_STATE(484)] = 9332,
  [SMALL_STATE(485)] = 9336,
  [SMALL_STATE(486)] = 9340,
  [SMALL_STATE(487)] = 9344,
  [SMALL_STATE(488)] = 9348,
  [SMALL_STATE(489)] = 9352,
  [SMALL_STATE(490)] = 9356,
  [SMALL_STATE(491)] = 9360,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intrinsic_functor, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(46),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negation, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negation, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operator, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operator, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(459),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 5, .production_id = 37),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 5, .production_id = 37),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 3, .production_id = 9),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 3, .production_id = 9),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_constructor, 2, .production_id = 16),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adt_constructor, 2, .production_id = 16),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4, .production_id = 20),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 4, .production_id = 20),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4, .production_id = 21),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 4, .production_id = 21),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_op, 3, .production_id = 35),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_op, 3, .production_id = 35),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_constructor, 6, .production_id = 16),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adt_constructor, 6, .production_id = 16),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_constructor, 4, .production_id = 16),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adt_constructor, 4, .production_id = 16),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_call, 5),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_call, 5),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 5, .production_id = 56),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 5, .production_id = 56),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_constructor, 5, .production_id = 16),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adt_constructor, 5, .production_id = 16),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_call, 4),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_call, 4),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as, 6, .production_id = 63),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as, 6, .production_id = 63),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 6, .production_id = 64),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 6, .production_id = 64),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 6, .production_id = 65),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 6, .production_id = 65),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 8, .production_id = 67),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 8, .production_id = 67),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_call, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_call, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 4, .production_id = 46),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 4, .production_id = 46),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 3, .production_id = 33),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 3, .production_id = 33),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_constructor, 3),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_constructor, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_constructor, 4),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_constructor, 4),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_constructor, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_constructor, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(445),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(491),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(490),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(473),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(466),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(414),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(462),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(461),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(325),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(276),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(281),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(48),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 12),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 12),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 28),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 28),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 12),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 12),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 4, .production_id = 12),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 4, .production_id = 12),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 4),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 4),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 28),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 28),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 12),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 12),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 28),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 28),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_op, 2, .production_id = 18),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_op, 2, .production_id = 18),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 28),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 8, .production_id = 28),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 3),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2), SHIFT_REPEAT(107),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_qualifier, 1),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_qualifier, 1),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(445),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(491),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(490),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(414),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(449),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(462),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(461),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(325),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(282),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(48),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 3, .production_id = 35),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_repeat1, 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2, .production_id = 19),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_type, 1, .production_id = 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_type, 4, .production_id = 25),
  [486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(456),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_type, 5, .production_id = 40),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 6),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 7),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt, 3, .production_id = 13),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2), SHIFT_REPEAT(416),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 6),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 4),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 8),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsumptive_rule, 6, .production_id = 47),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_adt_repeat1, 2),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_adt_repeat1, 2), SHIFT_REPEAT(420),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2, .production_id = 4),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 3),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 2),
  [529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 2), SHIFT_REPEAT(467),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 5),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 2),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_monotonic_rule, 4, .production_id = 17),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 5),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_monotonic_rule, 5, .production_id = 36),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt, 4, .production_id = 30),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 7),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 4),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_branch, 5),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_branch, 3),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2, .production_id = 15),
  [558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2, .production_id = 15), SHIFT_REPEAT(413),
  [561] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(481),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 5),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_branch, 4),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_union_repeat1, 2),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 6),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 5),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, .production_id = 4),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, .production_id = 8),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_decl, 4, .production_id = 10),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_legacy_bare_type_decl, 1, .production_id = 2),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_record, 6, .production_id = 29),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_decl, 7, .production_id = 53),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_decl, 7, .production_id = 52),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_monotonic_rule, 6, .production_id = 48),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 6, .production_id = 45),
  [604] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_union_repeat1, 2), SHIFT_REPEAT(275),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsumptive_rule, 7, .production_id = 57),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 7, .production_id = 55),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_record, 5, .production_id = 29),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_decl, 8, .production_id = 60),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 12),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 8, .production_id = 61),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 8, .production_id = 62),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_decl, 6, .production_id = 43),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 3),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 9, .production_id = 28),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 9, .production_id = 66),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_decl, 5, .production_id = 26),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_init, 4, .production_id = 11),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor, 3, .production_id = 6),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2, .production_id = 5),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 2),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_record, 4, .production_id = 29),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, .production_id = 4),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtype, 3, .production_id = 14),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_synonym, 3, .production_id = 14),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_union, 4, .production_id = 30),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, .production_id = 31),
  [659] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(480),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, .production_id = 8),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_monotonic_rule, 5, .production_id = 34),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 58),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 8, .production_id = 58),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 7, .production_id = 50),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 7, .production_id = 50),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 6, .production_id = 38),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 6, .production_id = 38),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 59),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 8, .production_id = 59),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 2, .production_id = 1),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 7, .production_id = 51),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 7, .production_id = 51),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 7, .production_id = 49),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 7, .production_id = 49),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_legacy_type_decl, 2, .production_id = 3),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 49),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 51),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 9, .production_id = 58),
  [720] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2, .production_id = 15), SHIFT_REPEAT(415),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 9, .production_id = 59),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 7, .production_id = 38),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 3, .production_id = 7),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 50),
  [731] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_union_repeat1, 2), SHIFT_REPEAT(280),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [776] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2), SHIFT_REPEAT(425),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 5),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 3),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 3),
  [799] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(20),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains, 3),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains, 5),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 4),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 3),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 4),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 5),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 5),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains, 4),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 4),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [848] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(13),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [857] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(18),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2),
  [862] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2), SHIFT_REPEAT(431),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [873] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(29),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 1),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 27),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 2),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [906] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2, .production_id = 22), SHIFT_REPEAT(41),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2, .production_id = 22),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [917] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functor_decl_repeat1, 2, .production_id = 24), SHIFT_REPEAT(267),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functor_decl_repeat1, 2, .production_id = 24),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [940] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2, .production_id = 32), SHIFT_REPEAT(437),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2, .production_id = 32),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [965] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(14),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [972] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_monotonic_rule_repeat1, 2), SHIFT_REPEAT(394),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_monotonic_rule_repeat1, 2),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1003] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat1, 2), SHIFT_REPEAT(479),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat1, 2),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1010] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat1, 2, .production_id = 44), SHIFT_REPEAT(412),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat1, 2, .production_id = 44),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1019] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_type_repeat1, 2, .production_id = 41), SHIFT_REPEAT(470),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_type_repeat1, 2, .production_id = 41),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat1, 2, .production_id = 42),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_type_repeat1, 2, .production_id = 39),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functor_decl_repeat1, 2, .production_id = 10),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functor_decl_repeat1, 2, .production_id = 23),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 4, .production_id = 54),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1104] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_qualifier, 1),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined_functor, 2),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
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
