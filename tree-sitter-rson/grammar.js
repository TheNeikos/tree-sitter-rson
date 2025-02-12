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
    // TODO: add the actual grammar rules
    source_file: $ => "hello"
  }
});
