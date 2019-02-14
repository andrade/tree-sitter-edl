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

#define LANGUAGE_VERSION 9
#define STATE_COUNT 156
#define SYMBOL_COUNT 94
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9

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
  sym_type_qualifier = 15,
  anon_sym_void = 16,
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
  sym_parameter = 73,
  sym_type_specifier = 74,
  sym_struct_specifier = 75,
  sym_union_specifier = 76,
  sym_enum_specifier = 77,
  sym_pointer_declarator = 78,
  sym_attribute_list = 79,
  sym__pointer_attributes = 80,
  sym_size_attribute = 81,
  sym_count_attribute = 82,
  sym__trusted_suffix = 83,
  sym_untrusted_suffix_allow = 84,
  sym__untrusted_suffix = 85,
  aux_sym_source_file_repeat1 = 86,
  aux_sym_import_list_repeat1 = 87,
  aux_sym_trusted_repeat1 = 88,
  aux_sym_untrusted_repeat1 = 89,
  aux_sym_ecall_definition_repeat1 = 90,
  aux_sym_ecall_definition_repeat2 = 91,
  aux_sym_ocall_definition_repeat1 = 92,
  aux_sym_attribute_list_repeat1 = 93,
};

static const char *ts_symbol_names[] = {
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
  [sym_type_qualifier] = "type_qualifier",
  [anon_sym_void] = "void",
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
  [aux_sym_ecall_definition_repeat2] = "ecall_definition_repeat2",
  [aux_sym_ocall_definition_repeat1] = "ocall_definition_repeat1",
  [aux_sym_attribute_list_repeat1] = "attribute_list_repeat1",
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
  [sym_type_qualifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
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
  [aux_sym_ecall_definition_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ocall_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(3);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(4);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '"')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == ';')
        ADVANCE(11);
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(13);
      if (lookahead == ']')
        ADVANCE(14);
      if (lookahead == 'a')
        ADVANCE(15);
      if (lookahead == 'b')
        ADVANCE(16);
      if (lookahead == 'c')
        ADVANCE(17);
      if (lookahead == 'd')
        ADVANCE(18);
      if (lookahead == 'e')
        ADVANCE(19);
      if (lookahead == 'f')
        ADVANCE(20);
      if (lookahead == 'i')
        ADVANCE(21);
      if (lookahead == 'l')
        ADVANCE(22);
      if (lookahead == 'o')
        ADVANCE(23);
      if (lookahead == 'p')
        ADVANCE(24);
      if (lookahead == 'r')
        ADVANCE(25);
      if (lookahead == 's')
        ADVANCE(26);
      if (lookahead == 't')
        ADVANCE(27);
      if (lookahead == 'u')
        ADVANCE(28);
      if (lookahead == 'v')
        ADVANCE(29);
      if (lookahead == 'w')
        ADVANCE(30);
      if (lookahead == '{')
        ADVANCE(31);
      if (lookahead == '}')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym__white_space);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_new_line);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_new_line);
      if (lookahead == '\n')
        ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '"')
        ADVANCE(34);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 10:
      if (lookahead == '*')
        ADVANCE(36);
      if (lookahead == '/')
        ADVANCE(37);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 15:
      if (lookahead == 'l')
        ADVANCE(38);
      END_STATE();
    case 16:
      if (lookahead == 'o')
        ADVANCE(39);
      END_STATE();
    case 17:
      if (lookahead == 'h')
        ADVANCE(40);
      if (lookahead == 'o')
        ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead == 'o')
        ADVANCE(42);
      END_STATE();
    case 19:
      if (lookahead == 'n')
        ADVANCE(43);
      END_STATE();
    case 20:
      if (lookahead == 'l')
        ADVANCE(44);
      if (lookahead == 'r')
        ADVANCE(45);
      END_STATE();
    case 21:
      if (lookahead == 'm')
        ADVANCE(46);
      if (lookahead == 'n')
        ADVANCE(47);
      if (lookahead == 's')
        ADVANCE(48);
      END_STATE();
    case 22:
      if (lookahead == 'o')
        ADVANCE(49);
      END_STATE();
    case 23:
      if (lookahead == 'u')
        ADVANCE(50);
      END_STATE();
    case 24:
      if (lookahead == 'r')
        ADVANCE(51);
      if (lookahead == 'u')
        ADVANCE(52);
      END_STATE();
    case 25:
      if (lookahead == 'e')
        ADVANCE(53);
      END_STATE();
    case 26:
      if (lookahead == 'h')
        ADVANCE(54);
      if (lookahead == 'i')
        ADVANCE(55);
      if (lookahead == 't')
        ADVANCE(56);
      END_STATE();
    case 27:
      if (lookahead == 'r')
        ADVANCE(57);
      END_STATE();
    case 28:
      if (lookahead == 'i')
        ADVANCE(58);
      if (lookahead == 'n')
        ADVANCE(59);
      if (lookahead == 's')
        ADVANCE(60);
      END_STATE();
    case 29:
      if (lookahead == 'o')
        ADVANCE(61);
      END_STATE();
    case 30:
      if (lookahead == 'c')
        ADVANCE(62);
      if (lookahead == 's')
        ADVANCE(63);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 35:
      if (lookahead == '"')
        ADVANCE(64);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '*')
        ADVANCE(65);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_comments);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == 'l')
        ADVANCE(66);
      END_STATE();
    case 39:
      if (lookahead == 'o')
        ADVANCE(67);
      END_STATE();
    case 40:
      if (lookahead == 'a')
        ADVANCE(68);
      END_STATE();
    case 41:
      if (lookahead == 'n')
        ADVANCE(69);
      if (lookahead == 'u')
        ADVANCE(70);
      END_STATE();
    case 42:
      if (lookahead == 'u')
        ADVANCE(71);
      END_STATE();
    case 43:
      if (lookahead == 'c')
        ADVANCE(72);
      if (lookahead == 'u')
        ADVANCE(73);
      END_STATE();
    case 44:
      if (lookahead == 'o')
        ADVANCE(74);
      END_STATE();
    case 45:
      if (lookahead == 'o')
        ADVANCE(75);
      END_STATE();
    case 46:
      if (lookahead == 'p')
        ADVANCE(76);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c')
        ADVANCE(77);
      if (lookahead == 't')
        ADVANCE(78);
      END_STATE();
    case 48:
      if (lookahead == 'a')
        ADVANCE(79);
      if (lookahead == 'p')
        ADVANCE(80);
      END_STATE();
    case 49:
      if (lookahead == 'n')
        ADVANCE(81);
      END_STATE();
    case 50:
      if (lookahead == 't')
        ADVANCE(82);
      END_STATE();
    case 51:
      if (lookahead == 'o')
        ADVANCE(83);
      END_STATE();
    case 52:
      if (lookahead == 'b')
        ADVANCE(84);
      END_STATE();
    case 53:
      if (lookahead == 'a')
        ADVANCE(85);
      END_STATE();
    case 54:
      if (lookahead == 'o')
        ADVANCE(86);
      END_STATE();
    case 55:
      if (lookahead == 'z')
        ADVANCE(87);
      END_STATE();
    case 56:
      if (lookahead == 'r')
        ADVANCE(88);
      END_STATE();
    case 57:
      if (lookahead == 'a')
        ADVANCE(89);
      if (lookahead == 'u')
        ADVANCE(90);
      END_STATE();
    case 58:
      if (lookahead == 'n')
        ADVANCE(91);
      END_STATE();
    case 59:
      if (lookahead == 'i')
        ADVANCE(92);
      if (lookahead == 's')
        ADVANCE(93);
      if (lookahead == 't')
        ADVANCE(94);
      END_STATE();
    case 60:
      if (lookahead == 'e')
        ADVANCE(95);
      END_STATE();
    case 61:
      if (lookahead == 'i')
        ADVANCE(96);
      END_STATE();
    case 62:
      if (lookahead == 'h')
        ADVANCE(97);
      END_STATE();
    case 63:
      if (lookahead == 't')
        ADVANCE(98);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_header_name);
      END_STATE();
    case 65:
      if (lookahead == '*')
        ADVANCE(65);
      if (lookahead == '/')
        ADVANCE(99);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 66:
      if (lookahead == 'o')
        ADVANCE(100);
      END_STATE();
    case 67:
      if (lookahead == 'l')
        ADVANCE(101);
      END_STATE();
    case 68:
      if (lookahead == 'r')
        ADVANCE(102);
      END_STATE();
    case 69:
      if (lookahead == 's')
        ADVANCE(103);
      END_STATE();
    case 70:
      if (lookahead == 'n')
        ADVANCE(104);
      END_STATE();
    case 71:
      if (lookahead == 'b')
        ADVANCE(105);
      END_STATE();
    case 72:
      if (lookahead == 'l')
        ADVANCE(106);
      END_STATE();
    case 73:
      if (lookahead == 'm')
        ADVANCE(107);
      END_STATE();
    case 74:
      if (lookahead == 'a')
        ADVANCE(108);
      END_STATE();
    case 75:
      if (lookahead == 'm')
        ADVANCE(109);
      END_STATE();
    case 76:
      if (lookahead == 'o')
        ADVANCE(110);
      END_STATE();
    case 77:
      if (lookahead == 'l')
        ADVANCE(111);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1')
        ADVANCE(112);
      if (lookahead == '3')
        ADVANCE(113);
      if (lookahead == '6')
        ADVANCE(114);
      if (lookahead == '8')
        ADVANCE(115);
      END_STATE();
    case 79:
      if (lookahead == 'r')
        ADVANCE(116);
      END_STATE();
    case 80:
      if (lookahead == 't')
        ADVANCE(117);
      END_STATE();
    case 81:
      if (lookahead == 'g')
        ADVANCE(118);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 83:
      if (lookahead == 'p')
        ADVANCE(119);
      END_STATE();
    case 84:
      if (lookahead == 'l')
        ADVANCE(120);
      END_STATE();
    case 85:
      if (lookahead == 'd')
        ADVANCE(121);
      END_STATE();
    case 86:
      if (lookahead == 'r')
        ADVANCE(122);
      END_STATE();
    case 87:
      if (lookahead == 'e')
        ADVANCE(123);
      END_STATE();
    case 88:
      if (lookahead == 'i')
        ADVANCE(124);
      if (lookahead == 'u')
        ADVANCE(125);
      END_STATE();
    case 89:
      if (lookahead == 'n')
        ADVANCE(126);
      END_STATE();
    case 90:
      if (lookahead == 's')
        ADVANCE(127);
      END_STATE();
    case 91:
      if (lookahead == 't')
        ADVANCE(128);
      END_STATE();
    case 92:
      if (lookahead == 'o')
        ADVANCE(129);
      END_STATE();
    case 93:
      if (lookahead == 'i')
        ADVANCE(130);
      END_STATE();
    case 94:
      if (lookahead == 'r')
        ADVANCE(131);
      END_STATE();
    case 95:
      if (lookahead == 'r')
        ADVANCE(132);
      END_STATE();
    case 96:
      if (lookahead == 'd')
        ADVANCE(133);
      END_STATE();
    case 97:
      if (lookahead == 'a')
        ADVANCE(134);
      END_STATE();
    case 98:
      if (lookahead == 'r')
        ADVANCE(135);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_comments);
      END_STATE();
    case 100:
      if (lookahead == 'w')
        ADVANCE(136);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 103:
      if (lookahead == 't')
        ADVANCE(137);
      END_STATE();
    case 104:
      if (lookahead == 't')
        ADVANCE(138);
      END_STATE();
    case 105:
      if (lookahead == 'l')
        ADVANCE(139);
      END_STATE();
    case 106:
      if (lookahead == 'a')
        ADVANCE(140);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 108:
      if (lookahead == 't')
        ADVANCE(141);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 110:
      if (lookahead == 'r')
        ADVANCE(142);
      END_STATE();
    case 111:
      if (lookahead == 'u')
        ADVANCE(143);
      END_STATE();
    case 112:
      if (lookahead == '6')
        ADVANCE(144);
      END_STATE();
    case 113:
      if (lookahead == '2')
        ADVANCE(145);
      END_STATE();
    case 114:
      if (lookahead == '4')
        ADVANCE(146);
      END_STATE();
    case 115:
      if (lookahead == '_')
        ADVANCE(147);
      END_STATE();
    case 116:
      if (lookahead == 'y')
        ADVANCE(148);
      END_STATE();
    case 117:
      if (lookahead == 'r')
        ADVANCE(149);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 119:
      if (lookahead == 'a')
        ADVANCE(150);
      END_STATE();
    case 120:
      if (lookahead == 'i')
        ADVANCE(151);
      END_STATE();
    case 121:
      if (lookahead == 'o')
        ADVANCE(152);
      END_STATE();
    case 122:
      if (lookahead == 't')
        ADVANCE(153);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_size);
      if (lookahead == '_')
        ADVANCE(154);
      END_STATE();
    case 124:
      if (lookahead == 'n')
        ADVANCE(155);
      END_STATE();
    case 125:
      if (lookahead == 'c')
        ADVANCE(156);
      END_STATE();
    case 126:
      if (lookahead == 's')
        ADVANCE(157);
      END_STATE();
    case 127:
      if (lookahead == 't')
        ADVANCE(158);
      END_STATE();
    case 128:
      if (lookahead == '1')
        ADVANCE(159);
      if (lookahead == '3')
        ADVANCE(160);
      if (lookahead == '6')
        ADVANCE(161);
      if (lookahead == '8')
        ADVANCE(162);
      END_STATE();
    case 129:
      if (lookahead == 'n')
        ADVANCE(163);
      END_STATE();
    case 130:
      if (lookahead == 'g')
        ADVANCE(164);
      END_STATE();
    case 131:
      if (lookahead == 'u')
        ADVANCE(165);
      END_STATE();
    case 132:
      if (lookahead == '_')
        ADVANCE(166);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 134:
      if (lookahead == 'r')
        ADVANCE(167);
      END_STATE();
    case 135:
      if (lookahead == 'i')
        ADVANCE(168);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_allow);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_type_qualifier);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 139:
      if (lookahead == 'e')
        ADVANCE(169);
      END_STATE();
    case 140:
      if (lookahead == 'v')
        ADVANCE(170);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 142:
      if (lookahead == 't')
        ADVANCE(171);
      END_STATE();
    case 143:
      if (lookahead == 'd')
        ADVANCE(172);
      END_STATE();
    case 144:
      if (lookahead == '_')
        ADVANCE(173);
      END_STATE();
    case 145:
      if (lookahead == '_')
        ADVANCE(174);
      END_STATE();
    case 146:
      if (lookahead == '_')
        ADVANCE(175);
      END_STATE();
    case 147:
      if (lookahead == 't')
        ADVANCE(176);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_isary);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_isptr);
      END_STATE();
    case 150:
      if (lookahead == 'g')
        ADVANCE(177);
      END_STATE();
    case 151:
      if (lookahead == 'c')
        ADVANCE(178);
      END_STATE();
    case 152:
      if (lookahead == 'n')
        ADVANCE(179);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 154:
      if (lookahead == 't')
        ADVANCE(180);
      END_STATE();
    case 155:
      if (lookahead == 'g')
        ADVANCE(181);
      END_STATE();
    case 156:
      if (lookahead == 't')
        ADVANCE(182);
      END_STATE();
    case 157:
      if (lookahead == 'i')
        ADVANCE(183);
      END_STATE();
    case 158:
      if (lookahead == 'e')
        ADVANCE(184);
      END_STATE();
    case 159:
      if (lookahead == '6')
        ADVANCE(185);
      END_STATE();
    case 160:
      if (lookahead == '2')
        ADVANCE(186);
      END_STATE();
    case 161:
      if (lookahead == '4')
        ADVANCE(187);
      END_STATE();
    case 162:
      if (lookahead == '_')
        ADVANCE(188);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 164:
      if (lookahead == 'n')
        ADVANCE(189);
      END_STATE();
    case 165:
      if (lookahead == 's')
        ADVANCE(190);
      END_STATE();
    case 166:
      if (lookahead == 'c')
        ADVANCE(191);
      END_STATE();
    case 167:
      if (lookahead == '_')
        ADVANCE(192);
      END_STATE();
    case 168:
      if (lookahead == 'n')
        ADVANCE(193);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 170:
      if (lookahead == 'e')
        ADVANCE(194);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 172:
      if (lookahead == 'e')
        ADVANCE(195);
      END_STATE();
    case 173:
      if (lookahead == 't')
        ADVANCE(196);
      END_STATE();
    case 174:
      if (lookahead == 't')
        ADVANCE(197);
      END_STATE();
    case 175:
      if (lookahead == 't')
        ADVANCE(198);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_int8_t);
      END_STATE();
    case 177:
      if (lookahead == 'a')
        ADVANCE(199);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_trusted_prefix_public);
      END_STATE();
    case 179:
      if (lookahead == 'l')
        ADVANCE(200);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_size_t);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 183:
      if (lookahead == 't')
        ADVANCE(201);
      END_STATE();
    case 184:
      if (lookahead == 'd')
        ADVANCE(202);
      END_STATE();
    case 185:
      if (lookahead == '_')
        ADVANCE(203);
      END_STATE();
    case 186:
      if (lookahead == '_')
        ADVANCE(204);
      END_STATE();
    case 187:
      if (lookahead == '_')
        ADVANCE(205);
      END_STATE();
    case 188:
      if (lookahead == 't')
        ADVANCE(206);
      END_STATE();
    case 189:
      if (lookahead == 'e')
        ADVANCE(207);
      END_STATE();
    case 190:
      if (lookahead == 't')
        ADVANCE(208);
      END_STATE();
    case 191:
      if (lookahead == 'h')
        ADVANCE(209);
      END_STATE();
    case 192:
      if (lookahead == 't')
        ADVANCE(210);
      END_STATE();
    case 193:
      if (lookahead == 'g')
        ADVANCE(211);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_enclave);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_int16_t);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_int32_t);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_int64_t);
      END_STATE();
    case 199:
      if (lookahead == 't')
        ADVANCE(212);
      END_STATE();
    case 200:
      if (lookahead == 'y')
        ADVANCE(213);
      END_STATE();
    case 201:
      if (lookahead == 'i')
        ADVANCE(214);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_trusted);
      END_STATE();
    case 203:
      if (lookahead == 't')
        ADVANCE(215);
      END_STATE();
    case 204:
      if (lookahead == 't')
        ADVANCE(216);
      END_STATE();
    case 205:
      if (lookahead == 't')
        ADVANCE(217);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_uint8_t);
      END_STATE();
    case 207:
      if (lookahead == 'd')
        ADVANCE(218);
      END_STATE();
    case 208:
      if (lookahead == 'e')
        ADVANCE(219);
      END_STATE();
    case 209:
      if (lookahead == 'e')
        ADVANCE(220);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_wchar_t);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_wstring);
      END_STATE();
    case 212:
      if (lookahead == 'e')
        ADVANCE(221);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 214:
      if (lookahead == 'o')
        ADVANCE(222);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_uint16_t);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_uint32_t);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_uint64_t);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 219:
      if (lookahead == 'd')
        ADVANCE(223);
      END_STATE();
    case 220:
      if (lookahead == 'c')
        ADVANCE(224);
      END_STATE();
    case 221:
      if (lookahead == '_')
        ADVANCE(225);
      END_STATE();
    case 222:
      if (lookahead == 'n')
        ADVANCE(226);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_untrusted);
      END_STATE();
    case 224:
      if (lookahead == 'k')
        ADVANCE(227);
      END_STATE();
    case 225:
      if (lookahead == 'e')
        ADVANCE(228);
      END_STATE();
    case 226:
      if (lookahead == '_')
        ADVANCE(229);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_user_check);
      END_STATE();
    case 228:
      if (lookahead == 'r')
        ADVANCE(230);
      END_STATE();
    case 229:
      if (lookahead == 'u')
        ADVANCE(231);
      END_STATE();
    case 230:
      if (lookahead == 'r')
        ADVANCE(232);
      END_STATE();
    case 231:
      if (lookahead == 's')
        ADVANCE(233);
      END_STATE();
    case 232:
      if (lookahead == 'n')
        ADVANCE(234);
      END_STATE();
    case 233:
      if (lookahead == 'i')
        ADVANCE(235);
      END_STATE();
    case 234:
      if (lookahead == 'o')
        ADVANCE(236);
      END_STATE();
    case 235:
      if (lookahead == 'n')
        ADVANCE(237);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_suffix_propagate_errno);
      END_STATE();
    case 237:
      if (lookahead == 'g')
        ADVANCE(238);
      END_STATE();
    case 238:
      if (lookahead == '_')
        ADVANCE(239);
      END_STATE();
    case 239:
      if (lookahead == 't')
        ADVANCE(240);
      END_STATE();
    case 240:
      if (lookahead == 'h')
        ADVANCE(241);
      END_STATE();
    case 241:
      if (lookahead == 'r')
        ADVANCE(242);
      END_STATE();
    case 242:
      if (lookahead == 'e')
        ADVANCE(243);
      END_STATE();
    case 243:
      if (lookahead == 'a')
        ADVANCE(244);
      END_STATE();
    case 244:
      if (lookahead == 'd')
        ADVANCE(245);
      END_STATE();
    case 245:
      if (lookahead == 's')
        ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_suffix_transition_using_threads);
      END_STATE();
    case 247:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(248);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == 'e')
        ADVANCE(249);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__white_space);
      if (lookahead == '\n')
        ADVANCE(2);
      END_STATE();
    case 249:
      if (lookahead == 'n')
        ADVANCE(250);
      END_STATE();
    case 250:
      if (lookahead == 'c')
        ADVANCE(72);
      END_STATE();
    case 251:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(248);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == '{')
        ADVANCE(31);
      END_STATE();
    case 252:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(248);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == 'f')
        ADVANCE(253);
      if (lookahead == 'i')
        ADVANCE(254);
      if (lookahead == 't')
        ADVANCE(255);
      if (lookahead == 'u')
        ADVANCE(256);
      if (lookahead == '}')
        ADVANCE(32);
      END_STATE();
    case 253:
      if (lookahead == 'r')
        ADVANCE(45);
      END_STATE();
    case 254:
      if (lookahead == 'n')
        ADVANCE(257);
      END_STATE();
    case 255:
      if (lookahead == 'r')
        ADVANCE(258);
      END_STATE();
    case 256:
      if (lookahead == 'n')
        ADVANCE(259);
      END_STATE();
    case 257:
      if (lookahead == 'c')
        ADVANCE(77);
      END_STATE();
    case 258:
      if (lookahead == 'u')
        ADVANCE(90);
      END_STATE();
    case 259:
      if (lookahead == 't')
        ADVANCE(94);
      END_STATE();
    case 260:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(248);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '"')
        ADVANCE(261);
      if (lookahead == '/')
        ADVANCE(10);
      END_STATE();
    case 261:
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(35);
      END_STATE();
    case 262:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(248);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == ';')
        ADVANCE(11);
      END_STATE();
    case 263:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(3);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(4);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(10);
      END_STATE();
    case 264:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(248);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == 'b')
        ADVANCE(265);
      if (lookahead == 'c')
        ADVANCE(266);
      if (lookahead == 'd')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(268);
      if (lookahead == 'f')
        ADVANCE(269);
      if (lookahead == 'i')
        ADVANCE(270);
      if (lookahead == 'l')
        ADVANCE(271);
      if (lookahead == 's')
        ADVANCE(272);
      if (lookahead == 'u')
        ADVANCE(273);
      if (lookahead == 'v')
        ADVANCE(274);
      if (lookahead == 'w')
        ADVANCE(275);
      if (lookahead == '}')
        ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(278);
      if (lookahead == 'o')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(282);
      if (lookahead == 'r')
        ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(286);
      if (lookahead == 'i')
        ADVANCE(287);
      if (lookahead == 't')
        ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(289);
      if (lookahead == 'n')
        ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(300);
      if (lookahead == 't')
        ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z')
        ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(276);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(307);
      if (lookahead == 's')
        ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
        ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
        ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
        ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1')
        ADVANCE(319);
      if (lookahead == '3')
        ADVANCE(320);
      if (lookahead == '6')
        ADVANCE(321);
      if (lookahead == '8')
        ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g')
        ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
        ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
        ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4')
        ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_')
        ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_long);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_')
        ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(343);
      if (lookahead == '3')
        ADVANCE(344);
      if (lookahead == '6')
        ADVANCE(345);
      if (lookahead == '8')
        ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g')
        ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_type_qualifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_')
        ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_')
        ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
        ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
        ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4')
        ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_')
        ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_union);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_')
        ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_int8_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_size_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_')
        ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_')
        ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_')
        ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_include);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_int16_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_int32_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_int64_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_uint8_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_wchar_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_uint16_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_uint32_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_uint64_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 378:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(248);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == 'i')
        ADVANCE(379);
      END_STATE();
    case 379:
      if (lookahead == 'm')
        ADVANCE(46);
      END_STATE();
    case 380:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(248);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == 'b')
        ADVANCE(265);
      if (lookahead == 'c')
        ADVANCE(266);
      if (lookahead == 'd')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(268);
      if (lookahead == 'f')
        ADVANCE(269);
      if (lookahead == 'i')
        ADVANCE(270);
      if (lookahead == 'l')
        ADVANCE(271);
      if (lookahead == 'p')
        ADVANCE(381);
      if (lookahead == 's')
        ADVANCE(272);
      if (lookahead == 'u')
        ADVANCE(273);
      if (lookahead == 'v')
        ADVANCE(274);
      if (lookahead == 'w')
        ADVANCE(275);
      if (lookahead == '}')
        ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
        ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_trusted_prefix_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 387:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(248);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '/')
        ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 388:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(248);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == 'b')
        ADVANCE(265);
      if (lookahead == 'c')
        ADVANCE(389);
      if (lookahead == 'd')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(268);
      if (lookahead == 'f')
        ADVANCE(390);
      if (lookahead == 'i')
        ADVANCE(391);
      if (lookahead == 'l')
        ADVANCE(271);
      if (lookahead == 's')
        ADVANCE(272);
      if (lookahead == 'u')
        ADVANCE(273);
      if (lookahead == 'v')
        ADVANCE(274);
      if (lookahead == 'w')
        ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 393:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(248);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == 'd')
        ADVANCE(267);
      if (lookahead == 'l')
        ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 394:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(248);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == '[')
        ADVANCE(13);
      if (lookahead == 'b')
        ADVANCE(265);
      if (lookahead == 'c')
        ADVANCE(266);
      if (lookahead == 'd')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(268);
      if (lookahead == 'f')
        ADVANCE(390);
      if (lookahead == 'i')
        ADVANCE(391);
      if (lookahead == 'l')
        ADVANCE(271);
      if (lookahead == 's')
        ADVANCE(272);
      if (lookahead == 'u')
        ADVANCE(273);
      if (lookahead == 'v')
        ADVANCE(274);
      if (lookahead == 'w')
        ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    case 395:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(248);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == '/')
        ADVANCE(10);
      END_STATE();
    case 396:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(248);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == 'c')
        ADVANCE(397);
      if (lookahead == 'i')
        ADVANCE(398);
      if (lookahead == 'o')
        ADVANCE(23);
      if (lookahead == 'r')
        ADVANCE(25);
      if (lookahead == 's')
        ADVANCE(399);
      if (lookahead == 'u')
        ADVANCE(400);
      if (lookahead == 'w')
        ADVANCE(401);
      END_STATE();
    case 397:
      if (lookahead == 'o')
        ADVANCE(402);
      END_STATE();
    case 398:
      if (lookahead == 'n')
        ADVANCE(403);
      if (lookahead == 's')
        ADVANCE(48);
      END_STATE();
    case 399:
      if (lookahead == 'i')
        ADVANCE(404);
      if (lookahead == 't')
        ADVANCE(405);
      END_STATE();
    case 400:
      if (lookahead == 's')
        ADVANCE(60);
      END_STATE();
    case 401:
      if (lookahead == 's')
        ADVANCE(63);
      END_STATE();
    case 402:
      if (lookahead == 'u')
        ADVANCE(70);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 404:
      if (lookahead == 'z')
        ADVANCE(406);
      END_STATE();
    case 405:
      if (lookahead == 'r')
        ADVANCE(407);
      END_STATE();
    case 406:
      if (lookahead == 'e')
        ADVANCE(408);
      END_STATE();
    case 407:
      if (lookahead == 'i')
        ADVANCE(124);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 409:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(248);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == ';')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(15);
      if (lookahead == 'p')
        ADVANCE(410);
      if (lookahead == 't')
        ADVANCE(411);
      END_STATE();
    case 410:
      if (lookahead == 'r')
        ADVANCE(51);
      END_STATE();
    case 411:
      if (lookahead == 'r')
        ADVANCE(412);
      END_STATE();
    case 412:
      if (lookahead == 'a')
        ADVANCE(89);
      END_STATE();
    case 413:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(248);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(10);
      END_STATE();
    case 414:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(248);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == ';')
        ADVANCE(11);
      END_STATE();
    case 415:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(248);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(12);
      END_STATE();
    case 416:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(248);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == ']')
        ADVANCE(14);
      END_STATE();
    case 417:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(248);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(276);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 247},
  [2] = {.lex_state = 251},
  [3] = {.lex_state = 247},
  [4] = {.lex_state = 252},
  [5] = {.lex_state = 260},
  [6] = {.lex_state = 251},
  [7] = {.lex_state = 260},
  [8] = {.lex_state = 251},
  [9] = {.lex_state = 262},
  [10] = {.lex_state = 252},
  [11] = {.lex_state = 263},
  [12] = {.lex_state = 264},
  [13] = {.lex_state = 378},
  [14] = {.lex_state = 380},
  [15] = {.lex_state = 247},
  [16] = {.lex_state = 262},
  [17] = {.lex_state = 252},
  [18] = {.lex_state = 252},
  [19] = {.lex_state = 387},
  [20] = {.lex_state = 388},
  [21] = {.lex_state = 387},
  [22] = {.lex_state = 260},
  [23] = {.lex_state = 387},
  [24] = {.lex_state = 262},
  [25] = {.lex_state = 260},
  [26] = {.lex_state = 393},
  [27] = {.lex_state = 387},
  [28] = {.lex_state = 264},
  [29] = {.lex_state = 387},
  [30] = {.lex_state = 264},
  [31] = {.lex_state = 387},
  [32] = {.lex_state = 387},
  [33] = {.lex_state = 260},
  [34] = {.lex_state = 262},
  [35] = {.lex_state = 260},
  [36] = {.lex_state = 394},
  [37] = {.lex_state = 380},
  [38] = {.lex_state = 387},
  [39] = {.lex_state = 380},
  [40] = {.lex_state = 247},
  [41] = {.lex_state = 387},
  [42] = {.lex_state = 387},
  [43] = {.lex_state = 378},
  [44] = {.lex_state = 387},
  [45] = {.lex_state = 252},
  [46] = {.lex_state = 263},
  [47] = {.lex_state = 387},
  [48] = {.lex_state = 387},
  [49] = {.lex_state = 395},
  [50] = {.lex_state = 262},
  [51] = {.lex_state = 264},
  [52] = {.lex_state = 387},
  [53] = {.lex_state = 387},
  [54] = {.lex_state = 262},
  [55] = {.lex_state = 262},
  [56] = {.lex_state = 378},
  [57] = {.lex_state = 252},
  [58] = {.lex_state = 263},
  [59] = {.lex_state = 387},
  [60] = {.lex_state = 395},
  [61] = {.lex_state = 262},
  [62] = {.lex_state = 380},
  [63] = {.lex_state = 387},
  [64] = {.lex_state = 387},
  [65] = {.lex_state = 264},
  [66] = {.lex_state = 394},
  [67] = {.lex_state = 252},
  [68] = {.lex_state = 387},
  [69] = {.lex_state = 262},
  [70] = {.lex_state = 252},
  [71] = {.lex_state = 387},
  [72] = {.lex_state = 380},
  [73] = {.lex_state = 395},
  [74] = {.lex_state = 394},
  [75] = {.lex_state = 252},
  [76] = {.lex_state = 262},
  [77] = {.lex_state = 388},
  [78] = {.lex_state = 396},
  [79] = {.lex_state = 409},
  [80] = {.lex_state = 413},
  [81] = {.lex_state = 394},
  [82] = {.lex_state = 387},
  [83] = {.lex_state = 414},
  [84] = {.lex_state = 262},
  [85] = {.lex_state = 262},
  [86] = {.lex_state = 394},
  [87] = {.lex_state = 409},
  [88] = {.lex_state = 413},
  [89] = {.lex_state = 264},
  [90] = {.lex_state = 387},
  [91] = {.lex_state = 415},
  [92] = {.lex_state = 415},
  [93] = {.lex_state = 416},
  [94] = {.lex_state = 395},
  [95] = {.lex_state = 264},
  [96] = {.lex_state = 409},
  [97] = {.lex_state = 409},
  [98] = {.lex_state = 394},
  [99] = {.lex_state = 409},
  [100] = {.lex_state = 413},
  [101] = {.lex_state = 388},
  [102] = {.lex_state = 413},
  [103] = {.lex_state = 387},
  [104] = {.lex_state = 380},
  [105] = {.lex_state = 409},
  [106] = {.lex_state = 413},
  [107] = {.lex_state = 380},
  [108] = {.lex_state = 409},
  [109] = {.lex_state = 413},
  [110] = {.lex_state = 413},
  [111] = {.lex_state = 387},
  [112] = {.lex_state = 417},
  [113] = {.lex_state = 417},
  [114] = {.lex_state = 396},
  [115] = {.lex_state = 394},
  [116] = {.lex_state = 416},
  [117] = {.lex_state = 387},
  [118] = {.lex_state = 264},
  [119] = {.lex_state = 409},
  [120] = {.lex_state = 409},
  [121] = {.lex_state = 413},
  [122] = {.lex_state = 409},
  [123] = {.lex_state = 409},
  [124] = {.lex_state = 413},
  [125] = {.lex_state = 387},
  [126] = {.lex_state = 380},
  [127] = {.lex_state = 409},
  [128] = {.lex_state = 409},
  [129] = {.lex_state = 413},
  [130] = {.lex_state = 409},
  [131] = {.lex_state = 413},
  [132] = {.lex_state = 416},
  [133] = {.lex_state = 416},
  [134] = {.lex_state = 416},
  [135] = {.lex_state = 394},
  [136] = {.lex_state = 416},
  [137] = {.lex_state = 413},
  [138] = {.lex_state = 264},
  [139] = {.lex_state = 409},
  [140] = {.lex_state = 409},
  [141] = {.lex_state = 387},
  [142] = {.lex_state = 380},
  [143] = {.lex_state = 409},
  [144] = {.lex_state = 409},
  [145] = {.lex_state = 409},
  [146] = {.lex_state = 413},
  [147] = {.lex_state = 264},
  [148] = {.lex_state = 409},
  [149] = {.lex_state = 413},
  [150] = {.lex_state = 380},
  [151] = {.lex_state = 409},
  [152] = {.lex_state = 409},
  [153] = {.lex_state = 413},
  [154] = {.lex_state = 264},
  [155] = {.lex_state = 380},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_readonly] = ACTIONS(1),
    [anon_sym_uint64_t] = ACTIONS(1),
    [sym_new_line] = ACTIONS(1),
    [sym_header_name] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_uint16_t] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_size] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [sym__white_space] = ACTIONS(3),
    [sym_string] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_uint32_t] = ACTIONS(1),
    [anon_sym_short] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_trusted] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_wchar_t] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_user_check] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_count] = ACTIONS(1),
    [anon_sym_untrusted] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_int8_t] = ACTIONS(1),
    [anon_sym_long] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_isary] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_trusted_prefix_public] = ACTIONS(1),
    [sym_suffix_propagate_errno] = ACTIONS(1),
    [sym_type_qualifier] = ACTIONS(1),
    [anon_sym_enclave] = ACTIONS(1),
    [anon_sym_int16_t] = ACTIONS(1),
    [anon_sym_int64_t] = ACTIONS(1),
    [anon_sym_unsigned] = ACTIONS(1),
    [anon_sym_wstring] = ACTIONS(1),
    [anon_sym_isptr] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [sym_comments] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_allow] = ACTIONS(1),
    [sym_suffix_transition_using_threads] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_int32_t] = ACTIONS(1),
    [anon_sym_uint8_t] = ACTIONS(1),
    [anon_sym_size_t] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(3),
    [anon_sym_enclave] = ACTIONS(7),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [2] = {
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [3] = {
    [sym_comments] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym__white_space] = ACTIONS(5),
  },
  [4] = {
    [sym_untrusted] = STATE(10),
    [sym_from] = STATE(10),
    [sym__main_item] = STATE(10),
    [sym_include] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [sym_trusted] = STATE(10),
    [anon_sym_include] = ACTIONS(13),
    [sym_comments] = ACTIONS(5),
    [anon_sym_untrusted] = ACTIONS(15),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_from] = ACTIONS(17),
    [anon_sym_trusted] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(21),
  },
  [5] = {
    [sym_header_name] = ACTIONS(23),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [6] = {
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [7] = {
    [sym_header_name] = ACTIONS(27),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [8] = {
    [anon_sym_LBRACE] = ACTIONS(29),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [9] = {
    [sym__white_space] = ACTIONS(5),
    [sym_comments] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(31),
  },
  [10] = {
    [sym_untrusted] = STATE(17),
    [sym_from] = STATE(17),
    [sym__main_item] = STATE(17),
    [sym_include] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(17),
    [sym_trusted] = STATE(17),
    [anon_sym_include] = ACTIONS(13),
    [sym_comments] = ACTIONS(5),
    [anon_sym_untrusted] = ACTIONS(15),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_from] = ACTIONS(17),
    [anon_sym_trusted] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(33),
  },
  [11] = {
    [sym_comments] = ACTIONS(5),
    [sym_new_line] = ACTIONS(35),
    [sym__white_space] = ACTIONS(3),
  },
  [12] = {
    [sym_struct_specifier] = STATE(19),
    [sym_from] = STATE(28),
    [sym_ocall_definition] = STATE(28),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [sym_retval] = STATE(29),
    [aux_sym_untrusted_repeat1] = STATE(30),
    [sym_include] = STATE(28),
    [sym_untrusted_inner_items] = STATE(30),
    [sym_type_specifier] = STATE(31),
    [anon_sym_float] = ACTIONS(37),
    [anon_sym_union] = ACTIONS(39),
    [anon_sym_uint64_t] = ACTIONS(37),
    [sym_identifier] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(41),
    [anon_sym_include] = ACTIONS(43),
    [anon_sym_int8_t] = ACTIONS(37),
    [anon_sym_uint16_t] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(45),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [anon_sym_bool] = ACTIONS(37),
    [sym__white_space] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(47),
    [anon_sym_from] = ACTIONS(49),
    [anon_sym_int16_t] = ACTIONS(37),
    [anon_sym_uint32_t] = ACTIONS(37),
    [anon_sym_int64_t] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_unsigned] = ACTIONS(37),
    [anon_sym_struct] = ACTIONS(51),
    [anon_sym_enum] = ACTIONS(53),
    [sym_comments] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(37),
    [anon_sym_int32_t] = ACTIONS(37),
    [anon_sym_wchar_t] = ACTIONS(37),
    [anon_sym_uint8_t] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(37),
    [anon_sym_size_t] = ACTIONS(37),
  },
  [13] = {
    [sym_comments] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(55),
    [sym__white_space] = ACTIONS(5),
  },
  [14] = {
    [sym_struct_specifier] = STATE(19),
    [sym_from] = STATE(37),
    [sym_ecall_definition] = STATE(37),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [sym_retval] = STATE(38),
    [aux_sym_trusted_repeat1] = STATE(39),
    [sym_include] = STATE(37),
    [sym_trusted_inner_items] = STATE(39),
    [sym_type_specifier] = STATE(31),
    [anon_sym_float] = ACTIONS(37),
    [anon_sym_union] = ACTIONS(39),
    [anon_sym_uint64_t] = ACTIONS(37),
    [sym_identifier] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_include] = ACTIONS(59),
    [anon_sym_int8_t] = ACTIONS(37),
    [anon_sym_uint16_t] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(45),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [anon_sym_bool] = ACTIONS(37),
    [sym__white_space] = ACTIONS(5),
    [sym_trusted_prefix_public] = ACTIONS(61),
    [sym_type_qualifier] = ACTIONS(47),
    [anon_sym_from] = ACTIONS(63),
    [anon_sym_int16_t] = ACTIONS(37),
    [anon_sym_uint32_t] = ACTIONS(37),
    [anon_sym_int64_t] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_unsigned] = ACTIONS(37),
    [anon_sym_struct] = ACTIONS(51),
    [anon_sym_enum] = ACTIONS(53),
    [sym_comments] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(37),
    [anon_sym_int32_t] = ACTIONS(37),
    [anon_sym_wchar_t] = ACTIONS(37),
    [anon_sym_uint8_t] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(37),
    [anon_sym_size_t] = ACTIONS(37),
  },
  [15] = {
    [sym_comments] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(65),
    [sym__white_space] = ACTIONS(5),
  },
  [16] = {
    [sym__white_space] = ACTIONS(5),
    [sym_comments] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(67),
  },
  [17] = {
    [sym_untrusted] = STATE(17),
    [sym_from] = STATE(17),
    [sym__main_item] = STATE(17),
    [sym_include] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(17),
    [sym_trusted] = STATE(17),
    [anon_sym_include] = ACTIONS(69),
    [sym_comments] = ACTIONS(5),
    [anon_sym_untrusted] = ACTIONS(72),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_from] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(78),
    [anon_sym_trusted] = ACTIONS(80),
  },
  [18] = {
    [anon_sym_include] = ACTIONS(83),
    [sym_comments] = ACTIONS(5),
    [anon_sym_untrusted] = ACTIONS(83),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_from] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(83),
    [anon_sym_trusted] = ACTIONS(83),
  },
  [19] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(85),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(85),
  },
  [20] = {
    [sym_struct_specifier] = STATE(19),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [sym_type_specifier] = STATE(41),
    [anon_sym_float] = ACTIONS(37),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_union] = ACTIONS(39),
    [anon_sym_uint64_t] = ACTIONS(37),
    [anon_sym_int16_t] = ACTIONS(37),
    [anon_sym_uint32_t] = ACTIONS(37),
    [anon_sym_int64_t] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_unsigned] = ACTIONS(37),
    [sym_identifier] = ACTIONS(37),
    [anon_sym_struct] = ACTIONS(51),
    [anon_sym_enum] = ACTIONS(53),
    [anon_sym_int8_t] = ACTIONS(37),
    [anon_sym_uint16_t] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(45),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [sym_comments] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(37),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_int32_t] = ACTIONS(37),
    [anon_sym_wchar_t] = ACTIONS(37),
    [anon_sym_uint8_t] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(37),
    [anon_sym_size_t] = ACTIONS(37),
  },
  [21] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(87),
    [sym__white_space] = ACTIONS(5),
  },
  [22] = {
    [sym_header_name] = ACTIONS(89),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [23] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(91),
    [sym__white_space] = ACTIONS(5),
  },
  [24] = {
    [sym__white_space] = ACTIONS(5),
    [sym_comments] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(93),
  },
  [25] = {
    [sym_header_name] = ACTIONS(95),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [26] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(97),
    [anon_sym_long] = ACTIONS(99),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_double] = ACTIONS(99),
    [anon_sym_STAR] = ACTIONS(85),
  },
  [27] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(101),
    [sym__white_space] = ACTIONS(5),
  },
  [28] = {
    [anon_sym_float] = ACTIONS(103),
    [anon_sym_union] = ACTIONS(103),
    [anon_sym_uint64_t] = ACTIONS(103),
    [sym_identifier] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_include] = ACTIONS(103),
    [anon_sym_int8_t] = ACTIONS(103),
    [anon_sym_uint16_t] = ACTIONS(103),
    [anon_sym_long] = ACTIONS(103),
    [anon_sym_char] = ACTIONS(103),
    [anon_sym_double] = ACTIONS(103),
    [anon_sym_bool] = ACTIONS(103),
    [sym__white_space] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(103),
    [anon_sym_from] = ACTIONS(103),
    [anon_sym_int16_t] = ACTIONS(103),
    [anon_sym_uint32_t] = ACTIONS(103),
    [anon_sym_int64_t] = ACTIONS(103),
    [anon_sym_short] = ACTIONS(103),
    [anon_sym_unsigned] = ACTIONS(103),
    [anon_sym_struct] = ACTIONS(103),
    [anon_sym_enum] = ACTIONS(103),
    [sym_comments] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(103),
    [anon_sym_int32_t] = ACTIONS(103),
    [anon_sym_wchar_t] = ACTIONS(103),
    [anon_sym_uint8_t] = ACTIONS(103),
    [anon_sym_int] = ACTIONS(103),
    [anon_sym_size_t] = ACTIONS(103),
  },
  [29] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(107),
    [sym__white_space] = ACTIONS(5),
  },
  [30] = {
    [sym_struct_specifier] = STATE(19),
    [sym_from] = STATE(28),
    [sym_ocall_definition] = STATE(28),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [sym_retval] = STATE(29),
    [aux_sym_untrusted_repeat1] = STATE(51),
    [sym_include] = STATE(28),
    [sym_untrusted_inner_items] = STATE(51),
    [sym_type_specifier] = STATE(31),
    [anon_sym_float] = ACTIONS(37),
    [anon_sym_union] = ACTIONS(39),
    [anon_sym_uint64_t] = ACTIONS(37),
    [sym_identifier] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(109),
    [anon_sym_include] = ACTIONS(43),
    [anon_sym_int8_t] = ACTIONS(37),
    [anon_sym_uint16_t] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(45),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [anon_sym_bool] = ACTIONS(37),
    [sym__white_space] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(47),
    [anon_sym_from] = ACTIONS(49),
    [anon_sym_int16_t] = ACTIONS(37),
    [anon_sym_uint32_t] = ACTIONS(37),
    [anon_sym_int64_t] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_unsigned] = ACTIONS(37),
    [anon_sym_struct] = ACTIONS(51),
    [anon_sym_enum] = ACTIONS(53),
    [sym_comments] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(37),
    [anon_sym_int32_t] = ACTIONS(37),
    [anon_sym_wchar_t] = ACTIONS(37),
    [anon_sym_uint8_t] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(37),
    [anon_sym_size_t] = ACTIONS(37),
  },
  [31] = {
    [sym_pointer_declarator] = STATE(53),
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(111),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(113),
  },
  [32] = {
    [sym_import_list] = STATE(55),
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(115),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(117),
  },
  [33] = {
    [sym_header_name] = ACTIONS(119),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [34] = {
    [sym__white_space] = ACTIONS(5),
    [sym_comments] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(121),
  },
  [35] = {
    [sym_header_name] = ACTIONS(123),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [36] = {
    [sym_struct_specifier] = STATE(19),
    [sym_retval] = STATE(59),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [sym_type_specifier] = STATE(31),
    [anon_sym_float] = ACTIONS(37),
    [sym__white_space] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(47),
    [anon_sym_union] = ACTIONS(39),
    [anon_sym_uint64_t] = ACTIONS(37),
    [anon_sym_int16_t] = ACTIONS(37),
    [anon_sym_uint32_t] = ACTIONS(37),
    [anon_sym_int64_t] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_unsigned] = ACTIONS(37),
    [sym_identifier] = ACTIONS(37),
    [anon_sym_struct] = ACTIONS(51),
    [anon_sym_enum] = ACTIONS(53),
    [anon_sym_int8_t] = ACTIONS(37),
    [anon_sym_uint16_t] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(45),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [sym_comments] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(37),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_int32_t] = ACTIONS(37),
    [anon_sym_wchar_t] = ACTIONS(37),
    [anon_sym_uint8_t] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(37),
    [anon_sym_size_t] = ACTIONS(37),
  },
  [37] = {
    [anon_sym_float] = ACTIONS(125),
    [anon_sym_union] = ACTIONS(125),
    [anon_sym_uint64_t] = ACTIONS(125),
    [sym_identifier] = ACTIONS(125),
    [anon_sym_RBRACE] = ACTIONS(127),
    [anon_sym_include] = ACTIONS(125),
    [anon_sym_int8_t] = ACTIONS(125),
    [anon_sym_uint16_t] = ACTIONS(125),
    [anon_sym_long] = ACTIONS(125),
    [anon_sym_char] = ACTIONS(125),
    [anon_sym_double] = ACTIONS(125),
    [anon_sym_bool] = ACTIONS(125),
    [sym__white_space] = ACTIONS(5),
    [sym_trusted_prefix_public] = ACTIONS(125),
    [sym_type_qualifier] = ACTIONS(125),
    [anon_sym_from] = ACTIONS(125),
    [anon_sym_int16_t] = ACTIONS(125),
    [anon_sym_uint32_t] = ACTIONS(125),
    [anon_sym_int64_t] = ACTIONS(125),
    [anon_sym_short] = ACTIONS(125),
    [anon_sym_unsigned] = ACTIONS(125),
    [anon_sym_struct] = ACTIONS(125),
    [anon_sym_enum] = ACTIONS(125),
    [sym_comments] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(125),
    [anon_sym_int32_t] = ACTIONS(125),
    [anon_sym_wchar_t] = ACTIONS(125),
    [anon_sym_uint8_t] = ACTIONS(125),
    [anon_sym_int] = ACTIONS(125),
    [anon_sym_size_t] = ACTIONS(125),
  },
  [38] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(129),
    [sym__white_space] = ACTIONS(5),
  },
  [39] = {
    [sym_struct_specifier] = STATE(19),
    [sym_from] = STATE(37),
    [sym_ecall_definition] = STATE(37),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [sym_retval] = STATE(38),
    [aux_sym_trusted_repeat1] = STATE(62),
    [sym_include] = STATE(37),
    [sym_trusted_inner_items] = STATE(62),
    [sym_type_specifier] = STATE(31),
    [anon_sym_float] = ACTIONS(37),
    [anon_sym_union] = ACTIONS(39),
    [anon_sym_uint64_t] = ACTIONS(37),
    [sym_identifier] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(131),
    [anon_sym_include] = ACTIONS(59),
    [anon_sym_int8_t] = ACTIONS(37),
    [anon_sym_uint16_t] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(45),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [anon_sym_bool] = ACTIONS(37),
    [sym__white_space] = ACTIONS(5),
    [sym_trusted_prefix_public] = ACTIONS(61),
    [sym_type_qualifier] = ACTIONS(47),
    [anon_sym_from] = ACTIONS(63),
    [anon_sym_int16_t] = ACTIONS(37),
    [anon_sym_uint32_t] = ACTIONS(37),
    [anon_sym_int64_t] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_unsigned] = ACTIONS(37),
    [anon_sym_struct] = ACTIONS(51),
    [anon_sym_enum] = ACTIONS(53),
    [sym_comments] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(37),
    [anon_sym_int32_t] = ACTIONS(37),
    [anon_sym_wchar_t] = ACTIONS(37),
    [anon_sym_uint8_t] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(37),
    [anon_sym_size_t] = ACTIONS(37),
  },
  [40] = {
    [sym_comments] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(133),
    [sym__white_space] = ACTIONS(5),
  },
  [41] = {
    [sym_pointer_declarator] = STATE(63),
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(135),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(113),
  },
  [42] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(137),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(137),
  },
  [43] = {
    [sym_comments] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(139),
    [sym__white_space] = ACTIONS(5),
  },
  [44] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(141),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(141),
  },
  [45] = {
    [anon_sym_include] = ACTIONS(143),
    [sym_comments] = ACTIONS(5),
    [anon_sym_untrusted] = ACTIONS(143),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_from] = ACTIONS(143),
    [anon_sym_RBRACE] = ACTIONS(143),
    [anon_sym_trusted] = ACTIONS(143),
  },
  [46] = {
    [sym_comments] = ACTIONS(5),
    [sym_new_line] = ACTIONS(145),
    [sym__white_space] = ACTIONS(3),
  },
  [47] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(147),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(147),
  },
  [48] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(149),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(149),
  },
  [49] = {
    [anon_sym_LPAREN] = ACTIONS(151),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [50] = {
    [sym__white_space] = ACTIONS(5),
    [sym_comments] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(153),
  },
  [51] = {
    [sym_struct_specifier] = STATE(19),
    [sym_from] = STATE(28),
    [sym_ocall_definition] = STATE(28),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [sym_retval] = STATE(29),
    [aux_sym_untrusted_repeat1] = STATE(51),
    [sym_include] = STATE(28),
    [sym_untrusted_inner_items] = STATE(51),
    [sym_type_specifier] = STATE(31),
    [anon_sym_float] = ACTIONS(155),
    [anon_sym_union] = ACTIONS(158),
    [anon_sym_uint64_t] = ACTIONS(155),
    [sym_identifier] = ACTIONS(155),
    [anon_sym_RBRACE] = ACTIONS(161),
    [anon_sym_include] = ACTIONS(163),
    [anon_sym_int8_t] = ACTIONS(155),
    [anon_sym_uint16_t] = ACTIONS(155),
    [anon_sym_long] = ACTIONS(166),
    [anon_sym_char] = ACTIONS(155),
    [anon_sym_double] = ACTIONS(155),
    [anon_sym_bool] = ACTIONS(155),
    [sym__white_space] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(169),
    [anon_sym_from] = ACTIONS(172),
    [anon_sym_int16_t] = ACTIONS(155),
    [anon_sym_uint32_t] = ACTIONS(155),
    [anon_sym_int64_t] = ACTIONS(155),
    [anon_sym_short] = ACTIONS(155),
    [anon_sym_unsigned] = ACTIONS(155),
    [anon_sym_struct] = ACTIONS(175),
    [anon_sym_enum] = ACTIONS(178),
    [sym_comments] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(155),
    [anon_sym_int32_t] = ACTIONS(155),
    [anon_sym_wchar_t] = ACTIONS(155),
    [anon_sym_uint8_t] = ACTIONS(155),
    [anon_sym_int] = ACTIONS(155),
    [anon_sym_size_t] = ACTIONS(155),
  },
  [52] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(181),
    [sym__white_space] = ACTIONS(5),
  },
  [53] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(135),
    [sym__white_space] = ACTIONS(5),
  },
  [54] = {
    [aux_sym_import_list_repeat1] = STATE(69),
    [anon_sym_COMMA] = ACTIONS(183),
    [sym_comments] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(185),
    [sym__white_space] = ACTIONS(5),
  },
  [55] = {
    [sym__white_space] = ACTIONS(5),
    [sym_comments] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(187),
  },
  [56] = {
    [sym_comments] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(189),
    [sym__white_space] = ACTIONS(5),
  },
  [57] = {
    [anon_sym_include] = ACTIONS(191),
    [sym_comments] = ACTIONS(5),
    [anon_sym_untrusted] = ACTIONS(191),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_from] = ACTIONS(191),
    [anon_sym_RBRACE] = ACTIONS(191),
    [anon_sym_trusted] = ACTIONS(191),
  },
  [58] = {
    [sym_comments] = ACTIONS(5),
    [sym_new_line] = ACTIONS(193),
    [sym__white_space] = ACTIONS(3),
  },
  [59] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(195),
    [sym__white_space] = ACTIONS(5),
  },
  [60] = {
    [anon_sym_LPAREN] = ACTIONS(197),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [61] = {
    [sym__white_space] = ACTIONS(5),
    [sym_comments] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(199),
  },
  [62] = {
    [sym_struct_specifier] = STATE(19),
    [sym_from] = STATE(37),
    [sym_ecall_definition] = STATE(37),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [sym_retval] = STATE(38),
    [aux_sym_trusted_repeat1] = STATE(62),
    [sym_include] = STATE(37),
    [sym_trusted_inner_items] = STATE(62),
    [sym_type_specifier] = STATE(31),
    [anon_sym_float] = ACTIONS(201),
    [anon_sym_union] = ACTIONS(204),
    [anon_sym_uint64_t] = ACTIONS(201),
    [sym_identifier] = ACTIONS(201),
    [anon_sym_RBRACE] = ACTIONS(207),
    [anon_sym_include] = ACTIONS(209),
    [anon_sym_int8_t] = ACTIONS(201),
    [anon_sym_uint16_t] = ACTIONS(201),
    [anon_sym_long] = ACTIONS(212),
    [anon_sym_char] = ACTIONS(201),
    [anon_sym_double] = ACTIONS(201),
    [anon_sym_bool] = ACTIONS(201),
    [sym__white_space] = ACTIONS(5),
    [sym_trusted_prefix_public] = ACTIONS(215),
    [sym_type_qualifier] = ACTIONS(218),
    [anon_sym_from] = ACTIONS(221),
    [anon_sym_int16_t] = ACTIONS(201),
    [anon_sym_uint32_t] = ACTIONS(201),
    [anon_sym_int64_t] = ACTIONS(201),
    [anon_sym_short] = ACTIONS(201),
    [anon_sym_unsigned] = ACTIONS(201),
    [anon_sym_struct] = ACTIONS(224),
    [anon_sym_enum] = ACTIONS(227),
    [sym_comments] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(201),
    [anon_sym_int32_t] = ACTIONS(201),
    [anon_sym_wchar_t] = ACTIONS(201),
    [anon_sym_uint8_t] = ACTIONS(201),
    [anon_sym_int] = ACTIONS(201),
    [anon_sym_size_t] = ACTIONS(201),
  },
  [63] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(230),
    [sym__white_space] = ACTIONS(5),
  },
  [64] = {
    [sym_import_list] = STATE(76),
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(115),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(232),
  },
  [65] = {
    [anon_sym_float] = ACTIONS(234),
    [anon_sym_union] = ACTIONS(234),
    [anon_sym_uint64_t] = ACTIONS(234),
    [sym_identifier] = ACTIONS(234),
    [anon_sym_RBRACE] = ACTIONS(83),
    [anon_sym_include] = ACTIONS(234),
    [anon_sym_int8_t] = ACTIONS(234),
    [anon_sym_uint16_t] = ACTIONS(234),
    [anon_sym_long] = ACTIONS(234),
    [anon_sym_char] = ACTIONS(234),
    [anon_sym_double] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(234),
    [sym__white_space] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(234),
    [anon_sym_from] = ACTIONS(234),
    [anon_sym_int16_t] = ACTIONS(234),
    [anon_sym_uint32_t] = ACTIONS(234),
    [anon_sym_int64_t] = ACTIONS(234),
    [anon_sym_short] = ACTIONS(234),
    [anon_sym_unsigned] = ACTIONS(234),
    [anon_sym_struct] = ACTIONS(234),
    [anon_sym_enum] = ACTIONS(234),
    [sym_comments] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(234),
    [anon_sym_int32_t] = ACTIONS(234),
    [anon_sym_wchar_t] = ACTIONS(234),
    [anon_sym_uint8_t] = ACTIONS(234),
    [anon_sym_int] = ACTIONS(234),
    [anon_sym_size_t] = ACTIONS(234),
  },
  [66] = {
    [sym_struct_specifier] = STATE(19),
    [sym_parameter] = STATE(80),
    [sym_attribute_list] = STATE(81),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [sym_type_specifier] = STATE(82),
    [anon_sym_float] = ACTIONS(37),
    [sym__white_space] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(236),
    [anon_sym_union] = ACTIONS(39),
    [anon_sym_uint64_t] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(238),
    [anon_sym_int16_t] = ACTIONS(37),
    [anon_sym_uint32_t] = ACTIONS(37),
    [anon_sym_int64_t] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_unsigned] = ACTIONS(37),
    [sym_identifier] = ACTIONS(37),
    [anon_sym_RPAREN] = ACTIONS(240),
    [anon_sym_struct] = ACTIONS(51),
    [anon_sym_enum] = ACTIONS(53),
    [anon_sym_int8_t] = ACTIONS(37),
    [anon_sym_uint16_t] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(45),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [sym_comments] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(37),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_int32_t] = ACTIONS(37),
    [anon_sym_wchar_t] = ACTIONS(37),
    [anon_sym_uint8_t] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(37),
    [anon_sym_size_t] = ACTIONS(37),
  },
  [67] = {
    [anon_sym_include] = ACTIONS(242),
    [sym_comments] = ACTIONS(5),
    [anon_sym_untrusted] = ACTIONS(242),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_from] = ACTIONS(242),
    [anon_sym_RBRACE] = ACTIONS(242),
    [anon_sym_trusted] = ACTIONS(242),
  },
  [68] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(244),
    [sym__white_space] = ACTIONS(5),
  },
  [69] = {
    [aux_sym_import_list_repeat1] = STATE(84),
    [anon_sym_COMMA] = ACTIONS(183),
    [sym_comments] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(246),
    [sym__white_space] = ACTIONS(5),
  },
  [70] = {
    [anon_sym_include] = ACTIONS(248),
    [sym_comments] = ACTIONS(5),
    [anon_sym_untrusted] = ACTIONS(248),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_from] = ACTIONS(248),
    [anon_sym_RBRACE] = ACTIONS(248),
    [anon_sym_trusted] = ACTIONS(248),
  },
  [71] = {
    [sym_import_list] = STATE(85),
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(115),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(250),
  },
  [72] = {
    [anon_sym_float] = ACTIONS(234),
    [anon_sym_union] = ACTIONS(234),
    [anon_sym_uint64_t] = ACTIONS(234),
    [sym_identifier] = ACTIONS(234),
    [anon_sym_RBRACE] = ACTIONS(83),
    [anon_sym_include] = ACTIONS(234),
    [anon_sym_int8_t] = ACTIONS(234),
    [anon_sym_uint16_t] = ACTIONS(234),
    [anon_sym_long] = ACTIONS(234),
    [anon_sym_char] = ACTIONS(234),
    [anon_sym_double] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(234),
    [sym__white_space] = ACTIONS(5),
    [sym_trusted_prefix_public] = ACTIONS(234),
    [sym_type_qualifier] = ACTIONS(234),
    [anon_sym_from] = ACTIONS(234),
    [anon_sym_int16_t] = ACTIONS(234),
    [anon_sym_uint32_t] = ACTIONS(234),
    [anon_sym_int64_t] = ACTIONS(234),
    [anon_sym_short] = ACTIONS(234),
    [anon_sym_unsigned] = ACTIONS(234),
    [anon_sym_struct] = ACTIONS(234),
    [anon_sym_enum] = ACTIONS(234),
    [sym_comments] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(234),
    [anon_sym_int32_t] = ACTIONS(234),
    [anon_sym_wchar_t] = ACTIONS(234),
    [anon_sym_uint8_t] = ACTIONS(234),
    [anon_sym_int] = ACTIONS(234),
    [anon_sym_size_t] = ACTIONS(234),
  },
  [73] = {
    [anon_sym_LPAREN] = ACTIONS(252),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [74] = {
    [sym_struct_specifier] = STATE(19),
    [sym_parameter] = STATE(88),
    [sym_attribute_list] = STATE(81),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [sym_type_specifier] = STATE(82),
    [anon_sym_float] = ACTIONS(37),
    [sym__white_space] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(236),
    [anon_sym_union] = ACTIONS(39),
    [anon_sym_uint64_t] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(238),
    [anon_sym_int16_t] = ACTIONS(37),
    [anon_sym_uint32_t] = ACTIONS(37),
    [anon_sym_int64_t] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_unsigned] = ACTIONS(37),
    [sym_identifier] = ACTIONS(37),
    [anon_sym_RPAREN] = ACTIONS(254),
    [anon_sym_struct] = ACTIONS(51),
    [anon_sym_enum] = ACTIONS(53),
    [anon_sym_int8_t] = ACTIONS(37),
    [anon_sym_uint16_t] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(45),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [sym_comments] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(37),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_int32_t] = ACTIONS(37),
    [anon_sym_wchar_t] = ACTIONS(37),
    [anon_sym_uint8_t] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(37),
    [anon_sym_size_t] = ACTIONS(37),
  },
  [75] = {
    [anon_sym_include] = ACTIONS(256),
    [sym_comments] = ACTIONS(5),
    [anon_sym_untrusted] = ACTIONS(256),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_from] = ACTIONS(256),
    [anon_sym_RBRACE] = ACTIONS(256),
    [anon_sym_trusted] = ACTIONS(256),
  },
  [76] = {
    [sym__white_space] = ACTIONS(5),
    [sym_comments] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(258),
  },
  [77] = {
    [sym_struct_specifier] = STATE(19),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [sym_type_specifier] = STATE(90),
    [anon_sym_float] = ACTIONS(37),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_union] = ACTIONS(39),
    [anon_sym_uint64_t] = ACTIONS(37),
    [anon_sym_int16_t] = ACTIONS(37),
    [anon_sym_uint32_t] = ACTIONS(37),
    [anon_sym_int64_t] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_unsigned] = ACTIONS(37),
    [sym_identifier] = ACTIONS(37),
    [anon_sym_struct] = ACTIONS(51),
    [anon_sym_enum] = ACTIONS(53),
    [anon_sym_int8_t] = ACTIONS(37),
    [anon_sym_uint16_t] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(45),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [sym_comments] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(37),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_int32_t] = ACTIONS(37),
    [anon_sym_wchar_t] = ACTIONS(37),
    [anon_sym_uint8_t] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(37),
    [anon_sym_size_t] = ACTIONS(37),
  },
  [78] = {
    [sym__pointer_attributes] = STATE(93),
    [sym_size_attribute] = STATE(93),
    [sym_count_attribute] = STATE(93),
    [anon_sym_user_check] = ACTIONS(260),
    [anon_sym_readonly] = ACTIONS(260),
    [sym_comments] = ACTIONS(5),
    [anon_sym_string] = ACTIONS(260),
    [anon_sym_size] = ACTIONS(262),
    [anon_sym_isary] = ACTIONS(260),
    [anon_sym_count] = ACTIONS(264),
    [anon_sym_wstring] = ACTIONS(260),
    [anon_sym_out] = ACTIONS(260),
    [anon_sym_isptr] = ACTIONS(260),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_in] = ACTIONS(260),
  },
  [79] = {
    [aux_sym_ocall_definition_repeat1] = STATE(96),
    [sym__untrusted_suffix] = STATE(96),
    [sym_untrusted_suffix_allow] = STATE(97),
    [sym_suffix_propagate_errno] = ACTIONS(266),
    [sym_comments] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(268),
    [anon_sym_allow] = ACTIONS(270),
    [sym_suffix_transition_using_threads] = ACTIONS(266),
    [sym__white_space] = ACTIONS(5),
  },
  [80] = {
    [aux_sym_ecall_definition_repeat1] = STATE(100),
    [anon_sym_COMMA] = ACTIONS(272),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(274),
  },
  [81] = {
    [sym_struct_specifier] = STATE(19),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [sym_type_specifier] = STATE(90),
    [anon_sym_float] = ACTIONS(37),
    [sym__white_space] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(276),
    [anon_sym_union] = ACTIONS(39),
    [anon_sym_uint64_t] = ACTIONS(37),
    [anon_sym_int16_t] = ACTIONS(37),
    [anon_sym_uint32_t] = ACTIONS(37),
    [anon_sym_int64_t] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_unsigned] = ACTIONS(37),
    [sym_identifier] = ACTIONS(37),
    [anon_sym_struct] = ACTIONS(51),
    [anon_sym_enum] = ACTIONS(53),
    [anon_sym_int8_t] = ACTIONS(37),
    [anon_sym_uint16_t] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(45),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [sym_comments] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(37),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_int32_t] = ACTIONS(37),
    [anon_sym_wchar_t] = ACTIONS(37),
    [anon_sym_uint8_t] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(37),
    [anon_sym_size_t] = ACTIONS(37),
  },
  [82] = {
    [sym_pointer_declarator] = STATE(103),
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(278),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(113),
  },
  [83] = {
    [anon_sym_COMMA] = ACTIONS(280),
    [sym_comments] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(280),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(280),
  },
  [84] = {
    [aux_sym_import_list_repeat1] = STATE(84),
    [anon_sym_COMMA] = ACTIONS(282),
    [sym_comments] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(280),
    [sym__white_space] = ACTIONS(5),
  },
  [85] = {
    [sym__white_space] = ACTIONS(5),
    [sym_comments] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(285),
  },
  [86] = {
    [sym_struct_specifier] = STATE(19),
    [sym_parameter] = STATE(106),
    [sym_attribute_list] = STATE(81),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [sym_type_specifier] = STATE(82),
    [anon_sym_float] = ACTIONS(37),
    [sym__white_space] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(236),
    [anon_sym_union] = ACTIONS(39),
    [anon_sym_uint64_t] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(238),
    [anon_sym_int16_t] = ACTIONS(37),
    [anon_sym_uint32_t] = ACTIONS(37),
    [anon_sym_int64_t] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_unsigned] = ACTIONS(37),
    [sym_identifier] = ACTIONS(37),
    [anon_sym_RPAREN] = ACTIONS(287),
    [anon_sym_struct] = ACTIONS(51),
    [anon_sym_enum] = ACTIONS(53),
    [anon_sym_int8_t] = ACTIONS(37),
    [anon_sym_uint16_t] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(45),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [sym_comments] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(37),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_int32_t] = ACTIONS(37),
    [anon_sym_wchar_t] = ACTIONS(37),
    [anon_sym_uint8_t] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(37),
    [anon_sym_size_t] = ACTIONS(37),
  },
  [87] = {
    [sym__trusted_suffix] = STATE(108),
    [aux_sym_ecall_definition_repeat2] = STATE(108),
    [sym_comments] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(289),
    [sym__white_space] = ACTIONS(5),
    [sym_suffix_transition_using_threads] = ACTIONS(291),
  },
  [88] = {
    [aux_sym_ecall_definition_repeat1] = STATE(109),
    [anon_sym_COMMA] = ACTIONS(272),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(287),
  },
  [89] = {
    [anon_sym_float] = ACTIONS(293),
    [anon_sym_union] = ACTIONS(293),
    [anon_sym_uint64_t] = ACTIONS(293),
    [sym_identifier] = ACTIONS(293),
    [anon_sym_RBRACE] = ACTIONS(248),
    [anon_sym_include] = ACTIONS(293),
    [anon_sym_int8_t] = ACTIONS(293),
    [anon_sym_uint16_t] = ACTIONS(293),
    [anon_sym_long] = ACTIONS(293),
    [anon_sym_char] = ACTIONS(293),
    [anon_sym_double] = ACTIONS(293),
    [anon_sym_bool] = ACTIONS(293),
    [sym__white_space] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(293),
    [anon_sym_from] = ACTIONS(293),
    [anon_sym_int16_t] = ACTIONS(293),
    [anon_sym_uint32_t] = ACTIONS(293),
    [anon_sym_int64_t] = ACTIONS(293),
    [anon_sym_short] = ACTIONS(293),
    [anon_sym_unsigned] = ACTIONS(293),
    [anon_sym_struct] = ACTIONS(293),
    [anon_sym_enum] = ACTIONS(293),
    [sym_comments] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(293),
    [anon_sym_int32_t] = ACTIONS(293),
    [anon_sym_wchar_t] = ACTIONS(293),
    [anon_sym_uint8_t] = ACTIONS(293),
    [anon_sym_int] = ACTIONS(293),
    [anon_sym_size_t] = ACTIONS(293),
  },
  [90] = {
    [sym_pointer_declarator] = STATE(111),
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(295),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(113),
  },
  [91] = {
    [anon_sym_EQ] = ACTIONS(297),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [92] = {
    [anon_sym_EQ] = ACTIONS(299),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [93] = {
    [aux_sym_attribute_list_repeat1] = STATE(116),
    [anon_sym_COMMA] = ACTIONS(301),
    [anon_sym_RBRACK] = ACTIONS(303),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [94] = {
    [anon_sym_LPAREN] = ACTIONS(305),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [95] = {
    [anon_sym_float] = ACTIONS(307),
    [anon_sym_union] = ACTIONS(307),
    [anon_sym_uint64_t] = ACTIONS(307),
    [sym_identifier] = ACTIONS(307),
    [anon_sym_RBRACE] = ACTIONS(309),
    [anon_sym_include] = ACTIONS(307),
    [anon_sym_int8_t] = ACTIONS(307),
    [anon_sym_uint16_t] = ACTIONS(307),
    [anon_sym_long] = ACTIONS(307),
    [anon_sym_char] = ACTIONS(307),
    [anon_sym_double] = ACTIONS(307),
    [anon_sym_bool] = ACTIONS(307),
    [sym__white_space] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(307),
    [anon_sym_from] = ACTIONS(307),
    [anon_sym_int16_t] = ACTIONS(307),
    [anon_sym_uint32_t] = ACTIONS(307),
    [anon_sym_int64_t] = ACTIONS(307),
    [anon_sym_short] = ACTIONS(307),
    [anon_sym_unsigned] = ACTIONS(307),
    [anon_sym_struct] = ACTIONS(307),
    [anon_sym_enum] = ACTIONS(307),
    [sym_comments] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(307),
    [anon_sym_int32_t] = ACTIONS(307),
    [anon_sym_wchar_t] = ACTIONS(307),
    [anon_sym_uint8_t] = ACTIONS(307),
    [anon_sym_int] = ACTIONS(307),
    [anon_sym_size_t] = ACTIONS(307),
  },
  [96] = {
    [aux_sym_ocall_definition_repeat1] = STATE(119),
    [sym__untrusted_suffix] = STATE(119),
    [sym_suffix_propagate_errno] = ACTIONS(311),
    [sym_comments] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(313),
    [sym__white_space] = ACTIONS(5),
    [sym_suffix_transition_using_threads] = ACTIONS(311),
  },
  [97] = {
    [aux_sym_ocall_definition_repeat1] = STATE(120),
    [sym__untrusted_suffix] = STATE(120),
    [sym_suffix_propagate_errno] = ACTIONS(315),
    [sym_comments] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(313),
    [sym__white_space] = ACTIONS(5),
    [sym_suffix_transition_using_threads] = ACTIONS(315),
  },
  [98] = {
    [sym_struct_specifier] = STATE(19),
    [sym_parameter] = STATE(121),
    [sym_attribute_list] = STATE(81),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [sym_type_specifier] = STATE(82),
    [anon_sym_float] = ACTIONS(37),
    [sym__white_space] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(236),
    [anon_sym_union] = ACTIONS(39),
    [anon_sym_uint64_t] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(238),
    [anon_sym_int16_t] = ACTIONS(37),
    [anon_sym_uint32_t] = ACTIONS(37),
    [anon_sym_int64_t] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_unsigned] = ACTIONS(37),
    [sym_identifier] = ACTIONS(37),
    [anon_sym_struct] = ACTIONS(51),
    [anon_sym_enum] = ACTIONS(53),
    [anon_sym_int8_t] = ACTIONS(37),
    [anon_sym_uint16_t] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(45),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [sym_comments] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(37),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_int32_t] = ACTIONS(37),
    [anon_sym_wchar_t] = ACTIONS(37),
    [anon_sym_uint8_t] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(37),
    [anon_sym_size_t] = ACTIONS(37),
  },
  [99] = {
    [aux_sym_ocall_definition_repeat1] = STATE(120),
    [sym__untrusted_suffix] = STATE(120),
    [sym_untrusted_suffix_allow] = STATE(122),
    [sym_suffix_propagate_errno] = ACTIONS(315),
    [sym_comments] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(313),
    [anon_sym_allow] = ACTIONS(270),
    [sym_suffix_transition_using_threads] = ACTIONS(315),
    [sym__white_space] = ACTIONS(5),
  },
  [100] = {
    [aux_sym_ecall_definition_repeat1] = STATE(124),
    [anon_sym_COMMA] = ACTIONS(272),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(317),
  },
  [101] = {
    [sym_struct_specifier] = STATE(19),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [sym_type_specifier] = STATE(125),
    [anon_sym_float] = ACTIONS(37),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_union] = ACTIONS(39),
    [anon_sym_uint64_t] = ACTIONS(37),
    [anon_sym_int16_t] = ACTIONS(37),
    [anon_sym_uint32_t] = ACTIONS(37),
    [anon_sym_int64_t] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_unsigned] = ACTIONS(37),
    [sym_identifier] = ACTIONS(37),
    [anon_sym_struct] = ACTIONS(51),
    [anon_sym_enum] = ACTIONS(53),
    [anon_sym_int8_t] = ACTIONS(37),
    [anon_sym_uint16_t] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(45),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [sym_comments] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(37),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_int32_t] = ACTIONS(37),
    [anon_sym_wchar_t] = ACTIONS(37),
    [anon_sym_uint8_t] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(37),
    [anon_sym_size_t] = ACTIONS(37),
  },
  [102] = {
    [anon_sym_COMMA] = ACTIONS(319),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(319),
  },
  [103] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(295),
    [sym__white_space] = ACTIONS(5),
  },
  [104] = {
    [anon_sym_float] = ACTIONS(293),
    [anon_sym_union] = ACTIONS(293),
    [anon_sym_uint64_t] = ACTIONS(293),
    [sym_identifier] = ACTIONS(293),
    [anon_sym_RBRACE] = ACTIONS(248),
    [anon_sym_include] = ACTIONS(293),
    [anon_sym_int8_t] = ACTIONS(293),
    [anon_sym_uint16_t] = ACTIONS(293),
    [anon_sym_long] = ACTIONS(293),
    [anon_sym_char] = ACTIONS(293),
    [anon_sym_double] = ACTIONS(293),
    [anon_sym_bool] = ACTIONS(293),
    [sym__white_space] = ACTIONS(5),
    [sym_trusted_prefix_public] = ACTIONS(293),
    [sym_type_qualifier] = ACTIONS(293),
    [anon_sym_from] = ACTIONS(293),
    [anon_sym_int16_t] = ACTIONS(293),
    [anon_sym_uint32_t] = ACTIONS(293),
    [anon_sym_int64_t] = ACTIONS(293),
    [anon_sym_short] = ACTIONS(293),
    [anon_sym_unsigned] = ACTIONS(293),
    [anon_sym_struct] = ACTIONS(293),
    [anon_sym_enum] = ACTIONS(293),
    [sym_comments] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(293),
    [anon_sym_int32_t] = ACTIONS(293),
    [anon_sym_wchar_t] = ACTIONS(293),
    [anon_sym_uint8_t] = ACTIONS(293),
    [anon_sym_int] = ACTIONS(293),
    [anon_sym_size_t] = ACTIONS(293),
  },
  [105] = {
    [sym__trusted_suffix] = STATE(127),
    [aux_sym_ecall_definition_repeat2] = STATE(127),
    [sym_comments] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(321),
    [sym__white_space] = ACTIONS(5),
    [sym_suffix_transition_using_threads] = ACTIONS(323),
  },
  [106] = {
    [aux_sym_ecall_definition_repeat1] = STATE(129),
    [anon_sym_COMMA] = ACTIONS(272),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(325),
  },
  [107] = {
    [anon_sym_float] = ACTIONS(327),
    [anon_sym_union] = ACTIONS(327),
    [anon_sym_uint64_t] = ACTIONS(327),
    [sym_identifier] = ACTIONS(327),
    [anon_sym_RBRACE] = ACTIONS(329),
    [anon_sym_include] = ACTIONS(327),
    [anon_sym_int8_t] = ACTIONS(327),
    [anon_sym_uint16_t] = ACTIONS(327),
    [anon_sym_long] = ACTIONS(327),
    [anon_sym_char] = ACTIONS(327),
    [anon_sym_double] = ACTIONS(327),
    [anon_sym_bool] = ACTIONS(327),
    [sym__white_space] = ACTIONS(5),
    [sym_trusted_prefix_public] = ACTIONS(327),
    [sym_type_qualifier] = ACTIONS(327),
    [anon_sym_from] = ACTIONS(327),
    [anon_sym_int16_t] = ACTIONS(327),
    [anon_sym_uint32_t] = ACTIONS(327),
    [anon_sym_int64_t] = ACTIONS(327),
    [anon_sym_short] = ACTIONS(327),
    [anon_sym_unsigned] = ACTIONS(327),
    [anon_sym_struct] = ACTIONS(327),
    [anon_sym_enum] = ACTIONS(327),
    [sym_comments] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(327),
    [anon_sym_int32_t] = ACTIONS(327),
    [anon_sym_wchar_t] = ACTIONS(327),
    [anon_sym_uint8_t] = ACTIONS(327),
    [anon_sym_int] = ACTIONS(327),
    [anon_sym_size_t] = ACTIONS(327),
  },
  [108] = {
    [sym__trusted_suffix] = STATE(130),
    [aux_sym_ecall_definition_repeat2] = STATE(130),
    [sym_comments] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(321),
    [sym__white_space] = ACTIONS(5),
    [sym_suffix_transition_using_threads] = ACTIONS(331),
  },
  [109] = {
    [aux_sym_ecall_definition_repeat1] = STATE(124),
    [anon_sym_COMMA] = ACTIONS(272),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(325),
  },
  [110] = {
    [anon_sym_COMMA] = ACTIONS(333),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(333),
  },
  [111] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(335),
    [sym__white_space] = ACTIONS(5),
  },
  [112] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(337),
    [sym__white_space] = ACTIONS(5),
    [sym_number] = ACTIONS(337),
  },
  [113] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(339),
    [sym__white_space] = ACTIONS(5),
    [sym_number] = ACTIONS(339),
  },
  [114] = {
    [sym__pointer_attributes] = STATE(134),
    [sym_size_attribute] = STATE(134),
    [sym_count_attribute] = STATE(134),
    [anon_sym_user_check] = ACTIONS(341),
    [anon_sym_readonly] = ACTIONS(341),
    [sym_comments] = ACTIONS(5),
    [anon_sym_string] = ACTIONS(341),
    [anon_sym_size] = ACTIONS(262),
    [anon_sym_isary] = ACTIONS(341),
    [anon_sym_count] = ACTIONS(264),
    [anon_sym_wstring] = ACTIONS(341),
    [anon_sym_out] = ACTIONS(341),
    [anon_sym_isptr] = ACTIONS(341),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_in] = ACTIONS(341),
  },
  [115] = {
    [anon_sym_float] = ACTIONS(343),
    [sym__white_space] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(343),
    [anon_sym_union] = ACTIONS(343),
    [anon_sym_uint64_t] = ACTIONS(343),
    [anon_sym_int16_t] = ACTIONS(343),
    [anon_sym_uint32_t] = ACTIONS(343),
    [anon_sym_int64_t] = ACTIONS(343),
    [anon_sym_short] = ACTIONS(343),
    [anon_sym_unsigned] = ACTIONS(343),
    [sym_identifier] = ACTIONS(343),
    [anon_sym_struct] = ACTIONS(343),
    [anon_sym_enum] = ACTIONS(343),
    [anon_sym_int8_t] = ACTIONS(343),
    [anon_sym_uint16_t] = ACTIONS(343),
    [anon_sym_long] = ACTIONS(343),
    [anon_sym_char] = ACTIONS(343),
    [anon_sym_double] = ACTIONS(343),
    [sym_comments] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(343),
    [anon_sym_bool] = ACTIONS(343),
    [anon_sym_int32_t] = ACTIONS(343),
    [anon_sym_wchar_t] = ACTIONS(343),
    [anon_sym_uint8_t] = ACTIONS(343),
    [anon_sym_int] = ACTIONS(343),
    [anon_sym_size_t] = ACTIONS(343),
  },
  [116] = {
    [aux_sym_attribute_list_repeat1] = STATE(136),
    [anon_sym_COMMA] = ACTIONS(301),
    [anon_sym_RBRACK] = ACTIONS(345),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [117] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(347),
    [sym__white_space] = ACTIONS(5),
  },
  [118] = {
    [anon_sym_float] = ACTIONS(349),
    [anon_sym_union] = ACTIONS(349),
    [anon_sym_uint64_t] = ACTIONS(349),
    [sym_identifier] = ACTIONS(349),
    [anon_sym_RBRACE] = ACTIONS(351),
    [anon_sym_include] = ACTIONS(349),
    [anon_sym_int8_t] = ACTIONS(349),
    [anon_sym_uint16_t] = ACTIONS(349),
    [anon_sym_long] = ACTIONS(349),
    [anon_sym_char] = ACTIONS(349),
    [anon_sym_double] = ACTIONS(349),
    [anon_sym_bool] = ACTIONS(349),
    [sym__white_space] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(349),
    [anon_sym_from] = ACTIONS(349),
    [anon_sym_int16_t] = ACTIONS(349),
    [anon_sym_uint32_t] = ACTIONS(349),
    [anon_sym_int64_t] = ACTIONS(349),
    [anon_sym_short] = ACTIONS(349),
    [anon_sym_unsigned] = ACTIONS(349),
    [anon_sym_struct] = ACTIONS(349),
    [anon_sym_enum] = ACTIONS(349),
    [sym_comments] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(349),
    [anon_sym_int32_t] = ACTIONS(349),
    [anon_sym_wchar_t] = ACTIONS(349),
    [anon_sym_uint8_t] = ACTIONS(349),
    [anon_sym_int] = ACTIONS(349),
    [anon_sym_size_t] = ACTIONS(349),
  },
  [119] = {
    [aux_sym_ocall_definition_repeat1] = STATE(119),
    [sym__untrusted_suffix] = STATE(119),
    [sym_suffix_propagate_errno] = ACTIONS(353),
    [sym_comments] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(356),
    [sym__white_space] = ACTIONS(5),
    [sym_suffix_transition_using_threads] = ACTIONS(353),
  },
  [120] = {
    [aux_sym_ocall_definition_repeat1] = STATE(119),
    [sym__untrusted_suffix] = STATE(119),
    [sym_suffix_propagate_errno] = ACTIONS(311),
    [sym_comments] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(358),
    [sym__white_space] = ACTIONS(5),
    [sym_suffix_transition_using_threads] = ACTIONS(311),
  },
  [121] = {
    [anon_sym_COMMA] = ACTIONS(360),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(360),
  },
  [122] = {
    [aux_sym_ocall_definition_repeat1] = STATE(139),
    [sym__untrusted_suffix] = STATE(139),
    [sym_suffix_propagate_errno] = ACTIONS(362),
    [sym_comments] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(358),
    [sym__white_space] = ACTIONS(5),
    [sym_suffix_transition_using_threads] = ACTIONS(362),
  },
  [123] = {
    [aux_sym_ocall_definition_repeat1] = STATE(139),
    [sym__untrusted_suffix] = STATE(139),
    [sym_untrusted_suffix_allow] = STATE(140),
    [sym_suffix_propagate_errno] = ACTIONS(362),
    [sym_comments] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(358),
    [anon_sym_allow] = ACTIONS(270),
    [sym_suffix_transition_using_threads] = ACTIONS(362),
    [sym__white_space] = ACTIONS(5),
  },
  [124] = {
    [aux_sym_ecall_definition_repeat1] = STATE(124),
    [anon_sym_COMMA] = ACTIONS(364),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(360),
  },
  [125] = {
    [sym_pointer_declarator] = STATE(141),
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(335),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(113),
  },
  [126] = {
    [anon_sym_float] = ACTIONS(367),
    [anon_sym_union] = ACTIONS(367),
    [anon_sym_uint64_t] = ACTIONS(367),
    [sym_identifier] = ACTIONS(367),
    [anon_sym_RBRACE] = ACTIONS(369),
    [anon_sym_include] = ACTIONS(367),
    [anon_sym_int8_t] = ACTIONS(367),
    [anon_sym_uint16_t] = ACTIONS(367),
    [anon_sym_long] = ACTIONS(367),
    [anon_sym_char] = ACTIONS(367),
    [anon_sym_double] = ACTIONS(367),
    [anon_sym_bool] = ACTIONS(367),
    [sym__white_space] = ACTIONS(5),
    [sym_trusted_prefix_public] = ACTIONS(367),
    [sym_type_qualifier] = ACTIONS(367),
    [anon_sym_from] = ACTIONS(367),
    [anon_sym_int16_t] = ACTIONS(367),
    [anon_sym_uint32_t] = ACTIONS(367),
    [anon_sym_int64_t] = ACTIONS(367),
    [anon_sym_short] = ACTIONS(367),
    [anon_sym_unsigned] = ACTIONS(367),
    [anon_sym_struct] = ACTIONS(367),
    [anon_sym_enum] = ACTIONS(367),
    [sym_comments] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(367),
    [anon_sym_int32_t] = ACTIONS(367),
    [anon_sym_wchar_t] = ACTIONS(367),
    [anon_sym_uint8_t] = ACTIONS(367),
    [anon_sym_int] = ACTIONS(367),
    [anon_sym_size_t] = ACTIONS(367),
  },
  [127] = {
    [sym__trusted_suffix] = STATE(130),
    [aux_sym_ecall_definition_repeat2] = STATE(130),
    [sym_comments] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(371),
    [sym__white_space] = ACTIONS(5),
    [sym_suffix_transition_using_threads] = ACTIONS(331),
  },
  [128] = {
    [sym__trusted_suffix] = STATE(143),
    [aux_sym_ecall_definition_repeat2] = STATE(143),
    [sym_comments] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(371),
    [sym__white_space] = ACTIONS(5),
    [sym_suffix_transition_using_threads] = ACTIONS(373),
  },
  [129] = {
    [aux_sym_ecall_definition_repeat1] = STATE(124),
    [anon_sym_COMMA] = ACTIONS(272),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(375),
  },
  [130] = {
    [sym__trusted_suffix] = STATE(130),
    [aux_sym_ecall_definition_repeat2] = STATE(130),
    [sym_comments] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(377),
    [sym__white_space] = ACTIONS(5),
    [sym_suffix_transition_using_threads] = ACTIONS(379),
  },
  [131] = {
    [anon_sym_COMMA] = ACTIONS(382),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(382),
  },
  [132] = {
    [anon_sym_COMMA] = ACTIONS(384),
    [anon_sym_RBRACK] = ACTIONS(384),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [133] = {
    [anon_sym_COMMA] = ACTIONS(386),
    [anon_sym_RBRACK] = ACTIONS(386),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [134] = {
    [anon_sym_COMMA] = ACTIONS(388),
    [anon_sym_RBRACK] = ACTIONS(388),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [135] = {
    [anon_sym_float] = ACTIONS(390),
    [sym__white_space] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(390),
    [anon_sym_union] = ACTIONS(390),
    [anon_sym_uint64_t] = ACTIONS(390),
    [anon_sym_int16_t] = ACTIONS(390),
    [anon_sym_uint32_t] = ACTIONS(390),
    [anon_sym_int64_t] = ACTIONS(390),
    [anon_sym_short] = ACTIONS(390),
    [anon_sym_unsigned] = ACTIONS(390),
    [sym_identifier] = ACTIONS(390),
    [anon_sym_struct] = ACTIONS(390),
    [anon_sym_enum] = ACTIONS(390),
    [anon_sym_int8_t] = ACTIONS(390),
    [anon_sym_uint16_t] = ACTIONS(390),
    [anon_sym_long] = ACTIONS(390),
    [anon_sym_char] = ACTIONS(390),
    [anon_sym_double] = ACTIONS(390),
    [sym_comments] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(390),
    [anon_sym_bool] = ACTIONS(390),
    [anon_sym_int32_t] = ACTIONS(390),
    [anon_sym_wchar_t] = ACTIONS(390),
    [anon_sym_uint8_t] = ACTIONS(390),
    [anon_sym_int] = ACTIONS(390),
    [anon_sym_size_t] = ACTIONS(390),
  },
  [136] = {
    [aux_sym_attribute_list_repeat1] = STATE(136),
    [anon_sym_COMMA] = ACTIONS(392),
    [anon_sym_RBRACK] = ACTIONS(388),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [137] = {
    [aux_sym_import_list_repeat1] = STATE(146),
    [anon_sym_COMMA] = ACTIONS(183),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(395),
  },
  [138] = {
    [anon_sym_float] = ACTIONS(397),
    [anon_sym_union] = ACTIONS(397),
    [anon_sym_uint64_t] = ACTIONS(397),
    [sym_identifier] = ACTIONS(397),
    [anon_sym_RBRACE] = ACTIONS(399),
    [anon_sym_include] = ACTIONS(397),
    [anon_sym_int8_t] = ACTIONS(397),
    [anon_sym_uint16_t] = ACTIONS(397),
    [anon_sym_long] = ACTIONS(397),
    [anon_sym_char] = ACTIONS(397),
    [anon_sym_double] = ACTIONS(397),
    [anon_sym_bool] = ACTIONS(397),
    [sym__white_space] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(397),
    [anon_sym_from] = ACTIONS(397),
    [anon_sym_int16_t] = ACTIONS(397),
    [anon_sym_uint32_t] = ACTIONS(397),
    [anon_sym_int64_t] = ACTIONS(397),
    [anon_sym_short] = ACTIONS(397),
    [anon_sym_unsigned] = ACTIONS(397),
    [anon_sym_struct] = ACTIONS(397),
    [anon_sym_enum] = ACTIONS(397),
    [sym_comments] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(397),
    [anon_sym_int32_t] = ACTIONS(397),
    [anon_sym_wchar_t] = ACTIONS(397),
    [anon_sym_uint8_t] = ACTIONS(397),
    [anon_sym_int] = ACTIONS(397),
    [anon_sym_size_t] = ACTIONS(397),
  },
  [139] = {
    [aux_sym_ocall_definition_repeat1] = STATE(119),
    [sym__untrusted_suffix] = STATE(119),
    [sym_suffix_propagate_errno] = ACTIONS(311),
    [sym_comments] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(401),
    [sym__white_space] = ACTIONS(5),
    [sym_suffix_transition_using_threads] = ACTIONS(311),
  },
  [140] = {
    [aux_sym_ocall_definition_repeat1] = STATE(148),
    [sym__untrusted_suffix] = STATE(148),
    [sym_suffix_propagate_errno] = ACTIONS(403),
    [sym_comments] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(401),
    [sym__white_space] = ACTIONS(5),
    [sym_suffix_transition_using_threads] = ACTIONS(403),
  },
  [141] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(405),
    [sym__white_space] = ACTIONS(5),
  },
  [142] = {
    [anon_sym_float] = ACTIONS(407),
    [anon_sym_union] = ACTIONS(407),
    [anon_sym_uint64_t] = ACTIONS(407),
    [sym_identifier] = ACTIONS(407),
    [anon_sym_RBRACE] = ACTIONS(409),
    [anon_sym_include] = ACTIONS(407),
    [anon_sym_int8_t] = ACTIONS(407),
    [anon_sym_uint16_t] = ACTIONS(407),
    [anon_sym_long] = ACTIONS(407),
    [anon_sym_char] = ACTIONS(407),
    [anon_sym_double] = ACTIONS(407),
    [anon_sym_bool] = ACTIONS(407),
    [sym__white_space] = ACTIONS(5),
    [sym_trusted_prefix_public] = ACTIONS(407),
    [sym_type_qualifier] = ACTIONS(407),
    [anon_sym_from] = ACTIONS(407),
    [anon_sym_int16_t] = ACTIONS(407),
    [anon_sym_uint32_t] = ACTIONS(407),
    [anon_sym_int64_t] = ACTIONS(407),
    [anon_sym_short] = ACTIONS(407),
    [anon_sym_unsigned] = ACTIONS(407),
    [anon_sym_struct] = ACTIONS(407),
    [anon_sym_enum] = ACTIONS(407),
    [sym_comments] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(407),
    [anon_sym_int32_t] = ACTIONS(407),
    [anon_sym_wchar_t] = ACTIONS(407),
    [anon_sym_uint8_t] = ACTIONS(407),
    [anon_sym_int] = ACTIONS(407),
    [anon_sym_size_t] = ACTIONS(407),
  },
  [143] = {
    [sym__trusted_suffix] = STATE(130),
    [aux_sym_ecall_definition_repeat2] = STATE(130),
    [sym_comments] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(411),
    [sym__white_space] = ACTIONS(5),
    [sym_suffix_transition_using_threads] = ACTIONS(331),
  },
  [144] = {
    [sym__trusted_suffix] = STATE(151),
    [aux_sym_ecall_definition_repeat2] = STATE(151),
    [sym_comments] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(411),
    [sym__white_space] = ACTIONS(5),
    [sym_suffix_transition_using_threads] = ACTIONS(413),
  },
  [145] = {
    [sym_suffix_propagate_errno] = ACTIONS(415),
    [sym_comments] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(415),
    [sym__white_space] = ACTIONS(5),
    [sym_suffix_transition_using_threads] = ACTIONS(415),
  },
  [146] = {
    [aux_sym_import_list_repeat1] = STATE(153),
    [anon_sym_COMMA] = ACTIONS(183),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(417),
  },
  [147] = {
    [anon_sym_float] = ACTIONS(419),
    [anon_sym_union] = ACTIONS(419),
    [anon_sym_uint64_t] = ACTIONS(419),
    [sym_identifier] = ACTIONS(419),
    [anon_sym_RBRACE] = ACTIONS(421),
    [anon_sym_include] = ACTIONS(419),
    [anon_sym_int8_t] = ACTIONS(419),
    [anon_sym_uint16_t] = ACTIONS(419),
    [anon_sym_long] = ACTIONS(419),
    [anon_sym_char] = ACTIONS(419),
    [anon_sym_double] = ACTIONS(419),
    [anon_sym_bool] = ACTIONS(419),
    [sym__white_space] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(419),
    [anon_sym_from] = ACTIONS(419),
    [anon_sym_int16_t] = ACTIONS(419),
    [anon_sym_uint32_t] = ACTIONS(419),
    [anon_sym_int64_t] = ACTIONS(419),
    [anon_sym_short] = ACTIONS(419),
    [anon_sym_unsigned] = ACTIONS(419),
    [anon_sym_struct] = ACTIONS(419),
    [anon_sym_enum] = ACTIONS(419),
    [sym_comments] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(419),
    [anon_sym_int32_t] = ACTIONS(419),
    [anon_sym_wchar_t] = ACTIONS(419),
    [anon_sym_uint8_t] = ACTIONS(419),
    [anon_sym_int] = ACTIONS(419),
    [anon_sym_size_t] = ACTIONS(419),
  },
  [148] = {
    [aux_sym_ocall_definition_repeat1] = STATE(119),
    [sym__untrusted_suffix] = STATE(119),
    [sym_suffix_propagate_errno] = ACTIONS(311),
    [sym_comments] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(423),
    [sym__white_space] = ACTIONS(5),
    [sym_suffix_transition_using_threads] = ACTIONS(311),
  },
  [149] = {
    [anon_sym_COMMA] = ACTIONS(425),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(425),
  },
  [150] = {
    [anon_sym_float] = ACTIONS(427),
    [anon_sym_union] = ACTIONS(427),
    [anon_sym_uint64_t] = ACTIONS(427),
    [sym_identifier] = ACTIONS(427),
    [anon_sym_RBRACE] = ACTIONS(429),
    [anon_sym_include] = ACTIONS(427),
    [anon_sym_int8_t] = ACTIONS(427),
    [anon_sym_uint16_t] = ACTIONS(427),
    [anon_sym_long] = ACTIONS(427),
    [anon_sym_char] = ACTIONS(427),
    [anon_sym_double] = ACTIONS(427),
    [anon_sym_bool] = ACTIONS(427),
    [sym__white_space] = ACTIONS(5),
    [sym_trusted_prefix_public] = ACTIONS(427),
    [sym_type_qualifier] = ACTIONS(427),
    [anon_sym_from] = ACTIONS(427),
    [anon_sym_int16_t] = ACTIONS(427),
    [anon_sym_uint32_t] = ACTIONS(427),
    [anon_sym_int64_t] = ACTIONS(427),
    [anon_sym_short] = ACTIONS(427),
    [anon_sym_unsigned] = ACTIONS(427),
    [anon_sym_struct] = ACTIONS(427),
    [anon_sym_enum] = ACTIONS(427),
    [sym_comments] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(427),
    [anon_sym_int32_t] = ACTIONS(427),
    [anon_sym_wchar_t] = ACTIONS(427),
    [anon_sym_uint8_t] = ACTIONS(427),
    [anon_sym_int] = ACTIONS(427),
    [anon_sym_size_t] = ACTIONS(427),
  },
  [151] = {
    [sym__trusted_suffix] = STATE(130),
    [aux_sym_ecall_definition_repeat2] = STATE(130),
    [sym_comments] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(431),
    [sym__white_space] = ACTIONS(5),
    [sym_suffix_transition_using_threads] = ACTIONS(331),
  },
  [152] = {
    [sym_suffix_propagate_errno] = ACTIONS(433),
    [sym_comments] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(433),
    [sym__white_space] = ACTIONS(5),
    [sym_suffix_transition_using_threads] = ACTIONS(433),
  },
  [153] = {
    [aux_sym_import_list_repeat1] = STATE(153),
    [anon_sym_COMMA] = ACTIONS(282),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(280),
  },
  [154] = {
    [anon_sym_float] = ACTIONS(435),
    [anon_sym_union] = ACTIONS(435),
    [anon_sym_uint64_t] = ACTIONS(435),
    [sym_identifier] = ACTIONS(435),
    [anon_sym_RBRACE] = ACTIONS(437),
    [anon_sym_include] = ACTIONS(435),
    [anon_sym_int8_t] = ACTIONS(435),
    [anon_sym_uint16_t] = ACTIONS(435),
    [anon_sym_long] = ACTIONS(435),
    [anon_sym_char] = ACTIONS(435),
    [anon_sym_double] = ACTIONS(435),
    [anon_sym_bool] = ACTIONS(435),
    [sym__white_space] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(435),
    [anon_sym_from] = ACTIONS(435),
    [anon_sym_int16_t] = ACTIONS(435),
    [anon_sym_uint32_t] = ACTIONS(435),
    [anon_sym_int64_t] = ACTIONS(435),
    [anon_sym_short] = ACTIONS(435),
    [anon_sym_unsigned] = ACTIONS(435),
    [anon_sym_struct] = ACTIONS(435),
    [anon_sym_enum] = ACTIONS(435),
    [sym_comments] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(435),
    [anon_sym_int32_t] = ACTIONS(435),
    [anon_sym_wchar_t] = ACTIONS(435),
    [anon_sym_uint8_t] = ACTIONS(435),
    [anon_sym_int] = ACTIONS(435),
    [anon_sym_size_t] = ACTIONS(435),
  },
  [155] = {
    [anon_sym_float] = ACTIONS(439),
    [anon_sym_union] = ACTIONS(439),
    [anon_sym_uint64_t] = ACTIONS(439),
    [sym_identifier] = ACTIONS(439),
    [anon_sym_RBRACE] = ACTIONS(441),
    [anon_sym_include] = ACTIONS(439),
    [anon_sym_int8_t] = ACTIONS(439),
    [anon_sym_uint16_t] = ACTIONS(439),
    [anon_sym_long] = ACTIONS(439),
    [anon_sym_char] = ACTIONS(439),
    [anon_sym_double] = ACTIONS(439),
    [anon_sym_bool] = ACTIONS(439),
    [sym__white_space] = ACTIONS(5),
    [sym_trusted_prefix_public] = ACTIONS(439),
    [sym_type_qualifier] = ACTIONS(439),
    [anon_sym_from] = ACTIONS(439),
    [anon_sym_int16_t] = ACTIONS(439),
    [anon_sym_uint32_t] = ACTIONS(439),
    [anon_sym_int64_t] = ACTIONS(439),
    [anon_sym_short] = ACTIONS(439),
    [anon_sym_unsigned] = ACTIONS(439),
    [anon_sym_struct] = ACTIONS(439),
    [anon_sym_enum] = ACTIONS(439),
    [sym_comments] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(439),
    [anon_sym_int32_t] = ACTIONS(439),
    [anon_sym_wchar_t] = ACTIONS(439),
    [anon_sym_uint8_t] = ACTIONS(439),
    [anon_sym_int] = ACTIONS(439),
    [anon_sym_size_t] = ACTIONS(439),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [13] = {.count = 1, .reusable = true}, SHIFT(5),
  [15] = {.count = 1, .reusable = true}, SHIFT(6),
  [17] = {.count = 1, .reusable = true}, SHIFT(7),
  [19] = {.count = 1, .reusable = true}, SHIFT(8),
  [21] = {.count = 1, .reusable = true}, SHIFT(9),
  [23] = {.count = 1, .reusable = true}, SHIFT(11),
  [25] = {.count = 1, .reusable = true}, SHIFT(12),
  [27] = {.count = 1, .reusable = true}, SHIFT(13),
  [29] = {.count = 1, .reusable = true}, SHIFT(14),
  [31] = {.count = 1, .reusable = true}, SHIFT(15),
  [33] = {.count = 1, .reusable = true}, SHIFT(16),
  [35] = {.count = 1, .reusable = true}, SHIFT(18),
  [37] = {.count = 1, .reusable = false}, SHIFT(19),
  [39] = {.count = 1, .reusable = false}, SHIFT(21),
  [41] = {.count = 1, .reusable = true}, SHIFT(24),
  [43] = {.count = 1, .reusable = false}, SHIFT(25),
  [45] = {.count = 1, .reusable = false}, SHIFT(26),
  [47] = {.count = 1, .reusable = false}, SHIFT(20),
  [49] = {.count = 1, .reusable = false}, SHIFT(22),
  [51] = {.count = 1, .reusable = false}, SHIFT(23),
  [53] = {.count = 1, .reusable = false}, SHIFT(27),
  [55] = {.count = 1, .reusable = true}, SHIFT(32),
  [57] = {.count = 1, .reusable = true}, SHIFT(34),
  [59] = {.count = 1, .reusable = false}, SHIFT(35),
  [61] = {.count = 1, .reusable = false}, SHIFT(36),
  [63] = {.count = 1, .reusable = false}, SHIFT(33),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 4),
  [67] = {.count = 1, .reusable = true}, SHIFT(40),
  [69] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [72] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [75] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [78] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [80] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_include, 3),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_type_specifier, 1),
  [87] = {.count = 1, .reusable = true}, SHIFT(42),
  [89] = {.count = 1, .reusable = true}, SHIFT(43),
  [91] = {.count = 1, .reusable = true}, SHIFT(44),
  [93] = {.count = 1, .reusable = true}, SHIFT(45),
  [95] = {.count = 1, .reusable = true}, SHIFT(46),
  [97] = {.count = 1, .reusable = false}, REDUCE(sym_type_specifier, 1),
  [99] = {.count = 1, .reusable = false}, SHIFT(47),
  [101] = {.count = 1, .reusable = true}, SHIFT(48),
  [103] = {.count = 1, .reusable = false}, REDUCE(sym_untrusted_inner_items, 1),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_untrusted_inner_items, 1),
  [107] = {.count = 1, .reusable = true}, SHIFT(49),
  [109] = {.count = 1, .reusable = true}, SHIFT(50),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_retval, 1),
  [113] = {.count = 1, .reusable = true}, SHIFT(52),
  [115] = {.count = 1, .reusable = true}, SHIFT(54),
  [117] = {.count = 1, .reusable = true}, SHIFT(55),
  [119] = {.count = 1, .reusable = true}, SHIFT(56),
  [121] = {.count = 1, .reusable = true}, SHIFT(57),
  [123] = {.count = 1, .reusable = true}, SHIFT(58),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym_trusted_inner_items, 1),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_trusted_inner_items, 1),
  [129] = {.count = 1, .reusable = true}, SHIFT(60),
  [131] = {.count = 1, .reusable = true}, SHIFT(61),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 5),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_retval, 2),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_union_specifier, 2),
  [139] = {.count = 1, .reusable = true}, SHIFT(64),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_struct_specifier, 2),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_untrusted, 4),
  [145] = {.count = 1, .reusable = true}, SHIFT(65),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_type_specifier, 2),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_enum_specifier, 2),
  [151] = {.count = 1, .reusable = true}, SHIFT(66),
  [153] = {.count = 1, .reusable = true}, SHIFT(67),
  [155] = {.count = 2, .reusable = false}, REDUCE(aux_sym_untrusted_repeat1, 2), SHIFT_REPEAT(19),
  [158] = {.count = 2, .reusable = false}, REDUCE(aux_sym_untrusted_repeat1, 2), SHIFT_REPEAT(21),
  [161] = {.count = 1, .reusable = true}, REDUCE(aux_sym_untrusted_repeat1, 2),
  [163] = {.count = 2, .reusable = false}, REDUCE(aux_sym_untrusted_repeat1, 2), SHIFT_REPEAT(25),
  [166] = {.count = 2, .reusable = false}, REDUCE(aux_sym_untrusted_repeat1, 2), SHIFT_REPEAT(26),
  [169] = {.count = 2, .reusable = false}, REDUCE(aux_sym_untrusted_repeat1, 2), SHIFT_REPEAT(20),
  [172] = {.count = 2, .reusable = false}, REDUCE(aux_sym_untrusted_repeat1, 2), SHIFT_REPEAT(22),
  [175] = {.count = 2, .reusable = false}, REDUCE(aux_sym_untrusted_repeat1, 2), SHIFT_REPEAT(23),
  [178] = {.count = 2, .reusable = false}, REDUCE(aux_sym_untrusted_repeat1, 2), SHIFT_REPEAT(27),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_pointer_declarator, 1),
  [183] = {.count = 1, .reusable = true}, SHIFT(68),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_import_list, 1),
  [187] = {.count = 1, .reusable = true}, SHIFT(70),
  [189] = {.count = 1, .reusable = true}, SHIFT(71),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_trusted, 4),
  [193] = {.count = 1, .reusable = true}, SHIFT(72),
  [195] = {.count = 1, .reusable = true}, SHIFT(73),
  [197] = {.count = 1, .reusable = true}, SHIFT(74),
  [199] = {.count = 1, .reusable = true}, SHIFT(75),
  [201] = {.count = 2, .reusable = false}, REDUCE(aux_sym_trusted_repeat1, 2), SHIFT_REPEAT(19),
  [204] = {.count = 2, .reusable = false}, REDUCE(aux_sym_trusted_repeat1, 2), SHIFT_REPEAT(21),
  [207] = {.count = 1, .reusable = true}, REDUCE(aux_sym_trusted_repeat1, 2),
  [209] = {.count = 2, .reusable = false}, REDUCE(aux_sym_trusted_repeat1, 2), SHIFT_REPEAT(35),
  [212] = {.count = 2, .reusable = false}, REDUCE(aux_sym_trusted_repeat1, 2), SHIFT_REPEAT(26),
  [215] = {.count = 2, .reusable = false}, REDUCE(aux_sym_trusted_repeat1, 2), SHIFT_REPEAT(36),
  [218] = {.count = 2, .reusable = false}, REDUCE(aux_sym_trusted_repeat1, 2), SHIFT_REPEAT(20),
  [221] = {.count = 2, .reusable = false}, REDUCE(aux_sym_trusted_repeat1, 2), SHIFT_REPEAT(33),
  [224] = {.count = 2, .reusable = false}, REDUCE(aux_sym_trusted_repeat1, 2), SHIFT_REPEAT(23),
  [227] = {.count = 2, .reusable = false}, REDUCE(aux_sym_trusted_repeat1, 2), SHIFT_REPEAT(27),
  [230] = {.count = 1, .reusable = true}, REDUCE(sym_retval, 3),
  [232] = {.count = 1, .reusable = true}, SHIFT(76),
  [234] = {.count = 1, .reusable = false}, REDUCE(sym_include, 3),
  [236] = {.count = 1, .reusable = false}, SHIFT(77),
  [238] = {.count = 1, .reusable = true}, SHIFT(78),
  [240] = {.count = 1, .reusable = true}, SHIFT(79),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym_untrusted, 5),
  [244] = {.count = 1, .reusable = true}, SHIFT(83),
  [246] = {.count = 1, .reusable = true}, REDUCE(sym_import_list, 2),
  [248] = {.count = 1, .reusable = true}, REDUCE(sym_from, 5),
  [250] = {.count = 1, .reusable = true}, SHIFT(85),
  [252] = {.count = 1, .reusable = true}, SHIFT(86),
  [254] = {.count = 1, .reusable = true}, SHIFT(87),
  [256] = {.count = 1, .reusable = true}, REDUCE(sym_trusted, 5),
  [258] = {.count = 1, .reusable = true}, SHIFT(89),
  [260] = {.count = 1, .reusable = true}, SHIFT(93),
  [262] = {.count = 1, .reusable = true}, SHIFT(91),
  [264] = {.count = 1, .reusable = true}, SHIFT(92),
  [266] = {.count = 1, .reusable = true}, SHIFT(96),
  [268] = {.count = 1, .reusable = true}, SHIFT(95),
  [270] = {.count = 1, .reusable = true}, SHIFT(94),
  [272] = {.count = 1, .reusable = true}, SHIFT(98),
  [274] = {.count = 1, .reusable = true}, SHIFT(99),
  [276] = {.count = 1, .reusable = false}, SHIFT(101),
  [278] = {.count = 1, .reusable = true}, SHIFT(102),
  [280] = {.count = 1, .reusable = true}, REDUCE(aux_sym_import_list_repeat1, 2),
  [282] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_list_repeat1, 2), SHIFT_REPEAT(68),
  [285] = {.count = 1, .reusable = true}, SHIFT(104),
  [287] = {.count = 1, .reusable = true}, SHIFT(105),
  [289] = {.count = 1, .reusable = true}, SHIFT(107),
  [291] = {.count = 1, .reusable = true}, SHIFT(108),
  [293] = {.count = 1, .reusable = false}, REDUCE(sym_from, 5),
  [295] = {.count = 1, .reusable = true}, SHIFT(110),
  [297] = {.count = 1, .reusable = true}, SHIFT(112),
  [299] = {.count = 1, .reusable = true}, SHIFT(113),
  [301] = {.count = 1, .reusable = true}, SHIFT(114),
  [303] = {.count = 1, .reusable = true}, SHIFT(115),
  [305] = {.count = 1, .reusable = true}, SHIFT(117),
  [307] = {.count = 1, .reusable = false}, REDUCE(sym_ocall_definition, 5),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym_ocall_definition, 5),
  [311] = {.count = 1, .reusable = true}, SHIFT(119),
  [313] = {.count = 1, .reusable = true}, SHIFT(118),
  [315] = {.count = 1, .reusable = true}, SHIFT(120),
  [317] = {.count = 1, .reusable = true}, SHIFT(123),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [321] = {.count = 1, .reusable = true}, SHIFT(126),
  [323] = {.count = 1, .reusable = true}, SHIFT(127),
  [325] = {.count = 1, .reusable = true}, SHIFT(128),
  [327] = {.count = 1, .reusable = false}, REDUCE(sym_ecall_definition, 5),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym_ecall_definition, 5),
  [331] = {.count = 1, .reusable = true}, SHIFT(130),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 3),
  [335] = {.count = 1, .reusable = true}, SHIFT(131),
  [337] = {.count = 1, .reusable = true}, SHIFT(132),
  [339] = {.count = 1, .reusable = true}, SHIFT(133),
  [341] = {.count = 1, .reusable = true}, SHIFT(134),
  [343] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_list, 3),
  [345] = {.count = 1, .reusable = true}, SHIFT(135),
  [347] = {.count = 1, .reusable = true}, SHIFT(137),
  [349] = {.count = 1, .reusable = false}, REDUCE(sym_ocall_definition, 6),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym_ocall_definition, 6),
  [353] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ocall_definition_repeat1, 2), SHIFT_REPEAT(119),
  [356] = {.count = 1, .reusable = true}, REDUCE(aux_sym_ocall_definition_repeat1, 2),
  [358] = {.count = 1, .reusable = true}, SHIFT(138),
  [360] = {.count = 1, .reusable = true}, REDUCE(aux_sym_ecall_definition_repeat1, 2),
  [362] = {.count = 1, .reusable = true}, SHIFT(139),
  [364] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ecall_definition_repeat1, 2), SHIFT_REPEAT(98),
  [367] = {.count = 1, .reusable = false}, REDUCE(sym_ecall_definition, 6),
  [369] = {.count = 1, .reusable = true}, REDUCE(sym_ecall_definition, 6),
  [371] = {.count = 1, .reusable = true}, SHIFT(142),
  [373] = {.count = 1, .reusable = true}, SHIFT(143),
  [375] = {.count = 1, .reusable = true}, SHIFT(144),
  [377] = {.count = 1, .reusable = true}, REDUCE(aux_sym_ecall_definition_repeat2, 2),
  [379] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ecall_definition_repeat2, 2), SHIFT_REPEAT(130),
  [382] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 4),
  [384] = {.count = 1, .reusable = true}, REDUCE(sym_size_attribute, 3),
  [386] = {.count = 1, .reusable = true}, REDUCE(sym_count_attribute, 3),
  [388] = {.count = 1, .reusable = true}, REDUCE(aux_sym_attribute_list_repeat1, 2),
  [390] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_list, 4),
  [392] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attribute_list_repeat1, 2), SHIFT_REPEAT(114),
  [395] = {.count = 1, .reusable = true}, SHIFT(145),
  [397] = {.count = 1, .reusable = false}, REDUCE(sym_ocall_definition, 7),
  [399] = {.count = 1, .reusable = true}, REDUCE(sym_ocall_definition, 7),
  [401] = {.count = 1, .reusable = true}, SHIFT(147),
  [403] = {.count = 1, .reusable = true}, SHIFT(148),
  [405] = {.count = 1, .reusable = true}, SHIFT(149),
  [407] = {.count = 1, .reusable = false}, REDUCE(sym_ecall_definition, 7),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym_ecall_definition, 7),
  [411] = {.count = 1, .reusable = true}, SHIFT(150),
  [413] = {.count = 1, .reusable = true}, SHIFT(151),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym_untrusted_suffix_allow, 4),
  [417] = {.count = 1, .reusable = true}, SHIFT(152),
  [419] = {.count = 1, .reusable = false}, REDUCE(sym_ocall_definition, 8),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym_ocall_definition, 8),
  [423] = {.count = 1, .reusable = true}, SHIFT(154),
  [425] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 5),
  [427] = {.count = 1, .reusable = false}, REDUCE(sym_ecall_definition, 8),
  [429] = {.count = 1, .reusable = true}, REDUCE(sym_ecall_definition, 8),
  [431] = {.count = 1, .reusable = true}, SHIFT(155),
  [433] = {.count = 1, .reusable = true}, REDUCE(sym_untrusted_suffix_allow, 5),
  [435] = {.count = 1, .reusable = false}, REDUCE(sym_ocall_definition, 9),
  [437] = {.count = 1, .reusable = true}, REDUCE(sym_ocall_definition, 9),
  [439] = {.count = 1, .reusable = false}, REDUCE(sym_ecall_definition, 9),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_ecall_definition, 9),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_edl() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
