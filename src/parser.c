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
#define STATE_COUNT 516
#define LARGE_STATE_COUNT 44
#define SYMBOL_COUNT 217
#define ALIAS_COUNT 0
#define TOKEN_COUNT 133
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 39
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 137

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
  aux_sym_record_constructor_repeat1 = 207,
  aux_sym_relation_decl_repeat1 = 208,
  aux_sym_relation_decl_repeat2 = 209,
  aux_sym_relation_decl_repeat3 = 210,
  aux_sym_choice_domain_repeat1 = 211,
  aux_sym_type_union_repeat1 = 212,
  aux_sym_type_record_repeat1 = 213,
  aux_sym_adt_repeat1 = 214,
  aux_sym__adt_branch_repeat1 = 215,
  aux_sym_qualified_name_repeat1 = 216,
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
  [aux_sym_record_constructor_repeat1] = "record_constructor_repeat1",
  [aux_sym_relation_decl_repeat1] = "relation_decl_repeat1",
  [aux_sym_relation_decl_repeat2] = "relation_decl_repeat2",
  [aux_sym_relation_decl_repeat3] = "relation_decl_repeat3",
  [aux_sym_choice_domain_repeat1] = "choice_domain_repeat1",
  [aux_sym_type_union_repeat1] = "type_union_repeat1",
  [aux_sym_type_record_repeat1] = "type_record_repeat1",
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
  [aux_sym_record_constructor_repeat1] = aux_sym_record_constructor_repeat1,
  [aux_sym_relation_decl_repeat1] = aux_sym_relation_decl_repeat1,
  [aux_sym_relation_decl_repeat2] = aux_sym_relation_decl_repeat2,
  [aux_sym_relation_decl_repeat3] = aux_sym_relation_decl_repeat3,
  [aux_sym_choice_domain_repeat1] = aux_sym_choice_domain_repeat1,
  [aux_sym_type_union_repeat1] = aux_sym_type_union_repeat1,
  [aux_sym_type_record_repeat1] = aux_sym_type_record_repeat1,
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
  [aux_sym_record_constructor_repeat1] = {
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
  [aux_sym_type_record_repeat1] = {
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
  field_aggregator = 1,
  field_argument = 2,
  field_atom = 3,
  field_attribute = 4,
  field_body = 5,
  field_branch = 6,
  field_choice = 7,
  field_component = 8,
  field_constructor = 9,
  field_expr = 10,
  field_field = 11,
  field_file = 12,
  field_functor = 13,
  field_head = 14,
  field_high = 15,
  field_key = 16,
  field_left = 17,
  field_line = 18,
  field_low = 19,
  field_name = 20,
  field_number = 21,
  field_operand = 22,
  field_operator = 23,
  field_order = 24,
  field_param = 25,
  field_plan = 26,
  field_qualifier = 27,
  field_relation = 28,
  field_return = 29,
  field_right = 30,
  field_step = 31,
  field_subsumed = 32,
  field_subsumes = 33,
  field_subtype = 34,
  field_super = 35,
  field_supertype = 36,
  field_type = 37,
  field_value = 38,
  field_var = 39,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_aggregator] = "aggregator",
  [field_argument] = "argument",
  [field_atom] = "atom",
  [field_attribute] = "attribute",
  [field_body] = "body",
  [field_branch] = "branch",
  [field_choice] = "choice",
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
  [field_number] = "number",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_order] = "order",
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
  [14] = {.index = 18, .length = 1},
  [15] = {.index = 19, .length = 1},
  [16] = {.index = 20, .length = 1},
  [17] = {.index = 21, .length = 2},
  [18] = {.index = 23, .length = 1},
  [19] = {.index = 24, .length = 4},
  [20] = {.index = 28, .length = 2},
  [21] = {.index = 30, .length = 2},
  [22] = {.index = 32, .length = 1},
  [23] = {.index = 33, .length = 1},
  [24] = {.index = 34, .length = 2},
  [25] = {.index = 36, .length = 2},
  [26] = {.index = 38, .length = 1},
  [27] = {.index = 39, .length = 2},
  [28] = {.index = 41, .length = 2},
  [29] = {.index = 43, .length = 2},
  [30] = {.index = 45, .length = 4},
  [31] = {.index = 49, .length = 2},
  [32] = {.index = 51, .length = 2},
  [33] = {.index = 53, .length = 2},
  [34] = {.index = 55, .length = 2},
  [35] = {.index = 57, .length = 2},
  [36] = {.index = 59, .length = 2},
  [37] = {.index = 61, .length = 2},
  [38] = {.index = 63, .length = 2},
  [39] = {.index = 65, .length = 2},
  [40] = {.index = 67, .length = 2},
  [41] = {.index = 69, .length = 2},
  [42] = {.index = 71, .length = 2},
  [43] = {.index = 73, .length = 2},
  [44] = {.index = 75, .length = 2},
  [45] = {.index = 77, .length = 1},
  [46] = {.index = 78, .length = 7},
  [47] = {.index = 85, .length = 3},
  [48] = {.index = 88, .length = 3},
  [49] = {.index = 91, .length = 4},
  [50] = {.index = 95, .length = 1},
  [51] = {.index = 96, .length = 3},
  [52] = {.index = 99, .length = 3},
  [53] = {.index = 102, .length = 1},
  [54] = {.index = 103, .length = 3},
  [55] = {.index = 106, .length = 3},
  [56] = {.index = 109, .length = 2},
  [57] = {.index = 111, .length = 1},
  [58] = {.index = 112, .length = 3},
  [59] = {.index = 115, .length = 2},
  [60] = {.index = 117, .length = 1},
  [61] = {.index = 118, .length = 2},
  [62] = {.index = 120, .length = 2},
  [63] = {.index = 122, .length = 3},
  [64] = {.index = 125, .length = 3},
  [65] = {.index = 128, .length = 3},
  [66] = {.index = 131, .length = 3},
  [67] = {.index = 134, .length = 3},
  [68] = {.index = 137, .length = 3},
  [69] = {.index = 140, .length = 3},
  [70] = {.index = 143, .length = 3},
  [71] = {.index = 146, .length = 3},
  [72] = {.index = 149, .length = 3},
  [73] = {.index = 152, .length = 3},
  [74] = {.index = 155, .length = 3},
  [75] = {.index = 158, .length = 3},
  [76] = {.index = 161, .length = 3},
  [77] = {.index = 164, .length = 1},
  [78] = {.index = 165, .length = 2},
  [79] = {.index = 167, .length = 4},
  [80] = {.index = 171, .length = 4},
  [81] = {.index = 175, .length = 1},
  [82] = {.index = 176, .length = 1},
  [83] = {.index = 177, .length = 3},
  [84] = {.index = 180, .length = 2},
  [85] = {.index = 182, .length = 2},
  [86] = {.index = 184, .length = 3},
  [87] = {.index = 187, .length = 4},
  [88] = {.index = 191, .length = 3},
  [89] = {.index = 194, .length = 3},
  [90] = {.index = 197, .length = 4},
  [91] = {.index = 201, .length = 3},
  [92] = {.index = 204, .length = 3},
  [93] = {.index = 207, .length = 4},
  [94] = {.index = 211, .length = 4},
  [95] = {.index = 215, .length = 4},
  [96] = {.index = 219, .length = 4},
  [97] = {.index = 223, .length = 4},
  [98] = {.index = 227, .length = 4},
  [99] = {.index = 231, .length = 4},
  [100] = {.index = 235, .length = 4},
  [101] = {.index = 239, .length = 4},
  [102] = {.index = 243, .length = 4},
  [103] = {.index = 247, .length = 4},
  [104] = {.index = 251, .length = 1},
  [105] = {.index = 252, .length = 2},
  [106] = {.index = 254, .length = 2},
  [107] = {.index = 256, .length = 2},
  [108] = {.index = 258, .length = 2},
  [109] = {.index = 260, .length = 3},
  [110] = {.index = 263, .length = 2},
  [111] = {.index = 265, .length = 2},
  [112] = {.index = 267, .length = 2},
  [113] = {.index = 269, .length = 3},
  [114] = {.index = 272, .length = 3},
  [115] = {.index = 275, .length = 4},
  [116] = {.index = 279, .length = 5},
  [117] = {.index = 284, .length = 5},
  [118] = {.index = 289, .length = 4},
  [119] = {.index = 293, .length = 5},
  [120] = {.index = 298, .length = 5},
  [121] = {.index = 303, .length = 5},
  [122] = {.index = 308, .length = 5},
  [123] = {.index = 313, .length = 5},
  [124] = {.index = 318, .length = 3},
  [125] = {.index = 321, .length = 5},
  [126] = {.index = 326, .length = 4},
  [127] = {.index = 330, .length = 3},
  [128] = {.index = 333, .length = 2},
  [129] = {.index = 335, .length = 5},
  [130] = {.index = 340, .length = 2},
  [131] = {.index = 342, .length = 6},
  [132] = {.index = 348, .length = 6},
  [133] = {.index = 354, .length = 1},
  [134] = {.index = 355, .length = 3},
  [135] = {.index = 358, .length = 2},
  [136] = {.index = 360, .length = 1},
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
    {field_attribute, 1},
  [17] =
    {field_choice, 3},
  [18] =
    {field_qualifier, 3},
  [19] =
    {field_attribute, 2},
  [20] =
    {field_attribute, 2, .inherited = true},
  [21] =
    {field_attribute, 0, .inherited = true},
    {field_attribute, 1, .inherited = true},
  [23] =
    {field_head, 1},
  [24] =
    {field_branch, 2},
    {field_constructor, 2, .inherited = true},
    {field_field, 2, .inherited = true},
    {field_left, 0},
  [28] =
    {field_left, 0},
    {field_right, 2},
  [30] =
    {field_relation, 0, .inherited = true},
    {field_relation, 1, .inherited = true},
  [32] =
    {field_constructor, 1},
  [33] =
    {field_name, 1},
  [34] =
    {field_body, 2},
    {field_head, 0},
  [36] =
    {field_operand, 1},
    {field_operator, 0},
  [38] =
    {field_argument, 1},
  [39] =
    {field_argument, 2},
    {field_relation, 0},
  [41] =
    {field_argument, 2, .inherited = true},
    {field_relation, 0},
  [43] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [45] =
    {field_attribute, 0, .inherited = true},
    {field_attribute, 1, .inherited = true},
    {field_type, 0, .inherited = true},
    {field_type, 1, .inherited = true},
  [49] =
    {field_name, 0},
    {field_param, 2},
  [51] =
    {field_body, 3},
    {field_type, 1},
  [53] =
    {field_choice, 4},
    {field_qualifier, 3},
  [55] =
    {field_type, 2},
    {field_var, 0},
  [57] =
    {field_attribute, 2},
    {field_choice, 4},
  [59] =
    {field_attribute, 2},
    {field_qualifier, 4},
  [61] =
    {field_attribute, 2},
    {field_attribute, 3, .inherited = true},
  [63] =
    {field_attribute, 2, .inherited = true},
    {field_choice, 4},
  [65] =
    {field_attribute, 2, .inherited = true},
    {field_qualifier, 4},
  [67] =
    {field_choice, 4},
    {field_head, 1},
  [69] =
    {field_head, 1},
    {field_qualifier, 4},
  [71] =
    {field_attribute, 3},
    {field_head, 1},
  [73] =
    {field_attribute, 3, .inherited = true},
    {field_head, 1},
  [75] =
    {field_head, 1},
    {field_head, 2},
  [77] =
    {field_left, 0},
  [78] =
    {field_branch, 2},
    {field_branch, 3},
    {field_constructor, 2, .inherited = true},
    {field_constructor, 3, .inherited = true},
    {field_field, 2, .inherited = true},
    {field_field, 3, .inherited = true},
    {field_left, 0},
  [85] =
    {field_branch, 2},
    {field_branch, 3},
    {field_left, 0},
  [88] =
    {field_key, 3, .inherited = true},
    {field_relation, 1},
    {field_value, 3, .inherited = true},
  [91] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [95] =
    {field_body, 2},
  [96] =
    {field_body, 2},
    {field_head, 0},
    {field_plan, 4},
  [99] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [102] =
    {field_functor, 0},
  [103] =
    {field_body, 3},
    {field_head, 0},
    {field_head, 1},
  [106] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_relation, 0},
  [109] =
    {field_name, 1},
    {field_return, 5},
  [111] =
    {field_param, 1},
  [112] =
    {field_name, 0},
    {field_param, 2},
    {field_param, 3, .inherited = true},
  [115] =
    {field_param, 0, .inherited = true},
    {field_param, 1, .inherited = true},
  [117] =
    {field_super, 1},
  [118] =
    {field_super, 3},
    {field_type, 1},
  [120] =
    {field_super, 0, .inherited = true},
    {field_super, 1, .inherited = true},
  [122] =
    {field_attribute, 2},
    {field_choice, 5},
    {field_qualifier, 4},
  [125] =
    {field_attribute, 2},
    {field_attribute, 3, .inherited = true},
    {field_choice, 5},
  [128] =
    {field_attribute, 2},
    {field_attribute, 3, .inherited = true},
    {field_qualifier, 5},
  [131] =
    {field_attribute, 2, .inherited = true},
    {field_choice, 5},
    {field_qualifier, 4},
  [134] =
    {field_choice, 5},
    {field_head, 1},
    {field_qualifier, 4},
  [137] =
    {field_attribute, 3},
    {field_choice, 5},
    {field_head, 1},
  [140] =
    {field_attribute, 3},
    {field_head, 1},
    {field_qualifier, 5},
  [143] =
    {field_attribute, 3},
    {field_attribute, 4, .inherited = true},
    {field_head, 1},
  [146] =
    {field_attribute, 3, .inherited = true},
    {field_choice, 5},
    {field_head, 1},
  [149] =
    {field_attribute, 3, .inherited = true},
    {field_head, 1},
    {field_qualifier, 5},
  [152] =
    {field_choice, 5},
    {field_head, 1},
    {field_head, 2},
  [155] =
    {field_head, 1},
    {field_head, 2},
    {field_qualifier, 5},
  [158] =
    {field_attribute, 4},
    {field_head, 1},
    {field_head, 2},
  [161] =
    {field_attribute, 4, .inherited = true},
    {field_head, 1},
    {field_head, 2},
  [164] =
    {field_constructor, 0},
  [165] =
    {field_constructor, 1, .inherited = true},
    {field_field, 1, .inherited = true},
  [167] =
    {field_constructor, 0, .inherited = true},
    {field_constructor, 1, .inherited = true},
    {field_field, 0, .inherited = true},
    {field_field, 1, .inherited = true},
  [171] =
    {field_key, 4, .inherited = true},
    {field_relation, 1},
    {field_relation, 2, .inherited = true},
    {field_value, 4, .inherited = true},
  [175] =
    {field_argument, 2},
  [176] =
    {field_argument, 2, .inherited = true},
  [177] =
    {field_aggregator, 0},
    {field_body, 3},
    {field_head, 1},
  [180] =
    {field_argument, 2},
    {field_functor, 0},
  [182] =
    {field_argument, 2, .inherited = true},
    {field_functor, 0},
  [184] =
    {field_body, 4},
    {field_subsumed, 0},
    {field_subsumes, 2},
  [187] =
    {field_body, 3},
    {field_head, 0},
    {field_head, 1},
    {field_plan, 5},
  [191] =
    {field_name, 1},
    {field_return, 6},
    {field_type, 3},
  [194] =
    {field_attribute, 3},
    {field_name, 1},
    {field_return, 6},
  [197] =
    {field_attribute, 3, .inherited = true},
    {field_name, 1},
    {field_return, 6},
    {field_type, 3, .inherited = true},
  [201] =
    {field_body, 5},
    {field_super, 3},
    {field_type, 1},
  [204] =
    {field_super, 3},
    {field_super, 4, .inherited = true},
    {field_type, 1},
  [207] =
    {field_attribute, 2},
    {field_attribute, 3, .inherited = true},
    {field_choice, 6},
    {field_qualifier, 5},
  [211] =
    {field_attribute, 3},
    {field_choice, 6},
    {field_head, 1},
    {field_qualifier, 5},
  [215] =
    {field_attribute, 3},
    {field_attribute, 4, .inherited = true},
    {field_choice, 6},
    {field_head, 1},
  [219] =
    {field_attribute, 3},
    {field_attribute, 4, .inherited = true},
    {field_head, 1},
    {field_qualifier, 6},
  [223] =
    {field_attribute, 3, .inherited = true},
    {field_choice, 6},
    {field_head, 1},
    {field_qualifier, 5},
  [227] =
    {field_choice, 6},
    {field_head, 1},
    {field_head, 2},
    {field_qualifier, 5},
  [231] =
    {field_attribute, 4},
    {field_choice, 6},
    {field_head, 1},
    {field_head, 2},
  [235] =
    {field_attribute, 4},
    {field_head, 1},
    {field_head, 2},
    {field_qualifier, 6},
  [239] =
    {field_attribute, 4},
    {field_attribute, 5, .inherited = true},
    {field_head, 1},
    {field_head, 2},
  [243] =
    {field_attribute, 4, .inherited = true},
    {field_choice, 6},
    {field_head, 1},
    {field_head, 2},
  [247] =
    {field_attribute, 4, .inherited = true},
    {field_head, 1},
    {field_head, 2},
    {field_qualifier, 6},
  [251] =
    {field_field, 1},
  [252] =
    {field_constructor, 0},
    {field_field, 2},
  [254] =
    {field_constructor, 0},
    {field_field, 2, .inherited = true},
  [256] =
    {field_field, 0, .inherited = true},
    {field_field, 1, .inherited = true},
  [258] =
    {field_key, 1},
    {field_value, 3},
  [260] =
    {field_key, 3},
    {field_relation, 1},
    {field_value, 5},
  [263] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
  [265] =
    {field_argument, 3},
    {field_constructor, 1},
  [267] =
    {field_argument, 3, .inherited = true},
    {field_constructor, 1},
  [269] =
    {field_body, 2},
    {field_body, 3},
    {field_body, 4},
  [272] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_functor, 0},
  [275] =
    {field_body, 4},
    {field_plan, 6},
    {field_subsumed, 0},
    {field_subsumes, 2},
  [279] =
    {field_attribute, 4, .inherited = true},
    {field_name, 1},
    {field_return, 7},
    {field_type, 3},
    {field_type, 4, .inherited = true},
  [284] =
    {field_attribute, 3},
    {field_attribute, 4, .inherited = true},
    {field_name, 1},
    {field_return, 7},
    {field_type, 4, .inherited = true},
  [289] =
    {field_body, 6},
    {field_super, 3},
    {field_super, 4, .inherited = true},
    {field_type, 1},
  [293] =
    {field_attribute, 3},
    {field_attribute, 4, .inherited = true},
    {field_choice, 7},
    {field_head, 1},
    {field_qualifier, 6},
  [298] =
    {field_attribute, 4},
    {field_choice, 7},
    {field_head, 1},
    {field_head, 2},
    {field_qualifier, 6},
  [303] =
    {field_attribute, 4},
    {field_attribute, 5, .inherited = true},
    {field_choice, 7},
    {field_head, 1},
    {field_head, 2},
  [308] =
    {field_attribute, 4},
    {field_attribute, 5, .inherited = true},
    {field_head, 1},
    {field_head, 2},
    {field_qualifier, 7},
  [313] =
    {field_attribute, 4, .inherited = true},
    {field_choice, 7},
    {field_head, 1},
    {field_head, 2},
    {field_qualifier, 6},
  [318] =
    {field_constructor, 0},
    {field_field, 2},
    {field_field, 3, .inherited = true},
  [321] =
    {field_key, 3},
    {field_key, 6, .inherited = true},
    {field_relation, 1},
    {field_value, 5},
    {field_value, 6, .inherited = true},
  [326] =
    {field_key, 4},
    {field_relation, 1},
    {field_relation, 2, .inherited = true},
    {field_value, 6},
  [330] =
    {field_argument, 3},
    {field_argument, 4, .inherited = true},
    {field_constructor, 1},
  [333] =
    {field_expr, 2},
    {field_type, 4},
  [335] =
    {field_aggregator, 0},
    {field_body, 3},
    {field_body, 4},
    {field_body, 5},
    {field_head, 1},
  [340] =
    {field_high, 4},
    {field_low, 2},
  [342] =
    {field_attribute, 4},
    {field_attribute, 5, .inherited = true},
    {field_choice, 8},
    {field_head, 1},
    {field_head, 2},
    {field_qualifier, 7},
  [348] =
    {field_key, 4},
    {field_key, 7, .inherited = true},
    {field_relation, 1},
    {field_relation, 2, .inherited = true},
    {field_value, 6},
    {field_value, 7, .inherited = true},
  [354] =
    {field_number, 1},
  [355] =
    {field_high, 4},
    {field_low, 2},
    {field_step, 6},
  [358] =
    {field_number, 1},
    {field_order, 4},
  [360] =
    {field_order, 1},
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
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
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
  [83] = {.lex_state = 304},
  [84] = {.lex_state = 304},
  [85] = {.lex_state = 301},
  [86] = {.lex_state = 304},
  [87] = {.lex_state = 304},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 304},
  [91] = {.lex_state = 304},
  [92] = {.lex_state = 304},
  [93] = {.lex_state = 301},
  [94] = {.lex_state = 304},
  [95] = {.lex_state = 304},
  [96] = {.lex_state = 304},
  [97] = {.lex_state = 304},
  [98] = {.lex_state = 304},
  [99] = {.lex_state = 304},
  [100] = {.lex_state = 304},
  [101] = {.lex_state = 304},
  [102] = {.lex_state = 304},
  [103] = {.lex_state = 304},
  [104] = {.lex_state = 304},
  [105] = {.lex_state = 304},
  [106] = {.lex_state = 304},
  [107] = {.lex_state = 304},
  [108] = {.lex_state = 304},
  [109] = {.lex_state = 304},
  [110] = {.lex_state = 304},
  [111] = {.lex_state = 304},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 301},
  [115] = {.lex_state = 301},
  [116] = {.lex_state = 301},
  [117] = {.lex_state = 301},
  [118] = {.lex_state = 301},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 301},
  [121] = {.lex_state = 301},
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
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 301},
  [144] = {.lex_state = 301},
  [145] = {.lex_state = 301},
  [146] = {.lex_state = 301},
  [147] = {.lex_state = 302},
  [148] = {.lex_state = 302},
  [149] = {.lex_state = 302},
  [150] = {.lex_state = 301},
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
  [162] = {.lex_state = 301},
  [163] = {.lex_state = 301},
  [164] = {.lex_state = 301},
  [165] = {.lex_state = 302},
  [166] = {.lex_state = 302},
  [167] = {.lex_state = 301},
  [168] = {.lex_state = 301},
  [169] = {.lex_state = 301},
  [170] = {.lex_state = 301},
  [171] = {.lex_state = 301},
  [172] = {.lex_state = 301},
  [173] = {.lex_state = 301},
  [174] = {.lex_state = 301},
  [175] = {.lex_state = 301},
  [176] = {.lex_state = 301},
  [177] = {.lex_state = 301},
  [178] = {.lex_state = 301},
  [179] = {.lex_state = 301},
  [180] = {.lex_state = 301},
  [181] = {.lex_state = 301},
  [182] = {.lex_state = 301},
  [183] = {.lex_state = 301},
  [184] = {.lex_state = 303},
  [185] = {.lex_state = 301},
  [186] = {.lex_state = 303},
  [187] = {.lex_state = 303},
  [188] = {.lex_state = 301},
  [189] = {.lex_state = 301},
  [190] = {.lex_state = 301},
  [191] = {.lex_state = 301},
  [192] = {.lex_state = 301},
  [193] = {.lex_state = 301},
  [194] = {.lex_state = 8},
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
  [209] = {.lex_state = 303},
  [210] = {.lex_state = 8},
  [211] = {.lex_state = 301},
  [212] = {.lex_state = 301},
  [213] = {.lex_state = 8},
  [214] = {.lex_state = 302},
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
  [237] = {.lex_state = 301},
  [238] = {.lex_state = 301},
  [239] = {.lex_state = 301},
  [240] = {.lex_state = 301},
  [241] = {.lex_state = 301},
  [242] = {.lex_state = 301},
  [243] = {.lex_state = 301},
  [244] = {.lex_state = 301},
  [245] = {.lex_state = 301},
  [246] = {.lex_state = 301},
  [247] = {.lex_state = 301},
  [248] = {.lex_state = 301},
  [249] = {.lex_state = 301},
  [250] = {.lex_state = 301},
  [251] = {.lex_state = 301},
  [252] = {.lex_state = 301},
  [253] = {.lex_state = 8},
  [254] = {.lex_state = 303},
  [255] = {.lex_state = 303},
  [256] = {.lex_state = 303},
  [257] = {.lex_state = 303},
  [258] = {.lex_state = 301},
  [259] = {.lex_state = 303},
  [260] = {.lex_state = 8},
  [261] = {.lex_state = 303},
  [262] = {.lex_state = 303},
  [263] = {.lex_state = 301},
  [264] = {.lex_state = 301},
  [265] = {.lex_state = 301},
  [266] = {.lex_state = 301},
  [267] = {.lex_state = 301},
  [268] = {.lex_state = 301},
  [269] = {.lex_state = 301},
  [270] = {.lex_state = 301},
  [271] = {.lex_state = 301},
  [272] = {.lex_state = 301},
  [273] = {.lex_state = 301},
  [274] = {.lex_state = 8},
  [275] = {.lex_state = 301},
  [276] = {.lex_state = 301},
  [277] = {.lex_state = 301},
  [278] = {.lex_state = 301},
  [279] = {.lex_state = 9},
  [280] = {.lex_state = 301},
  [281] = {.lex_state = 301},
  [282] = {.lex_state = 301},
  [283] = {.lex_state = 9},
  [284] = {.lex_state = 9},
  [285] = {.lex_state = 9},
  [286] = {.lex_state = 9},
  [287] = {.lex_state = 9},
  [288] = {.lex_state = 9},
  [289] = {.lex_state = 9},
  [290] = {.lex_state = 9},
  [291] = {.lex_state = 9},
  [292] = {.lex_state = 9},
  [293] = {.lex_state = 9},
  [294] = {.lex_state = 9},
  [295] = {.lex_state = 9},
  [296] = {.lex_state = 9},
  [297] = {.lex_state = 9},
  [298] = {.lex_state = 9},
  [299] = {.lex_state = 301},
  [300] = {.lex_state = 301},
  [301] = {.lex_state = 301},
  [302] = {.lex_state = 4},
  [303] = {.lex_state = 4},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 4},
  [307] = {.lex_state = 301},
  [308] = {.lex_state = 4},
  [309] = {.lex_state = 301},
  [310] = {.lex_state = 301},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 4},
  [314] = {.lex_state = 9},
  [315] = {.lex_state = 4},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 4},
  [318] = {.lex_state = 4},
  [319] = {.lex_state = 4},
  [320] = {.lex_state = 301},
  [321] = {.lex_state = 4},
  [322] = {.lex_state = 4},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 4},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 4},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 4},
  [330] = {.lex_state = 4},
  [331] = {.lex_state = 4},
  [332] = {.lex_state = 301},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 4},
  [335] = {.lex_state = 4},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 301},
  [339] = {.lex_state = 4},
  [340] = {.lex_state = 4},
  [341] = {.lex_state = 4},
  [342] = {.lex_state = 301},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 4},
  [345] = {.lex_state = 301},
  [346] = {.lex_state = 4},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 301},
  [349] = {.lex_state = 4},
  [350] = {.lex_state = 4},
  [351] = {.lex_state = 4},
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
  [368] = {.lex_state = 4},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 3},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 301},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 301},
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
  [393] = {.lex_state = 3},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 4},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 4},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 301},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 3},
  [428] = {.lex_state = 301},
  [429] = {.lex_state = 301},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 301},
  [432] = {.lex_state = 301},
  [433] = {.lex_state = 301},
  [434] = {.lex_state = 301},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 301},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 301},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 301},
  [443] = {.lex_state = 301},
  [444] = {.lex_state = 301},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 301},
  [448] = {.lex_state = 301},
  [449] = {.lex_state = 301},
  [450] = {.lex_state = 301},
  [451] = {.lex_state = 301},
  [452] = {.lex_state = 4},
  [453] = {.lex_state = 4},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 301},
  [457] = {.lex_state = 301},
  [458] = {.lex_state = 301},
  [459] = {.lex_state = 301},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 3},
  [462] = {.lex_state = 301},
  [463] = {.lex_state = 1},
  [464] = {.lex_state = 301},
  [465] = {.lex_state = 3},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 301},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 301},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 301},
  [476] = {.lex_state = 4},
  [477] = {.lex_state = 301},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 301},
  [480] = {.lex_state = 301},
  [481] = {.lex_state = 301},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 301},
  [487] = {.lex_state = 4},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 301},
  [491] = {.lex_state = 301},
  [492] = {.lex_state = 4},
  [493] = {.lex_state = 301},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 301},
  [496] = {.lex_state = 301},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 301},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 301},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 4},
  [504] = {.lex_state = 301},
  [505] = {.lex_state = 301},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 4},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 301},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 315},
  [515] = {.lex_state = 11},
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
    [sym_preprocessor] = STATE(93),
    [sym_block_comment] = STATE(93),
    [sym_line_comment] = STATE(93),
    [sym_pragma] = STATE(93),
    [sym_functor_decl] = STATE(93),
    [sym_component_decl] = STATE(93),
    [sym_component_init] = STATE(93),
    [sym_directive] = STATE(93),
    [sym__directive_qualifier] = STATE(450),
    [sym__rule] = STATE(93),
    [sym_monotonic_rule] = STATE(93),
    [sym_subsumptive_rule] = STATE(93),
    [sym_fact] = STATE(93),
    [sym_atom] = STATE(314),
    [sym_relation_decl] = STATE(93),
    [sym_legacy_type_decl] = STATE(93),
    [sym_type_decl] = STATE(93),
    [sym_qualified_name] = STATE(467),
    [aux_sym_program_repeat1] = STATE(93),
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
    [sym_bool] = STATE(325),
    [sym_disjunction] = STATE(455),
    [sym_negation] = STATE(16),
    [sym_conjunction] = STATE(343),
    [sym__constraint] = STATE(325),
    [sym_match] = STATE(325),
    [sym_contains] = STATE(325),
    [sym_comparison] = STATE(325),
    [sym_atom] = STATE(325),
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
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(113),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(113),
    [sym_binary_op] = STATE(113),
    [sym_qualified_name] = STATE(467),
    [aux_sym_conjunction_repeat1] = STATE(16),
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
    [sym_bool] = STATE(325),
    [sym_disjunction] = STATE(500),
    [sym_negation] = STATE(16),
    [sym_conjunction] = STATE(343),
    [sym__constraint] = STATE(325),
    [sym_match] = STATE(325),
    [sym_contains] = STATE(325),
    [sym_comparison] = STATE(325),
    [sym_atom] = STATE(325),
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
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(119),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(119),
    [sym_binary_op] = STATE(119),
    [sym_qualified_name] = STATE(467),
    [aux_sym_conjunction_repeat1] = STATE(16),
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
    [sym_nil] = ACTIONS(75),
    [sym_anonymous] = ACTIONS(75),
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
    [sym_bool] = STATE(325),
    [sym_disjunction] = STATE(478),
    [sym_negation] = STATE(16),
    [sym_conjunction] = STATE(343),
    [sym__constraint] = STATE(325),
    [sym_match] = STATE(325),
    [sym_contains] = STATE(325),
    [sym_comparison] = STATE(325),
    [sym_atom] = STATE(325),
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
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(119),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(119),
    [sym_binary_op] = STATE(119),
    [sym_qualified_name] = STATE(467),
    [aux_sym_conjunction_repeat1] = STATE(16),
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
    [sym_nil] = ACTIONS(75),
    [sym_anonymous] = ACTIONS(75),
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
    [sym_bool] = STATE(325),
    [sym_disjunction] = STATE(494),
    [sym_negation] = STATE(16),
    [sym_conjunction] = STATE(343),
    [sym__constraint] = STATE(325),
    [sym_match] = STATE(325),
    [sym_contains] = STATE(325),
    [sym_comparison] = STATE(325),
    [sym_atom] = STATE(325),
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
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(113),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(113),
    [sym_binary_op] = STATE(113),
    [sym_qualified_name] = STATE(467),
    [aux_sym_conjunction_repeat1] = STATE(16),
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
    [sym_bool] = STATE(325),
    [sym_disjunction] = STATE(509),
    [sym_negation] = STATE(16),
    [sym_conjunction] = STATE(343),
    [sym__constraint] = STATE(325),
    [sym_match] = STATE(325),
    [sym_contains] = STATE(325),
    [sym_comparison] = STATE(325),
    [sym_atom] = STATE(325),
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
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(113),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(113),
    [sym_binary_op] = STATE(113),
    [sym_qualified_name] = STATE(467),
    [aux_sym_conjunction_repeat1] = STATE(16),
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
    [sym_bool] = STATE(335),
    [sym_disjunction] = STATE(453),
    [sym_negation] = STATE(15),
    [sym_conjunction] = STATE(401),
    [sym__constraint] = STATE(335),
    [sym_match] = STATE(335),
    [sym_contains] = STATE(335),
    [sym_comparison] = STATE(335),
    [sym_atom] = STATE(335),
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
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(122),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(122),
    [sym_binary_op] = STATE(122),
    [sym_qualified_name] = STATE(467),
    [aux_sym_conjunction_repeat1] = STATE(15),
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
  [8] = {
    [sym_bool] = STATE(325),
    [sym_disjunction] = STATE(470),
    [sym_negation] = STATE(16),
    [sym_conjunction] = STATE(343),
    [sym__constraint] = STATE(325),
    [sym_match] = STATE(325),
    [sym_contains] = STATE(325),
    [sym_comparison] = STATE(325),
    [sym_atom] = STATE(325),
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
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(113),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(113),
    [sym_binary_op] = STATE(113),
    [sym_qualified_name] = STATE(467),
    [aux_sym_conjunction_repeat1] = STATE(16),
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
  [9] = {
    [sym_bool] = STATE(325),
    [sym_disjunction] = STATE(511),
    [sym_negation] = STATE(16),
    [sym_conjunction] = STATE(343),
    [sym__constraint] = STATE(325),
    [sym_match] = STATE(325),
    [sym_contains] = STATE(325),
    [sym_comparison] = STATE(325),
    [sym_atom] = STATE(325),
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
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(113),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(113),
    [sym_binary_op] = STATE(113),
    [sym_qualified_name] = STATE(467),
    [aux_sym_conjunction_repeat1] = STATE(16),
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
  [10] = {
    [sym_bool] = STATE(335),
    [sym_disjunction] = STATE(476),
    [sym_negation] = STATE(15),
    [sym_conjunction] = STATE(401),
    [sym__constraint] = STATE(335),
    [sym_match] = STATE(335),
    [sym_contains] = STATE(335),
    [sym_comparison] = STATE(335),
    [sym_atom] = STATE(335),
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
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(122),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(122),
    [sym_binary_op] = STATE(122),
    [sym_qualified_name] = STATE(467),
    [aux_sym_conjunction_repeat1] = STATE(15),
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
    [sym_bool] = STATE(325),
    [sym_disjunction] = STATE(512),
    [sym_negation] = STATE(16),
    [sym_conjunction] = STATE(343),
    [sym__constraint] = STATE(325),
    [sym_match] = STATE(325),
    [sym_contains] = STATE(325),
    [sym_comparison] = STATE(325),
    [sym_atom] = STATE(325),
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
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(113),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(113),
    [sym_binary_op] = STATE(113),
    [sym_qualified_name] = STATE(467),
    [aux_sym_conjunction_repeat1] = STATE(16),
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
    [sym_bool] = STATE(335),
    [sym_disjunction] = STATE(492),
    [sym_negation] = STATE(15),
    [sym_conjunction] = STATE(401),
    [sym__constraint] = STATE(335),
    [sym_match] = STATE(335),
    [sym_contains] = STATE(335),
    [sym_comparison] = STATE(335),
    [sym_atom] = STATE(335),
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
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(122),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(122),
    [sym_binary_op] = STATE(122),
    [sym_qualified_name] = STATE(467),
    [aux_sym_conjunction_repeat1] = STATE(15),
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
  [13] = {
    [sym_bool] = STATE(335),
    [sym_negation] = STATE(15),
    [sym_conjunction] = STATE(339),
    [sym__constraint] = STATE(335),
    [sym_match] = STATE(335),
    [sym_contains] = STATE(335),
    [sym_comparison] = STATE(335),
    [sym_atom] = STATE(335),
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
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(122),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(122),
    [sym_binary_op] = STATE(122),
    [sym_qualified_name] = STATE(467),
    [aux_sym_conjunction_repeat1] = STATE(15),
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
    [sym_bool] = STATE(325),
    [sym_negation] = STATE(16),
    [sym_conjunction] = STATE(339),
    [sym__constraint] = STATE(325),
    [sym_match] = STATE(325),
    [sym_contains] = STATE(325),
    [sym_comparison] = STATE(325),
    [sym_atom] = STATE(325),
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
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(119),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(119),
    [sym_binary_op] = STATE(119),
    [sym_qualified_name] = STATE(467),
    [aux_sym_conjunction_repeat1] = STATE(16),
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
    [sym_nil] = ACTIONS(75),
    [sym_anonymous] = ACTIONS(75),
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
    [sym_bool] = STATE(351),
    [sym_negation] = STATE(44),
    [sym__constraint] = STATE(351),
    [sym_match] = STATE(351),
    [sym_contains] = STATE(351),
    [sym_comparison] = STATE(351),
    [sym_atom] = STATE(351),
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
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(122),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(122),
    [sym_binary_op] = STATE(122),
    [sym_qualified_name] = STATE(467),
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
  [16] = {
    [sym_bool] = STATE(312),
    [sym_negation] = STATE(44),
    [sym__constraint] = STATE(312),
    [sym_match] = STATE(312),
    [sym_contains] = STATE(312),
    [sym_comparison] = STATE(312),
    [sym_atom] = STATE(312),
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
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(119),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(119),
    [sym_binary_op] = STATE(119),
    [sym_qualified_name] = STATE(467),
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
    [sym_nil] = ACTIONS(75),
    [sym_anonymous] = ACTIONS(75),
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
    [sym_bool] = STATE(313),
    [sym_negation] = STATE(18),
    [sym__constraint] = STATE(313),
    [sym_match] = STATE(313),
    [sym_contains] = STATE(313),
    [sym_comparison] = STATE(313),
    [sym_atom] = STATE(313),
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
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(119),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(119),
    [sym_binary_op] = STATE(119),
    [sym_qualified_name] = STATE(467),
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
    [sym_nil] = ACTIONS(75),
    [sym_anonymous] = ACTIONS(75),
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
    [sym_bool] = STATE(318),
    [sym_negation] = STATE(44),
    [sym__constraint] = STATE(318),
    [sym_match] = STATE(318),
    [sym_contains] = STATE(318),
    [sym_comparison] = STATE(318),
    [sym_atom] = STATE(318),
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
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(119),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(119),
    [sym_binary_op] = STATE(119),
    [sym_qualified_name] = STATE(467),
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
    [sym_nil] = ACTIONS(75),
    [sym_anonymous] = ACTIONS(75),
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
    [sym_bool] = STATE(318),
    [sym_negation] = STATE(44),
    [sym__constraint] = STATE(318),
    [sym_match] = STATE(318),
    [sym_contains] = STATE(318),
    [sym_comparison] = STATE(318),
    [sym_atom] = STATE(318),
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
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(122),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(122),
    [sym_binary_op] = STATE(122),
    [sym_qualified_name] = STATE(467),
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
  [20] = {
    [sym_bool] = STATE(313),
    [sym_negation] = STATE(19),
    [sym__constraint] = STATE(313),
    [sym_match] = STATE(313),
    [sym_contains] = STATE(313),
    [sym_comparison] = STATE(313),
    [sym_atom] = STATE(313),
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
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(122),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(122),
    [sym_binary_op] = STATE(122),
    [sym_qualified_name] = STATE(467),
    [aux_sym_conjunction_repeat1] = STATE(19),
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
  [21] = {
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
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(132),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(132),
    [sym_binary_op] = STATE(132),
    [aux_sym_record_constructor_repeat1] = STATE(360),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(91),
    [anon_sym_BANG] = ACTIONS(71),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_RBRACK] = ACTIONS(93),
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
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(131),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(131),
    [sym_binary_op] = STATE(131),
    [aux_sym_match_repeat1] = STATE(417),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_RPAREN] = ACTIONS(101),
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
    [sym_nil] = ACTIONS(103),
    [sym_anonymous] = ACTIONS(103),
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
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(127),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(127),
    [sym_binary_op] = STATE(127),
    [aux_sym_match_repeat1] = STATE(392),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_RPAREN] = ACTIONS(105),
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
    [sym_nil] = ACTIONS(107),
    [sym_anonymous] = ACTIONS(107),
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
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(128),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(128),
    [sym_binary_op] = STATE(128),
    [aux_sym_match_repeat1] = STATE(418),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(99),
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
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(126),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(126),
    [sym_binary_op] = STATE(126),
    [aux_sym_match_repeat1] = STATE(366),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_RPAREN] = ACTIONS(113),
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
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(129),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(129),
    [sym_binary_op] = STATE(129),
    [aux_sym_match_repeat1] = STATE(410),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(99),
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
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(133),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(39),
    [sym_unary_op] = STATE(133),
    [sym_binary_op] = STATE(133),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_BANG] = ACTIONS(121),
    [anon_sym_DOLLAR] = ACTIONS(123),
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
    [anon_sym_bnot] = ACTIONS(127),
    [anon_sym_lnot] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_TILDE] = ACTIONS(121),
    [sym_ident] = ACTIONS(97),
  },
  [28] = {
    [sym__argument] = STATE(141),
    [sym_adt_constructor] = STATE(141),
    [sym_record_constructor] = STATE(141),
    [sym_constant] = STATE(141),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(141),
    [sym_as] = STATE(141),
    [sym_functor_call] = STATE(141),
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(141),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(141),
    [sym_binary_op] = STATE(141),
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
    [sym_nil] = ACTIONS(129),
    [sym_anonymous] = ACTIONS(129),
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
    [sym__argument] = STATE(136),
    [sym_adt_constructor] = STATE(136),
    [sym_record_constructor] = STATE(136),
    [sym_constant] = STATE(136),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(136),
    [sym_as] = STATE(136),
    [sym_functor_call] = STATE(136),
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(136),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(136),
    [sym_binary_op] = STATE(136),
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
    [sym_nil] = ACTIONS(131),
    [sym_anonymous] = ACTIONS(131),
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
    [sym__argument] = STATE(89),
    [sym_adt_constructor] = STATE(89),
    [sym_record_constructor] = STATE(89),
    [sym_constant] = STATE(89),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(89),
    [sym_as] = STATE(89),
    [sym_functor_call] = STATE(89),
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(89),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(89),
    [sym_binary_op] = STATE(89),
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
    [sym_nil] = ACTIONS(133),
    [sym_anonymous] = ACTIONS(133),
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
    [sym__argument] = STATE(69),
    [sym_adt_constructor] = STATE(69),
    [sym_record_constructor] = STATE(69),
    [sym_constant] = STATE(69),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(69),
    [sym_as] = STATE(69),
    [sym_functor_call] = STATE(69),
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(69),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(69),
    [sym_binary_op] = STATE(69),
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
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(97),
  },
  [32] = {
    [sym__argument] = STATE(140),
    [sym_adt_constructor] = STATE(140),
    [sym_record_constructor] = STATE(140),
    [sym_constant] = STATE(140),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(140),
    [sym_as] = STATE(140),
    [sym_functor_call] = STATE(140),
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(140),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(140),
    [sym_binary_op] = STATE(140),
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
    [sym_nil] = ACTIONS(137),
    [sym_anonymous] = ACTIONS(137),
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
  [33] = {
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
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(134),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(39),
    [sym_unary_op] = STATE(134),
    [sym_binary_op] = STATE(134),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_BANG] = ACTIONS(121),
    [anon_sym_DOLLAR] = ACTIONS(123),
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
    [anon_sym_bnot] = ACTIONS(127),
    [anon_sym_lnot] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_TILDE] = ACTIONS(121),
    [sym_ident] = ACTIONS(97),
  },
  [34] = {
    [sym__argument] = STATE(88),
    [sym_adt_constructor] = STATE(88),
    [sym_record_constructor] = STATE(88),
    [sym_constant] = STATE(88),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(88),
    [sym_as] = STATE(88),
    [sym_functor_call] = STATE(88),
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(88),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(88),
    [sym_binary_op] = STATE(88),
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
  [35] = {
    [sym__argument] = STATE(137),
    [sym_adt_constructor] = STATE(137),
    [sym_record_constructor] = STATE(137),
    [sym_constant] = STATE(137),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(137),
    [sym_as] = STATE(137),
    [sym_functor_call] = STATE(137),
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(137),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(137),
    [sym_binary_op] = STATE(137),
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
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(97),
  },
  [36] = {
    [sym__argument] = STATE(138),
    [sym_adt_constructor] = STATE(138),
    [sym_record_constructor] = STATE(138),
    [sym_constant] = STATE(138),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(138),
    [sym_as] = STATE(138),
    [sym_functor_call] = STATE(138),
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(138),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(138),
    [sym_binary_op] = STATE(138),
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
    [anon_sym_bnot] = ACTIONS(69),
    [anon_sym_lnot] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_ident] = ACTIONS(97),
  },
  [37] = {
    [sym__argument] = STATE(139),
    [sym_adt_constructor] = STATE(139),
    [sym_record_constructor] = STATE(139),
    [sym_constant] = STATE(139),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(139),
    [sym_as] = STATE(139),
    [sym_functor_call] = STATE(139),
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(139),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(139),
    [sym_binary_op] = STATE(139),
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
    [sym__argument] = STATE(142),
    [sym_adt_constructor] = STATE(142),
    [sym_record_constructor] = STATE(142),
    [sym_constant] = STATE(142),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(142),
    [sym_as] = STATE(142),
    [sym_functor_call] = STATE(142),
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(142),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(142),
    [sym_binary_op] = STATE(142),
    [anon_sym_LPAREN] = ACTIONS(149),
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
  [39] = {
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
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(130),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(39),
    [sym_unary_op] = STATE(130),
    [sym_binary_op] = STATE(130),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_BANG] = ACTIONS(121),
    [anon_sym_DOLLAR] = ACTIONS(123),
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
    [anon_sym_bnot] = ACTIONS(127),
    [anon_sym_lnot] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_TILDE] = ACTIONS(121),
    [sym_ident] = ACTIONS(97),
  },
  [40] = {
    [sym__argument] = STATE(69),
    [sym_adt_constructor] = STATE(69),
    [sym_record_constructor] = STATE(69),
    [sym_constant] = STATE(69),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(69),
    [sym_as] = STATE(69),
    [sym_functor_call] = STATE(69),
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(69),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(39),
    [sym_unary_op] = STATE(69),
    [sym_binary_op] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_BANG] = ACTIONS(121),
    [anon_sym_DOLLAR] = ACTIONS(123),
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
    [anon_sym_bnot] = ACTIONS(127),
    [anon_sym_lnot] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_TILDE] = ACTIONS(121),
    [sym_ident] = ACTIONS(97),
  },
  [41] = {
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
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(135),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(30),
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
    [sym__argument] = STATE(142),
    [sym_adt_constructor] = STATE(142),
    [sym_record_constructor] = STATE(142),
    [sym_constant] = STATE(142),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(142),
    [sym_as] = STATE(142),
    [sym_functor_call] = STATE(142),
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(142),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(142),
    [sym_binary_op] = STATE(142),
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
  [43] = {
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
    [sym_user_defined_functor] = STATE(460),
    [sym_intrinsic_functor] = STATE(460),
    [sym_aggregator] = STATE(125),
    [sym_range] = STATE(60),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(125),
    [sym_binary_op] = STATE(125),
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
    STATE(48), 1,
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
    ACTIONS(180), 1,
      anon_sym_DOT,
    STATE(48), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(178), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(176), 29,
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
    ACTIONS(174), 1,
      anon_sym_DOT,
    STATE(47), 1,
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
  [367] = 2,
    ACTIONS(193), 9,
      anon_sym_COLON,
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
  [410] = 2,
    ACTIONS(197), 9,
      anon_sym_COLON,
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
  [453] = 2,
    ACTIONS(201), 9,
      anon_sym_COLON,
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
  [496] = 2,
    ACTIONS(178), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(176), 30,
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
  [539] = 3,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 8,
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
  [1676] = 2,
    ACTIONS(315), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(313), 29,
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
  [1718] = 6,
    ACTIONS(321), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(323), 1,
      sym_ident,
    STATE(211), 1,
      sym_choice_domain,
    STATE(96), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(319), 13,
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
  [1767] = 6,
    ACTIONS(321), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(329), 1,
      sym_ident,
    STATE(200), 1,
      sym_choice_domain,
    STATE(111), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(327), 13,
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
  [1816] = 17,
    ACTIONS(331), 1,
      ts_builtin_sym_end,
    ACTIONS(333), 1,
      anon_sym_POUNDline,
    ACTIONS(336), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(339), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(342), 1,
      anon_sym_DOTpragma,
    ACTIONS(345), 1,
      anon_sym_DOTfunctor,
    ACTIONS(348), 1,
      anon_sym_DOTcomp,
    ACTIONS(351), 1,
      anon_sym_DOTinit,
    ACTIONS(357), 1,
      anon_sym_DOTdecl,
    ACTIONS(363), 1,
      anon_sym_DOTtype,
    ACTIONS(366), 1,
      sym_ident,
    STATE(314), 1,
      sym_atom,
    STATE(450), 1,
      sym__directive_qualifier,
    STATE(467), 1,
      sym_qualified_name,
    ACTIONS(360), 2,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
    ACTIONS(354), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(85), 16,
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
  [1887] = 6,
    ACTIONS(321), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(373), 1,
      sym_ident,
    STATE(224), 1,
      sym_choice_domain,
    STATE(94), 2,
      sym__relation_qualifier,
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
    ACTIONS(369), 18,
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
  [1936] = 6,
    ACTIONS(321), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(379), 1,
      sym_ident,
    STATE(223), 1,
      sym_choice_domain,
    STATE(84), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(377), 13,
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
  [1985] = 4,
    ACTIONS(263), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(383), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(261), 12,
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
    ACTIONS(381), 16,
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
  [2030] = 5,
    ACTIONS(387), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(389), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(383), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(385), 10,
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
    ACTIONS(381), 16,
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
  [2077] = 6,
    ACTIONS(321), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(395), 1,
      sym_ident,
    STATE(225), 1,
      sym_choice_domain,
    STATE(109), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(393), 13,
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
  [2126] = 6,
    ACTIONS(321), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(401), 1,
      sym_ident,
    STATE(215), 1,
      sym_choice_domain,
    STATE(103), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(399), 13,
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
    ACTIONS(397), 18,
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
  [2175] = 6,
    ACTIONS(321), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(407), 1,
      sym_ident,
    STATE(198), 1,
      sym_choice_domain,
    STATE(101), 2,
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
  [2224] = 17,
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
    ACTIONS(409), 1,
      ts_builtin_sym_end,
    STATE(314), 1,
      sym_atom,
    STATE(450), 1,
      sym__directive_qualifier,
    STATE(467), 1,
      sym_qualified_name,
    ACTIONS(23), 2,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
    ACTIONS(19), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(85), 16,
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
  [2295] = 6,
    ACTIONS(321), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(413), 1,
      sym_ident,
    STATE(199), 1,
      sym_choice_domain,
    STATE(111), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(327), 13,
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
    ACTIONS(411), 18,
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
  [2344] = 6,
    ACTIONS(321), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(419), 1,
      sym_ident,
    STATE(221), 1,
      sym_choice_domain,
    STATE(106), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(417), 13,
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
    ACTIONS(415), 18,
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
  [2393] = 6,
    ACTIONS(321), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(423), 1,
      sym_ident,
    STATE(242), 1,
      sym_choice_domain,
    STATE(111), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(327), 13,
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
    ACTIONS(421), 18,
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
  [2442] = 6,
    ACTIONS(321), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(427), 1,
      sym_ident,
    STATE(219), 1,
      sym_choice_domain,
    STATE(111), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(327), 13,
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
    ACTIONS(425), 18,
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
  [2491] = 6,
    ACTIONS(321), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(431), 1,
      sym_ident,
    STATE(207), 1,
      sym_choice_domain,
    STATE(111), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(327), 13,
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
  [2540] = 6,
    ACTIONS(321), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(435), 1,
      sym_ident,
    STATE(240), 1,
      sym_choice_domain,
    STATE(111), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(327), 13,
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
  [2589] = 6,
    ACTIONS(321), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(441), 1,
      sym_ident,
    STATE(201), 1,
      sym_choice_domain,
    STATE(99), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(439), 13,
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
    ACTIONS(437), 18,
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
  [2638] = 6,
    ACTIONS(321), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(445), 1,
      sym_ident,
    STATE(247), 1,
      sym_choice_domain,
    STATE(111), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(327), 13,
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
  [2687] = 6,
    ACTIONS(321), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(451), 1,
      sym_ident,
    STATE(251), 1,
      sym_choice_domain,
    STATE(98), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(449), 13,
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
    ACTIONS(447), 18,
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
  [2736] = 6,
    ACTIONS(321), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(455), 1,
      sym_ident,
    STATE(246), 1,
      sym_choice_domain,
    STATE(111), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(327), 13,
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
    ACTIONS(453), 18,
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
  [2785] = 6,
    ACTIONS(321), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(461), 1,
      sym_ident,
    STATE(249), 1,
      sym_choice_domain,
    STATE(97), 2,
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
    ACTIONS(457), 18,
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
  [2834] = 6,
    ACTIONS(321), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(465), 1,
      sym_ident,
    STATE(218), 1,
      sym_choice_domain,
    STATE(111), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(327), 13,
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
    ACTIONS(463), 18,
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
  [2883] = 6,
    ACTIONS(321), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(469), 1,
      sym_ident,
    STATE(202), 1,
      sym_choice_domain,
    STATE(111), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(327), 13,
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
    ACTIONS(467), 18,
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
  [2932] = 6,
    ACTIONS(321), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(475), 1,
      sym_ident,
    STATE(229), 1,
      sym_choice_domain,
    STATE(105), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(473), 13,
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
    ACTIONS(471), 18,
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
  [2981] = 6,
    ACTIONS(321), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(479), 1,
      sym_ident,
    STATE(208), 1,
      sym_choice_domain,
    STATE(111), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(327), 13,
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
    ACTIONS(477), 18,
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
  [3030] = 6,
    ACTIONS(321), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(483), 1,
      sym_ident,
    STATE(245), 1,
      sym_choice_domain,
    STATE(111), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(327), 13,
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
    ACTIONS(481), 18,
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
  [3079] = 6,
    ACTIONS(321), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(489), 1,
      sym_ident,
    STATE(195), 1,
      sym_choice_domain,
    STATE(108), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(487), 13,
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
    ACTIONS(485), 18,
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
  [3128] = 4,
    ACTIONS(496), 1,
      sym_ident,
    STATE(111), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(493), 13,
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
      anon_sym_choice_DASHdomain,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [3172] = 5,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(215), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(213), 23,
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
  [3217] = 6,
    ACTIONS(498), 1,
      anon_sym_RPAREN,
    ACTIONS(389), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(500), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(502), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(383), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(381), 16,
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
  [3261] = 15,
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
    ACTIONS(504), 1,
      anon_sym_DOToverride,
    ACTIONS(506), 1,
      anon_sym_RBRACE,
    ACTIONS(510), 1,
      anon_sym_DOTtype,
    STATE(314), 1,
      sym_atom,
    STATE(442), 1,
      sym__directive_qualifier,
    STATE(467), 1,
      sym_qualified_name,
    ACTIONS(508), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(118), 13,
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
  [3322] = 15,
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
    ACTIONS(504), 1,
      anon_sym_DOToverride,
    ACTIONS(510), 1,
      anon_sym_DOTtype,
    ACTIONS(512), 1,
      anon_sym_RBRACE,
    STATE(314), 1,
      sym_atom,
    STATE(442), 1,
      sym__directive_qualifier,
    STATE(467), 1,
      sym_qualified_name,
    ACTIONS(508), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(117), 13,
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
  [3383] = 15,
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
    ACTIONS(504), 1,
      anon_sym_DOToverride,
    ACTIONS(510), 1,
      anon_sym_DOTtype,
    ACTIONS(514), 1,
      anon_sym_RBRACE,
    STATE(314), 1,
      sym_atom,
    STATE(442), 1,
      sym__directive_qualifier,
    STATE(467), 1,
      sym_qualified_name,
    ACTIONS(508), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(121), 13,
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
  [3444] = 15,
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
    ACTIONS(504), 1,
      anon_sym_DOToverride,
    ACTIONS(510), 1,
      anon_sym_DOTtype,
    ACTIONS(516), 1,
      anon_sym_RBRACE,
    STATE(314), 1,
      sym_atom,
    STATE(442), 1,
      sym__directive_qualifier,
    STATE(467), 1,
      sym_qualified_name,
    ACTIONS(508), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(120), 13,
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
  [3505] = 15,
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
    ACTIONS(504), 1,
      anon_sym_DOToverride,
    ACTIONS(510), 1,
      anon_sym_DOTtype,
    ACTIONS(518), 1,
      anon_sym_RBRACE,
    STATE(314), 1,
      sym_atom,
    STATE(442), 1,
      sym__directive_qualifier,
    STATE(467), 1,
      sym_qualified_name,
    ACTIONS(508), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(120), 13,
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
  [3566] = 5,
    ACTIONS(389), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(500), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(502), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(383), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(381), 16,
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
  [3607] = 15,
    ACTIONS(520), 1,
      anon_sym_POUNDline,
    ACTIONS(523), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(526), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(529), 1,
      anon_sym_DOTcomp,
    ACTIONS(532), 1,
      anon_sym_DOToverride,
    ACTIONS(535), 1,
      anon_sym_RBRACE,
    ACTIONS(537), 1,
      anon_sym_DOTinit,
    ACTIONS(543), 1,
      anon_sym_DOTdecl,
    ACTIONS(546), 1,
      anon_sym_DOTtype,
    ACTIONS(549), 1,
      sym_ident,
    STATE(314), 1,
      sym_atom,
    STATE(442), 1,
      sym__directive_qualifier,
    STATE(467), 1,
      sym_qualified_name,
    ACTIONS(540), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(120), 13,
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
  [3668] = 15,
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
    ACTIONS(504), 1,
      anon_sym_DOToverride,
    ACTIONS(510), 1,
      anon_sym_DOTtype,
    ACTIONS(552), 1,
      anon_sym_RBRACE,
    STATE(314), 1,
      sym_atom,
    STATE(442), 1,
      sym__directive_qualifier,
    STATE(467), 1,
      sym_qualified_name,
    ACTIONS(508), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(120), 13,
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
  [3729] = 5,
    ACTIONS(389), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(554), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(556), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(383), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(381), 16,
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
  [3770] = 3,
    STATE(124), 1,
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
  [3806] = 3,
    STATE(48), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(172), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(170), 22,
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
  [3842] = 4,
    ACTIONS(389), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(558), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(383), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(381), 16,
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
  [3879] = 6,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(560), 1,
      anon_sym_RPAREN,
    STATE(383), 1,
      aux_sym_match_repeat1,
    ACTIONS(389), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(383), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(381), 16,
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
  [3919] = 6,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
    STATE(377), 1,
      aux_sym_match_repeat1,
    ACTIONS(389), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(383), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(381), 16,
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
  [3959] = 6,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    STATE(363), 1,
      aux_sym_match_repeat1,
    ACTIONS(389), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(383), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(381), 16,
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
  [3999] = 6,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
    STATE(371), 1,
      aux_sym_match_repeat1,
    ACTIONS(389), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(383), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(381), 16,
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
  [4039] = 4,
    ACTIONS(570), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(385), 3,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
    ACTIONS(572), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(568), 16,
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
  [4075] = 6,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(574), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      aux_sym_match_repeat1,
    ACTIONS(389), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(383), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(381), 16,
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
  [4115] = 6,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(576), 1,
      anon_sym_RBRACK,
    STATE(422), 1,
      aux_sym_record_constructor_repeat1,
    ACTIONS(389), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(383), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(381), 16,
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
  [4155] = 3,
    ACTIONS(261), 5,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(572), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(568), 16,
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
  [4189] = 4,
    ACTIONS(570), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(558), 3,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
    ACTIONS(572), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(568), 16,
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
  [4225] = 5,
    ACTIONS(578), 1,
      anon_sym_COMMA,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
    ACTIONS(389), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(383), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(381), 16,
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
  [4262] = 4,
    ACTIONS(389), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(582), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(383), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(381), 16,
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
  [4297] = 4,
    ACTIONS(389), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(584), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(383), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(381), 16,
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
  [4332] = 4,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
    ACTIONS(389), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(383), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(381), 16,
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
  [4366] = 4,
    ACTIONS(498), 1,
      anon_sym_RPAREN,
    ACTIONS(389), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(383), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(381), 16,
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
  [4400] = 4,
    ACTIONS(588), 1,
      anon_sym_COMMA,
    ACTIONS(389), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(383), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(381), 16,
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
  [4434] = 4,
    ACTIONS(590), 1,
      anon_sym_COMMA,
    ACTIONS(389), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(383), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(381), 16,
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
  [4468] = 4,
    ACTIONS(592), 1,
      anon_sym_COLON,
    ACTIONS(389), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(383), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(381), 16,
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
  [4502] = 1,
    ACTIONS(594), 23,
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
  [4528] = 2,
    ACTIONS(598), 1,
      anon_sym_LT,
    ACTIONS(596), 22,
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
  [4556] = 1,
    ACTIONS(600), 22,
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
  [4581] = 1,
    ACTIONS(602), 22,
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
  [4606] = 3,
    ACTIONS(604), 1,
      anon_sym_DOT,
    STATE(148), 1,
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
  [4635] = 3,
    ACTIONS(604), 1,
      anon_sym_DOT,
    STATE(149), 1,
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
  [4664] = 3,
    ACTIONS(606), 1,
      anon_sym_DOT,
    STATE(149), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(176), 20,
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
  [4693] = 3,
    ACTIONS(611), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      aux_sym_query_plan_repeat2,
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
  [4721] = 3,
    ACTIONS(615), 1,
      anon_sym_DOTplan,
    STATE(222), 1,
      sym_query_plan,
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
  [4749] = 3,
    ACTIONS(619), 1,
      anon_sym_COMMA,
    STATE(152), 1,
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
  [4777] = 3,
    ACTIONS(611), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(622), 19,
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
  [4805] = 3,
    ACTIONS(611), 1,
      anon_sym_COMMA,
    STATE(169), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(624), 19,
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
  [4833] = 3,
    ACTIONS(628), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(626), 19,
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
  [4861] = 3,
    ACTIONS(628), 1,
      anon_sym_COMMA,
    STATE(152), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(630), 19,
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
  [4889] = 3,
    ACTIONS(628), 1,
      anon_sym_COMMA,
    STATE(152), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(632), 19,
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
  [4917] = 3,
    ACTIONS(628), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(632), 19,
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
  [4945] = 3,
    ACTIONS(615), 1,
      anon_sym_DOTplan,
    STATE(250), 1,
      sym_query_plan,
    ACTIONS(634), 19,
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
  [4973] = 3,
    ACTIONS(615), 1,
      anon_sym_DOTplan,
    STATE(204), 1,
      sym_query_plan,
    ACTIONS(636), 19,
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
  [5001] = 3,
    ACTIONS(640), 1,
      anon_sym_PIPE,
    STATE(163), 1,
      aux_sym_adt_repeat1,
    ACTIONS(638), 19,
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
  [5029] = 1,
    ACTIONS(642), 21,
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
  [5053] = 3,
    ACTIONS(640), 1,
      anon_sym_PIPE,
    STATE(173), 1,
      aux_sym_adt_repeat1,
    ACTIONS(644), 19,
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
  [5081] = 3,
    ACTIONS(628), 1,
      anon_sym_COMMA,
    STATE(152), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(646), 19,
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
  [5109] = 4,
    ACTIONS(604), 1,
      anon_sym_DOT,
    ACTIONS(648), 1,
      anon_sym_LBRACE,
    STATE(148), 1,
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
  [5139] = 2,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(176), 20,
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
  [5165] = 3,
    ACTIONS(611), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(624), 19,
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
  [5193] = 3,
    ACTIONS(611), 1,
      anon_sym_COMMA,
    STATE(167), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(650), 19,
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
  [5221] = 3,
    ACTIONS(611), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(652), 19,
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
  [5249] = 3,
    ACTIONS(611), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(654), 19,
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
  [5277] = 3,
    ACTIONS(628), 1,
      anon_sym_COMMA,
    STATE(156), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(656), 19,
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
  [5305] = 3,
    ACTIONS(611), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(622), 19,
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
  [5333] = 3,
    ACTIONS(660), 1,
      anon_sym_PIPE,
    STATE(173), 1,
      aux_sym_adt_repeat1,
    ACTIONS(658), 19,
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
  [5361] = 3,
    ACTIONS(665), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(663), 19,
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
  [5389] = 1,
    ACTIONS(668), 20,
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
  [5412] = 3,
    ACTIONS(672), 1,
      anon_sym_COMMA,
    STATE(176), 1,
      aux_sym_directive_repeat1,
    ACTIONS(670), 18,
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
  [5439] = 1,
    ACTIONS(675), 20,
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
  [5462] = 1,
    ACTIONS(617), 20,
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
  [5485] = 1,
    ACTIONS(677), 20,
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
  [5508] = 1,
    ACTIONS(679), 20,
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
  [5531] = 1,
    ACTIONS(681), 20,
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
  [5554] = 4,
    ACTIONS(685), 1,
      anon_sym_LPAREN,
    ACTIONS(687), 1,
      anon_sym_COMMA,
    STATE(176), 1,
      aux_sym_directive_repeat1,
    ACTIONS(683), 17,
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
  [5583] = 1,
    ACTIONS(689), 20,
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
  [5606] = 4,
    ACTIONS(691), 1,
      anon_sym_DOT,
    STATE(184), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(178), 2,
      anon_sym_stateful,
      sym_ident,
    ACTIONS(176), 16,
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
  [5635] = 4,
    ACTIONS(687), 1,
      anon_sym_COMMA,
    ACTIONS(696), 1,
      anon_sym_LPAREN,
    STATE(182), 1,
      aux_sym_directive_repeat1,
    ACTIONS(694), 17,
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
  [5664] = 4,
    ACTIONS(698), 1,
      anon_sym_DOT,
    STATE(184), 1,
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
  [5693] = 4,
    ACTIONS(698), 1,
      anon_sym_DOT,
    STATE(186), 1,
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
  [5722] = 1,
    ACTIONS(700), 20,
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
  [5745] = 1,
    ACTIONS(702), 20,
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
  [5768] = 1,
    ACTIONS(704), 20,
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
  [5791] = 1,
    ACTIONS(706), 20,
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
  [5814] = 1,
    ACTIONS(708), 20,
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
  [5837] = 1,
    ACTIONS(710), 20,
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
  [5860] = 3,
    ACTIONS(712), 1,
      anon_sym_DOT,
    STATE(210), 1,
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
  [5886] = 1,
    ACTIONS(714), 19,
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
  [5908] = 1,
    ACTIONS(716), 19,
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
  [5930] = 1,
    ACTIONS(718), 19,
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
  [5952] = 1,
    ACTIONS(720), 19,
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
  [5974] = 1,
    ACTIONS(722), 19,
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
  [5996] = 1,
    ACTIONS(724), 19,
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
  [6018] = 1,
    ACTIONS(726), 19,
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
  [6040] = 1,
    ACTIONS(728), 19,
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
  [6062] = 1,
    ACTIONS(730), 19,
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
  [6084] = 1,
    ACTIONS(732), 19,
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
  [6106] = 1,
    ACTIONS(734), 19,
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
  [6128] = 1,
    ACTIONS(736), 19,
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
    ACTIONS(738), 19,
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
    ACTIONS(740), 19,
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
  [6194] = 2,
    ACTIONS(178), 3,
      anon_sym_stateful,
      anon_sym_DOT,
      sym_ident,
    ACTIONS(176), 16,
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
  [6218] = 3,
    ACTIONS(742), 1,
      anon_sym_DOT,
    STATE(210), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(176), 17,
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
  [6244] = 1,
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
  [6266] = 1,
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
  [6288] = 3,
    ACTIONS(712), 1,
      anon_sym_DOT,
    STATE(194), 1,
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
  [6314] = 3,
    ACTIONS(751), 1,
      anon_sym_EQ,
    ACTIONS(753), 1,
      anon_sym_LT_COLON,
    ACTIONS(749), 17,
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
  [6340] = 1,
    ACTIONS(755), 19,
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
  [6362] = 1,
    ACTIONS(757), 19,
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
  [6384] = 1,
    ACTIONS(759), 19,
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
  [6406] = 1,
    ACTIONS(761), 19,
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
  [6428] = 1,
    ACTIONS(763), 19,
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
  [6450] = 1,
    ACTIONS(765), 19,
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
  [6472] = 1,
    ACTIONS(767), 19,
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
  [6494] = 1,
    ACTIONS(769), 19,
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
  [6516] = 1,
    ACTIONS(771), 19,
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
  [6538] = 1,
    ACTIONS(773), 19,
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
  [6560] = 1,
    ACTIONS(775), 19,
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
  [6582] = 1,
    ACTIONS(777), 19,
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
  [6604] = 1,
    ACTIONS(779), 19,
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
  [6626] = 1,
    ACTIONS(781), 19,
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
  [6648] = 1,
    ACTIONS(783), 19,
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
  [6670] = 1,
    ACTIONS(785), 19,
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
  [6692] = 3,
    ACTIONS(789), 1,
      anon_sym_PIPE,
    STATE(252), 1,
      aux_sym_type_union_repeat1,
    ACTIONS(787), 17,
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
  [6718] = 1,
    ACTIONS(791), 19,
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
  [6740] = 1,
    ACTIONS(793), 19,
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
  [6762] = 1,
    ACTIONS(795), 19,
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
  [6784] = 1,
    ACTIONS(797), 19,
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
  [6806] = 1,
    ACTIONS(799), 19,
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
  [6828] = 1,
    ACTIONS(801), 19,
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
  [6850] = 3,
    ACTIONS(789), 1,
      anon_sym_PIPE,
    STATE(231), 1,
      aux_sym_type_union_repeat1,
    ACTIONS(803), 17,
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
  [6876] = 1,
    ACTIONS(805), 19,
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
  [6898] = 1,
    ACTIONS(807), 19,
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
  [6920] = 1,
    ACTIONS(809), 19,
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
  [6942] = 1,
    ACTIONS(811), 19,
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
  [6964] = 1,
    ACTIONS(813), 19,
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
  [6986] = 1,
    ACTIONS(815), 19,
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
  [7008] = 1,
    ACTIONS(817), 19,
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
  [7030] = 1,
    ACTIONS(819), 19,
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
  [7052] = 1,
    ACTIONS(821), 19,
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
  [7074] = 1,
    ACTIONS(823), 19,
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
  [7096] = 1,
    ACTIONS(825), 19,
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
  [7118] = 1,
    ACTIONS(827), 19,
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
  [7140] = 1,
    ACTIONS(829), 19,
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
  [7162] = 3,
    ACTIONS(831), 1,
      anon_sym_PIPE,
    STATE(252), 1,
      aux_sym_type_union_repeat1,
    ACTIONS(681), 17,
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
  [7188] = 4,
    ACTIONS(648), 1,
      anon_sym_LBRACE,
    ACTIONS(712), 1,
      anon_sym_DOT,
    STATE(194), 1,
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
  [7215] = 3,
    ACTIONS(836), 1,
      anon_sym_stateful,
    ACTIONS(838), 1,
      sym_ident,
    ACTIONS(834), 16,
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
  [7240] = 3,
    ACTIONS(842), 1,
      anon_sym_stateful,
    ACTIONS(844), 1,
      sym_ident,
    ACTIONS(840), 16,
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
  [7265] = 3,
    ACTIONS(848), 1,
      anon_sym_stateful,
    ACTIONS(850), 1,
      sym_ident,
    ACTIONS(846), 16,
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
  [7290] = 3,
    ACTIONS(854), 1,
      anon_sym_stateful,
    ACTIONS(856), 1,
      sym_ident,
    ACTIONS(852), 16,
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
  [7315] = 2,
    ACTIONS(860), 1,
      sym_string,
    ACTIONS(858), 17,
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
  [7338] = 3,
    ACTIONS(864), 1,
      anon_sym_stateful,
    ACTIONS(866), 1,
      sym_ident,
    ACTIONS(862), 16,
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
  [7363] = 2,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(176), 17,
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
  [7386] = 2,
    ACTIONS(868), 2,
      anon_sym_stateful,
      sym_ident,
    ACTIONS(594), 16,
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
  [7409] = 3,
    ACTIONS(872), 1,
      anon_sym_stateful,
    ACTIONS(874), 1,
      sym_ident,
    ACTIONS(870), 16,
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
  [7434] = 1,
    ACTIONS(876), 17,
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
  [7454] = 1,
    ACTIONS(878), 17,
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
  [7474] = 1,
    ACTIONS(880), 17,
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
  [7494] = 1,
    ACTIONS(882), 17,
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
  [7514] = 4,
    ACTIONS(696), 1,
      anon_sym_LPAREN,
    ACTIONS(884), 1,
      anon_sym_COMMA,
    STATE(271), 1,
      aux_sym_directive_repeat1,
    ACTIONS(694), 14,
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
  [7540] = 1,
    ACTIONS(886), 17,
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
  [7560] = 3,
    ACTIONS(888), 1,
      anon_sym_COMMA,
    STATE(269), 1,
      aux_sym_directive_repeat1,
    ACTIONS(670), 15,
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
  [7584] = 1,
    ACTIONS(891), 17,
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
  [7604] = 4,
    ACTIONS(685), 1,
      anon_sym_LPAREN,
    ACTIONS(884), 1,
      anon_sym_COMMA,
    STATE(269), 1,
      aux_sym_directive_repeat1,
    ACTIONS(683), 14,
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
  [7630] = 1,
    ACTIONS(893), 17,
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
  [7650] = 1,
    ACTIONS(895), 17,
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
  [7670] = 3,
    ACTIONS(897), 1,
      anon_sym_EQ,
    ACTIONS(899), 1,
      anon_sym_LT_COLON,
    ACTIONS(749), 14,
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
  [7693] = 3,
    ACTIONS(901), 1,
      anon_sym_PIPE,
    STATE(277), 1,
      aux_sym_type_union_repeat1,
    ACTIONS(787), 14,
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
  [7716] = 3,
    ACTIONS(901), 1,
      anon_sym_PIPE,
    STATE(275), 1,
      aux_sym_type_union_repeat1,
    ACTIONS(803), 14,
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
  [7739] = 3,
    ACTIONS(903), 1,
      anon_sym_PIPE,
    STATE(277), 1,
      aux_sym_type_union_repeat1,
    ACTIONS(681), 14,
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
  [7762] = 1,
    ACTIONS(535), 14,
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
  [7779] = 7,
    ACTIONS(906), 1,
      anon_sym_COMMA,
    ACTIONS(908), 1,
      anon_sym_RPAREN,
    ACTIONS(912), 1,
      sym_ident,
    STATE(376), 1,
      aux_sym_functor_decl_repeat1,
    STATE(380), 1,
      sym_attribute,
    STATE(390), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(910), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7806] = 8,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      sym_unsigned,
    ACTIONS(916), 1,
      aux_sym_float_token1,
    STATE(80), 1,
      sym_decimal,
    ACTIONS(49), 2,
      sym_hex,
      sym_binary,
    ACTIONS(914), 2,
      sym_string,
      sym_ident,
    STATE(79), 2,
      sym_integer,
      sym_float,
    STATE(438), 2,
      sym__directive_value,
      sym_number,
  [7835] = 8,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      sym_unsigned,
    ACTIONS(916), 1,
      aux_sym_float_token1,
    STATE(80), 1,
      sym_decimal,
    ACTIONS(49), 2,
      sym_hex,
      sym_binary,
    ACTIONS(918), 2,
      sym_string,
      sym_ident,
    STATE(79), 2,
      sym_integer,
      sym_float,
    STATE(361), 2,
      sym__directive_value,
      sym_number,
  [7864] = 8,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      sym_unsigned,
    ACTIONS(916), 1,
      aux_sym_float_token1,
    STATE(80), 1,
      sym_decimal,
    ACTIONS(49), 2,
      sym_hex,
      sym_binary,
    ACTIONS(920), 2,
      sym_string,
      sym_ident,
    STATE(79), 2,
      sym_integer,
      sym_float,
    STATE(382), 2,
      sym__directive_value,
      sym_number,
  [7893] = 5,
    ACTIONS(922), 1,
      anon_sym_LBRACK,
    ACTIONS(924), 1,
      sym_ident,
    STATE(161), 1,
      sym__adt_branch,
    STATE(276), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(910), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7914] = 5,
    ACTIONS(922), 1,
      anon_sym_LBRACK,
    ACTIONS(926), 1,
      sym_ident,
    STATE(161), 1,
      sym__adt_branch,
    STATE(238), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(910), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7935] = 4,
    ACTIONS(912), 1,
      sym_ident,
    STATE(441), 1,
      sym_attribute,
    STATE(439), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(910), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7953] = 3,
    ACTIONS(930), 1,
      sym_ident,
    STATE(255), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(928), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7968] = 3,
    ACTIONS(930), 1,
      sym_ident,
    STATE(259), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(928), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7983] = 3,
    ACTIONS(932), 1,
      sym_ident,
    STATE(485), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(910), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7998] = 3,
    ACTIONS(934), 1,
      sym_ident,
    STATE(181), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(910), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [8013] = 3,
    ACTIONS(930), 1,
      sym_ident,
    STATE(254), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(928), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [8028] = 3,
    ACTIONS(936), 1,
      sym_ident,
    STATE(270), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(910), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [8043] = 3,
    ACTIONS(930), 1,
      sym_ident,
    STATE(256), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(928), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [8058] = 3,
    ACTIONS(930), 1,
      sym_ident,
    STATE(262), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(928), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [8073] = 3,
    ACTIONS(936), 1,
      sym_ident,
    STATE(235), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(910), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [8088] = 3,
    ACTIONS(932), 1,
      sym_ident,
    STATE(336), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(910), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [8103] = 3,
    ACTIONS(934), 1,
      sym_ident,
    STATE(235), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(910), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [8118] = 3,
    ACTIONS(936), 1,
      sym_ident,
    STATE(181), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(910), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [8133] = 3,
    ACTIONS(930), 1,
      sym_ident,
    STATE(257), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(928), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [8148] = 2,
    ACTIONS(938), 1,
      sym_ident,
    STATE(226), 6,
      sym_legacy_bare_type_decl,
      sym_subtype,
      sym_type_synonym,
      sym_type_union,
      sym_type_record,
      sym_adt,
  [8160] = 2,
    ACTIONS(940), 1,
      sym_ident,
    STATE(226), 6,
      sym_legacy_bare_type_decl,
      sym_subtype,
      sym_type_synonym,
      sym_type_union,
      sym_type_record,
      sym_adt,
  [8172] = 5,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    ACTIONS(944), 1,
      anon_sym_RPAREN,
    ACTIONS(946), 1,
      sym_ident,
    STATE(394), 1,
      sym_attribute,
    STATE(395), 1,
      aux_sym_relation_decl_repeat2,
  [8188] = 1,
    ACTIONS(948), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8196] = 1,
    ACTIONS(950), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8204] = 3,
    ACTIONS(952), 1,
      anon_sym_COMMA,
    STATE(305), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(954), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [8216] = 3,
    ACTIONS(952), 1,
      anon_sym_COMMA,
    STATE(311), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(956), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [8228] = 1,
    ACTIONS(958), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8236] = 5,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    ACTIONS(946), 1,
      sym_ident,
    ACTIONS(960), 1,
      anon_sym_RPAREN,
    STATE(404), 1,
      sym_attribute,
    STATE(406), 1,
      aux_sym_relation_decl_repeat2,
  [8252] = 1,
    ACTIONS(962), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8260] = 5,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    ACTIONS(946), 1,
      sym_ident,
    ACTIONS(964), 1,
      anon_sym_RPAREN,
    STATE(357), 1,
      aux_sym_relation_decl_repeat2,
    STATE(364), 1,
      sym_attribute,
  [8276] = 5,
    ACTIONS(946), 1,
      sym_ident,
    ACTIONS(966), 1,
      anon_sym_COMMA,
    ACTIONS(968), 1,
      anon_sym_RBRACK,
    STATE(409), 1,
      sym_attribute,
    STATE(413), 1,
      aux_sym_type_record_repeat1,
  [8292] = 3,
    ACTIONS(970), 1,
      anon_sym_COMMA,
    STATE(311), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(973), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [8304] = 3,
    ACTIONS(952), 1,
      anon_sym_COMMA,
    STATE(328), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(975), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [8316] = 1,
    ACTIONS(973), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8324] = 5,
    ACTIONS(977), 1,
      anon_sym_COMMA,
    ACTIONS(979), 1,
      anon_sym_COLON_DASH,
    ACTIONS(981), 1,
      anon_sym_DOT,
    ACTIONS(983), 1,
      anon_sym_LT_EQ,
    STATE(370), 1,
      aux_sym_monotonic_rule_repeat1,
  [8340] = 1,
    ACTIONS(985), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8348] = 3,
    ACTIONS(952), 1,
      anon_sym_COMMA,
    STATE(311), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(975), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [8360] = 4,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(987), 1,
      anon_sym_COLON,
    STATE(47), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(183), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8374] = 1,
    ACTIONS(989), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8382] = 1,
    ACTIONS(991), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8390] = 5,
    ACTIONS(946), 1,
      sym_ident,
    ACTIONS(993), 1,
      anon_sym_COMMA,
    ACTIONS(995), 1,
      anon_sym_RBRACE,
    STATE(358), 1,
      sym_attribute,
    STATE(359), 1,
      aux_sym__adt_branch_repeat1,
  [8406] = 1,
    ACTIONS(997), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8414] = 1,
    ACTIONS(999), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8422] = 3,
    ACTIONS(952), 1,
      anon_sym_COMMA,
    STATE(326), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(1001), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [8434] = 1,
    ACTIONS(1003), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8442] = 3,
    ACTIONS(952), 1,
      anon_sym_COMMA,
    STATE(316), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(1005), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [8454] = 3,
    ACTIONS(952), 1,
      anon_sym_COMMA,
    STATE(311), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(954), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [8466] = 1,
    ACTIONS(1007), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8474] = 3,
    ACTIONS(952), 1,
      anon_sym_COMMA,
    STATE(311), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(1001), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [8486] = 1,
    ACTIONS(1009), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8494] = 3,
    ACTIONS(1011), 1,
      anon_sym_COMMA,
    STATE(344), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(954), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8505] = 3,
    ACTIONS(1011), 1,
      anon_sym_COMMA,
    STATE(330), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(1001), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8516] = 4,
    ACTIONS(27), 1,
      sym_ident,
    ACTIONS(1013), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_atom,
    STATE(467), 1,
      sym_qualified_name,
  [8529] = 3,
    ACTIONS(1017), 1,
      anon_sym_COMMA,
    STATE(333), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(1015), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [8540] = 4,
    ACTIONS(1020), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(1022), 1,
      anon_sym_COMMA,
    ACTIONS(1024), 1,
      anon_sym_RPAREN,
    STATE(407), 1,
      aux_sym_query_plan_repeat1,
  [8553] = 3,
    ACTIONS(1011), 1,
      anon_sym_COMMA,
    STATE(346), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(1005), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8564] = 1,
    ACTIONS(1026), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [8571] = 3,
    ACTIONS(1030), 1,
      anon_sym_SEMI,
    STATE(337), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(1028), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [8582] = 4,
    ACTIONS(27), 1,
      sym_ident,
    ACTIONS(1033), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_atom,
    STATE(467), 1,
      sym_qualified_name,
  [8595] = 1,
    ACTIONS(1028), 4,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8602] = 4,
    ACTIONS(1022), 1,
      anon_sym_COMMA,
    ACTIONS(1035), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(1037), 1,
      anon_sym_RPAREN,
    STATE(420), 1,
      aux_sym_query_plan_repeat1,
  [8615] = 3,
    ACTIONS(1011), 1,
      anon_sym_COMMA,
    STATE(350), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(954), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8626] = 4,
    ACTIONS(1039), 1,
      anon_sym_COMMA,
    ACTIONS(1041), 1,
      anon_sym_RPAREN,
    ACTIONS(1043), 1,
      sym_ident,
    STATE(352), 1,
      aux_sym_directive_repeat2,
  [8639] = 3,
    ACTIONS(1047), 1,
      anon_sym_SEMI,
    STATE(347), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(1045), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [8650] = 3,
    ACTIONS(1049), 1,
      anon_sym_COMMA,
    STATE(344), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(973), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8661] = 4,
    ACTIONS(1052), 1,
      anon_sym_LPAREN,
    ACTIONS(1054), 1,
      anon_sym_COMMA,
    ACTIONS(1056), 1,
      sym_ident,
    STATE(387), 1,
      aux_sym_relation_decl_repeat1,
  [8674] = 3,
    ACTIONS(1011), 1,
      anon_sym_COMMA,
    STATE(344), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(975), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8685] = 3,
    ACTIONS(1047), 1,
      anon_sym_SEMI,
    STATE(337), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(1058), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [8696] = 4,
    ACTIONS(1039), 1,
      anon_sym_COMMA,
    ACTIONS(1060), 1,
      anon_sym_RPAREN,
    ACTIONS(1062), 1,
      sym_ident,
    STATE(354), 1,
      aux_sym_directive_repeat2,
  [8709] = 3,
    ACTIONS(1011), 1,
      anon_sym_COMMA,
    STATE(344), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(1001), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8720] = 3,
    ACTIONS(1011), 1,
      anon_sym_COMMA,
    STATE(344), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(956), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8731] = 3,
    ACTIONS(1011), 1,
      anon_sym_COMMA,
    STATE(349), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(975), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8742] = 3,
    ACTIONS(1039), 1,
      anon_sym_COMMA,
    ACTIONS(1064), 1,
      anon_sym_RPAREN,
    STATE(414), 1,
      aux_sym_directive_repeat2,
  [8752] = 3,
    ACTIONS(1066), 1,
      anon_sym_COMMA,
    ACTIONS(1069), 1,
      anon_sym_RPAREN,
    STATE(353), 1,
      aux_sym_functor_decl_repeat1,
  [8762] = 3,
    ACTIONS(1039), 1,
      anon_sym_COMMA,
    ACTIONS(1071), 1,
      anon_sym_RPAREN,
    STATE(414), 1,
      aux_sym_directive_repeat2,
  [8772] = 3,
    ACTIONS(966), 1,
      anon_sym_COMMA,
    ACTIONS(1073), 1,
      anon_sym_RBRACK,
    STATE(356), 1,
      aux_sym_type_record_repeat1,
  [8782] = 3,
    ACTIONS(1075), 1,
      anon_sym_COMMA,
    ACTIONS(1078), 1,
      anon_sym_RBRACK,
    STATE(356), 1,
      aux_sym_type_record_repeat1,
  [8792] = 3,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    ACTIONS(1080), 1,
      anon_sym_RPAREN,
    STATE(365), 1,
      aux_sym_relation_decl_repeat2,
  [8802] = 3,
    ACTIONS(993), 1,
      anon_sym_COMMA,
    ACTIONS(1082), 1,
      anon_sym_RBRACE,
    STATE(378), 1,
      aux_sym__adt_branch_repeat1,
  [8812] = 3,
    ACTIONS(993), 1,
      anon_sym_COMMA,
    ACTIONS(1084), 1,
      anon_sym_RBRACE,
    STATE(379), 1,
      aux_sym__adt_branch_repeat1,
  [8822] = 3,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(576), 1,
      anon_sym_RBRACK,
    STATE(424), 1,
      aux_sym_record_constructor_repeat1,
  [8832] = 3,
    ACTIONS(1039), 1,
      anon_sym_COMMA,
    ACTIONS(1086), 1,
      anon_sym_RPAREN,
    STATE(381), 1,
      aux_sym_directive_repeat2,
  [8842] = 3,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(1088), 1,
      anon_sym_RPAREN,
    STATE(384), 1,
      aux_sym_match_repeat1,
  [8852] = 3,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(1090), 1,
      anon_sym_RPAREN,
    STATE(384), 1,
      aux_sym_match_repeat1,
  [8862] = 3,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    ACTIONS(1092), 1,
      anon_sym_RPAREN,
    STATE(397), 1,
      aux_sym_relation_decl_repeat2,
  [8872] = 3,
    ACTIONS(1094), 1,
      anon_sym_COMMA,
    ACTIONS(1097), 1,
      anon_sym_RPAREN,
    STATE(365), 1,
      aux_sym_relation_decl_repeat2,
  [8882] = 3,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(1099), 1,
      anon_sym_RPAREN,
    STATE(384), 1,
      aux_sym_match_repeat1,
  [8892] = 3,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    ACTIONS(1101), 1,
      anon_sym_RPAREN,
    STATE(365), 1,
      aux_sym_relation_decl_repeat2,
  [8902] = 3,
    ACTIONS(1058), 1,
      anon_sym_DOT,
    ACTIONS(1103), 1,
      anon_sym_SEMI,
    STATE(419), 1,
      aux_sym_disjunction_repeat1,
  [8912] = 3,
    ACTIONS(1105), 1,
      anon_sym_COMMA,
    ACTIONS(1107), 1,
      anon_sym_LBRACE,
    STATE(391), 1,
      aux_sym_component_decl_repeat1,
  [8922] = 3,
    ACTIONS(977), 1,
      anon_sym_COMMA,
    ACTIONS(1109), 1,
      anon_sym_COLON_DASH,
    STATE(393), 1,
      aux_sym_monotonic_rule_repeat1,
  [8932] = 3,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(1111), 1,
      anon_sym_RPAREN,
    STATE(384), 1,
      aux_sym_match_repeat1,
  [8942] = 3,
    ACTIONS(27), 1,
      sym_ident,
    STATE(461), 1,
      sym_atom,
    STATE(467), 1,
      sym_qualified_name,
  [8952] = 3,
    ACTIONS(1054), 1,
      anon_sym_COMMA,
    ACTIONS(1113), 1,
      anon_sym_RPAREN,
    STATE(333), 1,
      aux_sym_relation_decl_repeat1,
  [8962] = 3,
    ACTIONS(1115), 1,
      anon_sym_COMMA,
    ACTIONS(1117), 1,
      anon_sym_GT,
    STATE(388), 1,
      aux_sym_component_type_repeat1,
  [8972] = 3,
    ACTIONS(27), 1,
      sym_ident,
    STATE(427), 1,
      sym_atom,
    STATE(467), 1,
      sym_qualified_name,
  [8982] = 3,
    ACTIONS(906), 1,
      anon_sym_COMMA,
    ACTIONS(1119), 1,
      anon_sym_RPAREN,
    STATE(353), 1,
      aux_sym_functor_decl_repeat1,
  [8992] = 3,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(1121), 1,
      anon_sym_RPAREN,
    STATE(384), 1,
      aux_sym_match_repeat1,
  [9002] = 3,
    ACTIONS(993), 1,
      anon_sym_COMMA,
    ACTIONS(1123), 1,
      anon_sym_RBRACE,
    STATE(379), 1,
      aux_sym__adt_branch_repeat1,
  [9012] = 3,
    ACTIONS(1125), 1,
      anon_sym_COMMA,
    ACTIONS(1128), 1,
      anon_sym_RBRACE,
    STATE(379), 1,
      aux_sym__adt_branch_repeat1,
  [9022] = 3,
    ACTIONS(906), 1,
      anon_sym_COMMA,
    ACTIONS(1130), 1,
      anon_sym_RPAREN,
    STATE(386), 1,
      aux_sym_functor_decl_repeat1,
  [9032] = 3,
    ACTIONS(1039), 1,
      anon_sym_COMMA,
    ACTIONS(1132), 1,
      anon_sym_RPAREN,
    STATE(414), 1,
      aux_sym_directive_repeat2,
  [9042] = 3,
    ACTIONS(1039), 1,
      anon_sym_COMMA,
    ACTIONS(1134), 1,
      anon_sym_RPAREN,
    STATE(411), 1,
      aux_sym_directive_repeat2,
  [9052] = 3,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(1136), 1,
      anon_sym_RPAREN,
    STATE(384), 1,
      aux_sym_match_repeat1,
  [9062] = 3,
    ACTIONS(1138), 1,
      anon_sym_COMMA,
    ACTIONS(1141), 1,
      anon_sym_RPAREN,
    STATE(384), 1,
      aux_sym_match_repeat1,
  [9072] = 3,
    ACTIONS(906), 1,
      anon_sym_COMMA,
    ACTIONS(1143), 1,
      anon_sym_RPAREN,
    STATE(353), 1,
      aux_sym_functor_decl_repeat1,
  [9082] = 3,
    ACTIONS(906), 1,
      anon_sym_COMMA,
    ACTIONS(1145), 1,
      anon_sym_RPAREN,
    STATE(353), 1,
      aux_sym_functor_decl_repeat1,
  [9092] = 3,
    ACTIONS(1054), 1,
      anon_sym_COMMA,
    ACTIONS(1147), 1,
      anon_sym_LPAREN,
    STATE(333), 1,
      aux_sym_relation_decl_repeat1,
  [9102] = 3,
    ACTIONS(1115), 1,
      anon_sym_COMMA,
    ACTIONS(1149), 1,
      anon_sym_GT,
    STATE(403), 1,
      aux_sym_component_type_repeat1,
  [9112] = 3,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    ACTIONS(1151), 1,
      anon_sym_RPAREN,
    STATE(365), 1,
      aux_sym_relation_decl_repeat2,
  [9122] = 3,
    ACTIONS(906), 1,
      anon_sym_COMMA,
    ACTIONS(1153), 1,
      anon_sym_RPAREN,
    STATE(385), 1,
      aux_sym_functor_decl_repeat1,
  [9132] = 3,
    ACTIONS(1105), 1,
      anon_sym_COMMA,
    ACTIONS(1155), 1,
      anon_sym_LBRACE,
    STATE(399), 1,
      aux_sym_component_decl_repeat1,
  [9142] = 3,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(1157), 1,
      anon_sym_RPAREN,
    STATE(384), 1,
      aux_sym_match_repeat1,
  [9152] = 3,
    ACTIONS(1159), 1,
      anon_sym_COMMA,
    ACTIONS(1162), 1,
      anon_sym_COLON_DASH,
    STATE(393), 1,
      aux_sym_monotonic_rule_repeat1,
  [9162] = 3,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    ACTIONS(1164), 1,
      anon_sym_RPAREN,
    STATE(367), 1,
      aux_sym_relation_decl_repeat2,
  [9172] = 3,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    ACTIONS(1166), 1,
      anon_sym_RPAREN,
    STATE(365), 1,
      aux_sym_relation_decl_repeat2,
  [9182] = 1,
    ACTIONS(1015), 3,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9188] = 3,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    ACTIONS(1168), 1,
      anon_sym_RPAREN,
    STATE(365), 1,
      aux_sym_relation_decl_repeat2,
  [9198] = 3,
    ACTIONS(1054), 1,
      anon_sym_COMMA,
    ACTIONS(1170), 1,
      anon_sym_RPAREN,
    STATE(373), 1,
      aux_sym_relation_decl_repeat1,
  [9208] = 3,
    ACTIONS(1172), 1,
      anon_sym_COMMA,
    ACTIONS(1175), 1,
      anon_sym_LBRACE,
    STATE(399), 1,
      aux_sym_component_decl_repeat1,
  [9218] = 3,
    ACTIONS(1054), 1,
      anon_sym_COMMA,
    ACTIONS(1177), 1,
      anon_sym_LPAREN,
    STATE(333), 1,
      aux_sym_relation_decl_repeat1,
  [9228] = 3,
    ACTIONS(1045), 1,
      anon_sym_DOT,
    ACTIONS(1103), 1,
      anon_sym_SEMI,
    STATE(368), 1,
      aux_sym_disjunction_repeat1,
  [9238] = 3,
    ACTIONS(1054), 1,
      anon_sym_COMMA,
    ACTIONS(1179), 1,
      anon_sym_RPAREN,
    STATE(423), 1,
      aux_sym_relation_decl_repeat1,
  [9248] = 3,
    ACTIONS(1181), 1,
      anon_sym_COMMA,
    ACTIONS(1184), 1,
      anon_sym_GT,
    STATE(403), 1,
      aux_sym_component_type_repeat1,
  [9258] = 3,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    ACTIONS(1186), 1,
      anon_sym_RPAREN,
    STATE(389), 1,
      aux_sym_relation_decl_repeat2,
  [9268] = 3,
    ACTIONS(1022), 1,
      anon_sym_COMMA,
    ACTIONS(1188), 1,
      anon_sym_RPAREN,
    STATE(415), 1,
      aux_sym_query_plan_repeat1,
  [9278] = 3,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    ACTIONS(1190), 1,
      anon_sym_RPAREN,
    STATE(365), 1,
      aux_sym_relation_decl_repeat2,
  [9288] = 3,
    ACTIONS(1022), 1,
      anon_sym_COMMA,
    ACTIONS(1192), 1,
      anon_sym_RPAREN,
    STATE(415), 1,
      aux_sym_query_plan_repeat1,
  [9298] = 3,
    ACTIONS(1022), 1,
      anon_sym_COMMA,
    ACTIONS(1194), 1,
      anon_sym_RPAREN,
    STATE(405), 1,
      aux_sym_query_plan_repeat1,
  [9308] = 3,
    ACTIONS(966), 1,
      anon_sym_COMMA,
    ACTIONS(1196), 1,
      anon_sym_RBRACK,
    STATE(355), 1,
      aux_sym_type_record_repeat1,
  [9318] = 3,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(1198), 1,
      anon_sym_RPAREN,
    STATE(384), 1,
      aux_sym_match_repeat1,
  [9328] = 3,
    ACTIONS(1039), 1,
      anon_sym_COMMA,
    ACTIONS(1200), 1,
      anon_sym_RPAREN,
    STATE(414), 1,
      aux_sym_directive_repeat2,
  [9338] = 3,
    ACTIONS(1054), 1,
      anon_sym_COMMA,
    ACTIONS(1147), 1,
      anon_sym_LPAREN,
    STATE(400), 1,
      aux_sym_relation_decl_repeat1,
  [9348] = 3,
    ACTIONS(966), 1,
      anon_sym_COMMA,
    ACTIONS(1196), 1,
      anon_sym_RBRACK,
    STATE(356), 1,
      aux_sym_type_record_repeat1,
  [9358] = 3,
    ACTIONS(1202), 1,
      anon_sym_COMMA,
    ACTIONS(1205), 1,
      anon_sym_RPAREN,
    STATE(414), 1,
      aux_sym_directive_repeat2,
  [9368] = 3,
    ACTIONS(1207), 1,
      anon_sym_COMMA,
    ACTIONS(1210), 1,
      anon_sym_RPAREN,
    STATE(415), 1,
      aux_sym_query_plan_repeat1,
  [9378] = 3,
    ACTIONS(1022), 1,
      anon_sym_COMMA,
    ACTIONS(1212), 1,
      anon_sym_RPAREN,
    STATE(415), 1,
      aux_sym_query_plan_repeat1,
  [9388] = 3,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(1214), 1,
      anon_sym_RPAREN,
    STATE(384), 1,
      aux_sym_match_repeat1,
  [9398] = 3,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(1216), 1,
      anon_sym_RPAREN,
    STATE(384), 1,
      aux_sym_match_repeat1,
  [9408] = 3,
    ACTIONS(1028), 1,
      anon_sym_DOT,
    ACTIONS(1218), 1,
      anon_sym_SEMI,
    STATE(419), 1,
      aux_sym_disjunction_repeat1,
  [9418] = 3,
    ACTIONS(1022), 1,
      anon_sym_COMMA,
    ACTIONS(1221), 1,
      anon_sym_RPAREN,
    STATE(415), 1,
      aux_sym_query_plan_repeat1,
  [9428] = 3,
    ACTIONS(1022), 1,
      anon_sym_COMMA,
    ACTIONS(1223), 1,
      anon_sym_RPAREN,
    STATE(416), 1,
      aux_sym_query_plan_repeat1,
  [9438] = 3,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(1225), 1,
      anon_sym_RBRACK,
    STATE(424), 1,
      aux_sym_record_constructor_repeat1,
  [9448] = 3,
    ACTIONS(1054), 1,
      anon_sym_COMMA,
    ACTIONS(1227), 1,
      anon_sym_RPAREN,
    STATE(333), 1,
      aux_sym_relation_decl_repeat1,
  [9458] = 3,
    ACTIONS(584), 1,
      anon_sym_RBRACK,
    ACTIONS(1229), 1,
      anon_sym_COMMA,
    STATE(424), 1,
      aux_sym_record_constructor_repeat1,
  [9468] = 2,
    ACTIONS(946), 1,
      sym_ident,
    STATE(435), 1,
      sym_attribute,
  [9475] = 1,
    ACTIONS(1232), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9480] = 1,
    ACTIONS(1162), 2,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
  [9485] = 2,
    ACTIONS(1234), 1,
      anon_sym_COLON,
    ACTIONS(1236), 1,
      anon_sym_LBRACE,
  [9492] = 2,
    ACTIONS(1238), 1,
      sym_ident,
    STATE(177), 1,
      sym__adt_branch,
  [9499] = 1,
    ACTIONS(1078), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9504] = 2,
    ACTIONS(946), 1,
      sym_ident,
    STATE(436), 1,
      sym_attribute,
  [9511] = 2,
    ACTIONS(1240), 1,
      sym_ident,
    STATE(162), 1,
      sym_qualified_name,
  [9518] = 2,
    ACTIONS(1242), 1,
      sym_ident,
    STATE(369), 1,
      sym_component_type,
  [9525] = 2,
    ACTIONS(1244), 1,
      anon_sym_LPAREN,
    ACTIONS(1246), 1,
      sym_ident,
  [9532] = 1,
    ACTIONS(1248), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9537] = 1,
    ACTIONS(1250), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9542] = 2,
    ACTIONS(1242), 1,
      sym_ident,
    STATE(428), 1,
      sym_component_type,
  [9549] = 1,
    ACTIONS(1252), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9554] = 1,
    ACTIONS(1254), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9559] = 2,
    ACTIONS(1256), 1,
      sym_ident,
    STATE(162), 1,
      sym_qualified_name,
  [9566] = 1,
    ACTIONS(1258), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9571] = 2,
    ACTIONS(1256), 1,
      sym_ident,
    STATE(267), 1,
      sym_qualified_name,
  [9578] = 2,
    ACTIONS(1242), 1,
      sym_ident,
    STATE(244), 1,
      sym_component_type,
  [9585] = 2,
    ACTIONS(1242), 1,
      sym_ident,
    STATE(446), 1,
      sym_component_type,
  [9592] = 1,
    ACTIONS(1260), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [9597] = 1,
    ACTIONS(1262), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [9602] = 2,
    ACTIONS(1264), 1,
      anon_sym_LPAREN,
    ACTIONS(1266), 1,
      sym_ident,
  [9609] = 2,
    ACTIONS(1268), 1,
      sym_ident,
    STATE(55), 1,
      sym_qualified_name,
  [9616] = 2,
    ACTIONS(946), 1,
      sym_ident,
    STATE(430), 1,
      sym_attribute,
  [9623] = 2,
    ACTIONS(1240), 1,
      sym_ident,
    STATE(185), 1,
      sym_qualified_name,
  [9630] = 2,
    ACTIONS(27), 1,
      sym_ident,
    STATE(55), 1,
      sym_qualified_name,
  [9637] = 1,
    ACTIONS(1270), 1,
      aux_sym_preprocessor_token1,
  [9641] = 1,
    ACTIONS(1272), 1,
      anon_sym_DOT,
  [9645] = 1,
    ACTIONS(1274), 1,
      anon_sym_LPAREN,
  [9649] = 1,
    ACTIONS(1276), 1,
      anon_sym_RPAREN,
  [9653] = 1,
    ACTIONS(1278), 1,
      sym_ident,
  [9657] = 1,
    ACTIONS(1280), 1,
      anon_sym_COLON,
  [9661] = 1,
    ACTIONS(1282), 1,
      sym_ident,
  [9665] = 1,
    ACTIONS(1284), 1,
      anon_sym_COLON,
  [9669] = 1,
    ACTIONS(1286), 1,
      anon_sym_LPAREN,
  [9673] = 1,
    ACTIONS(1288), 1,
      anon_sym_COLON_DASH,
  [9677] = 1,
    ACTIONS(987), 1,
      anon_sym_COLON,
  [9681] = 1,
    ACTIONS(1290), 1,
      anon_sym_LF,
  [9685] = 1,
    ACTIONS(1292), 1,
      anon_sym_COLON,
  [9689] = 1,
    ACTIONS(1294), 1,
      anon_sym_SLASH,
  [9693] = 1,
    ACTIONS(1296), 1,
      sym_string,
  [9697] = 1,
    ACTIONS(1298), 1,
      anon_sym_LPAREN,
  [9701] = 1,
    ACTIONS(1300), 1,
      sym_ident,
  [9705] = 1,
    ACTIONS(1302), 1,
      ts_builtin_sym_end,
  [9709] = 1,
    ACTIONS(1304), 1,
      anon_sym_RPAREN,
  [9713] = 1,
    ACTIONS(1306), 1,
      anon_sym_LPAREN,
  [9717] = 1,
    ACTIONS(1308), 1,
      anon_sym_LPAREN,
  [9721] = 1,
    ACTIONS(1310), 1,
      sym_ident,
  [9725] = 1,
    ACTIONS(1312), 1,
      anon_sym_EQ,
  [9729] = 1,
    ACTIONS(1314), 1,
      anon_sym_COLON,
  [9733] = 1,
    ACTIONS(1316), 1,
      anon_sym_DOT,
  [9737] = 1,
    ACTIONS(1318), 1,
      anon_sym_COLON,
  [9741] = 1,
    ACTIONS(1320), 1,
      anon_sym_RBRACE,
  [9745] = 1,
    ACTIONS(1322), 1,
      anon_sym_COLON,
  [9749] = 1,
    ACTIONS(1324), 1,
      sym_ident,
  [9753] = 1,
    ACTIONS(1326), 1,
      anon_sym_COLON,
  [9757] = 1,
    ACTIONS(1328), 1,
      anon_sym_EQ,
  [9761] = 1,
    ACTIONS(1330), 1,
      anon_sym_EQ,
  [9765] = 1,
    ACTIONS(1332), 1,
      anon_sym_LPAREN,
  [9769] = 1,
    ACTIONS(1334), 1,
      anon_sym_RPAREN,
  [9773] = 1,
    ACTIONS(1336), 1,
      sym_ident,
  [9777] = 1,
    ACTIONS(1338), 1,
      aux_sym_preprocessor_token1,
  [9781] = 1,
    ACTIONS(1340), 1,
      anon_sym_LPAREN,
  [9785] = 1,
    ACTIONS(1342), 1,
      anon_sym_LPAREN,
  [9789] = 1,
    ACTIONS(1344), 1,
      sym_ident,
  [9793] = 1,
    ACTIONS(1346), 1,
      sym_ident,
  [9797] = 1,
    ACTIONS(1348), 1,
      anon_sym_DOT,
  [9801] = 1,
    ACTIONS(1350), 1,
      sym_ident,
  [9805] = 1,
    ACTIONS(1352), 1,
      anon_sym_RPAREN,
  [9809] = 1,
    ACTIONS(1354), 1,
      sym_ident,
  [9813] = 1,
    ACTIONS(1356), 1,
      anon_sym_COLON,
  [9817] = 1,
    ACTIONS(1358), 1,
      sym_string,
  [9821] = 1,
    ACTIONS(1360), 1,
      anon_sym_LPAREN,
  [9825] = 1,
    ACTIONS(1362), 1,
      anon_sym_COLON,
  [9829] = 1,
    ACTIONS(1364), 1,
      anon_sym_RBRACE,
  [9833] = 1,
    ACTIONS(1366), 1,
      sym_ident,
  [9837] = 1,
    ACTIONS(1368), 1,
      anon_sym_LPAREN,
  [9841] = 1,
    ACTIONS(1370), 1,
      aux_sym_preprocessor_token1,
  [9845] = 1,
    ACTIONS(1372), 1,
      sym_ident,
  [9849] = 1,
    ACTIONS(1374), 1,
      sym_ident,
  [9853] = 1,
    ACTIONS(648), 1,
      anon_sym_LBRACE,
  [9857] = 1,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
  [9861] = 1,
    ACTIONS(1376), 1,
      aux_sym_preprocessor_token1,
  [9865] = 1,
    ACTIONS(1378), 1,
      anon_sym_RPAREN,
  [9869] = 1,
    ACTIONS(1380), 1,
      sym_ident,
  [9873] = 1,
    ACTIONS(1382), 1,
      anon_sym_RPAREN,
  [9877] = 1,
    ACTIONS(1384), 1,
      anon_sym_RPAREN,
  [9881] = 1,
    ACTIONS(1386), 1,
      anon_sym_EQ,
  [9885] = 1,
    ACTIONS(1388), 1,
      aux_sym_line_comment_token1,
  [9889] = 1,
    ACTIONS(1390), 1,
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
  [SMALL_STATE(52)] = 410,
  [SMALL_STATE(53)] = 453,
  [SMALL_STATE(54)] = 496,
  [SMALL_STATE(55)] = 539,
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
  [SMALL_STATE(83)] = 1718,
  [SMALL_STATE(84)] = 1767,
  [SMALL_STATE(85)] = 1816,
  [SMALL_STATE(86)] = 1887,
  [SMALL_STATE(87)] = 1936,
  [SMALL_STATE(88)] = 1985,
  [SMALL_STATE(89)] = 2030,
  [SMALL_STATE(90)] = 2077,
  [SMALL_STATE(91)] = 2126,
  [SMALL_STATE(92)] = 2175,
  [SMALL_STATE(93)] = 2224,
  [SMALL_STATE(94)] = 2295,
  [SMALL_STATE(95)] = 2344,
  [SMALL_STATE(96)] = 2393,
  [SMALL_STATE(97)] = 2442,
  [SMALL_STATE(98)] = 2491,
  [SMALL_STATE(99)] = 2540,
  [SMALL_STATE(100)] = 2589,
  [SMALL_STATE(101)] = 2638,
  [SMALL_STATE(102)] = 2687,
  [SMALL_STATE(103)] = 2736,
  [SMALL_STATE(104)] = 2785,
  [SMALL_STATE(105)] = 2834,
  [SMALL_STATE(106)] = 2883,
  [SMALL_STATE(107)] = 2932,
  [SMALL_STATE(108)] = 2981,
  [SMALL_STATE(109)] = 3030,
  [SMALL_STATE(110)] = 3079,
  [SMALL_STATE(111)] = 3128,
  [SMALL_STATE(112)] = 3172,
  [SMALL_STATE(113)] = 3217,
  [SMALL_STATE(114)] = 3261,
  [SMALL_STATE(115)] = 3322,
  [SMALL_STATE(116)] = 3383,
  [SMALL_STATE(117)] = 3444,
  [SMALL_STATE(118)] = 3505,
  [SMALL_STATE(119)] = 3566,
  [SMALL_STATE(120)] = 3607,
  [SMALL_STATE(121)] = 3668,
  [SMALL_STATE(122)] = 3729,
  [SMALL_STATE(123)] = 3770,
  [SMALL_STATE(124)] = 3806,
  [SMALL_STATE(125)] = 3842,
  [SMALL_STATE(126)] = 3879,
  [SMALL_STATE(127)] = 3919,
  [SMALL_STATE(128)] = 3959,
  [SMALL_STATE(129)] = 3999,
  [SMALL_STATE(130)] = 4039,
  [SMALL_STATE(131)] = 4075,
  [SMALL_STATE(132)] = 4115,
  [SMALL_STATE(133)] = 4155,
  [SMALL_STATE(134)] = 4189,
  [SMALL_STATE(135)] = 4225,
  [SMALL_STATE(136)] = 4262,
  [SMALL_STATE(137)] = 4297,
  [SMALL_STATE(138)] = 4332,
  [SMALL_STATE(139)] = 4366,
  [SMALL_STATE(140)] = 4400,
  [SMALL_STATE(141)] = 4434,
  [SMALL_STATE(142)] = 4468,
  [SMALL_STATE(143)] = 4502,
  [SMALL_STATE(144)] = 4528,
  [SMALL_STATE(145)] = 4556,
  [SMALL_STATE(146)] = 4581,
  [SMALL_STATE(147)] = 4606,
  [SMALL_STATE(148)] = 4635,
  [SMALL_STATE(149)] = 4664,
  [SMALL_STATE(150)] = 4693,
  [SMALL_STATE(151)] = 4721,
  [SMALL_STATE(152)] = 4749,
  [SMALL_STATE(153)] = 4777,
  [SMALL_STATE(154)] = 4805,
  [SMALL_STATE(155)] = 4833,
  [SMALL_STATE(156)] = 4861,
  [SMALL_STATE(157)] = 4889,
  [SMALL_STATE(158)] = 4917,
  [SMALL_STATE(159)] = 4945,
  [SMALL_STATE(160)] = 4973,
  [SMALL_STATE(161)] = 5001,
  [SMALL_STATE(162)] = 5029,
  [SMALL_STATE(163)] = 5053,
  [SMALL_STATE(164)] = 5081,
  [SMALL_STATE(165)] = 5109,
  [SMALL_STATE(166)] = 5139,
  [SMALL_STATE(167)] = 5165,
  [SMALL_STATE(168)] = 5193,
  [SMALL_STATE(169)] = 5221,
  [SMALL_STATE(170)] = 5249,
  [SMALL_STATE(171)] = 5277,
  [SMALL_STATE(172)] = 5305,
  [SMALL_STATE(173)] = 5333,
  [SMALL_STATE(174)] = 5361,
  [SMALL_STATE(175)] = 5389,
  [SMALL_STATE(176)] = 5412,
  [SMALL_STATE(177)] = 5439,
  [SMALL_STATE(178)] = 5462,
  [SMALL_STATE(179)] = 5485,
  [SMALL_STATE(180)] = 5508,
  [SMALL_STATE(181)] = 5531,
  [SMALL_STATE(182)] = 5554,
  [SMALL_STATE(183)] = 5583,
  [SMALL_STATE(184)] = 5606,
  [SMALL_STATE(185)] = 5635,
  [SMALL_STATE(186)] = 5664,
  [SMALL_STATE(187)] = 5693,
  [SMALL_STATE(188)] = 5722,
  [SMALL_STATE(189)] = 5745,
  [SMALL_STATE(190)] = 5768,
  [SMALL_STATE(191)] = 5791,
  [SMALL_STATE(192)] = 5814,
  [SMALL_STATE(193)] = 5837,
  [SMALL_STATE(194)] = 5860,
  [SMALL_STATE(195)] = 5886,
  [SMALL_STATE(196)] = 5908,
  [SMALL_STATE(197)] = 5930,
  [SMALL_STATE(198)] = 5952,
  [SMALL_STATE(199)] = 5974,
  [SMALL_STATE(200)] = 5996,
  [SMALL_STATE(201)] = 6018,
  [SMALL_STATE(202)] = 6040,
  [SMALL_STATE(203)] = 6062,
  [SMALL_STATE(204)] = 6084,
  [SMALL_STATE(205)] = 6106,
  [SMALL_STATE(206)] = 6128,
  [SMALL_STATE(207)] = 6150,
  [SMALL_STATE(208)] = 6172,
  [SMALL_STATE(209)] = 6194,
  [SMALL_STATE(210)] = 6218,
  [SMALL_STATE(211)] = 6244,
  [SMALL_STATE(212)] = 6266,
  [SMALL_STATE(213)] = 6288,
  [SMALL_STATE(214)] = 6314,
  [SMALL_STATE(215)] = 6340,
  [SMALL_STATE(216)] = 6362,
  [SMALL_STATE(217)] = 6384,
  [SMALL_STATE(218)] = 6406,
  [SMALL_STATE(219)] = 6428,
  [SMALL_STATE(220)] = 6450,
  [SMALL_STATE(221)] = 6472,
  [SMALL_STATE(222)] = 6494,
  [SMALL_STATE(223)] = 6516,
  [SMALL_STATE(224)] = 6538,
  [SMALL_STATE(225)] = 6560,
  [SMALL_STATE(226)] = 6582,
  [SMALL_STATE(227)] = 6604,
  [SMALL_STATE(228)] = 6626,
  [SMALL_STATE(229)] = 6648,
  [SMALL_STATE(230)] = 6670,
  [SMALL_STATE(231)] = 6692,
  [SMALL_STATE(232)] = 6718,
  [SMALL_STATE(233)] = 6740,
  [SMALL_STATE(234)] = 6762,
  [SMALL_STATE(235)] = 6784,
  [SMALL_STATE(236)] = 6806,
  [SMALL_STATE(237)] = 6828,
  [SMALL_STATE(238)] = 6850,
  [SMALL_STATE(239)] = 6876,
  [SMALL_STATE(240)] = 6898,
  [SMALL_STATE(241)] = 6920,
  [SMALL_STATE(242)] = 6942,
  [SMALL_STATE(243)] = 6964,
  [SMALL_STATE(244)] = 6986,
  [SMALL_STATE(245)] = 7008,
  [SMALL_STATE(246)] = 7030,
  [SMALL_STATE(247)] = 7052,
  [SMALL_STATE(248)] = 7074,
  [SMALL_STATE(249)] = 7096,
  [SMALL_STATE(250)] = 7118,
  [SMALL_STATE(251)] = 7140,
  [SMALL_STATE(252)] = 7162,
  [SMALL_STATE(253)] = 7188,
  [SMALL_STATE(254)] = 7215,
  [SMALL_STATE(255)] = 7240,
  [SMALL_STATE(256)] = 7265,
  [SMALL_STATE(257)] = 7290,
  [SMALL_STATE(258)] = 7315,
  [SMALL_STATE(259)] = 7338,
  [SMALL_STATE(260)] = 7363,
  [SMALL_STATE(261)] = 7386,
  [SMALL_STATE(262)] = 7409,
  [SMALL_STATE(263)] = 7434,
  [SMALL_STATE(264)] = 7454,
  [SMALL_STATE(265)] = 7474,
  [SMALL_STATE(266)] = 7494,
  [SMALL_STATE(267)] = 7514,
  [SMALL_STATE(268)] = 7540,
  [SMALL_STATE(269)] = 7560,
  [SMALL_STATE(270)] = 7584,
  [SMALL_STATE(271)] = 7604,
  [SMALL_STATE(272)] = 7630,
  [SMALL_STATE(273)] = 7650,
  [SMALL_STATE(274)] = 7670,
  [SMALL_STATE(275)] = 7693,
  [SMALL_STATE(276)] = 7716,
  [SMALL_STATE(277)] = 7739,
  [SMALL_STATE(278)] = 7762,
  [SMALL_STATE(279)] = 7779,
  [SMALL_STATE(280)] = 7806,
  [SMALL_STATE(281)] = 7835,
  [SMALL_STATE(282)] = 7864,
  [SMALL_STATE(283)] = 7893,
  [SMALL_STATE(284)] = 7914,
  [SMALL_STATE(285)] = 7935,
  [SMALL_STATE(286)] = 7953,
  [SMALL_STATE(287)] = 7968,
  [SMALL_STATE(288)] = 7983,
  [SMALL_STATE(289)] = 7998,
  [SMALL_STATE(290)] = 8013,
  [SMALL_STATE(291)] = 8028,
  [SMALL_STATE(292)] = 8043,
  [SMALL_STATE(293)] = 8058,
  [SMALL_STATE(294)] = 8073,
  [SMALL_STATE(295)] = 8088,
  [SMALL_STATE(296)] = 8103,
  [SMALL_STATE(297)] = 8118,
  [SMALL_STATE(298)] = 8133,
  [SMALL_STATE(299)] = 8148,
  [SMALL_STATE(300)] = 8160,
  [SMALL_STATE(301)] = 8172,
  [SMALL_STATE(302)] = 8188,
  [SMALL_STATE(303)] = 8196,
  [SMALL_STATE(304)] = 8204,
  [SMALL_STATE(305)] = 8216,
  [SMALL_STATE(306)] = 8228,
  [SMALL_STATE(307)] = 8236,
  [SMALL_STATE(308)] = 8252,
  [SMALL_STATE(309)] = 8260,
  [SMALL_STATE(310)] = 8276,
  [SMALL_STATE(311)] = 8292,
  [SMALL_STATE(312)] = 8304,
  [SMALL_STATE(313)] = 8316,
  [SMALL_STATE(314)] = 8324,
  [SMALL_STATE(315)] = 8340,
  [SMALL_STATE(316)] = 8348,
  [SMALL_STATE(317)] = 8360,
  [SMALL_STATE(318)] = 8374,
  [SMALL_STATE(319)] = 8382,
  [SMALL_STATE(320)] = 8390,
  [SMALL_STATE(321)] = 8406,
  [SMALL_STATE(322)] = 8414,
  [SMALL_STATE(323)] = 8422,
  [SMALL_STATE(324)] = 8434,
  [SMALL_STATE(325)] = 8442,
  [SMALL_STATE(326)] = 8454,
  [SMALL_STATE(327)] = 8466,
  [SMALL_STATE(328)] = 8474,
  [SMALL_STATE(329)] = 8486,
  [SMALL_STATE(330)] = 8494,
  [SMALL_STATE(331)] = 8505,
  [SMALL_STATE(332)] = 8516,
  [SMALL_STATE(333)] = 8529,
  [SMALL_STATE(334)] = 8540,
  [SMALL_STATE(335)] = 8553,
  [SMALL_STATE(336)] = 8564,
  [SMALL_STATE(337)] = 8571,
  [SMALL_STATE(338)] = 8582,
  [SMALL_STATE(339)] = 8595,
  [SMALL_STATE(340)] = 8602,
  [SMALL_STATE(341)] = 8615,
  [SMALL_STATE(342)] = 8626,
  [SMALL_STATE(343)] = 8639,
  [SMALL_STATE(344)] = 8650,
  [SMALL_STATE(345)] = 8661,
  [SMALL_STATE(346)] = 8674,
  [SMALL_STATE(347)] = 8685,
  [SMALL_STATE(348)] = 8696,
  [SMALL_STATE(349)] = 8709,
  [SMALL_STATE(350)] = 8720,
  [SMALL_STATE(351)] = 8731,
  [SMALL_STATE(352)] = 8742,
  [SMALL_STATE(353)] = 8752,
  [SMALL_STATE(354)] = 8762,
  [SMALL_STATE(355)] = 8772,
  [SMALL_STATE(356)] = 8782,
  [SMALL_STATE(357)] = 8792,
  [SMALL_STATE(358)] = 8802,
  [SMALL_STATE(359)] = 8812,
  [SMALL_STATE(360)] = 8822,
  [SMALL_STATE(361)] = 8832,
  [SMALL_STATE(362)] = 8842,
  [SMALL_STATE(363)] = 8852,
  [SMALL_STATE(364)] = 8862,
  [SMALL_STATE(365)] = 8872,
  [SMALL_STATE(366)] = 8882,
  [SMALL_STATE(367)] = 8892,
  [SMALL_STATE(368)] = 8902,
  [SMALL_STATE(369)] = 8912,
  [SMALL_STATE(370)] = 8922,
  [SMALL_STATE(371)] = 8932,
  [SMALL_STATE(372)] = 8942,
  [SMALL_STATE(373)] = 8952,
  [SMALL_STATE(374)] = 8962,
  [SMALL_STATE(375)] = 8972,
  [SMALL_STATE(376)] = 8982,
  [SMALL_STATE(377)] = 8992,
  [SMALL_STATE(378)] = 9002,
  [SMALL_STATE(379)] = 9012,
  [SMALL_STATE(380)] = 9022,
  [SMALL_STATE(381)] = 9032,
  [SMALL_STATE(382)] = 9042,
  [SMALL_STATE(383)] = 9052,
  [SMALL_STATE(384)] = 9062,
  [SMALL_STATE(385)] = 9072,
  [SMALL_STATE(386)] = 9082,
  [SMALL_STATE(387)] = 9092,
  [SMALL_STATE(388)] = 9102,
  [SMALL_STATE(389)] = 9112,
  [SMALL_STATE(390)] = 9122,
  [SMALL_STATE(391)] = 9132,
  [SMALL_STATE(392)] = 9142,
  [SMALL_STATE(393)] = 9152,
  [SMALL_STATE(394)] = 9162,
  [SMALL_STATE(395)] = 9172,
  [SMALL_STATE(396)] = 9182,
  [SMALL_STATE(397)] = 9188,
  [SMALL_STATE(398)] = 9198,
  [SMALL_STATE(399)] = 9208,
  [SMALL_STATE(400)] = 9218,
  [SMALL_STATE(401)] = 9228,
  [SMALL_STATE(402)] = 9238,
  [SMALL_STATE(403)] = 9248,
  [SMALL_STATE(404)] = 9258,
  [SMALL_STATE(405)] = 9268,
  [SMALL_STATE(406)] = 9278,
  [SMALL_STATE(407)] = 9288,
  [SMALL_STATE(408)] = 9298,
  [SMALL_STATE(409)] = 9308,
  [SMALL_STATE(410)] = 9318,
  [SMALL_STATE(411)] = 9328,
  [SMALL_STATE(412)] = 9338,
  [SMALL_STATE(413)] = 9348,
  [SMALL_STATE(414)] = 9358,
  [SMALL_STATE(415)] = 9368,
  [SMALL_STATE(416)] = 9378,
  [SMALL_STATE(417)] = 9388,
  [SMALL_STATE(418)] = 9398,
  [SMALL_STATE(419)] = 9408,
  [SMALL_STATE(420)] = 9418,
  [SMALL_STATE(421)] = 9428,
  [SMALL_STATE(422)] = 9438,
  [SMALL_STATE(423)] = 9448,
  [SMALL_STATE(424)] = 9458,
  [SMALL_STATE(425)] = 9468,
  [SMALL_STATE(426)] = 9475,
  [SMALL_STATE(427)] = 9480,
  [SMALL_STATE(428)] = 9485,
  [SMALL_STATE(429)] = 9492,
  [SMALL_STATE(430)] = 9499,
  [SMALL_STATE(431)] = 9504,
  [SMALL_STATE(432)] = 9511,
  [SMALL_STATE(433)] = 9518,
  [SMALL_STATE(434)] = 9525,
  [SMALL_STATE(435)] = 9532,
  [SMALL_STATE(436)] = 9537,
  [SMALL_STATE(437)] = 9542,
  [SMALL_STATE(438)] = 9549,
  [SMALL_STATE(439)] = 9554,
  [SMALL_STATE(440)] = 9559,
  [SMALL_STATE(441)] = 9566,
  [SMALL_STATE(442)] = 9571,
  [SMALL_STATE(443)] = 9578,
  [SMALL_STATE(444)] = 9585,
  [SMALL_STATE(445)] = 9592,
  [SMALL_STATE(446)] = 9597,
  [SMALL_STATE(447)] = 9602,
  [SMALL_STATE(448)] = 9609,
  [SMALL_STATE(449)] = 9616,
  [SMALL_STATE(450)] = 9623,
  [SMALL_STATE(451)] = 9630,
  [SMALL_STATE(452)] = 9637,
  [SMALL_STATE(453)] = 9641,
  [SMALL_STATE(454)] = 9645,
  [SMALL_STATE(455)] = 9649,
  [SMALL_STATE(456)] = 9653,
  [SMALL_STATE(457)] = 9657,
  [SMALL_STATE(458)] = 9661,
  [SMALL_STATE(459)] = 9665,
  [SMALL_STATE(460)] = 9669,
  [SMALL_STATE(461)] = 9673,
  [SMALL_STATE(462)] = 9677,
  [SMALL_STATE(463)] = 9681,
  [SMALL_STATE(464)] = 9685,
  [SMALL_STATE(465)] = 9689,
  [SMALL_STATE(466)] = 9693,
  [SMALL_STATE(467)] = 9697,
  [SMALL_STATE(468)] = 9701,
  [SMALL_STATE(469)] = 9705,
  [SMALL_STATE(470)] = 9709,
  [SMALL_STATE(471)] = 9713,
  [SMALL_STATE(472)] = 9717,
  [SMALL_STATE(473)] = 9721,
  [SMALL_STATE(474)] = 9725,
  [SMALL_STATE(475)] = 9729,
  [SMALL_STATE(476)] = 9733,
  [SMALL_STATE(477)] = 9737,
  [SMALL_STATE(478)] = 9741,
  [SMALL_STATE(479)] = 9745,
  [SMALL_STATE(480)] = 9749,
  [SMALL_STATE(481)] = 9753,
  [SMALL_STATE(482)] = 9757,
  [SMALL_STATE(483)] = 9761,
  [SMALL_STATE(484)] = 9765,
  [SMALL_STATE(485)] = 9769,
  [SMALL_STATE(486)] = 9773,
  [SMALL_STATE(487)] = 9777,
  [SMALL_STATE(488)] = 9781,
  [SMALL_STATE(489)] = 9785,
  [SMALL_STATE(490)] = 9789,
  [SMALL_STATE(491)] = 9793,
  [SMALL_STATE(492)] = 9797,
  [SMALL_STATE(493)] = 9801,
  [SMALL_STATE(494)] = 9805,
  [SMALL_STATE(495)] = 9809,
  [SMALL_STATE(496)] = 9813,
  [SMALL_STATE(497)] = 9817,
  [SMALL_STATE(498)] = 9821,
  [SMALL_STATE(499)] = 9825,
  [SMALL_STATE(500)] = 9829,
  [SMALL_STATE(501)] = 9833,
  [SMALL_STATE(502)] = 9837,
  [SMALL_STATE(503)] = 9841,
  [SMALL_STATE(504)] = 9845,
  [SMALL_STATE(505)] = 9849,
  [SMALL_STATE(506)] = 9853,
  [SMALL_STATE(507)] = 9857,
  [SMALL_STATE(508)] = 9861,
  [SMALL_STATE(509)] = 9865,
  [SMALL_STATE(510)] = 9869,
  [SMALL_STATE(511)] = 9873,
  [SMALL_STATE(512)] = 9877,
  [SMALL_STATE(513)] = 9881,
  [SMALL_STATE(514)] = 9885,
  [SMALL_STATE(515)] = 9889,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intrinsic_functor, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(45),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negation, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negation, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(491),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4, .production_id = 27),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 4, .production_id = 27),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4, .production_id = 28),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 4, .production_id = 28),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 3, .production_id = 9),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 3, .production_id = 9),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 5, .production_id = 55),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 5, .production_id = 55),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_constructor, 2, .production_id = 22),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adt_constructor, 2, .production_id = 22),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 8, .production_id = 134),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 8, .production_id = 134),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_constructor, 4),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_constructor, 4),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 4, .production_id = 83),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 4, .production_id = 83),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_constructor, 4, .production_id = 22),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adt_constructor, 4, .production_id = 22),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_constructor, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_constructor, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_call, 4, .production_id = 84),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_call, 4, .production_id = 84),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_call, 4, .production_id = 85),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_call, 4, .production_id = 85),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_call, 3, .production_id = 53),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_call, 3, .production_id = 53),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_constructor, 5, .production_id = 111),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adt_constructor, 5, .production_id = 111),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_constructor, 5, .production_id = 112),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adt_constructor, 5, .production_id = 112),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_op, 3, .production_id = 52),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_op, 3, .production_id = 52),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 5, .production_id = 113),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 5, .production_id = 113),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_call, 5, .production_id = 114),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_call, 5, .production_id = 114),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_constructor, 6, .production_id = 127),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adt_constructor, 6, .production_id = 127),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as, 6, .production_id = 128),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as, 6, .production_id = 128),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 3, .production_id = 50),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 3, .production_id = 50),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 6, .production_id = 129),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 6, .production_id = 129),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 6, .production_id = 130),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 6, .production_id = 130),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_constructor, 3),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_constructor, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 101),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 101),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 39),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 39),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(452),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(515),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(514),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(497),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(490),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(437),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(486),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(450),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(345),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(291),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(300),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(49),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 4, .production_id = 18),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 4, .production_id = 18),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 4, .production_id = 16),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 4, .production_id = 16),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_op, 2, .production_id = 25),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_op, 2, .production_id = 25),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 44),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 44),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 43),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 43),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 42),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 42),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 41),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 41),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 4, .production_id = 15),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 4, .production_id = 15),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 122),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 8, .production_id = 122),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 4, .production_id = 14),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 4, .production_id = 14),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 96),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 96),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 65),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 65),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 37),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 37),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 69),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 69),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 70),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 70),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 72),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 72),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 3),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 3),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 103),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 103),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 36),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 36),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 76),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 76),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 100),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 100),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 74),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 74),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 75),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 75),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [493] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2), SHIFT_REPEAT(111),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(452),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(515),
  [526] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(514),
  [529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(437),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(495),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(486),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(442),
  [543] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(345),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(299),
  [549] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(49),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 3, .production_id = 52),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_repeat1, 2, .production_id = 26),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_constructor_repeat1, 2),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_type, 1, .production_id = 2),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_type, 5, .production_id = 58),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_type, 4, .production_id = 31),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [606] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(480),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 5, .production_id = 133),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsumptive_rule, 6, .production_id = 86),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2), SHIFT_REPEAT(447),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 6, .production_id = 133),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 7, .production_id = 135),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 4),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 3),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 5),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_monotonic_rule, 4, .production_id = 24),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_monotonic_rule, 5, .production_id = 54),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt, 3, .production_id = 19),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2, .production_id = 4),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt, 4, .production_id = 46),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 6),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 6, .production_id = 135),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 8, .production_id = 135),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 7, .production_id = 133),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 2),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_adt_repeat1, 2, .production_id = 79),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_adt_repeat1, 2, .production_id = 79), SHIFT_REPEAT(429),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 2),
  [665] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 2), SHIFT_REPEAT(487),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__adt_branch, 5, .production_id = 124),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2, .production_id = 21),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2, .production_id = 21), SHIFT_REPEAT(432),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_adt_repeat1, 2, .production_id = 78),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__adt_branch, 3, .production_id = 77),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 4),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_union_repeat1, 2),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, .production_id = 8),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__adt_branch, 4, .production_id = 106),
  [691] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(505),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, .production_id = 4),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 7, .production_id = 135),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__adt_branch, 4, .production_id = 105),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 5),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 6, .production_id = 133),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 6, .production_id = 135),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 5, .production_id = 133),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 99),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_decl, 7, .production_id = 92),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_decl, 7, .production_id = 91),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 68),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 67),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 66),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 64),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 63),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_decl, 8, .production_id = 118),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_monotonic_rule, 6, .production_id = 87),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_decl, 6, .production_id = 61),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, .production_id = 4),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 119),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 120),
  [742] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(504),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 121),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2, .production_id = 5),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_legacy_bare_type_decl, 1, .production_id = 2),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 71),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_decl, 5, .production_id = 32),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor, 3, .production_id = 6),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 123),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 33),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_record, 6, .production_id = 45),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 35),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsumptive_rule, 7, .production_id = 115),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 38),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 40),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 73),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 2),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_record, 4, .production_id = 45),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 102),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 3),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_union, 4, .production_id = 47),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 8, .production_id = 125),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, .production_id = 48),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, .production_id = 8),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtype, 3, .production_id = 20),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_record, 5, .production_id = 45),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 8, .production_id = 126),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_synonym, 3, .production_id = 20),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 7, .production_id = 109),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 93),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 9, .production_id = 132),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 9, .production_id = 131),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_decl, 4, .production_id = 10),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_init, 4, .production_id = 11),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 98),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 97),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 94),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 6, .production_id = 80),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 4, .production_id = 13),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_monotonic_rule, 5, .production_id = 51),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 95),
  [831] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_union_repeat1, 2), SHIFT_REPEAT(297),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 7, .production_id = 90),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 7, .production_id = 90),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 7, .production_id = 89),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 7, .production_id = 89),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 7, .production_id = 88),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 7, .production_id = 88),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 116),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 8, .production_id = 116),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 2, .production_id = 1),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 117),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 8, .production_id = 117),
  [868] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 6, .production_id = 56),
  [872] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 6, .production_id = 56),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 3, .production_id = 7),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 7, .production_id = 56),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 9, .production_id = 116),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 9, .production_id = 117),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 88),
  [888] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2, .production_id = 21), SHIFT_REPEAT(440),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_legacy_type_decl, 2, .production_id = 3),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 90),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 89),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [903] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_union_repeat1, 2), SHIFT_REPEAT(289),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [932] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 5),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 4),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 4),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 5),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 5, .production_id = 110),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [970] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(17),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains, 5, .production_id = 110),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 3),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 4, .production_id = 81),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 4, .production_id = 82),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains, 4, .production_id = 81),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 3),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains, 4, .production_id = 82),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains, 3),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 3),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2),
  [1017] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2), SHIFT_REPEAT(458),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 34),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [1030] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(14),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 1),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1049] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(20),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 2),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1066] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functor_decl_repeat1, 2, .production_id = 30), SHIFT_REPEAT(285),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functor_decl_repeat1, 2, .production_id = 30),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1075] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_record_repeat1, 2), SHIFT_REPEAT(449),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_record_repeat1, 2),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1094] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2, .production_id = 17), SHIFT_REPEAT(425),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2, .production_id = 17),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__adt_branch_repeat1, 2, .production_id = 107), SHIFT_REPEAT(431),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__adt_branch_repeat1, 2, .production_id = 107),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_repeat1, 2, .production_id = 29), SHIFT_REPEAT(29),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_repeat1, 2, .production_id = 29),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_monotonic_rule_repeat1, 2), SHIFT_REPEAT(375),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_monotonic_rule_repeat1, 2),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat1, 2, .production_id = 62), SHIFT_REPEAT(444),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat1, 2, .production_id = 62),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_type_repeat1, 2, .production_id = 59), SHIFT_REPEAT(473),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_type_repeat1, 2, .production_id = 59),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2, .production_id = 49), SHIFT_REPEAT(456),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2, .production_id = 49),
  [1207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat1, 2), SHIFT_REPEAT(508),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat1, 2),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(13),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_constructor_repeat1, 2), SHIFT_REPEAT(35),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat1, 2, .production_id = 136),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2, .production_id = 12),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__adt_branch_repeat1, 2, .production_id = 104),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 4, .production_id = 108),
  [1254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functor_decl_repeat1, 2, .production_id = 10),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functor_decl_repeat1, 2, .production_id = 12),
  [1260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_type_repeat1, 2, .production_id = 57),
  [1262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat1, 2, .production_id = 60),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1302] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined_functor, 2, .production_id = 23),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
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
