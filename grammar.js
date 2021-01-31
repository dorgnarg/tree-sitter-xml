module.exports = grammar({
    name: 'xml',

    rules: {
        fragment: $ => seq(
            repeat($._node),
        ),

        _node: $ => choice(
            $.comment,
            $.processing_instructions,
            $.cdata_sect,
            $.xml_decl,
            $.doctype_decl,
            $.start_tag,
            $.end_tag,
            $.empty_elem_tag,
            $.element_decl,
            $.conditional_sect,
            $.entity_decl,
            $.text_decl,
            $.notation_decl,
            $.char_data,
            // $.text,
        ),

        /** Names and Tokens **/

        _name_char: $ => choice (
            /\w/,
            /\d/,
            '.',
            '-',
            '_',
            ':',
            // TODO: CombiningChar, _Extender
        ),

        _name: $ => seq (
            choice (
                /\w/,
                '_',
                ':'
            ),
            repeat (
                $._name_char
            )
        ),

        names: $ => seq(
            $._name,
            repeat(seq(
                /\s/,
                $._name
            ))
        ),

        nm_token: $ => repeat1($._name_char),

        nm_tokens: $ => seq (
            $.nm_token,
            repeat(seq(
                /\s/,
                $.nm_token
            ))
        ),

        /** Literals **/

        entity_value: $ => choice (
            seq(
                '"',
                repeat(choice(
                    /[^<&"]/,
                    $.pe_reference,
                    $.reference
                ))
            )
        ),

        attribute_value: $ => choice (
            seq (
                '"',
                repeat(choice(
                    /[^<&"]/,
                    $.reference
                )),
                '"'
            ),
            seq (
                "'",
                repeat(choice(
                    /[^<&"]/,
                    $.reference
                )),
                "'"
            )
        ),

        system_literal: $ => choice(
            seq(
                '"',
                /[^"]*/,
                '"'
            ),
            seq(
                "'",
                /[^"]*/,
                "'"
            )
        ),

        pubid_literal: $ => choice (
            seq(
                '"',
                repeat(
                    $.pubid_char
                ),
                '"'
            ),
            seq(
                "'",
                repeat(
                    $.pubid_char
                ),
                "'"
            ),
        ),

        pubid_char: $ => /[ \r\na-zA-Z0-9-"()+,./:=?;!*#@$_%]/,

        /** Character Data **/

        // char_data: $ => /[^<&]* - ([^<&]* ']]>' [^<&]*)/,
        char_data: $ => /[^<&]*/,
        // text: $ => /[^<>]+/,

        /** Comments **/

        comment: $ => seq (
            '<!--',
            repeat(
                seq(
                    optional('-'),
                    /[^-]/,
                )
            ),
            '-->'
        ),

        /** Processing instructions **/

        processing_instructions: $ => seq (
            '<?',
            $.pi_target,
            optional(seq(
                /\s/,
                /. - [.'?>'.]/
            )),
            '?>'
        ),

        pi_target: $ => $._name, // this should exclude [Xx][Mm][Ll] too but I can't figure out how to do that yet

        /** CDATA Sections **/

        cdata_sect: $ => seq(
            $.cdata_start,
            $.cdata,
            $.cdata_end
        ),

        cdata_start: $ => '<![CDATA[',

        cdata: $ => /./,

        cdata_end: $ => ']]>',

        /** Prolog **/

        prolog: $ => seq(
            optional($.xml_decl),
            repeat($.misc),
            optional($.doctype_decl),
            repeat($.misc)
        ),

        xml_decl: $ => seq (
            '<?xml',
            /\s/,
            $.version_info,
            optional($.encoding_decl),
            optional($.standalone_decl),
            optional(/\s/),
            '?>'
        ),

        version_info: $ => seq(
            'version',
            $._eq,
            choice(
                seq(
                    '"',
                    '1.',
                    /[0-9]+/,
                    '"'
                ),
                seq(
                    "'",
                    '1.',
                    /[0-9]+/,
                    "'"
                )
            ),
        ),

        _eq: $ => seq(
            optional(/\s/),
            '=',
            optional(/\s/)
        ),

        version_num: $ => repeat1( choice(
            /[a-zA-Z0-9_.:]/,
            '-'
        )),

        misc: $ => choice(
            $.comment,
            $.processing_instructions,
            /\s/
        ),

        /** Document Type Definition **/

        doctype_decl: $ => seq (
            '<!DOCTYPE',
            /\s/,
            // alias($._name,$.doctype),
            $._name,
            optional(seq(/\s/, $.external_id)),
            optional(/\s/),
            optional(seq(
                '[',
                repeat(choice(
                    $.markup_decl,
                    $.pe_reference,
                    /\s/,
                )),
                ']'
            )),
            // TODO: The rest of this
            '>'
        ),

        markup_decl: $ => choice(
            $.element_decl,
            $.attlist_decl,
            $.entity_decl,
            $.notation_decl,
            $.processing_instructions,
            $.comment
        ),

        /** External Subset **/

        external_subset: $ => seq(
            optional($.text_decl),
            repeat($.external_subset_decl)
        ),

        external_subset_decl: $ => choice(
            $.markup_decl,
            $.conditional_sect,
            $.pe_reference
        ),


        /** Standalone Document Declaration **/

        standalone_decl: $ => seq(
            /\s/,
            'standalone',
            $._eq,
            choice(
                seq(
                    '"',
                    choice(
                        'yes',
                        'no'
                    ),
                    '"'
                ),
                seq(
                    "'",
                    choice(
                        'yes',
                        'no'
                    ),
                    "'"
                )
            )
        ),

        /** Language Identification **/

        language_id: $ => seq(
            $.langcode,
            optional(seq(
                '-',
                $.sub_code
            ))
        ),

        langcode: $ => choice(
            $.iso639_code,
            $.iana_code,
            $.user_code
        ),

        iso639_code: $ => seq(
            choice(
                /[a-z]/,
                /[A-Z]/,
            ),
            choice(
                /[a-z]/,
                /[A-Z]/,
            ),
        ),

        iana_code: $ => seq(
            choice(
                'i',
                'I'
            ),
            '-',
            repeat1(
                choice(
                    /[a-z]/,
                    /[A-Z]/
                )
            )
        ),

        user_code: $ => seq(
            choice(
                'x',
                'X'
            ),
            '-',
            repeat1(
                choice(
                    /[a-z]/,
                    /[A-Z]/
                )
            )
        ),

        sub_code: $ => repeat1(
            choice(
                /[a-z]/,
                /[A-Z]/
            )
        ),

        /** Element **/

        element: $ => choice(
            $.empty_elem_tag,
            seq(
                $.start_tag,
                optional($.content),
                $.end_tag
            )
        ),

        /** Start-tag **/

        start_tag: $ => seq (
            '<',
            alias($._name, $.tag_name),
            repeat(
                seq (
                    /\s/,
                    $.attribute
                )
            ),
            optional(/\s/),
            '>'
        ),

        attribute: $ => seq(
            alias($._name, $.attribute_name),
            $._eq,
            $.attribute_value
        ),

        /** End-tag **/

        end_tag: $ => seq ( // TODO: Make sure closing tag matches opening tag
            '</',
            alias($._name, $.tag_name),
            optional(/\s/),
            '>'
        ),

        /** Content of Elements **/

        content: $ => repeat1 ( choice (
            $.element,
            $.cdata_sect,
            $.char_data,
            $.reference,
            $.processing_instructions,
            $.comment,
            // $.text,
        )),

        /** Tags for Empty Elements **/

        empty_elem_tag: $ => seq (
            '<',
            alias($._name, $.tag_name),
            repeat(
                seq (
                    /\s/,
                    $.attribute
                )
            ),
            optional(/\s/),
            '/>'
        ),

        /** Element Type Declaration **/

        element_decl: $ => seq(
            '<!ELEMENT',
            /\s/,
            alias($._name, $.element_name),
            /\s/,
            $.content_spec,
            optional(/\s/),
            '/>'
        ),

        content_spec: $ => choice(
            'EMPTY',
            'ANY',
            $.mixed,
            $.children
        ),

        /** Element-content Models **/

        children: $ => seq(
            choice(
                $.element_choice,
                $.element_seq
            ),
            optional(choice(
                '?',
                '*',
                '+'
            ))
        ),

        cp: $ => seq(
            choice(
                $._name,
                $.element_choice,
                $.element_seq
            ),
            optional(choice(
                '?',
                '*',
                "+"
            ))
        ),

        element_choice: $ => seq(
            '(',
            optional(/\s/),
            $.cp,
            repeat1(
                seq(
                    optional(/\s/),
                    '|',
                    optional(/\s/),
                    $.cp
                ),
            ),
            optional(/\s/),
            ')'
        ),

        element_seq: $ => seq(
            '(',
            optional(/\s/),
            $.cp,
            repeat(
                seq(
                    optional(/\s/),
                    ',',
                    optional(/\s/),
                    $.cp
                ),
            ),
            optional(/\s/),
            ')'
        ),

        /** Mixed-content Declaration **/

        mixed: $ => choice(
            seq(
                '(',
                optional(/\s/),
                '#PCDATA',
                repeat(
                    seq(
                        optional(/\s/),
                        '|',
                        optional(/\s/),
                        $._name
                    ),
                ),
                optional(/\s/),
                ')*'
            ),
            seq(
                '(',
                optional(/\s/),
                '#PCDATA',
                optional(/\s/),
                ')'
            ),
        ),

        /** Attribute-list Declaration **/

        attlist_decl: $ => seq(
            '<!ATTLIST',
            /\s/,
            alias($._name, $.attlist_name),
            repeat($.att_def),
            optional(/\s/),
            '>'
        ),

        att_def: $ => seq(
            /\s/,
            $._name,
            /\s/,
            $.att_type,
            /\s/,
            $.default_decl
        ),

        /** Attribute Types **/

        att_type: $ => choice(
            $.string_type,
            $.tokenized_type,
            $.enumerated_type
        ),

        string_type: $ => 'CDATA',

        tokenized_type: $ => choice(
            'ID',
            'IDREF',
            'IDREFS',
            'ENTITY',
            'ENTITIES',
            'NMTOKEN',
            'NMTOKENS'
        ),

        /** Enumerated Attribute Types **/

        enumerated_type: $ => choice (
            $.notation_type,
            $.enumeration
        ),

        notation_type: $ => seq(
            'NOTATION',
            /\s/,
            '(',
            optional(/\s/),
            alias($._name, $.notation_type_name),
            repeat(
                seq(
                    optional(/\s/),
                    '|',
                    optional(/\s/),
                    alias($._name,$.notation_type_name),
                ),
            ),
            ')'
        ),

        enumeration: $ => seq(
            '(',
            optional(/\s/),
            $.nm_token,
            repeat(
                seq(
                    optional(/\s/),
                    '|',
                    optional(/\s/),
                    $.nm_token
                ),
            ),
            optional(/\s/),
            ')'
        ),

        /** Attribute Defaults **/

        default_decl: $ => choice(
            '#REQUIRED',
            '#IMPLIED',
            seq(
                optional(
                    seq(
                        '#FIXED',
                        optional(/\s/)
                    )
                ),
                $.attribute_value
            )
        ),

        /** Conditional Section **/

        conditional_sect: $ => choice(
            $.include_sect,
            $.ignore_sect
        ),

        include_sect: $ => seq(
            '<![',
            optional(/\s/),
            'INCLUDE',
            optional(/\s/),
            '[',
            repeat($.external_subset_decl),
            ']]>'
        ),

        ignore_sect: $ => seq(
            '<![',
            optional(/\s/),
            'IGNORE',
            optional(/\s/),
            '[',
            repeat($.ignore_sect_contents),
            ']]>'
        ),

        ignore_sect_contents: $ => seq(
            $.ignore,
            repeat(
                seq(
                    '<![',
                    $.ignore_sect_contents,
                    ']]>',
                    $.ignore
                ),
            )
        ),

        ignore: $ => /./,   // Not technically accurate, but close enough for now

        /** Character Reference **/

        char_ref: $ => choice(
            seq(
                '&#',
                /[0-9]+/,
                ';'
            ),
            seq(
                '&#x',
                /[0-9a-fA-F]+/,
                ';'
            )
        ),

        /** Entity Reference **/

        reference: $ => choice (
            seq(
                '&',
                $._name,
                ';'
            ),
            $.char_ref
        ),

        entity_ref: $ => seq(
            '&',
            $._name,
            ';'
        ),

        pe_reference: $ => seq(
            '%',
            $._name,
            ';',
        ),

        /** Entity Declaration **/

        entity_decl: $ => choice(
            $.ge_decl,
            $.pe_decl
        ),

        ge_decl: $ => seq(
            '<!ENTITY',
            /\s/,
            $._name,
            /\s/,
            $.entity_def,
            optional(/\s/),
            '>'
        ),

        pe_decl: $ => seq(
            '<!ENTITY',
            /\s/,
            '%',
            /\s/,
            $._name,
            /\s/,
            $.pe_def,
            optional(/\s/),
            '>'
        ),

        entity_def: $ => prec.left(choice(
            $.entity_value,
            seq(
                $.external_id,
                optional($.ndata_decl)
            )
        )),

        pe_def: $ => choice(
            $.entity_value,
            $.external_id,
        ),

        /** External Entity Declaration **/

        external_id: $ => choice (
            seq(
                'SYSTEM',
                /\s/,
                $.system_literal,
            ),
            seq(
                'PUBLIC',
                /\s/,
                $.pubid_literal,
                /\s/,
                $.system_literal
            )
        ),

        ndata_decl: $ => seq(
            /\s/,
            'NDATA',
            /\s/,
            alias($._name, $.ndata_name)
        ),

        /** Text Declaration **/

        text_decl: $ => seq(
            '<?xml',
            optional($.version_info),
            $.encoding_decl,
            optional(/\s/),
            '?>'
        ),

        /** Well-formed External Parsed Entity **/


        external_parsed_ent: $ => seq( 
            optional($.text_decl),
            $.content
        ),

        external_pe: $ => seq(
            optional($.text_decl),
            $.external_subset_decl
        ),

        /** Encoding Declaration **/

        encoding_decl: $ => seq(
            /\s/,
            'encoding',
            optional(/\s/),
            '=',
            optional(/\s/),
            choice(
                seq(
                    '"',
                    $.enc_name,
                    '"'
                ),
                seq(
                    "'",
                    $.enc_name,
                    "'"
                )
            )
        ),

        enc_name: $ => seq(
            /[A-Za-z]/,
            repeat(
                choice(
                    /[A-Za-z0-9]/,
                    '-',
                ),
            ),
        ),

        /** Notation Declaration **/

        notation_decl: $ => seq(
            '<!NOTATION',
            /\s/,
            alias($._name,$.notation_name),
            /\s/,
            choice(
                $.external_id,
                $.public_id
            ),
            optional(/\s/),
            '>'
        ),

        public_id: $ => prec.left(seq(
            'PUBLIC',
            /\s/,
            $.pubid_literal
        )),

    }
})
