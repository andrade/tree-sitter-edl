#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 136
#define SYMBOL_COUNT 87
#define ALIAS_COUNT 0
#define TOKEN_COUNT 58
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8

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
  anon_sym_foo = 34,
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
  anon_sym_isptr = 45,
  anon_sym_readonly = 46,
  anon_sym_size = 47,
  anon_sym_EQ = 48,
  anon_sym_count = 49,
  sym_trusted_prefix = 50,
  anon_sym_allow = 51,
  sym_identifier = 52,
  sym_string = 53,
  sym_number = 54,
  sym_comments = 55,
  sym_new_line = 56,
  sym__white_space = 57,
  sym_source_file = 58,
  sym__main_item = 59,
  sym_include = 60,
  sym_from = 61,
  sym_import_list = 62,
  sym_trusted = 63,
  sym_untrusted = 64,
  sym_trusted_inner_items = 65,
  sym_untrusted_inner_items = 66,
  sym_ecall_definition = 67,
  sym_ocall_definition = 68,
  sym_retval = 69,
  sym_parameter = 70,
  sym_type_specifier = 71,
  sym_struct_specifier = 72,
  sym_union_specifier = 73,
  sym_enum_specifier = 74,
  sym_pointer_declarator = 75,
  sym_attribute_list = 76,
  sym__pointer_attributes = 77,
  sym_size_attribute = 78,
  sym_count_attribute = 79,
  sym_untrusted_suffix = 80,
  aux_sym_source_file_repeat1 = 81,
  aux_sym_import_list_repeat1 = 82,
  aux_sym_trusted_repeat1 = 83,
  aux_sym_untrusted_repeat1 = 84,
  aux_sym_ecall_definition_repeat1 = 85,
  aux_sym_attribute_list_repeat1 = 86,
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
  [anon_sym_foo] = "foo",
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
  [anon_sym_isptr] = "isptr",
  [anon_sym_readonly] = "readonly",
  [anon_sym_size] = "size",
  [anon_sym_EQ] = "=",
  [anon_sym_count] = "count",
  [sym_trusted_prefix] = "trusted_prefix",
  [anon_sym_allow] = "allow",
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
  [sym_untrusted_suffix] = "untrusted_suffix",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_import_list_repeat1] = "import_list_repeat1",
  [aux_sym_trusted_repeat1] = "trusted_repeat1",
  [aux_sym_untrusted_repeat1] = "untrusted_repeat1",
  [aux_sym_ecall_definition_repeat1] = "ecall_definition_repeat1",
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
  [anon_sym_foo] = {
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
  [sym_trusted_prefix] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_allow] = {
    .visible = true,
    .named = false,
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
  [sym_untrusted_suffix] = {
    .visible = true,
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
      if (lookahead == 'c')
        ADVANCE(16);
      if (lookahead == 'd')
        ADVANCE(17);
      if (lookahead == 'e')
        ADVANCE(18);
      if (lookahead == 'f')
        ADVANCE(19);
      if (lookahead == 'i')
        ADVANCE(20);
      if (lookahead == 'l')
        ADVANCE(21);
      if (lookahead == 'o')
        ADVANCE(22);
      if (lookahead == 'p')
        ADVANCE(23);
      if (lookahead == 'r')
        ADVANCE(24);
      if (lookahead == 's')
        ADVANCE(25);
      if (lookahead == 't')
        ADVANCE(26);
      if (lookahead == 'u')
        ADVANCE(27);
      if (lookahead == 'v')
        ADVANCE(28);
      if (lookahead == 'w')
        ADVANCE(29);
      if (lookahead == '{')
        ADVANCE(30);
      if (lookahead == '}')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(32);
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
        ADVANCE(33);
      if (lookahead != 0)
        ADVANCE(34);
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
        ADVANCE(35);
      if (lookahead == '/')
        ADVANCE(36);
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
        ADVANCE(37);
      END_STATE();
    case 16:
      if (lookahead == 'h')
        ADVANCE(38);
      if (lookahead == 'o')
        ADVANCE(39);
      END_STATE();
    case 17:
      if (lookahead == 'o')
        ADVANCE(40);
      END_STATE();
    case 18:
      if (lookahead == 'n')
        ADVANCE(41);
      END_STATE();
    case 19:
      if (lookahead == 'l')
        ADVANCE(42);
      if (lookahead == 'o')
        ADVANCE(43);
      if (lookahead == 'r')
        ADVANCE(44);
      END_STATE();
    case 20:
      if (lookahead == 'm')
        ADVANCE(45);
      if (lookahead == 'n')
        ADVANCE(46);
      if (lookahead == 's')
        ADVANCE(47);
      END_STATE();
    case 21:
      if (lookahead == 'o')
        ADVANCE(48);
      END_STATE();
    case 22:
      if (lookahead == 'u')
        ADVANCE(49);
      END_STATE();
    case 23:
      if (lookahead == 'u')
        ADVANCE(50);
      END_STATE();
    case 24:
      if (lookahead == 'e')
        ADVANCE(51);
      END_STATE();
    case 25:
      if (lookahead == 'h')
        ADVANCE(52);
      if (lookahead == 'i')
        ADVANCE(53);
      if (lookahead == 't')
        ADVANCE(54);
      END_STATE();
    case 26:
      if (lookahead == 'r')
        ADVANCE(55);
      END_STATE();
    case 27:
      if (lookahead == 'i')
        ADVANCE(56);
      if (lookahead == 'n')
        ADVANCE(57);
      if (lookahead == 's')
        ADVANCE(58);
      END_STATE();
    case 28:
      if (lookahead == 'o')
        ADVANCE(59);
      END_STATE();
    case 29:
      if (lookahead == 'c')
        ADVANCE(60);
      if (lookahead == 's')
        ADVANCE(61);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 34:
      if (lookahead == '"')
        ADVANCE(62);
      if (lookahead != 0)
        ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '*')
        ADVANCE(63);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_comments);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == 'l')
        ADVANCE(64);
      END_STATE();
    case 38:
      if (lookahead == 'a')
        ADVANCE(65);
      END_STATE();
    case 39:
      if (lookahead == 'n')
        ADVANCE(66);
      if (lookahead == 'u')
        ADVANCE(67);
      END_STATE();
    case 40:
      if (lookahead == 'u')
        ADVANCE(68);
      END_STATE();
    case 41:
      if (lookahead == 'c')
        ADVANCE(69);
      if (lookahead == 'u')
        ADVANCE(70);
      END_STATE();
    case 42:
      if (lookahead == 'o')
        ADVANCE(71);
      END_STATE();
    case 43:
      if (lookahead == 'o')
        ADVANCE(72);
      END_STATE();
    case 44:
      if (lookahead == 'o')
        ADVANCE(73);
      END_STATE();
    case 45:
      if (lookahead == 'p')
        ADVANCE(74);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c')
        ADVANCE(75);
      if (lookahead == 't')
        ADVANCE(76);
      END_STATE();
    case 47:
      if (lookahead == 'p')
        ADVANCE(77);
      END_STATE();
    case 48:
      if (lookahead == 'n')
        ADVANCE(78);
      END_STATE();
    case 49:
      if (lookahead == 't')
        ADVANCE(79);
      END_STATE();
    case 50:
      if (lookahead == 'b')
        ADVANCE(80);
      END_STATE();
    case 51:
      if (lookahead == 'a')
        ADVANCE(81);
      END_STATE();
    case 52:
      if (lookahead == 'o')
        ADVANCE(82);
      END_STATE();
    case 53:
      if (lookahead == 'z')
        ADVANCE(83);
      END_STATE();
    case 54:
      if (lookahead == 'r')
        ADVANCE(84);
      END_STATE();
    case 55:
      if (lookahead == 'u')
        ADVANCE(85);
      END_STATE();
    case 56:
      if (lookahead == 'n')
        ADVANCE(86);
      END_STATE();
    case 57:
      if (lookahead == 'i')
        ADVANCE(87);
      if (lookahead == 's')
        ADVANCE(88);
      if (lookahead == 't')
        ADVANCE(89);
      END_STATE();
    case 58:
      if (lookahead == 'e')
        ADVANCE(90);
      END_STATE();
    case 59:
      if (lookahead == 'i')
        ADVANCE(91);
      END_STATE();
    case 60:
      if (lookahead == 'h')
        ADVANCE(92);
      END_STATE();
    case 61:
      if (lookahead == 't')
        ADVANCE(93);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_header_name);
      END_STATE();
    case 63:
      if (lookahead == '*')
        ADVANCE(63);
      if (lookahead == '/')
        ADVANCE(94);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 64:
      if (lookahead == 'o')
        ADVANCE(95);
      END_STATE();
    case 65:
      if (lookahead == 'r')
        ADVANCE(96);
      END_STATE();
    case 66:
      if (lookahead == 's')
        ADVANCE(97);
      END_STATE();
    case 67:
      if (lookahead == 'n')
        ADVANCE(98);
      END_STATE();
    case 68:
      if (lookahead == 'b')
        ADVANCE(99);
      END_STATE();
    case 69:
      if (lookahead == 'l')
        ADVANCE(100);
      END_STATE();
    case 70:
      if (lookahead == 'm')
        ADVANCE(101);
      END_STATE();
    case 71:
      if (lookahead == 'a')
        ADVANCE(102);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_foo);
      END_STATE();
    case 73:
      if (lookahead == 'm')
        ADVANCE(103);
      END_STATE();
    case 74:
      if (lookahead == 'o')
        ADVANCE(104);
      END_STATE();
    case 75:
      if (lookahead == 'l')
        ADVANCE(105);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1')
        ADVANCE(106);
      if (lookahead == '3')
        ADVANCE(107);
      if (lookahead == '6')
        ADVANCE(108);
      if (lookahead == '8')
        ADVANCE(109);
      END_STATE();
    case 77:
      if (lookahead == 't')
        ADVANCE(110);
      END_STATE();
    case 78:
      if (lookahead == 'g')
        ADVANCE(111);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 80:
      if (lookahead == 'l')
        ADVANCE(112);
      END_STATE();
    case 81:
      if (lookahead == 'd')
        ADVANCE(113);
      END_STATE();
    case 82:
      if (lookahead == 'r')
        ADVANCE(114);
      END_STATE();
    case 83:
      if (lookahead == 'e')
        ADVANCE(115);
      END_STATE();
    case 84:
      if (lookahead == 'i')
        ADVANCE(116);
      if (lookahead == 'u')
        ADVANCE(117);
      END_STATE();
    case 85:
      if (lookahead == 's')
        ADVANCE(118);
      END_STATE();
    case 86:
      if (lookahead == 't')
        ADVANCE(119);
      END_STATE();
    case 87:
      if (lookahead == 'o')
        ADVANCE(120);
      END_STATE();
    case 88:
      if (lookahead == 'i')
        ADVANCE(121);
      END_STATE();
    case 89:
      if (lookahead == 'r')
        ADVANCE(122);
      END_STATE();
    case 90:
      if (lookahead == 'r')
        ADVANCE(123);
      END_STATE();
    case 91:
      if (lookahead == 'd')
        ADVANCE(124);
      END_STATE();
    case 92:
      if (lookahead == 'a')
        ADVANCE(125);
      END_STATE();
    case 93:
      if (lookahead == 'r')
        ADVANCE(126);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_comments);
      END_STATE();
    case 95:
      if (lookahead == 'w')
        ADVANCE(127);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 97:
      if (lookahead == 't')
        ADVANCE(128);
      END_STATE();
    case 98:
      if (lookahead == 't')
        ADVANCE(129);
      END_STATE();
    case 99:
      if (lookahead == 'l')
        ADVANCE(130);
      END_STATE();
    case 100:
      if (lookahead == 'a')
        ADVANCE(131);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 102:
      if (lookahead == 't')
        ADVANCE(132);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 104:
      if (lookahead == 'r')
        ADVANCE(133);
      END_STATE();
    case 105:
      if (lookahead == 'u')
        ADVANCE(134);
      END_STATE();
    case 106:
      if (lookahead == '6')
        ADVANCE(135);
      END_STATE();
    case 107:
      if (lookahead == '2')
        ADVANCE(136);
      END_STATE();
    case 108:
      if (lookahead == '4')
        ADVANCE(137);
      END_STATE();
    case 109:
      if (lookahead == '_')
        ADVANCE(138);
      END_STATE();
    case 110:
      if (lookahead == 'r')
        ADVANCE(139);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 112:
      if (lookahead == 'i')
        ADVANCE(140);
      END_STATE();
    case 113:
      if (lookahead == 'o')
        ADVANCE(141);
      END_STATE();
    case 114:
      if (lookahead == 't')
        ADVANCE(142);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_size);
      if (lookahead == '_')
        ADVANCE(143);
      END_STATE();
    case 116:
      if (lookahead == 'n')
        ADVANCE(144);
      END_STATE();
    case 117:
      if (lookahead == 'c')
        ADVANCE(145);
      END_STATE();
    case 118:
      if (lookahead == 't')
        ADVANCE(146);
      END_STATE();
    case 119:
      if (lookahead == '1')
        ADVANCE(147);
      if (lookahead == '3')
        ADVANCE(148);
      if (lookahead == '6')
        ADVANCE(149);
      if (lookahead == '8')
        ADVANCE(150);
      END_STATE();
    case 120:
      if (lookahead == 'n')
        ADVANCE(151);
      END_STATE();
    case 121:
      if (lookahead == 'g')
        ADVANCE(152);
      END_STATE();
    case 122:
      if (lookahead == 'u')
        ADVANCE(153);
      END_STATE();
    case 123:
      if (lookahead == '_')
        ADVANCE(154);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 125:
      if (lookahead == 'r')
        ADVANCE(155);
      END_STATE();
    case 126:
      if (lookahead == 'i')
        ADVANCE(156);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_allow);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_type_qualifier);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 130:
      if (lookahead == 'e')
        ADVANCE(157);
      END_STATE();
    case 131:
      if (lookahead == 'v')
        ADVANCE(158);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 133:
      if (lookahead == 't')
        ADVANCE(159);
      END_STATE();
    case 134:
      if (lookahead == 'd')
        ADVANCE(160);
      END_STATE();
    case 135:
      if (lookahead == '_')
        ADVANCE(161);
      END_STATE();
    case 136:
      if (lookahead == '_')
        ADVANCE(162);
      END_STATE();
    case 137:
      if (lookahead == '_')
        ADVANCE(163);
      END_STATE();
    case 138:
      if (lookahead == 't')
        ADVANCE(164);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_isptr);
      END_STATE();
    case 140:
      if (lookahead == 'c')
        ADVANCE(165);
      END_STATE();
    case 141:
      if (lookahead == 'n')
        ADVANCE(166);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 143:
      if (lookahead == 't')
        ADVANCE(167);
      END_STATE();
    case 144:
      if (lookahead == 'g')
        ADVANCE(168);
      END_STATE();
    case 145:
      if (lookahead == 't')
        ADVANCE(169);
      END_STATE();
    case 146:
      if (lookahead == 'e')
        ADVANCE(170);
      END_STATE();
    case 147:
      if (lookahead == '6')
        ADVANCE(171);
      END_STATE();
    case 148:
      if (lookahead == '2')
        ADVANCE(172);
      END_STATE();
    case 149:
      if (lookahead == '4')
        ADVANCE(173);
      END_STATE();
    case 150:
      if (lookahead == '_')
        ADVANCE(174);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 152:
      if (lookahead == 'n')
        ADVANCE(175);
      END_STATE();
    case 153:
      if (lookahead == 's')
        ADVANCE(176);
      END_STATE();
    case 154:
      if (lookahead == 'c')
        ADVANCE(177);
      END_STATE();
    case 155:
      if (lookahead == '_')
        ADVANCE(178);
      END_STATE();
    case 156:
      if (lookahead == 'n')
        ADVANCE(179);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 158:
      if (lookahead == 'e')
        ADVANCE(180);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 160:
      if (lookahead == 'e')
        ADVANCE(181);
      END_STATE();
    case 161:
      if (lookahead == 't')
        ADVANCE(182);
      END_STATE();
    case 162:
      if (lookahead == 't')
        ADVANCE(183);
      END_STATE();
    case 163:
      if (lookahead == 't')
        ADVANCE(184);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_int8_t);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_trusted_prefix);
      END_STATE();
    case 166:
      if (lookahead == 'l')
        ADVANCE(185);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_size_t);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 170:
      if (lookahead == 'd')
        ADVANCE(186);
      END_STATE();
    case 171:
      if (lookahead == '_')
        ADVANCE(187);
      END_STATE();
    case 172:
      if (lookahead == '_')
        ADVANCE(188);
      END_STATE();
    case 173:
      if (lookahead == '_')
        ADVANCE(189);
      END_STATE();
    case 174:
      if (lookahead == 't')
        ADVANCE(190);
      END_STATE();
    case 175:
      if (lookahead == 'e')
        ADVANCE(191);
      END_STATE();
    case 176:
      if (lookahead == 't')
        ADVANCE(192);
      END_STATE();
    case 177:
      if (lookahead == 'h')
        ADVANCE(193);
      END_STATE();
    case 178:
      if (lookahead == 't')
        ADVANCE(194);
      END_STATE();
    case 179:
      if (lookahead == 'g')
        ADVANCE(195);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_enclave);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_int16_t);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_int32_t);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_int64_t);
      END_STATE();
    case 185:
      if (lookahead == 'y')
        ADVANCE(196);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_trusted);
      END_STATE();
    case 187:
      if (lookahead == 't')
        ADVANCE(197);
      END_STATE();
    case 188:
      if (lookahead == 't')
        ADVANCE(198);
      END_STATE();
    case 189:
      if (lookahead == 't')
        ADVANCE(199);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_uint8_t);
      END_STATE();
    case 191:
      if (lookahead == 'd')
        ADVANCE(200);
      END_STATE();
    case 192:
      if (lookahead == 'e')
        ADVANCE(201);
      END_STATE();
    case 193:
      if (lookahead == 'e')
        ADVANCE(202);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_wchar_t);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_wstring);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_uint16_t);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_uint32_t);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_uint64_t);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 201:
      if (lookahead == 'd')
        ADVANCE(203);
      END_STATE();
    case 202:
      if (lookahead == 'c')
        ADVANCE(204);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_untrusted);
      END_STATE();
    case 204:
      if (lookahead == 'k')
        ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_user_check);
      END_STATE();
    case 206:
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
        ADVANCE(207);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == 'e')
        ADVANCE(208);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__white_space);
      if (lookahead == '\n')
        ADVANCE(2);
      END_STATE();
    case 208:
      if (lookahead == 'n')
        ADVANCE(209);
      END_STATE();
    case 209:
      if (lookahead == 'c')
        ADVANCE(69);
      END_STATE();
    case 210:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(207);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == '{')
        ADVANCE(30);
      END_STATE();
    case 211:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(207);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == 'f')
        ADVANCE(212);
      if (lookahead == 'i')
        ADVANCE(213);
      if (lookahead == 't')
        ADVANCE(26);
      if (lookahead == 'u')
        ADVANCE(214);
      if (lookahead == '}')
        ADVANCE(31);
      END_STATE();
    case 212:
      if (lookahead == 'r')
        ADVANCE(44);
      END_STATE();
    case 213:
      if (lookahead == 'n')
        ADVANCE(215);
      END_STATE();
    case 214:
      if (lookahead == 'n')
        ADVANCE(216);
      END_STATE();
    case 215:
      if (lookahead == 'c')
        ADVANCE(75);
      END_STATE();
    case 216:
      if (lookahead == 't')
        ADVANCE(89);
      END_STATE();
    case 217:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(207);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '"')
        ADVANCE(218);
      if (lookahead == '/')
        ADVANCE(10);
      END_STATE();
    case 218:
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(34);
      END_STATE();
    case 219:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(207);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == ';')
        ADVANCE(11);
      END_STATE();
    case 220:
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
    case 221:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(207);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == 'c')
        ADVANCE(222);
      if (lookahead == 'd')
        ADVANCE(17);
      if (lookahead == 'e')
        ADVANCE(223);
      if (lookahead == 'f')
        ADVANCE(19);
      if (lookahead == 'i')
        ADVANCE(224);
      if (lookahead == 'l')
        ADVANCE(21);
      if (lookahead == 'p')
        ADVANCE(23);
      if (lookahead == 's')
        ADVANCE(225);
      if (lookahead == 'u')
        ADVANCE(226);
      if (lookahead == 'v')
        ADVANCE(28);
      if (lookahead == 'w')
        ADVANCE(227);
      if (lookahead == '}')
        ADVANCE(31);
      END_STATE();
    case 222:
      if (lookahead == 'h')
        ADVANCE(38);
      if (lookahead == 'o')
        ADVANCE(228);
      END_STATE();
    case 223:
      if (lookahead == 'n')
        ADVANCE(229);
      END_STATE();
    case 224:
      if (lookahead == 'n')
        ADVANCE(230);
      END_STATE();
    case 225:
      if (lookahead == 'h')
        ADVANCE(52);
      if (lookahead == 'i')
        ADVANCE(231);
      if (lookahead == 't')
        ADVANCE(232);
      END_STATE();
    case 226:
      if (lookahead == 'i')
        ADVANCE(56);
      if (lookahead == 'n')
        ADVANCE(233);
      END_STATE();
    case 227:
      if (lookahead == 'c')
        ADVANCE(60);
      END_STATE();
    case 228:
      if (lookahead == 'n')
        ADVANCE(66);
      END_STATE();
    case 229:
      if (lookahead == 'u')
        ADVANCE(70);
      END_STATE();
    case 230:
      if (lookahead == 'c')
        ADVANCE(75);
      if (lookahead == 't')
        ADVANCE(76);
      END_STATE();
    case 231:
      if (lookahead == 'z')
        ADVANCE(234);
      END_STATE();
    case 232:
      if (lookahead == 'r')
        ADVANCE(235);
      END_STATE();
    case 233:
      if (lookahead == 'i')
        ADVANCE(87);
      if (lookahead == 's')
        ADVANCE(88);
      END_STATE();
    case 234:
      if (lookahead == 'e')
        ADVANCE(236);
      END_STATE();
    case 235:
      if (lookahead == 'u')
        ADVANCE(117);
      END_STATE();
    case 236:
      if (lookahead == '_')
        ADVANCE(143);
      END_STATE();
    case 237:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(207);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == 'i')
        ADVANCE(238);
      END_STATE();
    case 238:
      if (lookahead == 'm')
        ADVANCE(45);
      END_STATE();
    case 239:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(207);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '/')
        ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(240);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(240);
      END_STATE();
    case 241:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(207);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == 'd')
        ADVANCE(242);
      if (lookahead == 'l')
        ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(240);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(240);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(240);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(240);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(240);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(240);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g')
        ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(240);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(240);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_long);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(240);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(240);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(240);
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
        ADVANCE(207);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == '/')
        ADVANCE(10);
      END_STATE();
    case 253:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(207);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == '[')
        ADVANCE(13);
      if (lookahead == 'c')
        ADVANCE(222);
      if (lookahead == 'd')
        ADVANCE(17);
      if (lookahead == 'e')
        ADVANCE(223);
      if (lookahead == 'f')
        ADVANCE(254);
      if (lookahead == 'i')
        ADVANCE(255);
      if (lookahead == 'l')
        ADVANCE(21);
      if (lookahead == 's')
        ADVANCE(225);
      if (lookahead == 'u')
        ADVANCE(226);
      if (lookahead == 'v')
        ADVANCE(28);
      if (lookahead == 'w')
        ADVANCE(227);
      END_STATE();
    case 254:
      if (lookahead == 'l')
        ADVANCE(42);
      if (lookahead == 'o')
        ADVANCE(43);
      END_STATE();
    case 255:
      if (lookahead == 'n')
        ADVANCE(256);
      END_STATE();
    case 256:
      if (lookahead == 't')
        ADVANCE(76);
      END_STATE();
    case 257:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(207);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == 'c')
        ADVANCE(258);
      if (lookahead == 'i')
        ADVANCE(259);
      if (lookahead == 'o')
        ADVANCE(22);
      if (lookahead == 'r')
        ADVANCE(24);
      if (lookahead == 's')
        ADVANCE(260);
      if (lookahead == 'u')
        ADVANCE(261);
      if (lookahead == 'w')
        ADVANCE(262);
      END_STATE();
    case 258:
      if (lookahead == 'o')
        ADVANCE(263);
      END_STATE();
    case 259:
      if (lookahead == 'n')
        ADVANCE(264);
      if (lookahead == 's')
        ADVANCE(47);
      END_STATE();
    case 260:
      if (lookahead == 'i')
        ADVANCE(265);
      if (lookahead == 't')
        ADVANCE(266);
      END_STATE();
    case 261:
      if (lookahead == 's')
        ADVANCE(58);
      END_STATE();
    case 262:
      if (lookahead == 's')
        ADVANCE(61);
      END_STATE();
    case 263:
      if (lookahead == 'u')
        ADVANCE(67);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 265:
      if (lookahead == 'z')
        ADVANCE(267);
      END_STATE();
    case 266:
      if (lookahead == 'r')
        ADVANCE(268);
      END_STATE();
    case 267:
      if (lookahead == 'e')
        ADVANCE(269);
      END_STATE();
    case 268:
      if (lookahead == 'i')
        ADVANCE(116);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 270:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(207);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == ';')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(15);
      END_STATE();
    case 271:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(207);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(10);
      END_STATE();
    case 272:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(207);
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
    case 273:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(207);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(12);
      END_STATE();
    case 274:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(207);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == ']')
        ADVANCE(14);
      END_STATE();
    case 275:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(207);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(240);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 206},
  [2] = {.lex_state = 210},
  [3] = {.lex_state = 206},
  [4] = {.lex_state = 211},
  [5] = {.lex_state = 217},
  [6] = {.lex_state = 210},
  [7] = {.lex_state = 217},
  [8] = {.lex_state = 210},
  [9] = {.lex_state = 219},
  [10] = {.lex_state = 211},
  [11] = {.lex_state = 220},
  [12] = {.lex_state = 221},
  [13] = {.lex_state = 237},
  [14] = {.lex_state = 221},
  [15] = {.lex_state = 206},
  [16] = {.lex_state = 219},
  [17] = {.lex_state = 211},
  [18] = {.lex_state = 211},
  [19] = {.lex_state = 239},
  [20] = {.lex_state = 221},
  [21] = {.lex_state = 239},
  [22] = {.lex_state = 217},
  [23] = {.lex_state = 239},
  [24] = {.lex_state = 219},
  [25] = {.lex_state = 217},
  [26] = {.lex_state = 241},
  [27] = {.lex_state = 239},
  [28] = {.lex_state = 221},
  [29] = {.lex_state = 221},
  [30] = {.lex_state = 239},
  [31] = {.lex_state = 239},
  [32] = {.lex_state = 239},
  [33] = {.lex_state = 221},
  [34] = {.lex_state = 219},
  [35] = {.lex_state = 221},
  [36] = {.lex_state = 221},
  [37] = {.lex_state = 239},
  [38] = {.lex_state = 206},
  [39] = {.lex_state = 239},
  [40] = {.lex_state = 239},
  [41] = {.lex_state = 237},
  [42] = {.lex_state = 239},
  [43] = {.lex_state = 211},
  [44] = {.lex_state = 220},
  [45] = {.lex_state = 239},
  [46] = {.lex_state = 239},
  [47] = {.lex_state = 219},
  [48] = {.lex_state = 221},
  [49] = {.lex_state = 252},
  [50] = {.lex_state = 239},
  [51] = {.lex_state = 239},
  [52] = {.lex_state = 219},
  [53] = {.lex_state = 219},
  [54] = {.lex_state = 239},
  [55] = {.lex_state = 211},
  [56] = {.lex_state = 219},
  [57] = {.lex_state = 221},
  [58] = {.lex_state = 252},
  [59] = {.lex_state = 239},
  [60] = {.lex_state = 239},
  [61] = {.lex_state = 221},
  [62] = {.lex_state = 211},
  [63] = {.lex_state = 253},
  [64] = {.lex_state = 211},
  [65] = {.lex_state = 239},
  [66] = {.lex_state = 219},
  [67] = {.lex_state = 252},
  [68] = {.lex_state = 211},
  [69] = {.lex_state = 253},
  [70] = {.lex_state = 219},
  [71] = {.lex_state = 221},
  [72] = {.lex_state = 257},
  [73] = {.lex_state = 270},
  [74] = {.lex_state = 271},
  [75] = {.lex_state = 221},
  [76] = {.lex_state = 239},
  [77] = {.lex_state = 272},
  [78] = {.lex_state = 219},
  [79] = {.lex_state = 253},
  [80] = {.lex_state = 219},
  [81] = {.lex_state = 271},
  [82] = {.lex_state = 221},
  [83] = {.lex_state = 239},
  [84] = {.lex_state = 273},
  [85] = {.lex_state = 273},
  [86] = {.lex_state = 274},
  [87] = {.lex_state = 252},
  [88] = {.lex_state = 221},
  [89] = {.lex_state = 219},
  [90] = {.lex_state = 253},
  [91] = {.lex_state = 270},
  [92] = {.lex_state = 271},
  [93] = {.lex_state = 221},
  [94] = {.lex_state = 271},
  [95] = {.lex_state = 239},
  [96] = {.lex_state = 219},
  [97] = {.lex_state = 271},
  [98] = {.lex_state = 221},
  [99] = {.lex_state = 271},
  [100] = {.lex_state = 271},
  [101] = {.lex_state = 239},
  [102] = {.lex_state = 275},
  [103] = {.lex_state = 275},
  [104] = {.lex_state = 257},
  [105] = {.lex_state = 221},
  [106] = {.lex_state = 274},
  [107] = {.lex_state = 239},
  [108] = {.lex_state = 221},
  [109] = {.lex_state = 271},
  [110] = {.lex_state = 219},
  [111] = {.lex_state = 270},
  [112] = {.lex_state = 271},
  [113] = {.lex_state = 239},
  [114] = {.lex_state = 221},
  [115] = {.lex_state = 219},
  [116] = {.lex_state = 271},
  [117] = {.lex_state = 271},
  [118] = {.lex_state = 274},
  [119] = {.lex_state = 274},
  [120] = {.lex_state = 274},
  [121] = {.lex_state = 221},
  [122] = {.lex_state = 274},
  [123] = {.lex_state = 271},
  [124] = {.lex_state = 221},
  [125] = {.lex_state = 219},
  [126] = {.lex_state = 239},
  [127] = {.lex_state = 221},
  [128] = {.lex_state = 219},
  [129] = {.lex_state = 219},
  [130] = {.lex_state = 271},
  [131] = {.lex_state = 221},
  [132] = {.lex_state = 271},
  [133] = {.lex_state = 221},
  [134] = {.lex_state = 219},
  [135] = {.lex_state = 271},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_size] = ACTIONS(1),
    [anon_sym_uint64_t] = ACTIONS(1),
    [sym_comments] = ACTIONS(3),
    [sym_header_name] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_uint16_t] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_foo] = ACTIONS(1),
    [sym_new_line] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_uint32_t] = ACTIONS(1),
    [anon_sym_short] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_count] = ACTIONS(1),
    [anon_sym_trusted] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_wchar_t] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_user_check] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [sym_trusted_prefix] = ACTIONS(1),
    [anon_sym_untrusted] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_int8_t] = ACTIONS(1),
    [anon_sym_long] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_isptr] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_allow] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_type_qualifier] = ACTIONS(1),
    [anon_sym_enclave] = ACTIONS(1),
    [anon_sym_int16_t] = ACTIONS(1),
    [anon_sym_int64_t] = ACTIONS(1),
    [anon_sym_unsigned] = ACTIONS(1),
    [anon_sym_wstring] = ACTIONS(1),
    [anon_sym_readonly] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_int32_t] = ACTIONS(1),
    [anon_sym_uint8_t] = ACTIONS(1),
    [anon_sym_size_t] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(3),
    [anon_sym_enclave] = ACTIONS(7),
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
  },
  [2] = {
    [sym__white_space] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_comments] = ACTIONS(3),
  },
  [3] = {
    [sym__white_space] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_comments] = ACTIONS(3),
  },
  [4] = {
    [sym_untrusted] = STATE(10),
    [sym_from] = STATE(10),
    [sym__main_item] = STATE(10),
    [sym_include] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [sym_trusted] = STATE(10),
    [anon_sym_include] = ACTIONS(13),
    [sym_comments] = ACTIONS(3),
    [anon_sym_untrusted] = ACTIONS(15),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_from] = ACTIONS(17),
    [anon_sym_trusted] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(21),
  },
  [5] = {
    [sym_header_name] = ACTIONS(23),
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
  },
  [6] = {
    [sym__white_space] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_comments] = ACTIONS(3),
  },
  [7] = {
    [sym_header_name] = ACTIONS(27),
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
  },
  [8] = {
    [sym__white_space] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(29),
    [sym_comments] = ACTIONS(3),
  },
  [9] = {
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
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
    [sym_comments] = ACTIONS(3),
    [anon_sym_untrusted] = ACTIONS(15),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_from] = ACTIONS(17),
    [anon_sym_trusted] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(33),
  },
  [11] = {
    [sym__white_space] = ACTIONS(5),
    [sym_comments] = ACTIONS(3),
    [sym_new_line] = ACTIONS(35),
  },
  [12] = {
    [sym_struct_specifier] = STATE(19),
    [sym_from] = STATE(28),
    [sym_ocall_definition] = STATE(28),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [aux_sym_untrusted_repeat1] = STATE(29),
    [sym_retval] = STATE(30),
    [sym_include] = STATE(28),
    [sym_untrusted_inner_items] = STATE(29),
    [sym_type_specifier] = STATE(31),
    [anon_sym_float] = ACTIONS(37),
    [sym__white_space] = ACTIONS(3),
    [sym_type_qualifier] = ACTIONS(39),
    [anon_sym_union] = ACTIONS(41),
    [anon_sym_uint64_t] = ACTIONS(37),
    [anon_sym_from] = ACTIONS(43),
    [anon_sym_int16_t] = ACTIONS(37),
    [anon_sym_uint32_t] = ACTIONS(37),
    [anon_sym_int64_t] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_unsigned] = ACTIONS(37),
    [sym_comments] = ACTIONS(3),
    [anon_sym_struct] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_include] = ACTIONS(49),
    [anon_sym_int8_t] = ACTIONS(37),
    [anon_sym_uint16_t] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(51),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [anon_sym_enum] = ACTIONS(53),
    [anon_sym_void] = ACTIONS(37),
    [anon_sym_foo] = ACTIONS(37),
    [anon_sym_int32_t] = ACTIONS(37),
    [anon_sym_wchar_t] = ACTIONS(37),
    [anon_sym_uint8_t] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(55),
    [anon_sym_size_t] = ACTIONS(37),
  },
  [13] = {
    [sym__white_space] = ACTIONS(3),
    [anon_sym_import] = ACTIONS(57),
    [sym_comments] = ACTIONS(3),
  },
  [14] = {
    [sym_struct_specifier] = STATE(19),
    [sym_from] = STATE(35),
    [sym_ecall_definition] = STATE(35),
    [aux_sym_trusted_repeat1] = STATE(36),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [sym_retval] = STATE(37),
    [sym_include] = STATE(35),
    [sym_trusted_inner_items] = STATE(36),
    [sym_type_specifier] = STATE(31),
    [anon_sym_float] = ACTIONS(37),
    [anon_sym_union] = ACTIONS(41),
    [anon_sym_uint64_t] = ACTIONS(37),
    [sym_trusted_prefix] = ACTIONS(59),
    [sym_comments] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_include] = ACTIONS(49),
    [anon_sym_int8_t] = ACTIONS(37),
    [anon_sym_uint16_t] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(51),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [anon_sym_foo] = ACTIONS(37),
    [sym__white_space] = ACTIONS(3),
    [sym_type_qualifier] = ACTIONS(39),
    [anon_sym_from] = ACTIONS(43),
    [anon_sym_int16_t] = ACTIONS(37),
    [anon_sym_uint32_t] = ACTIONS(37),
    [anon_sym_int64_t] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_unsigned] = ACTIONS(37),
    [anon_sym_struct] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(53),
    [anon_sym_void] = ACTIONS(37),
    [anon_sym_int32_t] = ACTIONS(37),
    [anon_sym_wchar_t] = ACTIONS(37),
    [anon_sym_uint8_t] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(55),
    [anon_sym_size_t] = ACTIONS(37),
  },
  [15] = {
    [sym__white_space] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(63),
    [sym_comments] = ACTIONS(3),
  },
  [16] = {
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(65),
  },
  [17] = {
    [sym_untrusted] = STATE(17),
    [sym_from] = STATE(17),
    [sym__main_item] = STATE(17),
    [sym_include] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(17),
    [sym_trusted] = STATE(17),
    [anon_sym_include] = ACTIONS(67),
    [sym_comments] = ACTIONS(3),
    [anon_sym_untrusted] = ACTIONS(70),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_from] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(76),
    [anon_sym_trusted] = ACTIONS(78),
  },
  [18] = {
    [anon_sym_include] = ACTIONS(81),
    [sym_comments] = ACTIONS(3),
    [anon_sym_untrusted] = ACTIONS(81),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_from] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_trusted] = ACTIONS(81),
  },
  [19] = {
    [sym_comments] = ACTIONS(3),
    [sym_identifier] = ACTIONS(83),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(83),
  },
  [20] = {
    [sym_struct_specifier] = STATE(19),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [sym_type_specifier] = STATE(39),
    [anon_sym_float] = ACTIONS(37),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_union] = ACTIONS(41),
    [anon_sym_uint64_t] = ACTIONS(37),
    [anon_sym_int16_t] = ACTIONS(37),
    [anon_sym_uint32_t] = ACTIONS(37),
    [anon_sym_int64_t] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_unsigned] = ACTIONS(37),
    [sym_comments] = ACTIONS(3),
    [anon_sym_struct] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(53),
    [anon_sym_int8_t] = ACTIONS(37),
    [anon_sym_uint16_t] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(51),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [anon_sym_void] = ACTIONS(37),
    [anon_sym_foo] = ACTIONS(37),
    [anon_sym_int32_t] = ACTIONS(37),
    [anon_sym_wchar_t] = ACTIONS(37),
    [anon_sym_uint8_t] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(55),
    [anon_sym_size_t] = ACTIONS(37),
  },
  [21] = {
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
    [sym_identifier] = ACTIONS(85),
  },
  [22] = {
    [sym_header_name] = ACTIONS(87),
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
  },
  [23] = {
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
    [sym_identifier] = ACTIONS(89),
  },
  [24] = {
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(91),
  },
  [25] = {
    [sym_header_name] = ACTIONS(93),
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
  },
  [26] = {
    [sym_comments] = ACTIONS(3),
    [sym_identifier] = ACTIONS(95),
    [anon_sym_long] = ACTIONS(97),
    [anon_sym_double] = ACTIONS(97),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(83),
  },
  [27] = {
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
    [sym_identifier] = ACTIONS(99),
  },
  [28] = {
    [anon_sym_float] = ACTIONS(101),
    [sym__white_space] = ACTIONS(3),
    [sym_type_qualifier] = ACTIONS(101),
    [anon_sym_union] = ACTIONS(101),
    [anon_sym_uint64_t] = ACTIONS(101),
    [anon_sym_from] = ACTIONS(101),
    [anon_sym_int16_t] = ACTIONS(101),
    [anon_sym_uint32_t] = ACTIONS(101),
    [anon_sym_int64_t] = ACTIONS(101),
    [anon_sym_short] = ACTIONS(101),
    [anon_sym_unsigned] = ACTIONS(101),
    [sym_comments] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(101),
    [anon_sym_struct] = ACTIONS(101),
    [anon_sym_include] = ACTIONS(101),
    [anon_sym_int8_t] = ACTIONS(101),
    [anon_sym_uint16_t] = ACTIONS(101),
    [anon_sym_long] = ACTIONS(101),
    [anon_sym_char] = ACTIONS(101),
    [anon_sym_double] = ACTIONS(101),
    [anon_sym_enum] = ACTIONS(101),
    [anon_sym_void] = ACTIONS(101),
    [anon_sym_foo] = ACTIONS(101),
    [anon_sym_int32_t] = ACTIONS(101),
    [anon_sym_wchar_t] = ACTIONS(101),
    [anon_sym_uint8_t] = ACTIONS(101),
    [anon_sym_int] = ACTIONS(103),
    [anon_sym_size_t] = ACTIONS(101),
  },
  [29] = {
    [sym_struct_specifier] = STATE(19),
    [sym_from] = STATE(28),
    [sym_ocall_definition] = STATE(28),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [aux_sym_untrusted_repeat1] = STATE(48),
    [sym_retval] = STATE(30),
    [sym_include] = STATE(28),
    [sym_untrusted_inner_items] = STATE(48),
    [sym_type_specifier] = STATE(31),
    [anon_sym_float] = ACTIONS(37),
    [sym__white_space] = ACTIONS(3),
    [sym_type_qualifier] = ACTIONS(39),
    [anon_sym_union] = ACTIONS(41),
    [anon_sym_uint64_t] = ACTIONS(37),
    [anon_sym_from] = ACTIONS(43),
    [anon_sym_int16_t] = ACTIONS(37),
    [anon_sym_uint32_t] = ACTIONS(37),
    [anon_sym_int64_t] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_unsigned] = ACTIONS(37),
    [sym_comments] = ACTIONS(3),
    [anon_sym_struct] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_include] = ACTIONS(49),
    [anon_sym_int8_t] = ACTIONS(37),
    [anon_sym_uint16_t] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(51),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [anon_sym_enum] = ACTIONS(53),
    [anon_sym_void] = ACTIONS(37),
    [anon_sym_foo] = ACTIONS(37),
    [anon_sym_int32_t] = ACTIONS(37),
    [anon_sym_wchar_t] = ACTIONS(37),
    [anon_sym_uint8_t] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(55),
    [anon_sym_size_t] = ACTIONS(37),
  },
  [30] = {
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
    [sym_identifier] = ACTIONS(107),
  },
  [31] = {
    [sym_pointer_declarator] = STATE(51),
    [sym_comments] = ACTIONS(3),
    [sym_identifier] = ACTIONS(109),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(111),
  },
  [32] = {
    [sym_import_list] = STATE(52),
    [sym_comments] = ACTIONS(3),
    [sym_identifier] = ACTIONS(113),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(115),
  },
  [33] = {
    [sym_struct_specifier] = STATE(19),
    [sym_retval] = STATE(54),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [sym_type_specifier] = STATE(31),
    [anon_sym_float] = ACTIONS(37),
    [sym__white_space] = ACTIONS(3),
    [sym_type_qualifier] = ACTIONS(39),
    [anon_sym_union] = ACTIONS(41),
    [anon_sym_uint64_t] = ACTIONS(37),
    [anon_sym_int16_t] = ACTIONS(37),
    [anon_sym_uint32_t] = ACTIONS(37),
    [anon_sym_int64_t] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_unsigned] = ACTIONS(37),
    [sym_comments] = ACTIONS(3),
    [anon_sym_struct] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(53),
    [anon_sym_int8_t] = ACTIONS(37),
    [anon_sym_uint16_t] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(51),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [anon_sym_void] = ACTIONS(37),
    [anon_sym_foo] = ACTIONS(37),
    [anon_sym_int32_t] = ACTIONS(37),
    [anon_sym_wchar_t] = ACTIONS(37),
    [anon_sym_uint8_t] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(55),
    [anon_sym_size_t] = ACTIONS(37),
  },
  [34] = {
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(117),
  },
  [35] = {
    [anon_sym_float] = ACTIONS(119),
    [anon_sym_union] = ACTIONS(119),
    [anon_sym_uint64_t] = ACTIONS(119),
    [sym_trusted_prefix] = ACTIONS(119),
    [sym_comments] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_include] = ACTIONS(119),
    [anon_sym_int8_t] = ACTIONS(119),
    [anon_sym_uint16_t] = ACTIONS(119),
    [anon_sym_long] = ACTIONS(119),
    [anon_sym_char] = ACTIONS(119),
    [anon_sym_double] = ACTIONS(119),
    [anon_sym_foo] = ACTIONS(119),
    [sym__white_space] = ACTIONS(3),
    [sym_type_qualifier] = ACTIONS(119),
    [anon_sym_from] = ACTIONS(119),
    [anon_sym_int16_t] = ACTIONS(119),
    [anon_sym_uint32_t] = ACTIONS(119),
    [anon_sym_int64_t] = ACTIONS(119),
    [anon_sym_short] = ACTIONS(119),
    [anon_sym_unsigned] = ACTIONS(119),
    [anon_sym_struct] = ACTIONS(119),
    [anon_sym_enum] = ACTIONS(119),
    [anon_sym_void] = ACTIONS(119),
    [anon_sym_int32_t] = ACTIONS(119),
    [anon_sym_wchar_t] = ACTIONS(119),
    [anon_sym_uint8_t] = ACTIONS(119),
    [anon_sym_int] = ACTIONS(121),
    [anon_sym_size_t] = ACTIONS(119),
  },
  [36] = {
    [sym_struct_specifier] = STATE(19),
    [sym_from] = STATE(35),
    [sym_ecall_definition] = STATE(35),
    [aux_sym_trusted_repeat1] = STATE(57),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [sym_retval] = STATE(37),
    [sym_include] = STATE(35),
    [sym_trusted_inner_items] = STATE(57),
    [sym_type_specifier] = STATE(31),
    [anon_sym_float] = ACTIONS(37),
    [anon_sym_union] = ACTIONS(41),
    [anon_sym_uint64_t] = ACTIONS(37),
    [sym_trusted_prefix] = ACTIONS(59),
    [sym_comments] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(123),
    [anon_sym_include] = ACTIONS(49),
    [anon_sym_int8_t] = ACTIONS(37),
    [anon_sym_uint16_t] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(51),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [anon_sym_foo] = ACTIONS(37),
    [sym__white_space] = ACTIONS(3),
    [sym_type_qualifier] = ACTIONS(39),
    [anon_sym_from] = ACTIONS(43),
    [anon_sym_int16_t] = ACTIONS(37),
    [anon_sym_uint32_t] = ACTIONS(37),
    [anon_sym_int64_t] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_unsigned] = ACTIONS(37),
    [anon_sym_struct] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(53),
    [anon_sym_void] = ACTIONS(37),
    [anon_sym_int32_t] = ACTIONS(37),
    [anon_sym_wchar_t] = ACTIONS(37),
    [anon_sym_uint8_t] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(55),
    [anon_sym_size_t] = ACTIONS(37),
  },
  [37] = {
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
    [sym_identifier] = ACTIONS(125),
  },
  [38] = {
    [sym__white_space] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(127),
    [sym_comments] = ACTIONS(3),
  },
  [39] = {
    [sym_pointer_declarator] = STATE(59),
    [sym_comments] = ACTIONS(3),
    [sym_identifier] = ACTIONS(129),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(111),
  },
  [40] = {
    [sym_comments] = ACTIONS(3),
    [sym_identifier] = ACTIONS(131),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(131),
  },
  [41] = {
    [sym__white_space] = ACTIONS(3),
    [anon_sym_import] = ACTIONS(133),
    [sym_comments] = ACTIONS(3),
  },
  [42] = {
    [sym_comments] = ACTIONS(3),
    [sym_identifier] = ACTIONS(135),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(135),
  },
  [43] = {
    [anon_sym_include] = ACTIONS(137),
    [sym_comments] = ACTIONS(3),
    [anon_sym_untrusted] = ACTIONS(137),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_from] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(137),
    [anon_sym_trusted] = ACTIONS(137),
  },
  [44] = {
    [sym__white_space] = ACTIONS(5),
    [sym_comments] = ACTIONS(3),
    [sym_new_line] = ACTIONS(139),
  },
  [45] = {
    [sym_comments] = ACTIONS(3),
    [sym_identifier] = ACTIONS(141),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(141),
  },
  [46] = {
    [sym_comments] = ACTIONS(3),
    [sym_identifier] = ACTIONS(143),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(143),
  },
  [47] = {
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(145),
  },
  [48] = {
    [sym_struct_specifier] = STATE(19),
    [sym_from] = STATE(28),
    [sym_ocall_definition] = STATE(28),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [aux_sym_untrusted_repeat1] = STATE(48),
    [sym_retval] = STATE(30),
    [sym_include] = STATE(28),
    [sym_untrusted_inner_items] = STATE(48),
    [sym_type_specifier] = STATE(31),
    [anon_sym_float] = ACTIONS(147),
    [sym__white_space] = ACTIONS(3),
    [sym_type_qualifier] = ACTIONS(150),
    [anon_sym_union] = ACTIONS(153),
    [anon_sym_uint64_t] = ACTIONS(147),
    [anon_sym_from] = ACTIONS(156),
    [anon_sym_int16_t] = ACTIONS(147),
    [anon_sym_uint32_t] = ACTIONS(147),
    [anon_sym_int64_t] = ACTIONS(147),
    [anon_sym_short] = ACTIONS(147),
    [anon_sym_unsigned] = ACTIONS(147),
    [sym_comments] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(159),
    [anon_sym_struct] = ACTIONS(161),
    [anon_sym_include] = ACTIONS(164),
    [anon_sym_int8_t] = ACTIONS(147),
    [anon_sym_uint16_t] = ACTIONS(147),
    [anon_sym_long] = ACTIONS(167),
    [anon_sym_char] = ACTIONS(147),
    [anon_sym_double] = ACTIONS(147),
    [anon_sym_enum] = ACTIONS(170),
    [anon_sym_void] = ACTIONS(147),
    [anon_sym_foo] = ACTIONS(147),
    [anon_sym_int32_t] = ACTIONS(147),
    [anon_sym_wchar_t] = ACTIONS(147),
    [anon_sym_uint8_t] = ACTIONS(147),
    [anon_sym_int] = ACTIONS(173),
    [anon_sym_size_t] = ACTIONS(147),
  },
  [49] = {
    [anon_sym_LPAREN] = ACTIONS(176),
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
  },
  [50] = {
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
    [sym_identifier] = ACTIONS(178),
  },
  [51] = {
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
    [sym_identifier] = ACTIONS(129),
  },
  [52] = {
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(180),
  },
  [53] = {
    [aux_sym_import_list_repeat1] = STATE(66),
    [anon_sym_COMMA] = ACTIONS(182),
    [sym_comments] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(184),
    [sym__white_space] = ACTIONS(3),
  },
  [54] = {
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
    [sym_identifier] = ACTIONS(186),
  },
  [55] = {
    [anon_sym_include] = ACTIONS(188),
    [sym_comments] = ACTIONS(3),
    [anon_sym_untrusted] = ACTIONS(188),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_from] = ACTIONS(188),
    [anon_sym_RBRACE] = ACTIONS(188),
    [anon_sym_trusted] = ACTIONS(188),
  },
  [56] = {
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(190),
  },
  [57] = {
    [sym_struct_specifier] = STATE(19),
    [sym_from] = STATE(35),
    [sym_ecall_definition] = STATE(35),
    [aux_sym_trusted_repeat1] = STATE(57),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [sym_retval] = STATE(37),
    [sym_include] = STATE(35),
    [sym_trusted_inner_items] = STATE(57),
    [sym_type_specifier] = STATE(31),
    [anon_sym_float] = ACTIONS(192),
    [anon_sym_union] = ACTIONS(195),
    [anon_sym_uint64_t] = ACTIONS(192),
    [sym_trusted_prefix] = ACTIONS(198),
    [sym_comments] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(201),
    [anon_sym_include] = ACTIONS(203),
    [anon_sym_int8_t] = ACTIONS(192),
    [anon_sym_uint16_t] = ACTIONS(192),
    [anon_sym_long] = ACTIONS(206),
    [anon_sym_char] = ACTIONS(192),
    [anon_sym_double] = ACTIONS(192),
    [anon_sym_foo] = ACTIONS(192),
    [sym__white_space] = ACTIONS(3),
    [sym_type_qualifier] = ACTIONS(209),
    [anon_sym_from] = ACTIONS(212),
    [anon_sym_int16_t] = ACTIONS(192),
    [anon_sym_uint32_t] = ACTIONS(192),
    [anon_sym_int64_t] = ACTIONS(192),
    [anon_sym_short] = ACTIONS(192),
    [anon_sym_unsigned] = ACTIONS(192),
    [anon_sym_struct] = ACTIONS(215),
    [anon_sym_enum] = ACTIONS(218),
    [anon_sym_void] = ACTIONS(192),
    [anon_sym_int32_t] = ACTIONS(192),
    [anon_sym_wchar_t] = ACTIONS(192),
    [anon_sym_uint8_t] = ACTIONS(192),
    [anon_sym_int] = ACTIONS(221),
    [anon_sym_size_t] = ACTIONS(192),
  },
  [58] = {
    [anon_sym_LPAREN] = ACTIONS(224),
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
  },
  [59] = {
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
    [sym_identifier] = ACTIONS(226),
  },
  [60] = {
    [sym_import_list] = STATE(70),
    [sym_comments] = ACTIONS(3),
    [sym_identifier] = ACTIONS(113),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(228),
  },
  [61] = {
    [anon_sym_float] = ACTIONS(81),
    [anon_sym_union] = ACTIONS(81),
    [anon_sym_uint64_t] = ACTIONS(81),
    [sym_trusted_prefix] = ACTIONS(81),
    [sym_comments] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_include] = ACTIONS(81),
    [anon_sym_int8_t] = ACTIONS(81),
    [anon_sym_uint16_t] = ACTIONS(81),
    [anon_sym_long] = ACTIONS(81),
    [anon_sym_char] = ACTIONS(81),
    [anon_sym_double] = ACTIONS(81),
    [anon_sym_foo] = ACTIONS(81),
    [sym__white_space] = ACTIONS(3),
    [sym_type_qualifier] = ACTIONS(81),
    [anon_sym_from] = ACTIONS(81),
    [anon_sym_int16_t] = ACTIONS(81),
    [anon_sym_uint32_t] = ACTIONS(81),
    [anon_sym_int64_t] = ACTIONS(81),
    [anon_sym_short] = ACTIONS(81),
    [anon_sym_unsigned] = ACTIONS(81),
    [anon_sym_struct] = ACTIONS(81),
    [anon_sym_enum] = ACTIONS(81),
    [anon_sym_void] = ACTIONS(81),
    [anon_sym_int32_t] = ACTIONS(81),
    [anon_sym_wchar_t] = ACTIONS(81),
    [anon_sym_uint8_t] = ACTIONS(81),
    [anon_sym_int] = ACTIONS(230),
    [anon_sym_size_t] = ACTIONS(81),
  },
  [62] = {
    [anon_sym_include] = ACTIONS(232),
    [sym_comments] = ACTIONS(3),
    [anon_sym_untrusted] = ACTIONS(232),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_from] = ACTIONS(232),
    [anon_sym_RBRACE] = ACTIONS(232),
    [anon_sym_trusted] = ACTIONS(232),
  },
  [63] = {
    [sym_struct_specifier] = STATE(19),
    [sym_parameter] = STATE(74),
    [sym_attribute_list] = STATE(75),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [sym_type_specifier] = STATE(76),
    [anon_sym_float] = ACTIONS(37),
    [sym__white_space] = ACTIONS(3),
    [sym_type_qualifier] = ACTIONS(234),
    [anon_sym_union] = ACTIONS(41),
    [anon_sym_uint64_t] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(236),
    [anon_sym_int16_t] = ACTIONS(37),
    [anon_sym_uint32_t] = ACTIONS(37),
    [anon_sym_int64_t] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_unsigned] = ACTIONS(37),
    [sym_comments] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(238),
    [anon_sym_struct] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(53),
    [anon_sym_int8_t] = ACTIONS(37),
    [anon_sym_uint16_t] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(51),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [anon_sym_void] = ACTIONS(37),
    [anon_sym_foo] = ACTIONS(37),
    [anon_sym_int32_t] = ACTIONS(37),
    [anon_sym_wchar_t] = ACTIONS(37),
    [anon_sym_uint8_t] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(55),
    [anon_sym_size_t] = ACTIONS(37),
  },
  [64] = {
    [anon_sym_include] = ACTIONS(240),
    [sym_comments] = ACTIONS(3),
    [anon_sym_untrusted] = ACTIONS(240),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_from] = ACTIONS(240),
    [anon_sym_RBRACE] = ACTIONS(240),
    [anon_sym_trusted] = ACTIONS(240),
  },
  [65] = {
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
    [sym_identifier] = ACTIONS(242),
  },
  [66] = {
    [aux_sym_import_list_repeat1] = STATE(78),
    [anon_sym_COMMA] = ACTIONS(182),
    [sym_comments] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(244),
    [sym__white_space] = ACTIONS(3),
  },
  [67] = {
    [anon_sym_LPAREN] = ACTIONS(246),
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
  },
  [68] = {
    [anon_sym_include] = ACTIONS(248),
    [sym_comments] = ACTIONS(3),
    [anon_sym_untrusted] = ACTIONS(248),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_from] = ACTIONS(248),
    [anon_sym_RBRACE] = ACTIONS(248),
    [anon_sym_trusted] = ACTIONS(248),
  },
  [69] = {
    [sym_struct_specifier] = STATE(19),
    [sym_parameter] = STATE(81),
    [sym_attribute_list] = STATE(75),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [sym_type_specifier] = STATE(76),
    [anon_sym_float] = ACTIONS(37),
    [sym__white_space] = ACTIONS(3),
    [sym_type_qualifier] = ACTIONS(234),
    [anon_sym_union] = ACTIONS(41),
    [anon_sym_uint64_t] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(236),
    [anon_sym_int16_t] = ACTIONS(37),
    [anon_sym_uint32_t] = ACTIONS(37),
    [anon_sym_int64_t] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_unsigned] = ACTIONS(37),
    [sym_comments] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(250),
    [anon_sym_struct] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(53),
    [anon_sym_int8_t] = ACTIONS(37),
    [anon_sym_uint16_t] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(51),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [anon_sym_void] = ACTIONS(37),
    [anon_sym_foo] = ACTIONS(37),
    [anon_sym_int32_t] = ACTIONS(37),
    [anon_sym_wchar_t] = ACTIONS(37),
    [anon_sym_uint8_t] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(55),
    [anon_sym_size_t] = ACTIONS(37),
  },
  [70] = {
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(252),
  },
  [71] = {
    [sym_struct_specifier] = STATE(19),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [sym_type_specifier] = STATE(83),
    [anon_sym_float] = ACTIONS(37),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_union] = ACTIONS(41),
    [anon_sym_uint64_t] = ACTIONS(37),
    [anon_sym_int16_t] = ACTIONS(37),
    [anon_sym_uint32_t] = ACTIONS(37),
    [anon_sym_int64_t] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_unsigned] = ACTIONS(37),
    [sym_comments] = ACTIONS(3),
    [anon_sym_struct] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(53),
    [anon_sym_int8_t] = ACTIONS(37),
    [anon_sym_uint16_t] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(51),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [anon_sym_void] = ACTIONS(37),
    [anon_sym_foo] = ACTIONS(37),
    [anon_sym_int32_t] = ACTIONS(37),
    [anon_sym_wchar_t] = ACTIONS(37),
    [anon_sym_uint8_t] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(55),
    [anon_sym_size_t] = ACTIONS(37),
  },
  [72] = {
    [sym__pointer_attributes] = STATE(86),
    [sym_size_attribute] = STATE(86),
    [sym_count_attribute] = STATE(86),
    [anon_sym_user_check] = ACTIONS(254),
    [anon_sym_size] = ACTIONS(256),
    [anon_sym_count] = ACTIONS(258),
    [anon_sym_string] = ACTIONS(254),
    [anon_sym_isptr] = ACTIONS(254),
    [sym_comments] = ACTIONS(3),
    [anon_sym_wstring] = ACTIONS(254),
    [anon_sym_out] = ACTIONS(254),
    [anon_sym_readonly] = ACTIONS(254),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(254),
  },
  [73] = {
    [sym_untrusted_suffix] = STATE(89),
    [sym_comments] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(260),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_allow] = ACTIONS(262),
  },
  [74] = {
    [aux_sym_ecall_definition_repeat1] = STATE(92),
    [anon_sym_COMMA] = ACTIONS(264),
    [sym_comments] = ACTIONS(3),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(266),
  },
  [75] = {
    [sym_struct_specifier] = STATE(19),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [sym_type_specifier] = STATE(83),
    [anon_sym_float] = ACTIONS(37),
    [sym__white_space] = ACTIONS(3),
    [sym_type_qualifier] = ACTIONS(268),
    [anon_sym_union] = ACTIONS(41),
    [anon_sym_uint64_t] = ACTIONS(37),
    [anon_sym_int16_t] = ACTIONS(37),
    [anon_sym_uint32_t] = ACTIONS(37),
    [anon_sym_int64_t] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_unsigned] = ACTIONS(37),
    [sym_comments] = ACTIONS(3),
    [anon_sym_struct] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(53),
    [anon_sym_int8_t] = ACTIONS(37),
    [anon_sym_uint16_t] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(51),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [anon_sym_void] = ACTIONS(37),
    [anon_sym_foo] = ACTIONS(37),
    [anon_sym_int32_t] = ACTIONS(37),
    [anon_sym_wchar_t] = ACTIONS(37),
    [anon_sym_uint8_t] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(55),
    [anon_sym_size_t] = ACTIONS(37),
  },
  [76] = {
    [sym_pointer_declarator] = STATE(95),
    [sym_comments] = ACTIONS(3),
    [sym_identifier] = ACTIONS(270),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(111),
  },
  [77] = {
    [anon_sym_COMMA] = ACTIONS(272),
    [sym_comments] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(272),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(272),
  },
  [78] = {
    [aux_sym_import_list_repeat1] = STATE(78),
    [anon_sym_COMMA] = ACTIONS(274),
    [sym_comments] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(272),
    [sym__white_space] = ACTIONS(3),
  },
  [79] = {
    [sym_struct_specifier] = STATE(19),
    [sym_parameter] = STATE(97),
    [sym_attribute_list] = STATE(75),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [sym_type_specifier] = STATE(76),
    [anon_sym_float] = ACTIONS(37),
    [sym__white_space] = ACTIONS(3),
    [sym_type_qualifier] = ACTIONS(234),
    [anon_sym_union] = ACTIONS(41),
    [anon_sym_uint64_t] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(236),
    [anon_sym_int16_t] = ACTIONS(37),
    [anon_sym_uint32_t] = ACTIONS(37),
    [anon_sym_int64_t] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_unsigned] = ACTIONS(37),
    [sym_comments] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(277),
    [anon_sym_struct] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(53),
    [anon_sym_int8_t] = ACTIONS(37),
    [anon_sym_uint16_t] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(51),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [anon_sym_void] = ACTIONS(37),
    [anon_sym_foo] = ACTIONS(37),
    [anon_sym_int32_t] = ACTIONS(37),
    [anon_sym_wchar_t] = ACTIONS(37),
    [anon_sym_uint8_t] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(55),
    [anon_sym_size_t] = ACTIONS(37),
  },
  [80] = {
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(279),
  },
  [81] = {
    [aux_sym_ecall_definition_repeat1] = STATE(99),
    [anon_sym_COMMA] = ACTIONS(264),
    [sym_comments] = ACTIONS(3),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(277),
  },
  [82] = {
    [anon_sym_float] = ACTIONS(240),
    [anon_sym_union] = ACTIONS(240),
    [anon_sym_uint64_t] = ACTIONS(240),
    [sym_trusted_prefix] = ACTIONS(240),
    [sym_comments] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(240),
    [anon_sym_include] = ACTIONS(240),
    [anon_sym_int8_t] = ACTIONS(240),
    [anon_sym_uint16_t] = ACTIONS(240),
    [anon_sym_long] = ACTIONS(240),
    [anon_sym_char] = ACTIONS(240),
    [anon_sym_double] = ACTIONS(240),
    [anon_sym_foo] = ACTIONS(240),
    [sym__white_space] = ACTIONS(3),
    [sym_type_qualifier] = ACTIONS(240),
    [anon_sym_from] = ACTIONS(240),
    [anon_sym_int16_t] = ACTIONS(240),
    [anon_sym_uint32_t] = ACTIONS(240),
    [anon_sym_int64_t] = ACTIONS(240),
    [anon_sym_short] = ACTIONS(240),
    [anon_sym_unsigned] = ACTIONS(240),
    [anon_sym_struct] = ACTIONS(240),
    [anon_sym_enum] = ACTIONS(240),
    [anon_sym_void] = ACTIONS(240),
    [anon_sym_int32_t] = ACTIONS(240),
    [anon_sym_wchar_t] = ACTIONS(240),
    [anon_sym_uint8_t] = ACTIONS(240),
    [anon_sym_int] = ACTIONS(281),
    [anon_sym_size_t] = ACTIONS(240),
  },
  [83] = {
    [sym_pointer_declarator] = STATE(101),
    [sym_comments] = ACTIONS(3),
    [sym_identifier] = ACTIONS(283),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(111),
  },
  [84] = {
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(285),
  },
  [85] = {
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(287),
  },
  [86] = {
    [aux_sym_attribute_list_repeat1] = STATE(106),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_RBRACK] = ACTIONS(291),
    [sym_comments] = ACTIONS(3),
    [sym__white_space] = ACTIONS(3),
  },
  [87] = {
    [anon_sym_LPAREN] = ACTIONS(293),
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
  },
  [88] = {
    [anon_sym_float] = ACTIONS(295),
    [sym__white_space] = ACTIONS(3),
    [sym_type_qualifier] = ACTIONS(295),
    [anon_sym_union] = ACTIONS(295),
    [anon_sym_uint64_t] = ACTIONS(295),
    [anon_sym_from] = ACTIONS(295),
    [anon_sym_int16_t] = ACTIONS(295),
    [anon_sym_uint32_t] = ACTIONS(295),
    [anon_sym_int64_t] = ACTIONS(295),
    [anon_sym_short] = ACTIONS(295),
    [anon_sym_unsigned] = ACTIONS(295),
    [sym_comments] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(295),
    [anon_sym_struct] = ACTIONS(295),
    [anon_sym_include] = ACTIONS(295),
    [anon_sym_int8_t] = ACTIONS(295),
    [anon_sym_uint16_t] = ACTIONS(295),
    [anon_sym_long] = ACTIONS(295),
    [anon_sym_char] = ACTIONS(295),
    [anon_sym_double] = ACTIONS(295),
    [anon_sym_enum] = ACTIONS(295),
    [anon_sym_void] = ACTIONS(295),
    [anon_sym_foo] = ACTIONS(295),
    [anon_sym_int32_t] = ACTIONS(295),
    [anon_sym_wchar_t] = ACTIONS(295),
    [anon_sym_uint8_t] = ACTIONS(295),
    [anon_sym_int] = ACTIONS(297),
    [anon_sym_size_t] = ACTIONS(295),
  },
  [89] = {
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(299),
  },
  [90] = {
    [sym_struct_specifier] = STATE(19),
    [sym_parameter] = STATE(109),
    [sym_attribute_list] = STATE(75),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [sym_type_specifier] = STATE(76),
    [anon_sym_float] = ACTIONS(37),
    [sym__white_space] = ACTIONS(3),
    [sym_type_qualifier] = ACTIONS(234),
    [anon_sym_union] = ACTIONS(41),
    [anon_sym_uint64_t] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(236),
    [anon_sym_int16_t] = ACTIONS(37),
    [anon_sym_uint32_t] = ACTIONS(37),
    [anon_sym_int64_t] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_unsigned] = ACTIONS(37),
    [sym_comments] = ACTIONS(3),
    [anon_sym_struct] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(53),
    [anon_sym_int8_t] = ACTIONS(37),
    [anon_sym_uint16_t] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(51),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [anon_sym_void] = ACTIONS(37),
    [anon_sym_foo] = ACTIONS(37),
    [anon_sym_int32_t] = ACTIONS(37),
    [anon_sym_wchar_t] = ACTIONS(37),
    [anon_sym_uint8_t] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(55),
    [anon_sym_size_t] = ACTIONS(37),
  },
  [91] = {
    [sym_untrusted_suffix] = STATE(110),
    [sym_comments] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(299),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_allow] = ACTIONS(262),
  },
  [92] = {
    [aux_sym_ecall_definition_repeat1] = STATE(112),
    [anon_sym_COMMA] = ACTIONS(264),
    [sym_comments] = ACTIONS(3),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(301),
  },
  [93] = {
    [sym_struct_specifier] = STATE(19),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [sym_type_specifier] = STATE(113),
    [anon_sym_float] = ACTIONS(37),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_union] = ACTIONS(41),
    [anon_sym_uint64_t] = ACTIONS(37),
    [anon_sym_int16_t] = ACTIONS(37),
    [anon_sym_uint32_t] = ACTIONS(37),
    [anon_sym_int64_t] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_unsigned] = ACTIONS(37),
    [sym_comments] = ACTIONS(3),
    [anon_sym_struct] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(53),
    [anon_sym_int8_t] = ACTIONS(37),
    [anon_sym_uint16_t] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(51),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [anon_sym_void] = ACTIONS(37),
    [anon_sym_foo] = ACTIONS(37),
    [anon_sym_int32_t] = ACTIONS(37),
    [anon_sym_wchar_t] = ACTIONS(37),
    [anon_sym_uint8_t] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(55),
    [anon_sym_size_t] = ACTIONS(37),
  },
  [94] = {
    [anon_sym_COMMA] = ACTIONS(303),
    [sym_comments] = ACTIONS(3),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(303),
  },
  [95] = {
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
    [sym_identifier] = ACTIONS(283),
  },
  [96] = {
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(305),
  },
  [97] = {
    [aux_sym_ecall_definition_repeat1] = STATE(116),
    [anon_sym_COMMA] = ACTIONS(264),
    [sym_comments] = ACTIONS(3),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(307),
  },
  [98] = {
    [anon_sym_float] = ACTIONS(309),
    [anon_sym_union] = ACTIONS(309),
    [anon_sym_uint64_t] = ACTIONS(309),
    [sym_trusted_prefix] = ACTIONS(309),
    [sym_comments] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(309),
    [anon_sym_include] = ACTIONS(309),
    [anon_sym_int8_t] = ACTIONS(309),
    [anon_sym_uint16_t] = ACTIONS(309),
    [anon_sym_long] = ACTIONS(309),
    [anon_sym_char] = ACTIONS(309),
    [anon_sym_double] = ACTIONS(309),
    [anon_sym_foo] = ACTIONS(309),
    [sym__white_space] = ACTIONS(3),
    [sym_type_qualifier] = ACTIONS(309),
    [anon_sym_from] = ACTIONS(309),
    [anon_sym_int16_t] = ACTIONS(309),
    [anon_sym_uint32_t] = ACTIONS(309),
    [anon_sym_int64_t] = ACTIONS(309),
    [anon_sym_short] = ACTIONS(309),
    [anon_sym_unsigned] = ACTIONS(309),
    [anon_sym_struct] = ACTIONS(309),
    [anon_sym_enum] = ACTIONS(309),
    [anon_sym_void] = ACTIONS(309),
    [anon_sym_int32_t] = ACTIONS(309),
    [anon_sym_wchar_t] = ACTIONS(309),
    [anon_sym_uint8_t] = ACTIONS(309),
    [anon_sym_int] = ACTIONS(311),
    [anon_sym_size_t] = ACTIONS(309),
  },
  [99] = {
    [aux_sym_ecall_definition_repeat1] = STATE(112),
    [anon_sym_COMMA] = ACTIONS(264),
    [sym_comments] = ACTIONS(3),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(307),
  },
  [100] = {
    [anon_sym_COMMA] = ACTIONS(313),
    [sym_comments] = ACTIONS(3),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(313),
  },
  [101] = {
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
    [sym_identifier] = ACTIONS(315),
  },
  [102] = {
    [sym_comments] = ACTIONS(3),
    [sym_identifier] = ACTIONS(317),
    [sym__white_space] = ACTIONS(3),
    [sym_number] = ACTIONS(317),
  },
  [103] = {
    [sym_comments] = ACTIONS(3),
    [sym_identifier] = ACTIONS(319),
    [sym__white_space] = ACTIONS(3),
    [sym_number] = ACTIONS(319),
  },
  [104] = {
    [sym__pointer_attributes] = STATE(120),
    [sym_size_attribute] = STATE(120),
    [sym_count_attribute] = STATE(120),
    [anon_sym_user_check] = ACTIONS(321),
    [anon_sym_size] = ACTIONS(256),
    [anon_sym_count] = ACTIONS(258),
    [anon_sym_string] = ACTIONS(321),
    [anon_sym_isptr] = ACTIONS(321),
    [sym_comments] = ACTIONS(3),
    [anon_sym_wstring] = ACTIONS(321),
    [anon_sym_out] = ACTIONS(321),
    [anon_sym_readonly] = ACTIONS(321),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(321),
  },
  [105] = {
    [anon_sym_float] = ACTIONS(323),
    [sym__white_space] = ACTIONS(3),
    [sym_type_qualifier] = ACTIONS(323),
    [anon_sym_union] = ACTIONS(323),
    [anon_sym_uint64_t] = ACTIONS(323),
    [anon_sym_int16_t] = ACTIONS(323),
    [anon_sym_uint32_t] = ACTIONS(323),
    [anon_sym_int64_t] = ACTIONS(323),
    [anon_sym_short] = ACTIONS(323),
    [anon_sym_unsigned] = ACTIONS(323),
    [sym_comments] = ACTIONS(3),
    [anon_sym_struct] = ACTIONS(323),
    [anon_sym_enum] = ACTIONS(323),
    [anon_sym_int8_t] = ACTIONS(323),
    [anon_sym_uint16_t] = ACTIONS(323),
    [anon_sym_long] = ACTIONS(323),
    [anon_sym_char] = ACTIONS(323),
    [anon_sym_double] = ACTIONS(323),
    [anon_sym_void] = ACTIONS(323),
    [anon_sym_foo] = ACTIONS(323),
    [anon_sym_int32_t] = ACTIONS(323),
    [anon_sym_wchar_t] = ACTIONS(323),
    [anon_sym_uint8_t] = ACTIONS(323),
    [anon_sym_int] = ACTIONS(325),
    [anon_sym_size_t] = ACTIONS(323),
  },
  [106] = {
    [aux_sym_attribute_list_repeat1] = STATE(122),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_RBRACK] = ACTIONS(327),
    [sym_comments] = ACTIONS(3),
    [sym__white_space] = ACTIONS(3),
  },
  [107] = {
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
    [sym_identifier] = ACTIONS(329),
  },
  [108] = {
    [anon_sym_float] = ACTIONS(331),
    [sym__white_space] = ACTIONS(3),
    [sym_type_qualifier] = ACTIONS(331),
    [anon_sym_union] = ACTIONS(331),
    [anon_sym_uint64_t] = ACTIONS(331),
    [anon_sym_from] = ACTIONS(331),
    [anon_sym_int16_t] = ACTIONS(331),
    [anon_sym_uint32_t] = ACTIONS(331),
    [anon_sym_int64_t] = ACTIONS(331),
    [anon_sym_short] = ACTIONS(331),
    [anon_sym_unsigned] = ACTIONS(331),
    [sym_comments] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(331),
    [anon_sym_struct] = ACTIONS(331),
    [anon_sym_include] = ACTIONS(331),
    [anon_sym_int8_t] = ACTIONS(331),
    [anon_sym_uint16_t] = ACTIONS(331),
    [anon_sym_long] = ACTIONS(331),
    [anon_sym_char] = ACTIONS(331),
    [anon_sym_double] = ACTIONS(331),
    [anon_sym_enum] = ACTIONS(331),
    [anon_sym_void] = ACTIONS(331),
    [anon_sym_foo] = ACTIONS(331),
    [anon_sym_int32_t] = ACTIONS(331),
    [anon_sym_wchar_t] = ACTIONS(331),
    [anon_sym_uint8_t] = ACTIONS(331),
    [anon_sym_int] = ACTIONS(333),
    [anon_sym_size_t] = ACTIONS(331),
  },
  [109] = {
    [anon_sym_COMMA] = ACTIONS(335),
    [sym_comments] = ACTIONS(3),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(335),
  },
  [110] = {
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(337),
  },
  [111] = {
    [sym_untrusted_suffix] = STATE(125),
    [sym_comments] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(337),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_allow] = ACTIONS(262),
  },
  [112] = {
    [aux_sym_ecall_definition_repeat1] = STATE(112),
    [anon_sym_COMMA] = ACTIONS(339),
    [sym_comments] = ACTIONS(3),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(335),
  },
  [113] = {
    [sym_pointer_declarator] = STATE(126),
    [sym_comments] = ACTIONS(3),
    [sym_identifier] = ACTIONS(315),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(111),
  },
  [114] = {
    [anon_sym_float] = ACTIONS(342),
    [anon_sym_union] = ACTIONS(342),
    [anon_sym_uint64_t] = ACTIONS(342),
    [sym_trusted_prefix] = ACTIONS(342),
    [sym_comments] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(342),
    [anon_sym_include] = ACTIONS(342),
    [anon_sym_int8_t] = ACTIONS(342),
    [anon_sym_uint16_t] = ACTIONS(342),
    [anon_sym_long] = ACTIONS(342),
    [anon_sym_char] = ACTIONS(342),
    [anon_sym_double] = ACTIONS(342),
    [anon_sym_foo] = ACTIONS(342),
    [sym__white_space] = ACTIONS(3),
    [sym_type_qualifier] = ACTIONS(342),
    [anon_sym_from] = ACTIONS(342),
    [anon_sym_int16_t] = ACTIONS(342),
    [anon_sym_uint32_t] = ACTIONS(342),
    [anon_sym_int64_t] = ACTIONS(342),
    [anon_sym_short] = ACTIONS(342),
    [anon_sym_unsigned] = ACTIONS(342),
    [anon_sym_struct] = ACTIONS(342),
    [anon_sym_enum] = ACTIONS(342),
    [anon_sym_void] = ACTIONS(342),
    [anon_sym_int32_t] = ACTIONS(342),
    [anon_sym_wchar_t] = ACTIONS(342),
    [anon_sym_uint8_t] = ACTIONS(342),
    [anon_sym_int] = ACTIONS(344),
    [anon_sym_size_t] = ACTIONS(342),
  },
  [115] = {
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(346),
  },
  [116] = {
    [aux_sym_ecall_definition_repeat1] = STATE(112),
    [anon_sym_COMMA] = ACTIONS(264),
    [sym_comments] = ACTIONS(3),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(348),
  },
  [117] = {
    [anon_sym_COMMA] = ACTIONS(350),
    [sym_comments] = ACTIONS(3),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(350),
  },
  [118] = {
    [anon_sym_COMMA] = ACTIONS(352),
    [anon_sym_RBRACK] = ACTIONS(352),
    [sym_comments] = ACTIONS(3),
    [sym__white_space] = ACTIONS(3),
  },
  [119] = {
    [anon_sym_COMMA] = ACTIONS(354),
    [anon_sym_RBRACK] = ACTIONS(354),
    [sym_comments] = ACTIONS(3),
    [sym__white_space] = ACTIONS(3),
  },
  [120] = {
    [anon_sym_COMMA] = ACTIONS(356),
    [anon_sym_RBRACK] = ACTIONS(356),
    [sym_comments] = ACTIONS(3),
    [sym__white_space] = ACTIONS(3),
  },
  [121] = {
    [anon_sym_float] = ACTIONS(358),
    [sym__white_space] = ACTIONS(3),
    [sym_type_qualifier] = ACTIONS(358),
    [anon_sym_union] = ACTIONS(358),
    [anon_sym_uint64_t] = ACTIONS(358),
    [anon_sym_int16_t] = ACTIONS(358),
    [anon_sym_uint32_t] = ACTIONS(358),
    [anon_sym_int64_t] = ACTIONS(358),
    [anon_sym_short] = ACTIONS(358),
    [anon_sym_unsigned] = ACTIONS(358),
    [sym_comments] = ACTIONS(3),
    [anon_sym_struct] = ACTIONS(358),
    [anon_sym_enum] = ACTIONS(358),
    [anon_sym_int8_t] = ACTIONS(358),
    [anon_sym_uint16_t] = ACTIONS(358),
    [anon_sym_long] = ACTIONS(358),
    [anon_sym_char] = ACTIONS(358),
    [anon_sym_double] = ACTIONS(358),
    [anon_sym_void] = ACTIONS(358),
    [anon_sym_foo] = ACTIONS(358),
    [anon_sym_int32_t] = ACTIONS(358),
    [anon_sym_wchar_t] = ACTIONS(358),
    [anon_sym_uint8_t] = ACTIONS(358),
    [anon_sym_int] = ACTIONS(360),
    [anon_sym_size_t] = ACTIONS(358),
  },
  [122] = {
    [aux_sym_attribute_list_repeat1] = STATE(122),
    [anon_sym_COMMA] = ACTIONS(362),
    [anon_sym_RBRACK] = ACTIONS(356),
    [sym_comments] = ACTIONS(3),
    [sym__white_space] = ACTIONS(3),
  },
  [123] = {
    [aux_sym_import_list_repeat1] = STATE(130),
    [anon_sym_COMMA] = ACTIONS(182),
    [sym_comments] = ACTIONS(3),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(365),
  },
  [124] = {
    [anon_sym_float] = ACTIONS(367),
    [sym__white_space] = ACTIONS(3),
    [sym_type_qualifier] = ACTIONS(367),
    [anon_sym_union] = ACTIONS(367),
    [anon_sym_uint64_t] = ACTIONS(367),
    [anon_sym_from] = ACTIONS(367),
    [anon_sym_int16_t] = ACTIONS(367),
    [anon_sym_uint32_t] = ACTIONS(367),
    [anon_sym_int64_t] = ACTIONS(367),
    [anon_sym_short] = ACTIONS(367),
    [anon_sym_unsigned] = ACTIONS(367),
    [sym_comments] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(367),
    [anon_sym_struct] = ACTIONS(367),
    [anon_sym_include] = ACTIONS(367),
    [anon_sym_int8_t] = ACTIONS(367),
    [anon_sym_uint16_t] = ACTIONS(367),
    [anon_sym_long] = ACTIONS(367),
    [anon_sym_char] = ACTIONS(367),
    [anon_sym_double] = ACTIONS(367),
    [anon_sym_enum] = ACTIONS(367),
    [anon_sym_void] = ACTIONS(367),
    [anon_sym_foo] = ACTIONS(367),
    [anon_sym_int32_t] = ACTIONS(367),
    [anon_sym_wchar_t] = ACTIONS(367),
    [anon_sym_uint8_t] = ACTIONS(367),
    [anon_sym_int] = ACTIONS(369),
    [anon_sym_size_t] = ACTIONS(367),
  },
  [125] = {
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(371),
  },
  [126] = {
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
    [sym_identifier] = ACTIONS(373),
  },
  [127] = {
    [anon_sym_float] = ACTIONS(375),
    [anon_sym_union] = ACTIONS(375),
    [anon_sym_uint64_t] = ACTIONS(375),
    [sym_trusted_prefix] = ACTIONS(375),
    [sym_comments] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(375),
    [anon_sym_include] = ACTIONS(375),
    [anon_sym_int8_t] = ACTIONS(375),
    [anon_sym_uint16_t] = ACTIONS(375),
    [anon_sym_long] = ACTIONS(375),
    [anon_sym_char] = ACTIONS(375),
    [anon_sym_double] = ACTIONS(375),
    [anon_sym_foo] = ACTIONS(375),
    [sym__white_space] = ACTIONS(3),
    [sym_type_qualifier] = ACTIONS(375),
    [anon_sym_from] = ACTIONS(375),
    [anon_sym_int16_t] = ACTIONS(375),
    [anon_sym_uint32_t] = ACTIONS(375),
    [anon_sym_int64_t] = ACTIONS(375),
    [anon_sym_short] = ACTIONS(375),
    [anon_sym_unsigned] = ACTIONS(375),
    [anon_sym_struct] = ACTIONS(375),
    [anon_sym_enum] = ACTIONS(375),
    [anon_sym_void] = ACTIONS(375),
    [anon_sym_int32_t] = ACTIONS(375),
    [anon_sym_wchar_t] = ACTIONS(375),
    [anon_sym_uint8_t] = ACTIONS(375),
    [anon_sym_int] = ACTIONS(377),
    [anon_sym_size_t] = ACTIONS(375),
  },
  [128] = {
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(379),
  },
  [129] = {
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(381),
  },
  [130] = {
    [aux_sym_import_list_repeat1] = STATE(135),
    [anon_sym_COMMA] = ACTIONS(182),
    [sym_comments] = ACTIONS(3),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(383),
  },
  [131] = {
    [anon_sym_float] = ACTIONS(385),
    [sym__white_space] = ACTIONS(3),
    [sym_type_qualifier] = ACTIONS(385),
    [anon_sym_union] = ACTIONS(385),
    [anon_sym_uint64_t] = ACTIONS(385),
    [anon_sym_from] = ACTIONS(385),
    [anon_sym_int16_t] = ACTIONS(385),
    [anon_sym_uint32_t] = ACTIONS(385),
    [anon_sym_int64_t] = ACTIONS(385),
    [anon_sym_short] = ACTIONS(385),
    [anon_sym_unsigned] = ACTIONS(385),
    [sym_comments] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(385),
    [anon_sym_struct] = ACTIONS(385),
    [anon_sym_include] = ACTIONS(385),
    [anon_sym_int8_t] = ACTIONS(385),
    [anon_sym_uint16_t] = ACTIONS(385),
    [anon_sym_long] = ACTIONS(385),
    [anon_sym_char] = ACTIONS(385),
    [anon_sym_double] = ACTIONS(385),
    [anon_sym_enum] = ACTIONS(385),
    [anon_sym_void] = ACTIONS(385),
    [anon_sym_foo] = ACTIONS(385),
    [anon_sym_int32_t] = ACTIONS(385),
    [anon_sym_wchar_t] = ACTIONS(385),
    [anon_sym_uint8_t] = ACTIONS(385),
    [anon_sym_int] = ACTIONS(387),
    [anon_sym_size_t] = ACTIONS(385),
  },
  [132] = {
    [anon_sym_COMMA] = ACTIONS(389),
    [sym_comments] = ACTIONS(3),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(389),
  },
  [133] = {
    [anon_sym_float] = ACTIONS(391),
    [anon_sym_union] = ACTIONS(391),
    [anon_sym_uint64_t] = ACTIONS(391),
    [sym_trusted_prefix] = ACTIONS(391),
    [sym_comments] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(391),
    [anon_sym_include] = ACTIONS(391),
    [anon_sym_int8_t] = ACTIONS(391),
    [anon_sym_uint16_t] = ACTIONS(391),
    [anon_sym_long] = ACTIONS(391),
    [anon_sym_char] = ACTIONS(391),
    [anon_sym_double] = ACTIONS(391),
    [anon_sym_foo] = ACTIONS(391),
    [sym__white_space] = ACTIONS(3),
    [sym_type_qualifier] = ACTIONS(391),
    [anon_sym_from] = ACTIONS(391),
    [anon_sym_int16_t] = ACTIONS(391),
    [anon_sym_uint32_t] = ACTIONS(391),
    [anon_sym_int64_t] = ACTIONS(391),
    [anon_sym_short] = ACTIONS(391),
    [anon_sym_unsigned] = ACTIONS(391),
    [anon_sym_struct] = ACTIONS(391),
    [anon_sym_enum] = ACTIONS(391),
    [anon_sym_void] = ACTIONS(391),
    [anon_sym_int32_t] = ACTIONS(391),
    [anon_sym_wchar_t] = ACTIONS(391),
    [anon_sym_uint8_t] = ACTIONS(391),
    [anon_sym_int] = ACTIONS(393),
    [anon_sym_size_t] = ACTIONS(391),
  },
  [134] = {
    [sym__white_space] = ACTIONS(3),
    [sym_comments] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(395),
  },
  [135] = {
    [aux_sym_import_list_repeat1] = STATE(135),
    [anon_sym_COMMA] = ACTIONS(274),
    [sym_comments] = ACTIONS(3),
    [sym__white_space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(272),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
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
  [37] = {.count = 1, .reusable = true}, SHIFT(19),
  [39] = {.count = 1, .reusable = true}, SHIFT(20),
  [41] = {.count = 1, .reusable = true}, SHIFT(21),
  [43] = {.count = 1, .reusable = true}, SHIFT(22),
  [45] = {.count = 1, .reusable = true}, SHIFT(23),
  [47] = {.count = 1, .reusable = true}, SHIFT(24),
  [49] = {.count = 1, .reusable = true}, SHIFT(25),
  [51] = {.count = 1, .reusable = true}, SHIFT(26),
  [53] = {.count = 1, .reusable = true}, SHIFT(27),
  [55] = {.count = 1, .reusable = false}, SHIFT(19),
  [57] = {.count = 1, .reusable = true}, SHIFT(32),
  [59] = {.count = 1, .reusable = true}, SHIFT(33),
  [61] = {.count = 1, .reusable = true}, SHIFT(34),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 4),
  [65] = {.count = 1, .reusable = true}, SHIFT(38),
  [67] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [70] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [73] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [76] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [78] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_include, 3),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_type_specifier, 1),
  [85] = {.count = 1, .reusable = true}, SHIFT(40),
  [87] = {.count = 1, .reusable = true}, SHIFT(41),
  [89] = {.count = 1, .reusable = true}, SHIFT(42),
  [91] = {.count = 1, .reusable = true}, SHIFT(43),
  [93] = {.count = 1, .reusable = true}, SHIFT(44),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym_type_specifier, 1),
  [97] = {.count = 1, .reusable = false}, SHIFT(45),
  [99] = {.count = 1, .reusable = true}, SHIFT(46),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_untrusted_inner_items, 1),
  [103] = {.count = 1, .reusable = false}, REDUCE(sym_untrusted_inner_items, 1),
  [105] = {.count = 1, .reusable = true}, SHIFT(47),
  [107] = {.count = 1, .reusable = true}, SHIFT(49),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_retval, 1),
  [111] = {.count = 1, .reusable = true}, SHIFT(50),
  [113] = {.count = 1, .reusable = true}, SHIFT(53),
  [115] = {.count = 1, .reusable = true}, SHIFT(52),
  [117] = {.count = 1, .reusable = true}, SHIFT(55),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_trusted_inner_items, 1),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym_trusted_inner_items, 1),
  [123] = {.count = 1, .reusable = true}, SHIFT(56),
  [125] = {.count = 1, .reusable = true}, SHIFT(58),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 5),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_retval, 2),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_union_specifier, 2),
  [133] = {.count = 1, .reusable = true}, SHIFT(60),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_struct_specifier, 2),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_untrusted, 4),
  [139] = {.count = 1, .reusable = true}, SHIFT(61),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_type_specifier, 2),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_enum_specifier, 2),
  [145] = {.count = 1, .reusable = true}, SHIFT(62),
  [147] = {.count = 2, .reusable = true}, REDUCE(aux_sym_untrusted_repeat1, 2), SHIFT_REPEAT(19),
  [150] = {.count = 2, .reusable = true}, REDUCE(aux_sym_untrusted_repeat1, 2), SHIFT_REPEAT(20),
  [153] = {.count = 2, .reusable = true}, REDUCE(aux_sym_untrusted_repeat1, 2), SHIFT_REPEAT(21),
  [156] = {.count = 2, .reusable = true}, REDUCE(aux_sym_untrusted_repeat1, 2), SHIFT_REPEAT(22),
  [159] = {.count = 1, .reusable = true}, REDUCE(aux_sym_untrusted_repeat1, 2),
  [161] = {.count = 2, .reusable = true}, REDUCE(aux_sym_untrusted_repeat1, 2), SHIFT_REPEAT(23),
  [164] = {.count = 2, .reusable = true}, REDUCE(aux_sym_untrusted_repeat1, 2), SHIFT_REPEAT(25),
  [167] = {.count = 2, .reusable = true}, REDUCE(aux_sym_untrusted_repeat1, 2), SHIFT_REPEAT(26),
  [170] = {.count = 2, .reusable = true}, REDUCE(aux_sym_untrusted_repeat1, 2), SHIFT_REPEAT(27),
  [173] = {.count = 2, .reusable = false}, REDUCE(aux_sym_untrusted_repeat1, 2), SHIFT_REPEAT(19),
  [176] = {.count = 1, .reusable = true}, SHIFT(63),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym_pointer_declarator, 1),
  [180] = {.count = 1, .reusable = true}, SHIFT(64),
  [182] = {.count = 1, .reusable = true}, SHIFT(65),
  [184] = {.count = 1, .reusable = true}, REDUCE(sym_import_list, 1),
  [186] = {.count = 1, .reusable = true}, SHIFT(67),
  [188] = {.count = 1, .reusable = true}, REDUCE(sym_trusted, 4),
  [190] = {.count = 1, .reusable = true}, SHIFT(68),
  [192] = {.count = 2, .reusable = true}, REDUCE(aux_sym_trusted_repeat1, 2), SHIFT_REPEAT(19),
  [195] = {.count = 2, .reusable = true}, REDUCE(aux_sym_trusted_repeat1, 2), SHIFT_REPEAT(21),
  [198] = {.count = 2, .reusable = true}, REDUCE(aux_sym_trusted_repeat1, 2), SHIFT_REPEAT(33),
  [201] = {.count = 1, .reusable = true}, REDUCE(aux_sym_trusted_repeat1, 2),
  [203] = {.count = 2, .reusable = true}, REDUCE(aux_sym_trusted_repeat1, 2), SHIFT_REPEAT(25),
  [206] = {.count = 2, .reusable = true}, REDUCE(aux_sym_trusted_repeat1, 2), SHIFT_REPEAT(26),
  [209] = {.count = 2, .reusable = true}, REDUCE(aux_sym_trusted_repeat1, 2), SHIFT_REPEAT(20),
  [212] = {.count = 2, .reusable = true}, REDUCE(aux_sym_trusted_repeat1, 2), SHIFT_REPEAT(22),
  [215] = {.count = 2, .reusable = true}, REDUCE(aux_sym_trusted_repeat1, 2), SHIFT_REPEAT(23),
  [218] = {.count = 2, .reusable = true}, REDUCE(aux_sym_trusted_repeat1, 2), SHIFT_REPEAT(27),
  [221] = {.count = 2, .reusable = false}, REDUCE(aux_sym_trusted_repeat1, 2), SHIFT_REPEAT(19),
  [224] = {.count = 1, .reusable = true}, SHIFT(69),
  [226] = {.count = 1, .reusable = true}, REDUCE(sym_retval, 3),
  [228] = {.count = 1, .reusable = true}, SHIFT(70),
  [230] = {.count = 1, .reusable = false}, REDUCE(sym_include, 3),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym_untrusted, 5),
  [234] = {.count = 1, .reusable = true}, SHIFT(71),
  [236] = {.count = 1, .reusable = true}, SHIFT(72),
  [238] = {.count = 1, .reusable = true}, SHIFT(73),
  [240] = {.count = 1, .reusable = true}, REDUCE(sym_from, 5),
  [242] = {.count = 1, .reusable = true}, SHIFT(77),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym_import_list, 2),
  [246] = {.count = 1, .reusable = true}, SHIFT(79),
  [248] = {.count = 1, .reusable = true}, REDUCE(sym_trusted, 5),
  [250] = {.count = 1, .reusable = true}, SHIFT(80),
  [252] = {.count = 1, .reusable = true}, SHIFT(82),
  [254] = {.count = 1, .reusable = true}, SHIFT(86),
  [256] = {.count = 1, .reusable = true}, SHIFT(84),
  [258] = {.count = 1, .reusable = true}, SHIFT(85),
  [260] = {.count = 1, .reusable = true}, SHIFT(88),
  [262] = {.count = 1, .reusable = true}, SHIFT(87),
  [264] = {.count = 1, .reusable = true}, SHIFT(90),
  [266] = {.count = 1, .reusable = true}, SHIFT(91),
  [268] = {.count = 1, .reusable = true}, SHIFT(93),
  [270] = {.count = 1, .reusable = true}, SHIFT(94),
  [272] = {.count = 1, .reusable = true}, REDUCE(aux_sym_import_list_repeat1, 2),
  [274] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_list_repeat1, 2), SHIFT_REPEAT(65),
  [277] = {.count = 1, .reusable = true}, SHIFT(96),
  [279] = {.count = 1, .reusable = true}, SHIFT(98),
  [281] = {.count = 1, .reusable = false}, REDUCE(sym_from, 5),
  [283] = {.count = 1, .reusable = true}, SHIFT(100),
  [285] = {.count = 1, .reusable = true}, SHIFT(102),
  [287] = {.count = 1, .reusable = true}, SHIFT(103),
  [289] = {.count = 1, .reusable = true}, SHIFT(104),
  [291] = {.count = 1, .reusable = true}, SHIFT(105),
  [293] = {.count = 1, .reusable = true}, SHIFT(107),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_ocall_definition, 5),
  [297] = {.count = 1, .reusable = false}, REDUCE(sym_ocall_definition, 5),
  [299] = {.count = 1, .reusable = true}, SHIFT(108),
  [301] = {.count = 1, .reusable = true}, SHIFT(111),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [305] = {.count = 1, .reusable = true}, SHIFT(114),
  [307] = {.count = 1, .reusable = true}, SHIFT(115),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym_ecall_definition, 5),
  [311] = {.count = 1, .reusable = false}, REDUCE(sym_ecall_definition, 5),
  [313] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 3),
  [315] = {.count = 1, .reusable = true}, SHIFT(117),
  [317] = {.count = 1, .reusable = true}, SHIFT(118),
  [319] = {.count = 1, .reusable = true}, SHIFT(119),
  [321] = {.count = 1, .reusable = true}, SHIFT(120),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_list, 3),
  [325] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_list, 3),
  [327] = {.count = 1, .reusable = true}, SHIFT(121),
  [329] = {.count = 1, .reusable = true}, SHIFT(123),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_ocall_definition, 6),
  [333] = {.count = 1, .reusable = false}, REDUCE(sym_ocall_definition, 6),
  [335] = {.count = 1, .reusable = true}, REDUCE(aux_sym_ecall_definition_repeat1, 2),
  [337] = {.count = 1, .reusable = true}, SHIFT(124),
  [339] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ecall_definition_repeat1, 2), SHIFT_REPEAT(90),
  [342] = {.count = 1, .reusable = true}, REDUCE(sym_ecall_definition, 6),
  [344] = {.count = 1, .reusable = false}, REDUCE(sym_ecall_definition, 6),
  [346] = {.count = 1, .reusable = true}, SHIFT(127),
  [348] = {.count = 1, .reusable = true}, SHIFT(128),
  [350] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 4),
  [352] = {.count = 1, .reusable = true}, REDUCE(sym_size_attribute, 3),
  [354] = {.count = 1, .reusable = true}, REDUCE(sym_count_attribute, 3),
  [356] = {.count = 1, .reusable = true}, REDUCE(aux_sym_attribute_list_repeat1, 2),
  [358] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_list, 4),
  [360] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_list, 4),
  [362] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attribute_list_repeat1, 2), SHIFT_REPEAT(104),
  [365] = {.count = 1, .reusable = true}, SHIFT(129),
  [367] = {.count = 1, .reusable = true}, REDUCE(sym_ocall_definition, 7),
  [369] = {.count = 1, .reusable = false}, REDUCE(sym_ocall_definition, 7),
  [371] = {.count = 1, .reusable = true}, SHIFT(131),
  [373] = {.count = 1, .reusable = true}, SHIFT(132),
  [375] = {.count = 1, .reusable = true}, REDUCE(sym_ecall_definition, 7),
  [377] = {.count = 1, .reusable = false}, REDUCE(sym_ecall_definition, 7),
  [379] = {.count = 1, .reusable = true}, SHIFT(133),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym_untrusted_suffix, 4),
  [383] = {.count = 1, .reusable = true}, SHIFT(134),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym_ocall_definition, 8),
  [387] = {.count = 1, .reusable = false}, REDUCE(sym_ocall_definition, 8),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 5),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_ecall_definition, 8),
  [393] = {.count = 1, .reusable = false}, REDUCE(sym_ecall_definition, 8),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym_untrusted_suffix, 5),
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
