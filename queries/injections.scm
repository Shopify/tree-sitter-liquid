((content) @injection.content
 (#set! injection.language "html")
 (#set! injection.combined))

((schema_tag
  (content) @injection.content)
 (#set! injection.language "json")
 (#set! injection.combined))

((style_tag
  (content) @injection.content)
 (#set! injection.language "css")
 (#set! injection.combined))

((javascript_tag
  (content) @injection.content)
 (#set! injection.language "javascript"))

