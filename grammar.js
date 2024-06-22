module.exports = grammar({
  name: "oh_things",

  extras: ($) => [$.comment, /[\s\p{Zs}\uFEFF\u2028\u2029\u2060\u200B]/],
  word: ($) => $.identifier,

  rules: {
    source_file: ($) => repeat($._root_thing),
    _root_thing: ($) => choice($.bridge, $.thing),

    bridge: ($) =>
      seq(
        "Bridge",
        $.unique_identifier,
        optional($._metadata),
        optional($.parameter_block),
        optional($.thing_block),
      ),
    thing: ($) =>
      seq(
        "Thing",
        $.unique_identifier,
        optional($._metadata),
        optional($.parameter_block),
      ),

    _metadata: ($) =>
      seq(
        field("label", $.string),
        optional(seq("@", field("location", $.string))),
      ),

    parameter_block: ($) =>
      seq("[", repeat(seq($.parameter, ",")), optional($.parameter), "]"),
    thing_block: ($) => seq("{", repeat($.thing), "}"),
    unique_identifier: ($) =>
      seq(
        field("binding", $.identifier),
        ":",
        field("variant", $.identifier),
        ":",
        field("name", $.identifier),
      ),

    parameter: ($) =>
      seq(
        field("property", $.identifier),
        "=",
        field("value", choice($.literal, $.string)),
      ),

    comment: ($) => token(seq("//", /[^\r\n\u2028\u2029]*/)),
    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
    literal: ($) => token(repeat1(/[0-9]/)),
    string: ($) => seq('"', repeat(/[^"]/), '"'),
  },
});
