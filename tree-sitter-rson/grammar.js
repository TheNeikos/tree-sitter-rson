/**
 * @file Rson grammar for tree-sitter
 * @author Marcel Müller <neikos@neikos.email>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "rson",

  rules: {
    source_file: $ => $._expression,
    _expression: $ => choice(
      $.struct,
      $.string
    ),
    identifier: $ => /[a-zA-Z][a-zA-Z0-9]+/,
    struct: $ => seq($.identifier, $._fields),
    _fields: $ => seq('{', repeat($.field), '}'),
    field: $ => seq($.identifier, ':', $._expression, optional(',')),
    string: $ => seq('"', /[^"]*/, '"'),
    comment: $ => token(seq('//', /.*/)),
  },
  extra: $ => [/\s/, $.comment]
});
