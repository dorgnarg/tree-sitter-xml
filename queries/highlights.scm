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

"xml" @tag
(tag_name) @tag

(attribute_name) @attribute
[
    "encoding"
    "version"
    "standalone"
] @attribute

(system_literal) @string
(pubid_literal) @string
(attribute_value) @string

[
    "<" ">" "</" "/>" "<?" "?>" "<!"
] @punctuation.bracket