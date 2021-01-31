module.exports = grammar({
    name: 'xml',

    rules: {
        fragment: $ => seq(
            repeat($._node),
        ),

        _node: $ => choice(
            $.xmldecl,
            $.doctype,
            $.start_tag,
            $.end_tag,
            $.empty_elem_tag,
            $.comment,
            $.text,
            $.cd_sect,
            $.char_data,
            $.reference,
            $.processing_instructions,
        ),

        _version_info: $ => seq(
            'version',
            optional(/\s/),
            '=',
            optional(/\s/),
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

        encoding_decl: $ => seq(
            /\s/,
            'encoding',
            optional(/\s/),
            '=',
            optional(/\s/),
            choice(
                seq(
                    '"',
                    /[A-Za-z]/,
                    repeat( choice(
                        /[A-Za-z0-9._]/,
                        '-'
                    )),
                    '"'
                ),
                seq(
                    "'",
                    /[A-Za-z]/,
                    repeat( choice(
                        /[A-Za-z0-9._]/,
                        '-'
                    )),
                    "'"
                )
            )
        ),

        standalone_decl: $ => seq(
            /\s/,
            'standalone',
            optional(/\s/),
            '=',
            optional(/\s/),
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

        xmldecl: $ => seq (
            '<?xml',
            /\s/,
            $._version_info,
            optional($.encoding_decl),
            optional($.standalone_decl),
            optional(/\s/),
            '?>'
        ),

        external_id: $ => choice (
            seq(
                'SYSTEM',
                /\s/,
                choice(
                    seq(
                        '"',
                        /[^"]*/,
                        '"'
                    ),
                    seq(
                        "'",
                        /[^']*/,
                        "'"
                    ),
                )
            ),
            seq(
                'PUBLIC',
                /\s/,
                // TODO: PubidLiteral
                /\s/,
                choice(
                    seq(
                        '"',
                        /[^"]*/,
                        '"'
                    ),
                    seq(
                        "'",
                        /[^']*/,
                        "'"
                    ),
                )
            )
        ),

        doctype: $ => seq (
            '<!DOCTYPE',
            /\s/,
            alias($._name,$.doctype_name),
            /\s/,
            optional($.external_id),
            optional(/\s/),
            optional(seq(
                '[',
                repeat(seq(
                    choice(
                        seq(
                            '<!ELEMENT',
                            /\s/,
                            alias($._name, $.element_name),
                            /\s/,
                            choice(
                                'EMPTY',
                                'ANY',
                                // TODO: Mixed | children
                            ),
                            optional(/\s/),
                            '/>'
                        ),
                        seq(
                            '<!ATTLIST',
                            /\s/,
                            alias($._name, $.attlist_name),
                            repeat(seq(
                                /\s/,
                                alias($._name, $.attribute_name),
                                /\s/,
                                choice(
                                    'CDATA',
                                    choice(
                                        'ID',
                                        'IDREF',
                                        'IDREFS',
                                        'ENTITY',
                                        'ENTITIES',
                                        'NMTOKEN',
                                        'NMTOKENS'
                                    ),
                                    choice(
                                        seq(
                                            'NOTATION',
                                            /\s/,
                                            '(',
                                            optional(/\s/),
                                            alias($._name, $.notation_name),
                                            repeat(seq(
                                                optional(/\s/),
                                                '|',
                                                optional(/\s/),
                                                repeat1(
                                                    $._namechar
                                                )
                                            )),
                                            optional(/\s/),
                                            ')'
                                        )
                                    )
                                ),
                                /\s/,
                                choice(
                                    '#REQUIRED',
                                    '#IMPLIED',
                                    seq(
                                        optional(seq('#FIXED', /\s/)),
                                        $.attribute_value
                                    )
                                ),
                                '>'
                            ))
                        ),
                        seq(
                            '<!ENTITY',
                            /\s/,
                            choice(
                                seq(
                                    alias($._name, $.entity_name),
                                    /\s/,
                                    // TODO: EntityDef
                                ),
                                seq(
                                    '%',
                                    /\s/,
                                    alias($._name, $.entity_name),
                                    /\s/,
                                    //TODO: PEDef
                                )
                            ),
                            optional(/\s/),
                            '>'
                        )
                    ),
                    seq(
                        '<!NOTATION',
                        /\s/,
                        alias($._name, $.notation_name),
                        /\s/,
                        choice(
                            seq(
                                // TODO: ExternalID
                            ),
                            seq(
                                'PUBLIC',
                                /\s/,
                                // TODO: Finish PublicID
                            )
                        ),
                        '>'
                    ),
                    seq(
                        '%',
                        $._name,
                        ';'
                    ),
                    /\s/
                )),
                ']'
            )),
            // TODO: The rest of this
            '>'
        ),

        comment: $ => seq (
            '<!--',
            repeat(
                seq(
                    optional('-'),
                    /[^-]/, // XML specification excludes more stuff here but it's stuff that's not exactly likely to show up in a real document, not sure if I should try to be more specific here
                )
            ),
            '-->'
        ),

        char_data: $ => /[^<&]* - ([^<&]* ']]>' [^<&]*)/,
        text: $ => /[^<>]+/,
        reference: $ => seq (
            /[&%]/,
            $._name,
            ';'
        ),
        cd_sect: $ => seq(
            '<!CDATA[',
            /. - [.']]>'.]/,
            ']]>'
        ),

        processing_instructions: $ => seq (
            '<?',
            $._name,    // this should exclude [Xx][Mm][Ll] too but I can't figure out how to do that yet
            optional(seq(
                /\s/,
                /. - [.'?>'.]/
            )),
            '?>'
        ),

        content: $ => repeat1 ( choice (
            //TODO: element
            $.cd_sect,
            $.char_data,
            $.reference,
            $.processing_instructions,
            $.comment,
            $.text,
        )),

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

        end_tag: $ => seq ( // TODO: Make sure closing tag matches opening tag
            '</',
            alias($._name, $.tag_name),
            optional(/\s/),
            '>'
        ),

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

        attribute: $ => seq(
            alias($._name, $.attribute_name),
            optional(/\s/),
            '=',
            optional(/\s/),
            $.attribute_value
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

        _namechar: $ => choice (
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
                $._namechar
            )
        ),
    }
})
