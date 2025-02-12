#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_COLON = 4,
  anon_sym_COMMA = 5,
  anon_sym_DQUOTE = 6,
  aux_sym_string_token1 = 7,
  sym_source_file = 8,
  sym__expression = 9,
  sym_struct = 10,
  sym__fields = 11,
  sym_field = 12,
  sym_string = 13,
  aux_sym__fields_repeat1 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_source_file] = "source_file",
  [sym__expression] = "_expression",
  [sym_struct] = "struct",
  [sym__fields] = "_fields",
  [sym_field] = "field",
  [sym_string] = "string",
  [aux_sym__fields_repeat1] = "_fields_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_source_file] = sym_source_file,
  [sym__expression] = sym__expression,
  [sym_struct] = sym_struct,
  [sym__fields] = sym__fields,
  [sym_field] = sym_field,
  [sym_string] = sym_string,
  [aux_sym__fields_repeat1] = aux_sym__fields_repeat1,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
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
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_struct] = {
    .visible = true,
    .named = true,
  },
  [sym__fields] = {
    .visible = false,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__fields_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == ',') ADVANCE(7);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '{') ADVANCE(4);
      if (lookahead == '}') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 1:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(10);
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
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(14),
    [sym__expression] = STATE(15),
    [sym_struct] = STATE(15),
    [sym_string] = STATE(15),
    [sym_identifier] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(5), 1,
      anon_sym_DQUOTE,
    STATE(10), 3,
      sym__expression,
      sym_struct,
      sym_string,
  [12] = 3,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    STATE(6), 2,
      sym_field,
      aux_sym__fields_repeat1,
  [23] = 1,
    ACTIONS(11), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [30] = 1,
    ACTIONS(13), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [37] = 3,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    STATE(9), 2,
      sym_field,
      aux_sym__fields_repeat1,
  [48] = 1,
    ACTIONS(17), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [55] = 1,
    ACTIONS(19), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [62] = 3,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(24), 1,
      anon_sym_RBRACE,
    STATE(9), 2,
      sym_field,
      aux_sym__fields_repeat1,
  [73] = 2,
    ACTIONS(28), 1,
      anon_sym_COMMA,
    ACTIONS(26), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [81] = 2,
    ACTIONS(30), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym__fields,
  [88] = 1,
    ACTIONS(32), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [93] = 1,
    ACTIONS(34), 1,
      aux_sym_string_token1,
  [97] = 1,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
  [101] = 1,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
  [105] = 1,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
  [109] = 1,
    ACTIONS(42), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 12,
  [SMALL_STATE(4)] = 23,
  [SMALL_STATE(5)] = 30,
  [SMALL_STATE(6)] = 37,
  [SMALL_STATE(7)] = 48,
  [SMALL_STATE(8)] = 55,
  [SMALL_STATE(9)] = 62,
  [SMALL_STATE(10)] = 73,
  [SMALL_STATE(11)] = 81,
  [SMALL_STATE(12)] = 88,
  [SMALL_STATE(13)] = 93,
  [SMALL_STATE(14)] = 97,
  [SMALL_STATE(15)] = 101,
  [SMALL_STATE(16)] = 105,
  [SMALL_STATE(17)] = 109,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 2, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fields, 2, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fields, 3, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fields_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__fields_repeat1, 2, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [36] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
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

TS_PUBLIC const TSLanguage *tree_sitter_rson(void) {
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
