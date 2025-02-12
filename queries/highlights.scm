(enum_variant) @constant
(struct (identifier)) @constant
(struct (field (enum_variant (identifier)) @property))


(string) @string
(boolean) @boolean
(integer) @number
(float) @float
(char) @character

(comment) @comment @spell

["{" "}"] @punctuation.bracket
["(" ")"] @punctuation.bracket
["[" "]"] @punctuation.bracket

["," ":"] @punctuation.delimiter

(ERROR) @error
