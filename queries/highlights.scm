; highlights.scm

(comment) @comment

[
    "DOCTYPE"
    "ELEMENT"
    "ATTLIST"
] @keyword

[
    "#REQUIRED"
    "#IMPLIED"
    "#FIXED"
    "#PCDATA"
] @keyword.directive

[
    "EMPTY"
    "ANY"
    "SYSTEM"
    "PUBLIC"
] @constant

(doctype) @module
(element_name) @module

"xml" @tag
(tag_name) @tag

[
    "encoding"
    "version"
    "standalone"
] @attribute
(attribute_name) @attribute

(system_literal) @string
(pubid_literal) @string
(attribute_value) @string

[
    "<" ">" "</" "/>" "<?" "?>" "<!" "<![" "[" "]]>"
] @punctuation.bracket