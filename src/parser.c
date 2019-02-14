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
#define STATE_COUNT 142
#define SYMBOL_COUNT 91
#define ALIAS_COUNT 0
#define TOKEN_COUNT 60
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
  anon_sym_isptr = 45,
  anon_sym_readonly = 46,
  anon_sym_size = 47,
  anon_sym_EQ = 48,
  anon_sym_count = 49,
  sym_trusted_prefix_public = 50,
  anon_sym_allow = 51,
  sym_suffix_propagate_errno = 52,
  sym_suffix_transition_using_threads = 53,
  sym_identifier = 54,
  sym_string = 55,
  sym_number = 56,
  sym_comments = 57,
  sym_new_line = 58,
  sym__white_space = 59,
  sym_source_file = 60,
  sym__main_item = 61,
  sym_include = 62,
  sym_from = 63,
  sym_import_list = 64,
  sym_trusted = 65,
  sym_untrusted = 66,
  sym_trusted_inner_items = 67,
  sym_untrusted_inner_items = 68,
  sym_ecall_definition = 69,
  sym_ocall_definition = 70,
  sym_retval = 71,
  sym_parameter = 72,
  sym_type_specifier = 73,
  sym_struct_specifier = 74,
  sym_union_specifier = 75,
  sym_enum_specifier = 76,
  sym_pointer_declarator = 77,
  sym_attribute_list = 78,
  sym__pointer_attributes = 79,
  sym_size_attribute = 80,
  sym_count_attribute = 81,
  sym_untrusted_suffix_allow = 82,
  sym__untrusted_suffix = 83,
  aux_sym_source_file_repeat1 = 84,
  aux_sym_import_list_repeat1 = 85,
  aux_sym_trusted_repeat1 = 86,
  aux_sym_untrusted_repeat1 = 87,
  aux_sym_ecall_definition_repeat1 = 88,
  aux_sym_ocall_definition_repeat1 = 89,
  aux_sym_attribute_list_repeat1 = 90,
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
  [sym_untrusted_suffix_allow] = "untrusted_suffix_allow",
  [sym__untrusted_suffix] = "_untrusted_suffix",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_import_list_repeat1] = "import_list_repeat1",
  [aux_sym_trusted_repeat1] = "trusted_repeat1",
  [aux_sym_untrusted_repeat1] = "untrusted_repeat1",
  [aux_sym_ecall_definition_repeat1] = "ecall_definition_repeat1",
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
      if (lookahead == 'p')
        ADVANCE(79);
      END_STATE();
    case 49:
      if (lookahead == 'n')
        ADVANCE(80);
      END_STATE();
    case 50:
      if (lookahead == 't')
        ADVANCE(81);
      END_STATE();
    case 51:
      if (lookahead == 'o')
        ADVANCE(82);
      END_STATE();
    case 52:
      if (lookahead == 'b')
        ADVANCE(83);
      END_STATE();
    case 53:
      if (lookahead == 'a')
        ADVANCE(84);
      END_STATE();
    case 54:
      if (lookahead == 'o')
        ADVANCE(85);
      END_STATE();
    case 55:
      if (lookahead == 'z')
        ADVANCE(86);
      END_STATE();
    case 56:
      if (lookahead == 'r')
        ADVANCE(87);
      END_STATE();
    case 57:
      if (lookahead == 'a')
        ADVANCE(88);
      if (lookahead == 'u')
        ADVANCE(89);
      END_STATE();
    case 58:
      if (lookahead == 'n')
        ADVANCE(90);
      END_STATE();
    case 59:
      if (lookahead == 'i')
        ADVANCE(91);
      if (lookahead == 's')
        ADVANCE(92);
      if (lookahead == 't')
        ADVANCE(93);
      END_STATE();
    case 60:
      if (lookahead == 'e')
        ADVANCE(94);
      END_STATE();
    case 61:
      if (lookahead == 'i')
        ADVANCE(95);
      END_STATE();
    case 62:
      if (lookahead == 'h')
        ADVANCE(96);
      END_STATE();
    case 63:
      if (lookahead == 't')
        ADVANCE(97);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_header_name);
      END_STATE();
    case 65:
      if (lookahead == '*')
        ADVANCE(65);
      if (lookahead == '/')
        ADVANCE(98);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 66:
      if (lookahead == 'o')
        ADVANCE(99);
      END_STATE();
    case 67:
      if (lookahead == 'l')
        ADVANCE(100);
      END_STATE();
    case 68:
      if (lookahead == 'r')
        ADVANCE(101);
      END_STATE();
    case 69:
      if (lookahead == 's')
        ADVANCE(102);
      END_STATE();
    case 70:
      if (lookahead == 'n')
        ADVANCE(103);
      END_STATE();
    case 71:
      if (lookahead == 'b')
        ADVANCE(104);
      END_STATE();
    case 72:
      if (lookahead == 'l')
        ADVANCE(105);
      END_STATE();
    case 73:
      if (lookahead == 'm')
        ADVANCE(106);
      END_STATE();
    case 74:
      if (lookahead == 'a')
        ADVANCE(107);
      END_STATE();
    case 75:
      if (lookahead == 'm')
        ADVANCE(108);
      END_STATE();
    case 76:
      if (lookahead == 'o')
        ADVANCE(109);
      END_STATE();
    case 77:
      if (lookahead == 'l')
        ADVANCE(110);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1')
        ADVANCE(111);
      if (lookahead == '3')
        ADVANCE(112);
      if (lookahead == '6')
        ADVANCE(113);
      if (lookahead == '8')
        ADVANCE(114);
      END_STATE();
    case 79:
      if (lookahead == 't')
        ADVANCE(115);
      END_STATE();
    case 80:
      if (lookahead == 'g')
        ADVANCE(116);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 82:
      if (lookahead == 'p')
        ADVANCE(117);
      END_STATE();
    case 83:
      if (lookahead == 'l')
        ADVANCE(118);
      END_STATE();
    case 84:
      if (lookahead == 'd')
        ADVANCE(119);
      END_STATE();
    case 85:
      if (lookahead == 'r')
        ADVANCE(120);
      END_STATE();
    case 86:
      if (lookahead == 'e')
        ADVANCE(121);
      END_STATE();
    case 87:
      if (lookahead == 'i')
        ADVANCE(122);
      if (lookahead == 'u')
        ADVANCE(123);
      END_STATE();
    case 88:
      if (lookahead == 'n')
        ADVANCE(124);
      END_STATE();
    case 89:
      if (lookahead == 's')
        ADVANCE(125);
      END_STATE();
    case 90:
      if (lookahead == 't')
        ADVANCE(126);
      END_STATE();
    case 91:
      if (lookahead == 'o')
        ADVANCE(127);
      END_STATE();
    case 92:
      if (lookahead == 'i')
        ADVANCE(128);
      END_STATE();
    case 93:
      if (lookahead == 'r')
        ADVANCE(129);
      END_STATE();
    case 94:
      if (lookahead == 'r')
        ADVANCE(130);
      END_STATE();
    case 95:
      if (lookahead == 'd')
        ADVANCE(131);
      END_STATE();
    case 96:
      if (lookahead == 'a')
        ADVANCE(132);
      END_STATE();
    case 97:
      if (lookahead == 'r')
        ADVANCE(133);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_comments);
      END_STATE();
    case 99:
      if (lookahead == 'w')
        ADVANCE(134);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 102:
      if (lookahead == 't')
        ADVANCE(135);
      END_STATE();
    case 103:
      if (lookahead == 't')
        ADVANCE(136);
      END_STATE();
    case 104:
      if (lookahead == 'l')
        ADVANCE(137);
      END_STATE();
    case 105:
      if (lookahead == 'a')
        ADVANCE(138);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 107:
      if (lookahead == 't')
        ADVANCE(139);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 109:
      if (lookahead == 'r')
        ADVANCE(140);
      END_STATE();
    case 110:
      if (lookahead == 'u')
        ADVANCE(141);
      END_STATE();
    case 111:
      if (lookahead == '6')
        ADVANCE(142);
      END_STATE();
    case 112:
      if (lookahead == '2')
        ADVANCE(143);
      END_STATE();
    case 113:
      if (lookahead == '4')
        ADVANCE(144);
      END_STATE();
    case 114:
      if (lookahead == '_')
        ADVANCE(145);
      END_STATE();
    case 115:
      if (lookahead == 'r')
        ADVANCE(146);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 117:
      if (lookahead == 'a')
        ADVANCE(147);
      END_STATE();
    case 118:
      if (lookahead == 'i')
        ADVANCE(148);
      END_STATE();
    case 119:
      if (lookahead == 'o')
        ADVANCE(149);
      END_STATE();
    case 120:
      if (lookahead == 't')
        ADVANCE(150);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_size);
      if (lookahead == '_')
        ADVANCE(151);
      END_STATE();
    case 122:
      if (lookahead == 'n')
        ADVANCE(152);
      END_STATE();
    case 123:
      if (lookahead == 'c')
        ADVANCE(153);
      END_STATE();
    case 124:
      if (lookahead == 's')
        ADVANCE(154);
      END_STATE();
    case 125:
      if (lookahead == 't')
        ADVANCE(155);
      END_STATE();
    case 126:
      if (lookahead == '1')
        ADVANCE(156);
      if (lookahead == '3')
        ADVANCE(157);
      if (lookahead == '6')
        ADVANCE(158);
      if (lookahead == '8')
        ADVANCE(159);
      END_STATE();
    case 127:
      if (lookahead == 'n')
        ADVANCE(160);
      END_STATE();
    case 128:
      if (lookahead == 'g')
        ADVANCE(161);
      END_STATE();
    case 129:
      if (lookahead == 'u')
        ADVANCE(162);
      END_STATE();
    case 130:
      if (lookahead == '_')
        ADVANCE(163);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 132:
      if (lookahead == 'r')
        ADVANCE(164);
      END_STATE();
    case 133:
      if (lookahead == 'i')
        ADVANCE(165);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_allow);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_type_qualifier);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 137:
      if (lookahead == 'e')
        ADVANCE(166);
      END_STATE();
    case 138:
      if (lookahead == 'v')
        ADVANCE(167);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 140:
      if (lookahead == 't')
        ADVANCE(168);
      END_STATE();
    case 141:
      if (lookahead == 'd')
        ADVANCE(169);
      END_STATE();
    case 142:
      if (lookahead == '_')
        ADVANCE(170);
      END_STATE();
    case 143:
      if (lookahead == '_')
        ADVANCE(171);
      END_STATE();
    case 144:
      if (lookahead == '_')
        ADVANCE(172);
      END_STATE();
    case 145:
      if (lookahead == 't')
        ADVANCE(173);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_isptr);
      END_STATE();
    case 147:
      if (lookahead == 'g')
        ADVANCE(174);
      END_STATE();
    case 148:
      if (lookahead == 'c')
        ADVANCE(175);
      END_STATE();
    case 149:
      if (lookahead == 'n')
        ADVANCE(176);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 151:
      if (lookahead == 't')
        ADVANCE(177);
      END_STATE();
    case 152:
      if (lookahead == 'g')
        ADVANCE(178);
      END_STATE();
    case 153:
      if (lookahead == 't')
        ADVANCE(179);
      END_STATE();
    case 154:
      if (lookahead == 'i')
        ADVANCE(180);
      END_STATE();
    case 155:
      if (lookahead == 'e')
        ADVANCE(181);
      END_STATE();
    case 156:
      if (lookahead == '6')
        ADVANCE(182);
      END_STATE();
    case 157:
      if (lookahead == '2')
        ADVANCE(183);
      END_STATE();
    case 158:
      if (lookahead == '4')
        ADVANCE(184);
      END_STATE();
    case 159:
      if (lookahead == '_')
        ADVANCE(185);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 161:
      if (lookahead == 'n')
        ADVANCE(186);
      END_STATE();
    case 162:
      if (lookahead == 's')
        ADVANCE(187);
      END_STATE();
    case 163:
      if (lookahead == 'c')
        ADVANCE(188);
      END_STATE();
    case 164:
      if (lookahead == '_')
        ADVANCE(189);
      END_STATE();
    case 165:
      if (lookahead == 'n')
        ADVANCE(190);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 167:
      if (lookahead == 'e')
        ADVANCE(191);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 169:
      if (lookahead == 'e')
        ADVANCE(192);
      END_STATE();
    case 170:
      if (lookahead == 't')
        ADVANCE(193);
      END_STATE();
    case 171:
      if (lookahead == 't')
        ADVANCE(194);
      END_STATE();
    case 172:
      if (lookahead == 't')
        ADVANCE(195);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_int8_t);
      END_STATE();
    case 174:
      if (lookahead == 'a')
        ADVANCE(196);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_trusted_prefix_public);
      END_STATE();
    case 176:
      if (lookahead == 'l')
        ADVANCE(197);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_size_t);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 180:
      if (lookahead == 't')
        ADVANCE(198);
      END_STATE();
    case 181:
      if (lookahead == 'd')
        ADVANCE(199);
      END_STATE();
    case 182:
      if (lookahead == '_')
        ADVANCE(200);
      END_STATE();
    case 183:
      if (lookahead == '_')
        ADVANCE(201);
      END_STATE();
    case 184:
      if (lookahead == '_')
        ADVANCE(202);
      END_STATE();
    case 185:
      if (lookahead == 't')
        ADVANCE(203);
      END_STATE();
    case 186:
      if (lookahead == 'e')
        ADVANCE(204);
      END_STATE();
    case 187:
      if (lookahead == 't')
        ADVANCE(205);
      END_STATE();
    case 188:
      if (lookahead == 'h')
        ADVANCE(206);
      END_STATE();
    case 189:
      if (lookahead == 't')
        ADVANCE(207);
      END_STATE();
    case 190:
      if (lookahead == 'g')
        ADVANCE(208);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_enclave);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_int16_t);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_int32_t);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_int64_t);
      END_STATE();
    case 196:
      if (lookahead == 't')
        ADVANCE(209);
      END_STATE();
    case 197:
      if (lookahead == 'y')
        ADVANCE(210);
      END_STATE();
    case 198:
      if (lookahead == 'i')
        ADVANCE(211);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_trusted);
      END_STATE();
    case 200:
      if (lookahead == 't')
        ADVANCE(212);
      END_STATE();
    case 201:
      if (lookahead == 't')
        ADVANCE(213);
      END_STATE();
    case 202:
      if (lookahead == 't')
        ADVANCE(214);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_uint8_t);
      END_STATE();
    case 204:
      if (lookahead == 'd')
        ADVANCE(215);
      END_STATE();
    case 205:
      if (lookahead == 'e')
        ADVANCE(216);
      END_STATE();
    case 206:
      if (lookahead == 'e')
        ADVANCE(217);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_wchar_t);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_wstring);
      END_STATE();
    case 209:
      if (lookahead == 'e')
        ADVANCE(218);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 211:
      if (lookahead == 'o')
        ADVANCE(219);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_uint16_t);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_uint32_t);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_uint64_t);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 216:
      if (lookahead == 'd')
        ADVANCE(220);
      END_STATE();
    case 217:
      if (lookahead == 'c')
        ADVANCE(221);
      END_STATE();
    case 218:
      if (lookahead == '_')
        ADVANCE(222);
      END_STATE();
    case 219:
      if (lookahead == 'n')
        ADVANCE(223);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_untrusted);
      END_STATE();
    case 221:
      if (lookahead == 'k')
        ADVANCE(224);
      END_STATE();
    case 222:
      if (lookahead == 'e')
        ADVANCE(225);
      END_STATE();
    case 223:
      if (lookahead == '_')
        ADVANCE(226);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_user_check);
      END_STATE();
    case 225:
      if (lookahead == 'r')
        ADVANCE(227);
      END_STATE();
    case 226:
      if (lookahead == 'u')
        ADVANCE(228);
      END_STATE();
    case 227:
      if (lookahead == 'r')
        ADVANCE(229);
      END_STATE();
    case 228:
      if (lookahead == 's')
        ADVANCE(230);
      END_STATE();
    case 229:
      if (lookahead == 'n')
        ADVANCE(231);
      END_STATE();
    case 230:
      if (lookahead == 'i')
        ADVANCE(232);
      END_STATE();
    case 231:
      if (lookahead == 'o')
        ADVANCE(233);
      END_STATE();
    case 232:
      if (lookahead == 'n')
        ADVANCE(234);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_suffix_propagate_errno);
      END_STATE();
    case 234:
      if (lookahead == 'g')
        ADVANCE(235);
      END_STATE();
    case 235:
      if (lookahead == '_')
        ADVANCE(236);
      END_STATE();
    case 236:
      if (lookahead == 't')
        ADVANCE(237);
      END_STATE();
    case 237:
      if (lookahead == 'h')
        ADVANCE(238);
      END_STATE();
    case 238:
      if (lookahead == 'r')
        ADVANCE(239);
      END_STATE();
    case 239:
      if (lookahead == 'e')
        ADVANCE(240);
      END_STATE();
    case 240:
      if (lookahead == 'a')
        ADVANCE(241);
      END_STATE();
    case 241:
      if (lookahead == 'd')
        ADVANCE(242);
      END_STATE();
    case 242:
      if (lookahead == 's')
        ADVANCE(243);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_suffix_transition_using_threads);
      END_STATE();
    case 244:
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
        ADVANCE(245);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == 'e')
        ADVANCE(246);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__white_space);
      if (lookahead == '\n')
        ADVANCE(2);
      END_STATE();
    case 246:
      if (lookahead == 'n')
        ADVANCE(247);
      END_STATE();
    case 247:
      if (lookahead == 'c')
        ADVANCE(72);
      END_STATE();
    case 248:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(245);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == '{')
        ADVANCE(31);
      END_STATE();
    case 249:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(245);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == 'f')
        ADVANCE(250);
      if (lookahead == 'i')
        ADVANCE(251);
      if (lookahead == 't')
        ADVANCE(252);
      if (lookahead == 'u')
        ADVANCE(253);
      if (lookahead == '}')
        ADVANCE(32);
      END_STATE();
    case 250:
      if (lookahead == 'r')
        ADVANCE(45);
      END_STATE();
    case 251:
      if (lookahead == 'n')
        ADVANCE(254);
      END_STATE();
    case 252:
      if (lookahead == 'r')
        ADVANCE(255);
      END_STATE();
    case 253:
      if (lookahead == 'n')
        ADVANCE(256);
      END_STATE();
    case 254:
      if (lookahead == 'c')
        ADVANCE(77);
      END_STATE();
    case 255:
      if (lookahead == 'u')
        ADVANCE(89);
      END_STATE();
    case 256:
      if (lookahead == 't')
        ADVANCE(93);
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
        ADVANCE(245);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '"')
        ADVANCE(258);
      if (lookahead == '/')
        ADVANCE(10);
      END_STATE();
    case 258:
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(35);
      END_STATE();
    case 259:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(245);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == ';')
        ADVANCE(11);
      END_STATE();
    case 260:
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
    case 261:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(245);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == 'b')
        ADVANCE(16);
      if (lookahead == 'c')
        ADVANCE(262);
      if (lookahead == 'd')
        ADVANCE(18);
      if (lookahead == 'e')
        ADVANCE(263);
      if (lookahead == 'f')
        ADVANCE(20);
      if (lookahead == 'i')
        ADVANCE(264);
      if (lookahead == 'l')
        ADVANCE(22);
      if (lookahead == 'p')
        ADVANCE(265);
      if (lookahead == 's')
        ADVANCE(266);
      if (lookahead == 'u')
        ADVANCE(267);
      if (lookahead == 'v')
        ADVANCE(29);
      if (lookahead == 'w')
        ADVANCE(268);
      if (lookahead == '}')
        ADVANCE(32);
      END_STATE();
    case 262:
      if (lookahead == 'h')
        ADVANCE(40);
      if (lookahead == 'o')
        ADVANCE(269);
      END_STATE();
    case 263:
      if (lookahead == 'n')
        ADVANCE(270);
      END_STATE();
    case 264:
      if (lookahead == 'n')
        ADVANCE(271);
      END_STATE();
    case 265:
      if (lookahead == 'u')
        ADVANCE(52);
      END_STATE();
    case 266:
      if (lookahead == 'h')
        ADVANCE(54);
      if (lookahead == 'i')
        ADVANCE(272);
      if (lookahead == 't')
        ADVANCE(273);
      END_STATE();
    case 267:
      if (lookahead == 'i')
        ADVANCE(58);
      if (lookahead == 'n')
        ADVANCE(274);
      END_STATE();
    case 268:
      if (lookahead == 'c')
        ADVANCE(62);
      END_STATE();
    case 269:
      if (lookahead == 'n')
        ADVANCE(69);
      END_STATE();
    case 270:
      if (lookahead == 'u')
        ADVANCE(73);
      END_STATE();
    case 271:
      if (lookahead == 'c')
        ADVANCE(77);
      if (lookahead == 't')
        ADVANCE(78);
      END_STATE();
    case 272:
      if (lookahead == 'z')
        ADVANCE(275);
      END_STATE();
    case 273:
      if (lookahead == 'r')
        ADVANCE(276);
      END_STATE();
    case 274:
      if (lookahead == 'i')
        ADVANCE(91);
      if (lookahead == 's')
        ADVANCE(92);
      END_STATE();
    case 275:
      if (lookahead == 'e')
        ADVANCE(277);
      END_STATE();
    case 276:
      if (lookahead == 'u')
        ADVANCE(123);
      END_STATE();
    case 277:
      if (lookahead == '_')
        ADVANCE(151);
      END_STATE();
    case 278:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(245);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == 'i')
        ADVANCE(279);
      END_STATE();
    case 279:
      if (lookahead == 'm')
        ADVANCE(46);
      END_STATE();
    case 280:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(245);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '/')
        ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(281);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(281);
      END_STATE();
    case 282:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(245);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == 'd')
        ADVANCE(283);
      if (lookahead == 'l')
        ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(281);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(281);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(281);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(281);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(281);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
        ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(281);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g')
        ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(281);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(281);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_long);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(281);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(281);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(281);
      END_STATE();
    case 293:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(245);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == '/')
        ADVANCE(10);
      END_STATE();
    case 294:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(245);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == '[')
        ADVANCE(13);
      if (lookahead == 'b')
        ADVANCE(16);
      if (lookahead == 'c')
        ADVANCE(262);
      if (lookahead == 'd')
        ADVANCE(18);
      if (lookahead == 'e')
        ADVANCE(263);
      if (lookahead == 'f')
        ADVANCE(295);
      if (lookahead == 'i')
        ADVANCE(296);
      if (lookahead == 'l')
        ADVANCE(22);
      if (lookahead == 's')
        ADVANCE(266);
      if (lookahead == 'u')
        ADVANCE(267);
      if (lookahead == 'v')
        ADVANCE(29);
      if (lookahead == 'w')
        ADVANCE(268);
      END_STATE();
    case 295:
      if (lookahead == 'l')
        ADVANCE(44);
      END_STATE();
    case 296:
      if (lookahead == 'n')
        ADVANCE(297);
      END_STATE();
    case 297:
      if (lookahead == 't')
        ADVANCE(78);
      END_STATE();
    case 298:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(245);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == 'c')
        ADVANCE(299);
      if (lookahead == 'i')
        ADVANCE(300);
      if (lookahead == 'o')
        ADVANCE(23);
      if (lookahead == 'r')
        ADVANCE(25);
      if (lookahead == 's')
        ADVANCE(301);
      if (lookahead == 'u')
        ADVANCE(302);
      if (lookahead == 'w')
        ADVANCE(303);
      END_STATE();
    case 299:
      if (lookahead == 'o')
        ADVANCE(304);
      END_STATE();
    case 300:
      if (lookahead == 'n')
        ADVANCE(305);
      if (lookahead == 's')
        ADVANCE(48);
      END_STATE();
    case 301:
      if (lookahead == 'i')
        ADVANCE(306);
      if (lookahead == 't')
        ADVANCE(307);
      END_STATE();
    case 302:
      if (lookahead == 's')
        ADVANCE(60);
      END_STATE();
    case 303:
      if (lookahead == 's')
        ADVANCE(63);
      END_STATE();
    case 304:
      if (lookahead == 'u')
        ADVANCE(70);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 306:
      if (lookahead == 'z')
        ADVANCE(308);
      END_STATE();
    case 307:
      if (lookahead == 'r')
        ADVANCE(309);
      END_STATE();
    case 308:
      if (lookahead == 'e')
        ADVANCE(310);
      END_STATE();
    case 309:
      if (lookahead == 'i')
        ADVANCE(122);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 311:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(245);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == ';')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(15);
      if (lookahead == 'p')
        ADVANCE(312);
      if (lookahead == 't')
        ADVANCE(313);
      END_STATE();
    case 312:
      if (lookahead == 'r')
        ADVANCE(51);
      END_STATE();
    case 313:
      if (lookahead == 'r')
        ADVANCE(314);
      END_STATE();
    case 314:
      if (lookahead == 'a')
        ADVANCE(88);
      END_STATE();
    case 315:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(245);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(10);
      END_STATE();
    case 316:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(245);
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
    case 317:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(245);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(12);
      END_STATE();
    case 318:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(245);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == ']')
        ADVANCE(14);
      END_STATE();
    case 319:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(245);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(281);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 244},
  [2] = {.lex_state = 248},
  [3] = {.lex_state = 244},
  [4] = {.lex_state = 249},
  [5] = {.lex_state = 257},
  [6] = {.lex_state = 248},
  [7] = {.lex_state = 257},
  [8] = {.lex_state = 248},
  [9] = {.lex_state = 259},
  [10] = {.lex_state = 249},
  [11] = {.lex_state = 260},
  [12] = {.lex_state = 261},
  [13] = {.lex_state = 278},
  [14] = {.lex_state = 261},
  [15] = {.lex_state = 244},
  [16] = {.lex_state = 259},
  [17] = {.lex_state = 249},
  [18] = {.lex_state = 249},
  [19] = {.lex_state = 280},
  [20] = {.lex_state = 261},
  [21] = {.lex_state = 280},
  [22] = {.lex_state = 257},
  [23] = {.lex_state = 280},
  [24] = {.lex_state = 259},
  [25] = {.lex_state = 257},
  [26] = {.lex_state = 282},
  [27] = {.lex_state = 280},
  [28] = {.lex_state = 261},
  [29] = {.lex_state = 280},
  [30] = {.lex_state = 261},
  [31] = {.lex_state = 280},
  [32] = {.lex_state = 280},
  [33] = {.lex_state = 261},
  [34] = {.lex_state = 259},
  [35] = {.lex_state = 261},
  [36] = {.lex_state = 261},
  [37] = {.lex_state = 280},
  [38] = {.lex_state = 244},
  [39] = {.lex_state = 280},
  [40] = {.lex_state = 280},
  [41] = {.lex_state = 278},
  [42] = {.lex_state = 280},
  [43] = {.lex_state = 249},
  [44] = {.lex_state = 260},
  [45] = {.lex_state = 280},
  [46] = {.lex_state = 280},
  [47] = {.lex_state = 293},
  [48] = {.lex_state = 259},
  [49] = {.lex_state = 261},
  [50] = {.lex_state = 280},
  [51] = {.lex_state = 280},
  [52] = {.lex_state = 259},
  [53] = {.lex_state = 259},
  [54] = {.lex_state = 280},
  [55] = {.lex_state = 249},
  [56] = {.lex_state = 259},
  [57] = {.lex_state = 261},
  [58] = {.lex_state = 293},
  [59] = {.lex_state = 280},
  [60] = {.lex_state = 280},
  [61] = {.lex_state = 261},
  [62] = {.lex_state = 294},
  [63] = {.lex_state = 249},
  [64] = {.lex_state = 280},
  [65] = {.lex_state = 259},
  [66] = {.lex_state = 249},
  [67] = {.lex_state = 293},
  [68] = {.lex_state = 249},
  [69] = {.lex_state = 294},
  [70] = {.lex_state = 259},
  [71] = {.lex_state = 261},
  [72] = {.lex_state = 298},
  [73] = {.lex_state = 311},
  [74] = {.lex_state = 315},
  [75] = {.lex_state = 261},
  [76] = {.lex_state = 280},
  [77] = {.lex_state = 316},
  [78] = {.lex_state = 259},
  [79] = {.lex_state = 294},
  [80] = {.lex_state = 259},
  [81] = {.lex_state = 315},
  [82] = {.lex_state = 261},
  [83] = {.lex_state = 280},
  [84] = {.lex_state = 317},
  [85] = {.lex_state = 317},
  [86] = {.lex_state = 318},
  [87] = {.lex_state = 261},
  [88] = {.lex_state = 293},
  [89] = {.lex_state = 311},
  [90] = {.lex_state = 311},
  [91] = {.lex_state = 294},
  [92] = {.lex_state = 311},
  [93] = {.lex_state = 315},
  [94] = {.lex_state = 261},
  [95] = {.lex_state = 315},
  [96] = {.lex_state = 280},
  [97] = {.lex_state = 259},
  [98] = {.lex_state = 315},
  [99] = {.lex_state = 261},
  [100] = {.lex_state = 315},
  [101] = {.lex_state = 315},
  [102] = {.lex_state = 280},
  [103] = {.lex_state = 319},
  [104] = {.lex_state = 319},
  [105] = {.lex_state = 298},
  [106] = {.lex_state = 261},
  [107] = {.lex_state = 318},
  [108] = {.lex_state = 280},
  [109] = {.lex_state = 261},
  [110] = {.lex_state = 311},
  [111] = {.lex_state = 311},
  [112] = {.lex_state = 315},
  [113] = {.lex_state = 311},
  [114] = {.lex_state = 311},
  [115] = {.lex_state = 315},
  [116] = {.lex_state = 280},
  [117] = {.lex_state = 261},
  [118] = {.lex_state = 259},
  [119] = {.lex_state = 315},
  [120] = {.lex_state = 315},
  [121] = {.lex_state = 318},
  [122] = {.lex_state = 318},
  [123] = {.lex_state = 318},
  [124] = {.lex_state = 261},
  [125] = {.lex_state = 318},
  [126] = {.lex_state = 315},
  [127] = {.lex_state = 261},
  [128] = {.lex_state = 311},
  [129] = {.lex_state = 311},
  [130] = {.lex_state = 280},
  [131] = {.lex_state = 261},
  [132] = {.lex_state = 259},
  [133] = {.lex_state = 311},
  [134] = {.lex_state = 315},
  [135] = {.lex_state = 261},
  [136] = {.lex_state = 311},
  [137] = {.lex_state = 315},
  [138] = {.lex_state = 261},
  [139] = {.lex_state = 311},
  [140] = {.lex_state = 315},
  [141] = {.lex_state = 261},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_size] = ACTIONS(1),
    [anon_sym_uint64_t] = ACTIONS(1),
    [sym__white_space] = ACTIONS(3),
    [sym_string] = ACTIONS(1),
    [sym_header_name] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_uint16_t] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
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
    [sym_trusted_prefix_public] = ACTIONS(1),
    [anon_sym_untrusted] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_int8_t] = ACTIONS(1),
    [anon_sym_long] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_isptr] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_comments] = ACTIONS(5),
    [anon_sym_allow] = ACTIONS(1),
    [sym_suffix_transition_using_threads] = ACTIONS(1),
    [sym_type_qualifier] = ACTIONS(1),
    [anon_sym_enclave] = ACTIONS(1),
    [anon_sym_int16_t] = ACTIONS(1),
    [anon_sym_int64_t] = ACTIONS(1),
    [anon_sym_unsigned] = ACTIONS(1),
    [anon_sym_wstring] = ACTIONS(1),
    [anon_sym_readonly] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [sym_new_line] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_suffix_propagate_errno] = ACTIONS(1),
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
    [sym_comments] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
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
    [sym__white_space] = ACTIONS(5),
    [anon_sym_untrusted] = ACTIONS(15),
    [sym_comments] = ACTIONS(5),
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
    [sym_comments] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym__white_space] = ACTIONS(5),
  },
  [7] = {
    [sym_header_name] = ACTIONS(27),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [8] = {
    [sym_comments] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(29),
    [sym__white_space] = ACTIONS(5),
  },
  [9] = {
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
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
    [sym__white_space] = ACTIONS(5),
    [anon_sym_untrusted] = ACTIONS(15),
    [sym_comments] = ACTIONS(5),
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
    [sym_comments] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(39),
    [anon_sym_union] = ACTIONS(41),
    [anon_sym_uint64_t] = ACTIONS(37),
    [anon_sym_from] = ACTIONS(43),
    [anon_sym_int16_t] = ACTIONS(37),
    [anon_sym_uint32_t] = ACTIONS(37),
    [anon_sym_int64_t] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_unsigned] = ACTIONS(37),
    [sym__white_space] = ACTIONS(5),
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
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_int32_t] = ACTIONS(37),
    [anon_sym_wchar_t] = ACTIONS(37),
    [anon_sym_uint8_t] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(55),
    [anon_sym_size_t] = ACTIONS(37),
  },
  [13] = {
    [sym_comments] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(57),
    [sym__white_space] = ACTIONS(5),
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
    [sym__white_space] = ACTIONS(5),
    [sym_trusted_prefix_public] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_include] = ACTIONS(49),
    [anon_sym_int8_t] = ACTIONS(37),
    [anon_sym_uint16_t] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(51),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [anon_sym_bool] = ACTIONS(37),
    [sym_comments] = ACTIONS(5),
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
    [sym_comments] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(63),
    [sym__white_space] = ACTIONS(5),
  },
  [16] = {
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
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
    [sym__white_space] = ACTIONS(5),
    [anon_sym_untrusted] = ACTIONS(70),
    [sym_comments] = ACTIONS(5),
    [anon_sym_from] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(76),
    [anon_sym_trusted] = ACTIONS(78),
  },
  [18] = {
    [anon_sym_include] = ACTIONS(81),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_untrusted] = ACTIONS(81),
    [sym_comments] = ACTIONS(5),
    [anon_sym_from] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_trusted] = ACTIONS(81),
  },
  [19] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(83),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(83),
  },
  [20] = {
    [sym_struct_specifier] = STATE(19),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [sym_type_specifier] = STATE(39),
    [anon_sym_float] = ACTIONS(37),
    [sym_comments] = ACTIONS(5),
    [anon_sym_union] = ACTIONS(41),
    [anon_sym_uint64_t] = ACTIONS(37),
    [anon_sym_int16_t] = ACTIONS(37),
    [anon_sym_uint32_t] = ACTIONS(37),
    [anon_sym_int64_t] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_unsigned] = ACTIONS(37),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_struct] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(53),
    [anon_sym_int8_t] = ACTIONS(37),
    [anon_sym_uint16_t] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(51),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [anon_sym_void] = ACTIONS(37),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_int32_t] = ACTIONS(37),
    [anon_sym_wchar_t] = ACTIONS(37),
    [anon_sym_uint8_t] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(55),
    [anon_sym_size_t] = ACTIONS(37),
  },
  [21] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(85),
    [sym__white_space] = ACTIONS(5),
  },
  [22] = {
    [sym_header_name] = ACTIONS(87),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [23] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(89),
    [sym__white_space] = ACTIONS(5),
  },
  [24] = {
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(91),
  },
  [25] = {
    [sym_header_name] = ACTIONS(93),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [26] = {
    [sym__white_space] = ACTIONS(5),
    [anon_sym_long] = ACTIONS(95),
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(97),
    [anon_sym_double] = ACTIONS(95),
    [anon_sym_STAR] = ACTIONS(83),
  },
  [27] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(99),
    [sym__white_space] = ACTIONS(5),
  },
  [28] = {
    [anon_sym_float] = ACTIONS(101),
    [sym_comments] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(101),
    [anon_sym_union] = ACTIONS(101),
    [anon_sym_uint64_t] = ACTIONS(101),
    [anon_sym_from] = ACTIONS(101),
    [anon_sym_int16_t] = ACTIONS(101),
    [anon_sym_uint32_t] = ACTIONS(101),
    [anon_sym_int64_t] = ACTIONS(101),
    [anon_sym_short] = ACTIONS(101),
    [anon_sym_unsigned] = ACTIONS(101),
    [sym__white_space] = ACTIONS(5),
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
    [anon_sym_bool] = ACTIONS(101),
    [anon_sym_int32_t] = ACTIONS(101),
    [anon_sym_wchar_t] = ACTIONS(101),
    [anon_sym_uint8_t] = ACTIONS(101),
    [anon_sym_int] = ACTIONS(103),
    [anon_sym_size_t] = ACTIONS(101),
  },
  [29] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(105),
    [sym__white_space] = ACTIONS(5),
  },
  [30] = {
    [sym_struct_specifier] = STATE(19),
    [sym_from] = STATE(28),
    [sym_ocall_definition] = STATE(28),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [sym_retval] = STATE(29),
    [aux_sym_untrusted_repeat1] = STATE(49),
    [sym_include] = STATE(28),
    [sym_untrusted_inner_items] = STATE(49),
    [sym_type_specifier] = STATE(31),
    [anon_sym_float] = ACTIONS(37),
    [sym_comments] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(39),
    [anon_sym_union] = ACTIONS(41),
    [anon_sym_uint64_t] = ACTIONS(37),
    [anon_sym_from] = ACTIONS(43),
    [anon_sym_int16_t] = ACTIONS(37),
    [anon_sym_uint32_t] = ACTIONS(37),
    [anon_sym_int64_t] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_unsigned] = ACTIONS(37),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_struct] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_include] = ACTIONS(49),
    [anon_sym_int8_t] = ACTIONS(37),
    [anon_sym_uint16_t] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(51),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [anon_sym_enum] = ACTIONS(53),
    [anon_sym_void] = ACTIONS(37),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_int32_t] = ACTIONS(37),
    [anon_sym_wchar_t] = ACTIONS(37),
    [anon_sym_uint8_t] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(55),
    [anon_sym_size_t] = ACTIONS(37),
  },
  [31] = {
    [sym_pointer_declarator] = STATE(51),
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(109),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(111),
  },
  [32] = {
    [sym_import_list] = STATE(53),
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(113),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(115),
  },
  [33] = {
    [sym_struct_specifier] = STATE(19),
    [sym_retval] = STATE(54),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [sym_type_specifier] = STATE(31),
    [anon_sym_float] = ACTIONS(37),
    [sym_comments] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(39),
    [anon_sym_union] = ACTIONS(41),
    [anon_sym_uint64_t] = ACTIONS(37),
    [anon_sym_int16_t] = ACTIONS(37),
    [anon_sym_uint32_t] = ACTIONS(37),
    [anon_sym_int64_t] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_unsigned] = ACTIONS(37),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_struct] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(53),
    [anon_sym_int8_t] = ACTIONS(37),
    [anon_sym_uint16_t] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(51),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [anon_sym_void] = ACTIONS(37),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_int32_t] = ACTIONS(37),
    [anon_sym_wchar_t] = ACTIONS(37),
    [anon_sym_uint8_t] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(55),
    [anon_sym_size_t] = ACTIONS(37),
  },
  [34] = {
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(117),
  },
  [35] = {
    [anon_sym_float] = ACTIONS(119),
    [anon_sym_union] = ACTIONS(119),
    [anon_sym_uint64_t] = ACTIONS(119),
    [sym__white_space] = ACTIONS(5),
    [sym_trusted_prefix_public] = ACTIONS(119),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_include] = ACTIONS(119),
    [anon_sym_int8_t] = ACTIONS(119),
    [anon_sym_uint16_t] = ACTIONS(119),
    [anon_sym_long] = ACTIONS(119),
    [anon_sym_char] = ACTIONS(119),
    [anon_sym_double] = ACTIONS(119),
    [anon_sym_bool] = ACTIONS(119),
    [sym_comments] = ACTIONS(5),
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
    [sym__white_space] = ACTIONS(5),
    [sym_trusted_prefix_public] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(123),
    [anon_sym_include] = ACTIONS(49),
    [anon_sym_int8_t] = ACTIONS(37),
    [anon_sym_uint16_t] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(51),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [anon_sym_bool] = ACTIONS(37),
    [sym_comments] = ACTIONS(5),
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
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(125),
    [sym__white_space] = ACTIONS(5),
  },
  [38] = {
    [sym_comments] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(127),
    [sym__white_space] = ACTIONS(5),
  },
  [39] = {
    [sym_pointer_declarator] = STATE(59),
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(129),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(111),
  },
  [40] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(131),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(131),
  },
  [41] = {
    [sym_comments] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(133),
    [sym__white_space] = ACTIONS(5),
  },
  [42] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(135),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(135),
  },
  [43] = {
    [anon_sym_include] = ACTIONS(137),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_untrusted] = ACTIONS(137),
    [sym_comments] = ACTIONS(5),
    [anon_sym_from] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(137),
    [anon_sym_trusted] = ACTIONS(137),
  },
  [44] = {
    [sym_comments] = ACTIONS(5),
    [sym_new_line] = ACTIONS(139),
    [sym__white_space] = ACTIONS(3),
  },
  [45] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(141),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(141),
  },
  [46] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(143),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(143),
  },
  [47] = {
    [anon_sym_LPAREN] = ACTIONS(145),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [48] = {
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(147),
  },
  [49] = {
    [sym_struct_specifier] = STATE(19),
    [sym_from] = STATE(28),
    [sym_ocall_definition] = STATE(28),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [sym_retval] = STATE(29),
    [aux_sym_untrusted_repeat1] = STATE(49),
    [sym_include] = STATE(28),
    [sym_untrusted_inner_items] = STATE(49),
    [sym_type_specifier] = STATE(31),
    [anon_sym_float] = ACTIONS(149),
    [sym_comments] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(152),
    [anon_sym_union] = ACTIONS(155),
    [anon_sym_uint64_t] = ACTIONS(149),
    [anon_sym_from] = ACTIONS(158),
    [anon_sym_int16_t] = ACTIONS(149),
    [anon_sym_uint32_t] = ACTIONS(149),
    [anon_sym_int64_t] = ACTIONS(149),
    [anon_sym_short] = ACTIONS(149),
    [anon_sym_unsigned] = ACTIONS(149),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(161),
    [anon_sym_struct] = ACTIONS(163),
    [anon_sym_include] = ACTIONS(166),
    [anon_sym_int8_t] = ACTIONS(149),
    [anon_sym_uint16_t] = ACTIONS(149),
    [anon_sym_long] = ACTIONS(169),
    [anon_sym_char] = ACTIONS(149),
    [anon_sym_double] = ACTIONS(149),
    [anon_sym_enum] = ACTIONS(172),
    [anon_sym_void] = ACTIONS(149),
    [anon_sym_bool] = ACTIONS(149),
    [anon_sym_int32_t] = ACTIONS(149),
    [anon_sym_wchar_t] = ACTIONS(149),
    [anon_sym_uint8_t] = ACTIONS(149),
    [anon_sym_int] = ACTIONS(175),
    [anon_sym_size_t] = ACTIONS(149),
  },
  [50] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(178),
    [sym__white_space] = ACTIONS(5),
  },
  [51] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(129),
    [sym__white_space] = ACTIONS(5),
  },
  [52] = {
    [aux_sym_import_list_repeat1] = STATE(65),
    [anon_sym_COMMA] = ACTIONS(180),
    [anon_sym_SEMI] = ACTIONS(182),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [53] = {
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(184),
  },
  [54] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(186),
    [sym__white_space] = ACTIONS(5),
  },
  [55] = {
    [anon_sym_include] = ACTIONS(188),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_untrusted] = ACTIONS(188),
    [sym_comments] = ACTIONS(5),
    [anon_sym_from] = ACTIONS(188),
    [anon_sym_RBRACE] = ACTIONS(188),
    [anon_sym_trusted] = ACTIONS(188),
  },
  [56] = {
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
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
    [sym__white_space] = ACTIONS(5),
    [sym_trusted_prefix_public] = ACTIONS(198),
    [anon_sym_RBRACE] = ACTIONS(201),
    [anon_sym_include] = ACTIONS(203),
    [anon_sym_int8_t] = ACTIONS(192),
    [anon_sym_uint16_t] = ACTIONS(192),
    [anon_sym_long] = ACTIONS(206),
    [anon_sym_char] = ACTIONS(192),
    [anon_sym_double] = ACTIONS(192),
    [anon_sym_bool] = ACTIONS(192),
    [sym_comments] = ACTIONS(5),
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
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [59] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(226),
    [sym__white_space] = ACTIONS(5),
  },
  [60] = {
    [sym_import_list] = STATE(70),
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(113),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(228),
  },
  [61] = {
    [anon_sym_float] = ACTIONS(81),
    [anon_sym_union] = ACTIONS(81),
    [anon_sym_uint64_t] = ACTIONS(81),
    [sym__white_space] = ACTIONS(5),
    [sym_trusted_prefix_public] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_include] = ACTIONS(81),
    [anon_sym_int8_t] = ACTIONS(81),
    [anon_sym_uint16_t] = ACTIONS(81),
    [anon_sym_long] = ACTIONS(81),
    [anon_sym_char] = ACTIONS(81),
    [anon_sym_double] = ACTIONS(81),
    [anon_sym_bool] = ACTIONS(81),
    [sym_comments] = ACTIONS(5),
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
    [sym_struct_specifier] = STATE(19),
    [sym_parameter] = STATE(74),
    [sym_attribute_list] = STATE(75),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [sym_type_specifier] = STATE(76),
    [anon_sym_float] = ACTIONS(37),
    [sym_comments] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(232),
    [anon_sym_union] = ACTIONS(41),
    [anon_sym_uint64_t] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(234),
    [anon_sym_int16_t] = ACTIONS(37),
    [anon_sym_uint32_t] = ACTIONS(37),
    [anon_sym_int64_t] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_unsigned] = ACTIONS(37),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(236),
    [anon_sym_struct] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(53),
    [anon_sym_int8_t] = ACTIONS(37),
    [anon_sym_uint16_t] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(51),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [anon_sym_void] = ACTIONS(37),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_int32_t] = ACTIONS(37),
    [anon_sym_wchar_t] = ACTIONS(37),
    [anon_sym_uint8_t] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(55),
    [anon_sym_size_t] = ACTIONS(37),
  },
  [63] = {
    [anon_sym_include] = ACTIONS(238),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_untrusted] = ACTIONS(238),
    [sym_comments] = ACTIONS(5),
    [anon_sym_from] = ACTIONS(238),
    [anon_sym_RBRACE] = ACTIONS(238),
    [anon_sym_trusted] = ACTIONS(238),
  },
  [64] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(240),
    [sym__white_space] = ACTIONS(5),
  },
  [65] = {
    [aux_sym_import_list_repeat1] = STATE(78),
    [anon_sym_COMMA] = ACTIONS(180),
    [anon_sym_SEMI] = ACTIONS(242),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [66] = {
    [anon_sym_include] = ACTIONS(244),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_untrusted] = ACTIONS(244),
    [sym_comments] = ACTIONS(5),
    [anon_sym_from] = ACTIONS(244),
    [anon_sym_RBRACE] = ACTIONS(244),
    [anon_sym_trusted] = ACTIONS(244),
  },
  [67] = {
    [anon_sym_LPAREN] = ACTIONS(246),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [68] = {
    [anon_sym_include] = ACTIONS(248),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_untrusted] = ACTIONS(248),
    [sym_comments] = ACTIONS(5),
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
    [sym_comments] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(232),
    [anon_sym_union] = ACTIONS(41),
    [anon_sym_uint64_t] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(234),
    [anon_sym_int16_t] = ACTIONS(37),
    [anon_sym_uint32_t] = ACTIONS(37),
    [anon_sym_int64_t] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_unsigned] = ACTIONS(37),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(250),
    [anon_sym_struct] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(53),
    [anon_sym_int8_t] = ACTIONS(37),
    [anon_sym_uint16_t] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(51),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [anon_sym_void] = ACTIONS(37),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_int32_t] = ACTIONS(37),
    [anon_sym_wchar_t] = ACTIONS(37),
    [anon_sym_uint8_t] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(55),
    [anon_sym_size_t] = ACTIONS(37),
  },
  [70] = {
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(252),
  },
  [71] = {
    [sym_struct_specifier] = STATE(19),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [sym_type_specifier] = STATE(83),
    [anon_sym_float] = ACTIONS(37),
    [sym_comments] = ACTIONS(5),
    [anon_sym_union] = ACTIONS(41),
    [anon_sym_uint64_t] = ACTIONS(37),
    [anon_sym_int16_t] = ACTIONS(37),
    [anon_sym_uint32_t] = ACTIONS(37),
    [anon_sym_int64_t] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_unsigned] = ACTIONS(37),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_struct] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(53),
    [anon_sym_int8_t] = ACTIONS(37),
    [anon_sym_uint16_t] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(51),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [anon_sym_void] = ACTIONS(37),
    [anon_sym_bool] = ACTIONS(37),
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
    [sym__white_space] = ACTIONS(5),
    [anon_sym_isptr] = ACTIONS(254),
    [anon_sym_wstring] = ACTIONS(254),
    [anon_sym_out] = ACTIONS(254),
    [anon_sym_readonly] = ACTIONS(254),
    [sym_comments] = ACTIONS(5),
    [anon_sym_in] = ACTIONS(254),
  },
  [73] = {
    [sym_untrusted_suffix_allow] = STATE(89),
    [sym__untrusted_suffix] = STATE(90),
    [aux_sym_ocall_definition_repeat1] = STATE(90),
    [sym_suffix_transition_using_threads] = ACTIONS(260),
    [anon_sym_SEMI] = ACTIONS(262),
    [sym_suffix_propagate_errno] = ACTIONS(260),
    [sym_comments] = ACTIONS(5),
    [anon_sym_allow] = ACTIONS(264),
    [sym__white_space] = ACTIONS(5),
  },
  [74] = {
    [aux_sym_ecall_definition_repeat1] = STATE(93),
    [anon_sym_COMMA] = ACTIONS(266),
    [sym_comments] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(268),
    [sym__white_space] = ACTIONS(5),
  },
  [75] = {
    [sym_struct_specifier] = STATE(19),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [sym_type_specifier] = STATE(83),
    [anon_sym_float] = ACTIONS(37),
    [sym_comments] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(270),
    [anon_sym_union] = ACTIONS(41),
    [anon_sym_uint64_t] = ACTIONS(37),
    [anon_sym_int16_t] = ACTIONS(37),
    [anon_sym_uint32_t] = ACTIONS(37),
    [anon_sym_int64_t] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_unsigned] = ACTIONS(37),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_struct] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(53),
    [anon_sym_int8_t] = ACTIONS(37),
    [anon_sym_uint16_t] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(51),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [anon_sym_void] = ACTIONS(37),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_int32_t] = ACTIONS(37),
    [anon_sym_wchar_t] = ACTIONS(37),
    [anon_sym_uint8_t] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(55),
    [anon_sym_size_t] = ACTIONS(37),
  },
  [76] = {
    [sym_pointer_declarator] = STATE(96),
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(272),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(111),
  },
  [77] = {
    [anon_sym_COMMA] = ACTIONS(274),
    [anon_sym_SEMI] = ACTIONS(274),
    [sym_comments] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(274),
    [sym__white_space] = ACTIONS(5),
  },
  [78] = {
    [aux_sym_import_list_repeat1] = STATE(78),
    [anon_sym_COMMA] = ACTIONS(276),
    [anon_sym_SEMI] = ACTIONS(274),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [79] = {
    [sym_struct_specifier] = STATE(19),
    [sym_parameter] = STATE(98),
    [sym_attribute_list] = STATE(75),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [sym_type_specifier] = STATE(76),
    [anon_sym_float] = ACTIONS(37),
    [sym_comments] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(232),
    [anon_sym_union] = ACTIONS(41),
    [anon_sym_uint64_t] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(234),
    [anon_sym_int16_t] = ACTIONS(37),
    [anon_sym_uint32_t] = ACTIONS(37),
    [anon_sym_int64_t] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_unsigned] = ACTIONS(37),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(279),
    [anon_sym_struct] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(53),
    [anon_sym_int8_t] = ACTIONS(37),
    [anon_sym_uint16_t] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(51),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [anon_sym_void] = ACTIONS(37),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_int32_t] = ACTIONS(37),
    [anon_sym_wchar_t] = ACTIONS(37),
    [anon_sym_uint8_t] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(55),
    [anon_sym_size_t] = ACTIONS(37),
  },
  [80] = {
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(281),
  },
  [81] = {
    [aux_sym_ecall_definition_repeat1] = STATE(100),
    [anon_sym_COMMA] = ACTIONS(266),
    [sym_comments] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(279),
    [sym__white_space] = ACTIONS(5),
  },
  [82] = {
    [anon_sym_float] = ACTIONS(244),
    [anon_sym_union] = ACTIONS(244),
    [anon_sym_uint64_t] = ACTIONS(244),
    [sym__white_space] = ACTIONS(5),
    [sym_trusted_prefix_public] = ACTIONS(244),
    [anon_sym_RBRACE] = ACTIONS(244),
    [anon_sym_include] = ACTIONS(244),
    [anon_sym_int8_t] = ACTIONS(244),
    [anon_sym_uint16_t] = ACTIONS(244),
    [anon_sym_long] = ACTIONS(244),
    [anon_sym_char] = ACTIONS(244),
    [anon_sym_double] = ACTIONS(244),
    [anon_sym_bool] = ACTIONS(244),
    [sym_comments] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(244),
    [anon_sym_from] = ACTIONS(244),
    [anon_sym_int16_t] = ACTIONS(244),
    [anon_sym_uint32_t] = ACTIONS(244),
    [anon_sym_int64_t] = ACTIONS(244),
    [anon_sym_short] = ACTIONS(244),
    [anon_sym_unsigned] = ACTIONS(244),
    [anon_sym_struct] = ACTIONS(244),
    [anon_sym_enum] = ACTIONS(244),
    [anon_sym_void] = ACTIONS(244),
    [anon_sym_int32_t] = ACTIONS(244),
    [anon_sym_wchar_t] = ACTIONS(244),
    [anon_sym_uint8_t] = ACTIONS(244),
    [anon_sym_int] = ACTIONS(283),
    [anon_sym_size_t] = ACTIONS(244),
  },
  [83] = {
    [sym_pointer_declarator] = STATE(102),
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(285),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(111),
  },
  [84] = {
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(287),
  },
  [85] = {
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(289),
  },
  [86] = {
    [aux_sym_attribute_list_repeat1] = STATE(107),
    [anon_sym_COMMA] = ACTIONS(291),
    [anon_sym_RBRACK] = ACTIONS(293),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [87] = {
    [anon_sym_float] = ACTIONS(295),
    [sym_comments] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(295),
    [anon_sym_union] = ACTIONS(295),
    [anon_sym_uint64_t] = ACTIONS(295),
    [anon_sym_from] = ACTIONS(295),
    [anon_sym_int16_t] = ACTIONS(295),
    [anon_sym_uint32_t] = ACTIONS(295),
    [anon_sym_int64_t] = ACTIONS(295),
    [anon_sym_short] = ACTIONS(295),
    [anon_sym_unsigned] = ACTIONS(295),
    [sym__white_space] = ACTIONS(5),
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
    [anon_sym_bool] = ACTIONS(295),
    [anon_sym_int32_t] = ACTIONS(295),
    [anon_sym_wchar_t] = ACTIONS(295),
    [anon_sym_uint8_t] = ACTIONS(295),
    [anon_sym_int] = ACTIONS(297),
    [anon_sym_size_t] = ACTIONS(295),
  },
  [88] = {
    [anon_sym_LPAREN] = ACTIONS(299),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [89] = {
    [sym__untrusted_suffix] = STATE(110),
    [aux_sym_ocall_definition_repeat1] = STATE(110),
    [sym_suffix_transition_using_threads] = ACTIONS(301),
    [sym_suffix_propagate_errno] = ACTIONS(301),
    [anon_sym_SEMI] = ACTIONS(303),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [90] = {
    [sym__untrusted_suffix] = STATE(111),
    [aux_sym_ocall_definition_repeat1] = STATE(111),
    [sym_suffix_transition_using_threads] = ACTIONS(305),
    [sym_suffix_propagate_errno] = ACTIONS(305),
    [anon_sym_SEMI] = ACTIONS(303),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [91] = {
    [sym_struct_specifier] = STATE(19),
    [sym_parameter] = STATE(112),
    [sym_attribute_list] = STATE(75),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [sym_type_specifier] = STATE(76),
    [anon_sym_float] = ACTIONS(37),
    [sym_comments] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(232),
    [anon_sym_union] = ACTIONS(41),
    [anon_sym_uint64_t] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(234),
    [anon_sym_int16_t] = ACTIONS(37),
    [anon_sym_uint32_t] = ACTIONS(37),
    [anon_sym_int64_t] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_unsigned] = ACTIONS(37),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_struct] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(53),
    [anon_sym_int8_t] = ACTIONS(37),
    [anon_sym_uint16_t] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(51),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [anon_sym_void] = ACTIONS(37),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_int32_t] = ACTIONS(37),
    [anon_sym_wchar_t] = ACTIONS(37),
    [anon_sym_uint8_t] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(55),
    [anon_sym_size_t] = ACTIONS(37),
  },
  [92] = {
    [sym_untrusted_suffix_allow] = STATE(113),
    [sym__untrusted_suffix] = STATE(110),
    [aux_sym_ocall_definition_repeat1] = STATE(110),
    [sym_suffix_transition_using_threads] = ACTIONS(301),
    [anon_sym_SEMI] = ACTIONS(303),
    [sym_suffix_propagate_errno] = ACTIONS(301),
    [sym_comments] = ACTIONS(5),
    [anon_sym_allow] = ACTIONS(264),
    [sym__white_space] = ACTIONS(5),
  },
  [93] = {
    [aux_sym_ecall_definition_repeat1] = STATE(115),
    [anon_sym_COMMA] = ACTIONS(266),
    [sym_comments] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(307),
    [sym__white_space] = ACTIONS(5),
  },
  [94] = {
    [sym_struct_specifier] = STATE(19),
    [sym_union_specifier] = STATE(19),
    [sym_enum_specifier] = STATE(19),
    [sym_type_specifier] = STATE(116),
    [anon_sym_float] = ACTIONS(37),
    [sym_comments] = ACTIONS(5),
    [anon_sym_union] = ACTIONS(41),
    [anon_sym_uint64_t] = ACTIONS(37),
    [anon_sym_int16_t] = ACTIONS(37),
    [anon_sym_uint32_t] = ACTIONS(37),
    [anon_sym_int64_t] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_unsigned] = ACTIONS(37),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_struct] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(53),
    [anon_sym_int8_t] = ACTIONS(37),
    [anon_sym_uint16_t] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(51),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [anon_sym_void] = ACTIONS(37),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_int32_t] = ACTIONS(37),
    [anon_sym_wchar_t] = ACTIONS(37),
    [anon_sym_uint8_t] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(55),
    [anon_sym_size_t] = ACTIONS(37),
  },
  [95] = {
    [anon_sym_COMMA] = ACTIONS(309),
    [sym_comments] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(309),
    [sym__white_space] = ACTIONS(5),
  },
  [96] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(285),
    [sym__white_space] = ACTIONS(5),
  },
  [97] = {
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(311),
  },
  [98] = {
    [aux_sym_ecall_definition_repeat1] = STATE(119),
    [anon_sym_COMMA] = ACTIONS(266),
    [sym_comments] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(313),
    [sym__white_space] = ACTIONS(5),
  },
  [99] = {
    [anon_sym_float] = ACTIONS(315),
    [anon_sym_union] = ACTIONS(315),
    [anon_sym_uint64_t] = ACTIONS(315),
    [sym__white_space] = ACTIONS(5),
    [sym_trusted_prefix_public] = ACTIONS(315),
    [anon_sym_RBRACE] = ACTIONS(315),
    [anon_sym_include] = ACTIONS(315),
    [anon_sym_int8_t] = ACTIONS(315),
    [anon_sym_uint16_t] = ACTIONS(315),
    [anon_sym_long] = ACTIONS(315),
    [anon_sym_char] = ACTIONS(315),
    [anon_sym_double] = ACTIONS(315),
    [anon_sym_bool] = ACTIONS(315),
    [sym_comments] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(315),
    [anon_sym_from] = ACTIONS(315),
    [anon_sym_int16_t] = ACTIONS(315),
    [anon_sym_uint32_t] = ACTIONS(315),
    [anon_sym_int64_t] = ACTIONS(315),
    [anon_sym_short] = ACTIONS(315),
    [anon_sym_unsigned] = ACTIONS(315),
    [anon_sym_struct] = ACTIONS(315),
    [anon_sym_enum] = ACTIONS(315),
    [anon_sym_void] = ACTIONS(315),
    [anon_sym_int32_t] = ACTIONS(315),
    [anon_sym_wchar_t] = ACTIONS(315),
    [anon_sym_uint8_t] = ACTIONS(315),
    [anon_sym_int] = ACTIONS(317),
    [anon_sym_size_t] = ACTIONS(315),
  },
  [100] = {
    [aux_sym_ecall_definition_repeat1] = STATE(115),
    [anon_sym_COMMA] = ACTIONS(266),
    [sym_comments] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(313),
    [sym__white_space] = ACTIONS(5),
  },
  [101] = {
    [anon_sym_COMMA] = ACTIONS(319),
    [sym_comments] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(319),
    [sym__white_space] = ACTIONS(5),
  },
  [102] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(321),
    [sym__white_space] = ACTIONS(5),
  },
  [103] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(323),
    [sym__white_space] = ACTIONS(5),
    [sym_number] = ACTIONS(323),
  },
  [104] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(325),
    [sym__white_space] = ACTIONS(5),
    [sym_number] = ACTIONS(325),
  },
  [105] = {
    [sym__pointer_attributes] = STATE(123),
    [sym_size_attribute] = STATE(123),
    [sym_count_attribute] = STATE(123),
    [anon_sym_user_check] = ACTIONS(327),
    [anon_sym_size] = ACTIONS(256),
    [anon_sym_count] = ACTIONS(258),
    [anon_sym_string] = ACTIONS(327),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_isptr] = ACTIONS(327),
    [anon_sym_wstring] = ACTIONS(327),
    [anon_sym_out] = ACTIONS(327),
    [anon_sym_readonly] = ACTIONS(327),
    [sym_comments] = ACTIONS(5),
    [anon_sym_in] = ACTIONS(327),
  },
  [106] = {
    [anon_sym_float] = ACTIONS(329),
    [sym_comments] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(329),
    [anon_sym_union] = ACTIONS(329),
    [anon_sym_uint64_t] = ACTIONS(329),
    [anon_sym_int16_t] = ACTIONS(329),
    [anon_sym_uint32_t] = ACTIONS(329),
    [anon_sym_int64_t] = ACTIONS(329),
    [anon_sym_short] = ACTIONS(329),
    [anon_sym_unsigned] = ACTIONS(329),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_struct] = ACTIONS(329),
    [anon_sym_enum] = ACTIONS(329),
    [anon_sym_int8_t] = ACTIONS(329),
    [anon_sym_uint16_t] = ACTIONS(329),
    [anon_sym_long] = ACTIONS(329),
    [anon_sym_char] = ACTIONS(329),
    [anon_sym_double] = ACTIONS(329),
    [anon_sym_void] = ACTIONS(329),
    [anon_sym_bool] = ACTIONS(329),
    [anon_sym_int32_t] = ACTIONS(329),
    [anon_sym_wchar_t] = ACTIONS(329),
    [anon_sym_uint8_t] = ACTIONS(329),
    [anon_sym_int] = ACTIONS(331),
    [anon_sym_size_t] = ACTIONS(329),
  },
  [107] = {
    [aux_sym_attribute_list_repeat1] = STATE(125),
    [anon_sym_COMMA] = ACTIONS(291),
    [anon_sym_RBRACK] = ACTIONS(333),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [108] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(335),
    [sym__white_space] = ACTIONS(5),
  },
  [109] = {
    [anon_sym_float] = ACTIONS(337),
    [sym_comments] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(337),
    [anon_sym_union] = ACTIONS(337),
    [anon_sym_uint64_t] = ACTIONS(337),
    [anon_sym_from] = ACTIONS(337),
    [anon_sym_int16_t] = ACTIONS(337),
    [anon_sym_uint32_t] = ACTIONS(337),
    [anon_sym_int64_t] = ACTIONS(337),
    [anon_sym_short] = ACTIONS(337),
    [anon_sym_unsigned] = ACTIONS(337),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(337),
    [anon_sym_struct] = ACTIONS(337),
    [anon_sym_include] = ACTIONS(337),
    [anon_sym_int8_t] = ACTIONS(337),
    [anon_sym_uint16_t] = ACTIONS(337),
    [anon_sym_long] = ACTIONS(337),
    [anon_sym_char] = ACTIONS(337),
    [anon_sym_double] = ACTIONS(337),
    [anon_sym_enum] = ACTIONS(337),
    [anon_sym_void] = ACTIONS(337),
    [anon_sym_bool] = ACTIONS(337),
    [anon_sym_int32_t] = ACTIONS(337),
    [anon_sym_wchar_t] = ACTIONS(337),
    [anon_sym_uint8_t] = ACTIONS(337),
    [anon_sym_int] = ACTIONS(339),
    [anon_sym_size_t] = ACTIONS(337),
  },
  [110] = {
    [sym__untrusted_suffix] = STATE(111),
    [aux_sym_ocall_definition_repeat1] = STATE(111),
    [sym_suffix_transition_using_threads] = ACTIONS(305),
    [sym_suffix_propagate_errno] = ACTIONS(305),
    [anon_sym_SEMI] = ACTIONS(341),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [111] = {
    [sym__untrusted_suffix] = STATE(111),
    [aux_sym_ocall_definition_repeat1] = STATE(111),
    [sym_suffix_transition_using_threads] = ACTIONS(343),
    [sym_suffix_propagate_errno] = ACTIONS(343),
    [anon_sym_SEMI] = ACTIONS(346),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [112] = {
    [anon_sym_COMMA] = ACTIONS(348),
    [sym_comments] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(348),
    [sym__white_space] = ACTIONS(5),
  },
  [113] = {
    [sym__untrusted_suffix] = STATE(128),
    [aux_sym_ocall_definition_repeat1] = STATE(128),
    [sym_suffix_transition_using_threads] = ACTIONS(350),
    [sym_suffix_propagate_errno] = ACTIONS(350),
    [anon_sym_SEMI] = ACTIONS(341),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [114] = {
    [sym_untrusted_suffix_allow] = STATE(129),
    [sym__untrusted_suffix] = STATE(128),
    [aux_sym_ocall_definition_repeat1] = STATE(128),
    [sym_suffix_transition_using_threads] = ACTIONS(350),
    [anon_sym_SEMI] = ACTIONS(341),
    [sym_suffix_propagate_errno] = ACTIONS(350),
    [sym_comments] = ACTIONS(5),
    [anon_sym_allow] = ACTIONS(264),
    [sym__white_space] = ACTIONS(5),
  },
  [115] = {
    [aux_sym_ecall_definition_repeat1] = STATE(115),
    [anon_sym_COMMA] = ACTIONS(352),
    [sym_comments] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(348),
    [sym__white_space] = ACTIONS(5),
  },
  [116] = {
    [sym_pointer_declarator] = STATE(130),
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(321),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(111),
  },
  [117] = {
    [anon_sym_float] = ACTIONS(355),
    [anon_sym_union] = ACTIONS(355),
    [anon_sym_uint64_t] = ACTIONS(355),
    [sym__white_space] = ACTIONS(5),
    [sym_trusted_prefix_public] = ACTIONS(355),
    [anon_sym_RBRACE] = ACTIONS(355),
    [anon_sym_include] = ACTIONS(355),
    [anon_sym_int8_t] = ACTIONS(355),
    [anon_sym_uint16_t] = ACTIONS(355),
    [anon_sym_long] = ACTIONS(355),
    [anon_sym_char] = ACTIONS(355),
    [anon_sym_double] = ACTIONS(355),
    [anon_sym_bool] = ACTIONS(355),
    [sym_comments] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(355),
    [anon_sym_from] = ACTIONS(355),
    [anon_sym_int16_t] = ACTIONS(355),
    [anon_sym_uint32_t] = ACTIONS(355),
    [anon_sym_int64_t] = ACTIONS(355),
    [anon_sym_short] = ACTIONS(355),
    [anon_sym_unsigned] = ACTIONS(355),
    [anon_sym_struct] = ACTIONS(355),
    [anon_sym_enum] = ACTIONS(355),
    [anon_sym_void] = ACTIONS(355),
    [anon_sym_int32_t] = ACTIONS(355),
    [anon_sym_wchar_t] = ACTIONS(355),
    [anon_sym_uint8_t] = ACTIONS(355),
    [anon_sym_int] = ACTIONS(357),
    [anon_sym_size_t] = ACTIONS(355),
  },
  [118] = {
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(359),
  },
  [119] = {
    [aux_sym_ecall_definition_repeat1] = STATE(115),
    [anon_sym_COMMA] = ACTIONS(266),
    [sym_comments] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(361),
    [sym__white_space] = ACTIONS(5),
  },
  [120] = {
    [anon_sym_COMMA] = ACTIONS(363),
    [sym_comments] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(363),
    [sym__white_space] = ACTIONS(5),
  },
  [121] = {
    [anon_sym_COMMA] = ACTIONS(365),
    [anon_sym_RBRACK] = ACTIONS(365),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [122] = {
    [anon_sym_COMMA] = ACTIONS(367),
    [anon_sym_RBRACK] = ACTIONS(367),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [123] = {
    [anon_sym_COMMA] = ACTIONS(369),
    [anon_sym_RBRACK] = ACTIONS(369),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [124] = {
    [anon_sym_float] = ACTIONS(371),
    [sym_comments] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(371),
    [anon_sym_union] = ACTIONS(371),
    [anon_sym_uint64_t] = ACTIONS(371),
    [anon_sym_int16_t] = ACTIONS(371),
    [anon_sym_uint32_t] = ACTIONS(371),
    [anon_sym_int64_t] = ACTIONS(371),
    [anon_sym_short] = ACTIONS(371),
    [anon_sym_unsigned] = ACTIONS(371),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_struct] = ACTIONS(371),
    [anon_sym_enum] = ACTIONS(371),
    [anon_sym_int8_t] = ACTIONS(371),
    [anon_sym_uint16_t] = ACTIONS(371),
    [anon_sym_long] = ACTIONS(371),
    [anon_sym_char] = ACTIONS(371),
    [anon_sym_double] = ACTIONS(371),
    [anon_sym_void] = ACTIONS(371),
    [anon_sym_bool] = ACTIONS(371),
    [anon_sym_int32_t] = ACTIONS(371),
    [anon_sym_wchar_t] = ACTIONS(371),
    [anon_sym_uint8_t] = ACTIONS(371),
    [anon_sym_int] = ACTIONS(373),
    [anon_sym_size_t] = ACTIONS(371),
  },
  [125] = {
    [aux_sym_attribute_list_repeat1] = STATE(125),
    [anon_sym_COMMA] = ACTIONS(375),
    [anon_sym_RBRACK] = ACTIONS(369),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [126] = {
    [aux_sym_import_list_repeat1] = STATE(134),
    [anon_sym_COMMA] = ACTIONS(180),
    [sym_comments] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(378),
    [sym__white_space] = ACTIONS(5),
  },
  [127] = {
    [anon_sym_float] = ACTIONS(380),
    [sym_comments] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(380),
    [anon_sym_union] = ACTIONS(380),
    [anon_sym_uint64_t] = ACTIONS(380),
    [anon_sym_from] = ACTIONS(380),
    [anon_sym_int16_t] = ACTIONS(380),
    [anon_sym_uint32_t] = ACTIONS(380),
    [anon_sym_int64_t] = ACTIONS(380),
    [anon_sym_short] = ACTIONS(380),
    [anon_sym_unsigned] = ACTIONS(380),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(380),
    [anon_sym_struct] = ACTIONS(380),
    [anon_sym_include] = ACTIONS(380),
    [anon_sym_int8_t] = ACTIONS(380),
    [anon_sym_uint16_t] = ACTIONS(380),
    [anon_sym_long] = ACTIONS(380),
    [anon_sym_char] = ACTIONS(380),
    [anon_sym_double] = ACTIONS(380),
    [anon_sym_enum] = ACTIONS(380),
    [anon_sym_void] = ACTIONS(380),
    [anon_sym_bool] = ACTIONS(380),
    [anon_sym_int32_t] = ACTIONS(380),
    [anon_sym_wchar_t] = ACTIONS(380),
    [anon_sym_uint8_t] = ACTIONS(380),
    [anon_sym_int] = ACTIONS(382),
    [anon_sym_size_t] = ACTIONS(380),
  },
  [128] = {
    [sym__untrusted_suffix] = STATE(111),
    [aux_sym_ocall_definition_repeat1] = STATE(111),
    [sym_suffix_transition_using_threads] = ACTIONS(305),
    [sym_suffix_propagate_errno] = ACTIONS(305),
    [anon_sym_SEMI] = ACTIONS(384),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [129] = {
    [sym__untrusted_suffix] = STATE(136),
    [aux_sym_ocall_definition_repeat1] = STATE(136),
    [sym_suffix_transition_using_threads] = ACTIONS(386),
    [sym_suffix_propagate_errno] = ACTIONS(386),
    [anon_sym_SEMI] = ACTIONS(384),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [130] = {
    [sym_comments] = ACTIONS(5),
    [sym_identifier] = ACTIONS(388),
    [sym__white_space] = ACTIONS(5),
  },
  [131] = {
    [anon_sym_float] = ACTIONS(390),
    [anon_sym_union] = ACTIONS(390),
    [anon_sym_uint64_t] = ACTIONS(390),
    [sym__white_space] = ACTIONS(5),
    [sym_trusted_prefix_public] = ACTIONS(390),
    [anon_sym_RBRACE] = ACTIONS(390),
    [anon_sym_include] = ACTIONS(390),
    [anon_sym_int8_t] = ACTIONS(390),
    [anon_sym_uint16_t] = ACTIONS(390),
    [anon_sym_long] = ACTIONS(390),
    [anon_sym_char] = ACTIONS(390),
    [anon_sym_double] = ACTIONS(390),
    [anon_sym_bool] = ACTIONS(390),
    [sym_comments] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(390),
    [anon_sym_from] = ACTIONS(390),
    [anon_sym_int16_t] = ACTIONS(390),
    [anon_sym_uint32_t] = ACTIONS(390),
    [anon_sym_int64_t] = ACTIONS(390),
    [anon_sym_short] = ACTIONS(390),
    [anon_sym_unsigned] = ACTIONS(390),
    [anon_sym_struct] = ACTIONS(390),
    [anon_sym_enum] = ACTIONS(390),
    [anon_sym_void] = ACTIONS(390),
    [anon_sym_int32_t] = ACTIONS(390),
    [anon_sym_wchar_t] = ACTIONS(390),
    [anon_sym_uint8_t] = ACTIONS(390),
    [anon_sym_int] = ACTIONS(392),
    [anon_sym_size_t] = ACTIONS(390),
  },
  [132] = {
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(394),
  },
  [133] = {
    [sym_suffix_transition_using_threads] = ACTIONS(396),
    [sym_suffix_propagate_errno] = ACTIONS(396),
    [anon_sym_SEMI] = ACTIONS(396),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [134] = {
    [aux_sym_import_list_repeat1] = STATE(140),
    [anon_sym_COMMA] = ACTIONS(180),
    [sym_comments] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(398),
    [sym__white_space] = ACTIONS(5),
  },
  [135] = {
    [anon_sym_float] = ACTIONS(400),
    [sym_comments] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(400),
    [anon_sym_union] = ACTIONS(400),
    [anon_sym_uint64_t] = ACTIONS(400),
    [anon_sym_from] = ACTIONS(400),
    [anon_sym_int16_t] = ACTIONS(400),
    [anon_sym_uint32_t] = ACTIONS(400),
    [anon_sym_int64_t] = ACTIONS(400),
    [anon_sym_short] = ACTIONS(400),
    [anon_sym_unsigned] = ACTIONS(400),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(400),
    [anon_sym_struct] = ACTIONS(400),
    [anon_sym_include] = ACTIONS(400),
    [anon_sym_int8_t] = ACTIONS(400),
    [anon_sym_uint16_t] = ACTIONS(400),
    [anon_sym_long] = ACTIONS(400),
    [anon_sym_char] = ACTIONS(400),
    [anon_sym_double] = ACTIONS(400),
    [anon_sym_enum] = ACTIONS(400),
    [anon_sym_void] = ACTIONS(400),
    [anon_sym_bool] = ACTIONS(400),
    [anon_sym_int32_t] = ACTIONS(400),
    [anon_sym_wchar_t] = ACTIONS(400),
    [anon_sym_uint8_t] = ACTIONS(400),
    [anon_sym_int] = ACTIONS(402),
    [anon_sym_size_t] = ACTIONS(400),
  },
  [136] = {
    [sym__untrusted_suffix] = STATE(111),
    [aux_sym_ocall_definition_repeat1] = STATE(111),
    [sym_suffix_transition_using_threads] = ACTIONS(305),
    [sym_suffix_propagate_errno] = ACTIONS(305),
    [anon_sym_SEMI] = ACTIONS(404),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [137] = {
    [anon_sym_COMMA] = ACTIONS(406),
    [sym_comments] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(406),
    [sym__white_space] = ACTIONS(5),
  },
  [138] = {
    [anon_sym_float] = ACTIONS(408),
    [anon_sym_union] = ACTIONS(408),
    [anon_sym_uint64_t] = ACTIONS(408),
    [sym__white_space] = ACTIONS(5),
    [sym_trusted_prefix_public] = ACTIONS(408),
    [anon_sym_RBRACE] = ACTIONS(408),
    [anon_sym_include] = ACTIONS(408),
    [anon_sym_int8_t] = ACTIONS(408),
    [anon_sym_uint16_t] = ACTIONS(408),
    [anon_sym_long] = ACTIONS(408),
    [anon_sym_char] = ACTIONS(408),
    [anon_sym_double] = ACTIONS(408),
    [anon_sym_bool] = ACTIONS(408),
    [sym_comments] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(408),
    [anon_sym_from] = ACTIONS(408),
    [anon_sym_int16_t] = ACTIONS(408),
    [anon_sym_uint32_t] = ACTIONS(408),
    [anon_sym_int64_t] = ACTIONS(408),
    [anon_sym_short] = ACTIONS(408),
    [anon_sym_unsigned] = ACTIONS(408),
    [anon_sym_struct] = ACTIONS(408),
    [anon_sym_enum] = ACTIONS(408),
    [anon_sym_void] = ACTIONS(408),
    [anon_sym_int32_t] = ACTIONS(408),
    [anon_sym_wchar_t] = ACTIONS(408),
    [anon_sym_uint8_t] = ACTIONS(408),
    [anon_sym_int] = ACTIONS(410),
    [anon_sym_size_t] = ACTIONS(408),
  },
  [139] = {
    [sym_suffix_transition_using_threads] = ACTIONS(412),
    [sym_suffix_propagate_errno] = ACTIONS(412),
    [anon_sym_SEMI] = ACTIONS(412),
    [sym_comments] = ACTIONS(5),
    [sym__white_space] = ACTIONS(5),
  },
  [140] = {
    [aux_sym_import_list_repeat1] = STATE(140),
    [anon_sym_COMMA] = ACTIONS(276),
    [sym_comments] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(274),
    [sym__white_space] = ACTIONS(5),
  },
  [141] = {
    [anon_sym_float] = ACTIONS(414),
    [sym_comments] = ACTIONS(5),
    [sym_type_qualifier] = ACTIONS(414),
    [anon_sym_union] = ACTIONS(414),
    [anon_sym_uint64_t] = ACTIONS(414),
    [anon_sym_from] = ACTIONS(414),
    [anon_sym_int16_t] = ACTIONS(414),
    [anon_sym_uint32_t] = ACTIONS(414),
    [anon_sym_int64_t] = ACTIONS(414),
    [anon_sym_short] = ACTIONS(414),
    [anon_sym_unsigned] = ACTIONS(414),
    [sym__white_space] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(414),
    [anon_sym_struct] = ACTIONS(414),
    [anon_sym_include] = ACTIONS(414),
    [anon_sym_int8_t] = ACTIONS(414),
    [anon_sym_uint16_t] = ACTIONS(414),
    [anon_sym_long] = ACTIONS(414),
    [anon_sym_char] = ACTIONS(414),
    [anon_sym_double] = ACTIONS(414),
    [anon_sym_enum] = ACTIONS(414),
    [anon_sym_void] = ACTIONS(414),
    [anon_sym_bool] = ACTIONS(414),
    [anon_sym_int32_t] = ACTIONS(414),
    [anon_sym_wchar_t] = ACTIONS(414),
    [anon_sym_uint8_t] = ACTIONS(414),
    [anon_sym_int] = ACTIONS(416),
    [anon_sym_size_t] = ACTIONS(414),
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
  [95] = {.count = 1, .reusable = false}, SHIFT(45),
  [97] = {.count = 1, .reusable = false}, REDUCE(sym_type_specifier, 1),
  [99] = {.count = 1, .reusable = true}, SHIFT(46),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_untrusted_inner_items, 1),
  [103] = {.count = 1, .reusable = false}, REDUCE(sym_untrusted_inner_items, 1),
  [105] = {.count = 1, .reusable = true}, SHIFT(47),
  [107] = {.count = 1, .reusable = true}, SHIFT(48),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_retval, 1),
  [111] = {.count = 1, .reusable = true}, SHIFT(50),
  [113] = {.count = 1, .reusable = true}, SHIFT(52),
  [115] = {.count = 1, .reusable = true}, SHIFT(53),
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
  [147] = {.count = 1, .reusable = true}, SHIFT(63),
  [149] = {.count = 2, .reusable = true}, REDUCE(aux_sym_untrusted_repeat1, 2), SHIFT_REPEAT(19),
  [152] = {.count = 2, .reusable = true}, REDUCE(aux_sym_untrusted_repeat1, 2), SHIFT_REPEAT(20),
  [155] = {.count = 2, .reusable = true}, REDUCE(aux_sym_untrusted_repeat1, 2), SHIFT_REPEAT(21),
  [158] = {.count = 2, .reusable = true}, REDUCE(aux_sym_untrusted_repeat1, 2), SHIFT_REPEAT(22),
  [161] = {.count = 1, .reusable = true}, REDUCE(aux_sym_untrusted_repeat1, 2),
  [163] = {.count = 2, .reusable = true}, REDUCE(aux_sym_untrusted_repeat1, 2), SHIFT_REPEAT(23),
  [166] = {.count = 2, .reusable = true}, REDUCE(aux_sym_untrusted_repeat1, 2), SHIFT_REPEAT(25),
  [169] = {.count = 2, .reusable = true}, REDUCE(aux_sym_untrusted_repeat1, 2), SHIFT_REPEAT(26),
  [172] = {.count = 2, .reusable = true}, REDUCE(aux_sym_untrusted_repeat1, 2), SHIFT_REPEAT(27),
  [175] = {.count = 2, .reusable = false}, REDUCE(aux_sym_untrusted_repeat1, 2), SHIFT_REPEAT(19),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym_pointer_declarator, 1),
  [180] = {.count = 1, .reusable = true}, SHIFT(64),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_import_list, 1),
  [184] = {.count = 1, .reusable = true}, SHIFT(66),
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
  [232] = {.count = 1, .reusable = true}, SHIFT(71),
  [234] = {.count = 1, .reusable = true}, SHIFT(72),
  [236] = {.count = 1, .reusable = true}, SHIFT(73),
  [238] = {.count = 1, .reusable = true}, REDUCE(sym_untrusted, 5),
  [240] = {.count = 1, .reusable = true}, SHIFT(77),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym_import_list, 2),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym_from, 5),
  [246] = {.count = 1, .reusable = true}, SHIFT(79),
  [248] = {.count = 1, .reusable = true}, REDUCE(sym_trusted, 5),
  [250] = {.count = 1, .reusable = true}, SHIFT(80),
  [252] = {.count = 1, .reusable = true}, SHIFT(82),
  [254] = {.count = 1, .reusable = true}, SHIFT(86),
  [256] = {.count = 1, .reusable = true}, SHIFT(84),
  [258] = {.count = 1, .reusable = true}, SHIFT(85),
  [260] = {.count = 1, .reusable = true}, SHIFT(90),
  [262] = {.count = 1, .reusable = true}, SHIFT(87),
  [264] = {.count = 1, .reusable = true}, SHIFT(88),
  [266] = {.count = 1, .reusable = true}, SHIFT(91),
  [268] = {.count = 1, .reusable = true}, SHIFT(92),
  [270] = {.count = 1, .reusable = true}, SHIFT(94),
  [272] = {.count = 1, .reusable = true}, SHIFT(95),
  [274] = {.count = 1, .reusable = true}, REDUCE(aux_sym_import_list_repeat1, 2),
  [276] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_list_repeat1, 2), SHIFT_REPEAT(64),
  [279] = {.count = 1, .reusable = true}, SHIFT(97),
  [281] = {.count = 1, .reusable = true}, SHIFT(99),
  [283] = {.count = 1, .reusable = false}, REDUCE(sym_from, 5),
  [285] = {.count = 1, .reusable = true}, SHIFT(101),
  [287] = {.count = 1, .reusable = true}, SHIFT(103),
  [289] = {.count = 1, .reusable = true}, SHIFT(104),
  [291] = {.count = 1, .reusable = true}, SHIFT(105),
  [293] = {.count = 1, .reusable = true}, SHIFT(106),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_ocall_definition, 5),
  [297] = {.count = 1, .reusable = false}, REDUCE(sym_ocall_definition, 5),
  [299] = {.count = 1, .reusable = true}, SHIFT(108),
  [301] = {.count = 1, .reusable = true}, SHIFT(110),
  [303] = {.count = 1, .reusable = true}, SHIFT(109),
  [305] = {.count = 1, .reusable = true}, SHIFT(111),
  [307] = {.count = 1, .reusable = true}, SHIFT(114),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [311] = {.count = 1, .reusable = true}, SHIFT(117),
  [313] = {.count = 1, .reusable = true}, SHIFT(118),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym_ecall_definition, 5),
  [317] = {.count = 1, .reusable = false}, REDUCE(sym_ecall_definition, 5),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 3),
  [321] = {.count = 1, .reusable = true}, SHIFT(120),
  [323] = {.count = 1, .reusable = true}, SHIFT(121),
  [325] = {.count = 1, .reusable = true}, SHIFT(122),
  [327] = {.count = 1, .reusable = true}, SHIFT(123),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_list, 3),
  [331] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_list, 3),
  [333] = {.count = 1, .reusable = true}, SHIFT(124),
  [335] = {.count = 1, .reusable = true}, SHIFT(126),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym_ocall_definition, 6),
  [339] = {.count = 1, .reusable = false}, REDUCE(sym_ocall_definition, 6),
  [341] = {.count = 1, .reusable = true}, SHIFT(127),
  [343] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ocall_definition_repeat1, 2), SHIFT_REPEAT(111),
  [346] = {.count = 1, .reusable = true}, REDUCE(aux_sym_ocall_definition_repeat1, 2),
  [348] = {.count = 1, .reusable = true}, REDUCE(aux_sym_ecall_definition_repeat1, 2),
  [350] = {.count = 1, .reusable = true}, SHIFT(128),
  [352] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ecall_definition_repeat1, 2), SHIFT_REPEAT(91),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym_ecall_definition, 6),
  [357] = {.count = 1, .reusable = false}, REDUCE(sym_ecall_definition, 6),
  [359] = {.count = 1, .reusable = true}, SHIFT(131),
  [361] = {.count = 1, .reusable = true}, SHIFT(132),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 4),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym_size_attribute, 3),
  [367] = {.count = 1, .reusable = true}, REDUCE(sym_count_attribute, 3),
  [369] = {.count = 1, .reusable = true}, REDUCE(aux_sym_attribute_list_repeat1, 2),
  [371] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_list, 4),
  [373] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_list, 4),
  [375] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attribute_list_repeat1, 2), SHIFT_REPEAT(105),
  [378] = {.count = 1, .reusable = true}, SHIFT(133),
  [380] = {.count = 1, .reusable = true}, REDUCE(sym_ocall_definition, 7),
  [382] = {.count = 1, .reusable = false}, REDUCE(sym_ocall_definition, 7),
  [384] = {.count = 1, .reusable = true}, SHIFT(135),
  [386] = {.count = 1, .reusable = true}, SHIFT(136),
  [388] = {.count = 1, .reusable = true}, SHIFT(137),
  [390] = {.count = 1, .reusable = true}, REDUCE(sym_ecall_definition, 7),
  [392] = {.count = 1, .reusable = false}, REDUCE(sym_ecall_definition, 7),
  [394] = {.count = 1, .reusable = true}, SHIFT(138),
  [396] = {.count = 1, .reusable = true}, REDUCE(sym_untrusted_suffix_allow, 4),
  [398] = {.count = 1, .reusable = true}, SHIFT(139),
  [400] = {.count = 1, .reusable = true}, REDUCE(sym_ocall_definition, 8),
  [402] = {.count = 1, .reusable = false}, REDUCE(sym_ocall_definition, 8),
  [404] = {.count = 1, .reusable = true}, SHIFT(141),
  [406] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 5),
  [408] = {.count = 1, .reusable = true}, REDUCE(sym_ecall_definition, 8),
  [410] = {.count = 1, .reusable = false}, REDUCE(sym_ecall_definition, 8),
  [412] = {.count = 1, .reusable = true}, REDUCE(sym_untrusted_suffix_allow, 5),
  [414] = {.count = 1, .reusable = true}, REDUCE(sym_ocall_definition, 9),
  [416] = {.count = 1, .reusable = false}, REDUCE(sym_ocall_definition, 9),
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
