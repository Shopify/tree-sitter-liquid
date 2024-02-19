([
  "{{"
  "}}"
  "{{-"
  "-}}"
  "{%"
  "%}"
  "{%-"
  "-%}"
  ] @tag.delimiter 
 (#set! priority 101))


([
  "]"
  "["
  ")"
  "("
  ] @punctuation.bracket 
 (#set! priority 101))

([
  ","
  "."
  ] @punctuation.delimiter 
 (#set! priority 101))

([
  "|"
  ":"
  "="
  (predicate)
  ] @operator 
 (#set! priority 101))

([
  "as"
  "by"
  "in"
  "with"
  "liquid"
  "cycle"

  "case"
  "when"
  "endcase"

  "for"
  "endfor"

  "form"
  "endform"

  "style"
  "endstyle"

  "javascript"
  "endjavascript"

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

  "raw"
  "endraw"

  "tablerow"
  "endtablerow"

  "paginate"
  "endpaginate"

  (statement)
  ] @keyword 
 (#set! priority 101))


((identifier) @variable (#set! priority 101))
((string) @string (#set! priority 101))
((boolean) @boolean (#set! priority 101))
((number) @number (#set! priority 101))

(filter
  name: (identifier) @function.call (#set! priority 101))

(raw_tag
  (raw_content) @text.reference (#set! priority 102))

((comment) @comment (#set! priority 102))

