/**
 * @file Rson grammar for tree-sitter
 * @author Marcel Müller <neikos@neikos.email>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "rson",

  extras: $ => [/\s/, $.comment],

  rules: {
    source_file: $ => $._expression,
    _expression: $ => choice(
      $.struct,
      $.array,
      $.tuple,
      $._literal,
      $.enum_variant,
    ),
    identifier: $ => /[_\p{XID_Start}][_\p{XID_Continue}]*/,
    struct: $ => choice(
      '()',
      $.tuple_struct,
      seq(optional($.identifier), $._fields),
    ),
    _fields: $ => seq('{', sepBy(',', $.field), optional(','), '}'),
    field: $ => seq($._expression, ':', $._expression),
    tuple_struct: $ => seq($.identifier, $.tuple),
    tuple: $ => seq('(', sepBy(',', $._expression), optional(','), ')'),
    enum_variant: $ => $.identifier,

    string: $ => seq('"', /[^"]*/, '"'),
    char: $ => seq('\'', /[^\']/, '\''),
    comment: $ => token(seq('//', /.*/)),
    array: $ => seq('[', sepBy(',', $._expression), optional(','), ']'),
    boolean: $ => choice('true', 'false'),
    integer: $ => token(seq(
      choice(
        /[0-9][0-9_]*/, // Normal nums
        /0x[0-9a-fA-F_]+/, // hex nums
        /0o[0-7_]+/, // octal nums
        /0b[0-1_]+/, // binary nums
      )
    )),
    float: $ => token(seq(optional(/[0-9][0-9]*/), '.', /[0-9][0-9]*/)),
    _literal: $ => choice(
      $.string,
      $.char,
      $.boolean,
      $.integer,
      $.float,
    ),
  },
});

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)));
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule));
}
