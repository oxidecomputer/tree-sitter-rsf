/**
 * @file The Register Specification Format (RIF)
 * @author Ryan Goodfellow <ry@oxide.computer>
 * @license MPL-2.0
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "rsf",

  extras: $ => [
    /\s|\\\r?\n/,
    $.comment,
  ],

  rules: {
    source_file: $ => repeat($.top),
    top: $ => choice(
      $.use,
      $.enum_decl,
      $.register_decl,
      $.block_decl,
      //$.docstring,
      //$.comment,
    ),

    use: $ => seq('use', $.identifier, ';'),

    enum_decl: $ => seq(
      'enum', '<', $.number, '>', $.type, '{',
        $.enum_alternate,
        repeat(seq(',', $.enum_alternate)),
        optional(','),
      '}'
    ),

    register_decl: $ => seq(
      optional('sram'), 'register', '<', $.number, '>', $.type, '{',
        $.field,
        repeat(seq(',', $.field)),
        optional(','),
      '}'
    ),

    block_decl: $ => seq(
      optional('sram'), 'block', $.type, '{',
        $.component,
        repeat(seq(',', $.component)),
        optional(','),
      '}'
    ),

    component: $ => seq(
      $.member, ':', $.component_kind, optional(seq('@', $.number)),
    ),

    component_kind: $ => choice(
      seq(repeat(seq($.identifier, '::')), $.type, '[', $.number, optional(seq(';', $.number)), ']'),
      seq(repeat(seq($.identifier, '::')), $.type),
    ),

    enum_alternate: $ => seq($.identifier, '=', $.number),
    field: $ => seq($.member, ':', $.mode, repeat(seq($.identifier, '::')), $.type, optional(seq('@', $.number))),

    number: $ => choice (
      $.decimal,
      $.hex,
      $.binary,
    ),

    mode: $ => choice (
      'ro',
      'wo',
      'rw',
      'reserved'
    ),

    member: $ => $.identifier,
    type: $ => choice('...', $.identifier),
    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    decimal: $ => /\d+/,
    hex: $ => /0x(\d|[a-fA-F])+/,
    binary: $ => /0b[01]+/,

    comment: _ => token(choice(
      seq('//', /(\\+(.|\r?\n)|[^\\\n])*/),
    )),
  }
});
