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
#define STATE_COUNT 515
#define LARGE_STATE_COUNT 44
#define SYMBOL_COUNT 217
#define ALIAS_COUNT 0
#define TOKEN_COUNT 133
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 39
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 134

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
  [aux_sym_adt_constructor_repeat1] = "adt_constructor_repeat1",
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
  [aux_sym_adt_constructor_repeat1] = aux_sym_adt_constructor_repeat1,
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
  [111] = {.index = 265, .length = 3},
  [112] = {.index = 268, .length = 3},
  [113] = {.index = 271, .length = 4},
  [114] = {.index = 275, .length = 5},
  [115] = {.index = 280, .length = 5},
  [116] = {.index = 285, .length = 4},
  [117] = {.index = 289, .length = 5},
  [118] = {.index = 294, .length = 5},
  [119] = {.index = 299, .length = 5},
  [120] = {.index = 304, .length = 5},
  [121] = {.index = 309, .length = 5},
  [122] = {.index = 314, .length = 3},
  [123] = {.index = 317, .length = 5},
  [124] = {.index = 322, .length = 4},
  [125] = {.index = 326, .length = 2},
  [126] = {.index = 328, .length = 5},
  [127] = {.index = 333, .length = 2},
  [128] = {.index = 335, .length = 6},
  [129] = {.index = 341, .length = 6},
  [130] = {.index = 347, .length = 1},
  [131] = {.index = 348, .length = 3},
  [132] = {.index = 351, .length = 2},
  [133] = {.index = 353, .length = 1},
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
    {field_body, 2},
    {field_body, 3},
    {field_body, 4},
  [268] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_functor, 0},
  [271] =
    {field_body, 4},
    {field_plan, 6},
    {field_subsumed, 0},
    {field_subsumes, 2},
  [275] =
    {field_attribute, 4, .inherited = true},
    {field_name, 1},
    {field_return, 7},
    {field_type, 3},
    {field_type, 4, .inherited = true},
  [280] =
    {field_attribute, 3},
    {field_attribute, 4, .inherited = true},
    {field_name, 1},
    {field_return, 7},
    {field_type, 4, .inherited = true},
  [285] =
    {field_body, 6},
    {field_super, 3},
    {field_super, 4, .inherited = true},
    {field_type, 1},
  [289] =
    {field_attribute, 3},
    {field_attribute, 4, .inherited = true},
    {field_choice, 7},
    {field_head, 1},
    {field_qualifier, 6},
  [294] =
    {field_attribute, 4},
    {field_choice, 7},
    {field_head, 1},
    {field_head, 2},
    {field_qualifier, 6},
  [299] =
    {field_attribute, 4},
    {field_attribute, 5, .inherited = true},
    {field_choice, 7},
    {field_head, 1},
    {field_head, 2},
  [304] =
    {field_attribute, 4},
    {field_attribute, 5, .inherited = true},
    {field_head, 1},
    {field_head, 2},
    {field_qualifier, 7},
  [309] =
    {field_attribute, 4, .inherited = true},
    {field_choice, 7},
    {field_head, 1},
    {field_head, 2},
    {field_qualifier, 6},
  [314] =
    {field_constructor, 0},
    {field_field, 2},
    {field_field, 3, .inherited = true},
  [317] =
    {field_key, 3},
    {field_key, 6, .inherited = true},
    {field_relation, 1},
    {field_value, 5},
    {field_value, 6, .inherited = true},
  [322] =
    {field_key, 4},
    {field_relation, 1},
    {field_relation, 2, .inherited = true},
    {field_value, 6},
  [326] =
    {field_expr, 2},
    {field_type, 4},
  [328] =
    {field_aggregator, 0},
    {field_body, 3},
    {field_body, 4},
    {field_body, 5},
    {field_head, 1},
  [333] =
    {field_high, 4},
    {field_low, 2},
  [335] =
    {field_attribute, 4},
    {field_attribute, 5, .inherited = true},
    {field_choice, 8},
    {field_head, 1},
    {field_head, 2},
    {field_qualifier, 7},
  [341] =
    {field_key, 4},
    {field_key, 7, .inherited = true},
    {field_relation, 1},
    {field_relation, 2, .inherited = true},
    {field_value, 6},
    {field_value, 7, .inherited = true},
  [347] =
    {field_number, 1},
  [348] =
    {field_high, 4},
    {field_low, 2},
    {field_step, 6},
  [351] =
    {field_number, 1},
    {field_order, 4},
  [353] =
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
  [82] = {.lex_state = 304},
  [83] = {.lex_state = 304},
  [84] = {.lex_state = 304},
  [85] = {.lex_state = 304},
  [86] = {.lex_state = 301},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 304},
  [89] = {.lex_state = 304},
  [90] = {.lex_state = 4},
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
  [101] = {.lex_state = 304},
  [102] = {.lex_state = 304},
  [103] = {.lex_state = 304},
  [104] = {.lex_state = 304},
  [105] = {.lex_state = 304},
  [106] = {.lex_state = 304},
  [107] = {.lex_state = 301},
  [108] = {.lex_state = 304},
  [109] = {.lex_state = 304},
  [110] = {.lex_state = 304},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 301},
  [115] = {.lex_state = 301},
  [116] = {.lex_state = 301},
  [117] = {.lex_state = 301},
  [118] = {.lex_state = 301},
  [119] = {.lex_state = 301},
  [120] = {.lex_state = 301},
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
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 301},
  [143] = {.lex_state = 301},
  [144] = {.lex_state = 301},
  [145] = {.lex_state = 302},
  [146] = {.lex_state = 302},
  [147] = {.lex_state = 301},
  [148] = {.lex_state = 302},
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
  [159] = {.lex_state = 301},
  [160] = {.lex_state = 302},
  [161] = {.lex_state = 301},
  [162] = {.lex_state = 301},
  [163] = {.lex_state = 301},
  [164] = {.lex_state = 301},
  [165] = {.lex_state = 301},
  [166] = {.lex_state = 301},
  [167] = {.lex_state = 301},
  [168] = {.lex_state = 301},
  [169] = {.lex_state = 302},
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
  [184] = {.lex_state = 301},
  [185] = {.lex_state = 301},
  [186] = {.lex_state = 301},
  [187] = {.lex_state = 301},
  [188] = {.lex_state = 301},
  [189] = {.lex_state = 301},
  [190] = {.lex_state = 303},
  [191] = {.lex_state = 303},
  [192] = {.lex_state = 303},
  [193] = {.lex_state = 301},
  [194] = {.lex_state = 301},
  [195] = {.lex_state = 301},
  [196] = {.lex_state = 303},
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
  [212] = {.lex_state = 8},
  [213] = {.lex_state = 301},
  [214] = {.lex_state = 8},
  [215] = {.lex_state = 301},
  [216] = {.lex_state = 301},
  [217] = {.lex_state = 301},
  [218] = {.lex_state = 301},
  [219] = {.lex_state = 302},
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
  [248] = {.lex_state = 8},
  [249] = {.lex_state = 301},
  [250] = {.lex_state = 301},
  [251] = {.lex_state = 301},
  [252] = {.lex_state = 303},
  [253] = {.lex_state = 303},
  [254] = {.lex_state = 303},
  [255] = {.lex_state = 8},
  [256] = {.lex_state = 8},
  [257] = {.lex_state = 303},
  [258] = {.lex_state = 303},
  [259] = {.lex_state = 301},
  [260] = {.lex_state = 303},
  [261] = {.lex_state = 303},
  [262] = {.lex_state = 301},
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
  [274] = {.lex_state = 301},
  [275] = {.lex_state = 301},
  [276] = {.lex_state = 8},
  [277] = {.lex_state = 301},
  [278] = {.lex_state = 9},
  [279] = {.lex_state = 301},
  [280] = {.lex_state = 301},
  [281] = {.lex_state = 301},
  [282] = {.lex_state = 9},
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
  [298] = {.lex_state = 301},
  [299] = {.lex_state = 301},
  [300] = {.lex_state = 4},
  [301] = {.lex_state = 9},
  [302] = {.lex_state = 301},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 4},
  [305] = {.lex_state = 4},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 301},
  [311] = {.lex_state = 4},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 301},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 4},
  [316] = {.lex_state = 301},
  [317] = {.lex_state = 4},
  [318] = {.lex_state = 4},
  [319] = {.lex_state = 4},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 4},
  [322] = {.lex_state = 4},
  [323] = {.lex_state = 4},
  [324] = {.lex_state = 4},
  [325] = {.lex_state = 4},
  [326] = {.lex_state = 301},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 4},
  [329] = {.lex_state = 4},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 4},
  [332] = {.lex_state = 301},
  [333] = {.lex_state = 301},
  [334] = {.lex_state = 4},
  [335] = {.lex_state = 4},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 4},
  [339] = {.lex_state = 4},
  [340] = {.lex_state = 4},
  [341] = {.lex_state = 0},
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
  [360] = {.lex_state = 301},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 301},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 3},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 4},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 3},
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
  [394] = {.lex_state = 4},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
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
  [414] = {.lex_state = 4},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 301},
  [427] = {.lex_state = 301},
  [428] = {.lex_state = 301},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 301},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 301},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 301},
  [436] = {.lex_state = 301},
  [437] = {.lex_state = 301},
  [438] = {.lex_state = 301},
  [439] = {.lex_state = 301},
  [440] = {.lex_state = 301},
  [441] = {.lex_state = 301},
  [442] = {.lex_state = 301},
  [443] = {.lex_state = 301},
  [444] = {.lex_state = 3},
  [445] = {.lex_state = 301},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 301},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 301},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 4},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 4},
  [456] = {.lex_state = 301},
  [457] = {.lex_state = 301},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 301},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 301},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 3},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 4},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 301},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 301},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 301},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 4},
  [477] = {.lex_state = 301},
  [478] = {.lex_state = 301},
  [479] = {.lex_state = 301},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 301},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 301},
  [485] = {.lex_state = 301},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 301},
  [488] = {.lex_state = 301},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 4},
  [492] = {.lex_state = 301},
  [493] = {.lex_state = 4},
  [494] = {.lex_state = 301},
  [495] = {.lex_state = 301},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 301},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 1},
  [500] = {.lex_state = 3},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 301},
  [504] = {.lex_state = 301},
  [505] = {.lex_state = 301},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 301},
  [508] = {.lex_state = 4},
  [509] = {.lex_state = 301},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 315},
  [514] = {.lex_state = 11},
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
    [sym_program] = STATE(506),
    [sym_preprocessor] = STATE(107),
    [sym_block_comment] = STATE(107),
    [sym_line_comment] = STATE(107),
    [sym_pragma] = STATE(107),
    [sym_functor_decl] = STATE(107),
    [sym_component_decl] = STATE(107),
    [sym_component_init] = STATE(107),
    [sym_directive] = STATE(107),
    [sym__directive_qualifier] = STATE(427),
    [sym__rule] = STATE(107),
    [sym_monotonic_rule] = STATE(107),
    [sym_subsumptive_rule] = STATE(107),
    [sym_fact] = STATE(107),
    [sym_atom] = STATE(301),
    [sym_relation_decl] = STATE(107),
    [sym_legacy_type_decl] = STATE(107),
    [sym_type_decl] = STATE(107),
    [sym_qualified_name] = STATE(502),
    [aux_sym_program_repeat1] = STATE(107),
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
    [sym_bool] = STATE(338),
    [sym_disjunction] = STATE(493),
    [sym_negation] = STATE(19),
    [sym_conjunction] = STATE(377),
    [sym__constraint] = STATE(338),
    [sym_match] = STATE(338),
    [sym_contains] = STATE(338),
    [sym_comparison] = STATE(338),
    [sym_atom] = STATE(338),
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
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(113),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(43),
    [sym_unary_op] = STATE(113),
    [sym_binary_op] = STATE(113),
    [sym_qualified_name] = STATE(502),
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
    [sym_bool] = STATE(312),
    [sym_disjunction] = STATE(511),
    [sym_negation] = STATE(18),
    [sym_conjunction] = STATE(336),
    [sym__constraint] = STATE(312),
    [sym_match] = STATE(312),
    [sym_contains] = STATE(312),
    [sym_comparison] = STATE(312),
    [sym_atom] = STATE(312),
    [sym__argument] = STATE(112),
    [sym_adt_constructor] = STATE(112),
    [sym_record_constructor] = STATE(112),
    [sym_constant] = STATE(112),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(112),
    [sym_as] = STATE(112),
    [sym_functor_call] = STATE(112),
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(112),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(43),
    [sym_unary_op] = STATE(112),
    [sym_binary_op] = STATE(112),
    [sym_qualified_name] = STATE(502),
    [aux_sym_conjunction_repeat1] = STATE(18),
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
    [sym_bool] = STATE(312),
    [sym_disjunction] = STATE(510),
    [sym_negation] = STATE(18),
    [sym_conjunction] = STATE(336),
    [sym__constraint] = STATE(312),
    [sym_match] = STATE(312),
    [sym_contains] = STATE(312),
    [sym_comparison] = STATE(312),
    [sym_atom] = STATE(312),
    [sym__argument] = STATE(112),
    [sym_adt_constructor] = STATE(112),
    [sym_record_constructor] = STATE(112),
    [sym_constant] = STATE(112),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(112),
    [sym_as] = STATE(112),
    [sym_functor_call] = STATE(112),
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(112),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(43),
    [sym_unary_op] = STATE(112),
    [sym_binary_op] = STATE(112),
    [sym_qualified_name] = STATE(502),
    [aux_sym_conjunction_repeat1] = STATE(18),
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
  [5] = {
    [sym_bool] = STATE(312),
    [sym_disjunction] = STATE(458),
    [sym_negation] = STATE(18),
    [sym_conjunction] = STATE(336),
    [sym__constraint] = STATE(312),
    [sym_match] = STATE(312),
    [sym_contains] = STATE(312),
    [sym_comparison] = STATE(312),
    [sym_atom] = STATE(312),
    [sym__argument] = STATE(112),
    [sym_adt_constructor] = STATE(112),
    [sym_record_constructor] = STATE(112),
    [sym_constant] = STATE(112),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(112),
    [sym_as] = STATE(112),
    [sym_functor_call] = STATE(112),
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(112),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(43),
    [sym_unary_op] = STATE(112),
    [sym_binary_op] = STATE(112),
    [sym_qualified_name] = STATE(502),
    [aux_sym_conjunction_repeat1] = STATE(18),
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
    [sym_bool] = STATE(312),
    [sym_disjunction] = STATE(486),
    [sym_negation] = STATE(18),
    [sym_conjunction] = STATE(336),
    [sym__constraint] = STATE(312),
    [sym_match] = STATE(312),
    [sym_contains] = STATE(312),
    [sym_comparison] = STATE(312),
    [sym_atom] = STATE(312),
    [sym__argument] = STATE(112),
    [sym_adt_constructor] = STATE(112),
    [sym_record_constructor] = STATE(112),
    [sym_constant] = STATE(112),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(112),
    [sym_as] = STATE(112),
    [sym_functor_call] = STATE(112),
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(112),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(43),
    [sym_unary_op] = STATE(112),
    [sym_binary_op] = STATE(112),
    [sym_qualified_name] = STATE(502),
    [aux_sym_conjunction_repeat1] = STATE(18),
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
    [sym_bool] = STATE(312),
    [sym_disjunction] = STATE(483),
    [sym_negation] = STATE(18),
    [sym_conjunction] = STATE(336),
    [sym__constraint] = STATE(312),
    [sym_match] = STATE(312),
    [sym_contains] = STATE(312),
    [sym_comparison] = STATE(312),
    [sym_atom] = STATE(312),
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
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(121),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(43),
    [sym_unary_op] = STATE(121),
    [sym_binary_op] = STATE(121),
    [sym_qualified_name] = STATE(502),
    [aux_sym_conjunction_repeat1] = STATE(18),
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
  [8] = {
    [sym_bool] = STATE(312),
    [sym_disjunction] = STATE(480),
    [sym_negation] = STATE(18),
    [sym_conjunction] = STATE(336),
    [sym__constraint] = STATE(312),
    [sym_match] = STATE(312),
    [sym_contains] = STATE(312),
    [sym_comparison] = STATE(312),
    [sym_atom] = STATE(312),
    [sym__argument] = STATE(112),
    [sym_adt_constructor] = STATE(112),
    [sym_record_constructor] = STATE(112),
    [sym_constant] = STATE(112),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(112),
    [sym_as] = STATE(112),
    [sym_functor_call] = STATE(112),
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(112),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(43),
    [sym_unary_op] = STATE(112),
    [sym_binary_op] = STATE(112),
    [sym_qualified_name] = STATE(502),
    [aux_sym_conjunction_repeat1] = STATE(18),
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
    [sym_bool] = STATE(312),
    [sym_disjunction] = STATE(461),
    [sym_negation] = STATE(18),
    [sym_conjunction] = STATE(336),
    [sym__constraint] = STATE(312),
    [sym_match] = STATE(312),
    [sym_contains] = STATE(312),
    [sym_comparison] = STATE(312),
    [sym_atom] = STATE(312),
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
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(121),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(43),
    [sym_unary_op] = STATE(121),
    [sym_binary_op] = STATE(121),
    [sym_qualified_name] = STATE(502),
    [aux_sym_conjunction_repeat1] = STATE(18),
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
  [10] = {
    [sym_bool] = STATE(338),
    [sym_disjunction] = STATE(466),
    [sym_negation] = STATE(19),
    [sym_conjunction] = STATE(377),
    [sym__constraint] = STATE(338),
    [sym_match] = STATE(338),
    [sym_contains] = STATE(338),
    [sym_comparison] = STATE(338),
    [sym_atom] = STATE(338),
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
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(113),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(43),
    [sym_unary_op] = STATE(113),
    [sym_binary_op] = STATE(113),
    [sym_qualified_name] = STATE(502),
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
  [11] = {
    [sym_bool] = STATE(338),
    [sym_disjunction] = STATE(455),
    [sym_negation] = STATE(19),
    [sym_conjunction] = STATE(377),
    [sym__constraint] = STATE(338),
    [sym_match] = STATE(338),
    [sym_contains] = STATE(338),
    [sym_comparison] = STATE(338),
    [sym_atom] = STATE(338),
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
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(113),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(43),
    [sym_unary_op] = STATE(113),
    [sym_binary_op] = STATE(113),
    [sym_qualified_name] = STATE(502),
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
    [sym_bool] = STATE(312),
    [sym_disjunction] = STATE(454),
    [sym_negation] = STATE(18),
    [sym_conjunction] = STATE(336),
    [sym__constraint] = STATE(312),
    [sym_match] = STATE(312),
    [sym_contains] = STATE(312),
    [sym_comparison] = STATE(312),
    [sym_atom] = STATE(312),
    [sym__argument] = STATE(112),
    [sym_adt_constructor] = STATE(112),
    [sym_record_constructor] = STATE(112),
    [sym_constant] = STATE(112),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(112),
    [sym_as] = STATE(112),
    [sym_functor_call] = STATE(112),
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(112),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(43),
    [sym_unary_op] = STATE(112),
    [sym_binary_op] = STATE(112),
    [sym_qualified_name] = STATE(502),
    [aux_sym_conjunction_repeat1] = STATE(18),
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
  [13] = {
    [sym_bool] = STATE(312),
    [sym_negation] = STATE(18),
    [sym_conjunction] = STATE(335),
    [sym__constraint] = STATE(312),
    [sym_match] = STATE(312),
    [sym_contains] = STATE(312),
    [sym_comparison] = STATE(312),
    [sym_atom] = STATE(312),
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
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(121),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(43),
    [sym_unary_op] = STATE(121),
    [sym_binary_op] = STATE(121),
    [sym_qualified_name] = STATE(502),
    [aux_sym_conjunction_repeat1] = STATE(18),
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
    [sym_bool] = STATE(338),
    [sym_negation] = STATE(19),
    [sym_conjunction] = STATE(335),
    [sym__constraint] = STATE(338),
    [sym_match] = STATE(338),
    [sym_contains] = STATE(338),
    [sym_comparison] = STATE(338),
    [sym_atom] = STATE(338),
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
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(113),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(43),
    [sym_unary_op] = STATE(113),
    [sym_binary_op] = STATE(113),
    [sym_qualified_name] = STATE(502),
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
  [15] = {
    [sym_bool] = STATE(315),
    [sym_negation] = STATE(44),
    [sym__constraint] = STATE(315),
    [sym_match] = STATE(315),
    [sym_contains] = STATE(315),
    [sym_comparison] = STATE(315),
    [sym_atom] = STATE(315),
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
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(113),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(43),
    [sym_unary_op] = STATE(113),
    [sym_binary_op] = STATE(113),
    [sym_qualified_name] = STATE(502),
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
    [sym_bool] = STATE(305),
    [sym_negation] = STATE(20),
    [sym__constraint] = STATE(305),
    [sym_match] = STATE(305),
    [sym_contains] = STATE(305),
    [sym_comparison] = STATE(305),
    [sym_atom] = STATE(305),
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
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(121),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(43),
    [sym_unary_op] = STATE(121),
    [sym_binary_op] = STATE(121),
    [sym_qualified_name] = STATE(502),
    [aux_sym_conjunction_repeat1] = STATE(20),
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
  [17] = {
    [sym_bool] = STATE(305),
    [sym_negation] = STATE(15),
    [sym__constraint] = STATE(305),
    [sym_match] = STATE(305),
    [sym_contains] = STATE(305),
    [sym_comparison] = STATE(305),
    [sym_atom] = STATE(305),
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
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(113),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(43),
    [sym_unary_op] = STATE(113),
    [sym_binary_op] = STATE(113),
    [sym_qualified_name] = STATE(502),
    [aux_sym_conjunction_repeat1] = STATE(15),
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
  [18] = {
    [sym_bool] = STATE(308),
    [sym_negation] = STATE(44),
    [sym__constraint] = STATE(308),
    [sym_match] = STATE(308),
    [sym_contains] = STATE(308),
    [sym_comparison] = STATE(308),
    [sym_atom] = STATE(308),
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
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(121),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(43),
    [sym_unary_op] = STATE(121),
    [sym_binary_op] = STATE(121),
    [sym_qualified_name] = STATE(502),
    [aux_sym_conjunction_repeat1] = STATE(44),
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
  [19] = {
    [sym_bool] = STATE(329),
    [sym_negation] = STATE(44),
    [sym__constraint] = STATE(329),
    [sym_match] = STATE(329),
    [sym_contains] = STATE(329),
    [sym_comparison] = STATE(329),
    [sym_atom] = STATE(329),
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
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(113),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(43),
    [sym_unary_op] = STATE(113),
    [sym_binary_op] = STATE(113),
    [sym_qualified_name] = STATE(502),
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
    [sym_bool] = STATE(315),
    [sym_negation] = STATE(44),
    [sym__constraint] = STATE(315),
    [sym_match] = STATE(315),
    [sym_contains] = STATE(315),
    [sym_comparison] = STATE(315),
    [sym_atom] = STATE(315),
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
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(121),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(43),
    [sym_unary_op] = STATE(121),
    [sym_binary_op] = STATE(121),
    [sym_qualified_name] = STATE(502),
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
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(132),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(43),
    [sym_unary_op] = STATE(132),
    [sym_binary_op] = STATE(132),
    [aux_sym_match_repeat1] = STATE(384),
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
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(131),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(43),
    [sym_unary_op] = STATE(131),
    [sym_binary_op] = STATE(131),
    [aux_sym_match_repeat1] = STATE(398),
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
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(134),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(43),
    [sym_unary_op] = STATE(134),
    [sym_binary_op] = STATE(134),
    [aux_sym_match_repeat1] = STATE(397),
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
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(129),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(43),
    [sym_unary_op] = STATE(129),
    [sym_binary_op] = STATE(129),
    [aux_sym_adt_constructor_repeat1] = STATE(370),
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
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(128),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(43),
    [sym_unary_op] = STATE(128),
    [sym_binary_op] = STATE(128),
    [aux_sym_adt_constructor_repeat1] = STATE(412),
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
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(126),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(43),
    [sym_unary_op] = STATE(126),
    [sym_binary_op] = STATE(126),
    [aux_sym_match_repeat1] = STATE(388),
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
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(138),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(43),
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
    [sym__argument] = STATE(87),
    [sym_adt_constructor] = STATE(87),
    [sym_record_constructor] = STATE(87),
    [sym_constant] = STATE(87),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(87),
    [sym_as] = STATE(87),
    [sym_functor_call] = STATE(87),
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(87),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(43),
    [sym_unary_op] = STATE(87),
    [sym_binary_op] = STATE(87),
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
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(124),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(43),
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
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(130),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(130),
    [sym_binary_op] = STATE(130),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_DOLLAR] = ACTIONS(129),
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
    [anon_sym_bnot] = ACTIONS(133),
    [anon_sym_lnot] = ACTIONS(133),
    [anon_sym_DASH] = ACTIONS(133),
    [anon_sym_TILDE] = ACTIONS(127),
    [sym_ident] = ACTIONS(97),
  },
  [31] = {
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
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(140),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(43),
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
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(135),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(43),
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
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(140),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(43),
    [sym_unary_op] = STATE(140),
    [sym_binary_op] = STATE(140),
    [anon_sym_LPAREN] = ACTIONS(139),
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
  [34] = {
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
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(137),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(43),
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
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(127),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(127),
    [sym_binary_op] = STATE(127),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_DOLLAR] = ACTIONS(129),
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
    [anon_sym_bnot] = ACTIONS(133),
    [anon_sym_lnot] = ACTIONS(133),
    [anon_sym_DASH] = ACTIONS(133),
    [anon_sym_TILDE] = ACTIONS(127),
    [sym_ident] = ACTIONS(97),
  },
  [36] = {
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
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(136),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(43),
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
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(133),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(133),
    [sym_binary_op] = STATE(133),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_DOLLAR] = ACTIONS(129),
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
    [anon_sym_bnot] = ACTIONS(133),
    [anon_sym_lnot] = ACTIONS(133),
    [anon_sym_DASH] = ACTIONS(133),
    [anon_sym_TILDE] = ACTIONS(127),
    [sym_ident] = ACTIONS(97),
  },
  [38] = {
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
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(125),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(43),
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
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(139),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(43),
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
    [sym__argument] = STATE(57),
    [sym_adt_constructor] = STATE(57),
    [sym_record_constructor] = STATE(57),
    [sym_constant] = STATE(57),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(57),
    [sym_as] = STATE(57),
    [sym_functor_call] = STATE(57),
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(57),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(43),
    [sym_unary_op] = STATE(57),
    [sym_binary_op] = STATE(57),
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
    [sym__argument] = STATE(57),
    [sym_adt_constructor] = STATE(57),
    [sym_record_constructor] = STATE(57),
    [sym_constant] = STATE(57),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(57),
    [sym_as] = STATE(57),
    [sym_functor_call] = STATE(57),
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(57),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(37),
    [sym_unary_op] = STATE(57),
    [sym_binary_op] = STATE(57),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_DOLLAR] = ACTIONS(129),
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
    [anon_sym_bnot] = ACTIONS(133),
    [anon_sym_lnot] = ACTIONS(133),
    [anon_sym_DASH] = ACTIONS(133),
    [anon_sym_TILDE] = ACTIONS(127),
    [sym_ident] = ACTIONS(97),
  },
  [42] = {
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
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(141),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(43),
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
  [43] = {
    [sym__argument] = STATE(90),
    [sym_adt_constructor] = STATE(90),
    [sym_record_constructor] = STATE(90),
    [sym_constant] = STATE(90),
    [sym_number] = STATE(77),
    [sym_integer] = STATE(79),
    [sym_decimal] = STATE(80),
    [sym_float] = STATE(79),
    [sym_variable] = STATE(90),
    [sym_as] = STATE(90),
    [sym_functor_call] = STATE(90),
    [sym_user_defined_functor] = STATE(465),
    [sym_intrinsic_functor] = STATE(465),
    [sym_aggregator] = STATE(90),
    [sym_range] = STATE(63),
    [sym__unary_operator] = STATE(43),
    [sym_unary_op] = STATE(90),
    [sym_binary_op] = STATE(90),
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
    ACTIONS(174), 1,
      anon_sym_DOT,
    STATE(49), 1,
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
    ACTIONS(184), 1,
      anon_sym_DOT,
    STATE(49), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(182), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(180), 29,
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
    ACTIONS(182), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(180), 30,
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
  [1676] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(319), 1,
      sym_ident,
    STATE(235), 1,
      sym_choice_domain,
    STATE(110), 2,
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
  [1725] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(323), 1,
      sym_ident,
    STATE(195), 1,
      sym_choice_domain,
    STATE(110), 2,
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
  [1774] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(327), 1,
      sym_ident,
    STATE(199), 1,
      sym_choice_domain,
    STATE(110), 2,
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
  [1823] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(333), 1,
      sym_ident,
    STATE(200), 1,
      sym_choice_domain,
    STATE(100), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(331), 13,
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
  [1872] = 17,
    ACTIONS(335), 1,
      ts_builtin_sym_end,
    ACTIONS(337), 1,
      anon_sym_POUNDline,
    ACTIONS(340), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(343), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(346), 1,
      anon_sym_DOTpragma,
    ACTIONS(349), 1,
      anon_sym_DOTfunctor,
    ACTIONS(352), 1,
      anon_sym_DOTcomp,
    ACTIONS(355), 1,
      anon_sym_DOTinit,
    ACTIONS(361), 1,
      anon_sym_DOTdecl,
    ACTIONS(367), 1,
      anon_sym_DOTtype,
    ACTIONS(370), 1,
      sym_ident,
    STATE(301), 1,
      sym_atom,
    STATE(427), 1,
      sym__directive_qualifier,
    STATE(502), 1,
      sym_qualified_name,
    ACTIONS(364), 2,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
    ACTIONS(358), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(86), 16,
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
  [1943] = 4,
    ACTIONS(215), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(375), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(213), 12,
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
    ACTIONS(373), 16,
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
  [1988] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(381), 1,
      sym_ident,
    STATE(205), 1,
      sym_choice_domain,
    STATE(93), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(379), 13,
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
    ACTIONS(377), 18,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [2037] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(385), 1,
      sym_ident,
    STATE(204), 1,
      sym_choice_domain,
    STATE(110), 2,
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
    ACTIONS(383), 18,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [2086] = 5,
    ACTIONS(389), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(391), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(375), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(387), 10,
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
    ACTIONS(373), 16,
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
  [2133] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(397), 1,
      sym_ident,
    STATE(202), 1,
      sym_choice_domain,
    STATE(104), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(395), 13,
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
    ACTIONS(393), 18,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [2182] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(403), 1,
      sym_ident,
    STATE(207), 1,
      sym_choice_domain,
    STATE(89), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(401), 13,
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
  [2231] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(407), 1,
      sym_ident,
    STATE(206), 1,
      sym_choice_domain,
    STATE(110), 2,
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
    ACTIONS(405), 18,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [2280] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(413), 1,
      sym_ident,
    STATE(222), 1,
      sym_choice_domain,
    STATE(84), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(411), 13,
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
  [2329] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(419), 1,
      sym_ident,
    STATE(201), 1,
      sym_choice_domain,
    STATE(99), 2,
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
  [2378] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(423), 1,
      sym_ident,
    STATE(193), 1,
      sym_choice_domain,
    STATE(110), 2,
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
  [2427] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(429), 1,
      sym_ident,
    STATE(203), 1,
      sym_choice_domain,
    STATE(83), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(427), 13,
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
  [2476] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(435), 1,
      sym_ident,
    STATE(194), 1,
      sym_choice_domain,
    STATE(105), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(433), 13,
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
    ACTIONS(431), 18,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [2525] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(439), 1,
      sym_ident,
    STATE(233), 1,
      sym_choice_domain,
    STATE(110), 2,
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
  [2574] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(443), 1,
      sym_ident,
    STATE(234), 1,
      sym_choice_domain,
    STATE(110), 2,
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
    ACTIONS(441), 18,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [2623] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(449), 1,
      sym_ident,
    STATE(238), 1,
      sym_choice_domain,
    STATE(106), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(447), 13,
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
    ACTIONS(445), 18,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [2672] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(455), 1,
      sym_ident,
    STATE(211), 1,
      sym_choice_domain,
    STATE(103), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(453), 13,
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
    ACTIONS(451), 18,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [2721] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(459), 1,
      sym_ident,
    STATE(215), 1,
      sym_choice_domain,
    STATE(110), 2,
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
  [2770] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(463), 1,
      sym_ident,
    STATE(209), 1,
      sym_choice_domain,
    STATE(110), 2,
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
    ACTIONS(461), 18,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [2819] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(467), 1,
      sym_ident,
    STATE(224), 1,
      sym_choice_domain,
    STATE(110), 2,
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
    ACTIONS(465), 18,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [2868] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(471), 1,
      sym_ident,
    STATE(220), 1,
      sym_choice_domain,
    STATE(110), 2,
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
    ACTIONS(469), 18,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [2917] = 17,
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
    ACTIONS(473), 1,
      ts_builtin_sym_end,
    STATE(301), 1,
      sym_atom,
    STATE(427), 1,
      sym__directive_qualifier,
    STATE(502), 1,
      sym_qualified_name,
    ACTIONS(23), 2,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
    ACTIONS(19), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(86), 16,
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
  [2988] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(479), 1,
      sym_ident,
    STATE(218), 1,
      sym_choice_domain,
    STATE(82), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(477), 13,
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
    ACTIONS(475), 18,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [3037] = 6,
    ACTIONS(317), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(485), 1,
      sym_ident,
    STATE(208), 1,
      sym_choice_domain,
    STATE(96), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(483), 13,
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
  [3086] = 4,
    ACTIONS(492), 1,
      sym_ident,
    STATE(110), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(489), 13,
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
    ACTIONS(487), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
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
  [3130] = 5,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_DOT,
    STATE(48), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(235), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(233), 23,
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
  [3175] = 6,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
    ACTIONS(391), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(496), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(498), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(375), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(373), 16,
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
  [3219] = 5,
    ACTIONS(391), 2,
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
    ACTIONS(375), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(373), 16,
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
  [3260] = 15,
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
    STATE(301), 1,
      sym_atom,
    STATE(442), 1,
      sym__directive_qualifier,
    STATE(502), 1,
      sym_qualified_name,
    ACTIONS(508), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(119), 13,
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
  [3321] = 15,
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
    STATE(301), 1,
      sym_atom,
    STATE(442), 1,
      sym__directive_qualifier,
    STATE(502), 1,
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
  [3382] = 15,
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
    STATE(301), 1,
      sym_atom,
    STATE(442), 1,
      sym__directive_qualifier,
    STATE(502), 1,
      sym_qualified_name,
    ACTIONS(508), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(115), 13,
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
  [3443] = 15,
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
    STATE(301), 1,
      sym_atom,
    STATE(442), 1,
      sym__directive_qualifier,
    STATE(502), 1,
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
  [3504] = 15,
    ACTIONS(518), 1,
      anon_sym_POUNDline,
    ACTIONS(521), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(524), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(527), 1,
      anon_sym_DOTcomp,
    ACTIONS(530), 1,
      anon_sym_DOToverride,
    ACTIONS(533), 1,
      anon_sym_RBRACE,
    ACTIONS(535), 1,
      anon_sym_DOTinit,
    ACTIONS(541), 1,
      anon_sym_DOTdecl,
    ACTIONS(544), 1,
      anon_sym_DOTtype,
    ACTIONS(547), 1,
      sym_ident,
    STATE(301), 1,
      sym_atom,
    STATE(442), 1,
      sym__directive_qualifier,
    STATE(502), 1,
      sym_qualified_name,
    ACTIONS(538), 4,
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
  [3565] = 15,
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
    ACTIONS(550), 1,
      anon_sym_RBRACE,
    STATE(301), 1,
      sym_atom,
    STATE(442), 1,
      sym__directive_qualifier,
    STATE(502), 1,
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
  [3626] = 15,
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
    STATE(301), 1,
      sym_atom,
    STATE(442), 1,
      sym__directive_qualifier,
    STATE(502), 1,
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
  [3687] = 5,
    ACTIONS(391), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(496), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(498), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(375), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(373), 16,
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
  [3728] = 3,
    STATE(123), 1,
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
  [3764] = 3,
    STATE(49), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(178), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(176), 22,
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
  [3800] = 4,
    ACTIONS(391), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(554), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(375), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(373), 16,
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
  [3837] = 4,
    ACTIONS(391), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(556), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(375), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(373), 16,
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
  [3873] = 6,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(558), 1,
      anon_sym_RPAREN,
    STATE(374), 1,
      aux_sym_match_repeat1,
    ACTIONS(391), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(375), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(373), 16,
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
  [3913] = 4,
    ACTIONS(562), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(554), 3,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
    ACTIONS(564), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(560), 16,
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
  [3949] = 6,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    ACTIONS(566), 1,
      anon_sym_RBRACK,
    STATE(396), 1,
      aux_sym_adt_constructor_repeat1,
    ACTIONS(391), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(375), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(373), 16,
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
  [3989] = 6,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    ACTIONS(568), 1,
      anon_sym_RPAREN,
    STATE(383), 1,
      aux_sym_adt_constructor_repeat1,
    ACTIONS(391), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(375), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(373), 16,
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
  [4029] = 3,
    ACTIONS(213), 5,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(564), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(560), 16,
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
  [4063] = 6,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
    STATE(368), 1,
      aux_sym_match_repeat1,
    ACTIONS(391), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(375), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(373), 16,
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
  [4103] = 6,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
    STATE(416), 1,
      aux_sym_match_repeat1,
    ACTIONS(391), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(375), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(373), 16,
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
  [4143] = 4,
    ACTIONS(562), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(387), 3,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
    ACTIONS(564), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(560), 16,
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
  [4179] = 6,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(574), 1,
      anon_sym_RPAREN,
    STATE(369), 1,
      aux_sym_match_repeat1,
    ACTIONS(391), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(375), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(373), 16,
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
  [4219] = 4,
    ACTIONS(391), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(576), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(375), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(373), 16,
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
  [4254] = 5,
    ACTIONS(578), 1,
      anon_sym_COMMA,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
    ACTIONS(391), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(375), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(373), 16,
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
  [4291] = 4,
    ACTIONS(582), 1,
      anon_sym_COMMA,
    ACTIONS(391), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(375), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(373), 16,
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
  [4325] = 4,
    ACTIONS(584), 1,
      anon_sym_RPAREN,
    ACTIONS(391), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(375), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(373), 16,
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
  [4359] = 4,
    ACTIONS(586), 1,
      anon_sym_COMMA,
    ACTIONS(391), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(375), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(373), 16,
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
  [4393] = 4,
    ACTIONS(588), 1,
      anon_sym_COLON,
    ACTIONS(391), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(375), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(373), 16,
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
  [4427] = 4,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
    ACTIONS(391), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(375), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(373), 16,
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
  [4461] = 1,
    ACTIONS(590), 23,
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
  [4487] = 2,
    ACTIONS(594), 1,
      anon_sym_LT,
    ACTIONS(592), 22,
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
  [4515] = 1,
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
  [4540] = 3,
    ACTIONS(598), 1,
      anon_sym_DOT,
    STATE(145), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(180), 20,
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
  [4569] = 3,
    ACTIONS(601), 1,
      anon_sym_DOT,
    STATE(145), 1,
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
  [4598] = 1,
    ACTIONS(603), 22,
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
  [4623] = 3,
    ACTIONS(601), 1,
      anon_sym_DOT,
    STATE(146), 1,
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
  [4652] = 3,
    ACTIONS(607), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_query_plan_repeat2,
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
  [4680] = 3,
    ACTIONS(612), 1,
      anon_sym_PIPE,
    STATE(167), 1,
      aux_sym_adt_repeat1,
    ACTIONS(610), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4708] = 3,
    ACTIONS(616), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(614), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4736] = 3,
    ACTIONS(616), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(618), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4764] = 3,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    STATE(172), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(620), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4792] = 3,
    ACTIONS(616), 1,
      anon_sym_COMMA,
    STATE(164), 1,
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
  [4820] = 3,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(620), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4848] = 3,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    STATE(155), 1,
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
  [4876] = 3,
    ACTIONS(630), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym_choice_domain_repeat1,
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
  [4904] = 3,
    ACTIONS(635), 1,
      anon_sym_DOTplan,
    STATE(245), 1,
      sym_query_plan,
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
  [4932] = 3,
    ACTIONS(616), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(618), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4960] = 2,
    ACTIONS(182), 1,
      anon_sym_DOT,
    ACTIONS(180), 20,
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
  [4986] = 3,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym_choice_domain_repeat1,
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
  [5014] = 3,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym_choice_domain_repeat1,
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
  [5042] = 1,
    ACTIONS(641), 21,
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
  [5066] = 3,
    ACTIONS(616), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_query_plan_repeat2,
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
  [5094] = 3,
    ACTIONS(616), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      aux_sym_query_plan_repeat2,
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
  [5122] = 3,
    ACTIONS(635), 1,
      anon_sym_DOTplan,
    STATE(244), 1,
      sym_query_plan,
    ACTIONS(645), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5150] = 3,
    ACTIONS(649), 1,
      anon_sym_PIPE,
    STATE(167), 1,
      aux_sym_adt_repeat1,
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
  [5178] = 3,
    ACTIONS(612), 1,
      anon_sym_PIPE,
    STATE(150), 1,
      aux_sym_adt_repeat1,
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
  [5206] = 4,
    ACTIONS(601), 1,
      anon_sym_DOT,
    ACTIONS(654), 1,
      anon_sym_LBRACE,
    STATE(146), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(170), 18,
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
  [5236] = 3,
    ACTIONS(635), 1,
      anon_sym_DOTplan,
    STATE(250), 1,
      sym_query_plan,
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
  [5264] = 3,
    ACTIONS(616), 1,
      anon_sym_COMMA,
    STATE(152), 1,
      aux_sym_query_plan_repeat2,
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
  [5292] = 3,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(660), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5320] = 3,
    ACTIONS(616), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_query_plan_repeat2,
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
  [5348] = 1,
    ACTIONS(628), 20,
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
  [5371] = 4,
    ACTIONS(666), 1,
      anon_sym_LPAREN,
    ACTIONS(668), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_directive_repeat1,
    ACTIONS(664), 17,
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
  [5400] = 4,
    ACTIONS(668), 1,
      anon_sym_COMMA,
    ACTIONS(672), 1,
      anon_sym_LPAREN,
    STATE(175), 1,
      aux_sym_directive_repeat1,
    ACTIONS(670), 17,
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
  [5429] = 1,
    ACTIONS(674), 20,
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
  [5452] = 1,
    ACTIONS(676), 20,
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
  [5475] = 1,
    ACTIONS(678), 20,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
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
  [5498] = 3,
    ACTIONS(682), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_directive_repeat1,
    ACTIONS(680), 18,
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
  [5525] = 1,
    ACTIONS(685), 20,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
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
  [5548] = 1,
    ACTIONS(687), 20,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
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
  [5571] = 1,
    ACTIONS(689), 20,
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
  [5594] = 1,
    ACTIONS(691), 20,
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
  [5617] = 1,
    ACTIONS(693), 20,
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
  [5640] = 1,
    ACTIONS(695), 20,
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
  [5663] = 1,
    ACTIONS(697), 20,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
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
  [5686] = 1,
    ACTIONS(699), 20,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
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
  [5709] = 1,
    ACTIONS(701), 20,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
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
  [5732] = 4,
    ACTIONS(703), 1,
      anon_sym_DOT,
    STATE(191), 1,
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
  [5761] = 4,
    ACTIONS(703), 1,
      anon_sym_DOT,
    STATE(192), 1,
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
  [5790] = 4,
    ACTIONS(705), 1,
      anon_sym_DOT,
    STATE(192), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(182), 2,
      anon_sym_stateful,
      sym_ident,
    ACTIONS(180), 16,
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
  [5819] = 1,
    ACTIONS(708), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5841] = 1,
    ACTIONS(710), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5863] = 1,
    ACTIONS(712), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5885] = 2,
    ACTIONS(182), 3,
      anon_sym_stateful,
      anon_sym_DOT,
      sym_ident,
    ACTIONS(180), 16,
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
  [5909] = 1,
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
  [5931] = 3,
    ACTIONS(716), 1,
      anon_sym_PIPE,
    STATE(198), 1,
      aux_sym_type_union_repeat1,
    ACTIONS(701), 17,
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
  [5957] = 1,
    ACTIONS(719), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5979] = 1,
    ACTIONS(721), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6001] = 1,
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
  [6023] = 1,
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
  [6045] = 1,
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
  [6067] = 1,
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
  [6089] = 1,
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
  [6111] = 1,
    ACTIONS(733), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6133] = 1,
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
  [6155] = 1,
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
  [6177] = 1,
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
  [6199] = 1,
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
  [6221] = 1,
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
  [6243] = 3,
    ACTIONS(745), 1,
      anon_sym_DOT,
    STATE(248), 1,
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
  [6269] = 1,
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
  [6291] = 3,
    ACTIONS(749), 1,
      anon_sym_DOT,
    STATE(214), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(180), 17,
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
  [6317] = 1,
    ACTIONS(752), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6339] = 1,
    ACTIONS(754), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6361] = 1,
    ACTIONS(756), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6383] = 1,
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
  [6405] = 3,
    ACTIONS(762), 1,
      anon_sym_EQ,
    ACTIONS(764), 1,
      anon_sym_LT_COLON,
    ACTIONS(760), 17,
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
  [6431] = 1,
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
  [6453] = 1,
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
  [6475] = 1,
    ACTIONS(770), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6497] = 3,
    ACTIONS(774), 1,
      anon_sym_PIPE,
    STATE(198), 1,
      aux_sym_type_union_repeat1,
    ACTIONS(772), 17,
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
  [6523] = 1,
    ACTIONS(776), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6545] = 1,
    ACTIONS(778), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6567] = 1,
    ACTIONS(780), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6589] = 1,
    ACTIONS(782), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6611] = 1,
    ACTIONS(784), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6633] = 1,
    ACTIONS(786), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6655] = 1,
    ACTIONS(788), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6677] = 1,
    ACTIONS(790), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6699] = 1,
    ACTIONS(792), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6721] = 1,
    ACTIONS(794), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6743] = 1,
    ACTIONS(796), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6765] = 1,
    ACTIONS(798), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6787] = 1,
    ACTIONS(800), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6809] = 1,
    ACTIONS(802), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6831] = 1,
    ACTIONS(804), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6853] = 1,
    ACTIONS(806), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6875] = 1,
    ACTIONS(808), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6897] = 3,
    ACTIONS(774), 1,
      anon_sym_PIPE,
    STATE(223), 1,
      aux_sym_type_union_repeat1,
    ACTIONS(810), 17,
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
  [6923] = 1,
    ACTIONS(812), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6945] = 1,
    ACTIONS(814), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6967] = 1,
    ACTIONS(816), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6989] = 1,
    ACTIONS(818), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7011] = 1,
    ACTIONS(820), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7033] = 1,
    ACTIONS(822), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7055] = 3,
    ACTIONS(745), 1,
      anon_sym_DOT,
    STATE(214), 1,
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
  [7081] = 1,
    ACTIONS(824), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7103] = 1,
    ACTIONS(826), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7125] = 1,
    ACTIONS(828), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7147] = 3,
    ACTIONS(832), 1,
      anon_sym_stateful,
    ACTIONS(834), 1,
      sym_ident,
    ACTIONS(830), 16,
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
  [7172] = 3,
    ACTIONS(838), 1,
      anon_sym_stateful,
    ACTIONS(840), 1,
      sym_ident,
    ACTIONS(836), 16,
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
  [7197] = 3,
    ACTIONS(844), 1,
      anon_sym_stateful,
    ACTIONS(846), 1,
      sym_ident,
    ACTIONS(842), 16,
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
  [7222] = 2,
    ACTIONS(182), 1,
      anon_sym_DOT,
    ACTIONS(180), 17,
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
  [7245] = 4,
    ACTIONS(654), 1,
      anon_sym_LBRACE,
    ACTIONS(745), 1,
      anon_sym_DOT,
    STATE(248), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(170), 15,
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
  [7272] = 3,
    ACTIONS(850), 1,
      anon_sym_stateful,
    ACTIONS(852), 1,
      sym_ident,
    ACTIONS(848), 16,
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
  [7297] = 2,
    ACTIONS(854), 2,
      anon_sym_stateful,
      sym_ident,
    ACTIONS(590), 16,
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
  [7320] = 2,
    ACTIONS(858), 1,
      sym_string,
    ACTIONS(856), 17,
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
  [7343] = 3,
    ACTIONS(862), 1,
      anon_sym_stateful,
    ACTIONS(864), 1,
      sym_ident,
    ACTIONS(860), 16,
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
  [7368] = 3,
    ACTIONS(868), 1,
      anon_sym_stateful,
    ACTIONS(870), 1,
      sym_ident,
    ACTIONS(866), 16,
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
  [7393] = 1,
    ACTIONS(872), 17,
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
  [7413] = 1,
    ACTIONS(874), 17,
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
  [7433] = 3,
    ACTIONS(876), 1,
      anon_sym_COMMA,
    STATE(264), 1,
      aux_sym_directive_repeat1,
    ACTIONS(680), 15,
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
  [7457] = 4,
    ACTIONS(672), 1,
      anon_sym_LPAREN,
    ACTIONS(879), 1,
      anon_sym_COMMA,
    STATE(267), 1,
      aux_sym_directive_repeat1,
    ACTIONS(670), 14,
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
  [7483] = 1,
    ACTIONS(881), 17,
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
  [7503] = 4,
    ACTIONS(666), 1,
      anon_sym_LPAREN,
    ACTIONS(879), 1,
      anon_sym_COMMA,
    STATE(264), 1,
      aux_sym_directive_repeat1,
    ACTIONS(664), 14,
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
  [7529] = 1,
    ACTIONS(883), 17,
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
  [7549] = 1,
    ACTIONS(885), 17,
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
  [7569] = 1,
    ACTIONS(887), 17,
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
  [7589] = 1,
    ACTIONS(889), 17,
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
  [7609] = 1,
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
  [7629] = 3,
    ACTIONS(893), 1,
      anon_sym_PIPE,
    STATE(275), 1,
      aux_sym_type_union_repeat1,
    ACTIONS(810), 14,
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
  [7652] = 3,
    ACTIONS(895), 1,
      anon_sym_PIPE,
    STATE(274), 1,
      aux_sym_type_union_repeat1,
    ACTIONS(701), 14,
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
  [7675] = 3,
    ACTIONS(893), 1,
      anon_sym_PIPE,
    STATE(274), 1,
      aux_sym_type_union_repeat1,
    ACTIONS(772), 14,
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
  [7698] = 3,
    ACTIONS(898), 1,
      anon_sym_EQ,
    ACTIONS(900), 1,
      anon_sym_LT_COLON,
    ACTIONS(760), 14,
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
  [7721] = 1,
    ACTIONS(533), 14,
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
  [7738] = 7,
    ACTIONS(902), 1,
      anon_sym_COMMA,
    ACTIONS(904), 1,
      anon_sym_RPAREN,
    ACTIONS(908), 1,
      sym_ident,
    STATE(386), 1,
      sym_attribute,
    STATE(387), 1,
      aux_sym_functor_decl_repeat1,
    STATE(385), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(906), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7765] = 8,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      sym_unsigned,
    ACTIONS(912), 1,
      aux_sym_float_token1,
    STATE(80), 1,
      sym_decimal,
    ACTIONS(49), 2,
      sym_hex,
      sym_binary,
    ACTIONS(910), 2,
      sym_string,
      sym_ident,
    STATE(79), 2,
      sym_integer,
      sym_float,
    STATE(449), 2,
      sym__directive_value,
      sym_number,
  [7794] = 8,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      sym_unsigned,
    ACTIONS(912), 1,
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
    STATE(367), 2,
      sym__directive_value,
      sym_number,
  [7823] = 8,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      sym_unsigned,
    ACTIONS(912), 1,
      aux_sym_float_token1,
    STATE(80), 1,
      sym_decimal,
    ACTIONS(49), 2,
      sym_hex,
      sym_binary,
    ACTIONS(916), 2,
      sym_string,
      sym_ident,
    STATE(79), 2,
      sym_integer,
      sym_float,
    STATE(382), 2,
      sym__directive_value,
      sym_number,
  [7852] = 5,
    ACTIONS(918), 1,
      anon_sym_LBRACK,
    ACTIONS(920), 1,
      sym_ident,
    STATE(168), 1,
      sym__adt_branch,
    STATE(273), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(906), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7873] = 5,
    ACTIONS(918), 1,
      anon_sym_LBRACK,
    ACTIONS(922), 1,
      sym_ident,
    STATE(168), 1,
      sym__adt_branch,
    STATE(241), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(906), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7894] = 4,
    ACTIONS(908), 1,
      sym_ident,
    STATE(446), 1,
      sym_attribute,
    STATE(425), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(906), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7912] = 3,
    ACTIONS(926), 1,
      sym_ident,
    STATE(257), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(924), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7927] = 3,
    ACTIONS(928), 1,
      sym_ident,
    STATE(239), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(906), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7942] = 3,
    ACTIONS(930), 1,
      sym_ident,
    STATE(330), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(906), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7957] = 3,
    ACTIONS(932), 1,
      sym_ident,
    STATE(189), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(906), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7972] = 3,
    ACTIONS(928), 1,
      sym_ident,
    STATE(189), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(906), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7987] = 3,
    ACTIONS(930), 1,
      sym_ident,
    STATE(463), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(906), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [8002] = 3,
    ACTIONS(926), 1,
      sym_ident,
    STATE(261), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(924), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [8017] = 3,
    ACTIONS(926), 1,
      sym_ident,
    STATE(252), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(924), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [8032] = 3,
    ACTIONS(932), 1,
      sym_ident,
    STATE(239), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(906), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [8047] = 3,
    ACTIONS(926), 1,
      sym_ident,
    STATE(254), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(924), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [8062] = 3,
    ACTIONS(926), 1,
      sym_ident,
    STATE(253), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(924), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [8077] = 3,
    ACTIONS(932), 1,
      sym_ident,
    STATE(268), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(906), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [8092] = 3,
    ACTIONS(926), 1,
      sym_ident,
    STATE(260), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(924), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [8107] = 2,
    ACTIONS(934), 1,
      sym_ident,
    STATE(251), 6,
      sym_legacy_bare_type_decl,
      sym_subtype,
      sym_type_synonym,
      sym_type_union,
      sym_type_record,
      sym_adt,
  [8119] = 2,
    ACTIONS(936), 1,
      sym_ident,
    STATE(251), 6,
      sym_legacy_bare_type_decl,
      sym_subtype,
      sym_type_synonym,
      sym_type_union,
      sym_type_record,
      sym_adt,
  [8131] = 1,
    ACTIONS(938), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8139] = 5,
    ACTIONS(940), 1,
      anon_sym_COMMA,
    ACTIONS(942), 1,
      anon_sym_COLON_DASH,
    ACTIONS(944), 1,
      anon_sym_DOT,
    ACTIONS(946), 1,
      anon_sym_LT_EQ,
    STATE(366), 1,
      aux_sym_monotonic_rule_repeat1,
  [8155] = 5,
    ACTIONS(948), 1,
      anon_sym_COMMA,
    ACTIONS(950), 1,
      anon_sym_RPAREN,
    ACTIONS(952), 1,
      sym_ident,
    STATE(408), 1,
      aux_sym_relation_decl_repeat2,
    STATE(409), 1,
      sym_attribute,
  [8171] = 3,
    ACTIONS(954), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(956), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [8183] = 1,
    ACTIONS(958), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8191] = 1,
    ACTIONS(960), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8199] = 3,
    ACTIONS(962), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(960), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [8211] = 3,
    ACTIONS(954), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(965), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [8223] = 3,
    ACTIONS(954), 1,
      anon_sym_COMMA,
    STATE(303), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(965), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [8235] = 3,
    ACTIONS(954), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(967), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [8247] = 5,
    ACTIONS(952), 1,
      sym_ident,
    ACTIONS(969), 1,
      anon_sym_COMMA,
    ACTIONS(971), 1,
      anon_sym_RBRACK,
    STATE(405), 1,
      aux_sym_type_record_repeat1,
    STATE(406), 1,
      sym_attribute,
  [8263] = 1,
    ACTIONS(973), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8271] = 3,
    ACTIONS(954), 1,
      anon_sym_COMMA,
    STATE(307), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(975), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [8283] = 5,
    ACTIONS(948), 1,
      anon_sym_COMMA,
    ACTIONS(952), 1,
      sym_ident,
    ACTIONS(977), 1,
      anon_sym_RPAREN,
    STATE(371), 1,
      sym_attribute,
    STATE(372), 1,
      aux_sym_relation_decl_repeat2,
  [8299] = 3,
    ACTIONS(954), 1,
      anon_sym_COMMA,
    STATE(309), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(956), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [8311] = 1,
    ACTIONS(979), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8319] = 5,
    ACTIONS(948), 1,
      anon_sym_COMMA,
    ACTIONS(952), 1,
      sym_ident,
    ACTIONS(981), 1,
      anon_sym_RPAREN,
    STATE(393), 1,
      aux_sym_relation_decl_repeat2,
    STATE(403), 1,
      sym_attribute,
  [8335] = 1,
    ACTIONS(983), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8343] = 1,
    ACTIONS(985), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8351] = 1,
    ACTIONS(987), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8359] = 3,
    ACTIONS(954), 1,
      anon_sym_COMMA,
    STATE(327), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(967), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [8371] = 1,
    ACTIONS(989), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8379] = 1,
    ACTIONS(991), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8387] = 4,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(993), 1,
      anon_sym_COLON,
    STATE(48), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(170), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8401] = 1,
    ACTIONS(995), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8409] = 1,
    ACTIONS(997), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8417] = 5,
    ACTIONS(952), 1,
      sym_ident,
    ACTIONS(999), 1,
      anon_sym_COMMA,
    ACTIONS(1001), 1,
      anon_sym_RBRACE,
    STATE(364), 1,
      sym_attribute,
    STATE(365), 1,
      aux_sym__adt_branch_repeat1,
  [8433] = 3,
    ACTIONS(954), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(1003), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [8445] = 1,
    ACTIONS(1005), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8453] = 3,
    ACTIONS(1007), 1,
      anon_sym_COMMA,
    STATE(346), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(965), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8464] = 1,
    ACTIONS(1009), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [8471] = 3,
    ACTIONS(1007), 1,
      anon_sym_COMMA,
    STATE(349), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(967), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8482] = 4,
    ACTIONS(27), 1,
      sym_ident,
    ACTIONS(1011), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym_atom,
    STATE(502), 1,
      sym_qualified_name,
  [8495] = 4,
    ACTIONS(1013), 1,
      anon_sym_LPAREN,
    ACTIONS(1015), 1,
      anon_sym_COMMA,
    ACTIONS(1017), 1,
      sym_ident,
    STATE(358), 1,
      aux_sym_relation_decl_repeat1,
  [8508] = 3,
    ACTIONS(1007), 1,
      anon_sym_COMMA,
    STATE(349), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(965), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8519] = 1,
    ACTIONS(1019), 4,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8526] = 3,
    ACTIONS(1023), 1,
      anon_sym_SEMI,
    STATE(341), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(1021), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [8537] = 3,
    ACTIONS(1027), 1,
      anon_sym_COMMA,
    STATE(337), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(1025), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [8548] = 3,
    ACTIONS(1007), 1,
      anon_sym_COMMA,
    STATE(334), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(975), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8559] = 4,
    ACTIONS(1030), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(1032), 1,
      anon_sym_COMMA,
    ACTIONS(1034), 1,
      anon_sym_RPAREN,
    STATE(392), 1,
      aux_sym_query_plan_repeat1,
  [8572] = 3,
    ACTIONS(1007), 1,
      anon_sym_COMMA,
    STATE(344), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(967), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8583] = 3,
    ACTIONS(1023), 1,
      anon_sym_SEMI,
    STATE(343), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(1036), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [8594] = 4,
    ACTIONS(1038), 1,
      anon_sym_COMMA,
    ACTIONS(1040), 1,
      anon_sym_RPAREN,
    ACTIONS(1042), 1,
      sym_ident,
    STATE(399), 1,
      aux_sym_directive_repeat2,
  [8607] = 3,
    ACTIONS(1044), 1,
      anon_sym_SEMI,
    STATE(343), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(1019), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [8618] = 3,
    ACTIONS(1007), 1,
      anon_sym_COMMA,
    STATE(349), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(1003), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8629] = 4,
    ACTIONS(27), 1,
      sym_ident,
    ACTIONS(1047), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym_atom,
    STATE(502), 1,
      sym_qualified_name,
  [8642] = 3,
    ACTIONS(1007), 1,
      anon_sym_COMMA,
    STATE(349), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(956), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8653] = 3,
    ACTIONS(1049), 1,
      anon_sym_COMMA,
    STATE(347), 1,
      aux_sym_adt_constructor_repeat1,
    ACTIONS(556), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [8664] = 4,
    ACTIONS(1038), 1,
      anon_sym_COMMA,
    ACTIONS(1052), 1,
      anon_sym_RPAREN,
    ACTIONS(1054), 1,
      sym_ident,
    STATE(404), 1,
      aux_sym_directive_repeat2,
  [8677] = 3,
    ACTIONS(1056), 1,
      anon_sym_COMMA,
    STATE(349), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(960), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8688] = 4,
    ACTIONS(1032), 1,
      anon_sym_COMMA,
    ACTIONS(1059), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(1061), 1,
      anon_sym_RPAREN,
    STATE(418), 1,
      aux_sym_query_plan_repeat1,
  [8701] = 3,
    ACTIONS(1007), 1,
      anon_sym_COMMA,
    STATE(331), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(956), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8712] = 3,
    ACTIONS(1063), 1,
      anon_sym_COMMA,
    ACTIONS(1066), 1,
      anon_sym_RPAREN,
    STATE(352), 1,
      aux_sym_relation_decl_repeat2,
  [8722] = 3,
    ACTIONS(1032), 1,
      anon_sym_COMMA,
    ACTIONS(1068), 1,
      anon_sym_RPAREN,
    STATE(407), 1,
      aux_sym_query_plan_repeat1,
  [8732] = 3,
    ACTIONS(1070), 1,
      anon_sym_COMMA,
    ACTIONS(1073), 1,
      anon_sym_GT,
    STATE(354), 1,
      aux_sym_component_type_repeat1,
  [8742] = 3,
    ACTIONS(1015), 1,
      anon_sym_COMMA,
    ACTIONS(1075), 1,
      anon_sym_LPAREN,
    STATE(376), 1,
      aux_sym_relation_decl_repeat1,
  [8752] = 3,
    ACTIONS(1077), 1,
      anon_sym_COMMA,
    ACTIONS(1080), 1,
      anon_sym_LBRACE,
    STATE(356), 1,
      aux_sym_component_decl_repeat1,
  [8762] = 3,
    ACTIONS(1015), 1,
      anon_sym_COMMA,
    ACTIONS(1082), 1,
      anon_sym_RPAREN,
    STATE(375), 1,
      aux_sym_relation_decl_repeat1,
  [8772] = 3,
    ACTIONS(1015), 1,
      anon_sym_COMMA,
    ACTIONS(1075), 1,
      anon_sym_LPAREN,
    STATE(337), 1,
      aux_sym_relation_decl_repeat1,
  [8782] = 3,
    ACTIONS(948), 1,
      anon_sym_COMMA,
    ACTIONS(1084), 1,
      anon_sym_RPAREN,
    STATE(352), 1,
      aux_sym_relation_decl_repeat2,
  [8792] = 3,
    ACTIONS(27), 1,
      sym_ident,
    STATE(444), 1,
      sym_atom,
    STATE(502), 1,
      sym_qualified_name,
  [8802] = 3,
    ACTIONS(969), 1,
      anon_sym_COMMA,
    ACTIONS(1086), 1,
      anon_sym_RBRACK,
    STATE(362), 1,
      aux_sym_type_record_repeat1,
  [8812] = 3,
    ACTIONS(1088), 1,
      anon_sym_COMMA,
    ACTIONS(1091), 1,
      anon_sym_RBRACK,
    STATE(362), 1,
      aux_sym_type_record_repeat1,
  [8822] = 3,
    ACTIONS(27), 1,
      sym_ident,
    STATE(464), 1,
      sym_atom,
    STATE(502), 1,
      sym_qualified_name,
  [8832] = 3,
    ACTIONS(999), 1,
      anon_sym_COMMA,
    ACTIONS(1093), 1,
      anon_sym_RBRACE,
    STATE(378), 1,
      aux_sym__adt_branch_repeat1,
  [8842] = 3,
    ACTIONS(999), 1,
      anon_sym_COMMA,
    ACTIONS(1095), 1,
      anon_sym_RBRACE,
    STATE(379), 1,
      aux_sym__adt_branch_repeat1,
  [8852] = 3,
    ACTIONS(940), 1,
      anon_sym_COMMA,
    ACTIONS(1097), 1,
      anon_sym_COLON_DASH,
    STATE(380), 1,
      aux_sym_monotonic_rule_repeat1,
  [8862] = 3,
    ACTIONS(1038), 1,
      anon_sym_COMMA,
    ACTIONS(1099), 1,
      anon_sym_RPAREN,
    STATE(381), 1,
      aux_sym_directive_repeat2,
  [8872] = 3,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(1101), 1,
      anon_sym_RPAREN,
    STATE(420), 1,
      aux_sym_match_repeat1,
  [8882] = 3,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(1103), 1,
      anon_sym_RPAREN,
    STATE(420), 1,
      aux_sym_match_repeat1,
  [8892] = 3,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    ACTIONS(568), 1,
      anon_sym_RPAREN,
    STATE(347), 1,
      aux_sym_adt_constructor_repeat1,
  [8902] = 3,
    ACTIONS(948), 1,
      anon_sym_COMMA,
    ACTIONS(1105), 1,
      anon_sym_RPAREN,
    STATE(395), 1,
      aux_sym_relation_decl_repeat2,
  [8912] = 3,
    ACTIONS(948), 1,
      anon_sym_COMMA,
    ACTIONS(1107), 1,
      anon_sym_RPAREN,
    STATE(352), 1,
      aux_sym_relation_decl_repeat2,
  [8922] = 1,
    ACTIONS(1025), 3,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8928] = 3,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(1109), 1,
      anon_sym_RPAREN,
    STATE(420), 1,
      aux_sym_match_repeat1,
  [8938] = 3,
    ACTIONS(1015), 1,
      anon_sym_COMMA,
    ACTIONS(1111), 1,
      anon_sym_RPAREN,
    STATE(337), 1,
      aux_sym_relation_decl_repeat1,
  [8948] = 3,
    ACTIONS(1015), 1,
      anon_sym_COMMA,
    ACTIONS(1113), 1,
      anon_sym_LPAREN,
    STATE(337), 1,
      aux_sym_relation_decl_repeat1,
  [8958] = 3,
    ACTIONS(1021), 1,
      anon_sym_DOT,
    ACTIONS(1115), 1,
      anon_sym_SEMI,
    STATE(414), 1,
      aux_sym_disjunction_repeat1,
  [8968] = 3,
    ACTIONS(999), 1,
      anon_sym_COMMA,
    ACTIONS(1117), 1,
      anon_sym_RBRACE,
    STATE(379), 1,
      aux_sym__adt_branch_repeat1,
  [8978] = 3,
    ACTIONS(1119), 1,
      anon_sym_COMMA,
    ACTIONS(1122), 1,
      anon_sym_RBRACE,
    STATE(379), 1,
      aux_sym__adt_branch_repeat1,
  [8988] = 3,
    ACTIONS(1124), 1,
      anon_sym_COMMA,
    ACTIONS(1127), 1,
      anon_sym_COLON_DASH,
    STATE(380), 1,
      aux_sym_monotonic_rule_repeat1,
  [8998] = 3,
    ACTIONS(1038), 1,
      anon_sym_COMMA,
    ACTIONS(1129), 1,
      anon_sym_RPAREN,
    STATE(402), 1,
      aux_sym_directive_repeat2,
  [9008] = 3,
    ACTIONS(1038), 1,
      anon_sym_COMMA,
    ACTIONS(1131), 1,
      anon_sym_RPAREN,
    STATE(410), 1,
      aux_sym_directive_repeat2,
  [9018] = 3,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    ACTIONS(1133), 1,
      anon_sym_RPAREN,
    STATE(347), 1,
      aux_sym_adt_constructor_repeat1,
  [9028] = 3,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(1135), 1,
      anon_sym_RPAREN,
    STATE(420), 1,
      aux_sym_match_repeat1,
  [9038] = 3,
    ACTIONS(902), 1,
      anon_sym_COMMA,
    ACTIONS(1137), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      aux_sym_functor_decl_repeat1,
  [9048] = 3,
    ACTIONS(902), 1,
      anon_sym_COMMA,
    ACTIONS(1139), 1,
      anon_sym_RPAREN,
    STATE(419), 1,
      aux_sym_functor_decl_repeat1,
  [9058] = 3,
    ACTIONS(902), 1,
      anon_sym_COMMA,
    ACTIONS(1141), 1,
      anon_sym_RPAREN,
    STATE(417), 1,
      aux_sym_functor_decl_repeat1,
  [9068] = 3,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(1143), 1,
      anon_sym_RPAREN,
    STATE(420), 1,
      aux_sym_match_repeat1,
  [9078] = 3,
    ACTIONS(1145), 1,
      anon_sym_COMMA,
    ACTIONS(1147), 1,
      anon_sym_GT,
    STATE(415), 1,
      aux_sym_component_type_repeat1,
  [9088] = 3,
    ACTIONS(1149), 1,
      anon_sym_COMMA,
    ACTIONS(1151), 1,
      anon_sym_LBRACE,
    STATE(413), 1,
      aux_sym_component_decl_repeat1,
  [9098] = 3,
    ACTIONS(1032), 1,
      anon_sym_COMMA,
    ACTIONS(1153), 1,
      anon_sym_RPAREN,
    STATE(407), 1,
      aux_sym_query_plan_repeat1,
  [9108] = 3,
    ACTIONS(1032), 1,
      anon_sym_COMMA,
    ACTIONS(1155), 1,
      anon_sym_RPAREN,
    STATE(407), 1,
      aux_sym_query_plan_repeat1,
  [9118] = 3,
    ACTIONS(948), 1,
      anon_sym_COMMA,
    ACTIONS(1157), 1,
      anon_sym_RPAREN,
    STATE(352), 1,
      aux_sym_relation_decl_repeat2,
  [9128] = 3,
    ACTIONS(1019), 1,
      anon_sym_DOT,
    ACTIONS(1159), 1,
      anon_sym_SEMI,
    STATE(394), 1,
      aux_sym_disjunction_repeat1,
  [9138] = 3,
    ACTIONS(948), 1,
      anon_sym_COMMA,
    ACTIONS(1162), 1,
      anon_sym_RPAREN,
    STATE(352), 1,
      aux_sym_relation_decl_repeat2,
  [9148] = 3,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    ACTIONS(1164), 1,
      anon_sym_RBRACK,
    STATE(347), 1,
      aux_sym_adt_constructor_repeat1,
  [9158] = 3,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(1166), 1,
      anon_sym_RPAREN,
    STATE(420), 1,
      aux_sym_match_repeat1,
  [9168] = 3,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(1168), 1,
      anon_sym_RPAREN,
    STATE(420), 1,
      aux_sym_match_repeat1,
  [9178] = 3,
    ACTIONS(1038), 1,
      anon_sym_COMMA,
    ACTIONS(1170), 1,
      anon_sym_RPAREN,
    STATE(402), 1,
      aux_sym_directive_repeat2,
  [9188] = 3,
    ACTIONS(1032), 1,
      anon_sym_COMMA,
    ACTIONS(1172), 1,
      anon_sym_RPAREN,
    STATE(391), 1,
      aux_sym_query_plan_repeat1,
  [9198] = 3,
    ACTIONS(1015), 1,
      anon_sym_COMMA,
    ACTIONS(1174), 1,
      anon_sym_RPAREN,
    STATE(422), 1,
      aux_sym_relation_decl_repeat1,
  [9208] = 3,
    ACTIONS(1176), 1,
      anon_sym_COMMA,
    ACTIONS(1179), 1,
      anon_sym_RPAREN,
    STATE(402), 1,
      aux_sym_directive_repeat2,
  [9218] = 3,
    ACTIONS(948), 1,
      anon_sym_COMMA,
    ACTIONS(1181), 1,
      anon_sym_RPAREN,
    STATE(411), 1,
      aux_sym_relation_decl_repeat2,
  [9228] = 3,
    ACTIONS(1038), 1,
      anon_sym_COMMA,
    ACTIONS(1183), 1,
      anon_sym_RPAREN,
    STATE(402), 1,
      aux_sym_directive_repeat2,
  [9238] = 3,
    ACTIONS(969), 1,
      anon_sym_COMMA,
    ACTIONS(1185), 1,
      anon_sym_RBRACK,
    STATE(362), 1,
      aux_sym_type_record_repeat1,
  [9248] = 3,
    ACTIONS(969), 1,
      anon_sym_COMMA,
    ACTIONS(1185), 1,
      anon_sym_RBRACK,
    STATE(361), 1,
      aux_sym_type_record_repeat1,
  [9258] = 3,
    ACTIONS(1187), 1,
      anon_sym_COMMA,
    ACTIONS(1190), 1,
      anon_sym_RPAREN,
    STATE(407), 1,
      aux_sym_query_plan_repeat1,
  [9268] = 3,
    ACTIONS(948), 1,
      anon_sym_COMMA,
    ACTIONS(1192), 1,
      anon_sym_RPAREN,
    STATE(352), 1,
      aux_sym_relation_decl_repeat2,
  [9278] = 3,
    ACTIONS(948), 1,
      anon_sym_COMMA,
    ACTIONS(1194), 1,
      anon_sym_RPAREN,
    STATE(359), 1,
      aux_sym_relation_decl_repeat2,
  [9288] = 3,
    ACTIONS(1038), 1,
      anon_sym_COMMA,
    ACTIONS(1196), 1,
      anon_sym_RPAREN,
    STATE(402), 1,
      aux_sym_directive_repeat2,
  [9298] = 3,
    ACTIONS(948), 1,
      anon_sym_COMMA,
    ACTIONS(1198), 1,
      anon_sym_RPAREN,
    STATE(352), 1,
      aux_sym_relation_decl_repeat2,
  [9308] = 3,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    ACTIONS(566), 1,
      anon_sym_RBRACK,
    STATE(347), 1,
      aux_sym_adt_constructor_repeat1,
  [9318] = 3,
    ACTIONS(1149), 1,
      anon_sym_COMMA,
    ACTIONS(1200), 1,
      anon_sym_LBRACE,
    STATE(356), 1,
      aux_sym_component_decl_repeat1,
  [9328] = 3,
    ACTIONS(1036), 1,
      anon_sym_DOT,
    ACTIONS(1115), 1,
      anon_sym_SEMI,
    STATE(394), 1,
      aux_sym_disjunction_repeat1,
  [9338] = 3,
    ACTIONS(1145), 1,
      anon_sym_COMMA,
    ACTIONS(1202), 1,
      anon_sym_GT,
    STATE(354), 1,
      aux_sym_component_type_repeat1,
  [9348] = 3,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(1204), 1,
      anon_sym_RPAREN,
    STATE(420), 1,
      aux_sym_match_repeat1,
  [9358] = 3,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    ACTIONS(1209), 1,
      anon_sym_RPAREN,
    STATE(417), 1,
      aux_sym_functor_decl_repeat1,
  [9368] = 3,
    ACTIONS(1032), 1,
      anon_sym_COMMA,
    ACTIONS(1211), 1,
      anon_sym_RPAREN,
    STATE(407), 1,
      aux_sym_query_plan_repeat1,
  [9378] = 3,
    ACTIONS(902), 1,
      anon_sym_COMMA,
    ACTIONS(1213), 1,
      anon_sym_RPAREN,
    STATE(417), 1,
      aux_sym_functor_decl_repeat1,
  [9388] = 3,
    ACTIONS(1215), 1,
      anon_sym_COMMA,
    ACTIONS(1218), 1,
      anon_sym_RPAREN,
    STATE(420), 1,
      aux_sym_match_repeat1,
  [9398] = 3,
    ACTIONS(902), 1,
      anon_sym_COMMA,
    ACTIONS(1220), 1,
      anon_sym_RPAREN,
    STATE(417), 1,
      aux_sym_functor_decl_repeat1,
  [9408] = 3,
    ACTIONS(1015), 1,
      anon_sym_COMMA,
    ACTIONS(1222), 1,
      anon_sym_RPAREN,
    STATE(337), 1,
      aux_sym_relation_decl_repeat1,
  [9418] = 3,
    ACTIONS(1032), 1,
      anon_sym_COMMA,
    ACTIONS(1224), 1,
      anon_sym_RPAREN,
    STATE(353), 1,
      aux_sym_query_plan_repeat1,
  [9428] = 1,
    ACTIONS(1226), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9433] = 1,
    ACTIONS(1228), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9438] = 2,
    ACTIONS(1230), 1,
      sym_ident,
    STATE(428), 1,
      sym_component_type,
  [9445] = 2,
    ACTIONS(1232), 1,
      sym_ident,
    STATE(176), 1,
      sym_qualified_name,
  [9452] = 2,
    ACTIONS(1234), 1,
      anon_sym_COLON,
    ACTIONS(1236), 1,
      anon_sym_LBRACE,
  [9459] = 1,
    ACTIONS(1238), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [9464] = 2,
    ACTIONS(1240), 1,
      anon_sym_LPAREN,
    ACTIONS(1242), 1,
      sym_ident,
  [9471] = 1,
    ACTIONS(1091), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9476] = 2,
    ACTIONS(1230), 1,
      sym_ident,
    STATE(429), 1,
      sym_component_type,
  [9483] = 1,
    ACTIONS(1244), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [9488] = 1,
    ACTIONS(1246), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9493] = 2,
    ACTIONS(952), 1,
      sym_ident,
    STATE(424), 1,
      sym_attribute,
  [9500] = 2,
    ACTIONS(1230), 1,
      sym_ident,
    STATE(390), 1,
      sym_component_type,
  [9507] = 2,
    ACTIONS(1230), 1,
      sym_ident,
    STATE(232), 1,
      sym_component_type,
  [9514] = 2,
    ACTIONS(952), 1,
      sym_ident,
    STATE(431), 1,
      sym_attribute,
  [9521] = 2,
    ACTIONS(952), 1,
      sym_ident,
    STATE(447), 1,
      sym_attribute,
  [9528] = 2,
    ACTIONS(1248), 1,
      sym_ident,
    STATE(188), 1,
      sym__adt_branch,
  [9535] = 2,
    ACTIONS(1250), 1,
      sym_ident,
    STATE(163), 1,
      sym_qualified_name,
  [9542] = 2,
    ACTIONS(1250), 1,
      sym_ident,
    STATE(265), 1,
      sym_qualified_name,
  [9549] = 2,
    ACTIONS(1232), 1,
      sym_ident,
    STATE(163), 1,
      sym_qualified_name,
  [9556] = 1,
    ACTIONS(1127), 2,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
  [9561] = 2,
    ACTIONS(27), 1,
      sym_ident,
    STATE(55), 1,
      sym_qualified_name,
  [9568] = 1,
    ACTIONS(1252), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9573] = 1,
    ACTIONS(1254), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9578] = 2,
    ACTIONS(1256), 1,
      sym_ident,
    STATE(55), 1,
      sym_qualified_name,
  [9585] = 1,
    ACTIONS(1258), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9590] = 2,
    ACTIONS(1260), 1,
      anon_sym_LPAREN,
    ACTIONS(1262), 1,
      sym_ident,
  [9597] = 1,
    ACTIONS(1264), 1,
      anon_sym_EQ,
  [9601] = 1,
    ACTIONS(1266), 1,
      anon_sym_EQ,
  [9605] = 1,
    ACTIONS(1268), 1,
      aux_sym_preprocessor_token1,
  [9609] = 1,
    ACTIONS(1270), 1,
      anon_sym_RPAREN,
  [9613] = 1,
    ACTIONS(1272), 1,
      anon_sym_DOT,
  [9617] = 1,
    ACTIONS(1274), 1,
      sym_ident,
  [9621] = 1,
    ACTIONS(1276), 1,
      anon_sym_COLON,
  [9625] = 1,
    ACTIONS(1278), 1,
      anon_sym_RPAREN,
  [9629] = 1,
    ACTIONS(1280), 1,
      anon_sym_LPAREN,
  [9633] = 1,
    ACTIONS(1282), 1,
      anon_sym_COLON,
  [9637] = 1,
    ACTIONS(1284), 1,
      anon_sym_RBRACE,
  [9641] = 1,
    ACTIONS(1286), 1,
      anon_sym_COLON,
  [9645] = 1,
    ACTIONS(1288), 1,
      anon_sym_RPAREN,
  [9649] = 1,
    ACTIONS(1290), 1,
      anon_sym_COLON_DASH,
  [9653] = 1,
    ACTIONS(1292), 1,
      anon_sym_LPAREN,
  [9657] = 1,
    ACTIONS(1294), 1,
      anon_sym_DOT,
  [9661] = 1,
    ACTIONS(1296), 1,
      anon_sym_LPAREN,
  [9665] = 1,
    ACTIONS(1298), 1,
      anon_sym_COLON,
  [9669] = 1,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
  [9673] = 1,
    ACTIONS(1300), 1,
      sym_ident,
  [9677] = 1,
    ACTIONS(1302), 1,
      anon_sym_LPAREN,
  [9681] = 1,
    ACTIONS(1304), 1,
      anon_sym_COLON,
  [9685] = 1,
    ACTIONS(1306), 1,
      anon_sym_LPAREN,
  [9689] = 1,
    ACTIONS(1308), 1,
      anon_sym_LPAREN,
  [9693] = 1,
    ACTIONS(1310), 1,
      anon_sym_LPAREN,
  [9697] = 1,
    ACTIONS(1312), 1,
      aux_sym_preprocessor_token1,
  [9701] = 1,
    ACTIONS(1314), 1,
      sym_ident,
  [9705] = 1,
    ACTIONS(1316), 1,
      sym_ident,
  [9709] = 1,
    ACTIONS(1318), 1,
      sym_ident,
  [9713] = 1,
    ACTIONS(1320), 1,
      anon_sym_RPAREN,
  [9717] = 1,
    ACTIONS(1322), 1,
      anon_sym_COLON,
  [9721] = 1,
    ACTIONS(1324), 1,
      anon_sym_EQ,
  [9725] = 1,
    ACTIONS(1326), 1,
      anon_sym_RBRACE,
  [9729] = 1,
    ACTIONS(993), 1,
      anon_sym_COLON,
  [9733] = 1,
    ACTIONS(1328), 1,
      anon_sym_COLON,
  [9737] = 1,
    ACTIONS(1330), 1,
      anon_sym_RPAREN,
  [9741] = 1,
    ACTIONS(1332), 1,
      sym_ident,
  [9745] = 1,
    ACTIONS(1334), 1,
      sym_ident,
  [9749] = 1,
    ACTIONS(654), 1,
      anon_sym_LBRACE,
  [9753] = 1,
    ACTIONS(1336), 1,
      anon_sym_LPAREN,
  [9757] = 1,
    ACTIONS(1338), 1,
      aux_sym_preprocessor_token1,
  [9761] = 1,
    ACTIONS(1340), 1,
      sym_ident,
  [9765] = 1,
    ACTIONS(1342), 1,
      anon_sym_DOT,
  [9769] = 1,
    ACTIONS(1344), 1,
      sym_ident,
  [9773] = 1,
    ACTIONS(1346), 1,
      sym_ident,
  [9777] = 1,
    ACTIONS(1348), 1,
      anon_sym_EQ,
  [9781] = 1,
    ACTIONS(1350), 1,
      anon_sym_COLON,
  [9785] = 1,
    ACTIONS(1352), 1,
      anon_sym_LPAREN,
  [9789] = 1,
    ACTIONS(1354), 1,
      anon_sym_LF,
  [9793] = 1,
    ACTIONS(1356), 1,
      anon_sym_SLASH,
  [9797] = 1,
    ACTIONS(1358), 1,
      sym_string,
  [9801] = 1,
    ACTIONS(1360), 1,
      anon_sym_LPAREN,
  [9805] = 1,
    ACTIONS(1362), 1,
      sym_ident,
  [9809] = 1,
    ACTIONS(1364), 1,
      sym_ident,
  [9813] = 1,
    ACTIONS(1366), 1,
      anon_sym_COLON,
  [9817] = 1,
    ACTIONS(1368), 1,
      ts_builtin_sym_end,
  [9821] = 1,
    ACTIONS(1370), 1,
      sym_ident,
  [9825] = 1,
    ACTIONS(1372), 1,
      aux_sym_preprocessor_token1,
  [9829] = 1,
    ACTIONS(1374), 1,
      sym_ident,
  [9833] = 1,
    ACTIONS(1376), 1,
      anon_sym_RPAREN,
  [9837] = 1,
    ACTIONS(1378), 1,
      anon_sym_RPAREN,
  [9841] = 1,
    ACTIONS(1380), 1,
      sym_string,
  [9845] = 1,
    ACTIONS(1382), 1,
      aux_sym_line_comment_token1,
  [9849] = 1,
    ACTIONS(1384), 1,
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
  [SMALL_STATE(83)] = 1725,
  [SMALL_STATE(84)] = 1774,
  [SMALL_STATE(85)] = 1823,
  [SMALL_STATE(86)] = 1872,
  [SMALL_STATE(87)] = 1943,
  [SMALL_STATE(88)] = 1988,
  [SMALL_STATE(89)] = 2037,
  [SMALL_STATE(90)] = 2086,
  [SMALL_STATE(91)] = 2133,
  [SMALL_STATE(92)] = 2182,
  [SMALL_STATE(93)] = 2231,
  [SMALL_STATE(94)] = 2280,
  [SMALL_STATE(95)] = 2329,
  [SMALL_STATE(96)] = 2378,
  [SMALL_STATE(97)] = 2427,
  [SMALL_STATE(98)] = 2476,
  [SMALL_STATE(99)] = 2525,
  [SMALL_STATE(100)] = 2574,
  [SMALL_STATE(101)] = 2623,
  [SMALL_STATE(102)] = 2672,
  [SMALL_STATE(103)] = 2721,
  [SMALL_STATE(104)] = 2770,
  [SMALL_STATE(105)] = 2819,
  [SMALL_STATE(106)] = 2868,
  [SMALL_STATE(107)] = 2917,
  [SMALL_STATE(108)] = 2988,
  [SMALL_STATE(109)] = 3037,
  [SMALL_STATE(110)] = 3086,
  [SMALL_STATE(111)] = 3130,
  [SMALL_STATE(112)] = 3175,
  [SMALL_STATE(113)] = 3219,
  [SMALL_STATE(114)] = 3260,
  [SMALL_STATE(115)] = 3321,
  [SMALL_STATE(116)] = 3382,
  [SMALL_STATE(117)] = 3443,
  [SMALL_STATE(118)] = 3504,
  [SMALL_STATE(119)] = 3565,
  [SMALL_STATE(120)] = 3626,
  [SMALL_STATE(121)] = 3687,
  [SMALL_STATE(122)] = 3728,
  [SMALL_STATE(123)] = 3764,
  [SMALL_STATE(124)] = 3800,
  [SMALL_STATE(125)] = 3837,
  [SMALL_STATE(126)] = 3873,
  [SMALL_STATE(127)] = 3913,
  [SMALL_STATE(128)] = 3949,
  [SMALL_STATE(129)] = 3989,
  [SMALL_STATE(130)] = 4029,
  [SMALL_STATE(131)] = 4063,
  [SMALL_STATE(132)] = 4103,
  [SMALL_STATE(133)] = 4143,
  [SMALL_STATE(134)] = 4179,
  [SMALL_STATE(135)] = 4219,
  [SMALL_STATE(136)] = 4254,
  [SMALL_STATE(137)] = 4291,
  [SMALL_STATE(138)] = 4325,
  [SMALL_STATE(139)] = 4359,
  [SMALL_STATE(140)] = 4393,
  [SMALL_STATE(141)] = 4427,
  [SMALL_STATE(142)] = 4461,
  [SMALL_STATE(143)] = 4487,
  [SMALL_STATE(144)] = 4515,
  [SMALL_STATE(145)] = 4540,
  [SMALL_STATE(146)] = 4569,
  [SMALL_STATE(147)] = 4598,
  [SMALL_STATE(148)] = 4623,
  [SMALL_STATE(149)] = 4652,
  [SMALL_STATE(150)] = 4680,
  [SMALL_STATE(151)] = 4708,
  [SMALL_STATE(152)] = 4736,
  [SMALL_STATE(153)] = 4764,
  [SMALL_STATE(154)] = 4792,
  [SMALL_STATE(155)] = 4820,
  [SMALL_STATE(156)] = 4848,
  [SMALL_STATE(157)] = 4876,
  [SMALL_STATE(158)] = 4904,
  [SMALL_STATE(159)] = 4932,
  [SMALL_STATE(160)] = 4960,
  [SMALL_STATE(161)] = 4986,
  [SMALL_STATE(162)] = 5014,
  [SMALL_STATE(163)] = 5042,
  [SMALL_STATE(164)] = 5066,
  [SMALL_STATE(165)] = 5094,
  [SMALL_STATE(166)] = 5122,
  [SMALL_STATE(167)] = 5150,
  [SMALL_STATE(168)] = 5178,
  [SMALL_STATE(169)] = 5206,
  [SMALL_STATE(170)] = 5236,
  [SMALL_STATE(171)] = 5264,
  [SMALL_STATE(172)] = 5292,
  [SMALL_STATE(173)] = 5320,
  [SMALL_STATE(174)] = 5348,
  [SMALL_STATE(175)] = 5371,
  [SMALL_STATE(176)] = 5400,
  [SMALL_STATE(177)] = 5429,
  [SMALL_STATE(178)] = 5452,
  [SMALL_STATE(179)] = 5475,
  [SMALL_STATE(180)] = 5498,
  [SMALL_STATE(181)] = 5525,
  [SMALL_STATE(182)] = 5548,
  [SMALL_STATE(183)] = 5571,
  [SMALL_STATE(184)] = 5594,
  [SMALL_STATE(185)] = 5617,
  [SMALL_STATE(186)] = 5640,
  [SMALL_STATE(187)] = 5663,
  [SMALL_STATE(188)] = 5686,
  [SMALL_STATE(189)] = 5709,
  [SMALL_STATE(190)] = 5732,
  [SMALL_STATE(191)] = 5761,
  [SMALL_STATE(192)] = 5790,
  [SMALL_STATE(193)] = 5819,
  [SMALL_STATE(194)] = 5841,
  [SMALL_STATE(195)] = 5863,
  [SMALL_STATE(196)] = 5885,
  [SMALL_STATE(197)] = 5909,
  [SMALL_STATE(198)] = 5931,
  [SMALL_STATE(199)] = 5957,
  [SMALL_STATE(200)] = 5979,
  [SMALL_STATE(201)] = 6001,
  [SMALL_STATE(202)] = 6023,
  [SMALL_STATE(203)] = 6045,
  [SMALL_STATE(204)] = 6067,
  [SMALL_STATE(205)] = 6089,
  [SMALL_STATE(206)] = 6111,
  [SMALL_STATE(207)] = 6133,
  [SMALL_STATE(208)] = 6155,
  [SMALL_STATE(209)] = 6177,
  [SMALL_STATE(210)] = 6199,
  [SMALL_STATE(211)] = 6221,
  [SMALL_STATE(212)] = 6243,
  [SMALL_STATE(213)] = 6269,
  [SMALL_STATE(214)] = 6291,
  [SMALL_STATE(215)] = 6317,
  [SMALL_STATE(216)] = 6339,
  [SMALL_STATE(217)] = 6361,
  [SMALL_STATE(218)] = 6383,
  [SMALL_STATE(219)] = 6405,
  [SMALL_STATE(220)] = 6431,
  [SMALL_STATE(221)] = 6453,
  [SMALL_STATE(222)] = 6475,
  [SMALL_STATE(223)] = 6497,
  [SMALL_STATE(224)] = 6523,
  [SMALL_STATE(225)] = 6545,
  [SMALL_STATE(226)] = 6567,
  [SMALL_STATE(227)] = 6589,
  [SMALL_STATE(228)] = 6611,
  [SMALL_STATE(229)] = 6633,
  [SMALL_STATE(230)] = 6655,
  [SMALL_STATE(231)] = 6677,
  [SMALL_STATE(232)] = 6699,
  [SMALL_STATE(233)] = 6721,
  [SMALL_STATE(234)] = 6743,
  [SMALL_STATE(235)] = 6765,
  [SMALL_STATE(236)] = 6787,
  [SMALL_STATE(237)] = 6809,
  [SMALL_STATE(238)] = 6831,
  [SMALL_STATE(239)] = 6853,
  [SMALL_STATE(240)] = 6875,
  [SMALL_STATE(241)] = 6897,
  [SMALL_STATE(242)] = 6923,
  [SMALL_STATE(243)] = 6945,
  [SMALL_STATE(244)] = 6967,
  [SMALL_STATE(245)] = 6989,
  [SMALL_STATE(246)] = 7011,
  [SMALL_STATE(247)] = 7033,
  [SMALL_STATE(248)] = 7055,
  [SMALL_STATE(249)] = 7081,
  [SMALL_STATE(250)] = 7103,
  [SMALL_STATE(251)] = 7125,
  [SMALL_STATE(252)] = 7147,
  [SMALL_STATE(253)] = 7172,
  [SMALL_STATE(254)] = 7197,
  [SMALL_STATE(255)] = 7222,
  [SMALL_STATE(256)] = 7245,
  [SMALL_STATE(257)] = 7272,
  [SMALL_STATE(258)] = 7297,
  [SMALL_STATE(259)] = 7320,
  [SMALL_STATE(260)] = 7343,
  [SMALL_STATE(261)] = 7368,
  [SMALL_STATE(262)] = 7393,
  [SMALL_STATE(263)] = 7413,
  [SMALL_STATE(264)] = 7433,
  [SMALL_STATE(265)] = 7457,
  [SMALL_STATE(266)] = 7483,
  [SMALL_STATE(267)] = 7503,
  [SMALL_STATE(268)] = 7529,
  [SMALL_STATE(269)] = 7549,
  [SMALL_STATE(270)] = 7569,
  [SMALL_STATE(271)] = 7589,
  [SMALL_STATE(272)] = 7609,
  [SMALL_STATE(273)] = 7629,
  [SMALL_STATE(274)] = 7652,
  [SMALL_STATE(275)] = 7675,
  [SMALL_STATE(276)] = 7698,
  [SMALL_STATE(277)] = 7721,
  [SMALL_STATE(278)] = 7738,
  [SMALL_STATE(279)] = 7765,
  [SMALL_STATE(280)] = 7794,
  [SMALL_STATE(281)] = 7823,
  [SMALL_STATE(282)] = 7852,
  [SMALL_STATE(283)] = 7873,
  [SMALL_STATE(284)] = 7894,
  [SMALL_STATE(285)] = 7912,
  [SMALL_STATE(286)] = 7927,
  [SMALL_STATE(287)] = 7942,
  [SMALL_STATE(288)] = 7957,
  [SMALL_STATE(289)] = 7972,
  [SMALL_STATE(290)] = 7987,
  [SMALL_STATE(291)] = 8002,
  [SMALL_STATE(292)] = 8017,
  [SMALL_STATE(293)] = 8032,
  [SMALL_STATE(294)] = 8047,
  [SMALL_STATE(295)] = 8062,
  [SMALL_STATE(296)] = 8077,
  [SMALL_STATE(297)] = 8092,
  [SMALL_STATE(298)] = 8107,
  [SMALL_STATE(299)] = 8119,
  [SMALL_STATE(300)] = 8131,
  [SMALL_STATE(301)] = 8139,
  [SMALL_STATE(302)] = 8155,
  [SMALL_STATE(303)] = 8171,
  [SMALL_STATE(304)] = 8183,
  [SMALL_STATE(305)] = 8191,
  [SMALL_STATE(306)] = 8199,
  [SMALL_STATE(307)] = 8211,
  [SMALL_STATE(308)] = 8223,
  [SMALL_STATE(309)] = 8235,
  [SMALL_STATE(310)] = 8247,
  [SMALL_STATE(311)] = 8263,
  [SMALL_STATE(312)] = 8271,
  [SMALL_STATE(313)] = 8283,
  [SMALL_STATE(314)] = 8299,
  [SMALL_STATE(315)] = 8311,
  [SMALL_STATE(316)] = 8319,
  [SMALL_STATE(317)] = 8335,
  [SMALL_STATE(318)] = 8343,
  [SMALL_STATE(319)] = 8351,
  [SMALL_STATE(320)] = 8359,
  [SMALL_STATE(321)] = 8371,
  [SMALL_STATE(322)] = 8379,
  [SMALL_STATE(323)] = 8387,
  [SMALL_STATE(324)] = 8401,
  [SMALL_STATE(325)] = 8409,
  [SMALL_STATE(326)] = 8417,
  [SMALL_STATE(327)] = 8433,
  [SMALL_STATE(328)] = 8445,
  [SMALL_STATE(329)] = 8453,
  [SMALL_STATE(330)] = 8464,
  [SMALL_STATE(331)] = 8471,
  [SMALL_STATE(332)] = 8482,
  [SMALL_STATE(333)] = 8495,
  [SMALL_STATE(334)] = 8508,
  [SMALL_STATE(335)] = 8519,
  [SMALL_STATE(336)] = 8526,
  [SMALL_STATE(337)] = 8537,
  [SMALL_STATE(338)] = 8548,
  [SMALL_STATE(339)] = 8559,
  [SMALL_STATE(340)] = 8572,
  [SMALL_STATE(341)] = 8583,
  [SMALL_STATE(342)] = 8594,
  [SMALL_STATE(343)] = 8607,
  [SMALL_STATE(344)] = 8618,
  [SMALL_STATE(345)] = 8629,
  [SMALL_STATE(346)] = 8642,
  [SMALL_STATE(347)] = 8653,
  [SMALL_STATE(348)] = 8664,
  [SMALL_STATE(349)] = 8677,
  [SMALL_STATE(350)] = 8688,
  [SMALL_STATE(351)] = 8701,
  [SMALL_STATE(352)] = 8712,
  [SMALL_STATE(353)] = 8722,
  [SMALL_STATE(354)] = 8732,
  [SMALL_STATE(355)] = 8742,
  [SMALL_STATE(356)] = 8752,
  [SMALL_STATE(357)] = 8762,
  [SMALL_STATE(358)] = 8772,
  [SMALL_STATE(359)] = 8782,
  [SMALL_STATE(360)] = 8792,
  [SMALL_STATE(361)] = 8802,
  [SMALL_STATE(362)] = 8812,
  [SMALL_STATE(363)] = 8822,
  [SMALL_STATE(364)] = 8832,
  [SMALL_STATE(365)] = 8842,
  [SMALL_STATE(366)] = 8852,
  [SMALL_STATE(367)] = 8862,
  [SMALL_STATE(368)] = 8872,
  [SMALL_STATE(369)] = 8882,
  [SMALL_STATE(370)] = 8892,
  [SMALL_STATE(371)] = 8902,
  [SMALL_STATE(372)] = 8912,
  [SMALL_STATE(373)] = 8922,
  [SMALL_STATE(374)] = 8928,
  [SMALL_STATE(375)] = 8938,
  [SMALL_STATE(376)] = 8948,
  [SMALL_STATE(377)] = 8958,
  [SMALL_STATE(378)] = 8968,
  [SMALL_STATE(379)] = 8978,
  [SMALL_STATE(380)] = 8988,
  [SMALL_STATE(381)] = 8998,
  [SMALL_STATE(382)] = 9008,
  [SMALL_STATE(383)] = 9018,
  [SMALL_STATE(384)] = 9028,
  [SMALL_STATE(385)] = 9038,
  [SMALL_STATE(386)] = 9048,
  [SMALL_STATE(387)] = 9058,
  [SMALL_STATE(388)] = 9068,
  [SMALL_STATE(389)] = 9078,
  [SMALL_STATE(390)] = 9088,
  [SMALL_STATE(391)] = 9098,
  [SMALL_STATE(392)] = 9108,
  [SMALL_STATE(393)] = 9118,
  [SMALL_STATE(394)] = 9128,
  [SMALL_STATE(395)] = 9138,
  [SMALL_STATE(396)] = 9148,
  [SMALL_STATE(397)] = 9158,
  [SMALL_STATE(398)] = 9168,
  [SMALL_STATE(399)] = 9178,
  [SMALL_STATE(400)] = 9188,
  [SMALL_STATE(401)] = 9198,
  [SMALL_STATE(402)] = 9208,
  [SMALL_STATE(403)] = 9218,
  [SMALL_STATE(404)] = 9228,
  [SMALL_STATE(405)] = 9238,
  [SMALL_STATE(406)] = 9248,
  [SMALL_STATE(407)] = 9258,
  [SMALL_STATE(408)] = 9268,
  [SMALL_STATE(409)] = 9278,
  [SMALL_STATE(410)] = 9288,
  [SMALL_STATE(411)] = 9298,
  [SMALL_STATE(412)] = 9308,
  [SMALL_STATE(413)] = 9318,
  [SMALL_STATE(414)] = 9328,
  [SMALL_STATE(415)] = 9338,
  [SMALL_STATE(416)] = 9348,
  [SMALL_STATE(417)] = 9358,
  [SMALL_STATE(418)] = 9368,
  [SMALL_STATE(419)] = 9378,
  [SMALL_STATE(420)] = 9388,
  [SMALL_STATE(421)] = 9398,
  [SMALL_STATE(422)] = 9408,
  [SMALL_STATE(423)] = 9418,
  [SMALL_STATE(424)] = 9428,
  [SMALL_STATE(425)] = 9433,
  [SMALL_STATE(426)] = 9438,
  [SMALL_STATE(427)] = 9445,
  [SMALL_STATE(428)] = 9452,
  [SMALL_STATE(429)] = 9459,
  [SMALL_STATE(430)] = 9464,
  [SMALL_STATE(431)] = 9471,
  [SMALL_STATE(432)] = 9476,
  [SMALL_STATE(433)] = 9483,
  [SMALL_STATE(434)] = 9488,
  [SMALL_STATE(435)] = 9493,
  [SMALL_STATE(436)] = 9500,
  [SMALL_STATE(437)] = 9507,
  [SMALL_STATE(438)] = 9514,
  [SMALL_STATE(439)] = 9521,
  [SMALL_STATE(440)] = 9528,
  [SMALL_STATE(441)] = 9535,
  [SMALL_STATE(442)] = 9542,
  [SMALL_STATE(443)] = 9549,
  [SMALL_STATE(444)] = 9556,
  [SMALL_STATE(445)] = 9561,
  [SMALL_STATE(446)] = 9568,
  [SMALL_STATE(447)] = 9573,
  [SMALL_STATE(448)] = 9578,
  [SMALL_STATE(449)] = 9585,
  [SMALL_STATE(450)] = 9590,
  [SMALL_STATE(451)] = 9597,
  [SMALL_STATE(452)] = 9601,
  [SMALL_STATE(453)] = 9605,
  [SMALL_STATE(454)] = 9609,
  [SMALL_STATE(455)] = 9613,
  [SMALL_STATE(456)] = 9617,
  [SMALL_STATE(457)] = 9621,
  [SMALL_STATE(458)] = 9625,
  [SMALL_STATE(459)] = 9629,
  [SMALL_STATE(460)] = 9633,
  [SMALL_STATE(461)] = 9637,
  [SMALL_STATE(462)] = 9641,
  [SMALL_STATE(463)] = 9645,
  [SMALL_STATE(464)] = 9649,
  [SMALL_STATE(465)] = 9653,
  [SMALL_STATE(466)] = 9657,
  [SMALL_STATE(467)] = 9661,
  [SMALL_STATE(468)] = 9665,
  [SMALL_STATE(469)] = 9669,
  [SMALL_STATE(470)] = 9673,
  [SMALL_STATE(471)] = 9677,
  [SMALL_STATE(472)] = 9681,
  [SMALL_STATE(473)] = 9685,
  [SMALL_STATE(474)] = 9689,
  [SMALL_STATE(475)] = 9693,
  [SMALL_STATE(476)] = 9697,
  [SMALL_STATE(477)] = 9701,
  [SMALL_STATE(478)] = 9705,
  [SMALL_STATE(479)] = 9709,
  [SMALL_STATE(480)] = 9713,
  [SMALL_STATE(481)] = 9717,
  [SMALL_STATE(482)] = 9721,
  [SMALL_STATE(483)] = 9725,
  [SMALL_STATE(484)] = 9729,
  [SMALL_STATE(485)] = 9733,
  [SMALL_STATE(486)] = 9737,
  [SMALL_STATE(487)] = 9741,
  [SMALL_STATE(488)] = 9745,
  [SMALL_STATE(489)] = 9749,
  [SMALL_STATE(490)] = 9753,
  [SMALL_STATE(491)] = 9757,
  [SMALL_STATE(492)] = 9761,
  [SMALL_STATE(493)] = 9765,
  [SMALL_STATE(494)] = 9769,
  [SMALL_STATE(495)] = 9773,
  [SMALL_STATE(496)] = 9777,
  [SMALL_STATE(497)] = 9781,
  [SMALL_STATE(498)] = 9785,
  [SMALL_STATE(499)] = 9789,
  [SMALL_STATE(500)] = 9793,
  [SMALL_STATE(501)] = 9797,
  [SMALL_STATE(502)] = 9801,
  [SMALL_STATE(503)] = 9805,
  [SMALL_STATE(504)] = 9809,
  [SMALL_STATE(505)] = 9813,
  [SMALL_STATE(506)] = 9817,
  [SMALL_STATE(507)] = 9821,
  [SMALL_STATE(508)] = 9825,
  [SMALL_STATE(509)] = 9829,
  [SMALL_STATE(510)] = 9833,
  [SMALL_STATE(511)] = 9837,
  [SMALL_STATE(512)] = 9841,
  [SMALL_STATE(513)] = 9845,
  [SMALL_STATE(514)] = 9849,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intrinsic_functor, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(46),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negation, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negation, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(492),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 5, .production_id = 55),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 5, .production_id = 55),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 3, .production_id = 9),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 3, .production_id = 9),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4, .production_id = 28),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 4, .production_id = 28),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4, .production_id = 27),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 4, .production_id = 27),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_constructor, 2, .production_id = 22),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adt_constructor, 2, .production_id = 22),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_call, 4, .production_id = 85),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_call, 4, .production_id = 85),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_op, 3, .production_id = 52),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_op, 3, .production_id = 52),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_constructor, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_constructor, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_constructor, 5, .production_id = 22),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adt_constructor, 5, .production_id = 22),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_constructor, 4, .production_id = 22),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adt_constructor, 4, .production_id = 22),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 8, .production_id = 131),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 8, .production_id = 131),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_call, 4, .production_id = 84),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_call, 4, .production_id = 84),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 4, .production_id = 83),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 4, .production_id = 83),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_constructor, 6, .production_id = 22),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adt_constructor, 6, .production_id = 22),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 3, .production_id = 50),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 3, .production_id = 50),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as, 6, .production_id = 125),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as, 6, .production_id = 125),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_constructor, 4),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_constructor, 4),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_call, 5, .production_id = 112),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_call, 5, .production_id = 112),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 6, .production_id = 126),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 6, .production_id = 126),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 3),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_constructor, 3),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_constructor, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 6, .production_id = 127),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 6, .production_id = 127),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 5, .production_id = 111),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 5, .production_id = 111),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_call, 3, .production_id = 53),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_call, 3, .production_id = 53),
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
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 120),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 8, .production_id = 120),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 69),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 69),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 4, .production_id = 14),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 4, .production_id = 14),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 44),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 44),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(476),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(514),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(513),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(512),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(509),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(426),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(507),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(427),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(333),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(296),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(299),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(47),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 4, .production_id = 16),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 4, .production_id = 16),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 41),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 41),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_op, 2, .production_id = 25),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_op, 2, .production_id = 25),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 4, .production_id = 15),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 4, .production_id = 15),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 4, .production_id = 18),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 4, .production_id = 18),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 39),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 39),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 3),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 43),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 43),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 65),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 65),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 42),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 42),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 70),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 70),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 72),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 72),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 74),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 74),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 75),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 75),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 76),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 76),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 103),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 103),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 36),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 36),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 96),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 96),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 100),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 100),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 101),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 101),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 37),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 37),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [489] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2), SHIFT_REPEAT(110),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(476),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(514),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(513),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(426),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(456),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(507),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(442),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(333),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(298),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(47),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 3, .production_id = 52),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_adt_constructor_repeat1, 2),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_repeat1, 2, .production_id = 26),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_type, 1, .production_id = 2),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_type, 4, .production_id = 31),
  [598] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(479),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_type, 5, .production_id = 58),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 2),
  [607] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 2), SHIFT_REPEAT(491),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt, 4, .production_id = 46),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 8, .production_id = 132),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 6, .production_id = 130),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 5),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 6, .production_id = 132),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 4),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2),
  [630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2), SHIFT_REPEAT(430),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_monotonic_rule, 4, .production_id = 24),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 3),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 2),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2, .production_id = 4),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 7, .production_id = 132),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_monotonic_rule, 5, .production_id = 54),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_adt_repeat1, 2, .production_id = 79),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_adt_repeat1, 2, .production_id = 79), SHIFT_REPEAT(440),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt, 3, .production_id = 19),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsumptive_rule, 6, .production_id = 86),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 5, .production_id = 130),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 6),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 7, .production_id = 130),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, .production_id = 8),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, .production_id = 4),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 5),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 5, .production_id = 130),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__adt_branch, 4, .production_id = 106),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2, .production_id = 21),
  [682] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2, .production_id = 21), SHIFT_REPEAT(443),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__adt_branch, 4, .production_id = 105),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__adt_branch, 3, .production_id = 77),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 4),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 6, .production_id = 132),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 6, .production_id = 130),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 7, .production_id = 132),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__adt_branch, 5, .production_id = 122),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_adt_repeat1, 2, .production_id = 78),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_union_repeat1, 2),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [705] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(504),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 93),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 95),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 94),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_decl, 5, .production_id = 32),
  [716] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_union_repeat1, 2), SHIFT_REPEAT(288),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 33),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 73),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 71),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 35),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 68),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 67),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 38),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 66),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 40),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 64),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 63),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 8, .production_id = 124),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 102),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 8, .production_id = 123),
  [749] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(503),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 121),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_record, 4, .production_id = 45),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 6, .production_id = 80),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 119),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_legacy_bare_type_decl, 1, .production_id = 2),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 118),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_record, 6, .production_id = 45),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 4, .production_id = 13),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_union, 4, .production_id = 47),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 117),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_decl, 6, .production_id = 61),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, .production_id = 48),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_record, 5, .production_id = 45),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, .production_id = 8),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_decl, 4, .production_id = 10),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_decl, 8, .production_id = 116),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 7, .production_id = 109),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_init, 4, .production_id = 11),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 97),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 98),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 9, .production_id = 128),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 9, .production_id = 129),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, .production_id = 4),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 99),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtype, 3, .production_id = 20),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 3),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_synonym, 3, .production_id = 20),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor, 3, .production_id = 6),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_monotonic_rule, 6, .production_id = 87),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_monotonic_rule, 5, .production_id = 51),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2, .production_id = 5),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_decl, 7, .production_id = 91),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_decl, 7, .production_id = 92),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsumptive_rule, 7, .production_id = 113),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 2),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 115),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 8, .production_id = 115),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 6, .production_id = 56),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 6, .production_id = 56),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 7, .production_id = 90),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 7, .production_id = 90),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 7, .production_id = 89),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [852] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 7, .production_id = 89),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 2, .production_id = 1),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 7, .production_id = 88),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 7, .production_id = 88),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 114),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [870] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 8, .production_id = 114),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 90),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 3, .production_id = 7),
  [876] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2, .production_id = 21), SHIFT_REPEAT(441),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 88),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_legacy_type_decl, 2, .production_id = 3),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 9, .production_id = 114),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 9, .production_id = 115),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 7, .production_id = 56),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 89),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [895] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_union_repeat1, 2), SHIFT_REPEAT(289),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [932] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 3),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 5),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2),
  [962] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(16),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 4),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 5, .production_id = 110),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 3),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 4),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains, 3),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 4, .production_id = 81),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 4, .production_id = 82),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains, 4, .production_id = 81),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains, 4, .production_id = 82),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 3),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 5),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains, 5, .production_id = 110),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 34),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 1),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2),
  [1027] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2), SHIFT_REPEAT(495),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 2),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1044] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(13),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1049] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_adt_constructor_repeat1, 2), SHIFT_REPEAT(38),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1056] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(17),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1063] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2, .production_id = 17), SHIFT_REPEAT(439),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2, .production_id = 17),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1070] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_type_repeat1, 2, .production_id = 59), SHIFT_REPEAT(494),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_type_repeat1, 2, .production_id = 59),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1077] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat1, 2, .production_id = 62), SHIFT_REPEAT(432),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat1, 2, .production_id = 62),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1088] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_record_repeat1, 2), SHIFT_REPEAT(438),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_record_repeat1, 2),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__adt_branch_repeat1, 2, .production_id = 107), SHIFT_REPEAT(435),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__adt_branch_repeat1, 2, .production_id = 107),
  [1124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_monotonic_rule_repeat1, 2), SHIFT_REPEAT(360),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_monotonic_rule_repeat1, 2),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(14),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2, .production_id = 49), SHIFT_REPEAT(478),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2, .production_id = 49),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat1, 2), SHIFT_REPEAT(508),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat1, 2),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functor_decl_repeat1, 2, .production_id = 30), SHIFT_REPEAT(284),
  [1209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functor_decl_repeat1, 2, .production_id = 30),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_repeat1, 2, .production_id = 29), SHIFT_REPEAT(32),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_repeat1, 2, .production_id = 29),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__adt_branch_repeat1, 2, .production_id = 104),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functor_decl_repeat1, 2, .production_id = 10),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat1, 2, .production_id = 60),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_type_repeat1, 2, .production_id = 57),
  [1246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat1, 2, .production_id = 133),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functor_decl_repeat1, 2, .production_id = 12),
  [1254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2, .production_id = 12),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 4, .production_id = 108),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined_functor, 2, .production_id = 23),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1368] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
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
