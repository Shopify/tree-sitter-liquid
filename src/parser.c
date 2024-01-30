#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 220
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 79
#define ALIAS_COUNT 1
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 17
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 21

enum {
  sym_content = 1,
  anon_sym_LBRACE_LBRACE = 2,
  anon_sym_LBRACE_LBRACE_DASH = 3,
  anon_sym_LBRACE_PERCENT = 4,
  anon_sym_LBRACE_PERCENT_DASH = 5,
  anon_sym_RBRACE_RBRACE = 6,
  anon_sym_DASH_RBRACE_RBRACE = 7,
  anon_sym_PERCENT_RBRACE = 8,
  anon_sym_DASH_PERCENT_RBRACE = 9,
  anon_sym_PIPE = 10,
  anon_sym_COLON = 11,
  anon_sym_DOT = 12,
  anon_sym_assign = 13,
  anon_sym_EQ = 14,
  anon_sym_SQUOTE = 15,
  aux_sym_string_token1 = 16,
  anon_sym_DQUOTE = 17,
  aux_sym_string_token2 = 18,
  sym_number = 19,
  anon_sym_true = 20,
  anon_sym_false = 21,
  sym_identifier = 22,
  anon_sym_include = 23,
  anon_sym_render = 24,
  anon_sym_COMMA = 25,
  anon_sym_PLUS = 26,
  anon_sym_DASH = 27,
  anon_sym_STAR = 28,
  anon_sym_SLASH = 29,
  anon_sym_PERCENT = 30,
  anon_sym_CARET = 31,
  anon_sym_EQ_EQ = 32,
  anon_sym_LT = 33,
  anon_sym_LT_EQ = 34,
  anon_sym_BANG_EQ = 35,
  anon_sym_GT_EQ = 36,
  anon_sym_GT = 37,
  anon_sym_and = 38,
  anon_sym_or = 39,
  anon_sym_unless = 40,
  anon_sym_endunless = 41,
  anon_sym_if = 42,
  anon_sym_endif = 43,
  anon_sym_elseif = 44,
  anon_sym_else = 45,
  anon_sym_comment = 46,
  aux_sym_comment_token1 = 47,
  anon_sym_endcomment = 48,
  sym_template = 49,
  sym__node = 50,
  sym_tag = 51,
  sym__tag_open = 52,
  sym__tag_close = 53,
  sym__paired_tag = 54,
  sym__unpaired_tag = 55,
  sym_statement = 56,
  sym_expression = 57,
  sym_filter = 58,
  sym_access = 59,
  sym_assignment = 60,
  sym__literal = 61,
  sym_string = 62,
  sym_boolean = 63,
  sym_include = 64,
  sym_render = 65,
  sym_argument_list = 66,
  sym_argument = 67,
  sym_predicate = 68,
  sym_conditional = 69,
  sym_unless_tag = 70,
  sym_if_tag = 71,
  sym_elseif_tag = 72,
  sym_else_tag = 73,
  sym_comment = 74,
  aux_sym_template_repeat1 = 75,
  aux_sym_argument_list_repeat1 = 76,
  aux_sym_if_tag_repeat1 = 77,
  aux_sym_comment_repeat1 = 78,
  alias_sym_block = 79,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_content] = "content",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_LBRACE_LBRACE_DASH] = "{{-",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [anon_sym_LBRACE_PERCENT_DASH] = "{%-",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_DASH_RBRACE_RBRACE] = "-}}",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [anon_sym_DASH_PERCENT_RBRACE] = "-%}",
  [anon_sym_PIPE] = "|",
  [anon_sym_COLON] = ":",
  [anon_sym_DOT] = ".",
  [anon_sym_assign] = "assign",
  [anon_sym_EQ] = "=",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token2] = "string_token2",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_identifier] = "identifier",
  [anon_sym_include] = "include",
  [anon_sym_render] = "render",
  [anon_sym_COMMA] = ",",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_CARET] = "^",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_unless] = "unless",
  [anon_sym_endunless] = "endunless",
  [anon_sym_if] = "if",
  [anon_sym_endif] = "endif",
  [anon_sym_elseif] = "elseif",
  [anon_sym_else] = "else",
  [anon_sym_comment] = "comment",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_endcomment] = "endcomment",
  [sym_template] = "template",
  [sym__node] = "_node",
  [sym_tag] = "tag",
  [sym__tag_open] = "_tag_open",
  [sym__tag_close] = "_tag_close",
  [sym__paired_tag] = "_paired_tag",
  [sym__unpaired_tag] = "_unpaired_tag",
  [sym_statement] = "statement",
  [sym_expression] = "expression",
  [sym_filter] = "filter",
  [sym_access] = "access",
  [sym_assignment] = "assignment",
  [sym__literal] = "_literal",
  [sym_string] = "string",
  [sym_boolean] = "boolean",
  [sym_include] = "include",
  [sym_render] = "render",
  [sym_argument_list] = "argument_list",
  [sym_argument] = "argument",
  [sym_predicate] = "predicate",
  [sym_conditional] = "conditional",
  [sym_unless_tag] = "unless_tag",
  [sym_if_tag] = "if_tag",
  [sym_elseif_tag] = "elseif_tag",
  [sym_else_tag] = "else_tag",
  [sym_comment] = "comment",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_if_tag_repeat1] = "if_tag_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [alias_sym_block] = "block",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_content] = sym_content,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_LBRACE_LBRACE_DASH] = anon_sym_LBRACE_LBRACE_DASH,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [anon_sym_LBRACE_PERCENT_DASH] = anon_sym_LBRACE_PERCENT_DASH,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_DASH_RBRACE_RBRACE] = anon_sym_DASH_RBRACE_RBRACE,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [anon_sym_DASH_PERCENT_RBRACE] = anon_sym_DASH_PERCENT_RBRACE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_assign] = anon_sym_assign,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_identifier] = sym_identifier,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_render] = anon_sym_render,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_unless] = anon_sym_unless,
  [anon_sym_endunless] = anon_sym_endunless,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_endif] = anon_sym_endif,
  [anon_sym_elseif] = anon_sym_elseif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_comment] = anon_sym_comment,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_endcomment] = anon_sym_endcomment,
  [sym_template] = sym_template,
  [sym__node] = sym__node,
  [sym_tag] = sym_tag,
  [sym__tag_open] = sym__tag_open,
  [sym__tag_close] = sym__tag_close,
  [sym__paired_tag] = sym__paired_tag,
  [sym__unpaired_tag] = sym__unpaired_tag,
  [sym_statement] = sym_statement,
  [sym_expression] = sym_expression,
  [sym_filter] = sym_filter,
  [sym_access] = sym_access,
  [sym_assignment] = sym_assignment,
  [sym__literal] = sym__literal,
  [sym_string] = sym_string,
  [sym_boolean] = sym_boolean,
  [sym_include] = sym_include,
  [sym_render] = sym_render,
  [sym_argument_list] = sym_argument_list,
  [sym_argument] = sym_argument,
  [sym_predicate] = sym_predicate,
  [sym_conditional] = sym_conditional,
  [sym_unless_tag] = sym_unless_tag,
  [sym_if_tag] = sym_if_tag,
  [sym_elseif_tag] = sym_elseif_tag,
  [sym_else_tag] = sym_else_tag,
  [sym_comment] = sym_comment,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_if_tag_repeat1] = aux_sym_if_tag_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [alias_sym_block] = alias_sym_block,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_render] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
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
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
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
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unless] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endunless] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elseif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_comment] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_endcomment] = {
    .visible = true,
    .named = false,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__tag_open] = {
    .visible = false,
    .named = true,
  },
  [sym__tag_close] = {
    .visible = false,
    .named = true,
  },
  [sym__paired_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__unpaired_tag] = {
    .visible = false,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_access] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_render] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional] = {
    .visible = true,
    .named = true,
  },
  [sym_unless_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_if_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_elseif_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_else_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_block] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_alternatives = 1,
  field_body = 2,
  field_condition = 3,
  field_consequence = 4,
  field_include = 5,
  field_included_file = 6,
  field_key = 7,
  field_left = 8,
  field_method = 9,
  field_name = 10,
  field_operator = 11,
  field_receiver = 12,
  field_render = 13,
  field_rendered_file = 14,
  field_right = 15,
  field_value = 16,
  field_variable_name = 17,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternatives] = "alternatives",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_include] = "include",
  [field_included_file] = "included_file",
  [field_key] = "key",
  [field_left] = "left",
  [field_method] = "method",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_receiver] = "receiver",
  [field_render] = "render",
  [field_rendered_file] = "rendered_file",
  [field_right] = "right",
  [field_value] = "value",
  [field_variable_name] = "variable_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 2},
  [5] = {.index = 8, .length = 3},
  [6] = {.index = 11, .length = 1},
  [7] = {.index = 12, .length = 2},
  [8] = {.index = 14, .length = 1},
  [9] = {.index = 15, .length = 2},
  [10] = {.index = 17, .length = 2},
  [11] = {.index = 19, .length = 1},
  [12] = {.index = 20, .length = 2},
  [13] = {.index = 22, .length = 1},
  [14] = {.index = 23, .length = 2},
  [15] = {.index = 25, .length = 2},
  [16] = {.index = 27, .length = 2},
  [17] = {.index = 29, .length = 3},
  [18] = {.index = 32, .length = 3},
  [19] = {.index = 35, .length = 3},
  [20] = {.index = 38, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_include, 0},
    {field_included_file, 1},
  [2] =
    {field_render, 0},
    {field_rendered_file, 1},
  [4] =
    {field_method, 2},
    {field_receiver, 0},
  [6] =
    {field_body, 0},
    {field_name, 2},
  [8] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [11] =
    {field_condition, 1},
  [12] =
    {field_value, 3},
    {field_variable_name, 1},
  [14] =
    {field_alternatives, 0},
  [15] =
    {field_condition, 1},
    {field_consequence, 2},
  [17] =
    {field_alternatives, 0, .inherited = true},
    {field_alternatives, 1, .inherited = true},
  [19] =
    {field_condition, 2},
  [20] =
    {field_key, 0},
    {field_value, 2},
  [22] =
    {field_consequence, 3},
  [23] =
    {field_alternatives, 4},
    {field_condition, 2},
  [25] =
    {field_condition, 2},
    {field_consequence, 4},
  [27] =
    {field_alternatives, 4, .inherited = true},
    {field_condition, 2},
  [29] =
    {field_alternatives, 5},
    {field_condition, 2},
    {field_consequence, 4},
  [32] =
    {field_alternatives, 5, .inherited = true},
    {field_condition, 2},
    {field_consequence, 4},
  [35] =
    {field_alternatives, 4, .inherited = true},
    {field_alternatives, 5},
    {field_condition, 2},
  [38] =
    {field_alternatives, 5, .inherited = true},
    {field_alternatives, 6},
    {field_condition, 2},
    {field_consequence, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [9] = {
    [2] = alias_sym_block,
  },
  [13] = {
    [3] = alias_sym_block,
  },
  [15] = {
    [4] = alias_sym_block,
  },
  [17] = {
    [4] = alias_sym_block,
  },
  [18] = {
    [4] = alias_sym_block,
  },
  [20] = {
    [4] = alias_sym_block,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_template_repeat1, 2,
    aux_sym_template_repeat1,
    alias_sym_block,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 4,
  [7] = 5,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 13,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 8,
  [26] = 18,
  [27] = 27,
  [28] = 23,
  [29] = 29,
  [30] = 30,
  [31] = 9,
  [32] = 10,
  [33] = 11,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 17,
  [38] = 12,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 22,
  [43] = 20,
  [44] = 44,
  [45] = 45,
  [46] = 45,
  [47] = 44,
  [48] = 21,
  [49] = 19,
  [50] = 17,
  [51] = 23,
  [52] = 24,
  [53] = 53,
  [54] = 27,
  [55] = 40,
  [56] = 41,
  [57] = 57,
  [58] = 29,
  [59] = 59,
  [60] = 30,
  [61] = 61,
  [62] = 61,
  [63] = 39,
  [64] = 57,
  [65] = 35,
  [66] = 34,
  [67] = 36,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 71,
  [78] = 78,
  [79] = 75,
  [80] = 76,
  [81] = 78,
  [82] = 68,
  [83] = 83,
  [84] = 69,
  [85] = 70,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 89,
  [91] = 91,
  [92] = 83,
  [93] = 93,
  [94] = 93,
  [95] = 95,
  [96] = 95,
  [97] = 97,
  [98] = 97,
  [99] = 99,
  [100] = 100,
  [101] = 100,
  [102] = 99,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 107,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 117,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 120,
  [126] = 109,
  [127] = 116,
  [128] = 115,
  [129] = 113,
  [130] = 112,
  [131] = 103,
  [132] = 108,
  [133] = 106,
  [134] = 105,
  [135] = 111,
  [136] = 121,
  [137] = 110,
  [138] = 122,
  [139] = 104,
  [140] = 118,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 142,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 146,
  [153] = 153,
  [154] = 153,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 155,
  [160] = 160,
  [161] = 161,
  [162] = 149,
  [163] = 160,
  [164] = 145,
  [165] = 165,
  [166] = 161,
  [167] = 167,
  [168] = 150,
  [169] = 143,
  [170] = 141,
  [171] = 156,
  [172] = 157,
  [173] = 158,
  [174] = 148,
  [175] = 147,
  [176] = 167,
  [177] = 165,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 181,
  [184] = 180,
  [185] = 185,
  [186] = 185,
  [187] = 182,
  [188] = 188,
  [189] = 189,
  [190] = 189,
  [191] = 188,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 192,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 202,
  [204] = 201,
  [205] = 205,
  [206] = 206,
  [207] = 188,
  [208] = 193,
  [209] = 195,
  [210] = 192,
  [211] = 189,
  [212] = 196,
  [213] = 202,
  [214] = 206,
  [215] = 198,
  [216] = 194,
  [217] = 200,
  [218] = 218,
  [219] = 219,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(78);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '%') ADVANCE(186);
      if (lookahead == '\'') ADVANCE(114);
      if (lookahead == '*') ADVANCE(181);
      if (lookahead == '+') ADVANCE(177);
      if (lookahead == ',') ADVANCE(175);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == '<') ADVANCE(191);
      if (lookahead == '=') ADVANCE(113);
      if (lookahead == '>') ADVANCE(199);
      if (lookahead == '^') ADVANCE(187);
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(55);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == 'u') ADVANCE(51);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '|') ADVANCE(104);
      if (lookahead == '}') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '%') ADVANCE(186);
      if (lookahead == '*') ADVANCE(181);
      if (lookahead == '+') ADVANCE(177);
      if (lookahead == ',') ADVANCE(175);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == '<') ADVANCE(191);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(199);
      if (lookahead == '^') ADVANCE(187);
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead == '|') ADVANCE(104);
      if (lookahead == '}') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(84);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '+') ADVANCE(178);
      if (lookahead == ',') ADVANCE(176);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == '<') ADVANCE(192);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(200);
      if (lookahead == '^') ADVANCE(188);
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(89);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(84);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '+') ADVANCE(178);
      if (lookahead == ',') ADVANCE(176);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '<') ADVANCE(192);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(200);
      if (lookahead == '^') ADVANCE(188);
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(89);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(84);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '+') ADVANCE(178);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '<') ADVANCE(192);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(200);
      if (lookahead == '^') ADVANCE(188);
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(89);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(84);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '+') ADVANCE(178);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == '<') ADVANCE(192);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(200);
      if (lookahead == '^') ADVANCE(188);
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(89);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(84);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '+') ADVANCE(178);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '<') ADVANCE(192);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(200);
      if (lookahead == '^') ADVANCE(188);
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(89);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '\'') ADVANCE(114);
      if (lookahead == '=') ADVANCE(112);
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'c') ADVANCE(157);
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead == 'f') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(131);
      if (lookahead == 't') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '\'') ADVANCE(114);
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'c') ADVANCE(157);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == 'f') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(131);
      if (lookahead == 't') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '\'') ADVANCE(114);
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'c') ADVANCE(157);
      if (lookahead == 'f') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(131);
      if (lookahead == 't') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '\'') ADVANCE(114);
      if (lookahead == 'f') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(151);
      if (lookahead == 'r') ADVANCE(131);
      if (lookahead == 't') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '\'') ADVANCE(114);
      if (lookahead == 'f') ADVANCE(125);
      if (lookahead == 't') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 12:
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == '{') ADVANCE(96);
      END_STATE();
    case 13:
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == '{') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(95);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(195);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(189);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(56);
      if (lookahead == 'i') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(209);
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(211);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(213);
      END_STATE();
    case 36:
      if (lookahead == 'g') ADVANCE(49);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 45:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 46:
      if (lookahead == 'm') ADVANCE(45);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 71:
      if (lookahead == '}') ADVANCE(100);
      END_STATE();
    case 72:
      if (lookahead == '}') ADVANCE(103);
      END_STATE();
    case 73:
      if (lookahead == '}') ADVANCE(101);
      END_STATE();
    case 74:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(221);
      if (lookahead == '{') ADVANCE(220);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 75:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(75)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 76:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '{') ADVANCE(95);
      END_STATE();
    case 77:
      if (eof) ADVANCE(78);
      if (lookahead == 'u') ADVANCE(89);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == '!') ADVANCE(84);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '+') ADVANCE(178);
      if (lookahead == ',') ADVANCE(176);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == '<') ADVANCE(192);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(200);
      if (lookahead == '^') ADVANCE(188);
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(89);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == '!') ADVANCE(84);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '+') ADVANCE(178);
      if (lookahead == ',') ADVANCE(176);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '<') ADVANCE(192);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(200);
      if (lookahead == '^') ADVANCE(188);
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(89);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == '!') ADVANCE(84);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '+') ADVANCE(178);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '<') ADVANCE(192);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(200);
      if (lookahead == '^') ADVANCE(188);
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(89);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == '!') ADVANCE(84);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '+') ADVANCE(178);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == '<') ADVANCE(192);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(200);
      if (lookahead == '^') ADVANCE(188);
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(89);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == '!') ADVANCE(84);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '+') ADVANCE(178);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '<') ADVANCE(192);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(200);
      if (lookahead == '^') ADVANCE(188);
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(89);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == '=') ADVANCE(196);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == 'd') ADVANCE(202);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == 'r') ADVANCE(204);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == 's') ADVANCE(206);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == 'u') ADVANCE(89);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '-') ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_DASH);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      if (lookahead == '-') ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT_DASH);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_DASH_RBRACE_RBRACE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT_RBRACE);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_assign);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_assign);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(189);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(210);
      if (lookahead == 'n') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(163);
      if (lookahead == 'n') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_render);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_render);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '%') ADVANCE(72);
      if (lookahead == '}') ADVANCE(73);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '}') ADVANCE(102);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(193);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(197);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_endunless);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_endunless);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_endif);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i') ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_comment);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_comment);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == '{') ADVANCE(96);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(221);
      if (lookahead == '{') ADVANCE(220);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_endcomment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 77},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 77},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 77},
  [62] = {.lex_state = 77},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 77},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 77},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 10},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 77},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 77},
  [87] = {.lex_state = 77},
  [88] = {.lex_state = 77},
  [89] = {.lex_state = 77},
  [90] = {.lex_state = 77},
  [91] = {.lex_state = 77},
  [92] = {.lex_state = 77},
  [93] = {.lex_state = 11},
  [94] = {.lex_state = 11},
  [95] = {.lex_state = 11},
  [96] = {.lex_state = 11},
  [97] = {.lex_state = 11},
  [98] = {.lex_state = 11},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 77},
  [104] = {.lex_state = 77},
  [105] = {.lex_state = 77},
  [106] = {.lex_state = 77},
  [107] = {.lex_state = 74},
  [108] = {.lex_state = 77},
  [109] = {.lex_state = 77},
  [110] = {.lex_state = 77},
  [111] = {.lex_state = 77},
  [112] = {.lex_state = 77},
  [113] = {.lex_state = 77},
  [114] = {.lex_state = 74},
  [115] = {.lex_state = 77},
  [116] = {.lex_state = 77},
  [117] = {.lex_state = 74},
  [118] = {.lex_state = 77},
  [119] = {.lex_state = 74},
  [120] = {.lex_state = 77},
  [121] = {.lex_state = 77},
  [122] = {.lex_state = 77},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 74},
  [125] = {.lex_state = 77},
  [126] = {.lex_state = 77},
  [127] = {.lex_state = 77},
  [128] = {.lex_state = 77},
  [129] = {.lex_state = 77},
  [130] = {.lex_state = 77},
  [131] = {.lex_state = 77},
  [132] = {.lex_state = 77},
  [133] = {.lex_state = 77},
  [134] = {.lex_state = 77},
  [135] = {.lex_state = 77},
  [136] = {.lex_state = 77},
  [137] = {.lex_state = 77},
  [138] = {.lex_state = 77},
  [139] = {.lex_state = 77},
  [140] = {.lex_state = 77},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 118},
  [190] = {.lex_state = 118},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 75},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 7},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 115},
  [203] = {.lex_state = 115},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 75},
  [206] = {.lex_state = 75},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 118},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 115},
  [214] = {.lex_state = 75},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 75},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE_DASH] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT_DASH] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_assign] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_render] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_unless] = ACTIONS(1),
    [anon_sym_endunless] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_endif] = ACTIONS(1),
    [anon_sym_elseif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_comment] = ACTIONS(1),
    [anon_sym_endcomment] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(219),
    [sym__node] = STATE(109),
    [sym_tag] = STATE(109),
    [sym__tag_open] = STATE(26),
    [sym__paired_tag] = STATE(111),
    [sym__unpaired_tag] = STATE(111),
    [sym_conditional] = STATE(111),
    [sym_unless_tag] = STATE(121),
    [sym_if_tag] = STATE(121),
    [sym_comment] = STATE(111),
    [aux_sym_template_repeat1] = STATE(72),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_content] = ACTIONS(5),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACE_LBRACE_DASH] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENT_DASH] = ACTIONS(7),
    [anon_sym_unless] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(11), 1,
      sym_content,
    ACTIONS(15), 1,
      anon_sym_PIPE,
    ACTIONS(21), 1,
      anon_sym_CARET,
    ACTIONS(27), 1,
      anon_sym_unless,
    STATE(13), 1,
      sym__tag_open,
    STATE(89), 1,
      aux_sym_template_repeat1,
    ACTIONS(17), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 2,
      anon_sym_and,
      anon_sym_or,
    STATE(126), 2,
      sym__node,
      sym_tag,
    STATE(136), 2,
      sym_unless_tag,
      sym_if_tag,
    ACTIONS(19), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(13), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(135), 4,
      sym__paired_tag,
      sym__unpaired_tag,
      sym_conditional,
      sym_comment,
    ACTIONS(23), 6,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
  [60] = 14,
    ACTIONS(11), 1,
      sym_content,
    ACTIONS(15), 1,
      anon_sym_PIPE,
    ACTIONS(21), 1,
      anon_sym_CARET,
    ACTIONS(27), 1,
      anon_sym_unless,
    STATE(14), 1,
      sym__tag_open,
    STATE(90), 1,
      aux_sym_template_repeat1,
    ACTIONS(17), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 2,
      anon_sym_and,
      anon_sym_or,
    STATE(126), 2,
      sym__node,
      sym_tag,
    STATE(136), 2,
      sym_unless_tag,
      sym_if_tag,
    ACTIONS(19), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(29), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(135), 4,
      sym__paired_tag,
      sym__unpaired_tag,
      sym_conditional,
      sym_comment,
    ACTIONS(23), 6,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
  [120] = 18,
    ACTIONS(31), 1,
      anon_sym_assign,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_include,
    ACTIONS(45), 1,
      anon_sym_render,
    ACTIONS(47), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      anon_sym_endif,
    ACTIONS(51), 1,
      anon_sym_elseif,
    ACTIONS(53), 1,
      anon_sym_else,
    ACTIONS(55), 1,
      anon_sym_comment,
    STATE(43), 1,
      sym_access,
    STATE(46), 1,
      sym_expression,
    STATE(164), 1,
      sym_statement,
    STATE(179), 1,
      sym_assignment,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 7,
      sym_filter,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_include,
      sym_render,
      sym_predicate,
  [182] = 18,
    ACTIONS(31), 1,
      anon_sym_assign,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_include,
    ACTIONS(45), 1,
      anon_sym_render,
    ACTIONS(47), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_elseif,
    ACTIONS(53), 1,
      anon_sym_else,
    ACTIONS(55), 1,
      anon_sym_comment,
    ACTIONS(57), 1,
      anon_sym_endif,
    STATE(43), 1,
      sym_access,
    STATE(46), 1,
      sym_expression,
    STATE(164), 1,
      sym_statement,
    STATE(179), 1,
      sym_assignment,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 7,
      sym_filter,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_include,
      sym_render,
      sym_predicate,
  [244] = 18,
    ACTIONS(31), 1,
      anon_sym_assign,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_include,
    ACTIONS(45), 1,
      anon_sym_render,
    ACTIONS(47), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_elseif,
    ACTIONS(53), 1,
      anon_sym_else,
    ACTIONS(55), 1,
      anon_sym_comment,
    ACTIONS(59), 1,
      anon_sym_endif,
    STATE(43), 1,
      sym_access,
    STATE(46), 1,
      sym_expression,
    STATE(164), 1,
      sym_statement,
    STATE(179), 1,
      sym_assignment,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 7,
      sym_filter,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_include,
      sym_render,
      sym_predicate,
  [306] = 18,
    ACTIONS(31), 1,
      anon_sym_assign,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_include,
    ACTIONS(45), 1,
      anon_sym_render,
    ACTIONS(47), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_elseif,
    ACTIONS(53), 1,
      anon_sym_else,
    ACTIONS(55), 1,
      anon_sym_comment,
    ACTIONS(61), 1,
      anon_sym_endif,
    STATE(43), 1,
      sym_access,
    STATE(46), 1,
      sym_expression,
    STATE(164), 1,
      sym_statement,
    STATE(179), 1,
      sym_assignment,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 7,
      sym_filter,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_include,
      sym_render,
      sym_predicate,
  [368] = 4,
    ACTIONS(65), 1,
      anon_sym_COLON,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    STATE(11), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(63), 21,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
  [401] = 3,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(69), 21,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
  [431] = 2,
    ACTIONS(65), 1,
      anon_sym_COLON,
    ACTIONS(69), 22,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
  [459] = 3,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(74), 21,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
  [489] = 3,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    STATE(11), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(63), 21,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
  [519] = 16,
    ACTIONS(31), 1,
      anon_sym_assign,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_include,
    ACTIONS(45), 1,
      anon_sym_render,
    ACTIONS(47), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_comment,
    ACTIONS(76), 1,
      anon_sym_endunless,
    STATE(43), 1,
      sym_access,
    STATE(46), 1,
      sym_expression,
    STATE(164), 1,
      sym_statement,
    STATE(179), 1,
      sym_assignment,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 7,
      sym_filter,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_include,
      sym_render,
      sym_predicate,
  [575] = 16,
    ACTIONS(31), 1,
      anon_sym_assign,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_include,
    ACTIONS(45), 1,
      anon_sym_render,
    ACTIONS(47), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_comment,
    ACTIONS(78), 1,
      anon_sym_endunless,
    STATE(43), 1,
      sym_access,
    STATE(46), 1,
      sym_expression,
    STATE(164), 1,
      sym_statement,
    STATE(179), 1,
      sym_assignment,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 7,
      sym_filter,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_include,
      sym_render,
      sym_predicate,
  [631] = 16,
    ACTIONS(31), 1,
      anon_sym_assign,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_include,
    ACTIONS(45), 1,
      anon_sym_render,
    ACTIONS(47), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_comment,
    ACTIONS(80), 1,
      anon_sym_endunless,
    STATE(43), 1,
      sym_access,
    STATE(46), 1,
      sym_expression,
    STATE(164), 1,
      sym_statement,
    STATE(179), 1,
      sym_assignment,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 7,
      sym_filter,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_include,
      sym_render,
      sym_predicate,
  [687] = 16,
    ACTIONS(31), 1,
      anon_sym_assign,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_include,
    ACTIONS(45), 1,
      anon_sym_render,
    ACTIONS(47), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_comment,
    ACTIONS(82), 1,
      anon_sym_endunless,
    STATE(43), 1,
      sym_access,
    STATE(46), 1,
      sym_expression,
    STATE(164), 1,
      sym_statement,
    STATE(179), 1,
      sym_assignment,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 7,
      sym_filter,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_include,
      sym_render,
      sym_predicate,
  [743] = 1,
    ACTIONS(84), 22,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
  [768] = 15,
    ACTIONS(31), 1,
      anon_sym_assign,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_include,
    ACTIONS(45), 1,
      anon_sym_render,
    ACTIONS(47), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_comment,
    STATE(43), 1,
      sym_access,
    STATE(46), 1,
      sym_expression,
    STATE(164), 1,
      sym_statement,
    STATE(179), 1,
      sym_assignment,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 7,
      sym_filter,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_include,
      sym_render,
      sym_predicate,
  [821] = 2,
    ACTIONS(88), 1,
      anon_sym_COLON,
    ACTIONS(86), 21,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
  [848] = 2,
    ACTIONS(92), 1,
      anon_sym_DOT,
    ACTIONS(90), 21,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
  [875] = 1,
    ACTIONS(69), 22,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
  [900] = 1,
    ACTIONS(94), 22,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_PIPE,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
  [925] = 1,
    ACTIONS(96), 22,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
  [950] = 1,
    ACTIONS(98), 22,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
  [975] = 5,
    ACTIONS(102), 1,
      anon_sym_COLON,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(63), 4,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(100), 15,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [1008] = 15,
    ACTIONS(31), 1,
      anon_sym_assign,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_include,
    ACTIONS(45), 1,
      anon_sym_render,
    ACTIONS(106), 1,
      anon_sym_if,
    ACTIONS(108), 1,
      anon_sym_comment,
    STATE(43), 1,
      sym_access,
    STATE(45), 1,
      sym_expression,
    STATE(145), 1,
      sym_statement,
    STATE(179), 1,
      sym_assignment,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 7,
      sym_filter,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_include,
      sym_render,
      sym_predicate,
  [1061] = 1,
    ACTIONS(110), 21,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
  [1085] = 1,
    ACTIONS(96), 21,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
  [1109] = 1,
    ACTIONS(112), 21,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
  [1133] = 1,
    ACTIONS(114), 21,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
  [1157] = 4,
    ACTIONS(118), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(69), 4,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(116), 15,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [1187] = 3,
    ACTIONS(102), 1,
      anon_sym_COLON,
    ACTIONS(69), 4,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(116), 16,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [1215] = 4,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(74), 4,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(121), 15,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [1245] = 5,
    ACTIONS(21), 1,
      anon_sym_CARET,
    ACTIONS(17), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(19), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(23), 6,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
    ACTIONS(123), 9,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_PIPE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
  [1277] = 4,
    ACTIONS(21), 1,
      anon_sym_CARET,
    ACTIONS(17), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(19), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(123), 15,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
  [1307] = 1,
    ACTIONS(123), 21,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
  [1331] = 1,
    ACTIONS(84), 21,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
  [1355] = 4,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(63), 4,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(100), 15,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [1385] = 2,
    ACTIONS(21), 1,
      anon_sym_CARET,
    ACTIONS(123), 20,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
  [1411] = 3,
    ACTIONS(21), 1,
      anon_sym_CARET,
    ACTIONS(19), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(123), 17,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
  [1439] = 1,
    ACTIONS(90), 21,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
  [1463] = 2,
    ACTIONS(94), 4,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 16,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [1488] = 3,
    ACTIONS(129), 1,
      anon_sym_DOT,
    ACTIONS(90), 4,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 15,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [1515] = 11,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_PLUS,
    ACTIONS(137), 1,
      anon_sym_DASH,
    ACTIONS(141), 1,
      anon_sym_PERCENT,
    ACTIONS(143), 1,
      anon_sym_CARET,
    STATE(64), 1,
      sym__tag_close,
    ACTIONS(139), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(131), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
    ACTIONS(145), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1558] = 11,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_PLUS,
    ACTIONS(137), 1,
      anon_sym_DASH,
    ACTIONS(141), 1,
      anon_sym_PERCENT,
    ACTIONS(143), 1,
      anon_sym_CARET,
    STATE(108), 1,
      sym__tag_close,
    ACTIONS(139), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(145), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(151), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [1601] = 11,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_PLUS,
    ACTIONS(137), 1,
      anon_sym_DASH,
    ACTIONS(141), 1,
      anon_sym_PERCENT,
    ACTIONS(143), 1,
      anon_sym_CARET,
    STATE(132), 1,
      sym__tag_close,
    ACTIONS(139), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(145), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [1644] = 11,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_PLUS,
    ACTIONS(137), 1,
      anon_sym_DASH,
    ACTIONS(141), 1,
      anon_sym_PERCENT,
    ACTIONS(143), 1,
      anon_sym_CARET,
    STATE(57), 1,
      sym__tag_close,
    ACTIONS(139), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(145), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(155), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [1687] = 2,
    ACTIONS(69), 4,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(116), 16,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [1712] = 3,
    ACTIONS(159), 1,
      anon_sym_COLON,
    ACTIONS(86), 4,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 15,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [1739] = 2,
    ACTIONS(84), 4,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 16,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [1764] = 2,
    ACTIONS(96), 4,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(163), 16,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [1789] = 2,
    ACTIONS(98), 4,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 16,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [1814] = 11,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_PLUS,
    ACTIONS(137), 1,
      anon_sym_DASH,
    ACTIONS(141), 1,
      anon_sym_PERCENT,
    ACTIONS(143), 1,
      anon_sym_CARET,
    STATE(91), 1,
      sym__tag_close,
    ACTIONS(139), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(145), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(167), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [1857] = 2,
    ACTIONS(110), 4,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(169), 15,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [1881] = 5,
    ACTIONS(141), 1,
      anon_sym_PERCENT,
    ACTIONS(143), 1,
      anon_sym_CARET,
    ACTIONS(139), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(123), 3,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 12,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [1911] = 2,
    ACTIONS(90), 4,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 15,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [1935] = 11,
    ACTIONS(11), 1,
      sym_content,
    ACTIONS(27), 1,
      anon_sym_unless,
    STATE(5), 1,
      sym__tag_open,
    STATE(62), 1,
      aux_sym_template_repeat1,
    STATE(99), 1,
      aux_sym_if_tag_repeat1,
    STATE(146), 1,
      sym_else_tag,
    STATE(178), 1,
      sym_elseif_tag,
    STATE(126), 2,
      sym__node,
      sym_tag,
    STATE(136), 2,
      sym_unless_tag,
      sym_if_tag,
    ACTIONS(173), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(135), 4,
      sym__paired_tag,
      sym__unpaired_tag,
      sym_conditional,
      sym_comment,
  [1977] = 2,
    ACTIONS(112), 4,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(175), 15,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [2001] = 10,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_PLUS,
    ACTIONS(137), 1,
      anon_sym_DASH,
    ACTIONS(141), 1,
      anon_sym_PERCENT,
    ACTIONS(143), 1,
      anon_sym_CARET,
    ACTIONS(139), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(145), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(177), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [2041] = 2,
    ACTIONS(114), 4,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(179), 15,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [2065] = 11,
    ACTIONS(11), 1,
      sym_content,
    ACTIONS(27), 1,
      anon_sym_unless,
    STATE(6), 1,
      sym__tag_open,
    STATE(92), 1,
      aux_sym_template_repeat1,
    STATE(101), 1,
      aux_sym_if_tag_repeat1,
    STATE(154), 1,
      sym_else_tag,
    STATE(178), 1,
      sym_elseif_tag,
    STATE(126), 2,
      sym__node,
      sym_tag,
    STATE(136), 2,
      sym_unless_tag,
      sym_if_tag,
    ACTIONS(181), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(135), 4,
      sym__paired_tag,
      sym__unpaired_tag,
      sym_conditional,
      sym_comment,
  [2107] = 11,
    ACTIONS(11), 1,
      sym_content,
    ACTIONS(27), 1,
      anon_sym_unless,
    STATE(4), 1,
      sym__tag_open,
    STATE(92), 1,
      aux_sym_template_repeat1,
    STATE(100), 1,
      aux_sym_if_tag_repeat1,
    STATE(153), 1,
      sym_else_tag,
    STATE(178), 1,
      sym_elseif_tag,
    STATE(126), 2,
      sym__node,
      sym_tag,
    STATE(136), 2,
      sym_unless_tag,
      sym_if_tag,
    ACTIONS(183), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(135), 4,
      sym__paired_tag,
      sym__unpaired_tag,
      sym_conditional,
      sym_comment,
  [2149] = 3,
    ACTIONS(143), 1,
      anon_sym_CARET,
    ACTIONS(123), 4,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 14,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [2175] = 11,
    ACTIONS(11), 1,
      sym_content,
    ACTIONS(27), 1,
      anon_sym_unless,
    STATE(7), 1,
      sym__tag_open,
    STATE(61), 1,
      aux_sym_template_repeat1,
    STATE(102), 1,
      aux_sym_if_tag_repeat1,
    STATE(152), 1,
      sym_else_tag,
    STATE(178), 1,
      sym_elseif_tag,
    STATE(126), 2,
      sym__node,
      sym_tag,
    STATE(136), 2,
      sym_unless_tag,
      sym_if_tag,
    ACTIONS(185), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(135), 4,
      sym__paired_tag,
      sym__unpaired_tag,
      sym_conditional,
      sym_comment,
  [2217] = 7,
    ACTIONS(135), 1,
      anon_sym_PLUS,
    ACTIONS(137), 1,
      anon_sym_DASH,
    ACTIONS(141), 1,
      anon_sym_PERCENT,
    ACTIONS(143), 1,
      anon_sym_CARET,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(139), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(171), 11,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [2251] = 8,
    ACTIONS(135), 1,
      anon_sym_PLUS,
    ACTIONS(137), 1,
      anon_sym_DASH,
    ACTIONS(141), 1,
      anon_sym_PERCENT,
    ACTIONS(143), 1,
      anon_sym_CARET,
    ACTIONS(139), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(171), 7,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_and,
      anon_sym_or,
  [2287] = 2,
    ACTIONS(123), 4,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 15,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [2311] = 10,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(191), 1,
      sym_number,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_include,
    ACTIONS(199), 1,
      anon_sym_render,
    STATE(20), 1,
      sym_access,
    STATE(36), 1,
      sym_expression,
    ACTIONS(193), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 7,
      sym_filter,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_include,
      sym_render,
      sym_predicate,
  [2349] = 10,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(191), 1,
      sym_number,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_include,
    ACTIONS(199), 1,
      anon_sym_render,
    STATE(20), 1,
      sym_access,
    STATE(39), 1,
      sym_expression,
    ACTIONS(193), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 7,
      sym_filter,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_include,
      sym_render,
      sym_predicate,
  [2387] = 10,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(191), 1,
      sym_number,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_include,
    ACTIONS(199), 1,
      anon_sym_render,
    STATE(3), 1,
      sym_expression,
    STATE(20), 1,
      sym_access,
    ACTIONS(193), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 7,
      sym_filter,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_include,
      sym_render,
      sym_predicate,
  [2425] = 10,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_include,
    ACTIONS(45), 1,
      anon_sym_render,
    STATE(43), 1,
      sym_access,
    STATE(44), 1,
      sym_expression,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 7,
      sym_filter,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_include,
      sym_render,
      sym_predicate,
  [2463] = 9,
    ACTIONS(5), 1,
      sym_content,
    ACTIONS(9), 1,
      anon_sym_unless,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
      sym__tag_open,
    STATE(83), 1,
      aux_sym_template_repeat1,
    STATE(109), 2,
      sym__node,
      sym_tag,
    STATE(121), 2,
      sym_unless_tag,
      sym_if_tag,
    ACTIONS(7), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(111), 4,
      sym__paired_tag,
      sym__unpaired_tag,
      sym_conditional,
      sym_comment,
  [2499] = 10,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_include,
    ACTIONS(45), 1,
      anon_sym_render,
    STATE(43), 1,
      sym_access,
    STATE(59), 1,
      sym_expression,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 7,
      sym_filter,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_include,
      sym_render,
      sym_predicate,
  [2537] = 10,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_include,
    ACTIONS(45), 1,
      anon_sym_render,
    STATE(43), 1,
      sym_access,
    STATE(53), 1,
      sym_expression,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 7,
      sym_filter,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_include,
      sym_render,
      sym_predicate,
  [2575] = 10,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_include,
    ACTIONS(45), 1,
      anon_sym_render,
    STATE(43), 1,
      sym_access,
    STATE(55), 1,
      sym_expression,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 7,
      sym_filter,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_include,
      sym_render,
      sym_predicate,
  [2613] = 10,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(191), 1,
      sym_number,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_include,
    ACTIONS(199), 1,
      anon_sym_render,
    STATE(20), 1,
      sym_access,
    STATE(34), 1,
      sym_expression,
    ACTIONS(193), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 7,
      sym_filter,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_include,
      sym_render,
      sym_predicate,
  [2651] = 10,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_include,
    ACTIONS(45), 1,
      anon_sym_render,
    STATE(43), 1,
      sym_access,
    STATE(47), 1,
      sym_expression,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 7,
      sym_filter,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_include,
      sym_render,
      sym_predicate,
  [2689] = 10,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(191), 1,
      sym_number,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_include,
    ACTIONS(199), 1,
      anon_sym_render,
    STATE(20), 1,
      sym_access,
    STATE(35), 1,
      sym_expression,
    ACTIONS(193), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 7,
      sym_filter,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_include,
      sym_render,
      sym_predicate,
  [2727] = 10,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(191), 1,
      sym_number,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_include,
    ACTIONS(199), 1,
      anon_sym_render,
    STATE(20), 1,
      sym_access,
    STATE(40), 1,
      sym_expression,
    ACTIONS(193), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 7,
      sym_filter,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_include,
      sym_render,
      sym_predicate,
  [2765] = 10,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_include,
    ACTIONS(45), 1,
      anon_sym_render,
    STATE(43), 1,
      sym_access,
    STATE(66), 1,
      sym_expression,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 7,
      sym_filter,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_include,
      sym_render,
      sym_predicate,
  [2803] = 10,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_include,
    ACTIONS(45), 1,
      anon_sym_render,
    STATE(43), 1,
      sym_access,
    STATE(65), 1,
      sym_expression,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 7,
      sym_filter,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_include,
      sym_render,
      sym_predicate,
  [2841] = 10,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_include,
    ACTIONS(45), 1,
      anon_sym_render,
    STATE(43), 1,
      sym_access,
    STATE(67), 1,
      sym_expression,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 7,
      sym_filter,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_include,
      sym_render,
      sym_predicate,
  [2879] = 9,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    ACTIONS(205), 1,
      sym_content,
    ACTIONS(211), 1,
      anon_sym_unless,
    STATE(26), 1,
      sym__tag_open,
    STATE(83), 1,
      aux_sym_template_repeat1,
    STATE(109), 2,
      sym__node,
      sym_tag,
    STATE(121), 2,
      sym_unless_tag,
      sym_if_tag,
    ACTIONS(208), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(111), 4,
      sym__paired_tag,
      sym__unpaired_tag,
      sym_conditional,
      sym_comment,
  [2915] = 10,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_include,
    ACTIONS(45), 1,
      anon_sym_render,
    STATE(43), 1,
      sym_access,
    STATE(63), 1,
      sym_expression,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 7,
      sym_filter,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_include,
      sym_render,
      sym_predicate,
  [2953] = 10,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(191), 1,
      sym_number,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_include,
    ACTIONS(199), 1,
      anon_sym_render,
    STATE(2), 1,
      sym_expression,
    STATE(20), 1,
      sym_access,
    ACTIONS(193), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 7,
      sym_filter,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_include,
      sym_render,
      sym_predicate,
  [2991] = 8,
    ACTIONS(11), 1,
      sym_content,
    ACTIONS(27), 1,
      anon_sym_unless,
    STATE(18), 1,
      sym__tag_open,
    STATE(92), 1,
      aux_sym_template_repeat1,
    STATE(126), 2,
      sym__node,
      sym_tag,
    STATE(136), 2,
      sym_unless_tag,
      sym_if_tag,
    ACTIONS(214), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(135), 4,
      sym__paired_tag,
      sym__unpaired_tag,
      sym_conditional,
      sym_comment,
  [3024] = 8,
    ACTIONS(11), 1,
      sym_content,
    ACTIONS(27), 1,
      anon_sym_unless,
    STATE(18), 1,
      sym__tag_open,
    STATE(92), 1,
      aux_sym_template_repeat1,
    STATE(126), 2,
      sym__node,
      sym_tag,
    STATE(136), 2,
      sym_unless_tag,
      sym_if_tag,
    ACTIONS(216), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(135), 4,
      sym__paired_tag,
      sym__unpaired_tag,
      sym_conditional,
      sym_comment,
  [3057] = 8,
    ACTIONS(11), 1,
      sym_content,
    ACTIONS(27), 1,
      anon_sym_unless,
    STATE(18), 1,
      sym__tag_open,
    STATE(87), 1,
      aux_sym_template_repeat1,
    STATE(126), 2,
      sym__node,
      sym_tag,
    STATE(136), 2,
      sym_unless_tag,
      sym_if_tag,
    ACTIONS(218), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(135), 4,
      sym__paired_tag,
      sym__unpaired_tag,
      sym_conditional,
      sym_comment,
  [3090] = 8,
    ACTIONS(11), 1,
      sym_content,
    ACTIONS(27), 1,
      anon_sym_unless,
    STATE(15), 1,
      sym__tag_open,
    STATE(92), 1,
      aux_sym_template_repeat1,
    STATE(126), 2,
      sym__node,
      sym_tag,
    STATE(136), 2,
      sym_unless_tag,
      sym_if_tag,
    ACTIONS(220), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(135), 4,
      sym__paired_tag,
      sym__unpaired_tag,
      sym_conditional,
      sym_comment,
  [3123] = 8,
    ACTIONS(11), 1,
      sym_content,
    ACTIONS(27), 1,
      anon_sym_unless,
    STATE(16), 1,
      sym__tag_open,
    STATE(92), 1,
      aux_sym_template_repeat1,
    STATE(126), 2,
      sym__node,
      sym_tag,
    STATE(136), 2,
      sym_unless_tag,
      sym_if_tag,
    ACTIONS(222), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(135), 4,
      sym__paired_tag,
      sym__unpaired_tag,
      sym_conditional,
      sym_comment,
  [3156] = 8,
    ACTIONS(11), 1,
      sym_content,
    ACTIONS(27), 1,
      anon_sym_unless,
    STATE(18), 1,
      sym__tag_open,
    STATE(86), 1,
      aux_sym_template_repeat1,
    STATE(126), 2,
      sym__node,
      sym_tag,
    STATE(136), 2,
      sym_unless_tag,
      sym_if_tag,
    ACTIONS(224), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(135), 4,
      sym__paired_tag,
      sym__unpaired_tag,
      sym_conditional,
      sym_comment,
  [3189] = 8,
    ACTIONS(226), 1,
      sym_content,
    ACTIONS(232), 1,
      anon_sym_unless,
    STATE(18), 1,
      sym__tag_open,
    STATE(92), 1,
      aux_sym_template_repeat1,
    STATE(126), 2,
      sym__node,
      sym_tag,
    STATE(136), 2,
      sym_unless_tag,
      sym_if_tag,
    ACTIONS(229), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(135), 4,
      sym__paired_tag,
      sym__unpaired_tag,
      sym_conditional,
      sym_comment,
  [3222] = 7,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      sym_number,
    ACTIONS(243), 1,
      sym_identifier,
    STATE(27), 1,
      sym_argument_list,
    ACTIONS(241), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(12), 4,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_argument,
  [3248] = 7,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(245), 1,
      sym_number,
    ACTIONS(247), 1,
      sym_identifier,
    STATE(54), 1,
      sym_argument_list,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(38), 4,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_argument,
  [3274] = 6,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(249), 1,
      sym_number,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(48), 4,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_argument,
  [3297] = 6,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym_number,
    ACTIONS(255), 1,
      sym_identifier,
    ACTIONS(241), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(21), 4,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_argument,
  [3320] = 6,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(257), 1,
      sym_number,
    ACTIONS(259), 1,
      sym_identifier,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 3,
      sym__literal,
      sym_string,
      sym_boolean,
  [3342] = 6,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym_number,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(241), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym__literal,
      sym_string,
      sym_boolean,
  [3364] = 6,
    STATE(123), 1,
      aux_sym_if_tag_repeat1,
    STATE(155), 1,
      sym_else_tag,
    STATE(178), 1,
      sym_elseif_tag,
    STATE(183), 1,
      sym__tag_open,
    ACTIONS(265), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(267), 2,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT_DASH,
  [3385] = 6,
    STATE(123), 1,
      aux_sym_if_tag_repeat1,
    STATE(144), 1,
      sym_else_tag,
    STATE(178), 1,
      sym_elseif_tag,
    STATE(182), 1,
      sym__tag_open,
    ACTIONS(269), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(271), 2,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT_DASH,
  [3406] = 6,
    STATE(123), 1,
      aux_sym_if_tag_repeat1,
    STATE(142), 1,
      sym_else_tag,
    STATE(178), 1,
      sym_elseif_tag,
    STATE(187), 1,
      sym__tag_open,
    ACTIONS(273), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(275), 2,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT_DASH,
  [3427] = 6,
    STATE(123), 1,
      aux_sym_if_tag_repeat1,
    STATE(159), 1,
      sym_else_tag,
    STATE(178), 1,
      sym_elseif_tag,
    STATE(181), 1,
      sym__tag_open,
    ACTIONS(277), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(279), 2,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT_DASH,
  [3448] = 2,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
    ACTIONS(283), 6,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_unless,
  [3460] = 2,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    ACTIONS(287), 6,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_unless,
  [3472] = 2,
    ACTIONS(289), 1,
      ts_builtin_sym_end,
    ACTIONS(291), 6,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_unless,
  [3484] = 2,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
    ACTIONS(295), 6,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_unless,
  [3496] = 4,
    ACTIONS(299), 1,
      aux_sym_comment_token1,
    STATE(117), 1,
      aux_sym_comment_repeat1,
    STATE(208), 1,
      sym__tag_open,
    ACTIONS(297), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [3512] = 2,
    ACTIONS(301), 1,
      ts_builtin_sym_end,
    ACTIONS(303), 6,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_unless,
  [3524] = 2,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
    ACTIONS(307), 6,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_unless,
  [3536] = 2,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
    ACTIONS(311), 6,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_unless,
  [3548] = 2,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    ACTIONS(315), 6,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_unless,
  [3560] = 2,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
    ACTIONS(319), 6,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_unless,
  [3572] = 2,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    ACTIONS(323), 6,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_unless,
  [3584] = 4,
    ACTIONS(327), 1,
      aux_sym_comment_token1,
    STATE(119), 1,
      aux_sym_comment_repeat1,
    STATE(193), 1,
      sym__tag_open,
    ACTIONS(325), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [3600] = 2,
    ACTIONS(329), 1,
      ts_builtin_sym_end,
    ACTIONS(331), 6,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_unless,
  [3612] = 2,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
    ACTIONS(335), 6,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_unless,
  [3624] = 4,
    ACTIONS(339), 1,
      aux_sym_comment_token1,
    STATE(124), 1,
      aux_sym_comment_repeat1,
    STATE(209), 1,
      sym__tag_open,
    ACTIONS(337), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [3640] = 2,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
    ACTIONS(343), 6,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_unless,
  [3652] = 4,
    ACTIONS(339), 1,
      aux_sym_comment_token1,
    STATE(124), 1,
      aux_sym_comment_repeat1,
    STATE(195), 1,
      sym__tag_open,
    ACTIONS(345), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [3668] = 2,
    ACTIONS(347), 1,
      ts_builtin_sym_end,
    ACTIONS(349), 6,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_unless,
  [3680] = 2,
    ACTIONS(351), 1,
      ts_builtin_sym_end,
    ACTIONS(353), 6,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_unless,
  [3692] = 2,
    ACTIONS(355), 1,
      ts_builtin_sym_end,
    ACTIONS(357), 6,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_unless,
  [3704] = 5,
    STATE(123), 1,
      aux_sym_if_tag_repeat1,
    STATE(178), 1,
      sym_elseif_tag,
    STATE(218), 1,
      sym__tag_open,
    ACTIONS(359), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(362), 2,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT_DASH,
  [3722] = 3,
    ACTIONS(367), 1,
      aux_sym_comment_token1,
    STATE(124), 1,
      aux_sym_comment_repeat1,
    ACTIONS(365), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [3735] = 1,
    ACTIONS(349), 6,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_unless,
  [3744] = 1,
    ACTIONS(307), 6,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_unless,
  [3753] = 1,
    ACTIONS(335), 6,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_unless,
  [3762] = 1,
    ACTIONS(331), 6,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_unless,
  [3771] = 1,
    ACTIONS(323), 6,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_unless,
  [3780] = 1,
    ACTIONS(319), 6,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_unless,
  [3789] = 1,
    ACTIONS(283), 6,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_unless,
  [3798] = 1,
    ACTIONS(303), 6,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_unless,
  [3807] = 1,
    ACTIONS(295), 6,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_unless,
  [3816] = 1,
    ACTIONS(291), 6,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_unless,
  [3825] = 1,
    ACTIONS(315), 6,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_unless,
  [3834] = 1,
    ACTIONS(353), 6,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_unless,
  [3843] = 1,
    ACTIONS(311), 6,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_unless,
  [3852] = 1,
    ACTIONS(357), 6,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_unless,
  [3861] = 1,
    ACTIONS(287), 6,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_unless,
  [3870] = 1,
    ACTIONS(343), 6,
      sym_content,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_unless,
  [3879] = 2,
    STATE(122), 1,
      sym__tag_close,
    ACTIONS(370), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3889] = 3,
    STATE(201), 1,
      sym__tag_open,
    ACTIONS(372), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(374), 2,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT_DASH,
  [3901] = 2,
    STATE(104), 1,
      sym__tag_close,
    ACTIONS(376), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3911] = 3,
    STATE(204), 1,
      sym__tag_open,
    ACTIONS(378), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(380), 2,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT_DASH,
  [3923] = 2,
    STATE(108), 1,
      sym__tag_close,
    ACTIONS(151), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3933] = 3,
    STATE(212), 1,
      sym__tag_open,
    ACTIONS(382), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(384), 2,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT_DASH,
  [3945] = 2,
    STATE(112), 1,
      sym__tag_close,
    ACTIONS(386), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3955] = 2,
    STATE(103), 1,
      sym__tag_close,
    ACTIONS(388), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3965] = 2,
    STATE(127), 1,
      sym__tag_close,
    ACTIONS(390), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3975] = 2,
    STATE(120), 1,
      sym__tag_close,
    ACTIONS(392), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3985] = 2,
    STATE(88), 1,
      sym__tag_close,
    ACTIONS(394), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [3995] = 3,
    STATE(196), 1,
      sym__tag_open,
    ACTIONS(396), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(398), 2,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT_DASH,
  [4007] = 3,
    STATE(215), 1,
      sym__tag_open,
    ACTIONS(400), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(402), 2,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT_DASH,
  [4019] = 3,
    STATE(198), 1,
      sym__tag_open,
    ACTIONS(404), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(406), 2,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT_DASH,
  [4031] = 3,
    STATE(217), 1,
      sym__tag_open,
    ACTIONS(408), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(410), 2,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT_DASH,
  [4043] = 2,
    STATE(110), 1,
      sym__tag_close,
    ACTIONS(412), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [4053] = 2,
    STATE(105), 1,
      sym__tag_close,
    ACTIONS(414), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [4063] = 2,
    STATE(106), 1,
      sym__tag_close,
    ACTIONS(416), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [4073] = 3,
    STATE(200), 1,
      sym__tag_open,
    ACTIONS(418), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(420), 2,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT_DASH,
  [4085] = 2,
    STATE(114), 1,
      sym__tag_close,
    ACTIONS(422), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [4095] = 2,
    STATE(118), 1,
      sym__tag_close,
    ACTIONS(424), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [4105] = 2,
    STATE(116), 1,
      sym__tag_close,
    ACTIONS(426), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [4115] = 2,
    STATE(107), 1,
      sym__tag_close,
    ACTIONS(428), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [4125] = 2,
    STATE(132), 1,
      sym__tag_close,
    ACTIONS(153), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [4135] = 2,
    STATE(115), 1,
      sym__tag_close,
    ACTIONS(430), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [4145] = 2,
    STATE(140), 1,
      sym__tag_close,
    ACTIONS(432), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [4155] = 2,
    STATE(113), 1,
      sym__tag_close,
    ACTIONS(434), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [4165] = 2,
    STATE(125), 1,
      sym__tag_close,
    ACTIONS(436), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [4175] = 2,
    STATE(139), 1,
      sym__tag_close,
    ACTIONS(438), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [4185] = 2,
    STATE(138), 1,
      sym__tag_close,
    ACTIONS(440), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [4195] = 2,
    STATE(137), 1,
      sym__tag_close,
    ACTIONS(442), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [4205] = 2,
    STATE(134), 1,
      sym__tag_close,
    ACTIONS(444), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [4215] = 2,
    STATE(133), 1,
      sym__tag_close,
    ACTIONS(446), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [4225] = 2,
    STATE(131), 1,
      sym__tag_close,
    ACTIONS(448), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [4235] = 2,
    STATE(130), 1,
      sym__tag_close,
    ACTIONS(450), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [4245] = 2,
    STATE(129), 1,
      sym__tag_close,
    ACTIONS(452), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [4255] = 2,
    STATE(128), 1,
      sym__tag_close,
    ACTIONS(454), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [4265] = 2,
    ACTIONS(456), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(458), 2,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_PERCENT_DASH,
  [4274] = 1,
    ACTIONS(460), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [4281] = 3,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(58), 1,
      sym_string,
  [4291] = 3,
    ACTIONS(53), 1,
      anon_sym_else,
    ACTIONS(462), 1,
      anon_sym_endif,
    ACTIONS(464), 1,
      anon_sym_elseif,
  [4301] = 3,
    ACTIONS(53), 1,
      anon_sym_else,
    ACTIONS(464), 1,
      anon_sym_elseif,
    ACTIONS(466), 1,
      anon_sym_endif,
  [4311] = 3,
    ACTIONS(53), 1,
      anon_sym_else,
    ACTIONS(464), 1,
      anon_sym_elseif,
    ACTIONS(468), 1,
      anon_sym_endif,
  [4321] = 3,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_string,
  [4331] = 3,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      sym_string,
  [4341] = 3,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(60), 1,
      sym_string,
  [4351] = 3,
    ACTIONS(53), 1,
      anon_sym_else,
    ACTIONS(464), 1,
      anon_sym_elseif,
    ACTIONS(470), 1,
      anon_sym_endif,
  [4361] = 1,
    ACTIONS(472), 1,
      anon_sym_DQUOTE,
  [4365] = 1,
    ACTIONS(474), 1,
      aux_sym_string_token2,
  [4369] = 1,
    ACTIONS(476), 1,
      aux_sym_string_token2,
  [4373] = 1,
    ACTIONS(478), 1,
      anon_sym_DQUOTE,
  [4377] = 1,
    ACTIONS(472), 1,
      anon_sym_SQUOTE,
  [4381] = 1,
    ACTIONS(480), 1,
      anon_sym_endcomment,
  [4385] = 1,
    ACTIONS(482), 1,
      sym_identifier,
  [4389] = 1,
    ACTIONS(484), 1,
      anon_sym_endcomment,
  [4393] = 1,
    ACTIONS(486), 1,
      anon_sym_endif,
  [4397] = 1,
    ACTIONS(478), 1,
      anon_sym_SQUOTE,
  [4401] = 1,
    ACTIONS(488), 1,
      anon_sym_endif,
  [4405] = 1,
    ACTIONS(490), 1,
      anon_sym_EQ,
  [4409] = 1,
    ACTIONS(492), 1,
      anon_sym_endif,
  [4413] = 1,
    ACTIONS(494), 1,
      anon_sym_endif,
  [4417] = 1,
    ACTIONS(496), 1,
      aux_sym_string_token1,
  [4421] = 1,
    ACTIONS(498), 1,
      aux_sym_string_token1,
  [4425] = 1,
    ACTIONS(500), 1,
      anon_sym_endif,
  [4429] = 1,
    ACTIONS(502), 1,
      sym_identifier,
  [4433] = 1,
    ACTIONS(504), 1,
      sym_identifier,
  [4437] = 1,
    ACTIONS(506), 1,
      anon_sym_DQUOTE,
  [4441] = 1,
    ACTIONS(508), 1,
      anon_sym_endcomment,
  [4445] = 1,
    ACTIONS(510), 1,
      anon_sym_endcomment,
  [4449] = 1,
    ACTIONS(506), 1,
      anon_sym_SQUOTE,
  [4453] = 1,
    ACTIONS(512), 1,
      aux_sym_string_token2,
  [4457] = 1,
    ACTIONS(514), 1,
      anon_sym_endif,
  [4461] = 1,
    ACTIONS(516), 1,
      aux_sym_string_token1,
  [4465] = 1,
    ACTIONS(518), 1,
      sym_identifier,
  [4469] = 1,
    ACTIONS(520), 1,
      anon_sym_endif,
  [4473] = 1,
    ACTIONS(522), 1,
      sym_identifier,
  [4477] = 1,
    ACTIONS(524), 1,
      anon_sym_endif,
  [4481] = 1,
    ACTIONS(464), 1,
      anon_sym_elseif,
  [4485] = 1,
    ACTIONS(526), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 60,
  [SMALL_STATE(4)] = 120,
  [SMALL_STATE(5)] = 182,
  [SMALL_STATE(6)] = 244,
  [SMALL_STATE(7)] = 306,
  [SMALL_STATE(8)] = 368,
  [SMALL_STATE(9)] = 401,
  [SMALL_STATE(10)] = 431,
  [SMALL_STATE(11)] = 459,
  [SMALL_STATE(12)] = 489,
  [SMALL_STATE(13)] = 519,
  [SMALL_STATE(14)] = 575,
  [SMALL_STATE(15)] = 631,
  [SMALL_STATE(16)] = 687,
  [SMALL_STATE(17)] = 743,
  [SMALL_STATE(18)] = 768,
  [SMALL_STATE(19)] = 821,
  [SMALL_STATE(20)] = 848,
  [SMALL_STATE(21)] = 875,
  [SMALL_STATE(22)] = 900,
  [SMALL_STATE(23)] = 925,
  [SMALL_STATE(24)] = 950,
  [SMALL_STATE(25)] = 975,
  [SMALL_STATE(26)] = 1008,
  [SMALL_STATE(27)] = 1061,
  [SMALL_STATE(28)] = 1085,
  [SMALL_STATE(29)] = 1109,
  [SMALL_STATE(30)] = 1133,
  [SMALL_STATE(31)] = 1157,
  [SMALL_STATE(32)] = 1187,
  [SMALL_STATE(33)] = 1215,
  [SMALL_STATE(34)] = 1245,
  [SMALL_STATE(35)] = 1277,
  [SMALL_STATE(36)] = 1307,
  [SMALL_STATE(37)] = 1331,
  [SMALL_STATE(38)] = 1355,
  [SMALL_STATE(39)] = 1385,
  [SMALL_STATE(40)] = 1411,
  [SMALL_STATE(41)] = 1439,
  [SMALL_STATE(42)] = 1463,
  [SMALL_STATE(43)] = 1488,
  [SMALL_STATE(44)] = 1515,
  [SMALL_STATE(45)] = 1558,
  [SMALL_STATE(46)] = 1601,
  [SMALL_STATE(47)] = 1644,
  [SMALL_STATE(48)] = 1687,
  [SMALL_STATE(49)] = 1712,
  [SMALL_STATE(50)] = 1739,
  [SMALL_STATE(51)] = 1764,
  [SMALL_STATE(52)] = 1789,
  [SMALL_STATE(53)] = 1814,
  [SMALL_STATE(54)] = 1857,
  [SMALL_STATE(55)] = 1881,
  [SMALL_STATE(56)] = 1911,
  [SMALL_STATE(57)] = 1935,
  [SMALL_STATE(58)] = 1977,
  [SMALL_STATE(59)] = 2001,
  [SMALL_STATE(60)] = 2041,
  [SMALL_STATE(61)] = 2065,
  [SMALL_STATE(62)] = 2107,
  [SMALL_STATE(63)] = 2149,
  [SMALL_STATE(64)] = 2175,
  [SMALL_STATE(65)] = 2217,
  [SMALL_STATE(66)] = 2251,
  [SMALL_STATE(67)] = 2287,
  [SMALL_STATE(68)] = 2311,
  [SMALL_STATE(69)] = 2349,
  [SMALL_STATE(70)] = 2387,
  [SMALL_STATE(71)] = 2425,
  [SMALL_STATE(72)] = 2463,
  [SMALL_STATE(73)] = 2499,
  [SMALL_STATE(74)] = 2537,
  [SMALL_STATE(75)] = 2575,
  [SMALL_STATE(76)] = 2613,
  [SMALL_STATE(77)] = 2651,
  [SMALL_STATE(78)] = 2689,
  [SMALL_STATE(79)] = 2727,
  [SMALL_STATE(80)] = 2765,
  [SMALL_STATE(81)] = 2803,
  [SMALL_STATE(82)] = 2841,
  [SMALL_STATE(83)] = 2879,
  [SMALL_STATE(84)] = 2915,
  [SMALL_STATE(85)] = 2953,
  [SMALL_STATE(86)] = 2991,
  [SMALL_STATE(87)] = 3024,
  [SMALL_STATE(88)] = 3057,
  [SMALL_STATE(89)] = 3090,
  [SMALL_STATE(90)] = 3123,
  [SMALL_STATE(91)] = 3156,
  [SMALL_STATE(92)] = 3189,
  [SMALL_STATE(93)] = 3222,
  [SMALL_STATE(94)] = 3248,
  [SMALL_STATE(95)] = 3274,
  [SMALL_STATE(96)] = 3297,
  [SMALL_STATE(97)] = 3320,
  [SMALL_STATE(98)] = 3342,
  [SMALL_STATE(99)] = 3364,
  [SMALL_STATE(100)] = 3385,
  [SMALL_STATE(101)] = 3406,
  [SMALL_STATE(102)] = 3427,
  [SMALL_STATE(103)] = 3448,
  [SMALL_STATE(104)] = 3460,
  [SMALL_STATE(105)] = 3472,
  [SMALL_STATE(106)] = 3484,
  [SMALL_STATE(107)] = 3496,
  [SMALL_STATE(108)] = 3512,
  [SMALL_STATE(109)] = 3524,
  [SMALL_STATE(110)] = 3536,
  [SMALL_STATE(111)] = 3548,
  [SMALL_STATE(112)] = 3560,
  [SMALL_STATE(113)] = 3572,
  [SMALL_STATE(114)] = 3584,
  [SMALL_STATE(115)] = 3600,
  [SMALL_STATE(116)] = 3612,
  [SMALL_STATE(117)] = 3624,
  [SMALL_STATE(118)] = 3640,
  [SMALL_STATE(119)] = 3652,
  [SMALL_STATE(120)] = 3668,
  [SMALL_STATE(121)] = 3680,
  [SMALL_STATE(122)] = 3692,
  [SMALL_STATE(123)] = 3704,
  [SMALL_STATE(124)] = 3722,
  [SMALL_STATE(125)] = 3735,
  [SMALL_STATE(126)] = 3744,
  [SMALL_STATE(127)] = 3753,
  [SMALL_STATE(128)] = 3762,
  [SMALL_STATE(129)] = 3771,
  [SMALL_STATE(130)] = 3780,
  [SMALL_STATE(131)] = 3789,
  [SMALL_STATE(132)] = 3798,
  [SMALL_STATE(133)] = 3807,
  [SMALL_STATE(134)] = 3816,
  [SMALL_STATE(135)] = 3825,
  [SMALL_STATE(136)] = 3834,
  [SMALL_STATE(137)] = 3843,
  [SMALL_STATE(138)] = 3852,
  [SMALL_STATE(139)] = 3861,
  [SMALL_STATE(140)] = 3870,
  [SMALL_STATE(141)] = 3879,
  [SMALL_STATE(142)] = 3889,
  [SMALL_STATE(143)] = 3901,
  [SMALL_STATE(144)] = 3911,
  [SMALL_STATE(145)] = 3923,
  [SMALL_STATE(146)] = 3933,
  [SMALL_STATE(147)] = 3945,
  [SMALL_STATE(148)] = 3955,
  [SMALL_STATE(149)] = 3965,
  [SMALL_STATE(150)] = 3975,
  [SMALL_STATE(151)] = 3985,
  [SMALL_STATE(152)] = 3995,
  [SMALL_STATE(153)] = 4007,
  [SMALL_STATE(154)] = 4019,
  [SMALL_STATE(155)] = 4031,
  [SMALL_STATE(156)] = 4043,
  [SMALL_STATE(157)] = 4053,
  [SMALL_STATE(158)] = 4063,
  [SMALL_STATE(159)] = 4073,
  [SMALL_STATE(160)] = 4085,
  [SMALL_STATE(161)] = 4095,
  [SMALL_STATE(162)] = 4105,
  [SMALL_STATE(163)] = 4115,
  [SMALL_STATE(164)] = 4125,
  [SMALL_STATE(165)] = 4135,
  [SMALL_STATE(166)] = 4145,
  [SMALL_STATE(167)] = 4155,
  [SMALL_STATE(168)] = 4165,
  [SMALL_STATE(169)] = 4175,
  [SMALL_STATE(170)] = 4185,
  [SMALL_STATE(171)] = 4195,
  [SMALL_STATE(172)] = 4205,
  [SMALL_STATE(173)] = 4215,
  [SMALL_STATE(174)] = 4225,
  [SMALL_STATE(175)] = 4235,
  [SMALL_STATE(176)] = 4245,
  [SMALL_STATE(177)] = 4255,
  [SMALL_STATE(178)] = 4265,
  [SMALL_STATE(179)] = 4274,
  [SMALL_STATE(180)] = 4281,
  [SMALL_STATE(181)] = 4291,
  [SMALL_STATE(182)] = 4301,
  [SMALL_STATE(183)] = 4311,
  [SMALL_STATE(184)] = 4321,
  [SMALL_STATE(185)] = 4331,
  [SMALL_STATE(186)] = 4341,
  [SMALL_STATE(187)] = 4351,
  [SMALL_STATE(188)] = 4361,
  [SMALL_STATE(189)] = 4365,
  [SMALL_STATE(190)] = 4369,
  [SMALL_STATE(191)] = 4373,
  [SMALL_STATE(192)] = 4377,
  [SMALL_STATE(193)] = 4381,
  [SMALL_STATE(194)] = 4385,
  [SMALL_STATE(195)] = 4389,
  [SMALL_STATE(196)] = 4393,
  [SMALL_STATE(197)] = 4397,
  [SMALL_STATE(198)] = 4401,
  [SMALL_STATE(199)] = 4405,
  [SMALL_STATE(200)] = 4409,
  [SMALL_STATE(201)] = 4413,
  [SMALL_STATE(202)] = 4417,
  [SMALL_STATE(203)] = 4421,
  [SMALL_STATE(204)] = 4425,
  [SMALL_STATE(205)] = 4429,
  [SMALL_STATE(206)] = 4433,
  [SMALL_STATE(207)] = 4437,
  [SMALL_STATE(208)] = 4441,
  [SMALL_STATE(209)] = 4445,
  [SMALL_STATE(210)] = 4449,
  [SMALL_STATE(211)] = 4453,
  [SMALL_STATE(212)] = 4457,
  [SMALL_STATE(213)] = 4461,
  [SMALL_STATE(214)] = 4465,
  [SMALL_STATE(215)] = 4469,
  [SMALL_STATE(216)] = 4473,
  [SMALL_STATE(217)] = 4477,
  [SMALL_STATE(218)] = 4481,
  [SMALL_STATE(219)] = 4485,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(96),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 3, .production_id = 4),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access, 3, .production_id = 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 3, .production_id = 12),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 5, .production_id = 4),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2, .production_id = 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_render, 2, .production_id = 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(95),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 3, .production_id = 5),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access, 3, .production_id = 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 3, .production_id = 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, .production_id = 12),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 5, .production_id = 4),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 3, .production_id = 5),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, .production_id = 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 7),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_render, 2, .production_id = 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(109),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(26),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(70),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_tag, 5, .production_id = 15),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_tag, 4, .production_id = 13),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_tag, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_tag, 4, .production_id = 11),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(126),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(18),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(85),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_tag, 8, .production_id = 16),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_tag, 8, .production_id = 16),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 6),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 6),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_tag, 8, .production_id = 14),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_tag, 8, .production_id = 14),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_tag, 8, .production_id = 15),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_tag, 8, .production_id = 15),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unpaired_tag, 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unpaired_tag, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 1),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 7),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 7),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_tag, 9, .production_id = 17),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_tag, 9, .production_id = 17),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_tag, 9, .production_id = 18),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_tag, 9, .production_id = 18),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_tag, 9, .production_id = 19),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_tag, 9, .production_id = 19),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_tag, 10, .production_id = 20),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_tag, 10, .production_id = 20),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unless_tag, 5, .production_id = 6),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unless_tag, 5, .production_id = 6),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unless_tag, 6, .production_id = 9),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unless_tag, 6, .production_id = 9),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 1),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_tag, 7, .production_id = 11),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_tag, 7, .production_id = 11),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_tag_repeat1, 2, .production_id = 10), SHIFT_REPEAT(218),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_tag_repeat1, 2, .production_id = 10), SHIFT_REPEAT(218),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(124),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_tag_repeat1, 1, .production_id = 8),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_tag_repeat1, 1, .production_id = 8),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [526] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_liquid(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
