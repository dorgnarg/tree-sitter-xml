; highlights.scm

(comment) @comment

[
    "DOCTYPE"
    "EMPTY"
    "ANY"
    "ELEMENT"
] @keyword

[
    "#REQUIRED"
    "#IMPLIED"
    "#FIXED"
    "#PCDATA"
] @keyword.directive

(tag_name) @variable

(attribute_name) @constructor
[
    "encoding"
    "version"
    "standalone"
] @constructor
(attribute_value) @string