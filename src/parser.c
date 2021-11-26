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
#define STATE_COUNT 148
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 96
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_enclave = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_SEMI = 4,
  anon_sym_include = 5,
  anon_sym_from = 6,
  anon_sym_import = 7,
  anon_sym_STAR = 8,
  sym_header_name = 9,
  anon_sym_COMMA = 10,
  anon_sym_trusted = 11,
  anon_sym_untrusted = 12,
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  anon_sym_void = 15,
  sym_type_qualifier = 16,
  anon_sym_char = 17,
  anon_sym_short = 18,
  anon_sym_int = 19,
  anon_sym_long = 20,
  anon_sym_float = 21,
  anon_sym_double = 22,
  anon_sym_unsigned = 23,
  anon_sym_size_t = 24,
  anon_sym_wchar_t = 25,
  anon_sym_int8_t = 26,
  anon_sym_int16_t = 27,
  anon_sym_int32_t = 28,
  anon_sym_int64_t = 29,
  anon_sym_uint8_t = 30,
  anon_sym_uint16_t = 31,
  anon_sym_uint32_t = 32,
  anon_sym_uint64_t = 33,
  anon_sym_bool = 34,
  anon_sym_struct = 35,
  anon_sym_union = 36,
  anon_sym_enum = 37,
  anon_sym_LBRACK = 38,
  anon_sym_RBRACK = 39,
  anon_sym_in = 40,
  anon_sym_out = 41,
  anon_sym_user_check = 42,
  anon_sym_string = 43,
  anon_sym_wstring = 44,
  anon_sym_isary = 45,
  anon_sym_isptr = 46,
  anon_sym_readonly = 47,
  anon_sym_size = 48,
  anon_sym_EQ = 49,
  anon_sym_count = 50,
  sym_trusted_prefix_public = 51,
  anon_sym_allow = 52,
  sym_suffix_propagate_errno = 53,
  sym_suffix_transition_using_threads = 54,
  sym_identifier = 55,
  sym_string = 56,
  sym_number = 57,
  sym_comments = 58,
  sym_new_line = 59,
  sym__white_space = 60,
  sym_source_file = 61,
  sym__main_item = 62,
  sym_include = 63,
  sym_from = 64,
  sym_import_list = 65,
  sym_trusted = 66,
  sym_untrusted = 67,
  sym_trusted_inner_items = 68,
  sym_untrusted_inner_items = 69,
  sym_ecall_definition = 70,
  sym_ocall_definition = 71,
  sym_retval = 72,
  sym__parameters = 73,
  sym_void_type = 74,
  sym_parameter = 75,
  sym_type_specifier = 76,
  sym_struct_specifier = 77,
  sym_union_specifier = 78,
  sym_enum_specifier = 79,
  sym_pointer_declarator = 80,
  sym_attribute_list = 81,
  sym__pointer_attributes = 82,
  sym_size_attribute = 83,
  sym_count_attribute = 84,
  sym__trusted_suffix = 85,
  sym_untrusted_suffix_allow = 86,
  sym__untrusted_suffix = 87,
  aux_sym_source_file_repeat1 = 88,
  aux_sym_import_list_repeat1 = 89,
  aux_sym_trusted_repeat1 = 90,
  aux_sym_untrusted_repeat1 = 91,
  aux_sym_ecall_definition_repeat1 = 92,
  aux_sym_ocall_definition_repeat1 = 93,
  aux_sym__parameters_repeat1 = 94,
  aux_sym_attribute_list_repeat1 = 95,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_enclave] = "enclave",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_include] = "include",
  [anon_sym_from] = "from",
  [anon_sym_import] = "import",
  [anon_sym_STAR] = "*",
  [sym_header_name] = "header_name",
  [anon_sym_COMMA] = ",",
  [anon_sym_trusted] = "trusted",
  [anon_sym_untrusted] = "untrusted",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_void] = "void",
  [sym_type_qualifier] = "type_qualifier",
  [anon_sym_char] = "char",
  [anon_sym_short] = "short",
  [anon_sym_int] = "int",
  [anon_sym_long] = "long",
  [anon_sym_float] = "float",
  [anon_sym_double] = "double",
  [anon_sym_unsigned] = "unsigned",
  [anon_sym_size_t] = "size_t",
  [anon_sym_wchar_t] = "wchar_t",
  [anon_sym_int8_t] = "int8_t",
  [anon_sym_int16_t] = "int16_t",
  [anon_sym_int32_t] = "int32_t",
  [anon_sym_int64_t] = "int64_t",
  [anon_sym_uint8_t] = "uint8_t",
  [anon_sym_uint16_t] = "uint16_t",
  [anon_sym_uint32_t] = "uint32_t",
  [anon_sym_uint64_t] = "uint64_t",
  [anon_sym_bool] = "bool",
  [anon_sym_struct] = "struct",
  [anon_sym_union] = "union",
  [anon_sym_enum] = "enum",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_in] = "in",
  [anon_sym_out] = "out",
  [anon_sym_user_check] = "user_check",
  [anon_sym_string] = "string",
  [anon_sym_wstring] = "wstring",
  [anon_sym_isary] = "isary",
  [anon_sym_isptr] = "isptr",
  [anon_sym_readonly] = "readonly",
  [anon_sym_size] = "size",
  [anon_sym_EQ] = "=",
  [anon_sym_count] = "count",
  [sym_trusted_prefix_public] = "trusted_prefix_public",
  [anon_sym_allow] = "allow",
  [sym_suffix_propagate_errno] = "suffix_propagate_errno",
  [sym_suffix_transition_using_threads] = "suffix_transition_using_threads",
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_comments] = "comments",
  [sym_new_line] = "new_line",
  [sym__white_space] = "_white_space",
  [sym_source_file] = "source_file",
  [sym__main_item] = "_main_item",
  [sym_include] = "include",
  [sym_from] = "from",
  [sym_import_list] = "import_list",
  [sym_trusted] = "trusted",
  [sym_untrusted] = "untrusted",
  [sym_trusted_inner_items] = "trusted_inner_items",
  [sym_untrusted_inner_items] = "untrusted_inner_items",
  [sym_ecall_definition] = "ecall_definition",
  [sym_ocall_definition] = "ocall_definition",
  [sym_retval] = "retval",
  [sym__parameters] = "_parameters",
  [sym_void_type] = "void_type",
  [sym_parameter] = "parameter",
  [sym_type_specifier] = "type_specifier",
  [sym_struct_specifier] = "struct_specifier",
  [sym_union_specifier] = "union_specifier",
  [sym_enum_specifier] = "enum_specifier",
  [sym_pointer_declarator] = "pointer_declarator",
  [sym_attribute_list] = "attribute_list",
  [sym__pointer_attributes] = "_pointer_attributes",
  [sym_size_attribute] = "size_attribute",
  [sym_count_attribute] = "count_attribute",
  [sym__trusted_suffix] = "_trusted_suffix",
  [sym_untrusted_suffix_allow] = "untrusted_suffix_allow",
  [sym__untrusted_suffix] = "_untrusted_suffix",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_import_list_repeat1] = "import_list_repeat1",
  [aux_sym_trusted_repeat1] = "trusted_repeat1",
  [aux_sym_untrusted_repeat1] = "untrusted_repeat1",
  [aux_sym_ecall_definition_repeat1] = "ecall_definition_repeat1",
  [aux_sym_ocall_definition_repeat1] = "ocall_definition_repeat1",
  [aux_sym__parameters_repeat1] = "_parameters_repeat1",
  [aux_sym_attribute_list_repeat1] = "attribute_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_enclave] = anon_sym_enclave,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_header_name] = sym_header_name,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_trusted] = anon_sym_trusted,
  [anon_sym_untrusted] = anon_sym_untrusted,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_void] = anon_sym_void,
  [sym_type_qualifier] = sym_type_qualifier,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_short] = anon_sym_short,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_long] = anon_sym_long,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_unsigned] = anon_sym_unsigned,
  [anon_sym_size_t] = anon_sym_size_t,
  [anon_sym_wchar_t] = anon_sym_wchar_t,
  [anon_sym_int8_t] = anon_sym_int8_t,
  [anon_sym_int16_t] = anon_sym_int16_t,
  [anon_sym_int32_t] = anon_sym_int32_t,
  [anon_sym_int64_t] = anon_sym_int64_t,
  [anon_sym_uint8_t] = anon_sym_uint8_t,
  [anon_sym_uint16_t] = anon_sym_uint16_t,
  [anon_sym_uint32_t] = anon_sym_uint32_t,
  [anon_sym_uint64_t] = anon_sym_uint64_t,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_union] = anon_sym_union,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_user_check] = anon_sym_user_check,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_wstring] = anon_sym_wstring,
  [anon_sym_isary] = anon_sym_isary,
  [anon_sym_isptr] = anon_sym_isptr,
  [anon_sym_readonly] = anon_sym_readonly,
  [anon_sym_size] = anon_sym_size,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_count] = anon_sym_count,
  [sym_trusted_prefix_public] = sym_trusted_prefix_public,
  [anon_sym_allow] = anon_sym_allow,
  [sym_suffix_propagate_errno] = sym_suffix_propagate_errno,
  [sym_suffix_transition_using_threads] = sym_suffix_transition_using_threads,
  [sym_identifier] = sym_identifier,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_comments] = sym_comments,
  [sym_new_line] = sym_new_line,
  [sym__white_space] = sym__white_space,
  [sym_source_file] = sym_source_file,
  [sym__main_item] = sym__main_item,
  [sym_include] = sym_include,
  [sym_from] = sym_from,
  [sym_import_list] = sym_import_list,
  [sym_trusted] = sym_trusted,
  [sym_untrusted] = sym_untrusted,
  [sym_trusted_inner_items] = sym_trusted_inner_items,
  [sym_untrusted_inner_items] = sym_untrusted_inner_items,
  [sym_ecall_definition] = sym_ecall_definition,
  [sym_ocall_definition] = sym_ocall_definition,
  [sym_retval] = sym_retval,
  [sym__parameters] = sym__parameters,
  [sym_void_type] = sym_void_type,
  [sym_parameter] = sym_parameter,
  [sym_type_specifier] = sym_type_specifier,
  [sym_struct_specifier] = sym_struct_specifier,
  [sym_union_specifier] = sym_union_specifier,
  [sym_enum_specifier] = sym_enum_specifier,
  [sym_pointer_declarator] = sym_pointer_declarator,
  [sym_attribute_list] = sym_attribute_list,
  [sym__pointer_attributes] = sym__pointer_attributes,
  [sym_size_attribute] = sym_size_attribute,
  [sym_count_attribute] = sym_count_attribute,
  [sym__trusted_suffix] = sym__trusted_suffix,
  [sym_untrusted_suffix_allow] = sym_untrusted_suffix_allow,
  [sym__untrusted_suffix] = sym__untrusted_suffix,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_import_list_repeat1] = aux_sym_import_list_repeat1,
  [aux_sym_trusted_repeat1] = aux_sym_trusted_repeat1,
  [aux_sym_untrusted_repeat1] = aux_sym_untrusted_repeat1,
  [aux_sym_ecall_definition_repeat1] = aux_sym_ecall_definition_repeat1,
  [aux_sym_ocall_definition_repeat1] = aux_sym_ocall_definition_repeat1,
  [aux_sym__parameters_repeat1] = aux_sym__parameters_repeat1,
  [aux_sym_attribute_list_repeat1] = aux_sym_attribute_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_enclave] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_header_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trusted] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_untrusted] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [sym_type_qualifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_short] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsigned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_size_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wchar_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int8_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int16_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int32_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint8_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint16_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint32_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint64_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_union] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
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
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_user_check] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wstring] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isptr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_readonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_size] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_count] = {
    .visible = true,
    .named = false,
  },
  [sym_trusted_prefix_public] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_allow] = {
    .visible = true,
    .named = false,
  },
  [sym_suffix_propagate_errno] = {
    .visible = true,
    .named = true,
  },
  [sym_suffix_transition_using_threads] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_comments] = {
    .visible = true,
    .named = true,
  },
  [sym_new_line] = {
    .visible = true,
    .named = true,
  },
  [sym__white_space] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__main_item] = {
    .visible = false,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_from] = {
    .visible = true,
    .named = true,
  },
  [sym_import_list] = {
    .visible = true,
    .named = true,
  },
  [sym_trusted] = {
    .visible = true,
    .named = true,
  },
  [sym_untrusted] = {
    .visible = true,
    .named = true,
  },
  [sym_trusted_inner_items] = {
    .visible = true,
    .named = true,
  },
  [sym_untrusted_inner_items] = {
    .visible = true,
    .named = true,
  },
  [sym_ecall_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_ocall_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_retval] = {
    .visible = true,
    .named = true,
  },
  [sym__parameters] = {
    .visible = false,
    .named = true,
  },
  [sym_void_type] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_type_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_union_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_pointer_declarator] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_list] = {
    .visible = true,
    .named = true,
  },
  [sym__pointer_attributes] = {
    .visible = false,
    .named = true,
  },
  [sym_size_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_count_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__trusted_suffix] = {
    .visible = false,
    .named = true,
  },
  [sym_untrusted_suffix_allow] = {
    .visible = true,
    .named = true,
  },
  [sym__untrusted_suffix] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_trusted_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_untrusted_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ecall_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ocall_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(402);
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\r') ADVANCE(401);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(231);
      if (lookahead == ')') ADVANCE(232);
      if (lookahead == '*') ADVANCE(226);
      if (lookahead == ',') ADVANCE(228);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(220);
      if (lookahead == '=') ADVANCE(292);
      if (lookahead == '[') ADVANCE(279);
      if (lookahead == ']') ADVANCE(280);
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'b') ADVANCE(131);
      if (lookahead == 'c') ADVANCE(74);
      if (lookahead == 'd') ADVANCE(126);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 'l') ADVANCE(125);
      if (lookahead == 'o') ADVANCE(194);
      if (lookahead == 'p') ADVANCE(152);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == 's') ADVANCE(75);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead == 'u') ADVANCE(82);
      if (lookahead == 'v') ADVANCE(122);
      if (lookahead == 'w') ADVANCE(39);
      if (lookahead == '{') ADVANCE(218);
      if (lookahead == '}') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(397);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(396);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(227);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(399);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(398);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == '3') ADVANCE(8);
      if (lookahead == '6') ADVANCE(10);
      if (lookahead == '8') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == '2') ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == '2') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == '4') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == '4') ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == '6') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == '6') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(42);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(198);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(175);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(178);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(179);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(180);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(181);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(182);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(183);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(184);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(185);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(186);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(67);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == 'u') ADVANCE(165);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == 'p') ADVANCE(192);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(96);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(97);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(294);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(177);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(233);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(229);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(249);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(230);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(135);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 68:
      if (lookahead == 'g') ADVANCE(243);
      END_STATE();
    case 69:
      if (lookahead == 'g') ADVANCE(285);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(286);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(119);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(36);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(24);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(132);
      if (lookahead == 'i') ADVANCE(205);
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 76:
      if (lookahead == 'h') ADVANCE(62);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(156);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(35);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == 's') ADVANCE(79);
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 91:
      if (lookahead == 'k') ADVANCE(284);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(271);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 101:
      if (lookahead == 'm') ADVANCE(139);
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 102:
      if (lookahead == 'm') ADVANCE(139);
      if (lookahead == 'n') ADVANCE(281);
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 103:
      if (lookahead == 'm') ADVANCE(277);
      END_STATE();
    case 104:
      if (lookahead == 'm') ADVANCE(223);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(297);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 138:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 139:
      if (lookahead == 'p') ADVANCE(137);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(127);
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(298);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 163:
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 164:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 165:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 166:
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 167:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 194:
      if (lookahead == 'u') ADVANCE(168);
      END_STATE();
    case 195:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 196:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 197:
      if (lookahead == 'u') ADVANCE(165);
      END_STATE();
    case 198:
      if (lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 199:
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 200:
      if (lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 201:
      if (lookahead == 'v') ADVANCE(56);
      END_STATE();
    case 202:
      if (lookahead == 'w') ADVANCE(296);
      END_STATE();
    case 203:
      if (lookahead == 'y') ADVANCE(287);
      END_STATE();
    case 204:
      if (lookahead == 'y') ADVANCE(289);
      END_STATE();
    case 205:
      if (lookahead == 'z') ADVANCE(54);
      END_STATE();
    case 206:
      if (lookahead == 'z') ADVANCE(58);
      END_STATE();
    case 207:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(402);
      if (lookahead == '\r') ADVANCE(403);
      if (lookahead == ')') ADVANCE(232);
      if (lookahead == '*') ADVANCE(226);
      if (lookahead == '/') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(397);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 208:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(402);
      if (lookahead == '\r') ADVANCE(403);
      if (lookahead == ')') ADVANCE(232);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '[') ADVANCE(279);
      if (lookahead == 'b') ADVANCE(365);
      if (lookahead == 'c') ADVANCE(334);
      if (lookahead == 'd') ADVANCE(367);
      if (lookahead == 'e') ADVANCE(356);
      if (lookahead == 'f') ADVANCE(348);
      if (lookahead == 'i') ADVANCE(358);
      if (lookahead == 'l') ADVANCE(364);
      if (lookahead == 's') ADVANCE(336);
      if (lookahead == 'u') ADVANCE(341);
      if (lookahead == 'v') ADVANCE(359);
      if (lookahead == 'w') ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 209:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(402);
      if (lookahead == '\r') ADVANCE(403);
      if (lookahead == '*') ADVANCE(226);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'd') ADVANCE(367);
      if (lookahead == 'l') ADVANCE(364);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 210:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(402);
      if (lookahead == '\r') ADVANCE(403);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(365);
      if (lookahead == 'c') ADVANCE(334);
      if (lookahead == 'd') ADVANCE(367);
      if (lookahead == 'e') ADVANCE(356);
      if (lookahead == 'f') ADVANCE(347);
      if (lookahead == 'i') ADVANCE(351);
      if (lookahead == 'l') ADVANCE(364);
      if (lookahead == 'p') ADVANCE(389);
      if (lookahead == 's') ADVANCE(336);
      if (lookahead == 'u') ADVANCE(341);
      if (lookahead == 'v') ADVANCE(359);
      if (lookahead == 'w') ADVANCE(321);
      if (lookahead == '}') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 211:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(402);
      if (lookahead == '\r') ADVANCE(403);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(365);
      if (lookahead == 'c') ADVANCE(334);
      if (lookahead == 'd') ADVANCE(367);
      if (lookahead == 'e') ADVANCE(356);
      if (lookahead == 'f') ADVANCE(347);
      if (lookahead == 'i') ADVANCE(351);
      if (lookahead == 'l') ADVANCE(364);
      if (lookahead == 's') ADVANCE(336);
      if (lookahead == 'u') ADVANCE(341);
      if (lookahead == 'v') ADVANCE(359);
      if (lookahead == 'w') ADVANCE(321);
      if (lookahead == '}') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 212:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(402);
      if (lookahead == '\r') ADVANCE(403);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(365);
      if (lookahead == 'c') ADVANCE(335);
      if (lookahead == 'd') ADVANCE(367);
      if (lookahead == 'e') ADVANCE(356);
      if (lookahead == 'f') ADVANCE(348);
      if (lookahead == 'i') ADVANCE(358);
      if (lookahead == 'l') ADVANCE(364);
      if (lookahead == 's') ADVANCE(336);
      if (lookahead == 'u') ADVANCE(341);
      if (lookahead == 'v') ADVANCE(359);
      if (lookahead == 'w') ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 213:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(402);
      if (lookahead == '\r') ADVANCE(403);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(117);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == 'u') ADVANCE(121);
      if (lookahead == '}') ADVANCE(219);
      END_STATE();
    case 214:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(2);
      END_STATE();
    case 215:
      if (eof) ADVANCE(216);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(402);
      if (lookahead == '\r') ADVANCE(403);
      if (lookahead == '"') ADVANCE(214);
      if (lookahead == '(') ADVANCE(231);
      if (lookahead == ')') ADVANCE(232);
      if (lookahead == ',') ADVANCE(228);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(220);
      if (lookahead == '=') ADVANCE(292);
      if (lookahead == ']') ADVANCE(280);
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'c') ADVANCE(134);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead == 'o') ADVANCE(194);
      if (lookahead == 'p') ADVANCE(151);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == 's') ADVANCE(90);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == 'u') ADVANCE(161);
      if (lookahead == 'w') ADVANCE(162);
      if (lookahead == '{') ADVANCE(218);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_enclave);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_include);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_header_name);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_trusted);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_untrusted);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_type_qualifier);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_type_qualifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == '3') ADVANCE(7);
      if (lookahead == '6') ADVANCE(9);
      if (lookahead == '8') ADVANCE(15);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(304);
      if (lookahead == '3') ADVANCE(300);
      if (lookahead == '6') ADVANCE(302);
      if (lookahead == '8') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_long);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_size_t);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_size_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_wchar_t);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_wchar_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_int8_t);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_int8_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_int16_t);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_int16_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_int32_t);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_int32_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_int64_t);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_int64_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_uint8_t);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_uint8_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_uint16_t);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_uint16_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_uint32_t);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_uint32_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_uint64_t);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_uint64_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_union);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_user_check);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_wstring);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_isary);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_isptr);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_size);
      if (lookahead == '_') ADVANCE(176);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_trusted_prefix_public);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_trusted_prefix_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_allow);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_suffix_propagate_errno);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_suffix_transition_using_threads);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(305);
      if (lookahead == '3') ADVANCE(301);
      if (lookahead == '6') ADVANCE(303);
      if (lookahead == '8') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(346);
      if (lookahead == 't') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(316);
      if (lookahead == 'o') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(363);
      if (lookahead == 'i') ADVANCE(394);
      if (lookahead == 't') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(354);
      if (lookahead == 'n') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(366);
      if (lookahead == 's') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(361);
      if (lookahead == 'r') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(395);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(397);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_comments);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_comments);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(399);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_new_line);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_new_line);
      if (lookahead == '\n') ADVANCE(400);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__white_space);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__white_space);
      if (lookahead == '\n') ADVANCE(402);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 215},
  [2] = {.lex_state = 210},
  [3] = {.lex_state = 210},
  [4] = {.lex_state = 210},
  [5] = {.lex_state = 211},
  [6] = {.lex_state = 211},
  [7] = {.lex_state = 211},
  [8] = {.lex_state = 208},
  [9] = {.lex_state = 208},
  [10] = {.lex_state = 208},
  [11] = {.lex_state = 208},
  [12] = {.lex_state = 208},
  [13] = {.lex_state = 208},
  [14] = {.lex_state = 210},
  [15] = {.lex_state = 210},
  [16] = {.lex_state = 210},
  [17] = {.lex_state = 210},
  [18] = {.lex_state = 210},
  [19] = {.lex_state = 210},
  [20] = {.lex_state = 210},
  [21] = {.lex_state = 212},
  [22] = {.lex_state = 211},
  [23] = {.lex_state = 212},
  [24] = {.lex_state = 211},
  [25] = {.lex_state = 211},
  [26] = {.lex_state = 211},
  [27] = {.lex_state = 212},
  [28] = {.lex_state = 211},
  [29] = {.lex_state = 211},
  [30] = {.lex_state = 211},
  [31] = {.lex_state = 208},
  [32] = {.lex_state = 208},
  [33] = {.lex_state = 215},
  [34] = {.lex_state = 215},
  [35] = {.lex_state = 213},
  [36] = {.lex_state = 213},
  [37] = {.lex_state = 213},
  [38] = {.lex_state = 215},
  [39] = {.lex_state = 215},
  [40] = {.lex_state = 215},
  [41] = {.lex_state = 213},
  [42] = {.lex_state = 215},
  [43] = {.lex_state = 215},
  [44] = {.lex_state = 213},
  [45] = {.lex_state = 215},
  [46] = {.lex_state = 213},
  [47] = {.lex_state = 215},
  [48] = {.lex_state = 215},
  [49] = {.lex_state = 213},
  [50] = {.lex_state = 213},
  [51] = {.lex_state = 213},
  [52] = {.lex_state = 215},
  [53] = {.lex_state = 215},
  [54] = {.lex_state = 215},
  [55] = {.lex_state = 215},
  [56] = {.lex_state = 215},
  [57] = {.lex_state = 209},
  [58] = {.lex_state = 215},
  [59] = {.lex_state = 215},
  [60] = {.lex_state = 215},
  [61] = {.lex_state = 207},
  [62] = {.lex_state = 215},
  [63] = {.lex_state = 207},
  [64] = {.lex_state = 215},
  [65] = {.lex_state = 215},
  [66] = {.lex_state = 215},
  [67] = {.lex_state = 215},
  [68] = {.lex_state = 215},
  [69] = {.lex_state = 215},
  [70] = {.lex_state = 215},
  [71] = {.lex_state = 207},
  [72] = {.lex_state = 215},
  [73] = {.lex_state = 215},
  [74] = {.lex_state = 215},
  [75] = {.lex_state = 207},
  [76] = {.lex_state = 207},
  [77] = {.lex_state = 207},
  [78] = {.lex_state = 207},
  [79] = {.lex_state = 215},
  [80] = {.lex_state = 215},
  [81] = {.lex_state = 207},
  [82] = {.lex_state = 207},
  [83] = {.lex_state = 207},
  [84] = {.lex_state = 215},
  [85] = {.lex_state = 207},
  [86] = {.lex_state = 215},
  [87] = {.lex_state = 215},
  [88] = {.lex_state = 215},
  [89] = {.lex_state = 207},
  [90] = {.lex_state = 215},
  [91] = {.lex_state = 215},
  [92] = {.lex_state = 215},
  [93] = {.lex_state = 207},
  [94] = {.lex_state = 207},
  [95] = {.lex_state = 207},
  [96] = {.lex_state = 207},
  [97] = {.lex_state = 215},
  [98] = {.lex_state = 215},
  [99] = {.lex_state = 215},
  [100] = {.lex_state = 207},
  [101] = {.lex_state = 215},
  [102] = {.lex_state = 207},
  [103] = {.lex_state = 215},
  [104] = {.lex_state = 215},
  [105] = {.lex_state = 215},
  [106] = {.lex_state = 215},
  [107] = {.lex_state = 207},
  [108] = {.lex_state = 207},
  [109] = {.lex_state = 207},
  [110] = {.lex_state = 207},
  [111] = {.lex_state = 215},
  [112] = {.lex_state = 207},
  [113] = {.lex_state = 215},
  [114] = {.lex_state = 215},
  [115] = {.lex_state = 215},
  [116] = {.lex_state = 215},
  [117] = {.lex_state = 207},
  [118] = {.lex_state = 215},
  [119] = {.lex_state = 215},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 215},
  [122] = {.lex_state = 207},
  [123] = {.lex_state = 207},
  [124] = {.lex_state = 215},
  [125] = {.lex_state = 207},
  [126] = {.lex_state = 215},
  [127] = {.lex_state = 215},
  [128] = {.lex_state = 215},
  [129] = {.lex_state = 207},
  [130] = {.lex_state = 215},
  [131] = {.lex_state = 207},
  [132] = {.lex_state = 215},
  [133] = {.lex_state = 215},
  [134] = {.lex_state = 215},
  [135] = {.lex_state = 215},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 215},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 215},
  [140] = {.lex_state = 215},
  [141] = {.lex_state = 207},
  [142] = {.lex_state = 215},
  [143] = {.lex_state = 215},
  [144] = {.lex_state = 215},
  [145] = {.lex_state = 215},
  [146] = {.lex_state = 215},
  [147] = {.lex_state = 215},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_enclave] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_header_name] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_trusted] = ACTIONS(1),
    [anon_sym_untrusted] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [sym_type_qualifier] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_short] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_long] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_unsigned] = ACTIONS(1),
    [anon_sym_size_t] = ACTIONS(1),
    [anon_sym_wchar_t] = ACTIONS(1),
    [anon_sym_int8_t] = ACTIONS(1),
    [anon_sym_int16_t] = ACTIONS(1),
    [anon_sym_int32_t] = ACTIONS(1),
    [anon_sym_int64_t] = ACTIONS(1),
    [anon_sym_uint8_t] = ACTIONS(1),
    [anon_sym_uint16_t] = ACTIONS(1),
    [anon_sym_uint32_t] = ACTIONS(1),
    [anon_sym_uint64_t] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_user_check] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_wstring] = ACTIONS(1),
    [anon_sym_isary] = ACTIONS(1),
    [anon_sym_isptr] = ACTIONS(1),
    [anon_sym_readonly] = ACTIONS(1),
    [anon_sym_size] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_count] = ACTIONS(1),
    [sym_trusted_prefix_public] = ACTIONS(1),
    [anon_sym_allow] = ACTIONS(1),
    [sym_suffix_propagate_errno] = ACTIONS(1),
    [sym_suffix_transition_using_threads] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_comments] = ACTIONS(3),
    [sym_new_line] = ACTIONS(1),
    [sym__white_space] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(135),
    [anon_sym_enclave] = ACTIONS(7),
    [sym_comments] = ACTIONS(3),
    [sym__white_space] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_from,
    ACTIONS(17), 1,
      sym_type_qualifier,
    ACTIONS(19), 1,
      anon_sym_long,
    ACTIONS(21), 1,
      anon_sym_struct,
    ACTIONS(23), 1,
      anon_sym_union,
    ACTIONS(25), 1,
      anon_sym_enum,
    ACTIONS(27), 1,
      sym_trusted_prefix_public,
    STATE(77), 1,
      sym_type_specifier,
    STATE(117), 1,
      sym_retval,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    STATE(3), 2,
      sym_trusted_inner_items,
      aux_sym_trusted_repeat1,
    STATE(19), 3,
      sym_include,
      sym_from,
      sym_ecall_definition,
    STATE(95), 3,
      sym_struct_specifier,
      sym_union_specifier,
      sym_enum_specifier,
    ACTIONS(15), 19,
      anon_sym_void,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_unsigned,
      anon_sym_size_t,
      anon_sym_wchar_t,
      anon_sym_int8_t,
      anon_sym_int16_t,
      anon_sym_int32_t,
      anon_sym_int64_t,
      anon_sym_uint8_t,
      anon_sym_uint16_t,
      anon_sym_uint32_t,
      anon_sym_uint64_t,
      anon_sym_bool,
      sym_identifier,
  [73] = 16,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 1,
      anon_sym_include,
    ACTIONS(34), 1,
      anon_sym_from,
    ACTIONS(40), 1,
      sym_type_qualifier,
    ACTIONS(43), 1,
      anon_sym_long,
    ACTIONS(46), 1,
      anon_sym_struct,
    ACTIONS(49), 1,
      anon_sym_union,
    ACTIONS(52), 1,
      anon_sym_enum,
    ACTIONS(55), 1,
      sym_trusted_prefix_public,
    STATE(77), 1,
      sym_type_specifier,
    STATE(117), 1,
      sym_retval,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    STATE(3), 2,
      sym_trusted_inner_items,
      aux_sym_trusted_repeat1,
    STATE(19), 3,
      sym_include,
      sym_from,
      sym_ecall_definition,
    STATE(95), 3,
      sym_struct_specifier,
      sym_union_specifier,
      sym_enum_specifier,
    ACTIONS(37), 19,
      anon_sym_void,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_unsigned,
      anon_sym_size_t,
      anon_sym_wchar_t,
      anon_sym_int8_t,
      anon_sym_int16_t,
      anon_sym_int32_t,
      anon_sym_int64_t,
      anon_sym_uint8_t,
      anon_sym_uint16_t,
      anon_sym_uint32_t,
      anon_sym_uint64_t,
      anon_sym_bool,
      sym_identifier,
  [146] = 16,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_from,
    ACTIONS(17), 1,
      sym_type_qualifier,
    ACTIONS(19), 1,
      anon_sym_long,
    ACTIONS(21), 1,
      anon_sym_struct,
    ACTIONS(23), 1,
      anon_sym_union,
    ACTIONS(25), 1,
      anon_sym_enum,
    ACTIONS(27), 1,
      sym_trusted_prefix_public,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      sym_type_specifier,
    STATE(117), 1,
      sym_retval,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    STATE(2), 2,
      sym_trusted_inner_items,
      aux_sym_trusted_repeat1,
    STATE(19), 3,
      sym_include,
      sym_from,
      sym_ecall_definition,
    STATE(95), 3,
      sym_struct_specifier,
      sym_union_specifier,
      sym_enum_specifier,
    ACTIONS(15), 19,
      anon_sym_void,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_unsigned,
      anon_sym_size_t,
      anon_sym_wchar_t,
      anon_sym_int8_t,
      anon_sym_int16_t,
      anon_sym_int32_t,
      anon_sym_int64_t,
      anon_sym_uint8_t,
      anon_sym_uint16_t,
      anon_sym_uint32_t,
      anon_sym_uint64_t,
      anon_sym_bool,
      sym_identifier,
  [219] = 15,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    ACTIONS(62), 1,
      anon_sym_include,
    ACTIONS(65), 1,
      anon_sym_from,
    ACTIONS(71), 1,
      sym_type_qualifier,
    ACTIONS(74), 1,
      anon_sym_long,
    ACTIONS(77), 1,
      anon_sym_struct,
    ACTIONS(80), 1,
      anon_sym_union,
    ACTIONS(83), 1,
      anon_sym_enum,
    STATE(77), 1,
      sym_type_specifier,
    STATE(125), 1,
      sym_retval,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    STATE(5), 2,
      sym_untrusted_inner_items,
      aux_sym_untrusted_repeat1,
    STATE(26), 3,
      sym_include,
      sym_from,
      sym_ocall_definition,
    STATE(95), 3,
      sym_struct_specifier,
      sym_union_specifier,
      sym_enum_specifier,
    ACTIONS(68), 19,
      anon_sym_void,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_unsigned,
      anon_sym_size_t,
      anon_sym_wchar_t,
      anon_sym_int8_t,
      anon_sym_int16_t,
      anon_sym_int32_t,
      anon_sym_int64_t,
      anon_sym_uint8_t,
      anon_sym_uint16_t,
      anon_sym_uint32_t,
      anon_sym_uint64_t,
      anon_sym_bool,
      sym_identifier,
  [289] = 15,
    ACTIONS(17), 1,
      sym_type_qualifier,
    ACTIONS(19), 1,
      anon_sym_long,
    ACTIONS(21), 1,
      anon_sym_struct,
    ACTIONS(23), 1,
      anon_sym_union,
    ACTIONS(25), 1,
      anon_sym_enum,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    ACTIONS(88), 1,
      anon_sym_include,
    ACTIONS(90), 1,
      anon_sym_from,
    STATE(77), 1,
      sym_type_specifier,
    STATE(125), 1,
      sym_retval,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    STATE(5), 2,
      sym_untrusted_inner_items,
      aux_sym_untrusted_repeat1,
    STATE(26), 3,
      sym_include,
      sym_from,
      sym_ocall_definition,
    STATE(95), 3,
      sym_struct_specifier,
      sym_union_specifier,
      sym_enum_specifier,
    ACTIONS(15), 19,
      anon_sym_void,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_unsigned,
      anon_sym_size_t,
      anon_sym_wchar_t,
      anon_sym_int8_t,
      anon_sym_int16_t,
      anon_sym_int32_t,
      anon_sym_int64_t,
      anon_sym_uint8_t,
      anon_sym_uint16_t,
      anon_sym_uint32_t,
      anon_sym_uint64_t,
      anon_sym_bool,
      sym_identifier,
  [359] = 15,
    ACTIONS(17), 1,
      sym_type_qualifier,
    ACTIONS(19), 1,
      anon_sym_long,
    ACTIONS(21), 1,
      anon_sym_struct,
    ACTIONS(23), 1,
      anon_sym_union,
    ACTIONS(25), 1,
      anon_sym_enum,
    ACTIONS(88), 1,
      anon_sym_include,
    ACTIONS(90), 1,
      anon_sym_from,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      sym_type_specifier,
    STATE(125), 1,
      sym_retval,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    STATE(6), 2,
      sym_untrusted_inner_items,
      aux_sym_untrusted_repeat1,
    STATE(26), 3,
      sym_include,
      sym_from,
      sym_ocall_definition,
    STATE(95), 3,
      sym_struct_specifier,
      sym_union_specifier,
      sym_enum_specifier,
    ACTIONS(15), 19,
      anon_sym_void,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_unsigned,
      anon_sym_size_t,
      anon_sym_wchar_t,
      anon_sym_int8_t,
      anon_sym_int16_t,
      anon_sym_int32_t,
      anon_sym_int64_t,
      anon_sym_uint8_t,
      anon_sym_uint16_t,
      anon_sym_uint32_t,
      anon_sym_uint64_t,
      anon_sym_bool,
      sym_identifier,
  [429] = 15,
    ACTIONS(19), 1,
      anon_sym_long,
    ACTIONS(21), 1,
      anon_sym_struct,
    ACTIONS(23), 1,
      anon_sym_union,
    ACTIONS(25), 1,
      anon_sym_enum,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
    ACTIONS(96), 1,
      anon_sym_void,
    ACTIONS(98), 1,
      sym_type_qualifier,
    ACTIONS(100), 1,
      anon_sym_LBRACK,
    STATE(13), 1,
      sym_attribute_list,
    STATE(74), 1,
      sym_parameter,
    STATE(75), 1,
      sym_type_specifier,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    STATE(99), 2,
      sym__parameters,
      sym_void_type,
    STATE(95), 3,
      sym_struct_specifier,
      sym_union_specifier,
      sym_enum_specifier,
    ACTIONS(15), 18,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_unsigned,
      anon_sym_size_t,
      anon_sym_wchar_t,
      anon_sym_int8_t,
      anon_sym_int16_t,
      anon_sym_int32_t,
      anon_sym_int64_t,
      anon_sym_uint8_t,
      anon_sym_uint16_t,
      anon_sym_uint32_t,
      anon_sym_uint64_t,
      anon_sym_bool,
      sym_identifier,
  [496] = 15,
    ACTIONS(19), 1,
      anon_sym_long,
    ACTIONS(21), 1,
      anon_sym_struct,
    ACTIONS(23), 1,
      anon_sym_union,
    ACTIONS(25), 1,
      anon_sym_enum,
    ACTIONS(96), 1,
      anon_sym_void,
    ACTIONS(98), 1,
      sym_type_qualifier,
    ACTIONS(100), 1,
      anon_sym_LBRACK,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      sym_attribute_list,
    STATE(74), 1,
      sym_parameter,
    STATE(75), 1,
      sym_type_specifier,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    STATE(119), 2,
      sym__parameters,
      sym_void_type,
    STATE(95), 3,
      sym_struct_specifier,
      sym_union_specifier,
      sym_enum_specifier,
    ACTIONS(15), 18,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_unsigned,
      anon_sym_size_t,
      anon_sym_wchar_t,
      anon_sym_int8_t,
      anon_sym_int16_t,
      anon_sym_int32_t,
      anon_sym_int64_t,
      anon_sym_uint8_t,
      anon_sym_uint16_t,
      anon_sym_uint32_t,
      anon_sym_uint64_t,
      anon_sym_bool,
      sym_identifier,
  [563] = 15,
    ACTIONS(19), 1,
      anon_sym_long,
    ACTIONS(21), 1,
      anon_sym_struct,
    ACTIONS(23), 1,
      anon_sym_union,
    ACTIONS(25), 1,
      anon_sym_enum,
    ACTIONS(96), 1,
      anon_sym_void,
    ACTIONS(98), 1,
      sym_type_qualifier,
    ACTIONS(100), 1,
      anon_sym_LBRACK,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      sym_attribute_list,
    STATE(74), 1,
      sym_parameter,
    STATE(75), 1,
      sym_type_specifier,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    STATE(118), 2,
      sym__parameters,
      sym_void_type,
    STATE(95), 3,
      sym_struct_specifier,
      sym_union_specifier,
      sym_enum_specifier,
    ACTIONS(15), 18,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_unsigned,
      anon_sym_size_t,
      anon_sym_wchar_t,
      anon_sym_int8_t,
      anon_sym_int16_t,
      anon_sym_int32_t,
      anon_sym_int64_t,
      anon_sym_uint8_t,
      anon_sym_uint16_t,
      anon_sym_uint32_t,
      anon_sym_uint64_t,
      anon_sym_bool,
      sym_identifier,
  [630] = 12,
    ACTIONS(19), 1,
      anon_sym_long,
    ACTIONS(21), 1,
      anon_sym_struct,
    ACTIONS(23), 1,
      anon_sym_union,
    ACTIONS(25), 1,
      anon_sym_enum,
    ACTIONS(98), 1,
      sym_type_qualifier,
    ACTIONS(100), 1,
      anon_sym_LBRACK,
    STATE(13), 1,
      sym_attribute_list,
    STATE(75), 1,
      sym_type_specifier,
    STATE(90), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    STATE(95), 3,
      sym_struct_specifier,
      sym_union_specifier,
      sym_enum_specifier,
    ACTIONS(15), 19,
      anon_sym_void,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_unsigned,
      anon_sym_size_t,
      anon_sym_wchar_t,
      anon_sym_int8_t,
      anon_sym_int16_t,
      anon_sym_int32_t,
      anon_sym_int64_t,
      anon_sym_uint8_t,
      anon_sym_uint16_t,
      anon_sym_uint32_t,
      anon_sym_uint64_t,
      anon_sym_bool,
      sym_identifier,
  [688] = 10,
    ACTIONS(17), 1,
      sym_type_qualifier,
    ACTIONS(19), 1,
      anon_sym_long,
    ACTIONS(21), 1,
      anon_sym_struct,
    ACTIONS(23), 1,
      anon_sym_union,
    ACTIONS(25), 1,
      anon_sym_enum,
    STATE(77), 1,
      sym_type_specifier,
    STATE(123), 1,
      sym_retval,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    STATE(95), 3,
      sym_struct_specifier,
      sym_union_specifier,
      sym_enum_specifier,
    ACTIONS(15), 19,
      anon_sym_void,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_unsigned,
      anon_sym_size_t,
      anon_sym_wchar_t,
      anon_sym_int8_t,
      anon_sym_int16_t,
      anon_sym_int32_t,
      anon_sym_int64_t,
      anon_sym_uint8_t,
      anon_sym_uint16_t,
      anon_sym_uint32_t,
      anon_sym_uint64_t,
      anon_sym_bool,
      sym_identifier,
  [740] = 9,
    ACTIONS(19), 1,
      anon_sym_long,
    ACTIONS(21), 1,
      anon_sym_struct,
    ACTIONS(23), 1,
      anon_sym_union,
    ACTIONS(25), 1,
      anon_sym_enum,
    ACTIONS(106), 1,
      sym_type_qualifier,
    STATE(81), 1,
      sym_type_specifier,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    STATE(95), 3,
      sym_struct_specifier,
      sym_union_specifier,
      sym_enum_specifier,
    ACTIONS(15), 19,
      anon_sym_void,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_unsigned,
      anon_sym_size_t,
      anon_sym_wchar_t,
      anon_sym_int8_t,
      anon_sym_int16_t,
      anon_sym_int32_t,
      anon_sym_int64_t,
      anon_sym_uint8_t,
      anon_sym_uint16_t,
      anon_sym_uint32_t,
      anon_sym_uint64_t,
      anon_sym_bool,
      sym_identifier,
  [789] = 3,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(110), 27,
      anon_sym_include,
      anon_sym_from,
      anon_sym_void,
      sym_type_qualifier,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_unsigned,
      anon_sym_size_t,
      anon_sym_wchar_t,
      anon_sym_int8_t,
      anon_sym_int16_t,
      anon_sym_int32_t,
      anon_sym_int64_t,
      anon_sym_uint8_t,
      anon_sym_uint16_t,
      anon_sym_uint32_t,
      anon_sym_uint64_t,
      anon_sym_bool,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      sym_trusted_prefix_public,
      sym_identifier,
  [826] = 3,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(114), 27,
      anon_sym_include,
      anon_sym_from,
      anon_sym_void,
      sym_type_qualifier,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_unsigned,
      anon_sym_size_t,
      anon_sym_wchar_t,
      anon_sym_int8_t,
      anon_sym_int16_t,
      anon_sym_int32_t,
      anon_sym_int64_t,
      anon_sym_uint8_t,
      anon_sym_uint16_t,
      anon_sym_uint32_t,
      anon_sym_uint64_t,
      anon_sym_bool,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      sym_trusted_prefix_public,
      sym_identifier,
  [863] = 3,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(118), 27,
      anon_sym_include,
      anon_sym_from,
      anon_sym_void,
      sym_type_qualifier,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_unsigned,
      anon_sym_size_t,
      anon_sym_wchar_t,
      anon_sym_int8_t,
      anon_sym_int16_t,
      anon_sym_int32_t,
      anon_sym_int64_t,
      anon_sym_uint8_t,
      anon_sym_uint16_t,
      anon_sym_uint32_t,
      anon_sym_uint64_t,
      anon_sym_bool,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      sym_trusted_prefix_public,
      sym_identifier,
  [900] = 3,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(122), 27,
      anon_sym_include,
      anon_sym_from,
      anon_sym_void,
      sym_type_qualifier,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_unsigned,
      anon_sym_size_t,
      anon_sym_wchar_t,
      anon_sym_int8_t,
      anon_sym_int16_t,
      anon_sym_int32_t,
      anon_sym_int64_t,
      anon_sym_uint8_t,
      anon_sym_uint16_t,
      anon_sym_uint32_t,
      anon_sym_uint64_t,
      anon_sym_bool,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      sym_trusted_prefix_public,
      sym_identifier,
  [937] = 3,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(126), 27,
      anon_sym_include,
      anon_sym_from,
      anon_sym_void,
      sym_type_qualifier,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_unsigned,
      anon_sym_size_t,
      anon_sym_wchar_t,
      anon_sym_int8_t,
      anon_sym_int16_t,
      anon_sym_int32_t,
      anon_sym_int64_t,
      anon_sym_uint8_t,
      anon_sym_uint16_t,
      anon_sym_uint32_t,
      anon_sym_uint64_t,
      anon_sym_bool,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      sym_trusted_prefix_public,
      sym_identifier,
  [974] = 3,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(130), 27,
      anon_sym_include,
      anon_sym_from,
      anon_sym_void,
      sym_type_qualifier,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_unsigned,
      anon_sym_size_t,
      anon_sym_wchar_t,
      anon_sym_int8_t,
      anon_sym_int16_t,
      anon_sym_int32_t,
      anon_sym_int64_t,
      anon_sym_uint8_t,
      anon_sym_uint16_t,
      anon_sym_uint32_t,
      anon_sym_uint64_t,
      anon_sym_bool,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      sym_trusted_prefix_public,
      sym_identifier,
  [1011] = 3,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(134), 27,
      anon_sym_include,
      anon_sym_from,
      anon_sym_void,
      sym_type_qualifier,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_unsigned,
      anon_sym_size_t,
      anon_sym_wchar_t,
      anon_sym_int8_t,
      anon_sym_int16_t,
      anon_sym_int32_t,
      anon_sym_int64_t,
      anon_sym_uint8_t,
      anon_sym_uint16_t,
      anon_sym_uint32_t,
      anon_sym_uint64_t,
      anon_sym_bool,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      sym_trusted_prefix_public,
      sym_identifier,
  [1048] = 8,
    ACTIONS(19), 1,
      anon_sym_long,
    ACTIONS(21), 1,
      anon_sym_struct,
    ACTIONS(23), 1,
      anon_sym_union,
    ACTIONS(25), 1,
      anon_sym_enum,
    STATE(82), 1,
      sym_type_specifier,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    STATE(95), 3,
      sym_struct_specifier,
      sym_union_specifier,
      sym_enum_specifier,
    ACTIONS(15), 19,
      anon_sym_void,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_unsigned,
      anon_sym_size_t,
      anon_sym_wchar_t,
      anon_sym_int8_t,
      anon_sym_int16_t,
      anon_sym_int32_t,
      anon_sym_int64_t,
      anon_sym_uint8_t,
      anon_sym_uint16_t,
      anon_sym_uint32_t,
      anon_sym_uint64_t,
      anon_sym_bool,
      sym_identifier,
  [1094] = 3,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(138), 26,
      anon_sym_include,
      anon_sym_from,
      anon_sym_void,
      sym_type_qualifier,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_unsigned,
      anon_sym_size_t,
      anon_sym_wchar_t,
      anon_sym_int8_t,
      anon_sym_int16_t,
      anon_sym_int32_t,
      anon_sym_int64_t,
      anon_sym_uint8_t,
      anon_sym_uint16_t,
      anon_sym_uint32_t,
      anon_sym_uint64_t,
      anon_sym_bool,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      sym_identifier,
  [1130] = 8,
    ACTIONS(19), 1,
      anon_sym_long,
    ACTIONS(21), 1,
      anon_sym_struct,
    ACTIONS(23), 1,
      anon_sym_union,
    ACTIONS(25), 1,
      anon_sym_enum,
    STATE(76), 1,
      sym_type_specifier,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    STATE(95), 3,
      sym_struct_specifier,
      sym_union_specifier,
      sym_enum_specifier,
    ACTIONS(15), 19,
      anon_sym_void,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_unsigned,
      anon_sym_size_t,
      anon_sym_wchar_t,
      anon_sym_int8_t,
      anon_sym_int16_t,
      anon_sym_int32_t,
      anon_sym_int64_t,
      anon_sym_uint8_t,
      anon_sym_uint16_t,
      anon_sym_uint32_t,
      anon_sym_uint64_t,
      anon_sym_bool,
      sym_identifier,
  [1176] = 3,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(118), 26,
      anon_sym_include,
      anon_sym_from,
      anon_sym_void,
      sym_type_qualifier,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_unsigned,
      anon_sym_size_t,
      anon_sym_wchar_t,
      anon_sym_int8_t,
      anon_sym_int16_t,
      anon_sym_int32_t,
      anon_sym_int64_t,
      anon_sym_uint8_t,
      anon_sym_uint16_t,
      anon_sym_uint32_t,
      anon_sym_uint64_t,
      anon_sym_bool,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      sym_identifier,
  [1212] = 3,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(142), 26,
      anon_sym_include,
      anon_sym_from,
      anon_sym_void,
      sym_type_qualifier,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_unsigned,
      anon_sym_size_t,
      anon_sym_wchar_t,
      anon_sym_int8_t,
      anon_sym_int16_t,
      anon_sym_int32_t,
      anon_sym_int64_t,
      anon_sym_uint8_t,
      anon_sym_uint16_t,
      anon_sym_uint32_t,
      anon_sym_uint64_t,
      anon_sym_bool,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      sym_identifier,
  [1248] = 3,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(146), 26,
      anon_sym_include,
      anon_sym_from,
      anon_sym_void,
      sym_type_qualifier,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_unsigned,
      anon_sym_size_t,
      anon_sym_wchar_t,
      anon_sym_int8_t,
      anon_sym_int16_t,
      anon_sym_int32_t,
      anon_sym_int64_t,
      anon_sym_uint8_t,
      anon_sym_uint16_t,
      anon_sym_uint32_t,
      anon_sym_uint64_t,
      anon_sym_bool,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      sym_identifier,
  [1284] = 8,
    ACTIONS(19), 1,
      anon_sym_long,
    ACTIONS(21), 1,
      anon_sym_struct,
    ACTIONS(23), 1,
      anon_sym_union,
    ACTIONS(25), 1,
      anon_sym_enum,
    STATE(81), 1,
      sym_type_specifier,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    STATE(95), 3,
      sym_struct_specifier,
      sym_union_specifier,
      sym_enum_specifier,
    ACTIONS(15), 19,
      anon_sym_void,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_unsigned,
      anon_sym_size_t,
      anon_sym_wchar_t,
      anon_sym_int8_t,
      anon_sym_int16_t,
      anon_sym_int32_t,
      anon_sym_int64_t,
      anon_sym_uint8_t,
      anon_sym_uint16_t,
      anon_sym_uint32_t,
      anon_sym_uint64_t,
      anon_sym_bool,
      sym_identifier,
  [1330] = 3,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(150), 26,
      anon_sym_include,
      anon_sym_from,
      anon_sym_void,
      sym_type_qualifier,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_unsigned,
      anon_sym_size_t,
      anon_sym_wchar_t,
      anon_sym_int8_t,
      anon_sym_int16_t,
      anon_sym_int32_t,
      anon_sym_int64_t,
      anon_sym_uint8_t,
      anon_sym_uint16_t,
      anon_sym_uint32_t,
      anon_sym_uint64_t,
      anon_sym_bool,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      sym_identifier,
  [1366] = 3,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(154), 26,
      anon_sym_include,
      anon_sym_from,
      anon_sym_void,
      sym_type_qualifier,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_unsigned,
      anon_sym_size_t,
      anon_sym_wchar_t,
      anon_sym_int8_t,
      anon_sym_int16_t,
      anon_sym_int32_t,
      anon_sym_int64_t,
      anon_sym_uint8_t,
      anon_sym_uint16_t,
      anon_sym_uint32_t,
      anon_sym_uint64_t,
      anon_sym_bool,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      sym_identifier,
  [1402] = 3,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(122), 26,
      anon_sym_include,
      anon_sym_from,
      anon_sym_void,
      sym_type_qualifier,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_unsigned,
      anon_sym_size_t,
      anon_sym_wchar_t,
      anon_sym_int8_t,
      anon_sym_int16_t,
      anon_sym_int32_t,
      anon_sym_int64_t,
      anon_sym_uint8_t,
      anon_sym_uint16_t,
      anon_sym_uint32_t,
      anon_sym_uint64_t,
      anon_sym_bool,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      sym_identifier,
  [1438] = 2,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(156), 24,
      anon_sym_void,
      sym_type_qualifier,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_unsigned,
      anon_sym_size_t,
      anon_sym_wchar_t,
      anon_sym_int8_t,
      anon_sym_int16_t,
      anon_sym_int32_t,
      anon_sym_int64_t,
      anon_sym_uint8_t,
      anon_sym_uint16_t,
      anon_sym_uint32_t,
      anon_sym_uint64_t,
      anon_sym_bool,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      sym_identifier,
  [1469] = 2,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(158), 24,
      anon_sym_void,
      sym_type_qualifier,
      anon_sym_char,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_unsigned,
      anon_sym_size_t,
      anon_sym_wchar_t,
      anon_sym_int8_t,
      anon_sym_int16_t,
      anon_sym_int32_t,
      anon_sym_int64_t,
      anon_sym_uint8_t,
      anon_sym_uint16_t,
      anon_sym_uint32_t,
      anon_sym_uint64_t,
      anon_sym_bool,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      sym_identifier,
  [1500] = 5,
    ACTIONS(162), 1,
      anon_sym_size,
    ACTIONS(164), 1,
      anon_sym_count,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    STATE(88), 3,
      sym__pointer_attributes,
      sym_size_attribute,
      sym_count_attribute,
    ACTIONS(160), 8,
      anon_sym_in,
      anon_sym_out,
      anon_sym_user_check,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_isary,
      anon_sym_isptr,
      anon_sym_readonly,
  [1526] = 5,
    ACTIONS(162), 1,
      anon_sym_size,
    ACTIONS(164), 1,
      anon_sym_count,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    STATE(80), 3,
      sym__pointer_attributes,
      sym_size_attribute,
      sym_count_attribute,
    ACTIONS(166), 8,
      anon_sym_in,
      anon_sym_out,
      anon_sym_user_check,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_isary,
      anon_sym_isptr,
      anon_sym_readonly,
  [1552] = 7,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    ACTIONS(170), 1,
      anon_sym_include,
    ACTIONS(172), 1,
      anon_sym_from,
    ACTIONS(174), 1,
      anon_sym_trusted,
    ACTIONS(176), 1,
      anon_sym_untrusted,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    STATE(36), 6,
      sym__main_item,
      sym_include,
      sym_from,
      sym_trusted,
      sym_untrusted,
      aux_sym_source_file_repeat1,
  [1580] = 7,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    ACTIONS(180), 1,
      anon_sym_include,
    ACTIONS(183), 1,
      anon_sym_from,
    ACTIONS(186), 1,
      anon_sym_trusted,
    ACTIONS(189), 1,
      anon_sym_untrusted,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    STATE(36), 6,
      sym__main_item,
      sym_include,
      sym_from,
      sym_trusted,
      sym_untrusted,
      aux_sym_source_file_repeat1,
  [1608] = 7,
    ACTIONS(170), 1,
      anon_sym_include,
    ACTIONS(172), 1,
      anon_sym_from,
    ACTIONS(174), 1,
      anon_sym_trusted,
    ACTIONS(176), 1,
      anon_sym_untrusted,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    STATE(35), 6,
      sym__main_item,
      sym_include,
      sym_from,
      sym_trusted,
      sym_untrusted,
      aux_sym_source_file_repeat1,
  [1636] = 6,
    ACTIONS(194), 1,
      anon_sym_SEMI,
    ACTIONS(196), 1,
      anon_sym_allow,
    STATE(43), 1,
      sym_untrusted_suffix_allow,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(198), 2,
      sym_suffix_propagate_errno,
      sym_suffix_transition_using_threads,
    STATE(40), 2,
      sym__untrusted_suffix,
      aux_sym_ocall_definition_repeat1,
  [1658] = 6,
    ACTIONS(196), 1,
      anon_sym_allow,
    ACTIONS(200), 1,
      anon_sym_SEMI,
    STATE(48), 1,
      sym_untrusted_suffix_allow,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(202), 2,
      sym_suffix_propagate_errno,
      sym_suffix_transition_using_threads,
    STATE(47), 2,
      sym__untrusted_suffix,
      aux_sym_ocall_definition_repeat1,
  [1680] = 4,
    ACTIONS(204), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(206), 2,
      sym_suffix_propagate_errno,
      sym_suffix_transition_using_threads,
    STATE(45), 2,
      sym__untrusted_suffix,
      aux_sym_ocall_definition_repeat1,
  [1696] = 2,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(208), 5,
      anon_sym_RBRACE,
      anon_sym_include,
      anon_sym_from,
      anon_sym_trusted,
      anon_sym_untrusted,
  [1708] = 4,
    ACTIONS(210), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(206), 2,
      sym_suffix_propagate_errno,
      sym_suffix_transition_using_threads,
    STATE(45), 2,
      sym__untrusted_suffix,
      aux_sym_ocall_definition_repeat1,
  [1724] = 4,
    ACTIONS(204), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(212), 2,
      sym_suffix_propagate_errno,
      sym_suffix_transition_using_threads,
    STATE(42), 2,
      sym__untrusted_suffix,
      aux_sym_ocall_definition_repeat1,
  [1740] = 2,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(214), 5,
      anon_sym_RBRACE,
      anon_sym_include,
      anon_sym_from,
      anon_sym_trusted,
      anon_sym_untrusted,
  [1752] = 4,
    ACTIONS(216), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(218), 2,
      sym_suffix_propagate_errno,
      sym_suffix_transition_using_threads,
    STATE(45), 2,
      sym__untrusted_suffix,
      aux_sym_ocall_definition_repeat1,
  [1768] = 2,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(120), 5,
      anon_sym_RBRACE,
      anon_sym_include,
      anon_sym_from,
      anon_sym_trusted,
      anon_sym_untrusted,
  [1780] = 4,
    ACTIONS(194), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(206), 2,
      sym_suffix_propagate_errno,
      sym_suffix_transition_using_threads,
    STATE(45), 2,
      sym__untrusted_suffix,
      aux_sym_ocall_definition_repeat1,
  [1796] = 4,
    ACTIONS(194), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(198), 2,
      sym_suffix_propagate_errno,
      sym_suffix_transition_using_threads,
    STATE(40), 2,
      sym__untrusted_suffix,
      aux_sym_ocall_definition_repeat1,
  [1812] = 2,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(221), 5,
      anon_sym_RBRACE,
      anon_sym_include,
      anon_sym_from,
      anon_sym_trusted,
      anon_sym_untrusted,
  [1824] = 2,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(116), 5,
      anon_sym_RBRACE,
      anon_sym_include,
      anon_sym_from,
      anon_sym_trusted,
      anon_sym_untrusted,
  [1836] = 2,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(223), 5,
      anon_sym_RBRACE,
      anon_sym_include,
      anon_sym_from,
      anon_sym_trusted,
      anon_sym_untrusted,
  [1848] = 4,
    ACTIONS(225), 1,
      anon_sym_SEMI,
    ACTIONS(227), 1,
      sym_suffix_transition_using_threads,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    STATE(59), 2,
      sym__trusted_suffix,
      aux_sym_ecall_definition_repeat1,
  [1863] = 4,
    ACTIONS(229), 1,
      anon_sym_SEMI,
    ACTIONS(231), 1,
      sym_suffix_transition_using_threads,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    STATE(53), 2,
      sym__trusted_suffix,
      aux_sym_ecall_definition_repeat1,
  [1878] = 4,
    ACTIONS(234), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      sym_suffix_transition_using_threads,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    STATE(53), 2,
      sym__trusted_suffix,
      aux_sym_ecall_definition_repeat1,
  [1893] = 4,
    ACTIONS(238), 1,
      anon_sym_SEMI,
    ACTIONS(240), 1,
      sym_suffix_transition_using_threads,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    STATE(54), 2,
      sym__trusted_suffix,
      aux_sym_ecall_definition_repeat1,
  [1908] = 4,
    ACTIONS(236), 1,
      sym_suffix_transition_using_threads,
    ACTIONS(238), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    STATE(53), 2,
      sym__trusted_suffix,
      aux_sym_ecall_definition_repeat1,
  [1923] = 4,
    ACTIONS(242), 1,
      anon_sym_STAR,
    ACTIONS(246), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(244), 2,
      anon_sym_long,
      anon_sym_double,
  [1938] = 4,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_import_list_repeat1,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(248), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1953] = 4,
    ACTIONS(236), 1,
      sym_suffix_transition_using_threads,
    ACTIONS(253), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    STATE(53), 2,
      sym__trusted_suffix,
      aux_sym_ecall_definition_repeat1,
  [1968] = 4,
    ACTIONS(253), 1,
      anon_sym_SEMI,
    ACTIONS(255), 1,
      sym_suffix_transition_using_threads,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    STATE(56), 2,
      sym__trusted_suffix,
      aux_sym_ecall_definition_repeat1,
  [1983] = 4,
    ACTIONS(257), 1,
      anon_sym_STAR,
    ACTIONS(259), 1,
      sym_identifier,
    STATE(137), 1,
      sym_import_list,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [1997] = 4,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    ACTIONS(264), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      aux_sym__parameters_repeat1,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2011] = 4,
    ACTIONS(259), 1,
      sym_identifier,
    ACTIONS(266), 1,
      anon_sym_STAR,
    STATE(139), 1,
      sym_import_list,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2025] = 2,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(268), 3,
      anon_sym_SEMI,
      sym_suffix_propagate_errno,
      sym_suffix_transition_using_threads,
  [2035] = 4,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    ACTIONS(272), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      aux_sym_import_list_repeat1,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2049] = 4,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    ACTIONS(276), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      aux_sym_attribute_list_repeat1,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2063] = 2,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(278), 3,
      anon_sym_SEMI,
      sym_suffix_propagate_errno,
      sym_suffix_transition_using_threads,
  [2073] = 4,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    ACTIONS(280), 1,
      anon_sym_SEMI,
    STATE(58), 1,
      aux_sym_import_list_repeat1,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2087] = 2,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(248), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2097] = 4,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    ACTIONS(282), 1,
      anon_sym_SEMI,
    STATE(68), 1,
      aux_sym_import_list_repeat1,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2111] = 3,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(242), 2,
      anon_sym_STAR,
      sym_identifier,
  [2123] = 4,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    ACTIONS(286), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      aux_sym_import_list_repeat1,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2137] = 4,
    ACTIONS(288), 1,
      anon_sym_COMMA,
    ACTIONS(291), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      aux_sym_attribute_list_repeat1,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2151] = 4,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym__parameters_repeat1,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2165] = 4,
    ACTIONS(297), 1,
      anon_sym_STAR,
    ACTIONS(299), 1,
      sym_identifier,
    STATE(110), 1,
      sym_pointer_declarator,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2179] = 4,
    ACTIONS(297), 1,
      anon_sym_STAR,
    ACTIONS(301), 1,
      sym_identifier,
    STATE(122), 1,
      sym_pointer_declarator,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2193] = 4,
    ACTIONS(297), 1,
      anon_sym_STAR,
    ACTIONS(303), 1,
      sym_identifier,
    STATE(100), 1,
      sym_pointer_declarator,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2207] = 4,
    ACTIONS(259), 1,
      sym_identifier,
    ACTIONS(305), 1,
      anon_sym_STAR,
    STATE(105), 1,
      sym_import_list,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2221] = 4,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      aux_sym__parameters_repeat1,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2235] = 4,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    ACTIONS(309), 1,
      anon_sym_RBRACK,
    STATE(66), 1,
      aux_sym_attribute_list_repeat1,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2249] = 4,
    ACTIONS(297), 1,
      anon_sym_STAR,
    ACTIONS(311), 1,
      sym_identifier,
    STATE(141), 1,
      sym_pointer_declarator,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2263] = 4,
    ACTIONS(297), 1,
      anon_sym_STAR,
    ACTIONS(313), 1,
      sym_identifier,
    STATE(129), 1,
      sym_pointer_declarator,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2277] = 2,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(315), 2,
      anon_sym_STAR,
      sym_identifier,
  [2286] = 2,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(317), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2295] = 2,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(319), 2,
      anon_sym_STAR,
      sym_identifier,
  [2304] = 2,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(321), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2313] = 2,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(323), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2322] = 2,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(291), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2331] = 2,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(325), 2,
      sym_identifier,
      sym_number,
  [2340] = 2,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(264), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2349] = 2,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(327), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2358] = 2,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(329), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2367] = 2,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(331), 2,
      anon_sym_STAR,
      sym_identifier,
  [2376] = 2,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(333), 2,
      sym_identifier,
      sym_number,
  [2385] = 2,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(242), 2,
      anon_sym_STAR,
      sym_identifier,
  [2394] = 2,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(335), 2,
      anon_sym_STAR,
      sym_identifier,
  [2403] = 2,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
    ACTIONS(337), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2412] = 2,
    ACTIONS(339), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2420] = 2,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2428] = 2,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2436] = 2,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2444] = 2,
    ACTIONS(343), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2452] = 2,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2460] = 2,
    ACTIONS(347), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2468] = 2,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2476] = 2,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2484] = 2,
    ACTIONS(353), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2492] = 2,
    ACTIONS(355), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2500] = 2,
    ACTIONS(357), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2508] = 2,
    ACTIONS(311), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2516] = 2,
    ACTIONS(359), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2524] = 2,
    ACTIONS(361), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2532] = 2,
    ACTIONS(363), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2540] = 2,
    ACTIONS(365), 1,
      anon_sym_import,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2548] = 2,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2556] = 2,
    ACTIONS(369), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2564] = 2,
    ACTIONS(371), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2572] = 2,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2580] = 2,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2588] = 3,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(5), 1,
      sym__white_space,
    ACTIONS(377), 1,
      sym_new_line,
  [2598] = 2,
    ACTIONS(379), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2606] = 2,
    ACTIONS(381), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2614] = 2,
    ACTIONS(383), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2622] = 2,
    ACTIONS(385), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2630] = 2,
    ACTIONS(387), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2638] = 2,
    ACTIONS(389), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2646] = 2,
    ACTIONS(391), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2654] = 2,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2662] = 2,
    ACTIONS(395), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2670] = 2,
    ACTIONS(397), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2678] = 2,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2686] = 2,
    ACTIONS(401), 1,
      sym_header_name,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2694] = 2,
    ACTIONS(403), 1,
      sym_header_name,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2702] = 2,
    ACTIONS(405), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2710] = 2,
    ACTIONS(407), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2718] = 3,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(5), 1,
      sym__white_space,
    ACTIONS(409), 1,
      sym_new_line,
  [2728] = 2,
    ACTIONS(411), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2736] = 3,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(5), 1,
      sym__white_space,
    ACTIONS(413), 1,
      sym_new_line,
  [2746] = 2,
    ACTIONS(415), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2754] = 2,
    ACTIONS(417), 1,
      sym_header_name,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2762] = 2,
    ACTIONS(301), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2770] = 2,
    ACTIONS(419), 1,
      sym_header_name,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2778] = 2,
    ACTIONS(421), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2786] = 2,
    ACTIONS(423), 1,
      anon_sym_import,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2794] = 2,
    ACTIONS(425), 1,
      anon_sym_import,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2802] = 2,
    ACTIONS(427), 1,
      sym_header_name,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
  [2810] = 2,
    ACTIONS(429), 1,
      sym_header_name,
    ACTIONS(3), 2,
      sym_comments,
      sym__white_space,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 73,
  [SMALL_STATE(4)] = 146,
  [SMALL_STATE(5)] = 219,
  [SMALL_STATE(6)] = 289,
  [SMALL_STATE(7)] = 359,
  [SMALL_STATE(8)] = 429,
  [SMALL_STATE(9)] = 496,
  [SMALL_STATE(10)] = 563,
  [SMALL_STATE(11)] = 630,
  [SMALL_STATE(12)] = 688,
  [SMALL_STATE(13)] = 740,
  [SMALL_STATE(14)] = 789,
  [SMALL_STATE(15)] = 826,
  [SMALL_STATE(16)] = 863,
  [SMALL_STATE(17)] = 900,
  [SMALL_STATE(18)] = 937,
  [SMALL_STATE(19)] = 974,
  [SMALL_STATE(20)] = 1011,
  [SMALL_STATE(21)] = 1048,
  [SMALL_STATE(22)] = 1094,
  [SMALL_STATE(23)] = 1130,
  [SMALL_STATE(24)] = 1176,
  [SMALL_STATE(25)] = 1212,
  [SMALL_STATE(26)] = 1248,
  [SMALL_STATE(27)] = 1284,
  [SMALL_STATE(28)] = 1330,
  [SMALL_STATE(29)] = 1366,
  [SMALL_STATE(30)] = 1402,
  [SMALL_STATE(31)] = 1438,
  [SMALL_STATE(32)] = 1469,
  [SMALL_STATE(33)] = 1500,
  [SMALL_STATE(34)] = 1526,
  [SMALL_STATE(35)] = 1552,
  [SMALL_STATE(36)] = 1580,
  [SMALL_STATE(37)] = 1608,
  [SMALL_STATE(38)] = 1636,
  [SMALL_STATE(39)] = 1658,
  [SMALL_STATE(40)] = 1680,
  [SMALL_STATE(41)] = 1696,
  [SMALL_STATE(42)] = 1708,
  [SMALL_STATE(43)] = 1724,
  [SMALL_STATE(44)] = 1740,
  [SMALL_STATE(45)] = 1752,
  [SMALL_STATE(46)] = 1768,
  [SMALL_STATE(47)] = 1780,
  [SMALL_STATE(48)] = 1796,
  [SMALL_STATE(49)] = 1812,
  [SMALL_STATE(50)] = 1824,
  [SMALL_STATE(51)] = 1836,
  [SMALL_STATE(52)] = 1848,
  [SMALL_STATE(53)] = 1863,
  [SMALL_STATE(54)] = 1878,
  [SMALL_STATE(55)] = 1893,
  [SMALL_STATE(56)] = 1908,
  [SMALL_STATE(57)] = 1923,
  [SMALL_STATE(58)] = 1938,
  [SMALL_STATE(59)] = 1953,
  [SMALL_STATE(60)] = 1968,
  [SMALL_STATE(61)] = 1983,
  [SMALL_STATE(62)] = 1997,
  [SMALL_STATE(63)] = 2011,
  [SMALL_STATE(64)] = 2025,
  [SMALL_STATE(65)] = 2035,
  [SMALL_STATE(66)] = 2049,
  [SMALL_STATE(67)] = 2063,
  [SMALL_STATE(68)] = 2073,
  [SMALL_STATE(69)] = 2087,
  [SMALL_STATE(70)] = 2097,
  [SMALL_STATE(71)] = 2111,
  [SMALL_STATE(72)] = 2123,
  [SMALL_STATE(73)] = 2137,
  [SMALL_STATE(74)] = 2151,
  [SMALL_STATE(75)] = 2165,
  [SMALL_STATE(76)] = 2179,
  [SMALL_STATE(77)] = 2193,
  [SMALL_STATE(78)] = 2207,
  [SMALL_STATE(79)] = 2221,
  [SMALL_STATE(80)] = 2235,
  [SMALL_STATE(81)] = 2249,
  [SMALL_STATE(82)] = 2263,
  [SMALL_STATE(83)] = 2277,
  [SMALL_STATE(84)] = 2286,
  [SMALL_STATE(85)] = 2295,
  [SMALL_STATE(86)] = 2304,
  [SMALL_STATE(87)] = 2313,
  [SMALL_STATE(88)] = 2322,
  [SMALL_STATE(89)] = 2331,
  [SMALL_STATE(90)] = 2340,
  [SMALL_STATE(91)] = 2349,
  [SMALL_STATE(92)] = 2358,
  [SMALL_STATE(93)] = 2367,
  [SMALL_STATE(94)] = 2376,
  [SMALL_STATE(95)] = 2385,
  [SMALL_STATE(96)] = 2394,
  [SMALL_STATE(97)] = 2403,
  [SMALL_STATE(98)] = 2412,
  [SMALL_STATE(99)] = 2420,
  [SMALL_STATE(100)] = 2428,
  [SMALL_STATE(101)] = 2436,
  [SMALL_STATE(102)] = 2444,
  [SMALL_STATE(103)] = 2452,
  [SMALL_STATE(104)] = 2460,
  [SMALL_STATE(105)] = 2468,
  [SMALL_STATE(106)] = 2476,
  [SMALL_STATE(107)] = 2484,
  [SMALL_STATE(108)] = 2492,
  [SMALL_STATE(109)] = 2500,
  [SMALL_STATE(110)] = 2508,
  [SMALL_STATE(111)] = 2516,
  [SMALL_STATE(112)] = 2524,
  [SMALL_STATE(113)] = 2532,
  [SMALL_STATE(114)] = 2540,
  [SMALL_STATE(115)] = 2548,
  [SMALL_STATE(116)] = 2556,
  [SMALL_STATE(117)] = 2564,
  [SMALL_STATE(118)] = 2572,
  [SMALL_STATE(119)] = 2580,
  [SMALL_STATE(120)] = 2588,
  [SMALL_STATE(121)] = 2598,
  [SMALL_STATE(122)] = 2606,
  [SMALL_STATE(123)] = 2614,
  [SMALL_STATE(124)] = 2622,
  [SMALL_STATE(125)] = 2630,
  [SMALL_STATE(126)] = 2638,
  [SMALL_STATE(127)] = 2646,
  [SMALL_STATE(128)] = 2654,
  [SMALL_STATE(129)] = 2662,
  [SMALL_STATE(130)] = 2670,
  [SMALL_STATE(131)] = 2678,
  [SMALL_STATE(132)] = 2686,
  [SMALL_STATE(133)] = 2694,
  [SMALL_STATE(134)] = 2702,
  [SMALL_STATE(135)] = 2710,
  [SMALL_STATE(136)] = 2718,
  [SMALL_STATE(137)] = 2728,
  [SMALL_STATE(138)] = 2736,
  [SMALL_STATE(139)] = 2746,
  [SMALL_STATE(140)] = 2754,
  [SMALL_STATE(141)] = 2762,
  [SMALL_STATE(142)] = 2770,
  [SMALL_STATE(143)] = 2778,
  [SMALL_STATE(144)] = 2786,
  [SMALL_STATE(145)] = 2794,
  [SMALL_STATE(146)] = 2802,
  [SMALL_STATE(147)] = 2810,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trusted_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trusted_repeat1, 2), SHIFT_REPEAT(140),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trusted_repeat1, 2), SHIFT_REPEAT(146),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trusted_repeat1, 2), SHIFT_REPEAT(95),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trusted_repeat1, 2), SHIFT_REPEAT(21),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trusted_repeat1, 2), SHIFT_REPEAT(57),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trusted_repeat1, 2), SHIFT_REPEAT(107),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trusted_repeat1, 2), SHIFT_REPEAT(108),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trusted_repeat1, 2), SHIFT_REPEAT(112),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trusted_repeat1, 2), SHIFT_REPEAT(12),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_untrusted_repeat1, 2),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_untrusted_repeat1, 2), SHIFT_REPEAT(142),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_untrusted_repeat1, 2), SHIFT_REPEAT(147),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_untrusted_repeat1, 2), SHIFT_REPEAT(95),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_untrusted_repeat1, 2), SHIFT_REPEAT(21),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_untrusted_repeat1, 2), SHIFT_REPEAT(57),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_untrusted_repeat1, 2), SHIFT_REPEAT(107),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_untrusted_repeat1, 2), SHIFT_REPEAT(108),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_untrusted_repeat1, 2), SHIFT_REPEAT(112),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ecall_definition, 5),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ecall_definition, 5),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ecall_definition, 7),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ecall_definition, 7),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 5),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from, 5),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ecall_definition, 8),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ecall_definition, 8),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trusted_inner_items, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trusted_inner_items, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ecall_definition, 6),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ecall_definition, 6),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ocall_definition, 5),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ocall_definition, 5),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ocall_definition, 7),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ocall_definition, 7),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_untrusted_inner_items, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_untrusted_inner_items, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ocall_definition, 8),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ocall_definition, 8),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ocall_definition, 6),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ocall_definition, 6),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_list, 4),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_list, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(133),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(132),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(130),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(126),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trusted, 5),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trusted, 4),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ocall_definition_repeat1, 2),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ocall_definition_repeat1, 2), SHIFT_REPEAT(45),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_untrusted, 5),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_untrusted, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ecall_definition_repeat1, 2),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ecall_definition_repeat1, 2), SHIFT_REPEAT(53),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specifier, 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_specifier, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_list_repeat1, 2),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_list_repeat1, 2), SHIFT_REPEAT(131),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2), SHIFT_REPEAT(11),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_untrusted_suffix_allow, 5),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_untrusted_suffix_allow, 4),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_list, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_list, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_void_type, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_list_repeat1, 2), SHIFT_REPEAT(33),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_list_repeat1, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retval, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retval, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specifier, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_specifier, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_size_attribute, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_count_attribute, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 5),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_specifier, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_specifier, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_declarator, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retval, 3),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [407] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_edl(void) {
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
