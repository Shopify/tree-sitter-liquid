[
  "{{"
  "}}"
  "{%"
  "%}"
  ; "{%-"
  ; "-%}"
] @tag.delimiter

[
 "|"
 "."
 ":"
  (predicate)
] @operator

[
 (identifier) 
 (filter)
] @function.call

[
 (call)
] @variable

[
  (expression)
  (statement) 
  (assignment)
] @keyword

(string) @string
(boolean) @boolean
(number) @number
(comment) @comment
