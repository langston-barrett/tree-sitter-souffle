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
#define FIELD_COUNT 33
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 77

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
  field_qualifier = 21,
  field_relation = 22,
  field_return = 23,
  field_right = 24,
  field_step = 25,
  field_subsumed = 26,
  field_subsumes = 27,
  field_subtype = 28,
  field_super = 29,
  field_supertype = 30,
  field_type = 31,
  field_value = 32,
  field_var = 33,
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
  [14] = {.index = 18, .length = 2},
  [15] = {.index = 20, .length = 2},
  [16] = {.index = 22, .length = 2},
  [17] = {.index = 24, .length = 1},
  [18] = {.index = 25, .length = 2},
  [19] = {.index = 27, .length = 2},
  [20] = {.index = 29, .length = 1},
  [21] = {.index = 30, .length = 2},
  [22] = {.index = 32, .length = 2},
  [23] = {.index = 34, .length = 2},
  [24] = {.index = 36, .length = 1},
  [25] = {.index = 37, .length = 4},
  [26] = {.index = 41, .length = 2},
  [27] = {.index = 43, .length = 2},
  [28] = {.index = 45, .length = 2},
  [29] = {.index = 47, .length = 1},
  [30] = {.index = 48, .length = 2},
  [31] = {.index = 50, .length = 2},
  [32] = {.index = 52, .length = 1},
  [33] = {.index = 53, .length = 3},
  [34] = {.index = 56, .length = 3},
  [35] = {.index = 59, .length = 4},
  [36] = {.index = 63, .length = 1},
  [37] = {.index = 64, .length = 3},
  [38] = {.index = 67, .length = 3},
  [39] = {.index = 70, .length = 3},
  [40] = {.index = 73, .length = 3},
  [41] = {.index = 76, .length = 2},
  [42] = {.index = 78, .length = 1},
  [43] = {.index = 79, .length = 3},
  [44] = {.index = 82, .length = 2},
  [45] = {.index = 84, .length = 1},
  [46] = {.index = 85, .length = 2},
  [47] = {.index = 87, .length = 2},
  [48] = {.index = 89, .length = 1},
  [49] = {.index = 90, .length = 2},
  [50] = {.index = 92, .length = 3},
  [51] = {.index = 95, .length = 4},
  [52] = {.index = 99, .length = 1},
  [53] = {.index = 100, .length = 3},
  [54] = {.index = 103, .length = 4},
  [55] = {.index = 107, .length = 3},
  [56] = {.index = 110, .length = 3},
  [57] = {.index = 113, .length = 4},
  [58] = {.index = 117, .length = 3},
  [59] = {.index = 120, .length = 3},
  [60] = {.index = 123, .length = 2},
  [61] = {.index = 125, .length = 3},
  [62] = {.index = 128, .length = 2},
  [63] = {.index = 130, .length = 3},
  [64] = {.index = 133, .length = 3},
  [65] = {.index = 136, .length = 4},
  [66] = {.index = 140, .length = 5},
  [67] = {.index = 145, .length = 5},
  [68] = {.index = 150, .length = 4},
  [69] = {.index = 154, .length = 3},
  [70] = {.index = 157, .length = 5},
  [71] = {.index = 162, .length = 4},
  [72] = {.index = 166, .length = 2},
  [73] = {.index = 168, .length = 3},
  [74] = {.index = 171, .length = 2},
  [75] = {.index = 173, .length = 6},
  [76] = {.index = 179, .length = 3},
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
    {field_left, 0},
  [20] =
    {field_left, 0},
    {field_right, 2},
  [22] =
    {field_relation, 0, .inherited = true},
    {field_relation, 1, .inherited = true},
  [24] =
    {field_constructor, 1},
  [25] =
    {field_body, 2},
    {field_head, 0},
  [27] =
    {field_operand, 1},
    {field_operator, 0},
  [29] =
    {field_argument, 1},
  [30] =
    {field_argument, 2},
    {field_relation, 0},
  [32] =
    {field_argument, 2, .inherited = true},
    {field_relation, 0},
  [34] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [36] =
    {field_attribute, 1},
  [37] =
    {field_attribute, 0, .inherited = true},
    {field_attribute, 1, .inherited = true},
    {field_type, 0, .inherited = true},
    {field_type, 1, .inherited = true},
  [41] =
    {field_name, 0},
    {field_param, 2},
  [43] =
    {field_body, 3},
    {field_type, 1},
  [45] =
    {field_type, 2},
    {field_var, 0},
  [47] =
    {field_qualifier, 4},
  [48] =
    {field_head, 1},
    {field_qualifier, 4},
  [50] =
    {field_head, 1},
    {field_head, 2},
  [52] =
    {field_left, 0},
  [53] =
    {field_branch, 2},
    {field_branch, 3},
    {field_left, 0},
  [56] =
    {field_key, 3, .inherited = true},
    {field_relation, 1},
    {field_value, 3, .inherited = true},
  [59] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [63] =
    {field_body, 2},
  [64] =
    {field_body, 2},
    {field_head, 0},
    {field_plan, 4},
  [67] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [70] =
    {field_body, 3},
    {field_head, 0},
    {field_head, 1},
  [73] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_relation, 0},
  [76] =
    {field_name, 1},
    {field_return, 5},
  [78] =
    {field_param, 1},
  [79] =
    {field_name, 0},
    {field_param, 2},
    {field_param, 3, .inherited = true},
  [82] =
    {field_param, 0, .inherited = true},
    {field_param, 1, .inherited = true},
  [84] =
    {field_super, 1},
  [85] =
    {field_super, 3},
    {field_type, 1},
  [87] =
    {field_super, 0, .inherited = true},
    {field_super, 1, .inherited = true},
  [89] =
    {field_qualifier, 5},
  [90] =
    {field_head, 1},
    {field_qualifier, 5},
  [92] =
    {field_head, 1},
    {field_head, 2},
    {field_qualifier, 5},
  [95] =
    {field_key, 4, .inherited = true},
    {field_relation, 1},
    {field_relation, 2, .inherited = true},
    {field_value, 4, .inherited = true},
  [99] =
    {field_body, 3},
  [100] =
    {field_body, 4},
    {field_subsumed, 0},
    {field_subsumes, 2},
  [103] =
    {field_body, 3},
    {field_head, 0},
    {field_head, 1},
    {field_plan, 5},
  [107] =
    {field_name, 1},
    {field_return, 6},
    {field_type, 3},
  [110] =
    {field_attribute, 3},
    {field_name, 1},
    {field_return, 6},
  [113] =
    {field_attribute, 3, .inherited = true},
    {field_name, 1},
    {field_return, 6},
    {field_type, 3, .inherited = true},
  [117] =
    {field_body, 5},
    {field_super, 3},
    {field_type, 1},
  [120] =
    {field_super, 3},
    {field_super, 4, .inherited = true},
    {field_type, 1},
  [123] =
    {field_head, 1},
    {field_qualifier, 6},
  [125] =
    {field_head, 1},
    {field_head, 2},
    {field_qualifier, 6},
  [128] =
    {field_key, 1},
    {field_value, 3},
  [130] =
    {field_key, 3},
    {field_relation, 1},
    {field_value, 5},
  [133] =
    {field_body, 2},
    {field_body, 3},
    {field_body, 4},
  [136] =
    {field_body, 4},
    {field_plan, 6},
    {field_subsumed, 0},
    {field_subsumes, 2},
  [140] =
    {field_attribute, 4, .inherited = true},
    {field_name, 1},
    {field_return, 7},
    {field_type, 3},
    {field_type, 4, .inherited = true},
  [145] =
    {field_attribute, 3},
    {field_attribute, 4, .inherited = true},
    {field_name, 1},
    {field_return, 7},
    {field_type, 4, .inherited = true},
  [150] =
    {field_body, 6},
    {field_super, 3},
    {field_super, 4, .inherited = true},
    {field_type, 1},
  [154] =
    {field_head, 1},
    {field_head, 2},
    {field_qualifier, 7},
  [157] =
    {field_key, 3},
    {field_key, 6, .inherited = true},
    {field_relation, 1},
    {field_value, 5},
    {field_value, 6, .inherited = true},
  [162] =
    {field_key, 4},
    {field_relation, 1},
    {field_relation, 2, .inherited = true},
    {field_value, 6},
  [166] =
    {field_expr, 2},
    {field_type, 4},
  [168] =
    {field_body, 3},
    {field_body, 4},
    {field_body, 5},
  [171] =
    {field_high, 4},
    {field_low, 2},
  [173] =
    {field_key, 4},
    {field_key, 7, .inherited = true},
    {field_relation, 1},
    {field_relation, 2, .inherited = true},
    {field_value, 6},
    {field_value, 7, .inherited = true},
  [179] =
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
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
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
  [81] = {.lex_state = 304},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 304},
  [84] = {.lex_state = 304},
  [85] = {.lex_state = 304},
  [86] = {.lex_state = 304},
  [87] = {.lex_state = 304},
  [88] = {.lex_state = 304},
  [89] = {.lex_state = 304},
  [90] = {.lex_state = 304},
  [91] = {.lex_state = 304},
  [92] = {.lex_state = 301},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 304},
  [95] = {.lex_state = 301},
  [96] = {.lex_state = 304},
  [97] = {.lex_state = 304},
  [98] = {.lex_state = 304},
  [99] = {.lex_state = 304},
  [100] = {.lex_state = 304},
  [101] = {.lex_state = 304},
  [102] = {.lex_state = 304},
  [103] = {.lex_state = 304},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 301},
  [107] = {.lex_state = 301},
  [108] = {.lex_state = 301},
  [109] = {.lex_state = 301},
  [110] = {.lex_state = 301},
  [111] = {.lex_state = 301},
  [112] = {.lex_state = 301},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
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
  [135] = {.lex_state = 301},
  [136] = {.lex_state = 301},
  [137] = {.lex_state = 301},
  [138] = {.lex_state = 301},
  [139] = {.lex_state = 302},
  [140] = {.lex_state = 302},
  [141] = {.lex_state = 301},
  [142] = {.lex_state = 302},
  [143] = {.lex_state = 301},
  [144] = {.lex_state = 301},
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
  [155] = {.lex_state = 302},
  [156] = {.lex_state = 302},
  [157] = {.lex_state = 301},
  [158] = {.lex_state = 301},
  [159] = {.lex_state = 301},
  [160] = {.lex_state = 301},
  [161] = {.lex_state = 301},
  [162] = {.lex_state = 301},
  [163] = {.lex_state = 301},
  [164] = {.lex_state = 301},
  [165] = {.lex_state = 301},
  [166] = {.lex_state = 301},
  [167] = {.lex_state = 301},
  [168] = {.lex_state = 301},
  [169] = {.lex_state = 301},
  [170] = {.lex_state = 301},
  [171] = {.lex_state = 303},
  [172] = {.lex_state = 301},
  [173] = {.lex_state = 301},
  [174] = {.lex_state = 303},
  [175] = {.lex_state = 301},
  [176] = {.lex_state = 301},
  [177] = {.lex_state = 301},
  [178] = {.lex_state = 301},
  [179] = {.lex_state = 303},
  [180] = {.lex_state = 301},
  [181] = {.lex_state = 301},
  [182] = {.lex_state = 301},
  [183] = {.lex_state = 301},
  [184] = {.lex_state = 303},
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
  [214] = {.lex_state = 302},
  [215] = {.lex_state = 301},
  [216] = {.lex_state = 301},
  [217] = {.lex_state = 301},
  [218] = {.lex_state = 8},
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
  [232] = {.lex_state = 8},
  [233] = {.lex_state = 8},
  [234] = {.lex_state = 301},
  [235] = {.lex_state = 301},
  [236] = {.lex_state = 8},
  [237] = {.lex_state = 303},
  [238] = {.lex_state = 303},
  [239] = {.lex_state = 303},
  [240] = {.lex_state = 303},
  [241] = {.lex_state = 301},
  [242] = {.lex_state = 8},
  [243] = {.lex_state = 303},
  [244] = {.lex_state = 303},
  [245] = {.lex_state = 303},
  [246] = {.lex_state = 303},
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
  [258] = {.lex_state = 301},
  [259] = {.lex_state = 8},
  [260] = {.lex_state = 301},
  [261] = {.lex_state = 301},
  [262] = {.lex_state = 301},
  [263] = {.lex_state = 301},
  [264] = {.lex_state = 9},
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
  [288] = {.lex_state = 301},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 301},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 4},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 9},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 4},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 4},
  [302] = {.lex_state = 301},
  [303] = {.lex_state = 301},
  [304] = {.lex_state = 301},
  [305] = {.lex_state = 4},
  [306] = {.lex_state = 4},
  [307] = {.lex_state = 4},
  [308] = {.lex_state = 4},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 4},
  [311] = {.lex_state = 4},
  [312] = {.lex_state = 4},
  [313] = {.lex_state = 4},
  [314] = {.lex_state = 4},
  [315] = {.lex_state = 4},
  [316] = {.lex_state = 301},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 4},
  [319] = {.lex_state = 4},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 301},
  [322] = {.lex_state = 4},
  [323] = {.lex_state = 4},
  [324] = {.lex_state = 4},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 4},
  [328] = {.lex_state = 4},
  [329] = {.lex_state = 4},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 301},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 301},
  [334] = {.lex_state = 301},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 4},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
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
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 301},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 301},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 3},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 4},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 4},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 4},
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
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 301},
  [409] = {.lex_state = 301},
  [410] = {.lex_state = 301},
  [411] = {.lex_state = 301},
  [412] = {.lex_state = 301},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 301},
  [415] = {.lex_state = 301},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 301},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 301},
  [421] = {.lex_state = 301},
  [422] = {.lex_state = 301},
  [423] = {.lex_state = 301},
  [424] = {.lex_state = 301},
  [425] = {.lex_state = 301},
  [426] = {.lex_state = 3},
  [427] = {.lex_state = 301},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 301},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 301},
  [432] = {.lex_state = 301},
  [433] = {.lex_state = 4},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 4},
  [438] = {.lex_state = 301},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 4},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 301},
  [446] = {.lex_state = 4},
  [447] = {.lex_state = 301},
  [448] = {.lex_state = 301},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 301},
  [451] = {.lex_state = 301},
  [452] = {.lex_state = 301},
  [453] = {.lex_state = 301},
  [454] = {.lex_state = 301},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 301},
  [457] = {.lex_state = 4},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 1},
  [463] = {.lex_state = 3},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 301},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 301},
  [468] = {.lex_state = 4},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 301},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 301},
  [475] = {.lex_state = 301},
  [476] = {.lex_state = 4},
  [477] = {.lex_state = 301},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 301},
  [481] = {.lex_state = 301},
  [482] = {.lex_state = 301},
  [483] = {.lex_state = 3},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 301},
  [486] = {.lex_state = 301},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
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
    [sym_program] = STATE(473),
    [sym_preprocessor] = STATE(92),
    [sym_block_comment] = STATE(92),
    [sym_line_comment] = STATE(92),
    [sym_pragma] = STATE(92),
    [sym_functor_decl] = STATE(92),
    [sym_component_decl] = STATE(92),
    [sym_component_init] = STATE(92),
    [sym_directive] = STATE(92),
    [sym__directive_qualifier] = STATE(412),
    [sym__rule] = STATE(92),
    [sym_monotonic_rule] = STATE(92),
    [sym_subsumptive_rule] = STATE(92),
    [sym_fact] = STATE(92),
    [sym_atom] = STATE(297),
    [sym_relation_decl] = STATE(92),
    [sym_legacy_type_decl] = STATE(92),
    [sym_type_decl] = STATE(92),
    [sym_qualified_name] = STATE(466),
    [aux_sym_program_repeat1] = STATE(92),
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
    [sym_bool] = STATE(287),
    [sym_disjunction] = STATE(488),
    [sym_negation] = STATE(17),
    [sym_conjunction] = STATE(335),
    [sym__constraint] = STATE(287),
    [sym_match] = STATE(287),
    [sym_contains] = STATE(287),
    [sym_comparison] = STATE(287),
    [sym_atom] = STATE(287),
    [sym__argument] = STATE(105),
    [sym_adt_constructor] = STATE(105),
    [sym_record_constructor] = STATE(105),
    [sym_constant] = STATE(105),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(105),
    [sym_as] = STATE(105),
    [sym_functor_call] = STATE(105),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(105),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(38),
    [sym_unary_op] = STATE(105),
    [sym_binary_op] = STATE(105),
    [sym_qualified_name] = STATE(466),
    [aux_sym_conjunction_repeat1] = STATE(17),
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
    [sym_bool] = STATE(287),
    [sym_disjunction] = STATE(487),
    [sym_negation] = STATE(17),
    [sym_conjunction] = STATE(335),
    [sym__constraint] = STATE(287),
    [sym_match] = STATE(287),
    [sym_contains] = STATE(287),
    [sym_comparison] = STATE(287),
    [sym_atom] = STATE(287),
    [sym__argument] = STATE(105),
    [sym_adt_constructor] = STATE(105),
    [sym_record_constructor] = STATE(105),
    [sym_constant] = STATE(105),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(105),
    [sym_as] = STATE(105),
    [sym_functor_call] = STATE(105),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(105),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(38),
    [sym_unary_op] = STATE(105),
    [sym_binary_op] = STATE(105),
    [sym_qualified_name] = STATE(466),
    [aux_sym_conjunction_repeat1] = STATE(17),
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
    [sym_bool] = STATE(314),
    [sym_disjunction] = STATE(457),
    [sym_negation] = STATE(15),
    [sym_conjunction] = STATE(393),
    [sym__constraint] = STATE(314),
    [sym_match] = STATE(314),
    [sym_contains] = STATE(314),
    [sym_comparison] = STATE(314),
    [sym_atom] = STATE(314),
    [sym__argument] = STATE(114),
    [sym_adt_constructor] = STATE(114),
    [sym_record_constructor] = STATE(114),
    [sym_constant] = STATE(114),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(114),
    [sym_as] = STATE(114),
    [sym_functor_call] = STATE(114),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(114),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(38),
    [sym_unary_op] = STATE(114),
    [sym_binary_op] = STATE(114),
    [sym_qualified_name] = STATE(466),
    [aux_sym_conjunction_repeat1] = STATE(15),
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
    [sym_bool] = STATE(287),
    [sym_disjunction] = STATE(440),
    [sym_negation] = STATE(17),
    [sym_conjunction] = STATE(335),
    [sym__constraint] = STATE(287),
    [sym_match] = STATE(287),
    [sym_contains] = STATE(287),
    [sym_comparison] = STATE(287),
    [sym_atom] = STATE(287),
    [sym__argument] = STATE(105),
    [sym_adt_constructor] = STATE(105),
    [sym_record_constructor] = STATE(105),
    [sym_constant] = STATE(105),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(105),
    [sym_as] = STATE(105),
    [sym_functor_call] = STATE(105),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(105),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(38),
    [sym_unary_op] = STATE(105),
    [sym_binary_op] = STATE(105),
    [sym_qualified_name] = STATE(466),
    [aux_sym_conjunction_repeat1] = STATE(17),
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
    [sym_bool] = STATE(287),
    [sym_disjunction] = STATE(428),
    [sym_negation] = STATE(17),
    [sym_conjunction] = STATE(335),
    [sym__constraint] = STATE(287),
    [sym_match] = STATE(287),
    [sym_contains] = STATE(287),
    [sym_comparison] = STATE(287),
    [sym_atom] = STATE(287),
    [sym__argument] = STATE(113),
    [sym_adt_constructor] = STATE(113),
    [sym_record_constructor] = STATE(113),
    [sym_constant] = STATE(113),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(113),
    [sym_as] = STATE(113),
    [sym_functor_call] = STATE(113),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(113),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(38),
    [sym_unary_op] = STATE(113),
    [sym_binary_op] = STATE(113),
    [sym_qualified_name] = STATE(466),
    [aux_sym_conjunction_repeat1] = STATE(17),
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
  [7] = {
    [sym_bool] = STATE(287),
    [sym_disjunction] = STATE(470),
    [sym_negation] = STATE(17),
    [sym_conjunction] = STATE(335),
    [sym__constraint] = STATE(287),
    [sym_match] = STATE(287),
    [sym_contains] = STATE(287),
    [sym_comparison] = STATE(287),
    [sym_atom] = STATE(287),
    [sym__argument] = STATE(105),
    [sym_adt_constructor] = STATE(105),
    [sym_record_constructor] = STATE(105),
    [sym_constant] = STATE(105),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(105),
    [sym_as] = STATE(105),
    [sym_functor_call] = STATE(105),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(105),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(38),
    [sym_unary_op] = STATE(105),
    [sym_binary_op] = STATE(105),
    [sym_qualified_name] = STATE(466),
    [aux_sym_conjunction_repeat1] = STATE(17),
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
    [sym_bool] = STATE(314),
    [sym_disjunction] = STATE(433),
    [sym_negation] = STATE(15),
    [sym_conjunction] = STATE(393),
    [sym__constraint] = STATE(314),
    [sym_match] = STATE(314),
    [sym_contains] = STATE(314),
    [sym_comparison] = STATE(314),
    [sym_atom] = STATE(314),
    [sym__argument] = STATE(114),
    [sym_adt_constructor] = STATE(114),
    [sym_record_constructor] = STATE(114),
    [sym_constant] = STATE(114),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(114),
    [sym_as] = STATE(114),
    [sym_functor_call] = STATE(114),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(114),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(38),
    [sym_unary_op] = STATE(114),
    [sym_binary_op] = STATE(114),
    [sym_qualified_name] = STATE(466),
    [aux_sym_conjunction_repeat1] = STATE(15),
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
    [sym_bool] = STATE(314),
    [sym_disjunction] = STATE(442),
    [sym_negation] = STATE(15),
    [sym_conjunction] = STATE(393),
    [sym__constraint] = STATE(314),
    [sym_match] = STATE(314),
    [sym_contains] = STATE(314),
    [sym_comparison] = STATE(314),
    [sym_atom] = STATE(314),
    [sym__argument] = STATE(114),
    [sym_adt_constructor] = STATE(114),
    [sym_record_constructor] = STATE(114),
    [sym_constant] = STATE(114),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(114),
    [sym_as] = STATE(114),
    [sym_functor_call] = STATE(114),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(114),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(38),
    [sym_unary_op] = STATE(114),
    [sym_binary_op] = STATE(114),
    [sym_qualified_name] = STATE(466),
    [aux_sym_conjunction_repeat1] = STATE(15),
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
    [sym_bool] = STATE(287),
    [sym_disjunction] = STATE(443),
    [sym_negation] = STATE(17),
    [sym_conjunction] = STATE(335),
    [sym__constraint] = STATE(287),
    [sym_match] = STATE(287),
    [sym_contains] = STATE(287),
    [sym_comparison] = STATE(287),
    [sym_atom] = STATE(287),
    [sym__argument] = STATE(105),
    [sym_adt_constructor] = STATE(105),
    [sym_record_constructor] = STATE(105),
    [sym_constant] = STATE(105),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(105),
    [sym_as] = STATE(105),
    [sym_functor_call] = STATE(105),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(105),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(38),
    [sym_unary_op] = STATE(105),
    [sym_binary_op] = STATE(105),
    [sym_qualified_name] = STATE(466),
    [aux_sym_conjunction_repeat1] = STATE(17),
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
    [sym_bool] = STATE(287),
    [sym_disjunction] = STATE(460),
    [sym_negation] = STATE(17),
    [sym_conjunction] = STATE(335),
    [sym__constraint] = STATE(287),
    [sym_match] = STATE(287),
    [sym_contains] = STATE(287),
    [sym_comparison] = STATE(287),
    [sym_atom] = STATE(287),
    [sym__argument] = STATE(113),
    [sym_adt_constructor] = STATE(113),
    [sym_record_constructor] = STATE(113),
    [sym_constant] = STATE(113),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(113),
    [sym_as] = STATE(113),
    [sym_functor_call] = STATE(113),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(113),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(38),
    [sym_unary_op] = STATE(113),
    [sym_binary_op] = STATE(113),
    [sym_qualified_name] = STATE(466),
    [aux_sym_conjunction_repeat1] = STATE(17),
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
    [sym_bool] = STATE(287),
    [sym_disjunction] = STATE(484),
    [sym_negation] = STATE(17),
    [sym_conjunction] = STATE(335),
    [sym__constraint] = STATE(287),
    [sym_match] = STATE(287),
    [sym_contains] = STATE(287),
    [sym_comparison] = STATE(287),
    [sym_atom] = STATE(287),
    [sym__argument] = STATE(105),
    [sym_adt_constructor] = STATE(105),
    [sym_record_constructor] = STATE(105),
    [sym_constant] = STATE(105),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(105),
    [sym_as] = STATE(105),
    [sym_functor_call] = STATE(105),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(105),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(38),
    [sym_unary_op] = STATE(105),
    [sym_binary_op] = STATE(105),
    [sym_qualified_name] = STATE(466),
    [aux_sym_conjunction_repeat1] = STATE(17),
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
    [sym_bool] = STATE(287),
    [sym_negation] = STATE(17),
    [sym_conjunction] = STATE(313),
    [sym__constraint] = STATE(287),
    [sym_match] = STATE(287),
    [sym_contains] = STATE(287),
    [sym_comparison] = STATE(287),
    [sym_atom] = STATE(287),
    [sym__argument] = STATE(113),
    [sym_adt_constructor] = STATE(113),
    [sym_record_constructor] = STATE(113),
    [sym_constant] = STATE(113),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(113),
    [sym_as] = STATE(113),
    [sym_functor_call] = STATE(113),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(113),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(38),
    [sym_unary_op] = STATE(113),
    [sym_binary_op] = STATE(113),
    [sym_qualified_name] = STATE(466),
    [aux_sym_conjunction_repeat1] = STATE(17),
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
    [sym_bool] = STATE(314),
    [sym_negation] = STATE(15),
    [sym_conjunction] = STATE(313),
    [sym__constraint] = STATE(314),
    [sym_match] = STATE(314),
    [sym_contains] = STATE(314),
    [sym_comparison] = STATE(314),
    [sym_atom] = STATE(314),
    [sym__argument] = STATE(114),
    [sym_adt_constructor] = STATE(114),
    [sym_record_constructor] = STATE(114),
    [sym_constant] = STATE(114),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(114),
    [sym_as] = STATE(114),
    [sym_functor_call] = STATE(114),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(114),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(38),
    [sym_unary_op] = STATE(114),
    [sym_binary_op] = STATE(114),
    [sym_qualified_name] = STATE(466),
    [aux_sym_conjunction_repeat1] = STATE(15),
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
  [15] = {
    [sym_bool] = STATE(318),
    [sym_negation] = STATE(44),
    [sym__constraint] = STATE(318),
    [sym_match] = STATE(318),
    [sym_contains] = STATE(318),
    [sym_comparison] = STATE(318),
    [sym_atom] = STATE(318),
    [sym__argument] = STATE(114),
    [sym_adt_constructor] = STATE(114),
    [sym_record_constructor] = STATE(114),
    [sym_constant] = STATE(114),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(114),
    [sym_as] = STATE(114),
    [sym_functor_call] = STATE(114),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(114),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(38),
    [sym_unary_op] = STATE(114),
    [sym_binary_op] = STATE(114),
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
  [16] = {
    [sym_bool] = STATE(306),
    [sym_negation] = STATE(20),
    [sym__constraint] = STATE(306),
    [sym_match] = STATE(306),
    [sym_contains] = STATE(306),
    [sym_comparison] = STATE(306),
    [sym_atom] = STATE(306),
    [sym__argument] = STATE(113),
    [sym_adt_constructor] = STATE(113),
    [sym_record_constructor] = STATE(113),
    [sym_constant] = STATE(113),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(113),
    [sym_as] = STATE(113),
    [sym_functor_call] = STATE(113),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(113),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(38),
    [sym_unary_op] = STATE(113),
    [sym_binary_op] = STATE(113),
    [sym_qualified_name] = STATE(466),
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
    [sym_bool] = STATE(298),
    [sym_negation] = STATE(44),
    [sym__constraint] = STATE(298),
    [sym_match] = STATE(298),
    [sym_contains] = STATE(298),
    [sym_comparison] = STATE(298),
    [sym_atom] = STATE(298),
    [sym__argument] = STATE(113),
    [sym_adt_constructor] = STATE(113),
    [sym_record_constructor] = STATE(113),
    [sym_constant] = STATE(113),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(113),
    [sym_as] = STATE(113),
    [sym_functor_call] = STATE(113),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(113),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(38),
    [sym_unary_op] = STATE(113),
    [sym_binary_op] = STATE(113),
    [sym_qualified_name] = STATE(466),
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
  [18] = {
    [sym_bool] = STATE(305),
    [sym_negation] = STATE(44),
    [sym__constraint] = STATE(305),
    [sym_match] = STATE(305),
    [sym_contains] = STATE(305),
    [sym_comparison] = STATE(305),
    [sym_atom] = STATE(305),
    [sym__argument] = STATE(114),
    [sym_adt_constructor] = STATE(114),
    [sym_record_constructor] = STATE(114),
    [sym_constant] = STATE(114),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(114),
    [sym_as] = STATE(114),
    [sym_functor_call] = STATE(114),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(114),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(38),
    [sym_unary_op] = STATE(114),
    [sym_binary_op] = STATE(114),
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
  [19] = {
    [sym_bool] = STATE(306),
    [sym_negation] = STATE(18),
    [sym__constraint] = STATE(306),
    [sym_match] = STATE(306),
    [sym_contains] = STATE(306),
    [sym_comparison] = STATE(306),
    [sym_atom] = STATE(306),
    [sym__argument] = STATE(114),
    [sym_adt_constructor] = STATE(114),
    [sym_record_constructor] = STATE(114),
    [sym_constant] = STATE(114),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(114),
    [sym_as] = STATE(114),
    [sym_functor_call] = STATE(114),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(114),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(38),
    [sym_unary_op] = STATE(114),
    [sym_binary_op] = STATE(114),
    [sym_qualified_name] = STATE(466),
    [aux_sym_conjunction_repeat1] = STATE(18),
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
  [20] = {
    [sym_bool] = STATE(305),
    [sym_negation] = STATE(44),
    [sym__constraint] = STATE(305),
    [sym_match] = STATE(305),
    [sym_contains] = STATE(305),
    [sym_comparison] = STATE(305),
    [sym_atom] = STATE(305),
    [sym__argument] = STATE(113),
    [sym_adt_constructor] = STATE(113),
    [sym_record_constructor] = STATE(113),
    [sym_constant] = STATE(113),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(113),
    [sym_as] = STATE(113),
    [sym_functor_call] = STATE(113),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(113),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(38),
    [sym_unary_op] = STATE(113),
    [sym_binary_op] = STATE(113),
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
    [sym__argument] = STATE(123),
    [sym_adt_constructor] = STATE(123),
    [sym_record_constructor] = STATE(123),
    [sym_constant] = STATE(123),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(123),
    [sym_as] = STATE(123),
    [sym_functor_call] = STATE(123),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(123),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(38),
    [sym_unary_op] = STATE(123),
    [sym_binary_op] = STATE(123),
    [aux_sym_match_repeat1] = STATE(357),
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
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(125),
    [sym_as] = STATE(125),
    [sym_functor_call] = STATE(125),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(125),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(38),
    [sym_unary_op] = STATE(125),
    [sym_binary_op] = STATE(125),
    [aux_sym_match_repeat1] = STATE(380),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(91),
    [anon_sym_BANG] = ACTIONS(71),
    [anon_sym_DOLLAR] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_RBRACK] = ACTIONS(99),
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
    [sym__argument] = STATE(119),
    [sym_adt_constructor] = STATE(119),
    [sym_record_constructor] = STATE(119),
    [sym_constant] = STATE(119),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(119),
    [sym_as] = STATE(119),
    [sym_functor_call] = STATE(119),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(119),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(38),
    [sym_unary_op] = STATE(119),
    [sym_binary_op] = STATE(119),
    [aux_sym_match_repeat1] = STATE(391),
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
    [sym__argument] = STATE(118),
    [sym_adt_constructor] = STATE(118),
    [sym_record_constructor] = STATE(118),
    [sym_constant] = STATE(118),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(118),
    [sym_as] = STATE(118),
    [sym_functor_call] = STATE(118),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(118),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(38),
    [sym_unary_op] = STATE(118),
    [sym_binary_op] = STATE(118),
    [aux_sym_atom_repeat1] = STATE(404),
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
    [sym__argument] = STATE(124),
    [sym_adt_constructor] = STATE(124),
    [sym_record_constructor] = STATE(124),
    [sym_constant] = STATE(124),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(124),
    [sym_as] = STATE(124),
    [sym_functor_call] = STATE(124),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(124),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(38),
    [sym_unary_op] = STATE(124),
    [sym_binary_op] = STATE(124),
    [aux_sym_match_repeat1] = STATE(395),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(91),
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
    [sym__argument] = STATE(121),
    [sym_adt_constructor] = STATE(121),
    [sym_record_constructor] = STATE(121),
    [sym_constant] = STATE(121),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(121),
    [sym_as] = STATE(121),
    [sym_functor_call] = STATE(121),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(121),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(38),
    [sym_unary_op] = STATE(121),
    [sym_binary_op] = STATE(121),
    [aux_sym_match_repeat1] = STATE(339),
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
    [sym__argument] = STATE(134),
    [sym_adt_constructor] = STATE(134),
    [sym_record_constructor] = STATE(134),
    [sym_constant] = STATE(134),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(134),
    [sym_as] = STATE(134),
    [sym_functor_call] = STATE(134),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(134),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(38),
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
    [sym__argument] = STATE(66),
    [sym_adt_constructor] = STATE(66),
    [sym_record_constructor] = STATE(66),
    [sym_constant] = STATE(66),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(66),
    [sym_as] = STATE(66),
    [sym_functor_call] = STATE(66),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(66),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(38),
    [sym_unary_op] = STATE(66),
    [sym_binary_op] = STATE(66),
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
    [sym__argument] = STATE(130),
    [sym_adt_constructor] = STATE(130),
    [sym_record_constructor] = STATE(130),
    [sym_constant] = STATE(130),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(130),
    [sym_as] = STATE(130),
    [sym_functor_call] = STATE(130),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(130),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(38),
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
    [sym__argument] = STATE(133),
    [sym_adt_constructor] = STATE(133),
    [sym_record_constructor] = STATE(133),
    [sym_constant] = STATE(133),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(133),
    [sym_as] = STATE(133),
    [sym_functor_call] = STATE(133),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(133),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(38),
    [sym_unary_op] = STATE(133),
    [sym_binary_op] = STATE(133),
    [anon_sym_LPAREN] = ACTIONS(127),
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
  [31] = {
    [sym__argument] = STATE(122),
    [sym_adt_constructor] = STATE(122),
    [sym_record_constructor] = STATE(122),
    [sym_constant] = STATE(122),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(122),
    [sym_as] = STATE(122),
    [sym_functor_call] = STATE(122),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(122),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(38),
    [sym_unary_op] = STATE(122),
    [sym_binary_op] = STATE(122),
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
  [32] = {
    [sym__argument] = STATE(126),
    [sym_adt_constructor] = STATE(126),
    [sym_record_constructor] = STATE(126),
    [sym_constant] = STATE(126),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(126),
    [sym_as] = STATE(126),
    [sym_functor_call] = STATE(126),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(126),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(39),
    [sym_unary_op] = STATE(126),
    [sym_binary_op] = STATE(126),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_BANG] = ACTIONS(133),
    [anon_sym_DOLLAR] = ACTIONS(135),
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
    [anon_sym_bnot] = ACTIONS(139),
    [anon_sym_lnot] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_TILDE] = ACTIONS(133),
    [sym_ident] = ACTIONS(97),
  },
  [33] = {
    [sym__argument] = STATE(129),
    [sym_adt_constructor] = STATE(129),
    [sym_record_constructor] = STATE(129),
    [sym_constant] = STATE(129),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(129),
    [sym_as] = STATE(129),
    [sym_functor_call] = STATE(129),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(129),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(38),
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
  [34] = {
    [sym__argument] = STATE(133),
    [sym_adt_constructor] = STATE(133),
    [sym_record_constructor] = STATE(133),
    [sym_constant] = STATE(133),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(133),
    [sym_as] = STATE(133),
    [sym_functor_call] = STATE(133),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(133),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(38),
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
  [35] = {
    [sym__argument] = STATE(117),
    [sym_adt_constructor] = STATE(117),
    [sym_record_constructor] = STATE(117),
    [sym_constant] = STATE(117),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(117),
    [sym_as] = STATE(117),
    [sym_functor_call] = STATE(117),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(117),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(38),
    [sym_unary_op] = STATE(117),
    [sym_binary_op] = STATE(117),
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
    [sym__argument] = STATE(66),
    [sym_adt_constructor] = STATE(66),
    [sym_record_constructor] = STATE(66),
    [sym_constant] = STATE(66),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(66),
    [sym_as] = STATE(66),
    [sym_functor_call] = STATE(66),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(66),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(39),
    [sym_unary_op] = STATE(66),
    [sym_binary_op] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_BANG] = ACTIONS(133),
    [anon_sym_DOLLAR] = ACTIONS(135),
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
    [anon_sym_bnot] = ACTIONS(139),
    [anon_sym_lnot] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_TILDE] = ACTIONS(133),
    [sym_ident] = ACTIONS(97),
  },
  [37] = {
    [sym__argument] = STATE(82),
    [sym_adt_constructor] = STATE(82),
    [sym_record_constructor] = STATE(82),
    [sym_constant] = STATE(82),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(82),
    [sym_as] = STATE(82),
    [sym_functor_call] = STATE(82),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(82),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(38),
    [sym_unary_op] = STATE(82),
    [sym_binary_op] = STATE(82),
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
  [38] = {
    [sym__argument] = STATE(93),
    [sym_adt_constructor] = STATE(93),
    [sym_record_constructor] = STATE(93),
    [sym_constant] = STATE(93),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(93),
    [sym_as] = STATE(93),
    [sym_functor_call] = STATE(93),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(93),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(38),
    [sym_unary_op] = STATE(93),
    [sym_binary_op] = STATE(93),
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
  [39] = {
    [sym__argument] = STATE(127),
    [sym_adt_constructor] = STATE(127),
    [sym_record_constructor] = STATE(127),
    [sym_constant] = STATE(127),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(127),
    [sym_as] = STATE(127),
    [sym_functor_call] = STATE(127),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(127),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(39),
    [sym_unary_op] = STATE(127),
    [sym_binary_op] = STATE(127),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_BANG] = ACTIONS(133),
    [anon_sym_DOLLAR] = ACTIONS(135),
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
    [anon_sym_bnot] = ACTIONS(139),
    [anon_sym_lnot] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_TILDE] = ACTIONS(133),
    [sym_ident] = ACTIONS(97),
  },
  [40] = {
    [sym__argument] = STATE(128),
    [sym_adt_constructor] = STATE(128),
    [sym_record_constructor] = STATE(128),
    [sym_constant] = STATE(128),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(128),
    [sym_as] = STATE(128),
    [sym_functor_call] = STATE(128),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(128),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(38),
    [sym_unary_op] = STATE(128),
    [sym_binary_op] = STATE(128),
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
  [41] = {
    [sym__argument] = STATE(120),
    [sym_adt_constructor] = STATE(120),
    [sym_record_constructor] = STATE(120),
    [sym_constant] = STATE(120),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(120),
    [sym_as] = STATE(120),
    [sym_functor_call] = STATE(120),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(120),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(39),
    [sym_unary_op] = STATE(120),
    [sym_binary_op] = STATE(120),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_BANG] = ACTIONS(133),
    [anon_sym_DOLLAR] = ACTIONS(135),
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
    [anon_sym_bnot] = ACTIONS(139),
    [anon_sym_lnot] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_TILDE] = ACTIONS(133),
    [sym_ident] = ACTIONS(97),
  },
  [42] = {
    [sym__argument] = STATE(132),
    [sym_adt_constructor] = STATE(132),
    [sym_record_constructor] = STATE(132),
    [sym_constant] = STATE(132),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(132),
    [sym_as] = STATE(132),
    [sym_functor_call] = STATE(132),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(132),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(38),
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
    [sym__argument] = STATE(131),
    [sym_adt_constructor] = STATE(131),
    [sym_record_constructor] = STATE(131),
    [sym_constant] = STATE(131),
    [sym_number] = STATE(78),
    [sym_integer] = STATE(80),
    [sym_decimal] = STATE(56),
    [sym_float] = STATE(80),
    [sym_variable] = STATE(131),
    [sym_as] = STATE(131),
    [sym_functor_call] = STATE(131),
    [sym_user_defined_functor] = STATE(478),
    [sym_intrinsic_functor] = STATE(478),
    [sym_aggregator] = STATE(131),
    [sym_range] = STATE(69),
    [sym__unary_operator] = STATE(38),
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
    STATE(49), 1,
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
  [324] = 3,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 8,
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
  [369] = 2,
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
  [412] = 2,
    ACTIONS(195), 9,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(193), 29,
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
  [498] = 2,
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
  [1634] = 6,
    ACTIONS(313), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(315), 1,
      sym_ident,
    STATE(198), 1,
      sym_choice_domain,
    STATE(103), 2,
      sym__relation_qualifier,
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
  [1683] = 4,
    ACTIONS(251), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(249), 12,
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
    ACTIONS(317), 16,
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
  [1728] = 6,
    ACTIONS(313), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(323), 1,
      sym_ident,
    STATE(206), 1,
      sym_choice_domain,
    STATE(103), 2,
      sym__relation_qualifier,
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
  [1777] = 6,
    ACTIONS(313), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(327), 1,
      sym_ident,
    STATE(196), 1,
      sym_choice_domain,
    STATE(103), 2,
      sym__relation_qualifier,
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
  [1826] = 6,
    ACTIONS(313), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(333), 1,
      sym_ident,
    STATE(210), 1,
      sym_choice_domain,
    STATE(98), 2,
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
  [1875] = 6,
    ACTIONS(313), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(339), 1,
      sym_ident,
    STATE(186), 1,
      sym_choice_domain,
    STATE(84), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(337), 13,
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
    ACTIONS(335), 18,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [1924] = 6,
    ACTIONS(313), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(343), 1,
      sym_ident,
    STATE(187), 1,
      sym_choice_domain,
    STATE(103), 2,
      sym__relation_qualifier,
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
  [1973] = 6,
    ACTIONS(313), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(349), 1,
      sym_ident,
    STATE(190), 1,
      sym_choice_domain,
    STATE(83), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(347), 13,
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
  [2022] = 6,
    ACTIONS(313), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(353), 1,
      sym_ident,
    STATE(191), 1,
      sym_choice_domain,
    STATE(103), 2,
      sym__relation_qualifier,
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
    ACTIONS(351), 18,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [2071] = 6,
    ACTIONS(313), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(359), 1,
      sym_ident,
    STATE(202), 1,
      sym_choice_domain,
    STATE(102), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(357), 13,
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
    ACTIONS(355), 18,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [2120] = 6,
    ACTIONS(313), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(363), 1,
      sym_ident,
    STATE(193), 1,
      sym_choice_domain,
    STATE(103), 2,
      sym__relation_qualifier,
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
  [2169] = 17,
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
    ACTIONS(365), 1,
      ts_builtin_sym_end,
    STATE(297), 1,
      sym_atom,
    STATE(412), 1,
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
    STATE(95), 16,
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
  [2240] = 5,
    ACTIONS(369), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(371), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(319), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(367), 10,
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
    ACTIONS(317), 16,
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
  [2287] = 6,
    ACTIONS(313), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(377), 1,
      sym_ident,
    STATE(194), 1,
      sym_choice_domain,
    STATE(87), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(375), 13,
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
    ACTIONS(373), 18,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [2336] = 17,
    ACTIONS(379), 1,
      ts_builtin_sym_end,
    ACTIONS(381), 1,
      anon_sym_POUNDline,
    ACTIONS(384), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(387), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_DOTpragma,
    ACTIONS(393), 1,
      anon_sym_DOTfunctor,
    ACTIONS(396), 1,
      anon_sym_DOTcomp,
    ACTIONS(399), 1,
      anon_sym_DOTinit,
    ACTIONS(405), 1,
      anon_sym_DOTdecl,
    ACTIONS(411), 1,
      anon_sym_DOTtype,
    ACTIONS(414), 1,
      sym_ident,
    STATE(297), 1,
      sym_atom,
    STATE(412), 1,
      sym__directive_qualifier,
    STATE(466), 1,
      sym_qualified_name,
    ACTIONS(408), 2,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
    ACTIONS(402), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(95), 16,
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
  [2407] = 6,
    ACTIONS(313), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(419), 1,
      sym_ident,
    STATE(199), 1,
      sym_choice_domain,
    STATE(103), 2,
      sym__relation_qualifier,
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
  [2456] = 6,
    ACTIONS(313), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(425), 1,
      sym_ident,
    STATE(205), 1,
      sym_choice_domain,
    STATE(81), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(423), 13,
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
  [2505] = 6,
    ACTIONS(313), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(429), 1,
      sym_ident,
    STATE(234), 1,
      sym_choice_domain,
    STATE(103), 2,
      sym__relation_qualifier,
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
    ACTIONS(427), 18,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [2554] = 6,
    ACTIONS(313), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(435), 1,
      sym_ident,
    STATE(197), 1,
      sym_choice_domain,
    STATE(89), 2,
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
  [2603] = 6,
    ACTIONS(313), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(441), 1,
      sym_ident,
    STATE(229), 1,
      sym_choice_domain,
    STATE(96), 2,
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
  [2652] = 6,
    ACTIONS(313), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(447), 1,
      sym_ident,
    STATE(200), 1,
      sym_choice_domain,
    STATE(91), 2,
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
  [2701] = 6,
    ACTIONS(313), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(451), 1,
      sym_ident,
    STATE(201), 1,
      sym_choice_domain,
    STATE(103), 2,
      sym__relation_qualifier,
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
    ACTIONS(449), 18,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [2750] = 4,
    ACTIONS(458), 1,
      sym_ident,
    STATE(103), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(455), 13,
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
    ACTIONS(453), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
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
  [2794] = 5,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_DOT,
    STATE(49), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(219), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(217), 23,
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
  [2839] = 6,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
    ACTIONS(371), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(462), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(464), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(319), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(317), 16,
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
  [2883] = 15,
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
    ACTIONS(466), 1,
      anon_sym_DOToverride,
    ACTIONS(468), 1,
      anon_sym_RBRACE,
    ACTIONS(472), 1,
      anon_sym_DOTtype,
    STATE(297), 1,
      sym_atom,
    STATE(417), 1,
      sym__directive_qualifier,
    STATE(466), 1,
      sym_qualified_name,
    ACTIONS(470), 4,
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
  [2944] = 15,
    ACTIONS(474), 1,
      anon_sym_POUNDline,
    ACTIONS(477), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(480), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(483), 1,
      anon_sym_DOTcomp,
    ACTIONS(486), 1,
      anon_sym_DOToverride,
    ACTIONS(489), 1,
      anon_sym_RBRACE,
    ACTIONS(491), 1,
      anon_sym_DOTinit,
    ACTIONS(497), 1,
      anon_sym_DOTdecl,
    ACTIONS(500), 1,
      anon_sym_DOTtype,
    ACTIONS(503), 1,
      sym_ident,
    STATE(297), 1,
      sym_atom,
    STATE(417), 1,
      sym__directive_qualifier,
    STATE(466), 1,
      sym_qualified_name,
    ACTIONS(494), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(107), 13,
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
  [3005] = 15,
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
    ACTIONS(466), 1,
      anon_sym_DOToverride,
    ACTIONS(472), 1,
      anon_sym_DOTtype,
    ACTIONS(506), 1,
      anon_sym_RBRACE,
    STATE(297), 1,
      sym_atom,
    STATE(417), 1,
      sym__directive_qualifier,
    STATE(466), 1,
      sym_qualified_name,
    ACTIONS(470), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(107), 13,
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
  [3066] = 15,
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
    ACTIONS(466), 1,
      anon_sym_DOToverride,
    ACTIONS(472), 1,
      anon_sym_DOTtype,
    ACTIONS(508), 1,
      anon_sym_RBRACE,
    STATE(297), 1,
      sym_atom,
    STATE(417), 1,
      sym__directive_qualifier,
    STATE(466), 1,
      sym_qualified_name,
    ACTIONS(470), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(107), 13,
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
  [3127] = 15,
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
    ACTIONS(466), 1,
      anon_sym_DOToverride,
    ACTIONS(472), 1,
      anon_sym_DOTtype,
    ACTIONS(510), 1,
      anon_sym_RBRACE,
    STATE(297), 1,
      sym_atom,
    STATE(417), 1,
      sym__directive_qualifier,
    STATE(466), 1,
      sym_qualified_name,
    ACTIONS(470), 4,
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
  [3188] = 15,
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
    ACTIONS(466), 1,
      anon_sym_DOToverride,
    ACTIONS(472), 1,
      anon_sym_DOTtype,
    ACTIONS(512), 1,
      anon_sym_RBRACE,
    STATE(297), 1,
      sym_atom,
    STATE(417), 1,
      sym__directive_qualifier,
    STATE(466), 1,
      sym_qualified_name,
    ACTIONS(470), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(107), 13,
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
  [3249] = 15,
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
    ACTIONS(466), 1,
      anon_sym_DOToverride,
    ACTIONS(472), 1,
      anon_sym_DOTtype,
    ACTIONS(514), 1,
      anon_sym_RBRACE,
    STATE(297), 1,
      sym_atom,
    STATE(417), 1,
      sym__directive_qualifier,
    STATE(466), 1,
      sym_qualified_name,
    ACTIONS(470), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(109), 13,
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
  [3310] = 5,
    ACTIONS(371), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(462), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(464), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(319), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(317), 16,
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
  [3351] = 5,
    ACTIONS(371), 2,
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
    ACTIONS(319), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(317), 16,
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
  [3392] = 3,
    STATE(116), 1,
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
  [3428] = 3,
    STATE(48), 1,
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
  [3464] = 4,
    ACTIONS(371), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(520), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(319), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(317), 16,
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
  [3501] = 6,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
    STATE(375), 1,
      aux_sym_atom_repeat1,
    ACTIONS(371), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(319), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(317), 16,
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
  [3541] = 6,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(524), 1,
      anon_sym_RPAREN,
    STATE(369), 1,
      aux_sym_match_repeat1,
    ACTIONS(371), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(319), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(317), 16,
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
  [3581] = 4,
    ACTIONS(528), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(520), 3,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
    ACTIONS(530), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(526), 16,
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
  [3617] = 6,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
    STATE(381), 1,
      aux_sym_match_repeat1,
    ACTIONS(371), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(319), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(317), 16,
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
  [3657] = 4,
    ACTIONS(371), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(534), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(319), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(317), 16,
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
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
    STATE(340), 1,
      aux_sym_match_repeat1,
    ACTIONS(371), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(319), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(317), 16,
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
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
    STATE(384), 1,
      aux_sym_match_repeat1,
    ACTIONS(371), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(319), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(317), 16,
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
      anon_sym_RBRACK,
    STATE(402), 1,
      aux_sym_match_repeat1,
    ACTIONS(371), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(319), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(317), 16,
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
  [3813] = 3,
    ACTIONS(249), 5,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(530), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(526), 16,
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
  [3847] = 4,
    ACTIONS(528), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(367), 3,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
    ACTIONS(530), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(526), 16,
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
  [3883] = 5,
    ACTIONS(542), 1,
      anon_sym_COMMA,
    ACTIONS(544), 1,
      anon_sym_RPAREN,
    ACTIONS(371), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(319), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(317), 16,
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
  [3920] = 4,
    ACTIONS(371), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(546), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(319), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(317), 16,
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
  [3955] = 4,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    ACTIONS(371), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(319), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(317), 16,
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
  [3989] = 4,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    ACTIONS(371), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(319), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(317), 16,
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
  [4023] = 4,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
    ACTIONS(371), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(319), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(317), 16,
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
  [4057] = 4,
    ACTIONS(552), 1,
      anon_sym_COLON,
    ACTIONS(371), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(319), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(317), 16,
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
  [4091] = 4,
    ACTIONS(554), 1,
      anon_sym_RPAREN,
    ACTIONS(371), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(319), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(317), 16,
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
  [4125] = 1,
    ACTIONS(556), 23,
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
  [4151] = 2,
    ACTIONS(560), 1,
      anon_sym_LT,
    ACTIONS(558), 22,
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
  [4179] = 1,
    ACTIONS(562), 23,
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
  [4205] = 1,
    ACTIONS(564), 22,
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
  [4230] = 3,
    ACTIONS(566), 1,
      anon_sym_DOT,
    STATE(139), 1,
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
  [4259] = 3,
    ACTIONS(569), 1,
      anon_sym_DOT,
    STATE(142), 1,
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
  [4288] = 1,
    ACTIONS(571), 22,
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
  [4313] = 3,
    ACTIONS(569), 1,
      anon_sym_DOT,
    STATE(139), 1,
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
  [4342] = 3,
    ACTIONS(575), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(573), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4370] = 3,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    STATE(144), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(577), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4398] = 3,
    ACTIONS(575), 1,
      anon_sym_COMMA,
    STATE(144), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(582), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4426] = 1,
    ACTIONS(584), 21,
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
  [4450] = 3,
    ACTIONS(575), 1,
      anon_sym_COMMA,
    STATE(144), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(586), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4478] = 3,
    ACTIONS(590), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(588), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4506] = 3,
    ACTIONS(594), 1,
      anon_sym_DOTplan,
    STATE(226), 1,
      sym_query_plan,
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
  [4534] = 3,
    ACTIONS(598), 1,
      anon_sym_PIPE,
    STATE(150), 1,
      aux_sym_adt_repeat1,
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
  [4562] = 3,
    ACTIONS(603), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      aux_sym_query_plan_repeat2,
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
  [4590] = 3,
    ACTIONS(590), 1,
      anon_sym_COMMA,
    STATE(148), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(606), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4618] = 3,
    ACTIONS(610), 1,
      anon_sym_PIPE,
    STATE(161), 1,
      aux_sym_adt_repeat1,
    ACTIONS(608), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4646] = 3,
    ACTIONS(590), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      aux_sym_query_plan_repeat2,
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
  [4674] = 4,
    ACTIONS(569), 1,
      anon_sym_DOT,
    ACTIONS(614), 1,
      anon_sym_LBRACE,
    STATE(142), 1,
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
  [4704] = 2,
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
  [4730] = 3,
    ACTIONS(590), 1,
      anon_sym_COMMA,
    STATE(154), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(616), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4758] = 3,
    ACTIONS(594), 1,
      anon_sym_DOTplan,
    STATE(228), 1,
      sym_query_plan,
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
  [4786] = 3,
    ACTIONS(575), 1,
      anon_sym_COMMA,
    STATE(145), 1,
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
  [4814] = 3,
    ACTIONS(590), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(606), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4842] = 3,
    ACTIONS(610), 1,
      anon_sym_PIPE,
    STATE(150), 1,
      aux_sym_adt_repeat1,
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
  [4870] = 3,
    ACTIONS(575), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(582), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4898] = 3,
    ACTIONS(594), 1,
      anon_sym_DOTplan,
    STATE(189), 1,
      sym_query_plan,
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
  [4926] = 3,
    ACTIONS(575), 1,
      anon_sym_COMMA,
    STATE(144), 1,
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
  [4954] = 3,
    ACTIONS(590), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      aux_sym_query_plan_repeat2,
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
  [4982] = 4,
    ACTIONS(630), 1,
      anon_sym_LPAREN,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    STATE(182), 1,
      aux_sym_directive_repeat1,
    ACTIONS(628), 17,
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
  [5011] = 1,
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
  [5034] = 1,
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
  [5057] = 1,
    ACTIONS(577), 20,
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
  [5080] = 1,
    ACTIONS(638), 20,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
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
  [5103] = 4,
    ACTIONS(640), 1,
      anon_sym_DOT,
    STATE(179), 1,
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
  [5132] = 4,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    ACTIONS(644), 1,
      anon_sym_LPAREN,
    STATE(166), 1,
      aux_sym_directive_repeat1,
    ACTIONS(642), 17,
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
  [5161] = 1,
    ACTIONS(646), 20,
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
  [5184] = 4,
    ACTIONS(640), 1,
      anon_sym_DOT,
    STATE(171), 1,
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
  [5213] = 1,
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
  [5236] = 1,
    ACTIONS(596), 20,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
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
  [5259] = 1,
    ACTIONS(650), 20,
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
  [5282] = 1,
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
  [5305] = 4,
    ACTIONS(654), 1,
      anon_sym_DOT,
    STATE(179), 1,
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
  [5334] = 1,
    ACTIONS(657), 20,
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
  [5357] = 1,
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
  [5380] = 3,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    STATE(182), 1,
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
  [5407] = 1,
    ACTIONS(666), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5429] = 2,
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
  [5453] = 1,
    ACTIONS(668), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
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
    ACTIONS(329), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5497] = 1,
    ACTIONS(670), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5519] = 1,
    ACTIONS(672), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5541] = 1,
    ACTIONS(674), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5563] = 1,
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
  [5585] = 1,
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
  [5607] = 1,
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
  [5629] = 1,
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
  [5651] = 1,
    ACTIONS(335), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
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
  [5695] = 1,
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
  [5717] = 1,
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
  [5739] = 1,
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
  [5761] = 1,
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
  [5783] = 1,
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
  [5805] = 1,
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
  [5827] = 1,
    ACTIONS(443), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5849] = 1,
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
  [5871] = 1,
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
  [5893] = 1,
    ACTIONS(431), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5915] = 1,
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
  [5937] = 1,
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
  [5959] = 3,
    ACTIONS(706), 1,
      anon_sym_PIPE,
    STATE(219), 1,
      aux_sym_type_union_repeat1,
    ACTIONS(704), 17,
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
  [5985] = 1,
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
  [6007] = 1,
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
  [6029] = 1,
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
  [6051] = 1,
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
  [6073] = 3,
    ACTIONS(716), 1,
      anon_sym_PIPE,
    STATE(213), 1,
      aux_sym_type_union_repeat1,
    ACTIONS(636), 17,
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
  [6099] = 3,
    ACTIONS(721), 1,
      anon_sym_EQ,
    ACTIONS(723), 1,
      anon_sym_LT_COLON,
    ACTIONS(719), 17,
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
  [6125] = 1,
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
  [6147] = 1,
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
  [6169] = 1,
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
  [6191] = 3,
    ACTIONS(731), 1,
      anon_sym_DOT,
    STATE(218), 1,
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
  [6217] = 3,
    ACTIONS(706), 1,
      anon_sym_PIPE,
    STATE(213), 1,
      aux_sym_type_union_repeat1,
    ACTIONS(734), 17,
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
  [6243] = 1,
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
  [6265] = 1,
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
  [6287] = 1,
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
  [6309] = 1,
    ACTIONS(742), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6331] = 1,
    ACTIONS(744), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6353] = 1,
    ACTIONS(746), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6375] = 1,
    ACTIONS(748), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6397] = 1,
    ACTIONS(750), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6419] = 1,
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
  [6441] = 1,
    ACTIONS(355), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6463] = 1,
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
  [6485] = 1,
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
  [6507] = 3,
    ACTIONS(758), 1,
      anon_sym_DOT,
    STATE(218), 1,
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
  [6533] = 3,
    ACTIONS(758), 1,
      anon_sym_DOT,
    STATE(232), 1,
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
  [6559] = 1,
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
  [6581] = 1,
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
  [6603] = 2,
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
  [6626] = 2,
    ACTIONS(764), 2,
      anon_sym_stateful,
      sym_ident,
    ACTIONS(562), 16,
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
  [6649] = 2,
    ACTIONS(766), 2,
      anon_sym_stateful,
      sym_ident,
    ACTIONS(556), 16,
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
  [6672] = 3,
    ACTIONS(770), 1,
      anon_sym_stateful,
    ACTIONS(772), 1,
      sym_ident,
    ACTIONS(768), 16,
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
  [6697] = 3,
    ACTIONS(776), 1,
      anon_sym_stateful,
    ACTIONS(778), 1,
      sym_ident,
    ACTIONS(774), 16,
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
  [6722] = 2,
    ACTIONS(782), 1,
      sym_string,
    ACTIONS(780), 17,
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
  [6745] = 4,
    ACTIONS(614), 1,
      anon_sym_LBRACE,
    ACTIONS(758), 1,
      anon_sym_DOT,
    STATE(232), 1,
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
  [6772] = 3,
    ACTIONS(786), 1,
      anon_sym_stateful,
    ACTIONS(788), 1,
      sym_ident,
    ACTIONS(784), 16,
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
  [6797] = 3,
    ACTIONS(792), 1,
      anon_sym_stateful,
    ACTIONS(794), 1,
      sym_ident,
    ACTIONS(790), 16,
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
  [6822] = 3,
    ACTIONS(798), 1,
      anon_sym_stateful,
    ACTIONS(800), 1,
      sym_ident,
    ACTIONS(796), 16,
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
  [6847] = 3,
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
  [6872] = 1,
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
  [6892] = 1,
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
  [6912] = 1,
    ACTIONS(812), 17,
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
  [6932] = 1,
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
  [6952] = 1,
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
  [6972] = 1,
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
  [6992] = 4,
    ACTIONS(630), 1,
      anon_sym_LPAREN,
    ACTIONS(820), 1,
      anon_sym_COMMA,
    STATE(256), 1,
      aux_sym_directive_repeat1,
    ACTIONS(628), 14,
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
  [7018] = 4,
    ACTIONS(644), 1,
      anon_sym_LPAREN,
    ACTIONS(820), 1,
      anon_sym_COMMA,
    STATE(253), 1,
      aux_sym_directive_repeat1,
    ACTIONS(642), 14,
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
  [7044] = 1,
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
  [7064] = 3,
    ACTIONS(824), 1,
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
  [7088] = 1,
    ACTIONS(827), 17,
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
  [7108] = 3,
    ACTIONS(829), 1,
      anon_sym_PIPE,
    STATE(261), 1,
      aux_sym_type_union_repeat1,
    ACTIONS(704), 14,
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
  [7131] = 3,
    ACTIONS(831), 1,
      anon_sym_EQ,
    ACTIONS(833), 1,
      anon_sym_LT_COLON,
    ACTIONS(719), 14,
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
  [7154] = 3,
    ACTIONS(835), 1,
      anon_sym_PIPE,
    STATE(260), 1,
      aux_sym_type_union_repeat1,
    ACTIONS(636), 14,
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
  [7177] = 3,
    ACTIONS(829), 1,
      anon_sym_PIPE,
    STATE(260), 1,
      aux_sym_type_union_repeat1,
    ACTIONS(734), 14,
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
  [7200] = 1,
    ACTIONS(489), 14,
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
  [7217] = 8,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      sym_unsigned,
    ACTIONS(840), 1,
      aux_sym_float_token1,
    STATE(56), 1,
      sym_decimal,
    ACTIONS(49), 2,
      sym_hex,
      sym_binary,
    ACTIONS(838), 2,
      sym_string,
      sym_ident,
    STATE(80), 2,
      sym_integer,
      sym_float,
    STATE(377), 2,
      sym__directive_value,
      sym_number,
  [7246] = 8,
    ACTIONS(842), 1,
      anon_sym_COMMA,
    ACTIONS(844), 1,
      anon_sym_RPAREN,
    ACTIONS(848), 1,
      sym_ident,
    STATE(398), 1,
      aux_sym_functor_decl_repeat1,
    STATE(399), 1,
      sym_attribute,
    STATE(400), 1,
      sym_type_name,
    STATE(135), 2,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(846), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7275] = 8,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      sym_unsigned,
    ACTIONS(840), 1,
      aux_sym_float_token1,
    STATE(56), 1,
      sym_decimal,
    ACTIONS(49), 2,
      sym_hex,
      sym_binary,
    ACTIONS(850), 2,
      sym_string,
      sym_ident,
    STATE(80), 2,
      sym_integer,
      sym_float,
    STATE(367), 2,
      sym__directive_value,
      sym_number,
  [7304] = 8,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      sym_unsigned,
    ACTIONS(840), 1,
      aux_sym_float_token1,
    STATE(56), 1,
      sym_decimal,
    ACTIONS(49), 2,
      sym_hex,
      sym_binary,
    ACTIONS(852), 2,
      sym_string,
      sym_ident,
    STATE(80), 2,
      sym_integer,
      sym_float,
    STATE(418), 2,
      sym__directive_value,
      sym_number,
  [7333] = 6,
    ACTIONS(854), 1,
      anon_sym_LBRACK,
    ACTIONS(856), 1,
      sym_ident,
    STATE(153), 1,
      sym_adt_branch,
    STATE(258), 1,
      sym_type_name,
    STATE(135), 2,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(846), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7356] = 6,
    ACTIONS(854), 1,
      anon_sym_LBRACK,
    ACTIONS(858), 1,
      sym_ident,
    STATE(153), 1,
      sym_adt_branch,
    STATE(208), 1,
      sym_type_name,
    STATE(135), 2,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(846), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7379] = 5,
    ACTIONS(848), 1,
      sym_ident,
    STATE(416), 1,
      sym_type_name,
    STATE(419), 1,
      sym_attribute,
    STATE(135), 2,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(846), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7399] = 4,
    ACTIONS(860), 1,
      sym_ident,
    STATE(168), 1,
      sym_type_name,
    STATE(135), 2,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(846), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7416] = 4,
    ACTIONS(860), 1,
      sym_ident,
    STATE(207), 1,
      sym_type_name,
    STATE(135), 2,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(846), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7433] = 4,
    ACTIONS(862), 1,
      sym_ident,
    STATE(332), 1,
      sym_type_name,
    STATE(135), 2,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(846), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7450] = 4,
    ACTIONS(864), 1,
      sym_ident,
    STATE(207), 1,
      sym_type_name,
    STATE(135), 2,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(846), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7467] = 4,
    ACTIONS(868), 1,
      sym_ident,
    STATE(244), 1,
      sym_type_name,
    STATE(238), 2,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(866), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7484] = 4,
    ACTIONS(868), 1,
      sym_ident,
    STATE(245), 1,
      sym_type_name,
    STATE(238), 2,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(866), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7501] = 4,
    ACTIONS(868), 1,
      sym_ident,
    STATE(246), 1,
      sym_type_name,
    STATE(238), 2,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(866), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7518] = 4,
    ACTIONS(864), 1,
      sym_ident,
    STATE(255), 1,
      sym_type_name,
    STATE(135), 2,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(846), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7535] = 4,
    ACTIONS(868), 1,
      sym_ident,
    STATE(243), 1,
      sym_type_name,
    STATE(238), 2,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(866), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7552] = 4,
    ACTIONS(862), 1,
      sym_ident,
    STATE(449), 1,
      sym_type_name,
    STATE(135), 2,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(846), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7569] = 4,
    ACTIONS(868), 1,
      sym_ident,
    STATE(240), 1,
      sym_type_name,
    STATE(238), 2,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(866), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7586] = 4,
    ACTIONS(864), 1,
      sym_ident,
    STATE(168), 1,
      sym_type_name,
    STATE(135), 2,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(846), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7603] = 4,
    ACTIONS(868), 1,
      sym_ident,
    STATE(239), 1,
      sym_type_name,
    STATE(238), 2,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(866), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [7620] = 2,
    ACTIONS(870), 1,
      sym_ident,
    STATE(215), 6,
      sym_legacy_bare_type_decl,
      sym_subtype,
      sym_type_synonym,
      sym_type_union,
      sym_type_record,
      sym_adt,
  [7632] = 2,
    ACTIONS(872), 1,
      sym_ident,
    STATE(215), 6,
      sym_legacy_bare_type_decl,
      sym_subtype,
      sym_type_synonym,
      sym_type_union,
      sym_type_record,
      sym_adt,
  [7644] = 1,
    ACTIONS(874), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7652] = 1,
    ACTIONS(876), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7660] = 3,
    ACTIONS(878), 1,
      anon_sym_COMMA,
    STATE(300), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(880), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [7672] = 5,
    ACTIONS(882), 1,
      anon_sym_COMMA,
    ACTIONS(884), 1,
      anon_sym_RBRACE,
    ACTIONS(886), 1,
      sym_ident,
    STATE(353), 1,
      sym_attribute,
    STATE(355), 1,
      aux_sym_relation_decl_repeat2,
  [7688] = 3,
    ACTIONS(878), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(888), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [7700] = 3,
    ACTIONS(878), 1,
      anon_sym_COMMA,
    STATE(289), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(890), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [7712] = 3,
    ACTIONS(878), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(890), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [7724] = 5,
    ACTIONS(882), 1,
      anon_sym_COMMA,
    ACTIONS(886), 1,
      sym_ident,
    ACTIONS(892), 1,
      anon_sym_RBRACK,
    STATE(346), 1,
      aux_sym_relation_decl_repeat2,
    STATE(347), 1,
      sym_attribute,
  [7740] = 3,
    ACTIONS(878), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(894), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [7752] = 3,
    ACTIONS(896), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(899), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [7764] = 1,
    ACTIONS(901), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7772] = 3,
    ACTIONS(878), 1,
      anon_sym_COMMA,
    STATE(291), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(894), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [7784] = 5,
    ACTIONS(903), 1,
      anon_sym_COMMA,
    ACTIONS(905), 1,
      anon_sym_COLON_DASH,
    ACTIONS(907), 1,
      anon_sym_DOT,
    ACTIONS(909), 1,
      anon_sym_LT_EQ,
    STATE(370), 1,
      aux_sym_monotonic_rule_repeat1,
  [7800] = 3,
    ACTIONS(878), 1,
      anon_sym_COMMA,
    STATE(293), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(911), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [7812] = 1,
    ACTIONS(913), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7820] = 3,
    ACTIONS(878), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(911), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [7832] = 1,
    ACTIONS(915), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7840] = 5,
    ACTIONS(882), 1,
      anon_sym_COMMA,
    ACTIONS(886), 1,
      sym_ident,
    ACTIONS(917), 1,
      anon_sym_RPAREN,
    STATE(371), 1,
      sym_attribute,
    STATE(374), 1,
      aux_sym_relation_decl_repeat2,
  [7856] = 5,
    ACTIONS(882), 1,
      anon_sym_COMMA,
    ACTIONS(886), 1,
      sym_ident,
    ACTIONS(919), 1,
      anon_sym_RPAREN,
    STATE(337), 1,
      sym_attribute,
    STATE(372), 1,
      aux_sym_relation_decl_repeat2,
  [7872] = 5,
    ACTIONS(882), 1,
      anon_sym_COMMA,
    ACTIONS(886), 1,
      sym_ident,
    ACTIONS(921), 1,
      anon_sym_RPAREN,
    STATE(348), 1,
      aux_sym_relation_decl_repeat2,
    STATE(349), 1,
      sym_attribute,
  [7888] = 1,
    ACTIONS(923), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7896] = 1,
    ACTIONS(899), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7904] = 1,
    ACTIONS(925), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7912] = 1,
    ACTIONS(927), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7920] = 3,
    ACTIONS(929), 1,
      anon_sym_COMMA,
    STATE(309), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(932), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [7932] = 1,
    ACTIONS(934), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7940] = 1,
    ACTIONS(936), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7948] = 4,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(938), 1,
      anon_sym_COLON,
    STATE(49), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(170), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7962] = 1,
    ACTIONS(940), 4,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7969] = 3,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    STATE(322), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(880), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [7980] = 4,
    ACTIONS(944), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(946), 1,
      anon_sym_COMMA,
    ACTIONS(948), 1,
      anon_sym_RPAREN,
    STATE(387), 1,
      aux_sym_query_plan_repeat1,
  [7993] = 4,
    ACTIONS(27), 1,
      sym_ident,
    ACTIONS(950), 1,
      anon_sym_LBRACE,
    STATE(61), 1,
      sym_atom,
    STATE(466), 1,
      sym_qualified_name,
  [8006] = 3,
    ACTIONS(952), 1,
      anon_sym_COMMA,
    STATE(317), 1,
      aux_sym_match_repeat1,
    ACTIONS(534), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [8017] = 3,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    STATE(328), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(911), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8028] = 4,
    ACTIONS(946), 1,
      anon_sym_COMMA,
    ACTIONS(955), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(957), 1,
      anon_sym_RPAREN,
    STATE(338), 1,
      aux_sym_query_plan_repeat1,
  [8041] = 1,
    ACTIONS(932), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [8048] = 4,
    ACTIONS(959), 1,
      anon_sym_COMMA,
    ACTIONS(961), 1,
      anon_sym_RPAREN,
    ACTIONS(963), 1,
      sym_ident,
    STATE(382), 1,
      aux_sym_directive_repeat2,
  [8061] = 3,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    STATE(324), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(911), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8072] = 3,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    STATE(324), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(890), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8083] = 3,
    ACTIONS(965), 1,
      anon_sym_COMMA,
    STATE(324), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(899), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8094] = 3,
    ACTIONS(970), 1,
      anon_sym_COMMA,
    STATE(325), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(968), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [8105] = 3,
    ACTIONS(975), 1,
      anon_sym_SEMI,
    STATE(330), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(973), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [8116] = 3,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    STATE(336), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(890), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8127] = 3,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    STATE(324), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(894), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8138] = 3,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    STATE(323), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(894), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8149] = 3,
    ACTIONS(977), 1,
      anon_sym_SEMI,
    STATE(330), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(940), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [8160] = 4,
    ACTIONS(27), 1,
      sym_ident,
    ACTIONS(980), 1,
      anon_sym_LBRACE,
    STATE(62), 1,
      sym_atom,
    STATE(466), 1,
      sym_qualified_name,
  [8173] = 1,
    ACTIONS(982), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [8180] = 4,
    ACTIONS(959), 1,
      anon_sym_COMMA,
    ACTIONS(984), 1,
      anon_sym_RPAREN,
    ACTIONS(986), 1,
      sym_ident,
    STATE(341), 1,
      aux_sym_directive_repeat2,
  [8193] = 4,
    ACTIONS(988), 1,
      anon_sym_LPAREN,
    ACTIONS(990), 1,
      anon_sym_COMMA,
    ACTIONS(992), 1,
      sym_ident,
    STATE(364), 1,
      aux_sym_relation_decl_repeat1,
  [8206] = 3,
    ACTIONS(975), 1,
      anon_sym_SEMI,
    STATE(326), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(994), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [8217] = 3,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    STATE(324), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(888), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [8228] = 3,
    ACTIONS(882), 1,
      anon_sym_COMMA,
    ACTIONS(996), 1,
      anon_sym_RPAREN,
    STATE(352), 1,
      aux_sym_relation_decl_repeat2,
  [8238] = 3,
    ACTIONS(946), 1,
      anon_sym_COMMA,
    ACTIONS(998), 1,
      anon_sym_RPAREN,
    STATE(392), 1,
      aux_sym_query_plan_repeat1,
  [8248] = 3,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
    STATE(317), 1,
      aux_sym_match_repeat1,
  [8258] = 3,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(1000), 1,
      anon_sym_RPAREN,
    STATE(317), 1,
      aux_sym_match_repeat1,
  [8268] = 3,
    ACTIONS(959), 1,
      anon_sym_COMMA,
    ACTIONS(1002), 1,
      anon_sym_RPAREN,
    STATE(343), 1,
      aux_sym_directive_repeat2,
  [8278] = 3,
    ACTIONS(1004), 1,
      anon_sym_COMMA,
    ACTIONS(1007), 1,
      anon_sym_LBRACE,
    STATE(342), 1,
      aux_sym_component_decl_repeat1,
  [8288] = 3,
    ACTIONS(1009), 1,
      anon_sym_COMMA,
    ACTIONS(1012), 1,
      anon_sym_RPAREN,
    STATE(343), 1,
      aux_sym_directive_repeat2,
  [8298] = 3,
    ACTIONS(990), 1,
      anon_sym_COMMA,
    ACTIONS(1014), 1,
      anon_sym_RPAREN,
    STATE(350), 1,
      aux_sym_relation_decl_repeat1,
  [8308] = 3,
    ACTIONS(882), 1,
      anon_sym_COMMA,
    ACTIONS(1016), 1,
      anon_sym_RPAREN,
    STATE(309), 1,
      aux_sym_relation_decl_repeat2,
  [8318] = 3,
    ACTIONS(882), 1,
      anon_sym_COMMA,
    ACTIONS(1018), 1,
      anon_sym_RBRACK,
    STATE(309), 1,
      aux_sym_relation_decl_repeat2,
  [8328] = 3,
    ACTIONS(882), 1,
      anon_sym_COMMA,
    ACTIONS(1018), 1,
      anon_sym_RBRACK,
    STATE(351), 1,
      aux_sym_relation_decl_repeat2,
  [8338] = 3,
    ACTIONS(882), 1,
      anon_sym_COMMA,
    ACTIONS(1020), 1,
      anon_sym_RPAREN,
    STATE(309), 1,
      aux_sym_relation_decl_repeat2,
  [8348] = 3,
    ACTIONS(882), 1,
      anon_sym_COMMA,
    ACTIONS(1020), 1,
      anon_sym_RPAREN,
    STATE(345), 1,
      aux_sym_relation_decl_repeat2,
  [8358] = 3,
    ACTIONS(990), 1,
      anon_sym_COMMA,
    ACTIONS(1022), 1,
      anon_sym_RPAREN,
    STATE(325), 1,
      aux_sym_relation_decl_repeat1,
  [8368] = 3,
    ACTIONS(882), 1,
      anon_sym_COMMA,
    ACTIONS(1024), 1,
      anon_sym_RBRACK,
    STATE(309), 1,
      aux_sym_relation_decl_repeat2,
  [8378] = 3,
    ACTIONS(882), 1,
      anon_sym_COMMA,
    ACTIONS(1026), 1,
      anon_sym_RPAREN,
    STATE(309), 1,
      aux_sym_relation_decl_repeat2,
  [8388] = 3,
    ACTIONS(882), 1,
      anon_sym_COMMA,
    ACTIONS(1028), 1,
      anon_sym_RBRACE,
    STATE(363), 1,
      aux_sym_relation_decl_repeat2,
  [8398] = 3,
    ACTIONS(1030), 1,
      anon_sym_COMMA,
    ACTIONS(1032), 1,
      anon_sym_LBRACE,
    STATE(342), 1,
      aux_sym_component_decl_repeat1,
  [8408] = 3,
    ACTIONS(882), 1,
      anon_sym_COMMA,
    ACTIONS(1028), 1,
      anon_sym_RBRACE,
    STATE(309), 1,
      aux_sym_relation_decl_repeat2,
  [8418] = 3,
    ACTIONS(1034), 1,
      anon_sym_COMMA,
    ACTIONS(1036), 1,
      anon_sym_GT,
    STATE(359), 1,
      aux_sym_component_type_repeat1,
  [8428] = 3,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
    STATE(317), 1,
      aux_sym_match_repeat1,
  [8438] = 3,
    ACTIONS(1038), 1,
      anon_sym_COMMA,
    ACTIONS(1041), 1,
      anon_sym_RPAREN,
    STATE(358), 1,
      aux_sym_functor_decl_repeat1,
  [8448] = 3,
    ACTIONS(1043), 1,
      anon_sym_COMMA,
    ACTIONS(1046), 1,
      anon_sym_GT,
    STATE(359), 1,
      aux_sym_component_type_repeat1,
  [8458] = 3,
    ACTIONS(842), 1,
      anon_sym_COMMA,
    ACTIONS(1048), 1,
      anon_sym_RPAREN,
    STATE(358), 1,
      aux_sym_functor_decl_repeat1,
  [8468] = 3,
    ACTIONS(990), 1,
      anon_sym_COMMA,
    ACTIONS(1050), 1,
      anon_sym_LPAREN,
    STATE(379), 1,
      aux_sym_relation_decl_repeat1,
  [8478] = 3,
    ACTIONS(842), 1,
      anon_sym_COMMA,
    ACTIONS(1052), 1,
      anon_sym_RPAREN,
    STATE(358), 1,
      aux_sym_functor_decl_repeat1,
  [8488] = 3,
    ACTIONS(882), 1,
      anon_sym_COMMA,
    ACTIONS(1054), 1,
      anon_sym_RBRACE,
    STATE(309), 1,
      aux_sym_relation_decl_repeat2,
  [8498] = 3,
    ACTIONS(990), 1,
      anon_sym_COMMA,
    ACTIONS(1050), 1,
      anon_sym_LPAREN,
    STATE(325), 1,
      aux_sym_relation_decl_repeat1,
  [8508] = 3,
    ACTIONS(27), 1,
      sym_ident,
    STATE(426), 1,
      sym_atom,
    STATE(466), 1,
      sym_qualified_name,
  [8518] = 3,
    ACTIONS(959), 1,
      anon_sym_COMMA,
    ACTIONS(1056), 1,
      anon_sym_RPAREN,
    STATE(343), 1,
      aux_sym_directive_repeat2,
  [8528] = 3,
    ACTIONS(959), 1,
      anon_sym_COMMA,
    ACTIONS(1058), 1,
      anon_sym_RPAREN,
    STATE(389), 1,
      aux_sym_directive_repeat2,
  [8538] = 3,
    ACTIONS(27), 1,
      sym_ident,
    STATE(466), 1,
      sym_qualified_name,
    STATE(483), 1,
      sym_atom,
  [8548] = 3,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(1060), 1,
      anon_sym_RPAREN,
    STATE(317), 1,
      aux_sym_match_repeat1,
  [8558] = 3,
    ACTIONS(903), 1,
      anon_sym_COMMA,
    ACTIONS(1062), 1,
      anon_sym_COLON_DASH,
    STATE(403), 1,
      aux_sym_monotonic_rule_repeat1,
  [8568] = 3,
    ACTIONS(882), 1,
      anon_sym_COMMA,
    ACTIONS(1064), 1,
      anon_sym_RPAREN,
    STATE(390), 1,
      aux_sym_relation_decl_repeat2,
  [8578] = 3,
    ACTIONS(882), 1,
      anon_sym_COMMA,
    ACTIONS(996), 1,
      anon_sym_RPAREN,
    STATE(309), 1,
      aux_sym_relation_decl_repeat2,
  [8588] = 3,
    ACTIONS(1066), 1,
      anon_sym_COMMA,
    ACTIONS(1069), 1,
      anon_sym_RPAREN,
    STATE(373), 1,
      aux_sym_atom_repeat1,
  [8598] = 3,
    ACTIONS(882), 1,
      anon_sym_COMMA,
    ACTIONS(1064), 1,
      anon_sym_RPAREN,
    STATE(309), 1,
      aux_sym_relation_decl_repeat2,
  [8608] = 3,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    ACTIONS(1071), 1,
      anon_sym_RPAREN,
    STATE(373), 1,
      aux_sym_atom_repeat1,
  [8618] = 1,
    ACTIONS(968), 3,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8624] = 3,
    ACTIONS(959), 1,
      anon_sym_COMMA,
    ACTIONS(1073), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      aux_sym_directive_repeat2,
  [8634] = 3,
    ACTIONS(973), 1,
      anon_sym_DOT,
    ACTIONS(1075), 1,
      anon_sym_SEMI,
    STATE(385), 1,
      aux_sym_disjunction_repeat1,
  [8644] = 3,
    ACTIONS(990), 1,
      anon_sym_COMMA,
    ACTIONS(1077), 1,
      anon_sym_LPAREN,
    STATE(325), 1,
      aux_sym_relation_decl_repeat1,
  [8654] = 3,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(540), 1,
      anon_sym_RBRACK,
    STATE(317), 1,
      aux_sym_match_repeat1,
  [8664] = 3,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(1079), 1,
      anon_sym_RPAREN,
    STATE(317), 1,
      aux_sym_match_repeat1,
  [8674] = 3,
    ACTIONS(959), 1,
      anon_sym_COMMA,
    ACTIONS(1081), 1,
      anon_sym_RPAREN,
    STATE(343), 1,
      aux_sym_directive_repeat2,
  [8684] = 3,
    ACTIONS(990), 1,
      anon_sym_COMMA,
    ACTIONS(1083), 1,
      anon_sym_RPAREN,
    STATE(401), 1,
      aux_sym_relation_decl_repeat1,
  [8694] = 3,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(1085), 1,
      anon_sym_RPAREN,
    STATE(317), 1,
      aux_sym_match_repeat1,
  [8704] = 3,
    ACTIONS(940), 1,
      anon_sym_DOT,
    ACTIONS(1087), 1,
      anon_sym_SEMI,
    STATE(385), 1,
      aux_sym_disjunction_repeat1,
  [8714] = 3,
    ACTIONS(946), 1,
      anon_sym_COMMA,
    ACTIONS(1090), 1,
      anon_sym_RPAREN,
    STATE(392), 1,
      aux_sym_query_plan_repeat1,
  [8724] = 3,
    ACTIONS(946), 1,
      anon_sym_COMMA,
    ACTIONS(1092), 1,
      anon_sym_RPAREN,
    STATE(392), 1,
      aux_sym_query_plan_repeat1,
  [8734] = 3,
    ACTIONS(946), 1,
      anon_sym_COMMA,
    ACTIONS(1092), 1,
      anon_sym_RPAREN,
    STATE(386), 1,
      aux_sym_query_plan_repeat1,
  [8744] = 3,
    ACTIONS(959), 1,
      anon_sym_COMMA,
    ACTIONS(1094), 1,
      anon_sym_RPAREN,
    STATE(343), 1,
      aux_sym_directive_repeat2,
  [8754] = 3,
    ACTIONS(882), 1,
      anon_sym_COMMA,
    ACTIONS(1096), 1,
      anon_sym_RPAREN,
    STATE(309), 1,
      aux_sym_relation_decl_repeat2,
  [8764] = 3,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(524), 1,
      anon_sym_RPAREN,
    STATE(317), 1,
      aux_sym_match_repeat1,
  [8774] = 3,
    ACTIONS(1098), 1,
      anon_sym_COMMA,
    ACTIONS(1101), 1,
      anon_sym_RPAREN,
    STATE(392), 1,
      aux_sym_query_plan_repeat1,
  [8784] = 3,
    ACTIONS(994), 1,
      anon_sym_DOT,
    ACTIONS(1075), 1,
      anon_sym_SEMI,
    STATE(378), 1,
      aux_sym_disjunction_repeat1,
  [8794] = 3,
    ACTIONS(1030), 1,
      anon_sym_COMMA,
    ACTIONS(1103), 1,
      anon_sym_LBRACE,
    STATE(354), 1,
      aux_sym_component_decl_repeat1,
  [8804] = 3,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
    STATE(317), 1,
      aux_sym_match_repeat1,
  [8814] = 3,
    ACTIONS(946), 1,
      anon_sym_COMMA,
    ACTIONS(1105), 1,
      anon_sym_RPAREN,
    STATE(392), 1,
      aux_sym_query_plan_repeat1,
  [8824] = 3,
    ACTIONS(1034), 1,
      anon_sym_COMMA,
    ACTIONS(1107), 1,
      anon_sym_GT,
    STATE(356), 1,
      aux_sym_component_type_repeat1,
  [8834] = 3,
    ACTIONS(842), 1,
      anon_sym_COMMA,
    ACTIONS(1109), 1,
      anon_sym_RPAREN,
    STATE(358), 1,
      aux_sym_functor_decl_repeat1,
  [8844] = 3,
    ACTIONS(842), 1,
      anon_sym_COMMA,
    ACTIONS(1111), 1,
      anon_sym_RPAREN,
    STATE(360), 1,
      aux_sym_functor_decl_repeat1,
  [8854] = 3,
    ACTIONS(842), 1,
      anon_sym_COMMA,
    ACTIONS(1113), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      aux_sym_functor_decl_repeat1,
  [8864] = 3,
    ACTIONS(990), 1,
      anon_sym_COMMA,
    ACTIONS(1115), 1,
      anon_sym_RPAREN,
    STATE(325), 1,
      aux_sym_relation_decl_repeat1,
  [8874] = 3,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(1117), 1,
      anon_sym_RBRACK,
    STATE(317), 1,
      aux_sym_match_repeat1,
  [8884] = 3,
    ACTIONS(1119), 1,
      anon_sym_COMMA,
    ACTIONS(1122), 1,
      anon_sym_COLON_DASH,
    STATE(403), 1,
      aux_sym_monotonic_rule_repeat1,
  [8894] = 3,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    ACTIONS(1124), 1,
      anon_sym_RPAREN,
    STATE(373), 1,
      aux_sym_atom_repeat1,
  [8904] = 3,
    ACTIONS(946), 1,
      anon_sym_COMMA,
    ACTIONS(998), 1,
      anon_sym_RPAREN,
    STATE(396), 1,
      aux_sym_query_plan_repeat1,
  [8914] = 1,
    ACTIONS(1101), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8919] = 1,
    ACTIONS(1126), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [8924] = 2,
    ACTIONS(1128), 1,
      sym_ident,
    STATE(414), 1,
      sym_component_type,
  [8931] = 2,
    ACTIONS(1130), 1,
      sym_ident,
    STATE(176), 1,
      sym_adt_branch,
  [8938] = 2,
    ACTIONS(1132), 1,
      anon_sym_LPAREN,
    ACTIONS(1134), 1,
      sym_ident,
  [8945] = 2,
    ACTIONS(1128), 1,
      sym_ident,
    STATE(407), 1,
      sym_component_type,
  [8952] = 2,
    ACTIONS(1136), 1,
      sym_ident,
    STATE(172), 1,
      sym_qualified_name,
  [8959] = 1,
    ACTIONS(1138), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [8964] = 2,
    ACTIONS(1140), 1,
      anon_sym_COLON,
    ACTIONS(1142), 1,
      anon_sym_LBRACE,
  [8971] = 2,
    ACTIONS(1144), 1,
      sym_ident,
    STATE(146), 1,
      sym_qualified_name,
  [8978] = 1,
    ACTIONS(1146), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8983] = 2,
    ACTIONS(1144), 1,
      sym_ident,
    STATE(254), 1,
      sym_qualified_name,
  [8990] = 1,
    ACTIONS(1148), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8995] = 1,
    ACTIONS(1150), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9000] = 2,
    ACTIONS(1128), 1,
      sym_ident,
    STATE(394), 1,
      sym_component_type,
  [9007] = 2,
    ACTIONS(27), 1,
      sym_ident,
    STATE(50), 1,
      sym_qualified_name,
  [9014] = 2,
    ACTIONS(886), 1,
      sym_ident,
    STATE(320), 1,
      sym_attribute,
  [9021] = 2,
    ACTIONS(1152), 1,
      sym_ident,
    STATE(50), 1,
      sym_qualified_name,
  [9028] = 2,
    ACTIONS(1154), 1,
      anon_sym_LPAREN,
    ACTIONS(1156), 1,
      sym_ident,
  [9035] = 2,
    ACTIONS(1128), 1,
      sym_ident,
    STATE(230), 1,
      sym_component_type,
  [9042] = 1,
    ACTIONS(1122), 2,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
  [9047] = 2,
    ACTIONS(1136), 1,
      sym_ident,
    STATE(146), 1,
      sym_qualified_name,
  [9054] = 1,
    ACTIONS(1158), 1,
      anon_sym_RBRACE,
  [9058] = 1,
    ACTIONS(1160), 1,
      sym_ident,
  [9062] = 1,
    ACTIONS(1162), 1,
      anon_sym_LPAREN,
  [9066] = 1,
    ACTIONS(1164), 1,
      anon_sym_COLON,
  [9070] = 1,
    ACTIONS(1166), 1,
      sym_ident,
  [9074] = 1,
    ACTIONS(1168), 1,
      anon_sym_DOT,
  [9078] = 1,
    ACTIONS(1170), 1,
      anon_sym_LPAREN,
  [9082] = 1,
    ACTIONS(1172), 1,
      anon_sym_LPAREN,
  [9086] = 1,
    ACTIONS(1174), 1,
      anon_sym_LPAREN,
  [9090] = 1,
    ACTIONS(1176), 1,
      aux_sym_preprocessor_token1,
  [9094] = 1,
    ACTIONS(1178), 1,
      sym_ident,
  [9098] = 1,
    ACTIONS(1180), 1,
      anon_sym_EQ,
  [9102] = 1,
    ACTIONS(1182), 1,
      anon_sym_RPAREN,
  [9106] = 1,
    ACTIONS(1184), 1,
      anon_sym_LPAREN,
  [9110] = 1,
    ACTIONS(1186), 1,
      anon_sym_DOT,
  [9114] = 1,
    ACTIONS(1188), 1,
      anon_sym_RPAREN,
  [9118] = 1,
    ACTIONS(1190), 1,
      anon_sym_LPAREN,
  [9122] = 1,
    ACTIONS(938), 1,
      anon_sym_COLON,
  [9126] = 1,
    ACTIONS(1192), 1,
      aux_sym_preprocessor_token1,
  [9130] = 1,
    ACTIONS(1194), 1,
      sym_ident,
  [9134] = 1,
    ACTIONS(1196), 1,
      anon_sym_COLON,
  [9138] = 1,
    ACTIONS(1198), 1,
      anon_sym_RPAREN,
  [9142] = 1,
    ACTIONS(1200), 1,
      anon_sym_COLON,
  [9146] = 1,
    ACTIONS(1202), 1,
      sym_ident,
  [9150] = 1,
    ACTIONS(1204), 1,
      anon_sym_COLON,
  [9154] = 1,
    ACTIONS(1206), 1,
      anon_sym_COLON,
  [9158] = 1,
    ACTIONS(1208), 1,
      sym_ident,
  [9162] = 1,
    ACTIONS(1210), 1,
      anon_sym_LPAREN,
  [9166] = 1,
    ACTIONS(1212), 1,
      sym_ident,
  [9170] = 1,
    ACTIONS(1214), 1,
      anon_sym_DOT,
  [9174] = 1,
    ACTIONS(1216), 1,
      anon_sym_EQ,
  [9178] = 1,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
  [9182] = 1,
    ACTIONS(1218), 1,
      anon_sym_RBRACE,
  [9186] = 1,
    ACTIONS(1220), 1,
      anon_sym_LPAREN,
  [9190] = 1,
    ACTIONS(1222), 1,
      anon_sym_LF,
  [9194] = 1,
    ACTIONS(1224), 1,
      anon_sym_SLASH,
  [9198] = 1,
    ACTIONS(1226), 1,
      sym_string,
  [9202] = 1,
    ACTIONS(1228), 1,
      anon_sym_COLON,
  [9206] = 1,
    ACTIONS(1230), 1,
      anon_sym_LPAREN,
  [9210] = 1,
    ACTIONS(1232), 1,
      anon_sym_COLON,
  [9214] = 1,
    ACTIONS(1234), 1,
      aux_sym_preprocessor_token1,
  [9218] = 1,
    ACTIONS(614), 1,
      anon_sym_LBRACE,
  [9222] = 1,
    ACTIONS(1236), 1,
      anon_sym_RPAREN,
  [9226] = 1,
    ACTIONS(1238), 1,
      sym_ident,
  [9230] = 1,
    ACTIONS(1240), 1,
      anon_sym_EQ,
  [9234] = 1,
    ACTIONS(1242), 1,
      ts_builtin_sym_end,
  [9238] = 1,
    ACTIONS(1244), 1,
      anon_sym_COLON,
  [9242] = 1,
    ACTIONS(1246), 1,
      sym_ident,
  [9246] = 1,
    ACTIONS(1248), 1,
      aux_sym_preprocessor_token1,
  [9250] = 1,
    ACTIONS(1250), 1,
      sym_ident,
  [9254] = 1,
    ACTIONS(1252), 1,
      anon_sym_LPAREN,
  [9258] = 1,
    ACTIONS(1254), 1,
      anon_sym_EQ,
  [9262] = 1,
    ACTIONS(1256), 1,
      sym_ident,
  [9266] = 1,
    ACTIONS(1258), 1,
      sym_ident,
  [9270] = 1,
    ACTIONS(1260), 1,
      sym_ident,
  [9274] = 1,
    ACTIONS(1262), 1,
      anon_sym_COLON_DASH,
  [9278] = 1,
    ACTIONS(1264), 1,
      anon_sym_RPAREN,
  [9282] = 1,
    ACTIONS(1266), 1,
      anon_sym_COLON,
  [9286] = 1,
    ACTIONS(1268), 1,
      sym_ident,
  [9290] = 1,
    ACTIONS(1270), 1,
      anon_sym_RPAREN,
  [9294] = 1,
    ACTIONS(1272), 1,
      anon_sym_RPAREN,
  [9298] = 1,
    ACTIONS(1274), 1,
      sym_string,
  [9302] = 1,
    ACTIONS(1276), 1,
      aux_sym_line_comment_token1,
  [9306] = 1,
    ACTIONS(1278), 1,
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
  [SMALL_STATE(51)] = 369,
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
  [SMALL_STATE(82)] = 1683,
  [SMALL_STATE(83)] = 1728,
  [SMALL_STATE(84)] = 1777,
  [SMALL_STATE(85)] = 1826,
  [SMALL_STATE(86)] = 1875,
  [SMALL_STATE(87)] = 1924,
  [SMALL_STATE(88)] = 1973,
  [SMALL_STATE(89)] = 2022,
  [SMALL_STATE(90)] = 2071,
  [SMALL_STATE(91)] = 2120,
  [SMALL_STATE(92)] = 2169,
  [SMALL_STATE(93)] = 2240,
  [SMALL_STATE(94)] = 2287,
  [SMALL_STATE(95)] = 2336,
  [SMALL_STATE(96)] = 2407,
  [SMALL_STATE(97)] = 2456,
  [SMALL_STATE(98)] = 2505,
  [SMALL_STATE(99)] = 2554,
  [SMALL_STATE(100)] = 2603,
  [SMALL_STATE(101)] = 2652,
  [SMALL_STATE(102)] = 2701,
  [SMALL_STATE(103)] = 2750,
  [SMALL_STATE(104)] = 2794,
  [SMALL_STATE(105)] = 2839,
  [SMALL_STATE(106)] = 2883,
  [SMALL_STATE(107)] = 2944,
  [SMALL_STATE(108)] = 3005,
  [SMALL_STATE(109)] = 3066,
  [SMALL_STATE(110)] = 3127,
  [SMALL_STATE(111)] = 3188,
  [SMALL_STATE(112)] = 3249,
  [SMALL_STATE(113)] = 3310,
  [SMALL_STATE(114)] = 3351,
  [SMALL_STATE(115)] = 3392,
  [SMALL_STATE(116)] = 3428,
  [SMALL_STATE(117)] = 3464,
  [SMALL_STATE(118)] = 3501,
  [SMALL_STATE(119)] = 3541,
  [SMALL_STATE(120)] = 3581,
  [SMALL_STATE(121)] = 3617,
  [SMALL_STATE(122)] = 3657,
  [SMALL_STATE(123)] = 3693,
  [SMALL_STATE(124)] = 3733,
  [SMALL_STATE(125)] = 3773,
  [SMALL_STATE(126)] = 3813,
  [SMALL_STATE(127)] = 3847,
  [SMALL_STATE(128)] = 3883,
  [SMALL_STATE(129)] = 3920,
  [SMALL_STATE(130)] = 3955,
  [SMALL_STATE(131)] = 3989,
  [SMALL_STATE(132)] = 4023,
  [SMALL_STATE(133)] = 4057,
  [SMALL_STATE(134)] = 4091,
  [SMALL_STATE(135)] = 4125,
  [SMALL_STATE(136)] = 4151,
  [SMALL_STATE(137)] = 4179,
  [SMALL_STATE(138)] = 4205,
  [SMALL_STATE(139)] = 4230,
  [SMALL_STATE(140)] = 4259,
  [SMALL_STATE(141)] = 4288,
  [SMALL_STATE(142)] = 4313,
  [SMALL_STATE(143)] = 4342,
  [SMALL_STATE(144)] = 4370,
  [SMALL_STATE(145)] = 4398,
  [SMALL_STATE(146)] = 4426,
  [SMALL_STATE(147)] = 4450,
  [SMALL_STATE(148)] = 4478,
  [SMALL_STATE(149)] = 4506,
  [SMALL_STATE(150)] = 4534,
  [SMALL_STATE(151)] = 4562,
  [SMALL_STATE(152)] = 4590,
  [SMALL_STATE(153)] = 4618,
  [SMALL_STATE(154)] = 4646,
  [SMALL_STATE(155)] = 4674,
  [SMALL_STATE(156)] = 4704,
  [SMALL_STATE(157)] = 4730,
  [SMALL_STATE(158)] = 4758,
  [SMALL_STATE(159)] = 4786,
  [SMALL_STATE(160)] = 4814,
  [SMALL_STATE(161)] = 4842,
  [SMALL_STATE(162)] = 4870,
  [SMALL_STATE(163)] = 4898,
  [SMALL_STATE(164)] = 4926,
  [SMALL_STATE(165)] = 4954,
  [SMALL_STATE(166)] = 4982,
  [SMALL_STATE(167)] = 5011,
  [SMALL_STATE(168)] = 5034,
  [SMALL_STATE(169)] = 5057,
  [SMALL_STATE(170)] = 5080,
  [SMALL_STATE(171)] = 5103,
  [SMALL_STATE(172)] = 5132,
  [SMALL_STATE(173)] = 5161,
  [SMALL_STATE(174)] = 5184,
  [SMALL_STATE(175)] = 5213,
  [SMALL_STATE(176)] = 5236,
  [SMALL_STATE(177)] = 5259,
  [SMALL_STATE(178)] = 5282,
  [SMALL_STATE(179)] = 5305,
  [SMALL_STATE(180)] = 5334,
  [SMALL_STATE(181)] = 5357,
  [SMALL_STATE(182)] = 5380,
  [SMALL_STATE(183)] = 5407,
  [SMALL_STATE(184)] = 5429,
  [SMALL_STATE(185)] = 5453,
  [SMALL_STATE(186)] = 5475,
  [SMALL_STATE(187)] = 5497,
  [SMALL_STATE(188)] = 5519,
  [SMALL_STATE(189)] = 5541,
  [SMALL_STATE(190)] = 5563,
  [SMALL_STATE(191)] = 5585,
  [SMALL_STATE(192)] = 5607,
  [SMALL_STATE(193)] = 5629,
  [SMALL_STATE(194)] = 5651,
  [SMALL_STATE(195)] = 5673,
  [SMALL_STATE(196)] = 5695,
  [SMALL_STATE(197)] = 5717,
  [SMALL_STATE(198)] = 5739,
  [SMALL_STATE(199)] = 5761,
  [SMALL_STATE(200)] = 5783,
  [SMALL_STATE(201)] = 5805,
  [SMALL_STATE(202)] = 5827,
  [SMALL_STATE(203)] = 5849,
  [SMALL_STATE(204)] = 5871,
  [SMALL_STATE(205)] = 5893,
  [SMALL_STATE(206)] = 5915,
  [SMALL_STATE(207)] = 5937,
  [SMALL_STATE(208)] = 5959,
  [SMALL_STATE(209)] = 5985,
  [SMALL_STATE(210)] = 6007,
  [SMALL_STATE(211)] = 6029,
  [SMALL_STATE(212)] = 6051,
  [SMALL_STATE(213)] = 6073,
  [SMALL_STATE(214)] = 6099,
  [SMALL_STATE(215)] = 6125,
  [SMALL_STATE(216)] = 6147,
  [SMALL_STATE(217)] = 6169,
  [SMALL_STATE(218)] = 6191,
  [SMALL_STATE(219)] = 6217,
  [SMALL_STATE(220)] = 6243,
  [SMALL_STATE(221)] = 6265,
  [SMALL_STATE(222)] = 6287,
  [SMALL_STATE(223)] = 6309,
  [SMALL_STATE(224)] = 6331,
  [SMALL_STATE(225)] = 6353,
  [SMALL_STATE(226)] = 6375,
  [SMALL_STATE(227)] = 6397,
  [SMALL_STATE(228)] = 6419,
  [SMALL_STATE(229)] = 6441,
  [SMALL_STATE(230)] = 6463,
  [SMALL_STATE(231)] = 6485,
  [SMALL_STATE(232)] = 6507,
  [SMALL_STATE(233)] = 6533,
  [SMALL_STATE(234)] = 6559,
  [SMALL_STATE(235)] = 6581,
  [SMALL_STATE(236)] = 6603,
  [SMALL_STATE(237)] = 6626,
  [SMALL_STATE(238)] = 6649,
  [SMALL_STATE(239)] = 6672,
  [SMALL_STATE(240)] = 6697,
  [SMALL_STATE(241)] = 6722,
  [SMALL_STATE(242)] = 6745,
  [SMALL_STATE(243)] = 6772,
  [SMALL_STATE(244)] = 6797,
  [SMALL_STATE(245)] = 6822,
  [SMALL_STATE(246)] = 6847,
  [SMALL_STATE(247)] = 6872,
  [SMALL_STATE(248)] = 6892,
  [SMALL_STATE(249)] = 6912,
  [SMALL_STATE(250)] = 6932,
  [SMALL_STATE(251)] = 6952,
  [SMALL_STATE(252)] = 6972,
  [SMALL_STATE(253)] = 6992,
  [SMALL_STATE(254)] = 7018,
  [SMALL_STATE(255)] = 7044,
  [SMALL_STATE(256)] = 7064,
  [SMALL_STATE(257)] = 7088,
  [SMALL_STATE(258)] = 7108,
  [SMALL_STATE(259)] = 7131,
  [SMALL_STATE(260)] = 7154,
  [SMALL_STATE(261)] = 7177,
  [SMALL_STATE(262)] = 7200,
  [SMALL_STATE(263)] = 7217,
  [SMALL_STATE(264)] = 7246,
  [SMALL_STATE(265)] = 7275,
  [SMALL_STATE(266)] = 7304,
  [SMALL_STATE(267)] = 7333,
  [SMALL_STATE(268)] = 7356,
  [SMALL_STATE(269)] = 7379,
  [SMALL_STATE(270)] = 7399,
  [SMALL_STATE(271)] = 7416,
  [SMALL_STATE(272)] = 7433,
  [SMALL_STATE(273)] = 7450,
  [SMALL_STATE(274)] = 7467,
  [SMALL_STATE(275)] = 7484,
  [SMALL_STATE(276)] = 7501,
  [SMALL_STATE(277)] = 7518,
  [SMALL_STATE(278)] = 7535,
  [SMALL_STATE(279)] = 7552,
  [SMALL_STATE(280)] = 7569,
  [SMALL_STATE(281)] = 7586,
  [SMALL_STATE(282)] = 7603,
  [SMALL_STATE(283)] = 7620,
  [SMALL_STATE(284)] = 7632,
  [SMALL_STATE(285)] = 7644,
  [SMALL_STATE(286)] = 7652,
  [SMALL_STATE(287)] = 7660,
  [SMALL_STATE(288)] = 7672,
  [SMALL_STATE(289)] = 7688,
  [SMALL_STATE(290)] = 7700,
  [SMALL_STATE(291)] = 7712,
  [SMALL_STATE(292)] = 7724,
  [SMALL_STATE(293)] = 7740,
  [SMALL_STATE(294)] = 7752,
  [SMALL_STATE(295)] = 7764,
  [SMALL_STATE(296)] = 7772,
  [SMALL_STATE(297)] = 7784,
  [SMALL_STATE(298)] = 7800,
  [SMALL_STATE(299)] = 7812,
  [SMALL_STATE(300)] = 7820,
  [SMALL_STATE(301)] = 7832,
  [SMALL_STATE(302)] = 7840,
  [SMALL_STATE(303)] = 7856,
  [SMALL_STATE(304)] = 7872,
  [SMALL_STATE(305)] = 7888,
  [SMALL_STATE(306)] = 7896,
  [SMALL_STATE(307)] = 7904,
  [SMALL_STATE(308)] = 7912,
  [SMALL_STATE(309)] = 7920,
  [SMALL_STATE(310)] = 7932,
  [SMALL_STATE(311)] = 7940,
  [SMALL_STATE(312)] = 7948,
  [SMALL_STATE(313)] = 7962,
  [SMALL_STATE(314)] = 7969,
  [SMALL_STATE(315)] = 7980,
  [SMALL_STATE(316)] = 7993,
  [SMALL_STATE(317)] = 8006,
  [SMALL_STATE(318)] = 8017,
  [SMALL_STATE(319)] = 8028,
  [SMALL_STATE(320)] = 8041,
  [SMALL_STATE(321)] = 8048,
  [SMALL_STATE(322)] = 8061,
  [SMALL_STATE(323)] = 8072,
  [SMALL_STATE(324)] = 8083,
  [SMALL_STATE(325)] = 8094,
  [SMALL_STATE(326)] = 8105,
  [SMALL_STATE(327)] = 8116,
  [SMALL_STATE(328)] = 8127,
  [SMALL_STATE(329)] = 8138,
  [SMALL_STATE(330)] = 8149,
  [SMALL_STATE(331)] = 8160,
  [SMALL_STATE(332)] = 8173,
  [SMALL_STATE(333)] = 8180,
  [SMALL_STATE(334)] = 8193,
  [SMALL_STATE(335)] = 8206,
  [SMALL_STATE(336)] = 8217,
  [SMALL_STATE(337)] = 8228,
  [SMALL_STATE(338)] = 8238,
  [SMALL_STATE(339)] = 8248,
  [SMALL_STATE(340)] = 8258,
  [SMALL_STATE(341)] = 8268,
  [SMALL_STATE(342)] = 8278,
  [SMALL_STATE(343)] = 8288,
  [SMALL_STATE(344)] = 8298,
  [SMALL_STATE(345)] = 8308,
  [SMALL_STATE(346)] = 8318,
  [SMALL_STATE(347)] = 8328,
  [SMALL_STATE(348)] = 8338,
  [SMALL_STATE(349)] = 8348,
  [SMALL_STATE(350)] = 8358,
  [SMALL_STATE(351)] = 8368,
  [SMALL_STATE(352)] = 8378,
  [SMALL_STATE(353)] = 8388,
  [SMALL_STATE(354)] = 8398,
  [SMALL_STATE(355)] = 8408,
  [SMALL_STATE(356)] = 8418,
  [SMALL_STATE(357)] = 8428,
  [SMALL_STATE(358)] = 8438,
  [SMALL_STATE(359)] = 8448,
  [SMALL_STATE(360)] = 8458,
  [SMALL_STATE(361)] = 8468,
  [SMALL_STATE(362)] = 8478,
  [SMALL_STATE(363)] = 8488,
  [SMALL_STATE(364)] = 8498,
  [SMALL_STATE(365)] = 8508,
  [SMALL_STATE(366)] = 8518,
  [SMALL_STATE(367)] = 8528,
  [SMALL_STATE(368)] = 8538,
  [SMALL_STATE(369)] = 8548,
  [SMALL_STATE(370)] = 8558,
  [SMALL_STATE(371)] = 8568,
  [SMALL_STATE(372)] = 8578,
  [SMALL_STATE(373)] = 8588,
  [SMALL_STATE(374)] = 8598,
  [SMALL_STATE(375)] = 8608,
  [SMALL_STATE(376)] = 8618,
  [SMALL_STATE(377)] = 8624,
  [SMALL_STATE(378)] = 8634,
  [SMALL_STATE(379)] = 8644,
  [SMALL_STATE(380)] = 8654,
  [SMALL_STATE(381)] = 8664,
  [SMALL_STATE(382)] = 8674,
  [SMALL_STATE(383)] = 8684,
  [SMALL_STATE(384)] = 8694,
  [SMALL_STATE(385)] = 8704,
  [SMALL_STATE(386)] = 8714,
  [SMALL_STATE(387)] = 8724,
  [SMALL_STATE(388)] = 8734,
  [SMALL_STATE(389)] = 8744,
  [SMALL_STATE(390)] = 8754,
  [SMALL_STATE(391)] = 8764,
  [SMALL_STATE(392)] = 8774,
  [SMALL_STATE(393)] = 8784,
  [SMALL_STATE(394)] = 8794,
  [SMALL_STATE(395)] = 8804,
  [SMALL_STATE(396)] = 8814,
  [SMALL_STATE(397)] = 8824,
  [SMALL_STATE(398)] = 8834,
  [SMALL_STATE(399)] = 8844,
  [SMALL_STATE(400)] = 8854,
  [SMALL_STATE(401)] = 8864,
  [SMALL_STATE(402)] = 8874,
  [SMALL_STATE(403)] = 8884,
  [SMALL_STATE(404)] = 8894,
  [SMALL_STATE(405)] = 8904,
  [SMALL_STATE(406)] = 8914,
  [SMALL_STATE(407)] = 8919,
  [SMALL_STATE(408)] = 8924,
  [SMALL_STATE(409)] = 8931,
  [SMALL_STATE(410)] = 8938,
  [SMALL_STATE(411)] = 8945,
  [SMALL_STATE(412)] = 8952,
  [SMALL_STATE(413)] = 8959,
  [SMALL_STATE(414)] = 8964,
  [SMALL_STATE(415)] = 8971,
  [SMALL_STATE(416)] = 8978,
  [SMALL_STATE(417)] = 8983,
  [SMALL_STATE(418)] = 8990,
  [SMALL_STATE(419)] = 8995,
  [SMALL_STATE(420)] = 9000,
  [SMALL_STATE(421)] = 9007,
  [SMALL_STATE(422)] = 9014,
  [SMALL_STATE(423)] = 9021,
  [SMALL_STATE(424)] = 9028,
  [SMALL_STATE(425)] = 9035,
  [SMALL_STATE(426)] = 9042,
  [SMALL_STATE(427)] = 9047,
  [SMALL_STATE(428)] = 9054,
  [SMALL_STATE(429)] = 9058,
  [SMALL_STATE(430)] = 9062,
  [SMALL_STATE(431)] = 9066,
  [SMALL_STATE(432)] = 9070,
  [SMALL_STATE(433)] = 9074,
  [SMALL_STATE(434)] = 9078,
  [SMALL_STATE(435)] = 9082,
  [SMALL_STATE(436)] = 9086,
  [SMALL_STATE(437)] = 9090,
  [SMALL_STATE(438)] = 9094,
  [SMALL_STATE(439)] = 9098,
  [SMALL_STATE(440)] = 9102,
  [SMALL_STATE(441)] = 9106,
  [SMALL_STATE(442)] = 9110,
  [SMALL_STATE(443)] = 9114,
  [SMALL_STATE(444)] = 9118,
  [SMALL_STATE(445)] = 9122,
  [SMALL_STATE(446)] = 9126,
  [SMALL_STATE(447)] = 9130,
  [SMALL_STATE(448)] = 9134,
  [SMALL_STATE(449)] = 9138,
  [SMALL_STATE(450)] = 9142,
  [SMALL_STATE(451)] = 9146,
  [SMALL_STATE(452)] = 9150,
  [SMALL_STATE(453)] = 9154,
  [SMALL_STATE(454)] = 9158,
  [SMALL_STATE(455)] = 9162,
  [SMALL_STATE(456)] = 9166,
  [SMALL_STATE(457)] = 9170,
  [SMALL_STATE(458)] = 9174,
  [SMALL_STATE(459)] = 9178,
  [SMALL_STATE(460)] = 9182,
  [SMALL_STATE(461)] = 9186,
  [SMALL_STATE(462)] = 9190,
  [SMALL_STATE(463)] = 9194,
  [SMALL_STATE(464)] = 9198,
  [SMALL_STATE(465)] = 9202,
  [SMALL_STATE(466)] = 9206,
  [SMALL_STATE(467)] = 9210,
  [SMALL_STATE(468)] = 9214,
  [SMALL_STATE(469)] = 9218,
  [SMALL_STATE(470)] = 9222,
  [SMALL_STATE(471)] = 9226,
  [SMALL_STATE(472)] = 9230,
  [SMALL_STATE(473)] = 9234,
  [SMALL_STATE(474)] = 9238,
  [SMALL_STATE(475)] = 9242,
  [SMALL_STATE(476)] = 9246,
  [SMALL_STATE(477)] = 9250,
  [SMALL_STATE(478)] = 9254,
  [SMALL_STATE(479)] = 9258,
  [SMALL_STATE(480)] = 9262,
  [SMALL_STATE(481)] = 9266,
  [SMALL_STATE(482)] = 9270,
  [SMALL_STATE(483)] = 9274,
  [SMALL_STATE(484)] = 9278,
  [SMALL_STATE(485)] = 9282,
  [SMALL_STATE(486)] = 9286,
  [SMALL_STATE(487)] = 9290,
  [SMALL_STATE(488)] = 9294,
  [SMALL_STATE(489)] = 9298,
  [SMALL_STATE(490)] = 9302,
  [SMALL_STATE(491)] = 9306,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intrinsic_functor, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(46),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negation, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negation, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(451),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_constructor, 2, .production_id = 17),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adt_constructor, 2, .production_id = 17),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 5, .production_id = 40),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 5, .production_id = 40),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4, .production_id = 21),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 4, .production_id = 21),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 3, .production_id = 9),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 3, .production_id = 9),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4, .production_id = 22),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 4, .production_id = 22),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_call, 5),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_call, 5),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_constructor, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_constructor, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_constructor, 4),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_constructor, 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 4, .production_id = 52),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 4, .production_id = 52),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 3, .production_id = 36),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 3, .production_id = 36),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_constructor, 4, .production_id = 17),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adt_constructor, 4, .production_id = 17),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 6, .production_id = 74),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 6, .production_id = 74),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_constructor, 5, .production_id = 17),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adt_constructor, 5, .production_id = 17),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_op, 3, .production_id = 38),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_op, 3, .production_id = 38),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 6, .production_id = 73),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 6, .production_id = 73),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_call, 4),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_call, 4),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 1),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_constructor, 3),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_constructor, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as, 6, .production_id = 72),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as, 6, .production_id = 72),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 8, .production_id = 76),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 8, .production_id = 76),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_constructor, 6, .production_id = 17),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adt_constructor, 6, .production_id = 17),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_call, 3),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_call, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 3),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 5, .production_id = 64),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 5, .production_id = 64),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 30),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 30),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 60),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 60),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 61),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 61),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 31),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 31),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 31),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 31),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 50),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 50),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 13),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 13),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 49),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 49),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 4),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 4),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 48),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 48),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_op, 2, .production_id = 19),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_op, 2, .production_id = 19),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 31),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 31),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(437),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(491),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(490),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(489),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(486),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(408),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(482),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(412),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(334),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(277),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(284),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(47),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 4, .production_id = 12),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 4, .production_id = 12),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 4, .production_id = 13),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 4, .production_id = 13),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 69),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 8, .production_id = 69),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 13),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 13),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 3),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 3),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 29),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 29),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [455] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2), SHIFT_REPEAT(103),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(437),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(491),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(490),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(408),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(429),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(482),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(417),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(334),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(283),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(47),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 3, .production_id = 38),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_repeat1, 2),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2, .production_id = 20),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_type, 1, .production_id = 2),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_type, 5, .production_id = 43),
  [566] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(456),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_type, 4, .production_id = 26),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 2),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2),
  [579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2), SHIFT_REPEAT(410),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 5),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2, .production_id = 4),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 6),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 8),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_monotonic_rule, 5, .production_id = 39),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_adt_repeat1, 2),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_adt_repeat1, 2), SHIFT_REPEAT(409),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 2),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 2), SHIFT_REPEAT(468),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 7),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt, 3, .production_id = 14),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 6),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 5),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_monotonic_rule, 4, .production_id = 18),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 4),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt, 4, .production_id = 33),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsumptive_rule, 6, .production_id = 53),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 3),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, .production_id = 8),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 5),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_union_repeat1, 2),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_branch, 5),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, .production_id = 4),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 7),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_branch, 3),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 4),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_branch, 4),
  [654] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(481),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 5),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 6),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2, .production_id = 16),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2, .production_id = 16), SHIFT_REPEAT(427),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_decl, 7, .production_id = 58),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 7, .production_id = 63),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 50),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_record, 5, .production_id = 32),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsumptive_rule, 7, .production_id = 65),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 13),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 49),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_record, 6, .production_id = 32),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 48),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_decl, 5, .production_id = 27),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 61),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 30),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 12),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 29),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_decl, 8, .production_id = 68),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, .production_id = 4),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 60),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtype, 3, .production_id = 15),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_synonym, 3, .production_id = 15),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_decl, 6, .production_id = 46),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 31),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_decl, 7, .production_id = 59),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_record, 4, .production_id = 32),
  [716] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_union_repeat1, 2), SHIFT_REPEAT(281),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_legacy_bare_type_decl, 1, .production_id = 2),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 2),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2, .production_id = 5),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 8, .production_id = 70),
  [731] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(480),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_union, 4, .production_id = 33),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor, 3, .production_id = 6),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, .production_id = 34),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 3),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, .production_id = 8),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 6, .production_id = 51),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_monotonic_rule, 6, .production_id = 54),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 8, .production_id = 71),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_monotonic_rule, 5, .production_id = 37),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_init, 4, .production_id = 11),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_decl, 4, .production_id = 10),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 9, .production_id = 69),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 9, .production_id = 75),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 66),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 8, .production_id = 66),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 67),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 8, .production_id = 67),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 2, .production_id = 1),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 6, .production_id = 41),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 6, .production_id = 41),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 7, .production_id = 57),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 7, .production_id = 57),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 7, .production_id = 56),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 7, .production_id = 56),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 7, .production_id = 55),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 7, .production_id = 55),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 55),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 56),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 3, .production_id = 7),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 7, .production_id = 41),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 57),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 9, .production_id = 67),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_legacy_type_decl, 2, .production_id = 3),
  [824] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2, .production_id = 16), SHIFT_REPEAT(415),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 9, .production_id = 66),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [835] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_union_repeat1, 2), SHIFT_REPEAT(270),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 4),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 5),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 4),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 3),
  [896] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(16),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains, 5),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 3),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 5),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 3),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains, 3),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 4),
  [929] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2), SHIFT_REPEAT(422),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains, 4),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 5),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [952] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(31),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [965] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(19),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2),
  [970] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2), SHIFT_REPEAT(454),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 2),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [977] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(13),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 28),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 1),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1004] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat1, 2, .production_id = 47), SHIFT_REPEAT(411),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat1, 2, .production_id = 47),
  [1009] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2, .production_id = 35), SHIFT_REPEAT(438),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2, .production_id = 35),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1038] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functor_decl_repeat1, 2, .production_id = 25), SHIFT_REPEAT(269),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functor_decl_repeat1, 2, .production_id = 25),
  [1043] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_type_repeat1, 2, .production_id = 44), SHIFT_REPEAT(471),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_type_repeat1, 2, .production_id = 44),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1066] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2, .production_id = 23), SHIFT_REPEAT(33),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2, .production_id = 23),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1087] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(14),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1098] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat1, 2), SHIFT_REPEAT(446),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat1, 2),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_monotonic_rule_repeat1, 2), SHIFT_REPEAT(365),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_monotonic_rule_repeat1, 2),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat1, 2, .production_id = 45),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_type_repeat1, 2, .production_id = 42),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functor_decl_repeat1, 2, .production_id = 10),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 4, .production_id = 62),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functor_decl_repeat1, 2, .production_id = 24),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined_functor, 2),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1242] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
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
