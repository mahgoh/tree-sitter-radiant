#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 114
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_Process = 1,
  anon_sym_COLON = 2,
  anon_sym_Activity = 3,
  anon_sym_Start = 4,
  anon_sym_Intermediate = 5,
  anon_sym_End = 6,
  anon_sym_Case = 7,
  sym_keyword_in = 8,
  sym_keyword_sensor = 9,
  sym_keyword_changes_from = 10,
  sym_keyword_to = 11,
  sym_keyword_in_range = 12,
  sym_keyword_is_equal = 13,
  sym_keyword_is_lower = 14,
  sym_keyword_is_lower_or_equal = 15,
  sym_keyword_is_higher = 16,
  sym_keyword_is_higher_or_equal = 17,
  sym_keyword_is_increasing = 18,
  sym_keyword_is_decreasing = 19,
  sym_keyword_within = 20,
  sym_delimiter = 21,
  sym_identifier = 22,
  sym_number = 23,
  sym_comment_single_line = 24,
  sym_comment_multi_line = 25,
  sym_source_file = 26,
  sym_process = 27,
  sym_activity = 28,
  sym_start_pattern = 29,
  sym_intermediate_pattern = 30,
  sym_end_pattern = 31,
  sym__pattern = 32,
  sym_case = 33,
  sym__condition = 34,
  sym_change_condition = 35,
  sym_range_condition = 36,
  sym_is_equal_condition = 37,
  sym_is_lower_condition = 38,
  sym_is_lower_or_equal_condition = 39,
  sym_is_higher_condition = 40,
  sym_is_higher_or_equal_condition = 41,
  sym_is_increasing_condition = 42,
  sym_is_decreasing_condition = 43,
  sym_time_constraint = 44,
  sym_value = 45,
  aux_sym_process_repeat1 = 46,
  aux_sym_activity_repeat1 = 47,
  aux_sym__pattern_repeat1 = 48,
  aux_sym__pattern_repeat2 = 49,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_Process] = "Process",
  [anon_sym_COLON] = ":",
  [anon_sym_Activity] = "Activity",
  [anon_sym_Start] = "Start",
  [anon_sym_Intermediate] = "Intermediate",
  [anon_sym_End] = "End",
  [anon_sym_Case] = "Case",
  [sym_keyword_in] = "keyword_in",
  [sym_keyword_sensor] = "keyword_sensor",
  [sym_keyword_changes_from] = "keyword_changes_from",
  [sym_keyword_to] = "keyword_to",
  [sym_keyword_in_range] = "keyword_in_range",
  [sym_keyword_is_equal] = "keyword_is_equal",
  [sym_keyword_is_lower] = "keyword_is_lower",
  [sym_keyword_is_lower_or_equal] = "keyword_is_lower_or_equal",
  [sym_keyword_is_higher] = "keyword_is_higher",
  [sym_keyword_is_higher_or_equal] = "keyword_is_higher_or_equal",
  [sym_keyword_is_increasing] = "keyword_is_increasing",
  [sym_keyword_is_decreasing] = "keyword_is_decreasing",
  [sym_keyword_within] = "keyword_within",
  [sym_delimiter] = "delimiter",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_comment_single_line] = "comment_single_line",
  [sym_comment_multi_line] = "comment_multi_line",
  [sym_source_file] = "source_file",
  [sym_process] = "process",
  [sym_activity] = "activity",
  [sym_start_pattern] = "start_pattern",
  [sym_intermediate_pattern] = "intermediate_pattern",
  [sym_end_pattern] = "end_pattern",
  [sym__pattern] = "_pattern",
  [sym_case] = "case",
  [sym__condition] = "_condition",
  [sym_change_condition] = "change_condition",
  [sym_range_condition] = "range_condition",
  [sym_is_equal_condition] = "is_equal_condition",
  [sym_is_lower_condition] = "is_lower_condition",
  [sym_is_lower_or_equal_condition] = "is_lower_or_equal_condition",
  [sym_is_higher_condition] = "is_higher_condition",
  [sym_is_higher_or_equal_condition] = "is_higher_or_equal_condition",
  [sym_is_increasing_condition] = "is_increasing_condition",
  [sym_is_decreasing_condition] = "is_decreasing_condition",
  [sym_time_constraint] = "time_constraint",
  [sym_value] = "value",
  [aux_sym_process_repeat1] = "process_repeat1",
  [aux_sym_activity_repeat1] = "activity_repeat1",
  [aux_sym__pattern_repeat1] = "_pattern_repeat1",
  [aux_sym__pattern_repeat2] = "_pattern_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_Process] = anon_sym_Process,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_Activity] = anon_sym_Activity,
  [anon_sym_Start] = anon_sym_Start,
  [anon_sym_Intermediate] = anon_sym_Intermediate,
  [anon_sym_End] = anon_sym_End,
  [anon_sym_Case] = anon_sym_Case,
  [sym_keyword_in] = sym_keyword_in,
  [sym_keyword_sensor] = sym_keyword_sensor,
  [sym_keyword_changes_from] = sym_keyword_changes_from,
  [sym_keyword_to] = sym_keyword_to,
  [sym_keyword_in_range] = sym_keyword_in_range,
  [sym_keyword_is_equal] = sym_keyword_is_equal,
  [sym_keyword_is_lower] = sym_keyword_is_lower,
  [sym_keyword_is_lower_or_equal] = sym_keyword_is_lower_or_equal,
  [sym_keyword_is_higher] = sym_keyword_is_higher,
  [sym_keyword_is_higher_or_equal] = sym_keyword_is_higher_or_equal,
  [sym_keyword_is_increasing] = sym_keyword_is_increasing,
  [sym_keyword_is_decreasing] = sym_keyword_is_decreasing,
  [sym_keyword_within] = sym_keyword_within,
  [sym_delimiter] = sym_delimiter,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_comment_single_line] = sym_comment_single_line,
  [sym_comment_multi_line] = sym_comment_multi_line,
  [sym_source_file] = sym_source_file,
  [sym_process] = sym_process,
  [sym_activity] = sym_activity,
  [sym_start_pattern] = sym_start_pattern,
  [sym_intermediate_pattern] = sym_intermediate_pattern,
  [sym_end_pattern] = sym_end_pattern,
  [sym__pattern] = sym__pattern,
  [sym_case] = sym_case,
  [sym__condition] = sym__condition,
  [sym_change_condition] = sym_change_condition,
  [sym_range_condition] = sym_range_condition,
  [sym_is_equal_condition] = sym_is_equal_condition,
  [sym_is_lower_condition] = sym_is_lower_condition,
  [sym_is_lower_or_equal_condition] = sym_is_lower_or_equal_condition,
  [sym_is_higher_condition] = sym_is_higher_condition,
  [sym_is_higher_or_equal_condition] = sym_is_higher_or_equal_condition,
  [sym_is_increasing_condition] = sym_is_increasing_condition,
  [sym_is_decreasing_condition] = sym_is_decreasing_condition,
  [sym_time_constraint] = sym_time_constraint,
  [sym_value] = sym_value,
  [aux_sym_process_repeat1] = aux_sym_process_repeat1,
  [aux_sym_activity_repeat1] = aux_sym_activity_repeat1,
  [aux_sym__pattern_repeat1] = aux_sym__pattern_repeat1,
  [aux_sym__pattern_repeat2] = aux_sym__pattern_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_Process] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Activity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Start] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Intermediate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_End] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Case] = {
    .visible = true,
    .named = false,
  },
  [sym_keyword_in] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_sensor] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_changes_from] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_to] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_in_range] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_is_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_is_lower] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_is_lower_or_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_is_higher] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_is_higher_or_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_is_increasing] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_is_decreasing] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_within] = {
    .visible = true,
    .named = true,
  },
  [sym_delimiter] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_single_line] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_multi_line] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_process] = {
    .visible = true,
    .named = true,
  },
  [sym_activity] = {
    .visible = true,
    .named = true,
  },
  [sym_start_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_intermediate_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_end_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym__pattern] = {
    .visible = false,
    .named = true,
  },
  [sym_case] = {
    .visible = true,
    .named = true,
  },
  [sym__condition] = {
    .visible = false,
    .named = true,
  },
  [sym_change_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_range_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_is_equal_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_is_lower_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_is_lower_or_equal_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_is_higher_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_is_higher_or_equal_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_is_increasing_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_is_decreasing_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_time_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_process_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_activity_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__pattern_repeat2] = {
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
  [6] = 5,
  [7] = 7,
  [8] = 7,
  [9] = 9,
  [10] = 9,
  [11] = 11,
  [12] = 11,
  [13] = 13,
  [14] = 13,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 17,
  [20] = 18,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 28,
  [31] = 29,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 32,
  [36] = 36,
  [37] = 24,
  [38] = 25,
  [39] = 26,
  [40] = 33,
  [41] = 34,
  [42] = 21,
  [43] = 36,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 44,
  [54] = 54,
  [55] = 55,
  [56] = 50,
  [57] = 51,
  [58] = 52,
  [59] = 54,
  [60] = 55,
  [61] = 47,
  [62] = 48,
  [63] = 63,
  [64] = 49,
  [65] = 63,
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
  [82] = 72,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 80,
  [87] = 87,
  [88] = 81,
  [89] = 89,
  [90] = 83,
  [91] = 84,
  [92] = 92,
  [93] = 93,
  [94] = 92,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 85,
  [99] = 87,
  [100] = 95,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 78,
  [107] = 96,
  [108] = 97,
  [109] = 102,
  [110] = 93,
  [111] = 111,
  [112] = 101,
  [113] = 113,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(118);
      ADVANCE_MAP(
        '-', 116,
        '/', 1,
        ':', 120,
        ';', 140,
        'A', 20,
        'C', 10,
        'E', 64,
        'I', 65,
        'P', 89,
        'S', 106,
        'c', 48,
        'i', 66,
        's', 32,
        't', 75,
        'w', 53,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(143);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == '/') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 5:
      if (lookahead == '_') ADVANCE(25);
      END_STATE();
    case 6:
      if (lookahead == '_') ADVANCE(42);
      END_STATE();
    case 7:
      if (lookahead == '_') ADVANCE(94);
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(39);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(41);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'h') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 42:
      if (lookahead == 'f') ADVANCE(92);
      END_STATE();
    case 43:
      if (lookahead == 'g') ADVANCE(138);
      END_STATE();
    case 44:
      if (lookahead == 'g') ADVANCE(137);
      END_STATE();
    case 45:
      if (lookahead == 'g') ADVANCE(50);
      END_STATE();
    case 46:
      if (lookahead == 'g') ADVANCE(35);
      END_STATE();
    case 47:
      if (lookahead == 'g') ADVANCE(28);
      END_STATE();
    case 48:
      if (lookahead == 'h') ADVANCE(15);
      END_STATE();
    case 49:
      if (lookahead == 'h') ADVANCE(56);
      END_STATE();
    case 50:
      if (lookahead == 'h') ADVANCE(37);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 62:
      if (lookahead == 'm') ADVANCE(129);
      END_STATE();
    case 63:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(7);
      if (lookahead == 's') ADVANCE(5);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 82:
      if (lookahead == 'q') ADVANCE(110);
      END_STATE();
    case 83:
      if (lookahead == 'q') ADVANCE(111);
      END_STATE();
    case 84:
      if (lookahead == 'q') ADVANCE(112);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 97:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 98:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 99:
      if (lookahead == 's') ADVANCE(6);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 110:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 111:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 112:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 113:
      if (lookahead == 'v') ADVANCE(55);
      END_STATE();
    case 114:
      if (lookahead == 'w') ADVANCE(36);
      END_STATE();
    case 115:
      if (lookahead == 'y') ADVANCE(121);
      END_STATE();
    case 116:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 117:
      if (eof) ADVANCE(118);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(20);
      if (lookahead == 'C') ADVANCE(10);
      if (lookahead == 'I') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_Process);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_Activity);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_Start);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_Intermediate);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_End);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_Case);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_keyword_in);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_keyword_sensor);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_keyword_changes_from);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_keyword_to);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_keyword_in_range);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_keyword_is_equal);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_keyword_is_lower);
      if (lookahead == '_') ADVANCE(80);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_keyword_is_lower_or_equal);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_keyword_is_higher);
      if (lookahead == '_') ADVANCE(81);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_keyword_is_higher_or_equal);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_keyword_is_increasing);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_keyword_is_decreasing);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_keyword_within);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_delimiter);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_comment_single_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_comment_multi_line);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 117},
  [3] = {.lex_state = 117},
  [4] = {.lex_state = 117},
  [5] = {.lex_state = 117},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 117},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 117},
  [11] = {.lex_state = 117},
  [12] = {.lex_state = 117},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 117},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 117},
  [31] = {.lex_state = 117},
  [32] = {.lex_state = 117},
  [33] = {.lex_state = 117},
  [34] = {.lex_state = 117},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 117},
  [37] = {.lex_state = 117},
  [38] = {.lex_state = 117},
  [39] = {.lex_state = 117},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
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
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_Process] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_Activity] = ACTIONS(1),
    [anon_sym_Start] = ACTIONS(1),
    [anon_sym_Intermediate] = ACTIONS(1),
    [anon_sym_End] = ACTIONS(1),
    [anon_sym_Case] = ACTIONS(1),
    [sym_keyword_in] = ACTIONS(1),
    [sym_keyword_sensor] = ACTIONS(1),
    [sym_keyword_changes_from] = ACTIONS(1),
    [sym_keyword_to] = ACTIONS(1),
    [sym_keyword_in_range] = ACTIONS(1),
    [sym_keyword_is_equal] = ACTIONS(1),
    [sym_keyword_is_lower] = ACTIONS(1),
    [sym_keyword_is_lower_or_equal] = ACTIONS(1),
    [sym_keyword_is_higher] = ACTIONS(1),
    [sym_keyword_is_higher_or_equal] = ACTIONS(1),
    [sym_keyword_is_increasing] = ACTIONS(1),
    [sym_keyword_is_decreasing] = ACTIONS(1),
    [sym_keyword_within] = ACTIONS(1),
    [sym_delimiter] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_comment_single_line] = ACTIONS(3),
    [sym_comment_multi_line] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(89),
    [sym_process] = STATE(73),
    [anon_sym_Process] = ACTIONS(5),
    [sym_comment_single_line] = ACTIONS(3),
    [sym_comment_multi_line] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      anon_sym_Case,
    ACTIONS(9), 1,
      sym_keyword_in,
    STATE(66), 1,
      sym__pattern,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    STATE(17), 2,
      sym_case,
      aux_sym__pattern_repeat1,
    STATE(9), 11,
      sym__condition,
      sym_change_condition,
      sym_range_condition,
      sym_is_equal_condition,
      sym_is_lower_condition,
      sym_is_lower_or_equal_condition,
      sym_is_higher_condition,
      sym_is_higher_or_equal_condition,
      sym_is_increasing_condition,
      sym_is_decreasing_condition,
      aux_sym__pattern_repeat2,
  [31] = 6,
    ACTIONS(11), 1,
      anon_sym_Case,
    ACTIONS(13), 1,
      sym_keyword_in,
    STATE(70), 1,
      sym__pattern,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    STATE(19), 2,
      sym_case,
      aux_sym__pattern_repeat1,
    STATE(10), 11,
      sym__condition,
      sym_change_condition,
      sym_range_condition,
      sym_is_equal_condition,
      sym_is_lower_condition,
      sym_is_lower_or_equal_condition,
      sym_is_higher_condition,
      sym_is_higher_or_equal_condition,
      sym_is_increasing_condition,
      sym_is_decreasing_condition,
      aux_sym__pattern_repeat2,
  [62] = 6,
    ACTIONS(7), 1,
      anon_sym_Case,
    ACTIONS(9), 1,
      sym_keyword_in,
    STATE(69), 1,
      sym__pattern,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    STATE(17), 2,
      sym_case,
      aux_sym__pattern_repeat1,
    STATE(9), 11,
      sym__condition,
      sym_change_condition,
      sym_range_condition,
      sym_is_equal_condition,
      sym_is_lower_condition,
      sym_is_lower_or_equal_condition,
      sym_is_higher_condition,
      sym_is_higher_or_equal_condition,
      sym_is_increasing_condition,
      sym_is_decreasing_condition,
      aux_sym__pattern_repeat2,
  [93] = 4,
    ACTIONS(17), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(15), 3,
      ts_builtin_sym_end,
      anon_sym_Activity,
      anon_sym_Case,
    STATE(5), 11,
      sym__condition,
      sym_change_condition,
      sym_range_condition,
      sym_is_equal_condition,
      sym_is_lower_condition,
      sym_is_lower_or_equal_condition,
      sym_is_higher_condition,
      sym_is_higher_or_equal_condition,
      sym_is_increasing_condition,
      sym_is_decreasing_condition,
      aux_sym__pattern_repeat2,
  [119] = 4,
    ACTIONS(20), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(15), 3,
      anon_sym_Intermediate,
      anon_sym_End,
      anon_sym_Case,
    STATE(6), 11,
      sym__condition,
      sym_change_condition,
      sym_range_condition,
      sym_is_equal_condition,
      sym_is_lower_condition,
      sym_is_lower_or_equal_condition,
      sym_is_higher_condition,
      sym_is_higher_or_equal_condition,
      sym_is_increasing_condition,
      sym_is_decreasing_condition,
      aux_sym__pattern_repeat2,
  [145] = 4,
    ACTIONS(13), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(23), 3,
      ts_builtin_sym_end,
      anon_sym_Activity,
      anon_sym_Case,
    STATE(5), 11,
      sym__condition,
      sym_change_condition,
      sym_range_condition,
      sym_is_equal_condition,
      sym_is_lower_condition,
      sym_is_lower_or_equal_condition,
      sym_is_higher_condition,
      sym_is_higher_or_equal_condition,
      sym_is_increasing_condition,
      sym_is_decreasing_condition,
      aux_sym__pattern_repeat2,
  [171] = 4,
    ACTIONS(25), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(23), 3,
      anon_sym_Intermediate,
      anon_sym_End,
      anon_sym_Case,
    STATE(6), 11,
      sym__condition,
      sym_change_condition,
      sym_range_condition,
      sym_is_equal_condition,
      sym_is_lower_condition,
      sym_is_lower_or_equal_condition,
      sym_is_higher_condition,
      sym_is_higher_or_equal_condition,
      sym_is_increasing_condition,
      sym_is_decreasing_condition,
      aux_sym__pattern_repeat2,
  [197] = 4,
    ACTIONS(25), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(27), 2,
      anon_sym_Intermediate,
      anon_sym_End,
    STATE(6), 11,
      sym__condition,
      sym_change_condition,
      sym_range_condition,
      sym_is_equal_condition,
      sym_is_lower_condition,
      sym_is_lower_or_equal_condition,
      sym_is_higher_condition,
      sym_is_higher_or_equal_condition,
      sym_is_increasing_condition,
      sym_is_decreasing_condition,
      aux_sym__pattern_repeat2,
  [222] = 4,
    ACTIONS(13), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      anon_sym_Activity,
    STATE(5), 11,
      sym__condition,
      sym_change_condition,
      sym_range_condition,
      sym_is_equal_condition,
      sym_is_lower_condition,
      sym_is_lower_or_equal_condition,
      sym_is_higher_condition,
      sym_is_higher_or_equal_condition,
      sym_is_increasing_condition,
      sym_is_decreasing_condition,
      aux_sym__pattern_repeat2,
  [247] = 3,
    ACTIONS(9), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    STATE(8), 11,
      sym__condition,
      sym_change_condition,
      sym_range_condition,
      sym_is_equal_condition,
      sym_is_lower_condition,
      sym_is_lower_or_equal_condition,
      sym_is_higher_condition,
      sym_is_higher_or_equal_condition,
      sym_is_increasing_condition,
      sym_is_decreasing_condition,
      aux_sym__pattern_repeat2,
  [268] = 3,
    ACTIONS(13), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    STATE(7), 11,
      sym__condition,
      sym_change_condition,
      sym_range_condition,
      sym_is_equal_condition,
      sym_is_lower_condition,
      sym_is_lower_or_equal_condition,
      sym_is_higher_condition,
      sym_is_higher_or_equal_condition,
      sym_is_increasing_condition,
      sym_is_decreasing_condition,
      aux_sym__pattern_repeat2,
  [289] = 10,
    ACTIONS(29), 1,
      sym_keyword_changes_from,
    ACTIONS(31), 1,
      sym_keyword_in_range,
    ACTIONS(33), 1,
      sym_keyword_is_equal,
    ACTIONS(35), 1,
      sym_keyword_is_lower,
    ACTIONS(37), 1,
      sym_keyword_is_lower_or_equal,
    ACTIONS(39), 1,
      sym_keyword_is_higher,
    ACTIONS(41), 1,
      sym_keyword_is_higher_or_equal,
    ACTIONS(43), 1,
      sym_keyword_is_increasing,
    ACTIONS(45), 1,
      sym_keyword_is_decreasing,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [321] = 10,
    ACTIONS(47), 1,
      sym_keyword_changes_from,
    ACTIONS(49), 1,
      sym_keyword_in_range,
    ACTIONS(51), 1,
      sym_keyword_is_equal,
    ACTIONS(53), 1,
      sym_keyword_is_lower,
    ACTIONS(55), 1,
      sym_keyword_is_lower_or_equal,
    ACTIONS(57), 1,
      sym_keyword_is_higher,
    ACTIONS(59), 1,
      sym_keyword_is_higher_or_equal,
    ACTIONS(61), 1,
      sym_keyword_is_increasing,
    ACTIONS(63), 1,
      sym_keyword_is_decreasing,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [353] = 5,
    ACTIONS(65), 1,
      anon_sym_Intermediate,
    ACTIONS(67), 1,
      anon_sym_End,
    STATE(67), 1,
      sym_end_pattern,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    STATE(23), 2,
      sym_intermediate_pattern,
      aux_sym_activity_repeat1,
  [371] = 5,
    ACTIONS(65), 1,
      anon_sym_Intermediate,
    ACTIONS(67), 1,
      anon_sym_End,
    STATE(71), 1,
      sym_end_pattern,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    STATE(15), 2,
      sym_intermediate_pattern,
      aux_sym_activity_repeat1,
  [389] = 4,
    ACTIONS(7), 1,
      anon_sym_Case,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(27), 2,
      anon_sym_Intermediate,
      anon_sym_End,
    STATE(18), 2,
      sym_case,
      aux_sym__pattern_repeat1,
  [405] = 4,
    ACTIONS(71), 1,
      anon_sym_Case,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(69), 2,
      anon_sym_Intermediate,
      anon_sym_End,
    STATE(18), 2,
      sym_case,
      aux_sym__pattern_repeat1,
  [421] = 4,
    ACTIONS(11), 1,
      anon_sym_Case,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      anon_sym_Activity,
    STATE(20), 2,
      sym_case,
      aux_sym__pattern_repeat1,
  [437] = 4,
    ACTIONS(74), 1,
      anon_sym_Case,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      anon_sym_Activity,
    STATE(20), 2,
      sym_case,
      aux_sym__pattern_repeat1,
  [453] = 2,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(77), 4,
      ts_builtin_sym_end,
      anon_sym_Activity,
      anon_sym_Case,
      sym_keyword_in,
  [464] = 4,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 1,
      anon_sym_Activity,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    STATE(27), 2,
      sym_activity,
      aux_sym_process_repeat1,
  [479] = 4,
    ACTIONS(83), 1,
      anon_sym_Intermediate,
    ACTIONS(86), 1,
      anon_sym_End,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    STATE(23), 2,
      sym_intermediate_pattern,
      aux_sym_activity_repeat1,
  [494] = 3,
    ACTIONS(90), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(88), 3,
      anon_sym_Intermediate,
      anon_sym_End,
      anon_sym_Case,
  [507] = 3,
    ACTIONS(94), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(92), 3,
      anon_sym_Intermediate,
      anon_sym_End,
      anon_sym_Case,
  [520] = 3,
    ACTIONS(98), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(96), 3,
      anon_sym_Intermediate,
      anon_sym_End,
      anon_sym_Case,
  [533] = 4,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 1,
      anon_sym_Activity,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    STATE(27), 2,
      sym_activity,
      aux_sym_process_repeat1,
  [548] = 3,
    ACTIONS(107), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(105), 3,
      anon_sym_Intermediate,
      anon_sym_End,
      anon_sym_Case,
  [561] = 3,
    ACTIONS(111), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(109), 3,
      anon_sym_Intermediate,
      anon_sym_End,
      anon_sym_Case,
  [574] = 2,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(105), 4,
      ts_builtin_sym_end,
      anon_sym_Activity,
      anon_sym_Case,
      sym_keyword_in,
  [585] = 2,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(109), 4,
      ts_builtin_sym_end,
      anon_sym_Activity,
      anon_sym_Case,
      sym_keyword_in,
  [596] = 2,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(113), 4,
      ts_builtin_sym_end,
      anon_sym_Activity,
      anon_sym_Case,
      sym_keyword_in,
  [607] = 2,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(115), 4,
      ts_builtin_sym_end,
      anon_sym_Activity,
      anon_sym_Case,
      sym_keyword_in,
  [618] = 2,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(117), 4,
      ts_builtin_sym_end,
      anon_sym_Activity,
      anon_sym_Case,
      sym_keyword_in,
  [629] = 3,
    ACTIONS(119), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(113), 3,
      anon_sym_Intermediate,
      anon_sym_End,
      anon_sym_Case,
  [642] = 2,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(121), 4,
      ts_builtin_sym_end,
      anon_sym_Activity,
      anon_sym_Case,
      sym_keyword_in,
  [653] = 2,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(88), 4,
      ts_builtin_sym_end,
      anon_sym_Activity,
      anon_sym_Case,
      sym_keyword_in,
  [664] = 2,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(92), 4,
      ts_builtin_sym_end,
      anon_sym_Activity,
      anon_sym_Case,
      sym_keyword_in,
  [675] = 2,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(96), 4,
      ts_builtin_sym_end,
      anon_sym_Activity,
      anon_sym_Case,
      sym_keyword_in,
  [686] = 3,
    ACTIONS(123), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(115), 3,
      anon_sym_Intermediate,
      anon_sym_End,
      anon_sym_Case,
  [699] = 3,
    ACTIONS(125), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(117), 3,
      anon_sym_Intermediate,
      anon_sym_End,
      anon_sym_Case,
  [712] = 3,
    ACTIONS(127), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(77), 3,
      anon_sym_Intermediate,
      anon_sym_End,
      anon_sym_Case,
  [725] = 3,
    ACTIONS(129), 1,
      sym_keyword_in,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(121), 3,
      anon_sym_Intermediate,
      anon_sym_End,
      anon_sym_Case,
  [738] = 4,
    ACTIONS(131), 1,
      sym_keyword_within,
    ACTIONS(133), 1,
      sym_delimiter,
    STATE(92), 1,
      sym_time_constraint,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [752] = 2,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(135), 3,
      sym_keyword_to,
      sym_keyword_within,
      sym_delimiter,
  [762] = 3,
    ACTIONS(81), 1,
      anon_sym_Activity,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    STATE(22), 2,
      sym_activity,
      aux_sym_process_repeat1,
  [774] = 3,
    STATE(44), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(137), 2,
      sym_identifier,
      sym_number,
  [786] = 3,
    STATE(110), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(137), 2,
      sym_identifier,
      sym_number,
  [798] = 3,
    STATE(97), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(137), 2,
      sym_identifier,
      sym_number,
  [810] = 3,
    STATE(99), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(137), 2,
      sym_identifier,
      sym_number,
  [822] = 3,
    STATE(81), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(137), 2,
      sym_identifier,
      sym_number,
  [834] = 3,
    STATE(82), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(137), 2,
      sym_identifier,
      sym_number,
  [846] = 4,
    ACTIONS(131), 1,
      sym_keyword_within,
    ACTIONS(139), 1,
      sym_delimiter,
    STATE(94), 1,
      sym_time_constraint,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [860] = 3,
    STATE(83), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(137), 2,
      sym_identifier,
      sym_number,
  [872] = 3,
    STATE(84), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(137), 2,
      sym_identifier,
      sym_number,
  [884] = 3,
    STATE(87), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(137), 2,
      sym_identifier,
      sym_number,
  [896] = 3,
    STATE(88), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(137), 2,
      sym_identifier,
      sym_number,
  [908] = 3,
    STATE(72), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(137), 2,
      sym_identifier,
      sym_number,
  [920] = 3,
    STATE(90), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(137), 2,
      sym_identifier,
      sym_number,
  [932] = 3,
    STATE(91), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(137), 2,
      sym_identifier,
      sym_number,
  [944] = 3,
    STATE(53), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(137), 2,
      sym_identifier,
      sym_number,
  [956] = 3,
    STATE(93), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(137), 2,
      sym_identifier,
      sym_number,
  [968] = 3,
    STATE(107), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(137), 2,
      sym_identifier,
      sym_number,
  [980] = 3,
    STATE(108), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(137), 2,
      sym_identifier,
      sym_number,
  [992] = 3,
    STATE(96), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(137), 2,
      sym_identifier,
      sym_number,
  [1004] = 2,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(141), 2,
      anon_sym_Intermediate,
      anon_sym_End,
  [1013] = 2,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      anon_sym_Activity,
  [1022] = 3,
    ACTIONS(145), 1,
      anon_sym_Start,
    STATE(16), 1,
      sym_start_pattern,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1033] = 2,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(147), 2,
      anon_sym_Intermediate,
      anon_sym_End,
  [1042] = 2,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      anon_sym_Activity,
  [1051] = 2,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      anon_sym_Activity,
  [1060] = 2,
    ACTIONS(153), 1,
      sym_delimiter,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1068] = 2,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1076] = 2,
    ACTIONS(157), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1084] = 2,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1092] = 2,
    ACTIONS(161), 1,
      sym_delimiter,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1100] = 2,
    ACTIONS(163), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1108] = 2,
    ACTIONS(165), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1116] = 2,
    ACTIONS(167), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1124] = 2,
    ACTIONS(169), 1,
      sym_delimiter,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1132] = 2,
    ACTIONS(171), 1,
      sym_delimiter,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1140] = 2,
    ACTIONS(173), 1,
      sym_delimiter,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1148] = 2,
    ACTIONS(175), 1,
      sym_delimiter,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1156] = 2,
    ACTIONS(177), 1,
      sym_delimiter,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1164] = 2,
    ACTIONS(179), 1,
      sym_delimiter,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1172] = 2,
    ACTIONS(181), 1,
      sym_delimiter,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1180] = 2,
    ACTIONS(183), 1,
      sym_delimiter,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1188] = 2,
    ACTIONS(185), 1,
      sym_delimiter,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1196] = 2,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1204] = 2,
    ACTIONS(189), 1,
      sym_delimiter,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1212] = 2,
    ACTIONS(191), 1,
      sym_delimiter,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1220] = 2,
    ACTIONS(193), 1,
      sym_delimiter,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1228] = 2,
    ACTIONS(195), 1,
      sym_delimiter,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1236] = 2,
    ACTIONS(197), 1,
      sym_delimiter,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1244] = 2,
    ACTIONS(199), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1252] = 2,
    ACTIONS(201), 1,
      sym_keyword_to,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1260] = 2,
    ACTIONS(203), 1,
      sym_keyword_to,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1268] = 2,
    ACTIONS(205), 1,
      sym_delimiter,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1276] = 2,
    ACTIONS(207), 1,
      sym_delimiter,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1284] = 2,
    ACTIONS(209), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1292] = 2,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1300] = 2,
    ACTIONS(213), 1,
      sym_keyword_sensor,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1308] = 2,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1316] = 2,
    ACTIONS(217), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1324] = 2,
    ACTIONS(219), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1332] = 2,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1340] = 2,
    ACTIONS(223), 1,
      sym_keyword_to,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1348] = 2,
    ACTIONS(225), 1,
      sym_keyword_to,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1356] = 2,
    ACTIONS(227), 1,
      sym_keyword_sensor,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1364] = 2,
    ACTIONS(229), 1,
      sym_delimiter,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1372] = 2,
    ACTIONS(231), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1380] = 2,
    ACTIONS(233), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
  [1388] = 2,
    ACTIONS(235), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_single_line,
      sym_comment_multi_line,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 93,
  [SMALL_STATE(6)] = 119,
  [SMALL_STATE(7)] = 145,
  [SMALL_STATE(8)] = 171,
  [SMALL_STATE(9)] = 197,
  [SMALL_STATE(10)] = 222,
  [SMALL_STATE(11)] = 247,
  [SMALL_STATE(12)] = 268,
  [SMALL_STATE(13)] = 289,
  [SMALL_STATE(14)] = 321,
  [SMALL_STATE(15)] = 353,
  [SMALL_STATE(16)] = 371,
  [SMALL_STATE(17)] = 389,
  [SMALL_STATE(18)] = 405,
  [SMALL_STATE(19)] = 421,
  [SMALL_STATE(20)] = 437,
  [SMALL_STATE(21)] = 453,
  [SMALL_STATE(22)] = 464,
  [SMALL_STATE(23)] = 479,
  [SMALL_STATE(24)] = 494,
  [SMALL_STATE(25)] = 507,
  [SMALL_STATE(26)] = 520,
  [SMALL_STATE(27)] = 533,
  [SMALL_STATE(28)] = 548,
  [SMALL_STATE(29)] = 561,
  [SMALL_STATE(30)] = 574,
  [SMALL_STATE(31)] = 585,
  [SMALL_STATE(32)] = 596,
  [SMALL_STATE(33)] = 607,
  [SMALL_STATE(34)] = 618,
  [SMALL_STATE(35)] = 629,
  [SMALL_STATE(36)] = 642,
  [SMALL_STATE(37)] = 653,
  [SMALL_STATE(38)] = 664,
  [SMALL_STATE(39)] = 675,
  [SMALL_STATE(40)] = 686,
  [SMALL_STATE(41)] = 699,
  [SMALL_STATE(42)] = 712,
  [SMALL_STATE(43)] = 725,
  [SMALL_STATE(44)] = 738,
  [SMALL_STATE(45)] = 752,
  [SMALL_STATE(46)] = 762,
  [SMALL_STATE(47)] = 774,
  [SMALL_STATE(48)] = 786,
  [SMALL_STATE(49)] = 798,
  [SMALL_STATE(50)] = 810,
  [SMALL_STATE(51)] = 822,
  [SMALL_STATE(52)] = 834,
  [SMALL_STATE(53)] = 846,
  [SMALL_STATE(54)] = 860,
  [SMALL_STATE(55)] = 872,
  [SMALL_STATE(56)] = 884,
  [SMALL_STATE(57)] = 896,
  [SMALL_STATE(58)] = 908,
  [SMALL_STATE(59)] = 920,
  [SMALL_STATE(60)] = 932,
  [SMALL_STATE(61)] = 944,
  [SMALL_STATE(62)] = 956,
  [SMALL_STATE(63)] = 968,
  [SMALL_STATE(64)] = 980,
  [SMALL_STATE(65)] = 992,
  [SMALL_STATE(66)] = 1004,
  [SMALL_STATE(67)] = 1013,
  [SMALL_STATE(68)] = 1022,
  [SMALL_STATE(69)] = 1033,
  [SMALL_STATE(70)] = 1042,
  [SMALL_STATE(71)] = 1051,
  [SMALL_STATE(72)] = 1060,
  [SMALL_STATE(73)] = 1068,
  [SMALL_STATE(74)] = 1076,
  [SMALL_STATE(75)] = 1084,
  [SMALL_STATE(76)] = 1092,
  [SMALL_STATE(77)] = 1100,
  [SMALL_STATE(78)] = 1108,
  [SMALL_STATE(79)] = 1116,
  [SMALL_STATE(80)] = 1124,
  [SMALL_STATE(81)] = 1132,
  [SMALL_STATE(82)] = 1140,
  [SMALL_STATE(83)] = 1148,
  [SMALL_STATE(84)] = 1156,
  [SMALL_STATE(85)] = 1164,
  [SMALL_STATE(86)] = 1172,
  [SMALL_STATE(87)] = 1180,
  [SMALL_STATE(88)] = 1188,
  [SMALL_STATE(89)] = 1196,
  [SMALL_STATE(90)] = 1204,
  [SMALL_STATE(91)] = 1212,
  [SMALL_STATE(92)] = 1220,
  [SMALL_STATE(93)] = 1228,
  [SMALL_STATE(94)] = 1236,
  [SMALL_STATE(95)] = 1244,
  [SMALL_STATE(96)] = 1252,
  [SMALL_STATE(97)] = 1260,
  [SMALL_STATE(98)] = 1268,
  [SMALL_STATE(99)] = 1276,
  [SMALL_STATE(100)] = 1284,
  [SMALL_STATE(101)] = 1292,
  [SMALL_STATE(102)] = 1300,
  [SMALL_STATE(103)] = 1308,
  [SMALL_STATE(104)] = 1316,
  [SMALL_STATE(105)] = 1324,
  [SMALL_STATE(106)] = 1332,
  [SMALL_STATE(107)] = 1340,
  [SMALL_STATE(108)] = 1348,
  [SMALL_STATE(109)] = 1356,
  [SMALL_STATE(110)] = 1364,
  [SMALL_STATE(111)] = 1372,
  [SMALL_STATE(112)] = 1380,
  [SMALL_STATE(113)] = 1388,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__pattern_repeat2, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pattern_repeat2, 2, 0, 0), SHIFT_REPEAT(112),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern_repeat2, 2, 0, 0), SHIFT_REPEAT(101),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 3, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__pattern_repeat1, 2, 0, 0),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_higher_condition, 7, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_process, 4, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_activity_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_activity_repeat1, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_condition, 9, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_change_condition, 9, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_condition, 9, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_condition, 9, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_condition, 10, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_change_condition, 10, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_process_repeat1, 2, 0, 0),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_process_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_increasing_condition, 6, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_increasing_condition, 6, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_decreasing_condition, 6, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_decreasing_condition, 6, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_equal_condition, 7, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_lower_condition, 7, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_lower_or_equal_condition, 7, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_equal_condition, 7, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_higher_or_equal_condition, 7, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_lower_condition, 7, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_lower_or_equal_condition, 7, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_higher_condition, 7, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_higher_or_equal_condition, 7, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_pattern, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_activity, 6, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intermediate_pattern, 3, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_pattern, 3, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_activity, 5, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_constraint, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [187] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
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

TS_PUBLIC const TSLanguage *tree_sitter_radiant(void) {
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
