module.exports = grammar({
    name: 'xml',

    extras: $ => [],

    rules: {
        document: $ => seq(
            repeat($.prolog),
            repeat($.element),
            repeat($.misc)
        ),

        /** Names and Tokens **/

        _name_char: $ => choice (
            /\w/,
            '.',
            '-',
            ':',
            /[\u0300-\u0345\u0360-\u0361\u0483-\u0486\u0591-\u05A1\u05A3-\u05B9\u05BB-\u05BD]/,
            /[\u05BF\u05C4\u0670\u093C\u094D\u09BC\u09BE\u09BF\u09D7\u0A02\u0A3C\u0A3E\u0A3F]/,
            /[\u05C1-\u05C2\u064B-\u0652\u06D6-\u06DC\u06DD-\u06DF\u06E0-\u06E4\u06E7-\u06E8]/,
            /[\u06EA-\u06ED\u0901-\u0903\u093E-\u094C\u0951-\u0954\u0962-\u0963\u0981-\u0983]/,
            /[\u09C0-\u09C4\u09C7-\u09C8\u09CB-\u09CD\u09E2-\u09E3\u0A40-\u0A42\u0A47-\u0A48]/,
            /[\u0A4B-\u0A4D\u0A70-\u0A71\u0A81-\u0A83\u0ABC\u0ABE-\u0AC5\u0AC7-\u0AC9\u3005]/,
            /[\u0ACB-\u0ACD\u0B01-\u0B03\u0B3C\u309A\u00B7\u02D0\u02D1\u0387\u0640\u0E46\u0EC6]/,
            /[\u0B3E-\u0B43\u0B47-\u0B48\u0B4B-\u0B4D\u0B56-\u0B57\u0B82-\u0B83\u0BBE-\u0BC2]/,
            /[\u0BC6-\u0BC8\u0BCA-\u0BCD\u0BD7\u0D46-\u0D48\u0D4A-\u0D4D\u0D57\u0E31]/,
            /[\u0C01-\u0C03\u0C3E-\u0C44\u0C46-\u0C48\u0C4A-\u0C4D\u0C55-\u0C56\u0C82-\u0C83]/,
            /[\u0CBE-\u0CC4\u0CC6-\u0CC8\u0CCA-\u0CCD\u0CD5-\u0CD6\u0D02-\u0D03\u0D3E-\u0D43]/,
            /[\u0E34-\u0E3A\u0E47-\u0E4E\u0EB1\u0EB4-\u0EB9\u0EBB-\u0EBC\u0EC8-\u0ECD\u0F18-\u0F19]/,
            /[\u0F35\u0F37\u0F39\u0F3E\u0F3F\u0F71-\u0F84\u0F86-\u0F8B\u0F90-\u0F95\u0F97]/,
            /[\u0F99-\u0FAD\u0FB1-\u0FB7\u0FB9\u20D0-\u20DC\u20E1\u302A-\u302F\u3099]/,
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
            $._cdata_start,
            $.cdata,
            $._cdata_end
        ),

        _cdata_start: $ => '<![CDATA[',

        cdata: $ => /./,

        _cdata_end: $ => ']]>',

        /** Prolog **/

        prolog: $ => prec.right(choice(
            seq(
                $.xml_decl,
                optional($.misc),
            ),
            seq(
                $.xml_decl,
                optional($.misc),
                $.doctype_decl,
                optional($.misc)
            ),
            seq(
                optional($.misc),
                $.doctype_decl,
                optional($.misc)
            ),
        )),

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
            optional(/\s/),
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
            alias($._name,$.doctype),
            // $._name,
            optional(seq(/\s/, $.external_id)),
            optional(/\s/),
            optional(seq(
                '[',
                repeat(choice(
                    $._markup_decl,
                    $.pe_reference,
                    /\s/,
                )),
                ']',
                optional(/\s/),
            )),
            '>'
        ),

        _markup_decl: $ => choice(
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
            $._markup_decl,
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
            $._iso639_code,
            $._iana_code,
            $._user_code
        ),

        _iso639_code: $ => seq(
            choice(
                /[a-z]/,
                /[A-Z]/,
            ),
            choice(
                /[a-z]/,
                /[A-Z]/,
            ),
        ),

        _iana_code: $ => seq(
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

        _user_code: $ => seq(
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
                optional($._content),
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

        _content: $ => repeat1 ( choice (
            $.element,
            $.cdata_sect,
            alias($.char_data, $.text),
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
            alias($._name, $.attribute_name),
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
                        optional(/\s/),
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
            $._content
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
                    $._enc_name,
                    '"'
                ),
                seq(
                    "'",
                    $._enc_name,
                    "'"
                )
            )
        ),

        _enc_name: $ => seq(
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
