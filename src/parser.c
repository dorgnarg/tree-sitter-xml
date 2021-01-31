#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 423
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 119
#define ALIAS_COUNT 7
#define TOKEN_COUNT 84
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 19

enum {
  aux_sym__name_char_token1 = 1,
  aux_sym__name_char_token2 = 2,
  anon_sym_DOT = 3,
  anon_sym_DASH = 4,
  anon_sym__ = 5,
  anon_sym_COLON = 6,
  aux_sym_names_token1 = 7,
  anon_sym_DQUOTE = 8,
  aux_sym_entity_value_token1 = 9,
  anon_sym_SQUOTE = 10,
  aux_sym_system_literal_token1 = 11,
  sym_pubid_char = 12,
  sym_char_data = 13,
  sym_text = 14,
  anon_sym_LT_BANG_DASH_DASH = 15,
  aux_sym_comment_token1 = 16,
  anon_sym_DASH_DASH_GT = 17,
  anon_sym_LT_QMARK = 18,
  aux_sym_processing_instructions_token1 = 19,
  anon_sym_QMARK_GT = 20,
  sym_cdata_start = 21,
  anon_sym_RBRACK_RBRACK_GT = 22,
  anon_sym_LT_QMARKxml = 23,
  anon_sym_version = 24,
  anon_sym_1_DOT = 25,
  aux_sym_version_info_token1 = 26,
  anon_sym_EQ = 27,
  aux_sym_version_num_token1 = 28,
  anon_sym_LT_BANGDOCTYPE = 29,
  anon_sym_LBRACK = 30,
  anon_sym_LT_BANGELEMENT = 31,
  anon_sym_EMPTY = 32,
  anon_sym_ANY = 33,
  anon_sym_SLASH_GT = 34,
  anon_sym_LT_BANGATTLIST = 35,
  anon_sym_CDATA = 36,
  anon_sym_ID = 37,
  anon_sym_IDREF = 38,
  anon_sym_IDREFS = 39,
  anon_sym_ENTITY = 40,
  anon_sym_ENTITIES = 41,
  anon_sym_NMTOKEN = 42,
  anon_sym_NMTOKENS = 43,
  anon_sym_NOTATION = 44,
  anon_sym_LPAREN = 45,
  anon_sym_PIPE = 46,
  anon_sym_RPAREN = 47,
  anon_sym_POUNDREQUIRED = 48,
  anon_sym_POUNDIMPLIED = 49,
  anon_sym_POUNDFIXED = 50,
  anon_sym_GT = 51,
  anon_sym_LT_BANGENTITY = 52,
  anon_sym_PERCENT = 53,
  anon_sym_LT_BANGNOTATION = 54,
  anon_sym_PUBLIC = 55,
  anon_sym_SEMI = 56,
  anon_sym_RBRACK = 57,
  anon_sym_standalone = 58,
  anon_sym_yes = 59,
  anon_sym_no = 60,
  aux_sym_iso639_code_token1 = 61,
  aux_sym_iso639_code_token2 = 62,
  anon_sym_i = 63,
  anon_sym_I = 64,
  anon_sym_x = 65,
  anon_sym_X = 66,
  anon_sym_LT = 67,
  anon_sym_LT_SLASH = 68,
  anon_sym_QMARK = 69,
  anon_sym_STAR = 70,
  anon_sym_PLUS = 71,
  anon_sym_COMMA = 72,
  anon_sym_LT_BANG_LBRACK = 73,
  anon_sym_AMP_POUND = 74,
  anon_sym_AMP_POUNDx = 75,
  aux_sym_char_ref_token1 = 76,
  anon_sym_AMP = 77,
  anon_sym_SYSTEM = 78,
  anon_sym_encoding = 79,
  aux_sym_enc_name_token1 = 80,
  aux_sym_enc_name_token2 = 81,
  anon_sym_LT_BANGCDATA_LBRACK = 82,
  aux_sym_cd_sect_token1 = 83,
  sym_fragment = 84,
  sym__node = 85,
  sym__name_char = 86,
  sym__name = 87,
  sym_attribute_value = 88,
  sym_system_literal = 89,
  sym_pubid_literal = 90,
  sym_comment = 91,
  sym_processing_instructions = 92,
  sym_pi_target = 93,
  sym_xml_decl = 94,
  sym_version_info = 95,
  sym__eq = 96,
  sym_doctype_decl = 97,
  sym_standalone_decl = 98,
  sym_start_tag = 99,
  sym_attribute = 100,
  sym_end_tag = 101,
  sym_empty_elem_tag = 102,
  sym_char_ref = 103,
  sym_reference = 104,
  sym_external_id = 105,
  sym_encoding_decl = 106,
  sym_enc_name = 107,
  sym_cd_sect = 108,
  aux_sym_fragment_repeat1 = 109,
  aux_sym__name_repeat1 = 110,
  aux_sym_attribute_value_repeat1 = 111,
  aux_sym_pubid_literal_repeat1 = 112,
  aux_sym_comment_repeat1 = 113,
  aux_sym_doctype_decl_repeat1 = 114,
  aux_sym_doctype_decl_repeat2 = 115,
  aux_sym_doctype_decl_repeat3 = 116,
  aux_sym_start_tag_repeat1 = 117,
  aux_sym_enc_name_repeat1 = 118,
  alias_sym_attlist_name = 119,
  alias_sym_attribute_name = 120,
  alias_sym_doctype = 121,
  alias_sym_element_name = 122,
  alias_sym_entity_name = 123,
  alias_sym_notation_name = 124,
  alias_sym_tag_name = 125,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__name_char_token1] = "_name_char_token1",
  [aux_sym__name_char_token2] = "_name_char_token2",
  [anon_sym_DOT] = ".",
  [anon_sym_DASH] = "-",
  [anon_sym__] = "_",
  [anon_sym_COLON] = ":",
  [aux_sym_names_token1] = "names_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_entity_value_token1] = "entity_value_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_system_literal_token1] = "system_literal_token1",
  [sym_pubid_char] = "pubid_char",
  [sym_char_data] = "char_data",
  [sym_text] = "text",
  [anon_sym_LT_BANG_DASH_DASH] = "<!--",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_DASH_DASH_GT] = "-->",
  [anon_sym_LT_QMARK] = "<\?",
  [aux_sym_processing_instructions_token1] = "processing_instructions_token1",
  [anon_sym_QMARK_GT] = "\?>",
  [sym_cdata_start] = "cdata_start",
  [anon_sym_RBRACK_RBRACK_GT] = "]]>",
  [anon_sym_LT_QMARKxml] = "<\?xml",
  [anon_sym_version] = "version",
  [anon_sym_1_DOT] = "1.",
  [aux_sym_version_info_token1] = "version_info_token1",
  [anon_sym_EQ] = "=",
  [aux_sym_version_num_token1] = "version_num_token1",
  [anon_sym_LT_BANGDOCTYPE] = "<!DOCTYPE",
  [anon_sym_LBRACK] = "[",
  [anon_sym_LT_BANGELEMENT] = "<!ELEMENT",
  [anon_sym_EMPTY] = "EMPTY",
  [anon_sym_ANY] = "ANY",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_BANGATTLIST] = "<!ATTLIST",
  [anon_sym_CDATA] = "CDATA",
  [anon_sym_ID] = "ID",
  [anon_sym_IDREF] = "IDREF",
  [anon_sym_IDREFS] = "IDREFS",
  [anon_sym_ENTITY] = "ENTITY",
  [anon_sym_ENTITIES] = "ENTITIES",
  [anon_sym_NMTOKEN] = "NMTOKEN",
  [anon_sym_NMTOKENS] = "NMTOKENS",
  [anon_sym_NOTATION] = "NOTATION",
  [anon_sym_LPAREN] = "(",
  [anon_sym_PIPE] = "|",
  [anon_sym_RPAREN] = ")",
  [anon_sym_POUNDREQUIRED] = "#REQUIRED",
  [anon_sym_POUNDIMPLIED] = "#IMPLIED",
  [anon_sym_POUNDFIXED] = "#FIXED",
  [anon_sym_GT] = ">",
  [anon_sym_LT_BANGENTITY] = "<!ENTITY",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LT_BANGNOTATION] = "<!NOTATION",
  [anon_sym_PUBLIC] = "PUBLIC",
  [anon_sym_SEMI] = ";",
  [anon_sym_RBRACK] = "]",
  [anon_sym_standalone] = "standalone",
  [anon_sym_yes] = "yes",
  [anon_sym_no] = "no",
  [aux_sym_iso639_code_token1] = "iso639_code_token1",
  [aux_sym_iso639_code_token2] = "iso639_code_token2",
  [anon_sym_i] = "i",
  [anon_sym_I] = "I",
  [anon_sym_x] = "x",
  [anon_sym_X] = "X",
  [anon_sym_LT] = "<",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_QMARK] = "\?",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_COMMA] = ",",
  [anon_sym_LT_BANG_LBRACK] = "<![",
  [anon_sym_AMP_POUND] = "&#",
  [anon_sym_AMP_POUNDx] = "&#x",
  [aux_sym_char_ref_token1] = "char_ref_token1",
  [anon_sym_AMP] = "&",
  [anon_sym_SYSTEM] = "SYSTEM",
  [anon_sym_encoding] = "encoding",
  [aux_sym_enc_name_token1] = "enc_name_token1",
  [aux_sym_enc_name_token2] = "enc_name_token2",
  [anon_sym_LT_BANGCDATA_LBRACK] = "<!CDATA[",
  [aux_sym_cd_sect_token1] = "cd_sect_token1",
  [sym_fragment] = "fragment",
  [sym__node] = "_node",
  [sym__name_char] = "_name_char",
  [sym__name] = "_name",
  [sym_attribute_value] = "attribute_value",
  [sym_system_literal] = "system_literal",
  [sym_pubid_literal] = "pubid_literal",
  [sym_comment] = "comment",
  [sym_processing_instructions] = "processing_instructions",
  [sym_pi_target] = "pi_target",
  [sym_xml_decl] = "xml_decl",
  [sym_version_info] = "version_info",
  [sym__eq] = "_eq",
  [sym_doctype_decl] = "doctype_decl",
  [sym_standalone_decl] = "standalone_decl",
  [sym_start_tag] = "start_tag",
  [sym_attribute] = "attribute",
  [sym_end_tag] = "end_tag",
  [sym_empty_elem_tag] = "empty_elem_tag",
  [sym_char_ref] = "char_ref",
  [sym_reference] = "reference",
  [sym_external_id] = "external_id",
  [sym_encoding_decl] = "encoding_decl",
  [sym_enc_name] = "enc_name",
  [sym_cd_sect] = "cd_sect",
  [aux_sym_fragment_repeat1] = "fragment_repeat1",
  [aux_sym__name_repeat1] = "_name_repeat1",
  [aux_sym_attribute_value_repeat1] = "attribute_value_repeat1",
  [aux_sym_pubid_literal_repeat1] = "pubid_literal_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym_doctype_decl_repeat1] = "doctype_decl_repeat1",
  [aux_sym_doctype_decl_repeat2] = "doctype_decl_repeat2",
  [aux_sym_doctype_decl_repeat3] = "doctype_decl_repeat3",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [aux_sym_enc_name_repeat1] = "enc_name_repeat1",
  [alias_sym_attlist_name] = "attlist_name",
  [alias_sym_attribute_name] = "attribute_name",
  [alias_sym_doctype] = "doctype",
  [alias_sym_element_name] = "element_name",
  [alias_sym_entity_name] = "entity_name",
  [alias_sym_notation_name] = "notation_name",
  [alias_sym_tag_name] = "tag_name",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__name_char_token1] = aux_sym__name_char_token1,
  [aux_sym__name_char_token2] = aux_sym__name_char_token2,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym__] = anon_sym__,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_names_token1] = aux_sym_names_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_entity_value_token1] = aux_sym_entity_value_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_system_literal_token1] = aux_sym_system_literal_token1,
  [sym_pubid_char] = sym_pubid_char,
  [sym_char_data] = sym_char_data,
  [sym_text] = sym_text,
  [anon_sym_LT_BANG_DASH_DASH] = anon_sym_LT_BANG_DASH_DASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_DASH_DASH_GT] = anon_sym_DASH_DASH_GT,
  [anon_sym_LT_QMARK] = anon_sym_LT_QMARK,
  [aux_sym_processing_instructions_token1] = aux_sym_processing_instructions_token1,
  [anon_sym_QMARK_GT] = anon_sym_QMARK_GT,
  [sym_cdata_start] = sym_cdata_start,
  [anon_sym_RBRACK_RBRACK_GT] = anon_sym_RBRACK_RBRACK_GT,
  [anon_sym_LT_QMARKxml] = anon_sym_LT_QMARKxml,
  [anon_sym_version] = anon_sym_version,
  [anon_sym_1_DOT] = anon_sym_1_DOT,
  [aux_sym_version_info_token1] = aux_sym_version_info_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_version_num_token1] = aux_sym_version_num_token1,
  [anon_sym_LT_BANGDOCTYPE] = anon_sym_LT_BANGDOCTYPE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_LT_BANGELEMENT] = anon_sym_LT_BANGELEMENT,
  [anon_sym_EMPTY] = anon_sym_EMPTY,
  [anon_sym_ANY] = anon_sym_ANY,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LT_BANGATTLIST] = anon_sym_LT_BANGATTLIST,
  [anon_sym_CDATA] = anon_sym_CDATA,
  [anon_sym_ID] = anon_sym_ID,
  [anon_sym_IDREF] = anon_sym_IDREF,
  [anon_sym_IDREFS] = anon_sym_IDREFS,
  [anon_sym_ENTITY] = anon_sym_ENTITY,
  [anon_sym_ENTITIES] = anon_sym_ENTITIES,
  [anon_sym_NMTOKEN] = anon_sym_NMTOKEN,
  [anon_sym_NMTOKENS] = anon_sym_NMTOKENS,
  [anon_sym_NOTATION] = anon_sym_NOTATION,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_POUNDREQUIRED] = anon_sym_POUNDREQUIRED,
  [anon_sym_POUNDIMPLIED] = anon_sym_POUNDIMPLIED,
  [anon_sym_POUNDFIXED] = anon_sym_POUNDFIXED,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_BANGENTITY] = anon_sym_LT_BANGENTITY,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_LT_BANGNOTATION] = anon_sym_LT_BANGNOTATION,
  [anon_sym_PUBLIC] = anon_sym_PUBLIC,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_standalone] = anon_sym_standalone,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_no] = anon_sym_no,
  [aux_sym_iso639_code_token1] = aux_sym_iso639_code_token1,
  [aux_sym_iso639_code_token2] = aux_sym_iso639_code_token2,
  [anon_sym_i] = anon_sym_i,
  [anon_sym_I] = anon_sym_I,
  [anon_sym_x] = anon_sym_x,
  [anon_sym_X] = anon_sym_X,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LT_BANG_LBRACK] = anon_sym_LT_BANG_LBRACK,
  [anon_sym_AMP_POUND] = anon_sym_AMP_POUND,
  [anon_sym_AMP_POUNDx] = anon_sym_AMP_POUNDx,
  [aux_sym_char_ref_token1] = aux_sym_char_ref_token1,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_SYSTEM] = anon_sym_SYSTEM,
  [anon_sym_encoding] = anon_sym_encoding,
  [aux_sym_enc_name_token1] = aux_sym_enc_name_token1,
  [aux_sym_enc_name_token2] = aux_sym_enc_name_token2,
  [anon_sym_LT_BANGCDATA_LBRACK] = anon_sym_LT_BANGCDATA_LBRACK,
  [aux_sym_cd_sect_token1] = aux_sym_cd_sect_token1,
  [sym_fragment] = sym_fragment,
  [sym__node] = sym__node,
  [sym__name_char] = sym__name_char,
  [sym__name] = sym__name,
  [sym_attribute_value] = sym_attribute_value,
  [sym_system_literal] = sym_system_literal,
  [sym_pubid_literal] = sym_pubid_literal,
  [sym_comment] = sym_comment,
  [sym_processing_instructions] = sym_processing_instructions,
  [sym_pi_target] = sym_pi_target,
  [sym_xml_decl] = sym_xml_decl,
  [sym_version_info] = sym_version_info,
  [sym__eq] = sym__eq,
  [sym_doctype_decl] = sym_doctype_decl,
  [sym_standalone_decl] = sym_standalone_decl,
  [sym_start_tag] = sym_start_tag,
  [sym_attribute] = sym_attribute,
  [sym_end_tag] = sym_end_tag,
  [sym_empty_elem_tag] = sym_empty_elem_tag,
  [sym_char_ref] = sym_char_ref,
  [sym_reference] = sym_reference,
  [sym_external_id] = sym_external_id,
  [sym_encoding_decl] = sym_encoding_decl,
  [sym_enc_name] = sym_enc_name,
  [sym_cd_sect] = sym_cd_sect,
  [aux_sym_fragment_repeat1] = aux_sym_fragment_repeat1,
  [aux_sym__name_repeat1] = aux_sym__name_repeat1,
  [aux_sym_attribute_value_repeat1] = aux_sym_attribute_value_repeat1,
  [aux_sym_pubid_literal_repeat1] = aux_sym_pubid_literal_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [aux_sym_doctype_decl_repeat1] = aux_sym_doctype_decl_repeat1,
  [aux_sym_doctype_decl_repeat2] = aux_sym_doctype_decl_repeat2,
  [aux_sym_doctype_decl_repeat3] = aux_sym_doctype_decl_repeat3,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
  [aux_sym_enc_name_repeat1] = aux_sym_enc_name_repeat1,
  [alias_sym_attlist_name] = alias_sym_attlist_name,
  [alias_sym_attribute_name] = alias_sym_attribute_name,
  [alias_sym_doctype] = alias_sym_doctype,
  [alias_sym_element_name] = alias_sym_element_name,
  [alias_sym_entity_name] = alias_sym_entity_name,
  [alias_sym_notation_name] = alias_sym_notation_name,
  [alias_sym_tag_name] = alias_sym_tag_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__name_char_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__name_char_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_names_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_entity_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_system_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_pubid_char] = {
    .visible = true,
    .named = true,
  },
  [sym_char_data] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_BANG_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_QMARK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_processing_instructions_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_QMARK_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_cdata_start] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACK_RBRACK_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_QMARKxml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_version_info_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_version_num_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_BANGDOCTYPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_BANGELEMENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EMPTY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ANY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_BANGATTLIST] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CDATA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ID] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IDREF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IDREFS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ENTITY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ENTITIES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NMTOKEN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NMTOKENS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOTATION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDREQUIRED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDIMPLIED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDFIXED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_BANGENTITY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_BANGNOTATION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PUBLIC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_standalone] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_iso639_code_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_iso639_code_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_i] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_I] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_X] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_BANG_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_POUNDx] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_ref_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SYSTEM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_encoding] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_enc_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enc_name_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_BANGCDATA_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_cd_sect_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym__name_char] = {
    .visible = false,
    .named = true,
  },
  [sym__name] = {
    .visible = false,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_system_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_pubid_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_processing_instructions] = {
    .visible = true,
    .named = true,
  },
  [sym_pi_target] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_version_info] = {
    .visible = true,
    .named = true,
  },
  [sym__eq] = {
    .visible = false,
    .named = true,
  },
  [sym_doctype_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_standalone_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_empty_elem_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_char_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_external_id] = {
    .visible = true,
    .named = true,
  },
  [sym_encoding_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_enc_name] = {
    .visible = true,
    .named = true,
  },
  [sym_cd_sect] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pubid_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_doctype_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_doctype_decl_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_doctype_decl_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enc_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_attlist_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_doctype] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_element_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_entity_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_notation_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_tag_name] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[15][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_tag_name,
  },
  [2] = {
    [2] = alias_sym_doctype,
  },
  [3] = {
    [0] = alias_sym_attribute_name,
  },
  [4] = {
    [1] = alias_sym_attribute_name,
  },
  [5] = {
    [2] = alias_sym_attlist_name,
    [5] = alias_sym_notation_name,
  },
  [6] = {
    [2] = alias_sym_attlist_name,
    [6] = alias_sym_notation_name,
  },
  [7] = {
    [1] = alias_sym_attribute_name,
    [6] = alias_sym_notation_name,
  },
  [8] = {
    [2] = alias_sym_entity_name,
    [7] = alias_sym_notation_name,
  },
  [9] = {
    [2] = alias_sym_element_name,
    [8] = alias_sym_notation_name,
  },
  [10] = {
    [1] = alias_sym_attribute_name,
    [7] = alias_sym_notation_name,
  },
  [11] = {
    [2] = alias_sym_entity_name,
    [8] = alias_sym_notation_name,
  },
  [12] = {
    [2] = alias_sym_element_name,
    [9] = alias_sym_notation_name,
  },
  [13] = {
    [4] = alias_sym_entity_name,
    [9] = alias_sym_notation_name,
  },
  [14] = {
    [4] = alias_sym_entity_name,
    [10] = alias_sym_notation_name,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  sym__name, 8,
    sym__name,
    alias_sym_attlist_name,
    alias_sym_attribute_name,
    alias_sym_doctype,
    alias_sym_element_name,
    alias_sym_entity_name,
    alias_sym_notation_name,
    alias_sym_tag_name,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(174);
      if (lookahead == '"') ADVANCE(187);
      if (lookahead == '%') ADVANCE(246);
      if (lookahead == '&') ADVANCE(271);
      if (lookahead == '\'') ADVANCE(189);
      if (lookahead == '(') ADVANCE(238);
      if (lookahead == ')') ADVANCE(240);
      if (lookahead == '*') ADVANCE(262);
      if (lookahead == '+') ADVANCE(263);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '-') ADVANCE(177);
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == ':') ADVANCE(180);
      if (lookahead == ';') ADVANCE(249);
      if (lookahead == '<') ADVANCE(258);
      if (lookahead == '=') ADVANCE(221);
      if (lookahead == '>') ADVANCE(244);
      if (lookahead == '?') ADVANCE(261);
      if (lookahead == 'I') ADVANCE(255);
      if (lookahead == 'X') ADVANCE(257);
      if (lookahead == '[') ADVANCE(223);
      if (lookahead == ']') ADVANCE(250);
      if (lookahead == '_') ADVANCE(179);
      if (lookahead == 'i') ADVANCE(254);
      if (lookahead == 'x') ADVANCE(256);
      if (lookahead == '|') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (lookahead != 0) ADVANCE(188);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(181);
      if (lookahead == '"') ADVANCE(187);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(181);
      if (('!' <= lookahead && lookahead <= '%') ||
          ('(' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(181);
      if (lookahead == '\'') ADVANCE(189);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(181);
      if (('!' <= lookahead && lookahead <= '%') ||
          ('(' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(184);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(185);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '>') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == ']') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == ']') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(169);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(171);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<') ADVANCE(6);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 20:
      if (lookahead == '!') ADVANCE(40);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(187);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '%') ADVANCE(246);
      if (lookahead == '\'') ADVANCE(189);
      if (lookahead == '(') ADVANCE(238);
      if (lookahead == ')') ADVANCE(240);
      if (lookahead == '-') ADVANCE(177);
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(180);
      if (lookahead == ';') ADVANCE(249);
      if (lookahead == '<') ADVANCE(20);
      if (lookahead == '=') ADVANCE(221);
      if (lookahead == '>') ADVANCE(244);
      if (lookahead == '?') ADVANCE(36);
      if (lookahead == '[') ADVANCE(223);
      if (lookahead == ']') ADVANCE(250);
      if (lookahead == '_') ADVANCE(179);
      if (lookahead == '|') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(187);
      if (lookahead == '&') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(188);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(187);
      if (lookahead == '\'') ADVANCE(189);
      if (lookahead == '-') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 24:
      if (lookahead == '&') ADVANCE(271);
      if (lookahead == '\'') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '<') ADVANCE(188);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(172);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(116);
      if (lookahead == 'C') ADVANCE(52);
      if (lookahead == 'D') ADVANCE(97);
      if (lookahead == 'E') ADVANCE(83);
      if (lookahead == 'N') ADVANCE(100);
      if (lookahead == '[') ADVANCE(265);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'C') ADVANCE(52);
      if (lookahead == 'D') ADVANCE(97);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(209);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(181);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(15);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(16);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(219);
      END_STATE();
    case 33:
      if (lookahead == '1') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(244);
      if (lookahead == '?') ADVANCE(36);
      if (lookahead == 'A') ADVANCE(95);
      if (lookahead == 'C') ADVANCE(58);
      if (lookahead == 'E') ADVANCE(90);
      if (lookahead == 'I') ADVANCE(56);
      if (lookahead == 'N') ADVANCE(91);
      if (lookahead == 'P') ADVANCE(129);
      if (lookahead == 'S') ADVANCE(136);
      if (lookahead == '[') ADVANCE(223);
      if (lookahead == ']') ADVANCE(140);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == 's') ADVANCE(168);
      if (lookahead == 'v') ADVANCE(147);
      if (lookahead == 'y') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(227);
      END_STATE();
    case 36:
      if (lookahead == '>') ADVANCE(214);
      END_STATE();
    case 37:
      if (lookahead == '>') ADVANCE(216);
      END_STATE();
    case 38:
      if (lookahead == '>') ADVANCE(211);
      END_STATE();
    case 39:
      if (lookahead == '>') ADVANCE(25);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(116);
      if (lookahead == 'E') ADVANCE(83);
      if (lookahead == 'N') ADVANCE(100);
      END_STATE();
    case 41:
      if (lookahead == 'A') ADVANCE(137);
      END_STATE();
    case 42:
      if (lookahead == 'A') ADVANCE(229);
      END_STATE();
    case 43:
      if (lookahead == 'A') ADVANCE(138);
      END_STATE();
    case 44:
      if (lookahead == 'A') ADVANCE(117);
      END_STATE();
    case 45:
      if (lookahead == 'A') ADVANCE(120);
      END_STATE();
    case 46:
      if (lookahead == 'A') ADVANCE(119);
      END_STATE();
    case 47:
      if (lookahead == 'A') ADVANCE(122);
      END_STATE();
    case 48:
      if (lookahead == 'A') ADVANCE(124);
      END_STATE();
    case 49:
      if (lookahead == 'B') ADVANCE(86);
      END_STATE();
    case 50:
      if (lookahead == 'C') ADVANCE(248);
      END_STATE();
    case 51:
      if (lookahead == 'C') ADVANCE(112);
      END_STATE();
    case 52:
      if (lookahead == 'D') ADVANCE(44);
      END_STATE();
    case 53:
      if (lookahead == 'D') ADVANCE(243);
      END_STATE();
    case 54:
      if (lookahead == 'D') ADVANCE(242);
      END_STATE();
    case 55:
      if (lookahead == 'D') ADVANCE(241);
      END_STATE();
    case 56:
      if (lookahead == 'D') ADVANCE(230);
      END_STATE();
    case 57:
      if (lookahead == 'D') ADVANCE(46);
      END_STATE();
    case 58:
      if (lookahead == 'D') ADVANCE(47);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(88);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(96);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(222);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(105);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(70);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(53);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(107);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(54);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(87);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(55);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(93);
      END_STATE();
    case 70:
      if (lookahead == 'F') ADVANCE(231);
      END_STATE();
    case 71:
      if (lookahead == 'F') ADVANCE(73);
      if (lookahead == 'I') ADVANCE(89);
      if (lookahead == 'R') ADVANCE(62);
      END_STATE();
    case 72:
      if (lookahead == 'I') ADVANCE(108);
      END_STATE();
    case 73:
      if (lookahead == 'I') ADVANCE(131);
      END_STATE();
    case 74:
      if (lookahead == 'I') ADVANCE(106);
      END_STATE();
    case 75:
      if (lookahead == 'I') ADVANCE(50);
      END_STATE();
    case 76:
      if (lookahead == 'I') ADVANCE(99);
      END_STATE();
    case 77:
      if (lookahead == 'I') ADVANCE(101);
      END_STATE();
    case 78:
      if (lookahead == 'I') ADVANCE(66);
      END_STATE();
    case 79:
      if (lookahead == 'I') ADVANCE(118);
      END_STATE();
    case 80:
      if (lookahead == 'I') ADVANCE(65);
      if (lookahead == 'Y') ADVANCE(233);
      END_STATE();
    case 81:
      if (lookahead == 'I') ADVANCE(115);
      END_STATE();
    case 82:
      if (lookahead == 'K') ADVANCE(69);
      END_STATE();
    case 83:
      if (lookahead == 'L') ADVANCE(59);
      if (lookahead == 'N') ADVANCE(111);
      END_STATE();
    case 84:
      if (lookahead == 'L') ADVANCE(72);
      END_STATE();
    case 85:
      if (lookahead == 'L') ADVANCE(78);
      END_STATE();
    case 86:
      if (lookahead == 'L') ADVANCE(75);
      END_STATE();
    case 87:
      if (lookahead == 'M') ADVANCE(273);
      END_STATE();
    case 88:
      if (lookahead == 'M') ADVANCE(60);
      END_STATE();
    case 89:
      if (lookahead == 'M') ADVANCE(104);
      END_STATE();
    case 90:
      if (lookahead == 'M') ADVANCE(103);
      if (lookahead == 'N') ADVANCE(127);
      END_STATE();
    case 91:
      if (lookahead == 'M') ADVANCE(121);
      if (lookahead == 'O') ADVANCE(128);
      END_STATE();
    case 92:
      if (lookahead == 'N') ADVANCE(247);
      END_STATE();
    case 93:
      if (lookahead == 'N') ADVANCE(235);
      END_STATE();
    case 94:
      if (lookahead == 'N') ADVANCE(237);
      END_STATE();
    case 95:
      if (lookahead == 'N') ADVANCE(134);
      END_STATE();
    case 96:
      if (lookahead == 'N') ADVANCE(114);
      END_STATE();
    case 97:
      if (lookahead == 'O') ADVANCE(51);
      END_STATE();
    case 98:
      if (lookahead == 'O') ADVANCE(82);
      END_STATE();
    case 99:
      if (lookahead == 'O') ADVANCE(92);
      END_STATE();
    case 100:
      if (lookahead == 'O') ADVANCE(125);
      END_STATE();
    case 101:
      if (lookahead == 'O') ADVANCE(94);
      END_STATE();
    case 102:
      if (lookahead == 'P') ADVANCE(61);
      END_STATE();
    case 103:
      if (lookahead == 'P') ADVANCE(123);
      END_STATE();
    case 104:
      if (lookahead == 'P') ADVANCE(85);
      END_STATE();
    case 105:
      if (lookahead == 'Q') ADVANCE(130);
      END_STATE();
    case 106:
      if (lookahead == 'R') ADVANCE(68);
      END_STATE();
    case 107:
      if (lookahead == 'S') ADVANCE(234);
      END_STATE();
    case 108:
      if (lookahead == 'S') ADVANCE(113);
      END_STATE();
    case 109:
      if (lookahead == 'S') ADVANCE(126);
      END_STATE();
    case 110:
      if (lookahead == 'T') ADVANCE(84);
      END_STATE();
    case 111:
      if (lookahead == 'T') ADVANCE(79);
      END_STATE();
    case 112:
      if (lookahead == 'T') ADVANCE(132);
      END_STATE();
    case 113:
      if (lookahead == 'T') ADVANCE(228);
      END_STATE();
    case 114:
      if (lookahead == 'T') ADVANCE(224);
      END_STATE();
    case 115:
      if (lookahead == 'T') ADVANCE(80);
      END_STATE();
    case 116:
      if (lookahead == 'T') ADVANCE(110);
      END_STATE();
    case 117:
      if (lookahead == 'T') ADVANCE(41);
      END_STATE();
    case 118:
      if (lookahead == 'T') ADVANCE(133);
      END_STATE();
    case 119:
      if (lookahead == 'T') ADVANCE(43);
      END_STATE();
    case 120:
      if (lookahead == 'T') ADVANCE(76);
      END_STATE();
    case 121:
      if (lookahead == 'T') ADVANCE(98);
      END_STATE();
    case 122:
      if (lookahead == 'T') ADVANCE(42);
      END_STATE();
    case 123:
      if (lookahead == 'T') ADVANCE(135);
      END_STATE();
    case 124:
      if (lookahead == 'T') ADVANCE(77);
      END_STATE();
    case 125:
      if (lookahead == 'T') ADVANCE(45);
      END_STATE();
    case 126:
      if (lookahead == 'T') ADVANCE(67);
      END_STATE();
    case 127:
      if (lookahead == 'T') ADVANCE(81);
      END_STATE();
    case 128:
      if (lookahead == 'T') ADVANCE(48);
      END_STATE();
    case 129:
      if (lookahead == 'U') ADVANCE(49);
      END_STATE();
    case 130:
      if (lookahead == 'U') ADVANCE(74);
      END_STATE();
    case 131:
      if (lookahead == 'X') ADVANCE(64);
      END_STATE();
    case 132:
      if (lookahead == 'Y') ADVANCE(102);
      END_STATE();
    case 133:
      if (lookahead == 'Y') ADVANCE(245);
      END_STATE();
    case 134:
      if (lookahead == 'Y') ADVANCE(226);
      END_STATE();
    case 135:
      if (lookahead == 'Y') ADVANCE(225);
      END_STATE();
    case 136:
      if (lookahead == 'Y') ADVANCE(109);
      END_STATE();
    case 137:
      if (lookahead == '[') ADVANCE(277);
      END_STATE();
    case 138:
      if (lookahead == '[') ADVANCE(215);
      END_STATE();
    case 139:
      if (lookahead == ']') ADVANCE(278);
      END_STATE();
    case 140:
      if (lookahead == ']') ADVANCE(37);
      END_STATE();
    case 141:
      if (lookahead == ']') ADVANCE(39);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 145:
      if (lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 146:
      if (lookahead == 'd') ADVANCE(151);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 150:
      if (lookahead == 'g') ADVANCE(274);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(217);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 155:
      if (lookahead == 'm') ADVANCE(153);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 166:
      if (lookahead == 's') ADVANCE(252);
      END_STATE();
    case 167:
      if (lookahead == 's') ADVANCE(152);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 169:
      if (lookahead == '\'' ||
          lookahead == '.') ADVANCE(141);
      END_STATE();
    case 170:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(270);
      END_STATE();
    case 171:
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '>' ||
          lookahead == '?') ADVANCE(213);
      END_STATE();
    case 172:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 173:
      if (eof) ADVANCE(174);
      if (lookahead == ' ') ADVANCE(182);
      if (lookahead == '&') ADVANCE(272);
      if (lookahead == '<') ADVANCE(259);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(183);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__name_char_token1);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(38);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_names_token1);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_names_token1);
      if (lookahead == ' ') ADVANCE(199);
      if (lookahead == '&') ADVANCE(208);
      if (lookahead == '-') ADVANCE(207);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(200);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_names_token1);
      if (lookahead == ' ') ADVANCE(199);
      if (lookahead == '&') ADVANCE(208);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(200);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_names_token1);
      if (lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_names_token1);
      if (lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_names_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(191);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_entity_value_token1);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_system_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_system_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_pubid_char);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_char_data);
      if (lookahead == ' ') ADVANCE(193);
      if (lookahead == '\'') ADVANCE(197);
      if (lookahead == '-') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<') ADVANCE(198);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_char_data);
      if (lookahead == ' ') ADVANCE(193);
      if (lookahead == '\'') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<') ADVANCE(198);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_char_data);
      if (lookahead == ' ') ADVANCE(193);
      if (lookahead == '>') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<') ADVANCE(198);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_char_data);
      if (lookahead == ' ') ADVANCE(193);
      if (lookahead == ']') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<') ADVANCE(198);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_char_data);
      if (lookahead == ' ') ADVANCE(193);
      if (lookahead == ']') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<') ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_char_data);
      if (lookahead == ' ') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<') ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ') ADVANCE(199);
      if (lookahead == '&') ADVANCE(208);
      if (lookahead == '-') ADVANCE(207);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ') ADVANCE(199);
      if (lookahead == '&') ADVANCE(208);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ') ADVANCE(201);
      if (lookahead == '&') ADVANCE(208);
      if (lookahead == '\'') ADVANCE(204);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '>') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(206);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ') ADVANCE(201);
      if (lookahead == '&') ADVANCE(208);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '>') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(206);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ') ADVANCE(201);
      if (lookahead == '&') ADVANCE(208);
      if (lookahead == '>') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(206);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ') ADVANCE(201);
      if (lookahead == '&') ADVANCE(208);
      if (lookahead == '>') ADVANCE(13);
      if (lookahead == ']') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(206);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ') ADVANCE(201);
      if (lookahead == '&') ADVANCE(208);
      if (lookahead == '>') ADVANCE(13);
      if (lookahead == ']') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ') ADVANCE(201);
      if (lookahead == '&') ADVANCE(208);
      if (lookahead == '>') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ') ADVANCE(202);
      if (lookahead == '&') ADVANCE(208);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(200);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_LT_BANG_DASH_DASH);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      if (lookahead == 'x') ADVANCE(155);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_processing_instructions_token1);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_cdata_start);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK_GT);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_LT_QMARKxml);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_1_DOT);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_version_info_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_LT_BANGDOCTYPE);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_LT_BANGELEMENT);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_EMPTY);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_ANY);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_LT_BANGATTLIST);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_CDATA);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_ID);
      if (lookahead == 'R') ADVANCE(63);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_IDREF);
      if (lookahead == 'S') ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_IDREFS);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_ENTITY);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_ENTITIES);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_NMTOKEN);
      if (lookahead == 'S') ADVANCE(236);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_NMTOKENS);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_NOTATION);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_POUNDREQUIRED);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_POUNDIMPLIED);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_POUNDFIXED);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_LT_BANGENTITY);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_LT_BANGNOTATION);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_PUBLIC);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_standalone);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_i);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '/') ADVANCE(260);
      if (lookahead == '?') ADVANCE(212);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '/') ADVANCE(260);
      if (lookahead == '?') ADVANCE(212);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_LT_BANG_LBRACK);
      if (lookahead == 'C') ADVANCE(57);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_AMP_POUND);
      if (lookahead == 'x') ADVANCE(268);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_AMP_POUND);
      if (lookahead == 'x') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(208);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(208);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_char_ref_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '#') ADVANCE(266);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '#') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(208);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_SYSTEM);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_encoding);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_enc_name_token1);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_enc_name_token2);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_LT_BANGCDATA_LBRACK);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_cd_sect_token1);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 173},
  [2] = {.lex_state = 173},
  [3] = {.lex_state = 173},
  [4] = {.lex_state = 21},
  [5] = {.lex_state = 21},
  [6] = {.lex_state = 21},
  [7] = {.lex_state = 173},
  [8] = {.lex_state = 173},
  [9] = {.lex_state = 173},
  [10] = {.lex_state = 173},
  [11] = {.lex_state = 173},
  [12] = {.lex_state = 173},
  [13] = {.lex_state = 173},
  [14] = {.lex_state = 173},
  [15] = {.lex_state = 173},
  [16] = {.lex_state = 173},
  [17] = {.lex_state = 173},
  [18] = {.lex_state = 173},
  [19] = {.lex_state = 173},
  [20] = {.lex_state = 173},
  [21] = {.lex_state = 173},
  [22] = {.lex_state = 173},
  [23] = {.lex_state = 173},
  [24] = {.lex_state = 173},
  [25] = {.lex_state = 173},
  [26] = {.lex_state = 173},
  [27] = {.lex_state = 173},
  [28] = {.lex_state = 173},
  [29] = {.lex_state = 173},
  [30] = {.lex_state = 173},
  [31] = {.lex_state = 173},
  [32] = {.lex_state = 173},
  [33] = {.lex_state = 21},
  [34] = {.lex_state = 21},
  [35] = {.lex_state = 21},
  [36] = {.lex_state = 34},
  [37] = {.lex_state = 21},
  [38] = {.lex_state = 21},
  [39] = {.lex_state = 21},
  [40] = {.lex_state = 21},
  [41] = {.lex_state = 22},
  [42] = {.lex_state = 22},
  [43] = {.lex_state = 24},
  [44] = {.lex_state = 24},
  [45] = {.lex_state = 24},
  [46] = {.lex_state = 21},
  [47] = {.lex_state = 22},
  [48] = {.lex_state = 22},
  [49] = {.lex_state = 21},
  [50] = {.lex_state = 24},
  [51] = {.lex_state = 21},
  [52] = {.lex_state = 22},
  [53] = {.lex_state = 24},
  [54] = {.lex_state = 21},
  [55] = {.lex_state = 21},
  [56] = {.lex_state = 21},
  [57] = {.lex_state = 21},
  [58] = {.lex_state = 21},
  [59] = {.lex_state = 21},
  [60] = {.lex_state = 21},
  [61] = {.lex_state = 21},
  [62] = {.lex_state = 21},
  [63] = {.lex_state = 23},
  [64] = {.lex_state = 21},
  [65] = {.lex_state = 22},
  [66] = {.lex_state = 21},
  [67] = {.lex_state = 21},
  [68] = {.lex_state = 21},
  [69] = {.lex_state = 23},
  [70] = {.lex_state = 21},
  [71] = {.lex_state = 22},
  [72] = {.lex_state = 34},
  [73] = {.lex_state = 21},
  [74] = {.lex_state = 21},
  [75] = {.lex_state = 23},
  [76] = {.lex_state = 21},
  [77] = {.lex_state = 24},
  [78] = {.lex_state = 21},
  [79] = {.lex_state = 24},
  [80] = {.lex_state = 24},
  [81] = {.lex_state = 21},
  [82] = {.lex_state = 22},
  [83] = {.lex_state = 21},
  [84] = {.lex_state = 21},
  [85] = {.lex_state = 21},
  [86] = {.lex_state = 21},
  [87] = {.lex_state = 21},
  [88] = {.lex_state = 21},
  [89] = {.lex_state = 21},
  [90] = {.lex_state = 21},
  [91] = {.lex_state = 21},
  [92] = {.lex_state = 21},
  [93] = {.lex_state = 21},
  [94] = {.lex_state = 21},
  [95] = {.lex_state = 21},
  [96] = {.lex_state = 21},
  [97] = {.lex_state = 21},
  [98] = {.lex_state = 21},
  [99] = {.lex_state = 21},
  [100] = {.lex_state = 21},
  [101] = {.lex_state = 21},
  [102] = {.lex_state = 21},
  [103] = {.lex_state = 21},
  [104] = {.lex_state = 21},
  [105] = {.lex_state = 21},
  [106] = {.lex_state = 29},
  [107] = {.lex_state = 21},
  [108] = {.lex_state = 21},
  [109] = {.lex_state = 21},
  [110] = {.lex_state = 21},
  [111] = {.lex_state = 21},
  [112] = {.lex_state = 29},
  [113] = {.lex_state = 21},
  [114] = {.lex_state = 21},
  [115] = {.lex_state = 21},
  [116] = {.lex_state = 21},
  [117] = {.lex_state = 21},
  [118] = {.lex_state = 21},
  [119] = {.lex_state = 21},
  [120] = {.lex_state = 21},
  [121] = {.lex_state = 21},
  [122] = {.lex_state = 21},
  [123] = {.lex_state = 21},
  [124] = {.lex_state = 21},
  [125] = {.lex_state = 21},
  [126] = {.lex_state = 21},
  [127] = {.lex_state = 21},
  [128] = {.lex_state = 21},
  [129] = {.lex_state = 21},
  [130] = {.lex_state = 29},
  [131] = {.lex_state = 21},
  [132] = {.lex_state = 21},
  [133] = {.lex_state = 21},
  [134] = {.lex_state = 21},
  [135] = {.lex_state = 21},
  [136] = {.lex_state = 21},
  [137] = {.lex_state = 21},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 21},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 21},
  [146] = {.lex_state = 34},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 21},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 21},
  [156] = {.lex_state = 21},
  [157] = {.lex_state = 21},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 21},
  [160] = {.lex_state = 21},
  [161] = {.lex_state = 21},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 29},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 33},
  [167] = {.lex_state = 34},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 34},
  [170] = {.lex_state = 21},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 21},
  [173] = {.lex_state = 21},
  [174] = {.lex_state = 34},
  [175] = {.lex_state = 21},
  [176] = {.lex_state = 21},
  [177] = {.lex_state = 21},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 21},
  [180] = {.lex_state = 34},
  [181] = {.lex_state = 21},
  [182] = {.lex_state = 33},
  [183] = {.lex_state = 21},
  [184] = {.lex_state = 21},
  [185] = {.lex_state = 21},
  [186] = {.lex_state = 33},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 34},
  [190] = {.lex_state = 34},
  [191] = {.lex_state = 21},
  [192] = {.lex_state = 33},
  [193] = {.lex_state = 21},
  [194] = {.lex_state = 21},
  [195] = {.lex_state = 34},
  [196] = {.lex_state = 21},
  [197] = {.lex_state = 21},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 34},
  [202] = {.lex_state = 34},
  [203] = {.lex_state = 21},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 34},
  [206] = {.lex_state = 21},
  [207] = {.lex_state = 34},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 21},
  [210] = {.lex_state = 21},
  [211] = {.lex_state = 33},
  [212] = {.lex_state = 34},
  [213] = {.lex_state = 34},
  [214] = {.lex_state = 21},
  [215] = {.lex_state = 33},
  [216] = {.lex_state = 21},
  [217] = {.lex_state = 21},
  [218] = {.lex_state = 170},
  [219] = {.lex_state = 21},
  [220] = {.lex_state = 21},
  [221] = {.lex_state = 34},
  [222] = {.lex_state = 21},
  [223] = {.lex_state = 34},
  [224] = {.lex_state = 170},
  [225] = {.lex_state = 34},
  [226] = {.lex_state = 21},
  [227] = {.lex_state = 21},
  [228] = {.lex_state = 21},
  [229] = {.lex_state = 21},
  [230] = {.lex_state = 170},
  [231] = {.lex_state = 21},
  [232] = {.lex_state = 3},
  [233] = {.lex_state = 21},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 29},
  [236] = {.lex_state = 21},
  [237] = {.lex_state = 21},
  [238] = {.lex_state = 21},
  [239] = {.lex_state = 21},
  [240] = {.lex_state = 21},
  [241] = {.lex_state = 21},
  [242] = {.lex_state = 21},
  [243] = {.lex_state = 21},
  [244] = {.lex_state = 21},
  [245] = {.lex_state = 21},
  [246] = {.lex_state = 21},
  [247] = {.lex_state = 21},
  [248] = {.lex_state = 21},
  [249] = {.lex_state = 21},
  [250] = {.lex_state = 21},
  [251] = {.lex_state = 21},
  [252] = {.lex_state = 21},
  [253] = {.lex_state = 21},
  [254] = {.lex_state = 21},
  [255] = {.lex_state = 34},
  [256] = {.lex_state = 4},
  [257] = {.lex_state = 21},
  [258] = {.lex_state = 21},
  [259] = {.lex_state = 21},
  [260] = {.lex_state = 21},
  [261] = {.lex_state = 21},
  [262] = {.lex_state = 21},
  [263] = {.lex_state = 21},
  [264] = {.lex_state = 21},
  [265] = {.lex_state = 21},
  [266] = {.lex_state = 21},
  [267] = {.lex_state = 21},
  [268] = {.lex_state = 21},
  [269] = {.lex_state = 21},
  [270] = {.lex_state = 21},
  [271] = {.lex_state = 21},
  [272] = {.lex_state = 21},
  [273] = {.lex_state = 21},
  [274] = {.lex_state = 33},
  [275] = {.lex_state = 21},
  [276] = {.lex_state = 21},
  [277] = {.lex_state = 21},
  [278] = {.lex_state = 21},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 21},
  [282] = {.lex_state = 21},
  [283] = {.lex_state = 21},
  [284] = {.lex_state = 33},
  [285] = {.lex_state = 21},
  [286] = {.lex_state = 21},
  [287] = {.lex_state = 21},
  [288] = {.lex_state = 21},
  [289] = {.lex_state = 21},
  [290] = {.lex_state = 21},
  [291] = {.lex_state = 21},
  [292] = {.lex_state = 21},
  [293] = {.lex_state = 21},
  [294] = {.lex_state = 21},
  [295] = {.lex_state = 21},
  [296] = {.lex_state = 21},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 21},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 21},
  [302] = {.lex_state = 21},
  [303] = {.lex_state = 21},
  [304] = {.lex_state = 21},
  [305] = {.lex_state = 21},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 21},
  [308] = {.lex_state = 21},
  [309] = {.lex_state = 21},
  [310] = {.lex_state = 21},
  [311] = {.lex_state = 21},
  [312] = {.lex_state = 21},
  [313] = {.lex_state = 21},
  [314] = {.lex_state = 21},
  [315] = {.lex_state = 34},
  [316] = {.lex_state = 21},
  [317] = {.lex_state = 21},
  [318] = {.lex_state = 34},
  [319] = {.lex_state = 21},
  [320] = {.lex_state = 21},
  [321] = {.lex_state = 21},
  [322] = {.lex_state = 21},
  [323] = {.lex_state = 21},
  [324] = {.lex_state = 21},
  [325] = {.lex_state = 21},
  [326] = {.lex_state = 21},
  [327] = {.lex_state = 21},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 21},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 21},
  [334] = {.lex_state = 21},
  [335] = {.lex_state = 21},
  [336] = {.lex_state = 21},
  [337] = {.lex_state = 21},
  [338] = {.lex_state = 190},
  [339] = {.lex_state = 21},
  [340] = {.lex_state = 21},
  [341] = {.lex_state = 190},
  [342] = {.lex_state = 21},
  [343] = {.lex_state = 21},
  [344] = {.lex_state = 21},
  [345] = {.lex_state = 21},
  [346] = {.lex_state = 21},
  [347] = {.lex_state = 21},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 21},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 21},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__name_char_token1] = ACTIONS(1),
    [aux_sym__name_char_token2] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_names_token1] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_entity_value_token1] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(1),
    [anon_sym_LT_QMARK] = ACTIONS(1),
    [sym_cdata_start] = ACTIONS(1),
    [anon_sym_LT_QMARKxml] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_version_num_token1] = ACTIONS(1),
    [anon_sym_LT_BANGDOCTYPE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_LT_BANGELEMENT] = ACTIONS(1),
    [anon_sym_LT_BANGATTLIST] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_BANGENTITY] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LT_BANGNOTATION] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_iso639_code_token1] = ACTIONS(1),
    [aux_sym_iso639_code_token2] = ACTIONS(1),
    [anon_sym_i] = ACTIONS(1),
    [anon_sym_I] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_X] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LT_BANG_LBRACK] = ACTIONS(1),
    [anon_sym_AMP_POUND] = ACTIONS(1),
    [anon_sym_AMP_POUNDx] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [aux_sym_enc_name_token1] = ACTIONS(1),
    [aux_sym_enc_name_token2] = ACTIONS(1),
    [anon_sym_LT_BANGCDATA_LBRACK] = ACTIONS(1),
  },
  [1] = {
    [sym_fragment] = STATE(234),
    [sym__node] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_processing_instructions] = STATE(3),
    [sym_xml_decl] = STATE(3),
    [sym_doctype_decl] = STATE(3),
    [sym_start_tag] = STATE(3),
    [sym_end_tag] = STATE(3),
    [sym_empty_elem_tag] = STATE(3),
    [sym_char_ref] = STATE(15),
    [sym_reference] = STATE(3),
    [sym_cd_sect] = STATE(3),
    [aux_sym_fragment_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_names_token1] = ACTIONS(7),
    [sym_char_data] = ACTIONS(9),
    [sym_text] = ACTIONS(11),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(13),
    [anon_sym_LT_QMARK] = ACTIONS(15),
    [anon_sym_LT_QMARKxml] = ACTIONS(17),
    [anon_sym_LT_BANGDOCTYPE] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_SLASH] = ACTIONS(23),
    [anon_sym_AMP_POUND] = ACTIONS(25),
    [anon_sym_AMP_POUNDx] = ACTIONS(27),
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_LT_BANGCDATA_LBRACK] = ACTIONS(31),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(7), 1,
      aux_sym_names_token1,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      sym_char_data,
    ACTIONS(38), 1,
      sym_text,
    ACTIONS(41), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(44), 1,
      anon_sym_LT_QMARK,
    ACTIONS(47), 1,
      anon_sym_LT_QMARKxml,
    ACTIONS(50), 1,
      anon_sym_LT_BANGDOCTYPE,
    ACTIONS(53), 1,
      anon_sym_LT,
    ACTIONS(56), 1,
      anon_sym_LT_SLASH,
    ACTIONS(59), 1,
      anon_sym_AMP_POUND,
    ACTIONS(62), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(65), 1,
      anon_sym_AMP,
    ACTIONS(68), 1,
      anon_sym_LT_BANGCDATA_LBRACK,
    STATE(15), 1,
      sym_char_ref,
    STATE(2), 11,
      sym__node,
      sym_comment,
      sym_processing_instructions,
      sym_xml_decl,
      sym_doctype_decl,
      sym_start_tag,
      sym_end_tag,
      sym_empty_elem_tag,
      sym_reference,
      sym_cd_sect,
      aux_sym_fragment_repeat1,
  [59] = 16,
    ACTIONS(7), 1,
      aux_sym_names_token1,
    ACTIONS(13), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_LT_QMARK,
    ACTIONS(17), 1,
      anon_sym_LT_QMARKxml,
    ACTIONS(19), 1,
      anon_sym_LT_BANGDOCTYPE,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      anon_sym_AMP_POUND,
    ACTIONS(27), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(29), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      anon_sym_LT_BANGCDATA_LBRACK,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      sym_char_data,
    ACTIONS(75), 1,
      sym_text,
    STATE(15), 1,
      sym_char_ref,
    STATE(2), 11,
      sym__node,
      sym_comment,
      sym_processing_instructions,
      sym_xml_decl,
      sym_doctype_decl,
      sym_start_tag,
      sym_end_tag,
      sym_empty_elem_tag,
      sym_reference,
      sym_cd_sect,
      aux_sym_fragment_repeat1,
  [118] = 4,
    ACTIONS(77), 2,
      aux_sym__name_char_token1,
      aux_sym__name_char_token2,
    STATE(6), 2,
      sym__name_char,
      aux_sym__name_repeat1,
    ACTIONS(79), 4,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
      anon_sym_COLON,
    ACTIONS(81), 8,
      aux_sym_names_token1,
      anon_sym_QMARK_GT,
      anon_sym_EQ,
      anon_sym_SLASH_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LT_BANGNOTATION,
  [143] = 4,
    ACTIONS(83), 2,
      aux_sym__name_char_token1,
      aux_sym__name_char_token2,
    STATE(5), 2,
      sym__name_char,
      aux_sym__name_repeat1,
    ACTIONS(86), 4,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
      anon_sym_COLON,
    ACTIONS(89), 8,
      aux_sym_names_token1,
      anon_sym_QMARK_GT,
      anon_sym_EQ,
      anon_sym_SLASH_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LT_BANGNOTATION,
  [168] = 4,
    ACTIONS(91), 2,
      aux_sym__name_char_token1,
      aux_sym__name_char_token2,
    STATE(5), 2,
      sym__name_char,
      aux_sym__name_repeat1,
    ACTIONS(93), 4,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
      anon_sym_COLON,
    ACTIONS(95), 8,
      aux_sym_names_token1,
      anon_sym_QMARK_GT,
      anon_sym_EQ,
      anon_sym_SLASH_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LT_BANGNOTATION,
  [193] = 3,
    ACTIONS(7), 1,
      aux_sym_names_token1,
    ACTIONS(99), 6,
      sym_text,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_AMP_POUND,
      anon_sym_AMP_POUNDx,
      anon_sym_AMP,
    ACTIONS(97), 7,
      ts_builtin_sym_end,
      sym_char_data,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_QMARKxml,
      anon_sym_LT_BANGDOCTYPE,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANGCDATA_LBRACK,
  [214] = 3,
    ACTIONS(7), 1,
      aux_sym_names_token1,
    ACTIONS(103), 6,
      sym_text,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_AMP_POUND,
      anon_sym_AMP_POUNDx,
      anon_sym_AMP,
    ACTIONS(101), 7,
      ts_builtin_sym_end,
      sym_char_data,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_QMARKxml,
      anon_sym_LT_BANGDOCTYPE,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANGCDATA_LBRACK,
  [235] = 3,
    ACTIONS(7), 1,
      aux_sym_names_token1,
    ACTIONS(107), 6,
      sym_text,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_AMP_POUND,
      anon_sym_AMP_POUNDx,
      anon_sym_AMP,
    ACTIONS(105), 7,
      ts_builtin_sym_end,
      sym_char_data,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_QMARKxml,
      anon_sym_LT_BANGDOCTYPE,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANGCDATA_LBRACK,
  [256] = 3,
    ACTIONS(7), 1,
      aux_sym_names_token1,
    ACTIONS(111), 6,
      sym_text,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_AMP_POUND,
      anon_sym_AMP_POUNDx,
      anon_sym_AMP,
    ACTIONS(109), 7,
      ts_builtin_sym_end,
      sym_char_data,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_QMARKxml,
      anon_sym_LT_BANGDOCTYPE,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANGCDATA_LBRACK,
  [277] = 3,
    ACTIONS(7), 1,
      aux_sym_names_token1,
    ACTIONS(115), 6,
      sym_text,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_AMP_POUND,
      anon_sym_AMP_POUNDx,
      anon_sym_AMP,
    ACTIONS(113), 7,
      ts_builtin_sym_end,
      sym_char_data,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_QMARKxml,
      anon_sym_LT_BANGDOCTYPE,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANGCDATA_LBRACK,
  [298] = 3,
    ACTIONS(7), 1,
      aux_sym_names_token1,
    ACTIONS(119), 6,
      sym_text,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_AMP_POUND,
      anon_sym_AMP_POUNDx,
      anon_sym_AMP,
    ACTIONS(117), 7,
      ts_builtin_sym_end,
      sym_char_data,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_QMARKxml,
      anon_sym_LT_BANGDOCTYPE,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANGCDATA_LBRACK,
  [319] = 3,
    ACTIONS(7), 1,
      aux_sym_names_token1,
    ACTIONS(123), 6,
      sym_text,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_AMP_POUND,
      anon_sym_AMP_POUNDx,
      anon_sym_AMP,
    ACTIONS(121), 7,
      ts_builtin_sym_end,
      sym_char_data,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_QMARKxml,
      anon_sym_LT_BANGDOCTYPE,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANGCDATA_LBRACK,
  [340] = 3,
    ACTIONS(7), 1,
      aux_sym_names_token1,
    ACTIONS(127), 6,
      sym_text,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_AMP_POUND,
      anon_sym_AMP_POUNDx,
      anon_sym_AMP,
    ACTIONS(125), 7,
      ts_builtin_sym_end,
      sym_char_data,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_QMARKxml,
      anon_sym_LT_BANGDOCTYPE,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANGCDATA_LBRACK,
  [361] = 3,
    ACTIONS(7), 1,
      aux_sym_names_token1,
    ACTIONS(131), 6,
      sym_text,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_AMP_POUND,
      anon_sym_AMP_POUNDx,
      anon_sym_AMP,
    ACTIONS(129), 7,
      ts_builtin_sym_end,
      sym_char_data,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_QMARKxml,
      anon_sym_LT_BANGDOCTYPE,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANGCDATA_LBRACK,
  [382] = 3,
    ACTIONS(7), 1,
      aux_sym_names_token1,
    ACTIONS(135), 6,
      sym_text,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_AMP_POUND,
      anon_sym_AMP_POUNDx,
      anon_sym_AMP,
    ACTIONS(133), 7,
      ts_builtin_sym_end,
      sym_char_data,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_QMARKxml,
      anon_sym_LT_BANGDOCTYPE,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANGCDATA_LBRACK,
  [403] = 3,
    ACTIONS(7), 1,
      aux_sym_names_token1,
    ACTIONS(139), 6,
      sym_text,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_AMP_POUND,
      anon_sym_AMP_POUNDx,
      anon_sym_AMP,
    ACTIONS(137), 7,
      ts_builtin_sym_end,
      sym_char_data,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_QMARKxml,
      anon_sym_LT_BANGDOCTYPE,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANGCDATA_LBRACK,
  [424] = 3,
    ACTIONS(7), 1,
      aux_sym_names_token1,
    ACTIONS(143), 6,
      sym_text,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_AMP_POUND,
      anon_sym_AMP_POUNDx,
      anon_sym_AMP,
    ACTIONS(141), 7,
      ts_builtin_sym_end,
      sym_char_data,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_QMARKxml,
      anon_sym_LT_BANGDOCTYPE,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANGCDATA_LBRACK,
  [445] = 3,
    ACTIONS(7), 1,
      aux_sym_names_token1,
    ACTIONS(147), 6,
      sym_text,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_AMP_POUND,
      anon_sym_AMP_POUNDx,
      anon_sym_AMP,
    ACTIONS(145), 7,
      ts_builtin_sym_end,
      sym_char_data,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_QMARKxml,
      anon_sym_LT_BANGDOCTYPE,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANGCDATA_LBRACK,
  [466] = 3,
    ACTIONS(7), 1,
      aux_sym_names_token1,
    ACTIONS(151), 6,
      sym_text,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_AMP_POUND,
      anon_sym_AMP_POUNDx,
      anon_sym_AMP,
    ACTIONS(149), 7,
      ts_builtin_sym_end,
      sym_char_data,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_QMARKxml,
      anon_sym_LT_BANGDOCTYPE,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANGCDATA_LBRACK,
  [487] = 3,
    ACTIONS(7), 1,
      aux_sym_names_token1,
    ACTIONS(155), 6,
      sym_text,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_AMP_POUND,
      anon_sym_AMP_POUNDx,
      anon_sym_AMP,
    ACTIONS(153), 7,
      ts_builtin_sym_end,
      sym_char_data,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_QMARKxml,
      anon_sym_LT_BANGDOCTYPE,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANGCDATA_LBRACK,
  [508] = 3,
    ACTIONS(7), 1,
      aux_sym_names_token1,
    ACTIONS(159), 6,
      sym_text,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_AMP_POUND,
      anon_sym_AMP_POUNDx,
      anon_sym_AMP,
    ACTIONS(157), 7,
      ts_builtin_sym_end,
      sym_char_data,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_QMARKxml,
      anon_sym_LT_BANGDOCTYPE,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANGCDATA_LBRACK,
  [529] = 3,
    ACTIONS(7), 1,
      aux_sym_names_token1,
    ACTIONS(163), 6,
      sym_text,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_AMP_POUND,
      anon_sym_AMP_POUNDx,
      anon_sym_AMP,
    ACTIONS(161), 7,
      ts_builtin_sym_end,
      sym_char_data,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_QMARKxml,
      anon_sym_LT_BANGDOCTYPE,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANGCDATA_LBRACK,
  [550] = 3,
    ACTIONS(7), 1,
      aux_sym_names_token1,
    ACTIONS(167), 6,
      sym_text,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_AMP_POUND,
      anon_sym_AMP_POUNDx,
      anon_sym_AMP,
    ACTIONS(165), 7,
      ts_builtin_sym_end,
      sym_char_data,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_QMARKxml,
      anon_sym_LT_BANGDOCTYPE,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANGCDATA_LBRACK,
  [571] = 3,
    ACTIONS(7), 1,
      aux_sym_names_token1,
    ACTIONS(171), 6,
      sym_text,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_AMP_POUND,
      anon_sym_AMP_POUNDx,
      anon_sym_AMP,
    ACTIONS(169), 7,
      ts_builtin_sym_end,
      sym_char_data,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_QMARKxml,
      anon_sym_LT_BANGDOCTYPE,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANGCDATA_LBRACK,
  [592] = 3,
    ACTIONS(7), 1,
      aux_sym_names_token1,
    ACTIONS(175), 6,
      sym_text,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_AMP_POUND,
      anon_sym_AMP_POUNDx,
      anon_sym_AMP,
    ACTIONS(173), 7,
      ts_builtin_sym_end,
      sym_char_data,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_QMARKxml,
      anon_sym_LT_BANGDOCTYPE,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANGCDATA_LBRACK,
  [613] = 3,
    ACTIONS(7), 1,
      aux_sym_names_token1,
    ACTIONS(179), 6,
      sym_text,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_AMP_POUND,
      anon_sym_AMP_POUNDx,
      anon_sym_AMP,
    ACTIONS(177), 7,
      ts_builtin_sym_end,
      sym_char_data,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_QMARKxml,
      anon_sym_LT_BANGDOCTYPE,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANGCDATA_LBRACK,
  [634] = 3,
    ACTIONS(7), 1,
      aux_sym_names_token1,
    ACTIONS(183), 6,
      sym_text,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_AMP_POUND,
      anon_sym_AMP_POUNDx,
      anon_sym_AMP,
    ACTIONS(181), 7,
      ts_builtin_sym_end,
      sym_char_data,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_QMARKxml,
      anon_sym_LT_BANGDOCTYPE,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANGCDATA_LBRACK,
  [655] = 3,
    ACTIONS(7), 1,
      aux_sym_names_token1,
    ACTIONS(187), 6,
      sym_text,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_AMP_POUND,
      anon_sym_AMP_POUNDx,
      anon_sym_AMP,
    ACTIONS(185), 7,
      ts_builtin_sym_end,
      sym_char_data,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_QMARKxml,
      anon_sym_LT_BANGDOCTYPE,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANGCDATA_LBRACK,
  [676] = 3,
    ACTIONS(7), 1,
      aux_sym_names_token1,
    ACTIONS(191), 6,
      sym_text,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_AMP_POUND,
      anon_sym_AMP_POUNDx,
      anon_sym_AMP,
    ACTIONS(189), 7,
      ts_builtin_sym_end,
      sym_char_data,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_QMARKxml,
      anon_sym_LT_BANGDOCTYPE,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANGCDATA_LBRACK,
  [697] = 3,
    ACTIONS(7), 1,
      aux_sym_names_token1,
    ACTIONS(195), 6,
      sym_text,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_AMP_POUND,
      anon_sym_AMP_POUNDx,
      anon_sym_AMP,
    ACTIONS(193), 7,
      ts_builtin_sym_end,
      sym_char_data,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_QMARKxml,
      anon_sym_LT_BANGDOCTYPE,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANGCDATA_LBRACK,
  [718] = 3,
    ACTIONS(7), 1,
      aux_sym_names_token1,
    ACTIONS(199), 6,
      sym_text,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_AMP_POUND,
      anon_sym_AMP_POUNDx,
      anon_sym_AMP,
    ACTIONS(197), 7,
      ts_builtin_sym_end,
      sym_char_data,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_QMARKxml,
      anon_sym_LT_BANGDOCTYPE,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANGCDATA_LBRACK,
  [739] = 4,
    ACTIONS(91), 2,
      aux_sym__name_char_token1,
      aux_sym__name_char_token2,
    STATE(5), 2,
      sym__name_char,
      aux_sym__name_repeat1,
    ACTIONS(201), 3,
      aux_sym_names_token1,
      anon_sym_PIPE,
      anon_sym_RPAREN,
    ACTIONS(93), 4,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
      anon_sym_COLON,
  [759] = 4,
    ACTIONS(91), 2,
      aux_sym__name_char_token1,
      aux_sym__name_char_token2,
    STATE(5), 2,
      sym__name_char,
      aux_sym__name_repeat1,
    ACTIONS(203), 3,
      aux_sym_names_token1,
      anon_sym_PIPE,
      anon_sym_RPAREN,
    ACTIONS(93), 4,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
      anon_sym_COLON,
  [779] = 4,
    ACTIONS(91), 2,
      aux_sym__name_char_token1,
      aux_sym__name_char_token2,
    STATE(5), 2,
      sym__name_char,
      aux_sym__name_repeat1,
    ACTIONS(205), 3,
      aux_sym_names_token1,
      anon_sym_PIPE,
      anon_sym_RPAREN,
    ACTIONS(93), 4,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
      anon_sym_COLON,
  [799] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(211), 1,
      anon_sym_NOTATION,
    ACTIONS(209), 3,
      anon_sym_ID,
      anon_sym_IDREF,
      anon_sym_NMTOKEN,
    ACTIONS(207), 5,
      anon_sym_CDATA,
      anon_sym_IDREFS,
      anon_sym_ENTITY,
      anon_sym_ENTITIES,
      anon_sym_NMTOKENS,
  [818] = 5,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(95), 1,
      anon_sym_SEMI,
    ACTIONS(213), 2,
      aux_sym__name_char_token1,
      aux_sym__name_char_token2,
    STATE(38), 2,
      sym__name_char,
      aux_sym__name_repeat1,
    ACTIONS(215), 4,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
      anon_sym_COLON,
  [839] = 5,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(89), 1,
      anon_sym_SEMI,
    ACTIONS(217), 2,
      aux_sym__name_char_token1,
      aux_sym__name_char_token2,
    STATE(38), 2,
      sym__name_char,
      aux_sym__name_repeat1,
    ACTIONS(220), 4,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
      anon_sym_COLON,
  [860] = 5,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(81), 1,
      anon_sym_SEMI,
    ACTIONS(223), 2,
      aux_sym__name_char_token1,
      aux_sym__name_char_token2,
    STATE(37), 2,
      sym__name_char,
      aux_sym__name_repeat1,
    ACTIONS(225), 4,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
      anon_sym_COLON,
  [881] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(227), 2,
      aux_sym__name_char_token1,
      aux_sym__name_char_token2,
    STATE(35), 2,
      sym__name_char,
      aux_sym__name_repeat1,
    ACTIONS(229), 4,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
      anon_sym_COLON,
  [899] = 8,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(231), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      aux_sym_entity_value_token1,
    ACTIONS(236), 1,
      anon_sym_AMP_POUND,
    ACTIONS(239), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(242), 1,
      anon_sym_AMP,
    STATE(82), 1,
      sym_char_ref,
    STATE(41), 2,
      sym_reference,
      aux_sym_attribute_value_repeat1,
  [925] = 8,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(245), 1,
      anon_sym_DQUOTE,
    ACTIONS(247), 1,
      aux_sym_entity_value_token1,
    ACTIONS(249), 1,
      anon_sym_AMP_POUND,
    ACTIONS(251), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(253), 1,
      anon_sym_AMP,
    STATE(82), 1,
      sym_char_ref,
    STATE(41), 2,
      sym_reference,
      aux_sym_attribute_value_repeat1,
  [951] = 8,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(245), 1,
      anon_sym_SQUOTE,
    ACTIONS(255), 1,
      aux_sym_entity_value_token1,
    ACTIONS(257), 1,
      anon_sym_AMP_POUND,
    ACTIONS(259), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(261), 1,
      anon_sym_AMP,
    STATE(77), 1,
      sym_char_ref,
    STATE(44), 2,
      sym_reference,
      aux_sym_attribute_value_repeat1,
  [977] = 8,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      aux_sym_entity_value_token1,
    ACTIONS(266), 1,
      anon_sym_AMP_POUND,
    ACTIONS(269), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(272), 1,
      anon_sym_AMP,
    STATE(77), 1,
      sym_char_ref,
    STATE(44), 2,
      sym_reference,
      aux_sym_attribute_value_repeat1,
  [1003] = 8,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(257), 1,
      anon_sym_AMP_POUND,
    ACTIONS(259), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(261), 1,
      anon_sym_AMP,
    ACTIONS(275), 1,
      aux_sym_entity_value_token1,
    ACTIONS(277), 1,
      anon_sym_SQUOTE,
    STATE(77), 1,
      sym_char_ref,
    STATE(43), 2,
      sym_reference,
      aux_sym_attribute_value_repeat1,
  [1029] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(279), 2,
      aux_sym__name_char_token1,
      aux_sym__name_char_token2,
    STATE(33), 2,
      sym__name_char,
      aux_sym__name_repeat1,
    ACTIONS(281), 4,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
      anon_sym_COLON,
  [1047] = 8,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(249), 1,
      anon_sym_AMP_POUND,
    ACTIONS(251), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(253), 1,
      anon_sym_AMP,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
    ACTIONS(285), 1,
      aux_sym_entity_value_token1,
    STATE(82), 1,
      sym_char_ref,
    STATE(52), 2,
      sym_reference,
      aux_sym_attribute_value_repeat1,
  [1073] = 8,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(249), 1,
      anon_sym_AMP_POUND,
    ACTIONS(251), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(253), 1,
      anon_sym_AMP,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      aux_sym_entity_value_token1,
    STATE(82), 1,
      sym_char_ref,
    STATE(42), 2,
      sym_reference,
      aux_sym_attribute_value_repeat1,
  [1099] = 4,
    ACTIONS(293), 1,
      aux_sym_names_token1,
    ACTIONS(289), 2,
      aux_sym__name_char_token1,
      aux_sym__name_char_token2,
    STATE(34), 2,
      sym__name_char,
      aux_sym__name_repeat1,
    ACTIONS(291), 4,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
      anon_sym_COLON,
  [1117] = 8,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(257), 1,
      anon_sym_AMP_POUND,
    ACTIONS(259), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(261), 1,
      anon_sym_AMP,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(295), 1,
      aux_sym_entity_value_token1,
    STATE(77), 1,
      sym_char_ref,
    STATE(53), 2,
      sym_reference,
      aux_sym_attribute_value_repeat1,
  [1143] = 4,
    ACTIONS(297), 1,
      aux_sym_names_token1,
    ACTIONS(279), 2,
      aux_sym__name_char_token1,
      aux_sym__name_char_token2,
    STATE(33), 2,
      sym__name_char,
      aux_sym__name_repeat1,
    ACTIONS(281), 4,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
      anon_sym_COLON,
  [1161] = 8,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(247), 1,
      aux_sym_entity_value_token1,
    ACTIONS(249), 1,
      anon_sym_AMP_POUND,
    ACTIONS(251), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(253), 1,
      anon_sym_AMP,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    STATE(82), 1,
      sym_char_ref,
    STATE(41), 2,
      sym_reference,
      aux_sym_attribute_value_repeat1,
  [1187] = 8,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(255), 1,
      aux_sym_entity_value_token1,
    ACTIONS(257), 1,
      anon_sym_AMP_POUND,
    ACTIONS(259), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(261), 1,
      anon_sym_AMP,
    ACTIONS(299), 1,
      anon_sym_SQUOTE,
    STATE(77), 1,
      sym_char_ref,
    STATE(44), 2,
      sym_reference,
      aux_sym_attribute_value_repeat1,
  [1213] = 7,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(301), 1,
      aux_sym__name_char_token1,
    ACTIONS(305), 1,
      anon_sym_SLASH_GT,
    ACTIONS(307), 1,
      anon_sym_GT,
    STATE(184), 1,
      sym_attribute,
    STATE(209), 1,
      sym__name,
    ACTIONS(303), 2,
      anon_sym__,
      anon_sym_COLON,
  [1236] = 7,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(301), 1,
      aux_sym__name_char_token1,
    ACTIONS(309), 1,
      anon_sym_SLASH_GT,
    ACTIONS(311), 1,
      anon_sym_GT,
    STATE(184), 1,
      sym_attribute,
    STATE(209), 1,
      sym__name,
    ACTIONS(303), 2,
      anon_sym__,
      anon_sym_COLON,
  [1259] = 6,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(315), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_POUNDFIXED,
    STATE(237), 1,
      sym_attribute_value,
    ACTIONS(317), 2,
      anon_sym_POUNDREQUIRED,
      anon_sym_POUNDIMPLIED,
  [1279] = 6,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(315), 1,
      anon_sym_SQUOTE,
    ACTIONS(323), 1,
      anon_sym_POUNDFIXED,
    STATE(301), 1,
      sym_attribute_value,
    ACTIONS(321), 2,
      anon_sym_POUNDREQUIRED,
      anon_sym_POUNDIMPLIED,
  [1299] = 6,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(315), 1,
      anon_sym_SQUOTE,
    ACTIONS(327), 1,
      anon_sym_POUNDFIXED,
    STATE(325), 1,
      sym_attribute_value,
    ACTIONS(325), 2,
      anon_sym_POUNDREQUIRED,
      anon_sym_POUNDIMPLIED,
  [1319] = 6,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(315), 1,
      anon_sym_SQUOTE,
    ACTIONS(331), 1,
      anon_sym_POUNDFIXED,
    STATE(351), 1,
      sym_attribute_value,
    ACTIONS(329), 2,
      anon_sym_POUNDREQUIRED,
      anon_sym_POUNDIMPLIED,
  [1339] = 6,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(315), 1,
      anon_sym_SQUOTE,
    ACTIONS(335), 1,
      anon_sym_POUNDFIXED,
    STATE(344), 1,
      sym_attribute_value,
    ACTIONS(333), 2,
      anon_sym_POUNDREQUIRED,
      anon_sym_POUNDIMPLIED,
  [1359] = 6,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(315), 1,
      anon_sym_SQUOTE,
    ACTIONS(339), 1,
      anon_sym_POUNDFIXED,
    STATE(323), 1,
      sym_attribute_value,
    ACTIONS(337), 2,
      anon_sym_POUNDREQUIRED,
      anon_sym_POUNDIMPLIED,
  [1379] = 6,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(315), 1,
      anon_sym_SQUOTE,
    ACTIONS(343), 1,
      anon_sym_POUNDFIXED,
    STATE(321), 1,
      sym_attribute_value,
    ACTIONS(341), 2,
      anon_sym_POUNDREQUIRED,
      anon_sym_POUNDIMPLIED,
  [1399] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    STATE(75), 1,
      aux_sym_enc_name_repeat1,
    ACTIONS(345), 2,
      anon_sym_DASH,
      aux_sym_enc_name_token2,
    ACTIONS(347), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1414] = 6,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(349), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(351), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(353), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(355), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      aux_sym_doctype_decl_repeat3,
  [1433] = 3,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(149), 2,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
    ACTIONS(151), 3,
      aux_sym_entity_value_token1,
      anon_sym_AMP_POUND,
      anon_sym_AMP,
  [1446] = 6,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(349), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(351), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(353), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(357), 1,
      anon_sym_RBRACK,
    STATE(64), 1,
      aux_sym_doctype_decl_repeat3,
  [1465] = 6,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(359), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(362), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(365), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(368), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      aux_sym_doctype_decl_repeat3,
  [1484] = 5,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(301), 1,
      aux_sym__name_char_token1,
    ACTIONS(370), 1,
      anon_sym_PERCENT,
    STATE(373), 1,
      sym__name,
    ACTIONS(303), 2,
      anon_sym__,
      anon_sym_COLON,
  [1501] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    STATE(63), 1,
      aux_sym_enc_name_repeat1,
    ACTIONS(372), 2,
      anon_sym_DASH,
      aux_sym_enc_name_token2,
    ACTIONS(374), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1516] = 6,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(349), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(351), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(353), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(357), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      aux_sym_doctype_decl_repeat3,
  [1535] = 3,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(141), 2,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
    ACTIONS(143), 3,
      aux_sym_entity_value_token1,
      anon_sym_AMP_POUND,
      anon_sym_AMP,
  [1548] = 6,
    ACTIONS(376), 1,
      aux_sym_names_token1,
    ACTIONS(378), 1,
      anon_sym_LBRACK,
    ACTIONS(380), 1,
      anon_sym_GT,
    ACTIONS(382), 1,
      anon_sym_PUBLIC,
    ACTIONS(384), 1,
      anon_sym_SYSTEM,
    STATE(210), 1,
      sym_external_id,
  [1567] = 5,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(301), 1,
      aux_sym__name_char_token1,
    STATE(184), 1,
      sym_attribute,
    STATE(209), 1,
      sym__name,
    ACTIONS(303), 2,
      anon_sym__,
      anon_sym_COLON,
  [1584] = 5,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(301), 1,
      aux_sym__name_char_token1,
    STATE(241), 1,
      sym__name,
    STATE(242), 1,
      sym_pi_target,
    ACTIONS(303), 2,
      anon_sym__,
      anon_sym_COLON,
  [1601] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    STATE(75), 1,
      aux_sym_enc_name_repeat1,
    ACTIONS(386), 2,
      anon_sym_DASH,
      aux_sym_enc_name_token2,
    ACTIONS(389), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1616] = 6,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(349), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(351), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(353), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(391), 1,
      anon_sym_RBRACK,
    STATE(81), 1,
      aux_sym_doctype_decl_repeat3,
  [1635] = 3,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(129), 2,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
    ACTIONS(131), 3,
      aux_sym_entity_value_token1,
      anon_sym_AMP_POUND,
      anon_sym_AMP,
  [1648] = 6,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(349), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(351), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(353), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(393), 1,
      anon_sym_RBRACK,
    STATE(70), 1,
      aux_sym_doctype_decl_repeat3,
  [1667] = 3,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(149), 2,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
    ACTIONS(151), 3,
      aux_sym_entity_value_token1,
      anon_sym_AMP_POUND,
      anon_sym_AMP,
  [1680] = 3,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(141), 2,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
    ACTIONS(143), 3,
      aux_sym_entity_value_token1,
      anon_sym_AMP_POUND,
      anon_sym_AMP,
  [1693] = 6,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(349), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(351), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(353), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(393), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      aux_sym_doctype_decl_repeat3,
  [1712] = 3,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(129), 2,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
    ACTIONS(131), 3,
      aux_sym_entity_value_token1,
      anon_sym_AMP_POUND,
      anon_sym_AMP,
  [1725] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(395), 4,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_RBRACK,
  [1735] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(397), 1,
      aux_sym__name_char_token1,
    STATE(343), 1,
      sym__name,
    ACTIONS(399), 2,
      anon_sym__,
      anon_sym_COLON,
  [1749] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(401), 4,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_RBRACK,
  [1759] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(397), 1,
      aux_sym__name_char_token1,
    STATE(226), 1,
      sym__name,
    ACTIONS(399), 2,
      anon_sym__,
      anon_sym_COLON,
  [1773] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(403), 4,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_RBRACK,
  [1783] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(405), 4,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_RBRACK,
  [1793] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(397), 1,
      aux_sym__name_char_token1,
    STATE(236), 1,
      sym__name,
    ACTIONS(399), 2,
      anon_sym__,
      anon_sym_COLON,
  [1807] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(301), 1,
      aux_sym__name_char_token1,
    STATE(410), 1,
      sym__name,
    ACTIONS(303), 2,
      anon_sym__,
      anon_sym_COLON,
  [1821] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(301), 1,
      aux_sym__name_char_token1,
    STATE(411), 1,
      sym__name,
    ACTIONS(303), 2,
      anon_sym__,
      anon_sym_COLON,
  [1835] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(397), 1,
      aux_sym__name_char_token1,
    STATE(291), 1,
      sym__name,
    ACTIONS(399), 2,
      anon_sym__,
      anon_sym_COLON,
  [1849] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(301), 1,
      aux_sym__name_char_token1,
    STATE(404), 1,
      sym__name,
    ACTIONS(303), 2,
      anon_sym__,
      anon_sym_COLON,
  [1863] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(301), 1,
      aux_sym__name_char_token1,
    STATE(398), 1,
      sym__name,
    ACTIONS(303), 2,
      anon_sym__,
      anon_sym_COLON,
  [1877] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(397), 1,
      aux_sym__name_char_token1,
    STATE(281), 1,
      sym__name,
    ACTIONS(399), 2,
      anon_sym__,
      anon_sym_COLON,
  [1891] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(397), 1,
      aux_sym__name_char_token1,
    STATE(257), 1,
      sym__name,
    ACTIONS(399), 2,
      anon_sym__,
      anon_sym_COLON,
  [1905] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(407), 4,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_RBRACK,
  [1915] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(409), 4,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_RBRACK,
  [1925] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(397), 1,
      aux_sym__name_char_token1,
    STATE(314), 1,
      sym__name,
    ACTIONS(399), 2,
      anon_sym__,
      anon_sym_COLON,
  [1939] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(411), 4,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_RBRACK,
  [1949] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(397), 1,
      aux_sym__name_char_token1,
    STATE(246), 1,
      sym__name,
    ACTIONS(399), 2,
      anon_sym__,
      anon_sym_COLON,
  [1963] = 4,
    ACTIONS(301), 1,
      aux_sym__name_char_token1,
    ACTIONS(413), 1,
      aux_sym_names_token1,
    STATE(153), 1,
      sym__name,
    ACTIONS(303), 2,
      anon_sym__,
      anon_sym_COLON,
  [1977] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(301), 1,
      aux_sym__name_char_token1,
    STATE(159), 1,
      sym__name,
    ACTIONS(303), 2,
      anon_sym__,
      anon_sym_COLON,
  [1991] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(301), 1,
      aux_sym__name_char_token1,
    STATE(416), 1,
      sym__name,
    ACTIONS(303), 2,
      anon_sym__,
      anon_sym_COLON,
  [2005] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(301), 1,
      aux_sym__name_char_token1,
    STATE(405), 1,
      sym__name,
    ACTIONS(303), 2,
      anon_sym__,
      anon_sym_COLON,
  [2019] = 5,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(415), 1,
      anon_sym_DASH,
    ACTIONS(417), 1,
      aux_sym_comment_token1,
    ACTIONS(419), 1,
      anon_sym_DASH_DASH_GT,
    STATE(112), 1,
      aux_sym_comment_repeat1,
  [2035] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(301), 1,
      aux_sym__name_char_token1,
    STATE(243), 1,
      sym__name,
    ACTIONS(303), 2,
      anon_sym__,
      anon_sym_COLON,
  [2049] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(301), 1,
      aux_sym__name_char_token1,
    STATE(141), 1,
      sym__name,
    ACTIONS(303), 2,
      anon_sym__,
      anon_sym_COLON,
  [2063] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(397), 1,
      aux_sym__name_char_token1,
    STATE(289), 1,
      sym__name,
    ACTIONS(399), 2,
      anon_sym__,
      anon_sym_COLON,
  [2077] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(397), 1,
      aux_sym__name_char_token1,
    STATE(249), 1,
      sym__name,
    ACTIONS(399), 2,
      anon_sym__,
      anon_sym_COLON,
  [2091] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(397), 1,
      aux_sym__name_char_token1,
    STATE(293), 1,
      sym__name,
    ACTIONS(399), 2,
      anon_sym__,
      anon_sym_COLON,
  [2105] = 5,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(415), 1,
      anon_sym_DASH,
    ACTIONS(421), 1,
      aux_sym_comment_token1,
    ACTIONS(423), 1,
      anon_sym_DASH_DASH_GT,
    STATE(130), 1,
      aux_sym_comment_repeat1,
  [2121] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(301), 1,
      aux_sym__name_char_token1,
    STATE(421), 1,
      sym__name,
    ACTIONS(303), 2,
      anon_sym__,
      anon_sym_COLON,
  [2135] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(301), 1,
      aux_sym__name_char_token1,
    STATE(399), 1,
      sym__name,
    ACTIONS(303), 2,
      anon_sym__,
      anon_sym_COLON,
  [2149] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(425), 4,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_RBRACK,
  [2159] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(427), 4,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_RBRACK,
  [2169] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(301), 1,
      aux_sym__name_char_token1,
    STATE(369), 1,
      sym__name,
    ACTIONS(303), 2,
      anon_sym__,
      anon_sym_COLON,
  [2183] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(301), 1,
      aux_sym__name_char_token1,
    STATE(203), 1,
      sym__name,
    ACTIONS(303), 2,
      anon_sym__,
      anon_sym_COLON,
  [2197] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(429), 4,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_RBRACK,
  [2207] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(431), 4,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_RBRACK,
  [2217] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(433), 4,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_RBRACK,
  [2227] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(397), 1,
      aux_sym__name_char_token1,
    STATE(307), 1,
      sym__name,
    ACTIONS(399), 2,
      anon_sym__,
      anon_sym_COLON,
  [2241] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(301), 1,
      aux_sym__name_char_token1,
    STATE(394), 1,
      sym__name,
    ACTIONS(303), 2,
      anon_sym__,
      anon_sym_COLON,
  [2255] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(397), 1,
      aux_sym__name_char_token1,
    STATE(336), 1,
      sym__name,
    ACTIONS(399), 2,
      anon_sym__,
      anon_sym_COLON,
  [2269] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(435), 4,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_RBRACK,
  [2279] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(397), 1,
      aux_sym__name_char_token1,
    STATE(337), 1,
      sym__name,
    ACTIONS(399), 2,
      anon_sym__,
      anon_sym_COLON,
  [2293] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(397), 1,
      aux_sym__name_char_token1,
    STATE(312), 1,
      sym__name,
    ACTIONS(399), 2,
      anon_sym__,
      anon_sym_COLON,
  [2307] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(301), 1,
      aux_sym__name_char_token1,
    STATE(390), 1,
      sym__name,
    ACTIONS(303), 2,
      anon_sym__,
      anon_sym_COLON,
  [2321] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(397), 1,
      aux_sym__name_char_token1,
    STATE(316), 1,
      sym__name,
    ACTIONS(399), 2,
      anon_sym__,
      anon_sym_COLON,
  [2335] = 5,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(437), 1,
      anon_sym_DASH,
    ACTIONS(440), 1,
      aux_sym_comment_token1,
    ACTIONS(443), 1,
      anon_sym_DASH_DASH_GT,
    STATE(130), 1,
      aux_sym_comment_repeat1,
  [2351] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(445), 4,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_RBRACK,
  [2361] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(397), 1,
      aux_sym__name_char_token1,
    STATE(342), 1,
      sym__name,
    ACTIONS(399), 2,
      anon_sym__,
      anon_sym_COLON,
  [2375] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(447), 4,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_RBRACK,
  [2385] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(449), 4,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_RBRACK,
  [2395] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(397), 1,
      aux_sym__name_char_token1,
    STATE(339), 1,
      sym__name,
    ACTIONS(399), 2,
      anon_sym__,
      anon_sym_COLON,
  [2409] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(301), 1,
      aux_sym__name_char_token1,
    STATE(406), 1,
      sym__name,
    ACTIONS(303), 2,
      anon_sym__,
      anon_sym_COLON,
  [2423] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(397), 1,
      aux_sym__name_char_token1,
    STATE(334), 1,
      sym__name,
    ACTIONS(399), 2,
      anon_sym__,
      anon_sym_COLON,
  [2437] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(451), 1,
      anon_sym_DQUOTE,
    ACTIONS(453), 1,
      anon_sym_SQUOTE,
    STATE(175), 1,
      sym_system_literal,
  [2450] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(455), 1,
      anon_sym_DQUOTE,
    ACTIONS(457), 1,
      sym_pubid_char,
    STATE(139), 1,
      aux_sym_pubid_literal_repeat1,
  [2463] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(315), 1,
      anon_sym_SQUOTE,
    STATE(254), 1,
      sym_attribute_value,
  [2476] = 4,
    ACTIONS(460), 1,
      aux_sym_names_token1,
    ACTIONS(462), 1,
      anon_sym_PIPE,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      aux_sym_doctype_decl_repeat1,
  [2489] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(466), 1,
      anon_sym_DQUOTE,
    ACTIONS(468), 1,
      anon_sym_SQUOTE,
    STATE(193), 1,
      sym_attribute_value,
  [2502] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(315), 1,
      anon_sym_SQUOTE,
    STATE(302), 1,
      sym_attribute_value,
  [2515] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(315), 1,
      anon_sym_SQUOTE,
    STATE(351), 1,
      sym_attribute_value,
  [2528] = 4,
    ACTIONS(462), 1,
      anon_sym_PIPE,
    ACTIONS(470), 1,
      aux_sym_names_token1,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      aux_sym_doctype_decl_repeat1,
  [2541] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(474), 1,
      anon_sym_QMARK_GT,
    ACTIONS(476), 1,
      anon_sym_standalone,
    ACTIONS(478), 1,
      anon_sym_encoding,
  [2554] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(315), 1,
      anon_sym_SQUOTE,
    STATE(310), 1,
      sym_attribute_value,
  [2567] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(480), 1,
      anon_sym_DQUOTE,
    ACTIONS(482), 1,
      sym_pubid_char,
    STATE(139), 1,
      aux_sym_pubid_literal_repeat1,
  [2580] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(480), 1,
      anon_sym_SQUOTE,
    ACTIONS(484), 1,
      sym_pubid_char,
    STATE(162), 1,
      aux_sym_pubid_literal_repeat1,
  [2593] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(315), 1,
      anon_sym_SQUOTE,
    STATE(322), 1,
      sym_attribute_value,
  [2606] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(486), 1,
      anon_sym_DQUOTE,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    STATE(354), 1,
      sym_pubid_literal,
  [2619] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(451), 1,
      anon_sym_DQUOTE,
    ACTIONS(453), 1,
      anon_sym_SQUOTE,
    STATE(173), 1,
      sym_system_literal,
  [2632] = 4,
    ACTIONS(462), 1,
      anon_sym_PIPE,
    ACTIONS(490), 1,
      aux_sym_names_token1,
    ACTIONS(492), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      aux_sym_doctype_decl_repeat1,
  [2645] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(315), 1,
      anon_sym_SQUOTE,
    STATE(323), 1,
      sym_attribute_value,
  [2658] = 4,
    ACTIONS(309), 1,
      anon_sym_SLASH_GT,
    ACTIONS(311), 1,
      anon_sym_GT,
    ACTIONS(494), 1,
      aux_sym_names_token1,
    STATE(161), 1,
      aux_sym_start_tag_repeat1,
  [2671] = 4,
    ACTIONS(496), 1,
      aux_sym_names_token1,
    ACTIONS(498), 1,
      anon_sym_QMARK_GT,
    STATE(206), 1,
      sym_encoding_decl,
    STATE(271), 1,
      sym_standalone_decl,
  [2684] = 4,
    ACTIONS(462), 1,
      anon_sym_PIPE,
    ACTIONS(500), 1,
      aux_sym_names_token1,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      aux_sym_doctype_decl_repeat1,
  [2697] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(315), 1,
      anon_sym_SQUOTE,
    STATE(276), 1,
      sym_attribute_value,
  [2710] = 4,
    ACTIONS(504), 1,
      aux_sym_names_token1,
    ACTIONS(506), 1,
      anon_sym_SLASH_GT,
    ACTIONS(508), 1,
      anon_sym_GT,
    STATE(155), 1,
      aux_sym_start_tag_repeat1,
  [2723] = 4,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    ACTIONS(510), 1,
      aux_sym_names_token1,
    ACTIONS(513), 1,
      anon_sym_PIPE,
    STATE(160), 1,
      aux_sym_doctype_decl_repeat1,
  [2736] = 3,
    ACTIONS(516), 1,
      aux_sym_names_token1,
    STATE(161), 1,
      aux_sym_start_tag_repeat1,
    ACTIONS(519), 2,
      anon_sym_SLASH_GT,
      anon_sym_GT,
  [2747] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(455), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      sym_pubid_char,
    STATE(162), 1,
      aux_sym_pubid_literal_repeat1,
  [2760] = 3,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(443), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(524), 2,
      anon_sym_DASH,
      aux_sym_comment_token1,
  [2771] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(526), 1,
      anon_sym_DQUOTE,
    ACTIONS(528), 1,
      sym_pubid_char,
    STATE(148), 1,
      aux_sym_pubid_literal_repeat1,
  [2784] = 4,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(526), 1,
      anon_sym_SQUOTE,
    ACTIONS(530), 1,
      sym_pubid_char,
    STATE(149), 1,
      aux_sym_pubid_literal_repeat1,
  [2797] = 3,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(532), 1,
      aux_sym_enc_name_token1,
    STATE(279), 1,
      sym_enc_name,
  [2807] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(534), 2,
      anon_sym_yes,
      anon_sym_no,
  [2815] = 2,
    ACTIONS(536), 1,
      aux_sym_names_token1,
    ACTIONS(538), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2823] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(540), 2,
      anon_sym_EMPTY,
      anon_sym_ANY,
  [2831] = 1,
    ACTIONS(542), 3,
      aux_sym_names_token1,
      anon_sym_SLASH_GT,
      anon_sym_GT,
  [2837] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(538), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2845] = 3,
    ACTIONS(544), 1,
      aux_sym_names_token1,
    ACTIONS(546), 1,
      anon_sym_LT_BANGNOTATION,
    STATE(183), 1,
      aux_sym_doctype_decl_repeat2,
  [2855] = 1,
    ACTIONS(548), 3,
      aux_sym_names_token1,
      anon_sym_LBRACK,
      anon_sym_GT,
  [2861] = 3,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(550), 1,
      anon_sym_GT,
    ACTIONS(552), 1,
      anon_sym_PUBLIC,
  [2871] = 1,
    ACTIONS(554), 3,
      aux_sym_names_token1,
      anon_sym_LBRACK,
      anon_sym_GT,
  [2877] = 1,
    ACTIONS(556), 3,
      aux_sym_names_token1,
      anon_sym_LBRACK,
      anon_sym_GT,
  [2883] = 3,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(558), 1,
      anon_sym_PIPE,
    ACTIONS(560), 1,
      anon_sym_RPAREN,
  [2893] = 3,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(562), 1,
      anon_sym_DQUOTE,
    ACTIONS(564), 1,
      anon_sym_SQUOTE,
  [2903] = 3,
    ACTIONS(566), 1,
      aux_sym_names_token1,
    ACTIONS(568), 1,
      anon_sym_EQ,
    STATE(204), 1,
      sym__eq,
  [2913] = 3,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(570), 1,
      anon_sym_version,
    STATE(156), 1,
      sym_version_info,
  [2923] = 3,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(558), 1,
      anon_sym_PIPE,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
  [2933] = 3,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(532), 1,
      aux_sym_enc_name_token1,
    STATE(328), 1,
      sym_enc_name,
  [2943] = 3,
    ACTIONS(574), 1,
      aux_sym_names_token1,
    ACTIONS(577), 1,
      anon_sym_LT_BANGNOTATION,
    STATE(183), 1,
      aux_sym_doctype_decl_repeat2,
  [2953] = 1,
    ACTIONS(519), 3,
      aux_sym_names_token1,
      anon_sym_SLASH_GT,
      anon_sym_GT,
  [2959] = 3,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
    ACTIONS(558), 1,
      anon_sym_PIPE,
  [2969] = 3,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(532), 1,
      aux_sym_enc_name_token1,
    STATE(329), 1,
      sym_enc_name,
  [2979] = 3,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(579), 1,
      anon_sym_DQUOTE,
    ACTIONS(581), 1,
      anon_sym_SQUOTE,
  [2989] = 3,
    ACTIONS(579), 1,
      anon_sym_DQUOTE,
    ACTIONS(581), 1,
      anon_sym_SQUOTE,
    ACTIONS(583), 1,
      aux_sym_names_token1,
  [2999] = 3,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(585), 1,
      anon_sym_GT,
    ACTIONS(587), 1,
      anon_sym_PUBLIC,
  [3009] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(589), 2,
      anon_sym_yes,
      anon_sym_no,
  [3017] = 3,
    ACTIONS(566), 1,
      aux_sym_names_token1,
    ACTIONS(568), 1,
      anon_sym_EQ,
    STATE(199), 1,
      sym__eq,
  [3027] = 3,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(532), 1,
      aux_sym_enc_name_token1,
    STATE(280), 1,
      sym_enc_name,
  [3037] = 1,
    ACTIONS(591), 3,
      aux_sym_names_token1,
      anon_sym_SLASH_GT,
      anon_sym_GT,
  [3043] = 1,
    ACTIONS(593), 3,
      aux_sym_names_token1,
      anon_sym_SLASH_GT,
      anon_sym_GT,
  [3049] = 3,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(595), 1,
      anon_sym_GT,
    ACTIONS(597), 1,
      anon_sym_PUBLIC,
  [3059] = 3,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(599), 1,
      anon_sym_LBRACK,
    ACTIONS(601), 1,
      anon_sym_GT,
  [3069] = 3,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(603), 1,
      anon_sym_LBRACK,
    ACTIONS(605), 1,
      anon_sym_GT,
  [3079] = 2,
    ACTIONS(607), 1,
      aux_sym_names_token1,
    ACTIONS(609), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3087] = 3,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(611), 1,
      anon_sym_DQUOTE,
    ACTIONS(613), 1,
      anon_sym_SQUOTE,
  [3097] = 3,
    ACTIONS(615), 1,
      aux_sym_names_token1,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(619), 1,
      anon_sym_SQUOTE,
  [3107] = 3,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(621), 1,
      anon_sym_GT,
    ACTIONS(623), 1,
      anon_sym_PUBLIC,
  [3117] = 3,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(476), 1,
      anon_sym_standalone,
    ACTIONS(625), 1,
      anon_sym_QMARK_GT,
  [3127] = 3,
    ACTIONS(544), 1,
      aux_sym_names_token1,
    ACTIONS(627), 1,
      anon_sym_LT_BANGNOTATION,
    STATE(172), 1,
      aux_sym_doctype_decl_repeat2,
  [3137] = 3,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(629), 1,
      anon_sym_DQUOTE,
    ACTIONS(631), 1,
      anon_sym_SQUOTE,
  [3147] = 3,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(633), 1,
      anon_sym_GT,
    ACTIONS(635), 1,
      anon_sym_PUBLIC,
  [3157] = 3,
    ACTIONS(474), 1,
      anon_sym_QMARK_GT,
    ACTIONS(637), 1,
      aux_sym_names_token1,
    STATE(305), 1,
      sym_standalone_decl,
  [3167] = 3,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(639), 1,
      anon_sym_GT,
    ACTIONS(641), 1,
      anon_sym_PUBLIC,
  [3177] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(643), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3185] = 3,
    ACTIONS(566), 1,
      aux_sym_names_token1,
    ACTIONS(568), 1,
      anon_sym_EQ,
    STATE(142), 1,
      sym__eq,
  [3195] = 3,
    ACTIONS(603), 1,
      anon_sym_LBRACK,
    ACTIONS(605), 1,
      anon_sym_GT,
    ACTIONS(645), 1,
      aux_sym_names_token1,
  [3205] = 3,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(532), 1,
      aux_sym_enc_name_token1,
    STATE(297), 1,
      sym_enc_name,
  [3215] = 3,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(647), 1,
      anon_sym_GT,
    ACTIONS(649), 1,
      anon_sym_PUBLIC,
  [3225] = 3,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(651), 1,
      anon_sym_GT,
    ACTIONS(653), 1,
      anon_sym_PUBLIC,
  [3235] = 3,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
    ACTIONS(558), 1,
      anon_sym_PIPE,
  [3245] = 3,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(532), 1,
      aux_sym_enc_name_token1,
    STATE(298), 1,
      sym_enc_name,
  [3255] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(655), 1,
      anon_sym_LPAREN,
  [3262] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(657), 1,
      anon_sym_EQ,
  [3269] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(659), 1,
      aux_sym_char_ref_token1,
  [3276] = 2,
    ACTIONS(661), 1,
      aux_sym_names_token1,
    ACTIONS(663), 1,
      anon_sym_GT,
  [3283] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(665), 1,
      anon_sym_LT_BANGNOTATION,
  [3290] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(659), 1,
      aux_sym_version_info_token1,
  [3297] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(667), 1,
      anon_sym_LT_BANGNOTATION,
  [3304] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(669), 1,
      aux_sym_version_info_token1,
  [3311] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(671), 1,
      aux_sym_char_ref_token1,
  [3318] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(671), 1,
      aux_sym_version_info_token1,
  [3325] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(673), 1,
      anon_sym_SEMI,
  [3332] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(675), 1,
      anon_sym_GT,
  [3339] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(677), 1,
      anon_sym_LT_BANGNOTATION,
  [3346] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(679), 1,
      anon_sym_SEMI,
  [3353] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(669), 1,
      aux_sym_char_ref_token1,
  [3360] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(681), 1,
      anon_sym_PERCENT,
  [3367] = 2,
    ACTIONS(7), 1,
      aux_sym_names_token1,
    ACTIONS(683), 1,
      aux_sym_cd_sect_token1,
  [3374] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(685), 1,
      anon_sym_LT_BANGNOTATION,
  [3381] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(687), 1,
      ts_builtin_sym_end,
  [3388] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(689), 1,
      aux_sym_comment_token1,
  [3395] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(691), 1,
      anon_sym_SEMI,
  [3402] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(693), 1,
      anon_sym_GT,
  [3409] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(695), 1,
      anon_sym_SEMI,
  [3416] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(697), 1,
      anon_sym_GT,
  [3423] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(699), 1,
      anon_sym_PERCENT,
  [3430] = 1,
    ACTIONS(701), 2,
      aux_sym_names_token1,
      anon_sym_QMARK_GT,
  [3435] = 2,
    ACTIONS(703), 1,
      aux_sym_names_token1,
    ACTIONS(705), 1,
      anon_sym_QMARK_GT,
  [3442] = 2,
    ACTIONS(707), 1,
      aux_sym_names_token1,
    ACTIONS(709), 1,
      anon_sym_GT,
  [3449] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(711), 1,
      anon_sym_SEMI,
  [3456] = 1,
    ACTIONS(713), 2,
      aux_sym_names_token1,
      anon_sym_LT_BANGNOTATION,
  [3461] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(715), 1,
      anon_sym_SEMI,
  [3468] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(717), 1,
      anon_sym_PERCENT,
  [3475] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(719), 1,
      anon_sym_GT,
  [3482] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(721), 1,
      anon_sym_SEMI,
  [3489] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(723), 1,
      anon_sym_PERCENT,
  [3496] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(593), 1,
      anon_sym_GT,
  [3503] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(725), 1,
      anon_sym_PERCENT,
  [3510] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(542), 1,
      anon_sym_GT,
  [3517] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(727), 1,
      anon_sym_GT,
  [3524] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(729), 1,
      anon_sym_RBRACK_RBRACK_GT,
  [3531] = 2,
    ACTIONS(7), 1,
      aux_sym_names_token1,
    ACTIONS(731), 1,
      aux_sym_processing_instructions_token1,
  [3538] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(733), 1,
      anon_sym_SEMI,
  [3545] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(735), 1,
      anon_sym_PERCENT,
  [3552] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(737), 1,
      anon_sym_GT,
  [3559] = 1,
    ACTIONS(739), 2,
      aux_sym_names_token1,
      anon_sym_QMARK_GT,
  [3564] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(741), 1,
      anon_sym_PERCENT,
  [3571] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(743), 1,
      anon_sym_QMARK_GT,
  [3578] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(745), 1,
      anon_sym_SLASH_GT,
  [3585] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(747), 1,
      anon_sym_GT,
  [3592] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(749), 1,
      anon_sym_PERCENT,
  [3599] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(751), 1,
      anon_sym_EQ,
  [3606] = 1,
    ACTIONS(753), 2,
      aux_sym_names_token1,
      anon_sym_QMARK_GT,
  [3611] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(755), 1,
      anon_sym_GT,
  [3618] = 1,
    ACTIONS(757), 2,
      aux_sym_names_token1,
      anon_sym_LT_BANGNOTATION,
  [3623] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(759), 1,
      anon_sym_LT_BANGNOTATION,
  [3630] = 2,
    ACTIONS(474), 1,
      anon_sym_QMARK_GT,
    ACTIONS(761), 1,
      aux_sym_names_token1,
  [3637] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(763), 1,
      anon_sym_GT,
  [3644] = 1,
    ACTIONS(765), 2,
      aux_sym_names_token1,
      anon_sym_LT_BANGNOTATION,
  [3649] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(767), 1,
      anon_sym_1_DOT,
  [3656] = 1,
    ACTIONS(769), 2,
      aux_sym_names_token1,
      anon_sym_LT_BANGNOTATION,
  [3661] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(771), 1,
      anon_sym_GT,
  [3668] = 2,
    ACTIONS(773), 1,
      aux_sym_names_token1,
    ACTIONS(775), 1,
      anon_sym_SLASH_GT,
  [3675] = 1,
    ACTIONS(777), 2,
      aux_sym_names_token1,
      anon_sym_QMARK_GT,
  [3680] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(779), 1,
      anon_sym_SQUOTE,
  [3687] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(779), 1,
      anon_sym_DQUOTE,
  [3694] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(781), 1,
      anon_sym_SEMI,
  [3701] = 1,
    ACTIONS(783), 2,
      aux_sym_names_token1,
      anon_sym_LT_BANGNOTATION,
  [3706] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(785), 1,
      anon_sym_GT,
  [3713] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(787), 1,
      anon_sym_1_DOT,
  [3720] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(789), 1,
      anon_sym_PERCENT,
  [3727] = 2,
    ACTIONS(791), 1,
      aux_sym_names_token1,
    ACTIONS(793), 1,
      anon_sym_EQ,
  [3734] = 2,
    ACTIONS(795), 1,
      aux_sym_names_token1,
    ACTIONS(797), 1,
      anon_sym_GT,
  [3741] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(799), 1,
      anon_sym_GT,
  [3748] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(801), 1,
      anon_sym_SEMI,
  [3755] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(803), 1,
      anon_sym_PERCENT,
  [3762] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(805), 1,
      anon_sym_SEMI,
  [3769] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(807), 1,
      anon_sym_GT,
  [3776] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(809), 1,
      anon_sym_SEMI,
  [3783] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(811), 1,
      anon_sym_PERCENT,
  [3790] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(625), 1,
      anon_sym_QMARK_GT,
  [3797] = 1,
    ACTIONS(813), 2,
      aux_sym_names_token1,
      anon_sym_QMARK_GT,
  [3802] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(815), 1,
      anon_sym_SQUOTE,
  [3809] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(815), 1,
      anon_sym_DQUOTE,
  [3816] = 1,
    ACTIONS(817), 2,
      aux_sym_names_token1,
      anon_sym_QMARK_GT,
  [3821] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(819), 1,
      anon_sym_SQUOTE,
  [3828] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(821), 1,
      anon_sym_GT,
  [3835] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(823), 1,
      anon_sym_GT,
  [3842] = 1,
    ACTIONS(825), 2,
      aux_sym_names_token1,
      anon_sym_LT_BANGNOTATION,
  [3847] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(558), 1,
      anon_sym_PIPE,
  [3854] = 2,
    ACTIONS(625), 1,
      anon_sym_QMARK_GT,
    ACTIONS(827), 1,
      aux_sym_names_token1,
  [3861] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(819), 1,
      anon_sym_DQUOTE,
  [3868] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(829), 1,
      anon_sym_SEMI,
  [3875] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(831), 1,
      anon_sym_PERCENT,
  [3882] = 1,
    ACTIONS(833), 2,
      aux_sym_names_token1,
      anon_sym_LT_BANGNOTATION,
  [3887] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(835), 1,
      anon_sym_GT,
  [3894] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(837), 1,
      anon_sym_GT,
  [3901] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(839), 1,
      anon_sym_SEMI,
  [3908] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(841), 1,
      anon_sym_PERCENT,
  [3915] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(843), 1,
      anon_sym_SEMI,
  [3922] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(845), 1,
      aux_sym_version_info_token1,
  [3929] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(847), 1,
      anon_sym_SEMI,
  [3936] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(849), 1,
      anon_sym_PERCENT,
  [3943] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(851), 1,
      aux_sym_version_info_token1,
  [3950] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(853), 1,
      anon_sym_LT_BANGNOTATION,
  [3957] = 1,
    ACTIONS(855), 2,
      aux_sym_names_token1,
      anon_sym_LT_BANGNOTATION,
  [3962] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(857), 1,
      anon_sym_GT,
  [3969] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(859), 1,
      anon_sym_GT,
  [3976] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(861), 1,
      anon_sym_GT,
  [3983] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(863), 1,
      anon_sym_GT,
  [3990] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(865), 1,
      anon_sym_GT,
  [3997] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(867), 1,
      anon_sym_QMARK_GT,
  [4004] = 1,
    ACTIONS(869), 2,
      aux_sym_names_token1,
      anon_sym_LT_BANGNOTATION,
  [4009] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(871), 1,
      anon_sym_SQUOTE,
  [4016] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
  [4023] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
  [4030] = 1,
    ACTIONS(875), 2,
      aux_sym_names_token1,
      anon_sym_LT_BANGNOTATION,
  [4035] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(873), 1,
      anon_sym_DQUOTE,
  [4042] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(877), 1,
      anon_sym_GT,
  [4049] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(879), 1,
      anon_sym_SEMI,
  [4056] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(881), 1,
      anon_sym_PERCENT,
  [4063] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(883), 1,
      anon_sym_SEMI,
  [4070] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(885), 1,
      anon_sym_SEMI,
  [4077] = 2,
    ACTIONS(7), 1,
      aux_sym_names_token1,
    ACTIONS(887), 1,
      aux_sym_system_literal_token1,
  [4084] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(889), 1,
      anon_sym_SEMI,
  [4091] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(891), 1,
      anon_sym_PERCENT,
  [4098] = 2,
    ACTIONS(7), 1,
      aux_sym_names_token1,
    ACTIONS(893), 1,
      aux_sym_system_literal_token1,
  [4105] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(895), 1,
      anon_sym_SEMI,
  [4112] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(897), 1,
      anon_sym_SEMI,
  [4119] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(899), 1,
      anon_sym_GT,
  [4126] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(601), 1,
      anon_sym_GT,
  [4133] = 1,
    ACTIONS(901), 2,
      aux_sym_names_token1,
      anon_sym_LT_BANGNOTATION,
  [4138] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(903), 1,
      anon_sym_GT,
  [4145] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(905), 1,
      anon_sym_SQUOTE,
  [4152] = 1,
    ACTIONS(907), 2,
      aux_sym_names_token1,
      anon_sym_LT_BANGNOTATION,
  [4157] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(905), 1,
      anon_sym_DQUOTE,
  [4164] = 2,
    ACTIONS(3), 1,
      aux_sym_names_token1,
    ACTIONS(909), 1,
      anon_sym_GT,
  [4171] = 1,
    ACTIONS(911), 1,
      aux_sym_names_token1,
  [4175] = 1,
    ACTIONS(913), 1,
      aux_sym_names_token1,
  [4179] = 1,
    ACTIONS(915), 1,
      aux_sym_names_token1,
  [4183] = 1,
    ACTIONS(917), 1,
      aux_sym_names_token1,
  [4187] = 1,
    ACTIONS(919), 1,
      aux_sym_names_token1,
  [4191] = 1,
    ACTIONS(921), 1,
      aux_sym_names_token1,
  [4195] = 1,
    ACTIONS(923), 1,
      aux_sym_names_token1,
  [4199] = 1,
    ACTIONS(925), 1,
      aux_sym_names_token1,
  [4203] = 1,
    ACTIONS(927), 1,
      aux_sym_names_token1,
  [4207] = 1,
    ACTIONS(929), 1,
      aux_sym_names_token1,
  [4211] = 1,
    ACTIONS(931), 1,
      aux_sym_names_token1,
  [4215] = 1,
    ACTIONS(933), 1,
      aux_sym_names_token1,
  [4219] = 1,
    ACTIONS(935), 1,
      aux_sym_names_token1,
  [4223] = 1,
    ACTIONS(937), 1,
      aux_sym_names_token1,
  [4227] = 1,
    ACTIONS(939), 1,
      aux_sym_names_token1,
  [4231] = 1,
    ACTIONS(941), 1,
      aux_sym_names_token1,
  [4235] = 1,
    ACTIONS(943), 1,
      aux_sym_names_token1,
  [4239] = 1,
    ACTIONS(945), 1,
      aux_sym_names_token1,
  [4243] = 1,
    ACTIONS(947), 1,
      aux_sym_names_token1,
  [4247] = 1,
    ACTIONS(949), 1,
      aux_sym_names_token1,
  [4251] = 1,
    ACTIONS(951), 1,
      aux_sym_names_token1,
  [4255] = 1,
    ACTIONS(953), 1,
      aux_sym_names_token1,
  [4259] = 1,
    ACTIONS(955), 1,
      aux_sym_names_token1,
  [4263] = 1,
    ACTIONS(957), 1,
      aux_sym_names_token1,
  [4267] = 1,
    ACTIONS(959), 1,
      aux_sym_names_token1,
  [4271] = 1,
    ACTIONS(961), 1,
      aux_sym_names_token1,
  [4275] = 1,
    ACTIONS(963), 1,
      aux_sym_names_token1,
  [4279] = 1,
    ACTIONS(965), 1,
      aux_sym_names_token1,
  [4283] = 1,
    ACTIONS(967), 1,
      aux_sym_names_token1,
  [4287] = 1,
    ACTIONS(969), 1,
      aux_sym_names_token1,
  [4291] = 1,
    ACTIONS(971), 1,
      aux_sym_names_token1,
  [4295] = 1,
    ACTIONS(973), 1,
      aux_sym_names_token1,
  [4299] = 1,
    ACTIONS(975), 1,
      aux_sym_names_token1,
  [4303] = 1,
    ACTIONS(977), 1,
      aux_sym_names_token1,
  [4307] = 1,
    ACTIONS(979), 1,
      aux_sym_names_token1,
  [4311] = 1,
    ACTIONS(981), 1,
      aux_sym_names_token1,
  [4315] = 1,
    ACTIONS(983), 1,
      aux_sym_names_token1,
  [4319] = 1,
    ACTIONS(985), 1,
      aux_sym_names_token1,
  [4323] = 1,
    ACTIONS(987), 1,
      aux_sym_names_token1,
  [4327] = 1,
    ACTIONS(989), 1,
      aux_sym_names_token1,
  [4331] = 1,
    ACTIONS(991), 1,
      aux_sym_names_token1,
  [4335] = 1,
    ACTIONS(993), 1,
      aux_sym_names_token1,
  [4339] = 1,
    ACTIONS(995), 1,
      aux_sym_names_token1,
  [4343] = 1,
    ACTIONS(997), 1,
      aux_sym_names_token1,
  [4347] = 1,
    ACTIONS(999), 1,
      aux_sym_names_token1,
  [4351] = 1,
    ACTIONS(1001), 1,
      aux_sym_names_token1,
  [4355] = 1,
    ACTIONS(1003), 1,
      aux_sym_names_token1,
  [4359] = 1,
    ACTIONS(1005), 1,
      aux_sym_names_token1,
  [4363] = 1,
    ACTIONS(1007), 1,
      aux_sym_names_token1,
  [4367] = 1,
    ACTIONS(1009), 1,
      aux_sym_names_token1,
  [4371] = 1,
    ACTIONS(1011), 1,
      aux_sym_names_token1,
  [4375] = 1,
    ACTIONS(1013), 1,
      aux_sym_names_token1,
  [4379] = 1,
    ACTIONS(1015), 1,
      aux_sym_names_token1,
  [4383] = 1,
    ACTIONS(1017), 1,
      aux_sym_names_token1,
  [4387] = 1,
    ACTIONS(1019), 1,
      aux_sym_names_token1,
  [4391] = 1,
    ACTIONS(1021), 1,
      aux_sym_names_token1,
  [4395] = 1,
    ACTIONS(1023), 1,
      aux_sym_names_token1,
  [4399] = 1,
    ACTIONS(1025), 1,
      aux_sym_names_token1,
  [4403] = 1,
    ACTIONS(1027), 1,
      aux_sym_names_token1,
  [4407] = 1,
    ACTIONS(1029), 1,
      aux_sym_names_token1,
  [4411] = 1,
    ACTIONS(1031), 1,
      aux_sym_names_token1,
  [4415] = 1,
    ACTIONS(1033), 1,
      aux_sym_names_token1,
  [4419] = 1,
    ACTIONS(1035), 1,
      aux_sym_names_token1,
  [4423] = 1,
    ACTIONS(1037), 1,
      aux_sym_names_token1,
  [4427] = 1,
    ACTIONS(1039), 1,
      aux_sym_names_token1,
  [4431] = 1,
    ACTIONS(1041), 1,
      aux_sym_names_token1,
  [4435] = 1,
    ACTIONS(1043), 1,
      aux_sym_names_token1,
  [4439] = 1,
    ACTIONS(1045), 1,
      aux_sym_names_token1,
  [4443] = 1,
    ACTIONS(1047), 1,
      aux_sym_names_token1,
  [4447] = 1,
    ACTIONS(1049), 1,
      aux_sym_names_token1,
  [4451] = 1,
    ACTIONS(1051), 1,
      aux_sym_names_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 59,
  [SMALL_STATE(4)] = 118,
  [SMALL_STATE(5)] = 143,
  [SMALL_STATE(6)] = 168,
  [SMALL_STATE(7)] = 193,
  [SMALL_STATE(8)] = 214,
  [SMALL_STATE(9)] = 235,
  [SMALL_STATE(10)] = 256,
  [SMALL_STATE(11)] = 277,
  [SMALL_STATE(12)] = 298,
  [SMALL_STATE(13)] = 319,
  [SMALL_STATE(14)] = 340,
  [SMALL_STATE(15)] = 361,
  [SMALL_STATE(16)] = 382,
  [SMALL_STATE(17)] = 403,
  [SMALL_STATE(18)] = 424,
  [SMALL_STATE(19)] = 445,
  [SMALL_STATE(20)] = 466,
  [SMALL_STATE(21)] = 487,
  [SMALL_STATE(22)] = 508,
  [SMALL_STATE(23)] = 529,
  [SMALL_STATE(24)] = 550,
  [SMALL_STATE(25)] = 571,
  [SMALL_STATE(26)] = 592,
  [SMALL_STATE(27)] = 613,
  [SMALL_STATE(28)] = 634,
  [SMALL_STATE(29)] = 655,
  [SMALL_STATE(30)] = 676,
  [SMALL_STATE(31)] = 697,
  [SMALL_STATE(32)] = 718,
  [SMALL_STATE(33)] = 739,
  [SMALL_STATE(34)] = 759,
  [SMALL_STATE(35)] = 779,
  [SMALL_STATE(36)] = 799,
  [SMALL_STATE(37)] = 818,
  [SMALL_STATE(38)] = 839,
  [SMALL_STATE(39)] = 860,
  [SMALL_STATE(40)] = 881,
  [SMALL_STATE(41)] = 899,
  [SMALL_STATE(42)] = 925,
  [SMALL_STATE(43)] = 951,
  [SMALL_STATE(44)] = 977,
  [SMALL_STATE(45)] = 1003,
  [SMALL_STATE(46)] = 1029,
  [SMALL_STATE(47)] = 1047,
  [SMALL_STATE(48)] = 1073,
  [SMALL_STATE(49)] = 1099,
  [SMALL_STATE(50)] = 1117,
  [SMALL_STATE(51)] = 1143,
  [SMALL_STATE(52)] = 1161,
  [SMALL_STATE(53)] = 1187,
  [SMALL_STATE(54)] = 1213,
  [SMALL_STATE(55)] = 1236,
  [SMALL_STATE(56)] = 1259,
  [SMALL_STATE(57)] = 1279,
  [SMALL_STATE(58)] = 1299,
  [SMALL_STATE(59)] = 1319,
  [SMALL_STATE(60)] = 1339,
  [SMALL_STATE(61)] = 1359,
  [SMALL_STATE(62)] = 1379,
  [SMALL_STATE(63)] = 1399,
  [SMALL_STATE(64)] = 1414,
  [SMALL_STATE(65)] = 1433,
  [SMALL_STATE(66)] = 1446,
  [SMALL_STATE(67)] = 1465,
  [SMALL_STATE(68)] = 1484,
  [SMALL_STATE(69)] = 1501,
  [SMALL_STATE(70)] = 1516,
  [SMALL_STATE(71)] = 1535,
  [SMALL_STATE(72)] = 1548,
  [SMALL_STATE(73)] = 1567,
  [SMALL_STATE(74)] = 1584,
  [SMALL_STATE(75)] = 1601,
  [SMALL_STATE(76)] = 1616,
  [SMALL_STATE(77)] = 1635,
  [SMALL_STATE(78)] = 1648,
  [SMALL_STATE(79)] = 1667,
  [SMALL_STATE(80)] = 1680,
  [SMALL_STATE(81)] = 1693,
  [SMALL_STATE(82)] = 1712,
  [SMALL_STATE(83)] = 1725,
  [SMALL_STATE(84)] = 1735,
  [SMALL_STATE(85)] = 1749,
  [SMALL_STATE(86)] = 1759,
  [SMALL_STATE(87)] = 1773,
  [SMALL_STATE(88)] = 1783,
  [SMALL_STATE(89)] = 1793,
  [SMALL_STATE(90)] = 1807,
  [SMALL_STATE(91)] = 1821,
  [SMALL_STATE(92)] = 1835,
  [SMALL_STATE(93)] = 1849,
  [SMALL_STATE(94)] = 1863,
  [SMALL_STATE(95)] = 1877,
  [SMALL_STATE(96)] = 1891,
  [SMALL_STATE(97)] = 1905,
  [SMALL_STATE(98)] = 1915,
  [SMALL_STATE(99)] = 1925,
  [SMALL_STATE(100)] = 1939,
  [SMALL_STATE(101)] = 1949,
  [SMALL_STATE(102)] = 1963,
  [SMALL_STATE(103)] = 1977,
  [SMALL_STATE(104)] = 1991,
  [SMALL_STATE(105)] = 2005,
  [SMALL_STATE(106)] = 2019,
  [SMALL_STATE(107)] = 2035,
  [SMALL_STATE(108)] = 2049,
  [SMALL_STATE(109)] = 2063,
  [SMALL_STATE(110)] = 2077,
  [SMALL_STATE(111)] = 2091,
  [SMALL_STATE(112)] = 2105,
  [SMALL_STATE(113)] = 2121,
  [SMALL_STATE(114)] = 2135,
  [SMALL_STATE(115)] = 2149,
  [SMALL_STATE(116)] = 2159,
  [SMALL_STATE(117)] = 2169,
  [SMALL_STATE(118)] = 2183,
  [SMALL_STATE(119)] = 2197,
  [SMALL_STATE(120)] = 2207,
  [SMALL_STATE(121)] = 2217,
  [SMALL_STATE(122)] = 2227,
  [SMALL_STATE(123)] = 2241,
  [SMALL_STATE(124)] = 2255,
  [SMALL_STATE(125)] = 2269,
  [SMALL_STATE(126)] = 2279,
  [SMALL_STATE(127)] = 2293,
  [SMALL_STATE(128)] = 2307,
  [SMALL_STATE(129)] = 2321,
  [SMALL_STATE(130)] = 2335,
  [SMALL_STATE(131)] = 2351,
  [SMALL_STATE(132)] = 2361,
  [SMALL_STATE(133)] = 2375,
  [SMALL_STATE(134)] = 2385,
  [SMALL_STATE(135)] = 2395,
  [SMALL_STATE(136)] = 2409,
  [SMALL_STATE(137)] = 2423,
  [SMALL_STATE(138)] = 2437,
  [SMALL_STATE(139)] = 2450,
  [SMALL_STATE(140)] = 2463,
  [SMALL_STATE(141)] = 2476,
  [SMALL_STATE(142)] = 2489,
  [SMALL_STATE(143)] = 2502,
  [SMALL_STATE(144)] = 2515,
  [SMALL_STATE(145)] = 2528,
  [SMALL_STATE(146)] = 2541,
  [SMALL_STATE(147)] = 2554,
  [SMALL_STATE(148)] = 2567,
  [SMALL_STATE(149)] = 2580,
  [SMALL_STATE(150)] = 2593,
  [SMALL_STATE(151)] = 2606,
  [SMALL_STATE(152)] = 2619,
  [SMALL_STATE(153)] = 2632,
  [SMALL_STATE(154)] = 2645,
  [SMALL_STATE(155)] = 2658,
  [SMALL_STATE(156)] = 2671,
  [SMALL_STATE(157)] = 2684,
  [SMALL_STATE(158)] = 2697,
  [SMALL_STATE(159)] = 2710,
  [SMALL_STATE(160)] = 2723,
  [SMALL_STATE(161)] = 2736,
  [SMALL_STATE(162)] = 2747,
  [SMALL_STATE(163)] = 2760,
  [SMALL_STATE(164)] = 2771,
  [SMALL_STATE(165)] = 2784,
  [SMALL_STATE(166)] = 2797,
  [SMALL_STATE(167)] = 2807,
  [SMALL_STATE(168)] = 2815,
  [SMALL_STATE(169)] = 2823,
  [SMALL_STATE(170)] = 2831,
  [SMALL_STATE(171)] = 2837,
  [SMALL_STATE(172)] = 2845,
  [SMALL_STATE(173)] = 2855,
  [SMALL_STATE(174)] = 2861,
  [SMALL_STATE(175)] = 2871,
  [SMALL_STATE(176)] = 2877,
  [SMALL_STATE(177)] = 2883,
  [SMALL_STATE(178)] = 2893,
  [SMALL_STATE(179)] = 2903,
  [SMALL_STATE(180)] = 2913,
  [SMALL_STATE(181)] = 2923,
  [SMALL_STATE(182)] = 2933,
  [SMALL_STATE(183)] = 2943,
  [SMALL_STATE(184)] = 2953,
  [SMALL_STATE(185)] = 2959,
  [SMALL_STATE(186)] = 2969,
  [SMALL_STATE(187)] = 2979,
  [SMALL_STATE(188)] = 2989,
  [SMALL_STATE(189)] = 2999,
  [SMALL_STATE(190)] = 3009,
  [SMALL_STATE(191)] = 3017,
  [SMALL_STATE(192)] = 3027,
  [SMALL_STATE(193)] = 3037,
  [SMALL_STATE(194)] = 3043,
  [SMALL_STATE(195)] = 3049,
  [SMALL_STATE(196)] = 3059,
  [SMALL_STATE(197)] = 3069,
  [SMALL_STATE(198)] = 3079,
  [SMALL_STATE(199)] = 3087,
  [SMALL_STATE(200)] = 3097,
  [SMALL_STATE(201)] = 3107,
  [SMALL_STATE(202)] = 3117,
  [SMALL_STATE(203)] = 3127,
  [SMALL_STATE(204)] = 3137,
  [SMALL_STATE(205)] = 3147,
  [SMALL_STATE(206)] = 3157,
  [SMALL_STATE(207)] = 3167,
  [SMALL_STATE(208)] = 3177,
  [SMALL_STATE(209)] = 3185,
  [SMALL_STATE(210)] = 3195,
  [SMALL_STATE(211)] = 3205,
  [SMALL_STATE(212)] = 3215,
  [SMALL_STATE(213)] = 3225,
  [SMALL_STATE(214)] = 3235,
  [SMALL_STATE(215)] = 3245,
  [SMALL_STATE(216)] = 3255,
  [SMALL_STATE(217)] = 3262,
  [SMALL_STATE(218)] = 3269,
  [SMALL_STATE(219)] = 3276,
  [SMALL_STATE(220)] = 3283,
  [SMALL_STATE(221)] = 3290,
  [SMALL_STATE(222)] = 3297,
  [SMALL_STATE(223)] = 3304,
  [SMALL_STATE(224)] = 3311,
  [SMALL_STATE(225)] = 3318,
  [SMALL_STATE(226)] = 3325,
  [SMALL_STATE(227)] = 3332,
  [SMALL_STATE(228)] = 3339,
  [SMALL_STATE(229)] = 3346,
  [SMALL_STATE(230)] = 3353,
  [SMALL_STATE(231)] = 3360,
  [SMALL_STATE(232)] = 3367,
  [SMALL_STATE(233)] = 3374,
  [SMALL_STATE(234)] = 3381,
  [SMALL_STATE(235)] = 3388,
  [SMALL_STATE(236)] = 3395,
  [SMALL_STATE(237)] = 3402,
  [SMALL_STATE(238)] = 3409,
  [SMALL_STATE(239)] = 3416,
  [SMALL_STATE(240)] = 3423,
  [SMALL_STATE(241)] = 3430,
  [SMALL_STATE(242)] = 3435,
  [SMALL_STATE(243)] = 3442,
  [SMALL_STATE(244)] = 3449,
  [SMALL_STATE(245)] = 3456,
  [SMALL_STATE(246)] = 3461,
  [SMALL_STATE(247)] = 3468,
  [SMALL_STATE(248)] = 3475,
  [SMALL_STATE(249)] = 3482,
  [SMALL_STATE(250)] = 3489,
  [SMALL_STATE(251)] = 3496,
  [SMALL_STATE(252)] = 3503,
  [SMALL_STATE(253)] = 3510,
  [SMALL_STATE(254)] = 3517,
  [SMALL_STATE(255)] = 3524,
  [SMALL_STATE(256)] = 3531,
  [SMALL_STATE(257)] = 3538,
  [SMALL_STATE(258)] = 3545,
  [SMALL_STATE(259)] = 3552,
  [SMALL_STATE(260)] = 3559,
  [SMALL_STATE(261)] = 3564,
  [SMALL_STATE(262)] = 3571,
  [SMALL_STATE(263)] = 3578,
  [SMALL_STATE(264)] = 3585,
  [SMALL_STATE(265)] = 3592,
  [SMALL_STATE(266)] = 3599,
  [SMALL_STATE(267)] = 3606,
  [SMALL_STATE(268)] = 3611,
  [SMALL_STATE(269)] = 3618,
  [SMALL_STATE(270)] = 3623,
  [SMALL_STATE(271)] = 3630,
  [SMALL_STATE(272)] = 3637,
  [SMALL_STATE(273)] = 3644,
  [SMALL_STATE(274)] = 3649,
  [SMALL_STATE(275)] = 3656,
  [SMALL_STATE(276)] = 3661,
  [SMALL_STATE(277)] = 3668,
  [SMALL_STATE(278)] = 3675,
  [SMALL_STATE(279)] = 3680,
  [SMALL_STATE(280)] = 3687,
  [SMALL_STATE(281)] = 3694,
  [SMALL_STATE(282)] = 3701,
  [SMALL_STATE(283)] = 3706,
  [SMALL_STATE(284)] = 3713,
  [SMALL_STATE(285)] = 3720,
  [SMALL_STATE(286)] = 3727,
  [SMALL_STATE(287)] = 3734,
  [SMALL_STATE(288)] = 3741,
  [SMALL_STATE(289)] = 3748,
  [SMALL_STATE(290)] = 3755,
  [SMALL_STATE(291)] = 3762,
  [SMALL_STATE(292)] = 3769,
  [SMALL_STATE(293)] = 3776,
  [SMALL_STATE(294)] = 3783,
  [SMALL_STATE(295)] = 3790,
  [SMALL_STATE(296)] = 3797,
  [SMALL_STATE(297)] = 3802,
  [SMALL_STATE(298)] = 3809,
  [SMALL_STATE(299)] = 3816,
  [SMALL_STATE(300)] = 3821,
  [SMALL_STATE(301)] = 3828,
  [SMALL_STATE(302)] = 3835,
  [SMALL_STATE(303)] = 3842,
  [SMALL_STATE(304)] = 3847,
  [SMALL_STATE(305)] = 3854,
  [SMALL_STATE(306)] = 3861,
  [SMALL_STATE(307)] = 3868,
  [SMALL_STATE(308)] = 3875,
  [SMALL_STATE(309)] = 3882,
  [SMALL_STATE(310)] = 3887,
  [SMALL_STATE(311)] = 3894,
  [SMALL_STATE(312)] = 3901,
  [SMALL_STATE(313)] = 3908,
  [SMALL_STATE(314)] = 3915,
  [SMALL_STATE(315)] = 3922,
  [SMALL_STATE(316)] = 3929,
  [SMALL_STATE(317)] = 3936,
  [SMALL_STATE(318)] = 3943,
  [SMALL_STATE(319)] = 3950,
  [SMALL_STATE(320)] = 3957,
  [SMALL_STATE(321)] = 3962,
  [SMALL_STATE(322)] = 3969,
  [SMALL_STATE(323)] = 3976,
  [SMALL_STATE(324)] = 3983,
  [SMALL_STATE(325)] = 3990,
  [SMALL_STATE(326)] = 3997,
  [SMALL_STATE(327)] = 4004,
  [SMALL_STATE(328)] = 4009,
  [SMALL_STATE(329)] = 4016,
  [SMALL_STATE(330)] = 4023,
  [SMALL_STATE(331)] = 4030,
  [SMALL_STATE(332)] = 4035,
  [SMALL_STATE(333)] = 4042,
  [SMALL_STATE(334)] = 4049,
  [SMALL_STATE(335)] = 4056,
  [SMALL_STATE(336)] = 4063,
  [SMALL_STATE(337)] = 4070,
  [SMALL_STATE(338)] = 4077,
  [SMALL_STATE(339)] = 4084,
  [SMALL_STATE(340)] = 4091,
  [SMALL_STATE(341)] = 4098,
  [SMALL_STATE(342)] = 4105,
  [SMALL_STATE(343)] = 4112,
  [SMALL_STATE(344)] = 4119,
  [SMALL_STATE(345)] = 4126,
  [SMALL_STATE(346)] = 4133,
  [SMALL_STATE(347)] = 4138,
  [SMALL_STATE(348)] = 4145,
  [SMALL_STATE(349)] = 4152,
  [SMALL_STATE(350)] = 4157,
  [SMALL_STATE(351)] = 4164,
  [SMALL_STATE(352)] = 4171,
  [SMALL_STATE(353)] = 4175,
  [SMALL_STATE(354)] = 4179,
  [SMALL_STATE(355)] = 4183,
  [SMALL_STATE(356)] = 4187,
  [SMALL_STATE(357)] = 4191,
  [SMALL_STATE(358)] = 4195,
  [SMALL_STATE(359)] = 4199,
  [SMALL_STATE(360)] = 4203,
  [SMALL_STATE(361)] = 4207,
  [SMALL_STATE(362)] = 4211,
  [SMALL_STATE(363)] = 4215,
  [SMALL_STATE(364)] = 4219,
  [SMALL_STATE(365)] = 4223,
  [SMALL_STATE(366)] = 4227,
  [SMALL_STATE(367)] = 4231,
  [SMALL_STATE(368)] = 4235,
  [SMALL_STATE(369)] = 4239,
  [SMALL_STATE(370)] = 4243,
  [SMALL_STATE(371)] = 4247,
  [SMALL_STATE(372)] = 4251,
  [SMALL_STATE(373)] = 4255,
  [SMALL_STATE(374)] = 4259,
  [SMALL_STATE(375)] = 4263,
  [SMALL_STATE(376)] = 4267,
  [SMALL_STATE(377)] = 4271,
  [SMALL_STATE(378)] = 4275,
  [SMALL_STATE(379)] = 4279,
  [SMALL_STATE(380)] = 4283,
  [SMALL_STATE(381)] = 4287,
  [SMALL_STATE(382)] = 4291,
  [SMALL_STATE(383)] = 4295,
  [SMALL_STATE(384)] = 4299,
  [SMALL_STATE(385)] = 4303,
  [SMALL_STATE(386)] = 4307,
  [SMALL_STATE(387)] = 4311,
  [SMALL_STATE(388)] = 4315,
  [SMALL_STATE(389)] = 4319,
  [SMALL_STATE(390)] = 4323,
  [SMALL_STATE(391)] = 4327,
  [SMALL_STATE(392)] = 4331,
  [SMALL_STATE(393)] = 4335,
  [SMALL_STATE(394)] = 4339,
  [SMALL_STATE(395)] = 4343,
  [SMALL_STATE(396)] = 4347,
  [SMALL_STATE(397)] = 4351,
  [SMALL_STATE(398)] = 4355,
  [SMALL_STATE(399)] = 4359,
  [SMALL_STATE(400)] = 4363,
  [SMALL_STATE(401)] = 4367,
  [SMALL_STATE(402)] = 4371,
  [SMALL_STATE(403)] = 4375,
  [SMALL_STATE(404)] = 4379,
  [SMALL_STATE(405)] = 4383,
  [SMALL_STATE(406)] = 4387,
  [SMALL_STATE(407)] = 4391,
  [SMALL_STATE(408)] = 4395,
  [SMALL_STATE(409)] = 4399,
  [SMALL_STATE(410)] = 4403,
  [SMALL_STATE(411)] = 4407,
  [SMALL_STATE(412)] = 4411,
  [SMALL_STATE(413)] = 4415,
  [SMALL_STATE(414)] = 4419,
  [SMALL_STATE(415)] = 4423,
  [SMALL_STATE(416)] = 4427,
  [SMALL_STATE(417)] = 4431,
  [SMALL_STATE(418)] = 4435,
  [SMALL_STATE(419)] = 4439,
  [SMALL_STATE(420)] = 4443,
  [SMALL_STATE(421)] = 4447,
  [SMALL_STATE(422)] = 4451,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(2),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(106),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(74),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(359),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(422),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(103),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(107),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(223),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(230),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(110),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(232),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name, 1),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__name_repeat1, 2), SHIFT_REPEAT(5),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__name_repeat1, 2), SHIFT_REPEAT(5),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__name_repeat1, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3, .production_id = 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3, .production_id = 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype_decl, 10, .production_id = 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype_decl, 10, .production_id = 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4, .production_id = 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4, .production_id = 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_elem_tag, 4, .production_id = 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_elem_tag, 4, .production_id = 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_decl, 4),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_decl, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype_decl, 8, .production_id = 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype_decl, 8, .production_id = 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cd_sect, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cd_sect, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype_decl, 6, .production_id = 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype_decl, 6, .production_id = 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype_decl, 5, .production_id = 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype_decl, 5, .production_id = 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_ref, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_ref, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3, .production_id = 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3, .production_id = 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_decl, 6),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_decl, 6),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_decl, 7),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_decl, 7),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype_decl, 9, .production_id = 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype_decl, 9, .production_id = 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 5, .production_id = 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 5, .production_id = 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_elem_tag, 3, .production_id = 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_elem_tag, 3, .production_id = 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_decl, 5),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_decl, 5),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_elem_tag, 5, .production_id = 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_elem_tag, 5, .production_id = 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype_decl, 7, .production_id = 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype_decl, 7, .production_id = 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_processing_instructions, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_processing_instructions, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_processing_instructions, 5),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_processing_instructions, 5),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 4, .production_id = 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 4, .production_id = 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doctype_decl_repeat1, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doctype_decl_repeat1, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doctype_decl_repeat1, 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__name_repeat1, 2), SHIFT_REPEAT(38),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__name_repeat1, 2), SHIFT_REPEAT(38),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_value_repeat1, 2),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_value_repeat1, 2), SHIFT_REPEAT(41),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_value_repeat1, 2), SHIFT_REPEAT(225),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_value_repeat1, 2), SHIFT_REPEAT(224),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_value_repeat1, 2), SHIFT_REPEAT(89),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_value_repeat1, 2), SHIFT_REPEAT(44),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_value_repeat1, 2), SHIFT_REPEAT(221),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_value_repeat1, 2), SHIFT_REPEAT(218),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_value_repeat1, 2), SHIFT_REPEAT(86),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enc_name, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doctype_decl_repeat3, 2), SHIFT_REPEAT(361),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doctype_decl_repeat3, 2), SHIFT_REPEAT(358),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doctype_decl_repeat3, 2), SHIFT_REPEAT(357),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doctype_decl_repeat3, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enc_name, 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enc_name_repeat1, 2), SHIFT_REPEAT(75),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enc_name_repeat1, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doctype_decl_repeat3, 18, .production_id = 13),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doctype_decl_repeat3, 17, .production_id = 9),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doctype_decl_repeat3, 16, .production_id = 8),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doctype_decl_repeat3, 16, .production_id = 13),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doctype_decl_repeat3, 16, .production_id = 12),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doctype_decl_repeat3, 15, .production_id = 11),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doctype_decl_repeat3, 15, .production_id = 6),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doctype_decl_repeat3, 15, .production_id = 9),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doctype_decl_repeat3, 17, .production_id = 14),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doctype_decl_repeat3, 12, .production_id = 5),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doctype_decl_repeat3, 17, .production_id = 11),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doctype_decl_repeat3, 18, .production_id = 12),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doctype_decl_repeat3, 14, .production_id = 8),
  [437] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(235),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(130),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doctype_decl_repeat3, 19, .production_id = 14),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doctype_decl_repeat3, 14, .production_id = 5),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doctype_decl_repeat3, 13, .production_id = 6),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pubid_literal_repeat1, 2),
  [457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pubid_literal_repeat1, 2), SHIFT_REPEAT(139),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doctype_decl_repeat1, 2), SHIFT_REPEAT(304),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doctype_decl_repeat1, 2), SHIFT_REPEAT(49),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(73),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [521] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pubid_literal_repeat1, 2), SHIFT_REPEAT(162),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__eq, 2),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 2),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_id, 3),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_id, 5),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_literal, 3),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doctype_decl_repeat2, 2), SHIFT_REPEAT(128),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doctype_decl_repeat2, 2),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 3),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 3),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__eq, 1),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__eq, 3),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [687] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pi_target, 1),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doctype_decl_repeat2, 7, .production_id = 4),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_encoding_decl, 6),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_encoding_decl, 8),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doctype_decl_repeat2, 9, .production_id = 4),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doctype_decl_repeat2, 16, .production_id = 10),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doctype_decl_repeat2, 15, .production_id = 7),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_encoding_decl, 7),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doctype_decl_repeat2, 15, .production_id = 10),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_info, 6),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standalone_decl, 6),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doctype_decl_repeat2, 14, .production_id = 7),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doctype_decl_repeat2, 14, .production_id = 10),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doctype_decl_repeat2, 13, .production_id = 7),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doctype_decl_repeat2, 11, .production_id = 7),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doctype_decl_repeat2, 13, .production_id = 10),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doctype_decl_repeat2, 12, .production_id = 10),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doctype_decl_repeat2, 12, .production_id = 7),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pubid_literal, 2),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pubid_literal, 3),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_xml(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .field_count = FIELD_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
