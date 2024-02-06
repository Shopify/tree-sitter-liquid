([
 "{{"
 "}}"
 "{{-"
 "-}}"
 "{%"
 "%}"
 "{%-"
 "-%}"
] @tag.delimiter (#set! priority 101))

([
 "]"
 "["
 ")"
 "("
] @punctuation.bracket (#set! priority 101))

([
 ","
 "."
] @punctuation.delimiter (#set! priority 101))

([
 "|"
 ":"
 "="
 (predicate)
] @operator (#set! priority 101))

([
 "as"
 "with"
 "liquid"

 ;; throwing?
 ; "break"
 ; "continue"

 "case"
 "when"
 "endcase"

 "for"
 "endfor"

 "capture"
 "endcapture"

 "if"
 "else"
 "elsif"
 "endif"
 
 "unless"
 "endunless"

 "schema"
 "endschema"

 (statement)
] @keyword (#set! priority 101))

((identifier) @variable (#set! priority 101))
((string) @string (#set! priority 101))
((boolean) @boolean (#set! priority 101))
((number) @number (#set! priority 101))
((nil) @constant.builtin (#set! priority 101))

(filter
  name: (identifier) @function.call (#set! priority 101))

((comment) @comment (#set! priority 102))

