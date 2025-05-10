#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 95
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_use = 1,
  anon_sym_SEMI = 2,
  anon_sym_enum = 3,
  anon_sym_LT = 4,
  anon_sym_GT = 5,
  anon_sym_LBRACE = 6,
  anon_sym_COMMA = 7,
  anon_sym_RBRACE = 8,
  anon_sym_register = 9,
  anon_sym_block = 10,
  anon_sym_COLON = 11,
  anon_sym_AT = 12,
  anon_sym_COLON_COLON = 13,
  anon_sym_LBRACK = 14,
  anon_sym_RBRACK = 15,
  anon_sym_EQ = 16,
  anon_sym_ro = 17,
  anon_sym_wo = 18,
  anon_sym_rw = 19,
  anon_sym_reserved = 20,
  anon_sym_DOT_DOT_DOT = 21,
  sym_identifier = 22,
  sym_decimal = 23,
  sym_hex = 24,
  sym_binary = 25,
  sym_comment = 26,
  sym_source_file = 27,
  sym_top = 28,
  sym_use = 29,
  sym_enum_decl = 30,
  sym_register_decl = 31,
  sym_block_decl = 32,
  sym_component = 33,
  sym_component_kind = 34,
  sym_enum_alternate = 35,
  sym_field = 36,
  sym_number = 37,
  sym_mode = 38,
  sym_member = 39,
  sym_type = 40,
  aux_sym_source_file_repeat1 = 41,
  aux_sym_enum_decl_repeat1 = 42,
  aux_sym_register_decl_repeat1 = 43,
  aux_sym_block_decl_repeat1 = 44,
  aux_sym_component_kind_repeat1 = 45,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_use] = "use",
  [anon_sym_SEMI] = ";",
  [anon_sym_enum] = "enum",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_register] = "register",
  [anon_sym_block] = "block",
  [anon_sym_COLON] = ":",
  [anon_sym_AT] = "@",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [anon_sym_ro] = "ro",
  [anon_sym_wo] = "wo",
  [anon_sym_rw] = "rw",
  [anon_sym_reserved] = "reserved",
  [anon_sym_DOT_DOT_DOT] = "...",
  [sym_identifier] = "identifier",
  [sym_decimal] = "decimal",
  [sym_hex] = "hex",
  [sym_binary] = "binary",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_top] = "top",
  [sym_use] = "use",
  [sym_enum_decl] = "enum_decl",
  [sym_register_decl] = "register_decl",
  [sym_block_decl] = "block_decl",
  [sym_component] = "component",
  [sym_component_kind] = "component_kind",
  [sym_enum_alternate] = "enum_alternate",
  [sym_field] = "field",
  [sym_number] = "number",
  [sym_mode] = "mode",
  [sym_member] = "member",
  [sym_type] = "type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_enum_decl_repeat1] = "enum_decl_repeat1",
  [aux_sym_register_decl_repeat1] = "register_decl_repeat1",
  [aux_sym_block_decl_repeat1] = "block_decl_repeat1",
  [aux_sym_component_kind_repeat1] = "component_kind_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_register] = anon_sym_register,
  [anon_sym_block] = anon_sym_block,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_ro] = anon_sym_ro,
  [anon_sym_wo] = anon_sym_wo,
  [anon_sym_rw] = anon_sym_rw,
  [anon_sym_reserved] = anon_sym_reserved,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [sym_identifier] = sym_identifier,
  [sym_decimal] = sym_decimal,
  [sym_hex] = sym_hex,
  [sym_binary] = sym_binary,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_top] = sym_top,
  [sym_use] = sym_use,
  [sym_enum_decl] = sym_enum_decl,
  [sym_register_decl] = sym_register_decl,
  [sym_block_decl] = sym_block_decl,
  [sym_component] = sym_component,
  [sym_component_kind] = sym_component_kind,
  [sym_enum_alternate] = sym_enum_alternate,
  [sym_field] = sym_field,
  [sym_number] = sym_number,
  [sym_mode] = sym_mode,
  [sym_member] = sym_member,
  [sym_type] = sym_type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_enum_decl_repeat1] = aux_sym_enum_decl_repeat1,
  [aux_sym_register_decl_repeat1] = aux_sym_register_decl_repeat1,
  [aux_sym_block_decl_repeat1] = aux_sym_block_decl_repeat1,
  [aux_sym_component_kind_repeat1] = aux_sym_component_kind_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_register] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_block] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reserved] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_top] = {
    .visible = true,
    .named = true,
  },
  [sym_use] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_register_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_block_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_component] = {
    .visible = true,
    .named = true,
  },
  [sym_component_kind] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_alternate] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_mode] = {
    .visible = true,
    .named = true,
  },
  [sym_member] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_component_kind_repeat1] = {
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(38);
      ADVANCE_MAP(
        ',', 45,
        '.', 8,
        '/', 10,
        '0', 62,
        ':', 50,
        ';', 40,
        '<', 42,
        '=', 55,
        '>', 43,
        '@', 51,
        '[', 53,
      );
      if (lookahead == '\\') SKIP(37);
      if (lookahead == ']') ADVANCE(54);
      if (lookahead == 'b') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(29);
      if (lookahead == 'w') ADVANCE(25);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '}') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(6);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(6);
      if (lookahead == '\r') SKIP(1);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(9);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(9);
      if (lookahead == '\r') SKIP(3);
      END_STATE();
    case 5:
      if (lookahead == '\r') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 6:
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == '\\') SKIP(2);
      if (lookahead == '}') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(60);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == '\\') SKIP(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(67);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(52);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == 'w') ADVANCE(58);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 'g') ADVANCE(20);
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 'k') ADVANCE(48);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 33:
      if (lookahead == 'v') ADVANCE(17);
      END_STATE();
    case 34:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(65);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 36:
      if (eof) ADVANCE(38);
      if (lookahead == '\n') SKIP(0);
      END_STATE();
    case 37:
      if (eof) ADVANCE(38);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '\r') SKIP(36);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_register);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_block);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(52);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_ro);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_wo);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_rw);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_reserved);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == 'b') ADVANCE(34);
      if (lookahead == 'x') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_register] = ACTIONS(1),
    [anon_sym_block] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_ro] = ACTIONS(1),
    [anon_sym_wo] = ACTIONS(1),
    [anon_sym_rw] = ACTIONS(1),
    [anon_sym_reserved] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [sym_decimal] = ACTIONS(1),
    [sym_hex] = ACTIONS(1),
    [sym_binary] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(80),
    [sym_top] = STATE(2),
    [sym_use] = STATE(19),
    [sym_enum_decl] = STATE(19),
    [sym_register_decl] = STATE(19),
    [sym_block_decl] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_use] = ACTIONS(7),
    [anon_sym_enum] = ACTIONS(9),
    [anon_sym_register] = ACTIONS(11),
    [anon_sym_block] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_use,
    ACTIONS(9), 1,
      anon_sym_enum,
    ACTIONS(11), 1,
      anon_sym_register,
    ACTIONS(13), 1,
      anon_sym_block,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(3), 2,
      sym_top,
      aux_sym_source_file_repeat1,
    STATE(19), 4,
      sym_use,
      sym_enum_decl,
      sym_register_decl,
      sym_block_decl,
  [29] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_use,
    ACTIONS(22), 1,
      anon_sym_enum,
    ACTIONS(25), 1,
      anon_sym_register,
    ACTIONS(28), 1,
      anon_sym_block,
    STATE(3), 2,
      sym_top,
      aux_sym_source_file_repeat1,
    STATE(19), 4,
      sym_use,
      sym_enum_decl,
      sym_register_decl,
      sym_block_decl,
  [58] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 5,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_enum,
      anon_sym_register,
      anon_sym_block,
  [69] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 5,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_enum,
      anon_sym_register,
      anon_sym_block,
  [80] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 5,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_enum,
      anon_sym_register,
      anon_sym_block,
  [91] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 5,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 5,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_enum,
      anon_sym_register,
      anon_sym_block,
  [113] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(25), 1,
      sym_type,
    STATE(26), 1,
      aux_sym_component_kind_repeat1,
    STATE(62), 1,
      sym_component_kind,
  [132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 5,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_enum,
      anon_sym_register,
      anon_sym_block,
  [143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_COLON_COLON,
    ACTIONS(47), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_LBRACK,
  [156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 5,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_enum,
      anon_sym_register,
      anon_sym_block,
  [167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 5,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_enum,
      anon_sym_register,
      anon_sym_block,
  [178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 5,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_enum,
      anon_sym_register,
      anon_sym_block,
  [189] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(31), 1,
      sym_mode,
    ACTIONS(57), 4,
      anon_sym_ro,
      anon_sym_wo,
      anon_sym_rw,
      anon_sym_reserved,
  [202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 5,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_LBRACK,
  [213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 5,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_enum,
      anon_sym_register,
      anon_sym_block,
  [224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 5,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_enum,
      anon_sym_register,
      anon_sym_block,
  [235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 5,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_enum,
      anon_sym_register,
      anon_sym_block,
  [246] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_decimal,
    STATE(90), 1,
      sym_number,
    ACTIONS(67), 2,
      sym_hex,
      sym_binary,
  [260] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_decimal,
    STATE(88), 1,
      sym_number,
    ACTIONS(67), 2,
      sym_hex,
      sym_binary,
  [274] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_decimal,
    STATE(65), 1,
      sym_number,
    ACTIONS(67), 2,
      sym_hex,
      sym_binary,
  [288] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(71), 1,
      sym_identifier,
    STATE(66), 1,
      sym_component,
    STATE(79), 1,
      sym_member,
  [304] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_field,
    STATE(91), 1,
      sym_member,
  [320] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_AT,
  [332] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(34), 1,
      sym_type,
    STATE(39), 1,
      aux_sym_component_kind_repeat1,
  [348] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_decimal,
    STATE(71), 1,
      sym_number,
    ACTIONS(67), 2,
      sym_hex,
      sym_binary,
  [362] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      sym_component,
    STATE(79), 1,
      sym_member,
  [378] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_decimal,
    STATE(74), 1,
      sym_number,
    ACTIONS(67), 2,
      sym_hex,
      sym_binary,
  [392] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_field,
    STATE(91), 1,
      sym_member,
  [408] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(35), 1,
      aux_sym_component_kind_repeat1,
    STATE(59), 1,
      sym_type,
  [424] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_decimal,
    STATE(86), 1,
      sym_number,
    ACTIONS(67), 2,
      sym_hex,
      sym_binary,
  [438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_decimal,
    STATE(75), 1,
      sym_number,
    ACTIONS(67), 2,
      sym_hex,
      sym_binary,
  [452] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_AT,
  [464] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(39), 1,
      aux_sym_component_kind_repeat1,
    STATE(63), 1,
      sym_type,
  [480] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_decimal,
    STATE(92), 1,
      sym_number,
    ACTIONS(67), 2,
      sym_hex,
      sym_binary,
  [494] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_decimal,
    STATE(73), 1,
      sym_number,
    ACTIONS(67), 2,
      sym_hex,
      sym_binary,
  [508] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_decimal,
    STATE(77), 1,
      sym_number,
    ACTIONS(67), 2,
      sym_hex,
      sym_binary,
  [522] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(89), 1,
      sym_identifier,
    STATE(39), 1,
      aux_sym_component_kind_repeat1,
  [535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_AT,
  [544] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      aux_sym_enum_decl_repeat1,
  [557] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      aux_sym_register_decl_repeat1,
  [570] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_identifier,
    STATE(66), 1,
      sym_component,
    STATE(79), 1,
      sym_member,
  [583] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_identifier,
    STATE(47), 1,
      sym_component,
    STATE(79), 1,
      sym_member,
  [596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(78), 1,
      sym_type,
    ACTIONS(41), 2,
      anon_sym_DOT_DOT_DOT,
      sym_identifier,
  [607] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(83), 1,
      sym_type,
    ACTIONS(41), 2,
      anon_sym_DOT_DOT_DOT,
      sym_identifier,
  [618] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_block_decl_repeat1,
  [631] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    ACTIONS(108), 1,
      sym_identifier,
    STATE(76), 1,
      sym_enum_alternate,
  [644] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      aux_sym_enum_decl_repeat1,
  [657] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym_register_decl_repeat1,
  [670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(81), 1,
      sym_type,
    ACTIONS(41), 2,
      anon_sym_DOT_DOT_DOT,
      sym_identifier,
  [681] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      aux_sym_block_decl_repeat1,
  [694] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    STATE(76), 1,
      sym_enum_alternate,
  [707] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_COMMA,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_enum_decl_repeat1,
  [720] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_register_decl_repeat1,
  [733] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_identifier,
    STATE(42), 1,
      sym_field,
    STATE(91), 1,
      sym_member,
  [746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_AT,
  [755] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_identifier,
    STATE(70), 1,
      sym_field,
    STATE(91), 1,
      sym_member,
  [768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_AT,
    ACTIONS(130), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [779] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_COMMA,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym_block_decl_repeat1,
  [792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_AT,
  [801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_AT,
    ACTIONS(141), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_AT,
    ACTIONS(145), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_AT,
  [832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 2,
      anon_sym_DOT_DOT_DOT,
      sym_identifier,
  [856] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_identifier,
    STATE(41), 1,
      sym_enum_alternate,
  [866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 2,
      anon_sym_DOT_DOT_DOT,
      sym_identifier,
  [874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_SEMI,
    ACTIONS(157), 1,
      anon_sym_RBRACK,
  [892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_identifier,
    STATE(76), 1,
      sym_enum_alternate,
  [902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [918] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_SEMI,
    ACTIONS(165), 1,
      anon_sym_RBRACK,
  [928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
  [951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_COLON,
  [958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
  [965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
  [972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_COLON,
  [979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
  [986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_EQ,
  [993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LT,
  [1000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_RBRACK,
  [1007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      sym_identifier,
  [1014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_GT,
  [1021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_COLON_COLON,
  [1028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_GT,
  [1035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_COLON,
  [1042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_RBRACK,
  [1049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LT,
  [1056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 80,
  [SMALL_STATE(7)] = 91,
  [SMALL_STATE(8)] = 102,
  [SMALL_STATE(9)] = 113,
  [SMALL_STATE(10)] = 132,
  [SMALL_STATE(11)] = 143,
  [SMALL_STATE(12)] = 156,
  [SMALL_STATE(13)] = 167,
  [SMALL_STATE(14)] = 178,
  [SMALL_STATE(15)] = 189,
  [SMALL_STATE(16)] = 202,
  [SMALL_STATE(17)] = 213,
  [SMALL_STATE(18)] = 224,
  [SMALL_STATE(19)] = 235,
  [SMALL_STATE(20)] = 246,
  [SMALL_STATE(21)] = 260,
  [SMALL_STATE(22)] = 274,
  [SMALL_STATE(23)] = 288,
  [SMALL_STATE(24)] = 304,
  [SMALL_STATE(25)] = 320,
  [SMALL_STATE(26)] = 332,
  [SMALL_STATE(27)] = 348,
  [SMALL_STATE(28)] = 362,
  [SMALL_STATE(29)] = 378,
  [SMALL_STATE(30)] = 392,
  [SMALL_STATE(31)] = 408,
  [SMALL_STATE(32)] = 424,
  [SMALL_STATE(33)] = 438,
  [SMALL_STATE(34)] = 452,
  [SMALL_STATE(35)] = 464,
  [SMALL_STATE(36)] = 480,
  [SMALL_STATE(37)] = 494,
  [SMALL_STATE(38)] = 508,
  [SMALL_STATE(39)] = 522,
  [SMALL_STATE(40)] = 535,
  [SMALL_STATE(41)] = 544,
  [SMALL_STATE(42)] = 557,
  [SMALL_STATE(43)] = 570,
  [SMALL_STATE(44)] = 583,
  [SMALL_STATE(45)] = 596,
  [SMALL_STATE(46)] = 607,
  [SMALL_STATE(47)] = 618,
  [SMALL_STATE(48)] = 631,
  [SMALL_STATE(49)] = 644,
  [SMALL_STATE(50)] = 657,
  [SMALL_STATE(51)] = 670,
  [SMALL_STATE(52)] = 681,
  [SMALL_STATE(53)] = 694,
  [SMALL_STATE(54)] = 707,
  [SMALL_STATE(55)] = 720,
  [SMALL_STATE(56)] = 733,
  [SMALL_STATE(57)] = 746,
  [SMALL_STATE(58)] = 755,
  [SMALL_STATE(59)] = 768,
  [SMALL_STATE(60)] = 779,
  [SMALL_STATE(61)] = 792,
  [SMALL_STATE(62)] = 801,
  [SMALL_STATE(63)] = 812,
  [SMALL_STATE(64)] = 823,
  [SMALL_STATE(65)] = 832,
  [SMALL_STATE(66)] = 840,
  [SMALL_STATE(67)] = 848,
  [SMALL_STATE(68)] = 856,
  [SMALL_STATE(69)] = 866,
  [SMALL_STATE(70)] = 874,
  [SMALL_STATE(71)] = 882,
  [SMALL_STATE(72)] = 892,
  [SMALL_STATE(73)] = 902,
  [SMALL_STATE(74)] = 910,
  [SMALL_STATE(75)] = 918,
  [SMALL_STATE(76)] = 928,
  [SMALL_STATE(77)] = 936,
  [SMALL_STATE(78)] = 944,
  [SMALL_STATE(79)] = 951,
  [SMALL_STATE(80)] = 958,
  [SMALL_STATE(81)] = 965,
  [SMALL_STATE(82)] = 972,
  [SMALL_STATE(83)] = 979,
  [SMALL_STATE(84)] = 986,
  [SMALL_STATE(85)] = 993,
  [SMALL_STATE(86)] = 1000,
  [SMALL_STATE(87)] = 1007,
  [SMALL_STATE(88)] = 1014,
  [SMALL_STATE(89)] = 1021,
  [SMALL_STATE(90)] = 1028,
  [SMALL_STATE(91)] = 1035,
  [SMALL_STATE(92)] = 1042,
  [SMALL_STATE(93)] = 1049,
  [SMALL_STATE(94)] = 1056,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 9, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register_decl, 10, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 3, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_decl, 5, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_decl, 6, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_decl, 7, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 8, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register_decl, 8, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register_decl, 9, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 10, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_kind, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_kind, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_kind_repeat1, 2, 0, 0),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_kind_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_kind, 7, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat1, 2, 0, 0),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_register_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_register_decl_repeat1, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_kind, 4, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_decl_repeat1, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_kind, 5, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_kind, 6, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_alternate, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 5, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 7, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [173] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_rsf(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
