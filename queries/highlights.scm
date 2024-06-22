[
    "Bridge"
    "Thing"
] @keyword

(unique_identifier
    binding: (identifier) @type.builtin
    variant: (identifier) @type
    name: (identifier) @variable)
(parameter
    property: (identifier) @property)

[
    ":"
    ","
] @punctuation.delimiter
"@" @punctuation.special
[
    "["
    "]"
    "{"
    "}"
]  @punctuation.bracket
[
    "="
] @operator

(comment) @comment
(literal) @number
(string) @string