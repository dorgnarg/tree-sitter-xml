# tree-sitter-xml
XML Grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter)

[Based on the W3C XML 1.0 recommendation](https://www.w3.org/TR/REC-xml/)

Example files come from W3C samples as well.

Finished sections from the XML specification:

- [ ] Document
- [x] Character Range (currently doing with `/./`)
- [x] White Space (currently doing with `/\s/`)
- [x] Names and Tokens
- [x] Literals
- [x] Character Data
- [x] Comments
- [x] Processing Instructions (*haven't quite finished the pi_target definition*)
- [x] CDATA Sections (*not sure about the cdata element, I need to test it more*)
- [x] Prolog
- [x] Document Type Definition
- [x] External Subset
- [x] Standalone Document Declaration
- [x] Language Identification
- [x] Element
- [x] Start-tag
- [x] End-tag
- [x] Content of Elements
- [x] Tags for Empty Elements
- [x] Element Type Declaration
- [x] Element-content Models
- [x] Mixed-content Declaration
- [x] Attribute-list Declaration
- [x] Attribute Types
- [x] Enumerated Attribute Types
- [x] Attribute Defaults
- [x] Conditional Section (*$.ignore might not be good enough*)
- [x] Character Reference
- [x] Entity Reference
- [x] Entity Declaration
- [x] External Entity Declaraion
- [x] Text Declaration
- [x] Well-Formed External Parsed Entity
- [x] Encoding Declaration
- [x] Encoding Declaration
- [x] Notation Declarations
- [ ] Characters

*Note that these just mean I have literally written them in, I'm still working on organization and figuring out what needs to be visible/hidden. Help is appreciated!*
