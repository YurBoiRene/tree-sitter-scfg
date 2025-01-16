#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 54
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym__line_token1 = 1,
  anon_sym_POUND = 2,
  aux_sym_comment_token1 = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  sym__atom = 6,
  anon_sym_DQUOTE = 7,
  aux_sym_dquote_word_token1 = 8,
  anon_sym_SQUOTE = 9,
  aux_sym_squote_word_token1 = 10,
  anon_sym_BSLASH = 11,
  sym__newline = 12,
  sym_config = 13,
  sym__line = 14,
  sym_comment = 15,
  sym_directive = 16,
  sym_directive_name = 17,
  sym_directive_params = 18,
  sym_block = 19,
  sym_word = 20,
  sym_dquote_word = 21,
  sym_squote_word = 22,
  sym_esc_pair = 23,
  aux_sym_config_repeat1 = 24,
  aux_sym_comment_repeat1 = 25,
  aux_sym_directive_params_repeat1 = 26,
  aux_sym_dquote_word_repeat1 = 27,
  aux_sym_squote_word_repeat1 = 28,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__line_token1] = "_line_token1",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym__atom] = "_atom",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_dquote_word_token1] = "dquote_word_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_squote_word_token1] = "squote_word_token1",
  [anon_sym_BSLASH] = "\\",
  [sym__newline] = "_newline",
  [sym_config] = "config",
  [sym__line] = "_line",
  [sym_comment] = "comment",
  [sym_directive] = "directive",
  [sym_directive_name] = "directive_name",
  [sym_directive_params] = "directive_params",
  [sym_block] = "block",
  [sym_word] = "word",
  [sym_dquote_word] = "dquote_word",
  [sym_squote_word] = "squote_word",
  [sym_esc_pair] = "esc_pair",
  [aux_sym_config_repeat1] = "config_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym_directive_params_repeat1] = "directive_params_repeat1",
  [aux_sym_dquote_word_repeat1] = "dquote_word_repeat1",
  [aux_sym_squote_word_repeat1] = "squote_word_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__line_token1] = aux_sym__line_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym__atom] = sym__atom,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_dquote_word_token1] = aux_sym_dquote_word_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_squote_word_token1] = aux_sym_squote_word_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym__newline] = sym__newline,
  [sym_config] = sym_config,
  [sym__line] = sym__line,
  [sym_comment] = sym_comment,
  [sym_directive] = sym_directive,
  [sym_directive_name] = sym_directive_name,
  [sym_directive_params] = sym_directive_params,
  [sym_block] = sym_block,
  [sym_word] = sym_word,
  [sym_dquote_word] = sym_dquote_word,
  [sym_squote_word] = sym_squote_word,
  [sym_esc_pair] = sym_esc_pair,
  [aux_sym_config_repeat1] = aux_sym_config_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [aux_sym_directive_params_repeat1] = aux_sym_directive_params_repeat1,
  [aux_sym_dquote_word_repeat1] = aux_sym_dquote_word_repeat1,
  [aux_sym_squote_word_repeat1] = aux_sym_squote_word_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__line_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
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
  [sym__atom] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_dquote_word_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_squote_word_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_config] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_name] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_params] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_dquote_word] = {
    .visible = true,
    .named = true,
  },
  [sym_squote_word] = {
    .visible = true,
    .named = true,
  },
  [sym_esc_pair] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_config_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_params_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dquote_word_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_squote_word_repeat1] = {
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
  [5] = 2,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 8,
  [10] = 7,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 19,
  [21] = 16,
  [22] = 15,
  [23] = 14,
  [24] = 17,
  [25] = 18,
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
  [43] = 40,
  [44] = 37,
  [45] = 42,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 49,
  [53] = 51,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '{') ADVANCE(17);
      if (lookahead == '}') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '{') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead > ' ' &&
          lookahead != '}' &&
          lookahead != 0x7f) ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == ' ') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(2);
      if (lookahead > ' ' &&
          lookahead != 0x7f) ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(3);
      if (lookahead > ' ' &&
          lookahead != 0x7f) ADVANCE(21);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(4);
      if (lookahead > ' ' &&
          lookahead != 0x7f) ADVANCE(24);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(5);
      if (lookahead > ' ' &&
          lookahead != 0x7f) ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead > ' ' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != 0x7f) ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead > 0x1f &&
          lookahead != 0x7f) ADVANCE(19);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      ADVANCE_MAP(
        '"', 20,
        '#', 13,
        '\'', 23,
        '\\', 7,
        '}', 18,
        '\t', 11,
        ' ', 11,
        ',', 10,
        '/', 10,
      );
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(8);
      if (lookahead > ' ' &&
          lookahead != '{' &&
          lookahead != 0x7f) ADVANCE(19);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != 0x7f) ADVANCE(19);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == ',' ||
          lookahead == '/') ADVANCE(10);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != 0x7f) ADVANCE(19);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead > ' ' &&
          lookahead != 0x7f) ADVANCE(14);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead > ' ' &&
          lookahead != 0x7f) ADVANCE(14);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != 0x7f) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_dquote_word_token1);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_dquote_word_token1);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != 0x7f) ADVANCE(21);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_squote_word_token1);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_squote_word_token1);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead > ' ' &&
          lookahead != '\'' &&
          lookahead != 0x7f) ADVANCE(24);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == ' ') ADVANCE(15);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_config] = STATE(47),
    [sym__line] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_directive] = STATE(3),
    [sym_directive_name] = STATE(7),
    [sym_word] = STATE(26),
    [sym_dquote_word] = STATE(31),
    [sym_squote_word] = STATE(31),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__line_token1] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [sym__atom] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      aux_sym__line_token1,
    ACTIONS(20), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      sym__atom,
    ACTIONS(26), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(7), 1,
      sym_directive_name,
    STATE(26), 1,
      sym_word,
    STATE(31), 2,
      sym_dquote_word,
      sym_squote_word,
    STATE(2), 4,
      sym__line,
      sym_comment,
      sym_directive,
      aux_sym_config_repeat1,
  [35] = 10,
    ACTIONS(5), 1,
      aux_sym__line_token1,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      sym__atom,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_directive_name,
    STATE(26), 1,
      sym_word,
    STATE(31), 2,
      sym_dquote_word,
      sym_squote_word,
    STATE(2), 4,
      sym__line,
      sym_comment,
      sym_directive,
      aux_sym_config_repeat1,
  [70] = 10,
    ACTIONS(9), 1,
      sym__atom,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(34), 1,
      aux_sym__line_token1,
    ACTIONS(36), 1,
      anon_sym_POUND,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      sym_directive_name,
    STATE(26), 1,
      sym_word,
    STATE(31), 2,
      sym_dquote_word,
      sym_squote_word,
    STATE(5), 4,
      sym__line,
      sym_comment,
      sym_directive,
      aux_sym_config_repeat1,
  [105] = 10,
    ACTIONS(23), 1,
      sym__atom,
    ACTIONS(26), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(40), 1,
      aux_sym__line_token1,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      sym_directive_name,
    STATE(26), 1,
      sym_word,
    STATE(31), 2,
      sym_dquote_word,
      sym_squote_word,
    STATE(5), 4,
      sym__line,
      sym_comment,
      sym_directive,
      aux_sym_config_repeat1,
  [140] = 9,
    ACTIONS(9), 1,
      sym__atom,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(34), 1,
      aux_sym__line_token1,
    ACTIONS(36), 1,
      anon_sym_POUND,
    STATE(10), 1,
      sym_directive_name,
    STATE(26), 1,
      sym_word,
    STATE(31), 2,
      sym_dquote_word,
      sym_squote_word,
    STATE(4), 4,
      sym__line,
      sym_comment,
      sym_directive,
      aux_sym_config_repeat1,
  [172] = 9,
    ACTIONS(9), 1,
      sym__atom,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(48), 1,
      anon_sym_LBRACE,
    ACTIONS(50), 1,
      sym__newline,
    STATE(11), 1,
      sym_word,
    STATE(42), 1,
      sym_directive_params,
    STATE(49), 1,
      sym_block,
    STATE(31), 2,
      sym_dquote_word,
      sym_squote_word,
  [201] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      sym__atom,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(54), 1,
      anon_sym_SQUOTE,
    STATE(7), 1,
      sym_directive_name,
    STATE(26), 1,
      sym_word,
    STATE(16), 2,
      sym_comment,
      sym_directive,
    STATE(31), 2,
      sym_dquote_word,
      sym_squote_word,
  [228] = 8,
    ACTIONS(9), 1,
      sym__atom,
    ACTIONS(36), 1,
      anon_sym_POUND,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(54), 1,
      anon_sym_SQUOTE,
    STATE(10), 1,
      sym_directive_name,
    STATE(26), 1,
      sym_word,
    STATE(21), 2,
      sym_comment,
      sym_directive,
    STATE(31), 2,
      sym_dquote_word,
      sym_squote_word,
  [255] = 9,
    ACTIONS(9), 1,
      sym__atom,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(48), 1,
      anon_sym_LBRACE,
    ACTIONS(56), 1,
      sym__newline,
    STATE(11), 1,
      sym_word,
    STATE(45), 1,
      sym_directive_params,
    STATE(52), 1,
      sym_block,
    STATE(31), 2,
      sym_dquote_word,
      sym_squote_word,
  [284] = 7,
    ACTIONS(9), 1,
      sym__atom,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    ACTIONS(60), 1,
      sym__newline,
    STATE(13), 2,
      sym_word,
      aux_sym_directive_params_repeat1,
    STATE(31), 2,
      sym_dquote_word,
      sym_squote_word,
  [308] = 7,
    ACTIONS(62), 1,
      anon_sym_LBRACE,
    ACTIONS(64), 1,
      sym__atom,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(70), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      sym__newline,
    STATE(12), 2,
      sym_word,
      aux_sym_directive_params_repeat1,
    STATE(31), 2,
      sym_dquote_word,
      sym_squote_word,
  [332] = 7,
    ACTIONS(9), 1,
      sym__atom,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      sym__newline,
    STATE(12), 2,
      sym_word,
      aux_sym_directive_params_repeat1,
    STATE(31), 2,
      sym_dquote_word,
      sym_squote_word,
  [356] = 2,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 5,
      aux_sym__line_token1,
      anon_sym_POUND,
      sym__atom,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [367] = 2,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 5,
      aux_sym__line_token1,
      anon_sym_POUND,
      sym__atom,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [378] = 2,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 5,
      aux_sym__line_token1,
      anon_sym_POUND,
      sym__atom,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [389] = 2,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 5,
      aux_sym__line_token1,
      anon_sym_POUND,
      sym__atom,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [400] = 2,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 5,
      aux_sym__line_token1,
      anon_sym_POUND,
      sym__atom,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [411] = 2,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 5,
      aux_sym__line_token1,
      anon_sym_POUND,
      sym__atom,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [422] = 1,
    ACTIONS(101), 6,
      aux_sym__line_token1,
      anon_sym_POUND,
      anon_sym_RBRACE,
      sym__atom,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [431] = 1,
    ACTIONS(89), 6,
      aux_sym__line_token1,
      anon_sym_POUND,
      anon_sym_RBRACE,
      sym__atom,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [440] = 1,
    ACTIONS(85), 6,
      aux_sym__line_token1,
      anon_sym_POUND,
      anon_sym_RBRACE,
      sym__atom,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [449] = 1,
    ACTIONS(81), 6,
      aux_sym__line_token1,
      anon_sym_POUND,
      anon_sym_RBRACE,
      sym__atom,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [458] = 1,
    ACTIONS(93), 6,
      aux_sym__line_token1,
      anon_sym_POUND,
      anon_sym_RBRACE,
      sym__atom,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [467] = 1,
    ACTIONS(97), 6,
      aux_sym__line_token1,
      anon_sym_POUND,
      anon_sym_RBRACE,
      sym__atom,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [476] = 2,
    ACTIONS(105), 1,
      sym__newline,
    ACTIONS(103), 4,
      anon_sym_LBRACE,
      sym__atom,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [486] = 2,
    ACTIONS(109), 1,
      sym__newline,
    ACTIONS(107), 4,
      anon_sym_LBRACE,
      sym__atom,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [496] = 2,
    ACTIONS(113), 1,
      sym__newline,
    ACTIONS(111), 4,
      anon_sym_LBRACE,
      sym__atom,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [506] = 4,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      aux_sym_dquote_word_token1,
    ACTIONS(119), 1,
      anon_sym_BSLASH,
    STATE(30), 2,
      sym_esc_pair,
      aux_sym_dquote_word_repeat1,
  [520] = 4,
    ACTIONS(119), 1,
      anon_sym_BSLASH,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(123), 1,
      aux_sym_dquote_word_token1,
    STATE(33), 2,
      sym_esc_pair,
      aux_sym_dquote_word_repeat1,
  [534] = 2,
    ACTIONS(127), 1,
      sym__newline,
    ACTIONS(125), 4,
      anon_sym_LBRACE,
      sym__atom,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [544] = 2,
    ACTIONS(131), 1,
      sym__newline,
    ACTIONS(129), 4,
      anon_sym_LBRACE,
      sym__atom,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [554] = 4,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      aux_sym_dquote_word_token1,
    ACTIONS(138), 1,
      anon_sym_BSLASH,
    STATE(33), 2,
      sym_esc_pair,
      aux_sym_dquote_word_repeat1,
  [568] = 2,
    ACTIONS(143), 1,
      sym__newline,
    ACTIONS(141), 4,
      anon_sym_LBRACE,
      sym__atom,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [578] = 2,
    ACTIONS(147), 1,
      aux_sym_dquote_word_token1,
    ACTIONS(145), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [586] = 3,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(151), 1,
      aux_sym_squote_word_token1,
    STATE(41), 1,
      aux_sym_squote_word_repeat1,
  [596] = 3,
    ACTIONS(153), 1,
      aux_sym_comment_token1,
    ACTIONS(155), 1,
      sym__newline,
    STATE(38), 1,
      aux_sym_comment_repeat1,
  [606] = 3,
    ACTIONS(157), 1,
      aux_sym_comment_token1,
    ACTIONS(160), 1,
      sym__newline,
    STATE(38), 1,
      aux_sym_comment_repeat1,
  [616] = 3,
    ACTIONS(162), 1,
      anon_sym_SQUOTE,
    ACTIONS(164), 1,
      aux_sym_squote_word_token1,
    STATE(39), 1,
      aux_sym_squote_word_repeat1,
  [626] = 3,
    ACTIONS(167), 1,
      aux_sym_comment_token1,
    ACTIONS(169), 1,
      sym__newline,
    STATE(37), 1,
      aux_sym_comment_repeat1,
  [636] = 3,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      aux_sym_squote_word_token1,
    STATE(39), 1,
      aux_sym_squote_word_repeat1,
  [646] = 3,
    ACTIONS(48), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      sym__newline,
    STATE(51), 1,
      sym_block,
  [656] = 3,
    ACTIONS(177), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      sym__newline,
    STATE(44), 1,
      aux_sym_comment_repeat1,
  [666] = 3,
    ACTIONS(153), 1,
      aux_sym_comment_token1,
    ACTIONS(181), 1,
      sym__newline,
    STATE(38), 1,
      aux_sym_comment_repeat1,
  [676] = 3,
    ACTIONS(48), 1,
      anon_sym_LBRACE,
    ACTIONS(183), 1,
      sym__newline,
    STATE(53), 1,
      sym_block,
  [686] = 1,
    ACTIONS(185), 1,
      sym__newline,
  [690] = 1,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
  [694] = 1,
    ACTIONS(189), 1,
      sym__newline,
  [698] = 1,
    ACTIONS(175), 1,
      sym__newline,
  [702] = 1,
    ACTIONS(191), 1,
      aux_sym_comment_token1,
  [706] = 1,
    ACTIONS(193), 1,
      sym__newline,
  [710] = 1,
    ACTIONS(183), 1,
      sym__newline,
  [714] = 1,
    ACTIONS(195), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 105,
  [SMALL_STATE(6)] = 140,
  [SMALL_STATE(7)] = 172,
  [SMALL_STATE(8)] = 201,
  [SMALL_STATE(9)] = 228,
  [SMALL_STATE(10)] = 255,
  [SMALL_STATE(11)] = 284,
  [SMALL_STATE(12)] = 308,
  [SMALL_STATE(13)] = 332,
  [SMALL_STATE(14)] = 356,
  [SMALL_STATE(15)] = 367,
  [SMALL_STATE(16)] = 378,
  [SMALL_STATE(17)] = 389,
  [SMALL_STATE(18)] = 400,
  [SMALL_STATE(19)] = 411,
  [SMALL_STATE(20)] = 422,
  [SMALL_STATE(21)] = 431,
  [SMALL_STATE(22)] = 440,
  [SMALL_STATE(23)] = 449,
  [SMALL_STATE(24)] = 458,
  [SMALL_STATE(25)] = 467,
  [SMALL_STATE(26)] = 476,
  [SMALL_STATE(27)] = 486,
  [SMALL_STATE(28)] = 496,
  [SMALL_STATE(29)] = 506,
  [SMALL_STATE(30)] = 520,
  [SMALL_STATE(31)] = 534,
  [SMALL_STATE(32)] = 544,
  [SMALL_STATE(33)] = 554,
  [SMALL_STATE(34)] = 568,
  [SMALL_STATE(35)] = 578,
  [SMALL_STATE(36)] = 586,
  [SMALL_STATE(37)] = 596,
  [SMALL_STATE(38)] = 606,
  [SMALL_STATE(39)] = 616,
  [SMALL_STATE(40)] = 626,
  [SMALL_STATE(41)] = 636,
  [SMALL_STATE(42)] = 646,
  [SMALL_STATE(43)] = 656,
  [SMALL_STATE(44)] = 666,
  [SMALL_STATE(45)] = 676,
  [SMALL_STATE(46)] = 686,
  [SMALL_STATE(47)] = 690,
  [SMALL_STATE(48)] = 694,
  [SMALL_STATE(49)] = 698,
  [SMALL_STATE(50)] = 702,
  [SMALL_STATE(51)] = 706,
  [SMALL_STATE(52)] = 710,
  [SMALL_STATE(53)] = 714,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_params, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_params, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_params_repeat1, 2, 0, 0),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_params_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_params_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_params_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_params_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_params, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_params, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 4, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_name, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_name, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dquote_word, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dquote_word, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_squote_word, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_squote_word, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dquote_word, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dquote_word, 3, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dquote_word_repeat1, 2, 0, 0),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dquote_word_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dquote_word_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_squote_word, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_squote_word, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_esc_pair, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_esc_pair, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_squote_word_repeat1, 2, 0, 0),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_squote_word_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [187] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
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

TS_PUBLIC const TSLanguage *tree_sitter_scfg(void) {
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
