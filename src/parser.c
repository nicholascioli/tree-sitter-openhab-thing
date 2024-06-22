#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_Bridge = 2,
  anon_sym_Thing = 3,
  anon_sym_AT = 4,
  anon_sym_LBRACK = 5,
  anon_sym_COMMA = 6,
  anon_sym_RBRACK = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_COLON = 10,
  anon_sym_EQ = 11,
  sym_comment = 12,
  sym_literal = 13,
  anon_sym_DQUOTE = 14,
  aux_sym_string_token1 = 15,
  sym_source_file = 16,
  sym__root_thing = 17,
  sym_bridge = 18,
  sym_thing = 19,
  sym__metadata = 20,
  sym_parameter_block = 21,
  sym_thing_block = 22,
  sym_unique_identifier = 23,
  sym_parameter = 24,
  sym_string = 25,
  aux_sym_source_file_repeat1 = 26,
  aux_sym_parameter_block_repeat1 = 27,
  aux_sym_thing_block_repeat1 = 28,
  aux_sym_string_repeat1 = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_Bridge] = "Bridge",
  [anon_sym_Thing] = "Thing",
  [anon_sym_AT] = "@",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [sym_comment] = "comment",
  [sym_literal] = "literal",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_source_file] = "source_file",
  [sym__root_thing] = "_root_thing",
  [sym_bridge] = "bridge",
  [sym_thing] = "thing",
  [sym__metadata] = "_metadata",
  [sym_parameter_block] = "parameter_block",
  [sym_thing_block] = "thing_block",
  [sym_unique_identifier] = "unique_identifier",
  [sym_parameter] = "parameter",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_block_repeat1] = "parameter_block_repeat1",
  [aux_sym_thing_block_repeat1] = "thing_block_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_Bridge] = anon_sym_Bridge,
  [anon_sym_Thing] = anon_sym_Thing,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_comment] = sym_comment,
  [sym_literal] = sym_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_source_file] = sym_source_file,
  [sym__root_thing] = sym__root_thing,
  [sym_bridge] = sym_bridge,
  [sym_thing] = sym_thing,
  [sym__metadata] = sym__metadata,
  [sym_parameter_block] = sym_parameter_block,
  [sym_thing_block] = sym_thing_block,
  [sym_unique_identifier] = sym_unique_identifier,
  [sym_parameter] = sym_parameter,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_block_repeat1] = aux_sym_parameter_block_repeat1,
  [aux_sym_thing_block_repeat1] = aux_sym_thing_block_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Bridge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Thing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__root_thing] = {
    .visible = false,
    .named = true,
  },
  [sym_bridge] = {
    .visible = true,
    .named = true,
  },
  [sym_thing] = {
    .visible = true,
    .named = true,
  },
  [sym__metadata] = {
    .visible = false,
    .named = true,
  },
  [sym_parameter_block] = {
    .visible = true,
    .named = true,
  },
  [sym_thing_block] = {
    .visible = true,
    .named = true,
  },
  [sym_unique_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_thing_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_binding = 1,
  field_label = 2,
  field_location = 3,
  field_name = 4,
  field_property = 5,
  field_value = 6,
  field_variant = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_binding] = "binding",
  [field_label] = "label",
  [field_location] = "location",
  [field_name] = "name",
  [field_property] = "property",
  [field_value] = "value",
  [field_variant] = "variant",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 3},
  [5] = {.index = 8, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_label, 2, .inherited = true},
    {field_location, 2, .inherited = true},
  [2] =
    {field_label, 0},
  [3] =
    {field_label, 0},
    {field_location, 2},
  [5] =
    {field_binding, 0},
    {field_name, 4},
    {field_variant, 2},
  [8] =
    {field_property, 0},
    {field_value, 2},
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
};

