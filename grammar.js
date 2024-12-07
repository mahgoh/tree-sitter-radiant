/**
 * @file A DSL for activity detection and monitoring
 * @author Marco Kaufmann <me@marcokaufmann.ch>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "radiant",

  extras: $ => [
    /\s/,
    $.comment_multi_line,
    $.comment_single_line
  ],

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => $.process,


    process: $ => seq(
      'Process',
      $.identifier,
      ':',
      repeat1($.activity)
    ),

    activity: $ => seq(
      'Activity',
      $.identifier,
      ':',
      $.start_pattern,
      repeat($.intermediate_pattern),
      $.end_pattern
    ),

    start_pattern: $ => seq(
      'Start',
      ':',
      $._pattern
    ),

    intermediate_pattern: $ => seq(
      'Intermediate',
      ':',
      $._pattern
    ),

    end_pattern: $ => seq(
      'End',
      ':',
      $._pattern
    ),

    _pattern: $ => choice(
      repeat1($.case),
      repeat1($._condition),
    ),

    case: $ => seq(
      'Case',
      ':',
      repeat1($._condition)
    ),

    _condition: $ => choice(
      $.change_condition,
      $.range_condition,
      $.is_equal_condition,
      $.is_lower_condition,
      $.is_lower_or_equal_condition,
      $.is_higher_condition,
      $.is_higher_or_equal_condition,
      $.is_increasing_condition,
      $.is_decreasing_condition
    ),

    change_condition: $ => seq(
      $.keyword_in,
      $.identifier,
      $.keyword_sensor,
      $.identifier,
      $.keyword_changes_from,
      $.value,
      $.keyword_to,
      $.value,
      optional($.time_constraint),
      $.delimiter
    ),

    range_condition: $ => seq(
      $.keyword_in,
      $.identifier,
      $.keyword_sensor,
      $.identifier,
      $.keyword_in_range,
      $.value,
      $.keyword_to,
      $.value,
      $.delimiter
    ),

    is_equal_condition: $ => seq(
      $.keyword_in,
      $.identifier,
      $.keyword_sensor,
      $.identifier,
      $.keyword_is_equal,
      $.value,
      $.delimiter
    ),

    is_lower_condition: $ => seq(
      $.keyword_in,
      $.identifier,
      $.keyword_sensor,
      $.identifier,
      $.keyword_is_lower,
      $.value,
      $.delimiter
    ),

    is_lower_or_equal_condition: $ => seq(
      $.keyword_in,
      $.identifier,
      $.keyword_sensor,
      $.identifier,
      $.keyword_is_lower_or_equal,
      $.value,
      $.delimiter
    ),

    is_higher_condition: $ => seq(
      $.keyword_in,
      $.identifier,
      $.keyword_sensor,
      $.identifier,
      $.keyword_is_higher,
      $.value,
      $.delimiter
    ),

    is_higher_or_equal_condition: $ => seq(
      $.keyword_in,
      $.identifier,
      $.keyword_sensor,
      $.identifier,
      $.keyword_is_higher_or_equal,
      $.value,
      $.delimiter
    ),

    is_increasing_condition: $ => seq(
      $.keyword_in,
      $.identifier,
      $.keyword_sensor,
      $.identifier,
      $.keyword_is_increasing,
      $.delimiter
    ),

    is_decreasing_condition: $ => seq(
      $.keyword_in,
      $.identifier,
      $.keyword_sensor,
      $.identifier,
      $.keyword_is_decreasing,
      $.delimiter
    ),

    time_constraint: $ => seq(
      $.keyword_within,
      $.number,
      $.identifier
    ),

    keyword_in: $ => 'In',
    keyword_sensor: $ => 'sensor',
    keyword_changes_from: $ => 'changes_from',
    keyword_to: $ => 'to',
    keyword_in_range: $ => 'in_range',
    keyword_is_equal: $ => 'is_equal',
    keyword_is_lower: $ => 'is_lower',
    keyword_is_lower_or_equal: $ => 'is_lower_or_equal',
    keyword_is_higher: $ => 'is_higher',
    keyword_is_higher_or_equal: $ => 'is_higher_or_equal',
    keyword_is_increasing: $ => 'is_increasing',
    keyword_is_decreasing: $ => 'is_decreasing',
    keyword_within: $ => 'within',

    delimiter: $ => ';',

    value: $ => choice(
      $.identifier,
      $.number
    ),

    identifier: $ => /[_a-zA-Z][\w_]*/,

    number: $ => /-?[0-9]+/,

    comment_single_line: $ => token(/\/\/[^\n\r]*/),
    comment_multi_line: $ => token(seq(
      '/*',
      /[^*]*\*+([^/*][^*]*\*+)*/,
      '/',
    ))
  }
});