static TSCharacterRange extras_character_set_1[] = {
  {'\t', '\r'}, {' ', ' '}, {0xa0, 0xa0}, {0x1680, 0x1680}, {0x2000, 0x200b}, {0x2028, 0x2029}, {0x202f, 0x202f}, {0x205f, 0x2060},
  {0x3000, 0x3000}, {0xfeff, 0xfeff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      ADVANCE_MAP(
        '"', 15,
        ',', 6,
        '/', 2,
        ':', 10,
        '=', 11,
        '@', 4,
        '[', 5,
        ']', 7,
        '{', 8,
        '}', 9,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (set_contains(extras_character_set_1, 10, lookahead)) SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '/') ADVANCE(17);
      if (set_contains(extras_character_set_1, 10, lookahead)) ADVANCE(18);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(12);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(12);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(17);
      if (set_contains(extras_character_set_1, 10, lookahead)) ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(16);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'B') ADVANCE(1);
      if (lookahead == 'T') ADVANCE(2);
      if (set_contains(extras_character_set_1, 10, lookahead)) SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'r') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == 'h') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'i') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 'i') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == 'd') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'g') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'g') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_Thing);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_Bridge);
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
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
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
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_Bridge] = ACTIONS(1),
    [anon_sym_Thing] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(46),
    [sym__root_thing] = STATE(8),
    [sym_bridge] = STATE(8),
    [sym_thing] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_Bridge] = ACTIONS(7),
    [anon_sym_Thing] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(6), 1,
      sym__metadata,
    STATE(10), 1,
      sym_string,
    STATE(14), 1,
      sym_parameter_block,
    STATE(32), 1,
      sym_thing_block,
    ACTIONS(11), 3,
      ts_builtin_sym_end,
      anon_sym_Bridge,
      anon_sym_Thing,
  [30] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 9,
      ts_builtin_sym_end,
      anon_sym_Bridge,
      anon_sym_Thing,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [45] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 9,
      ts_builtin_sym_end,
      anon_sym_Bridge,
      anon_sym_Thing,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [60] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(10), 1,
      sym_string,
    STATE(11), 1,
      sym__metadata,
    STATE(22), 1,
      sym_parameter_block,
    ACTIONS(23), 4,
      ts_builtin_sym_end,
      anon_sym_Bridge,
      anon_sym_Thing,
      anon_sym_RBRACE,
  [85] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_parameter_block,
    STATE(29), 1,
      sym_thing_block,
    ACTIONS(25), 3,
      ts_builtin_sym_end,
      anon_sym_Bridge,
      anon_sym_Thing,
  [106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 7,
      ts_builtin_sym_end,
      anon_sym_Bridge,
      anon_sym_Thing,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [119] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_Bridge,
    ACTIONS(9), 1,
      anon_sym_Thing,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    STATE(9), 4,
      sym__root_thing,
      sym_bridge,
      sym_thing,
      aux_sym_source_file_repeat1,
  [138] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_Bridge,
    ACTIONS(36), 1,
      anon_sym_Thing,
    STATE(9), 4,
      sym__root_thing,
      sym_bridge,
      sym_thing,
      aux_sym_source_file_repeat1,
  [157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_AT,
    ACTIONS(39), 6,
      ts_builtin_sym_end,
      anon_sym_Bridge,
      anon_sym_Thing,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [172] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym_parameter_block,
    ACTIONS(43), 4,
      ts_builtin_sym_end,
      anon_sym_Bridge,
      anon_sym_Thing,
      anon_sym_RBRACE,
  [188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 6,
      ts_builtin_sym_end,
      anon_sym_Bridge,
      anon_sym_Thing,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 5,
      ts_builtin_sym_end,
      anon_sym_Bridge,
      anon_sym_Thing,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [211] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_thing_block,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      anon_sym_Bridge,
      anon_sym_Thing,
  [226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 5,
      ts_builtin_sym_end,
      anon_sym_Bridge,
      anon_sym_Thing,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 5,
      ts_builtin_sym_end,
      anon_sym_Bridge,
      anon_sym_Thing,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [248] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_thing_block,
    ACTIONS(55), 3,
      ts_builtin_sym_end,
      anon_sym_Bridge,
      anon_sym_Thing,
  [263] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_Thing,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(21), 2,
      sym_thing,
      aux_sym_thing_block_repeat1,
  [277] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(62), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      aux_sym_parameter_block_repeat1,
    STATE(49), 1,
      sym_parameter,
  [293] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      sym_identifier,
    ACTIONS(66), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      aux_sym_parameter_block_repeat1,
    STATE(36), 1,
      sym_parameter,
  [309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_Thing,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    STATE(24), 2,
      sym_thing,
      aux_sym_thing_block_repeat1,
  [323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 4,
      ts_builtin_sym_end,
      anon_sym_Bridge,
      anon_sym_Thing,
      anon_sym_RBRACE,
  [333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 4,
      ts_builtin_sym_end,
      anon_sym_Bridge,
      anon_sym_Thing,
      anon_sym_RBRACE,
  [343] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_Thing,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    STATE(24), 2,
      sym_thing,
      aux_sym_thing_block_repeat1,
  [357] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      aux_sym_parameter_block_repeat1,
    STATE(42), 1,
      sym_parameter,
  [373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 3,
      ts_builtin_sym_end,
      anon_sym_Bridge,
      anon_sym_Thing,
  [382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 3,
      ts_builtin_sym_end,
      anon_sym_Bridge,
      anon_sym_Thing,
  [391] = 4,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      aux_sym_string_token1,
    STATE(35), 1,
      aux_sym_string_repeat1,
  [404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 3,
      ts_builtin_sym_end,
      anon_sym_Bridge,
      anon_sym_Thing,
  [413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 3,
      ts_builtin_sym_end,
      anon_sym_Bridge,
      anon_sym_Thing,
  [422] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      sym_literal,
    STATE(39), 1,
      sym_string,
  [435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      anon_sym_Bridge,
      anon_sym_Thing,
  [444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 3,
      ts_builtin_sym_end,
      anon_sym_Bridge,
      anon_sym_Thing,
  [453] = 4,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      aux_sym_string_token1,
    STATE(28), 1,
      aux_sym_string_repeat1,
  [466] = 4,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      aux_sym_string_token1,
    STATE(35), 1,
      aux_sym_string_repeat1,
  [479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    ACTIONS(106), 1,
      anon_sym_COMMA,
  [489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_string,
  [499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_identifier,
    STATE(5), 1,
      sym_unique_identifier,
  [509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 2,
      anon_sym_RBRACK,
      sym_identifier,
  [525] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_identifier,
    STATE(2), 1,
      sym_unique_identifier,
  [535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    ACTIONS(112), 1,
      anon_sym_RBRACK,
  [545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_COLON,
  [552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_identifier,
  [559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_COLON,
  [566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
  [573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_EQ,
  [580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_identifier,
  [587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 45,
  [SMALL_STATE(5)] = 60,
  [SMALL_STATE(6)] = 85,
  [SMALL_STATE(7)] = 106,
  [SMALL_STATE(8)] = 119,
  [SMALL_STATE(9)] = 138,
  [SMALL_STATE(10)] = 157,
  [SMALL_STATE(11)] = 172,
  [SMALL_STATE(12)] = 188,
  [SMALL_STATE(13)] = 200,
  [SMALL_STATE(14)] = 211,
  [SMALL_STATE(15)] = 226,
  [SMALL_STATE(16)] = 237,
  [SMALL_STATE(17)] = 248,
  [SMALL_STATE(18)] = 263,
  [SMALL_STATE(19)] = 277,
  [SMALL_STATE(20)] = 293,
  [SMALL_STATE(21)] = 309,
  [SMALL_STATE(22)] = 323,
  [SMALL_STATE(23)] = 333,
  [SMALL_STATE(24)] = 343,
  [SMALL_STATE(25)] = 357,
  [SMALL_STATE(26)] = 373,
  [SMALL_STATE(27)] = 382,
  [SMALL_STATE(28)] = 391,
  [SMALL_STATE(29)] = 404,
  [SMALL_STATE(30)] = 413,
  [SMALL_STATE(31)] = 422,
  [SMALL_STATE(32)] = 435,
  [SMALL_STATE(33)] = 444,
  [SMALL_STATE(34)] = 453,
  [SMALL_STATE(35)] = 466,
  [SMALL_STATE(36)] = 479,
  [SMALL_STATE(37)] = 489,
  [SMALL_STATE(38)] = 499,
  [SMALL_STATE(39)] = 509,
  [SMALL_STATE(40)] = 517,
  [SMALL_STATE(41)] = 525,
  [SMALL_STATE(42)] = 535,
  [SMALL_STATE(43)] = 545,
  [SMALL_STATE(44)] = 552,
  [SMALL_STATE(45)] = 559,
  [SMALL_STATE(46)] = 566,
  [SMALL_STATE(47)] = 573,
  [SMALL_STATE(48)] = 580,
  [SMALL_STATE(49)] = 587,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bridge, 2, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thing, 2, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bridge, 3, 0, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_identifier, 5, 0, 4),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata, 1, 0, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thing, 3, 0, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata, 3, 0, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_block, 4, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bridge, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_block, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_block, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bridge, 4, 0, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_block_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_block_repeat1, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thing, 3, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thing, 4, 0, 1),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_thing_block_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thing_block_repeat1, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thing_block, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bridge, 5, 0, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bridge, 4, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thing_block, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 5),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [120] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
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

TS_PUBLIC const TSLanguage *tree_sitter_oh_things(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
