/*
 * Copyright (C) 2018 Alexander Borisov
 *
 * Author: Alexander Borisov <lex.borisov@gmail.com>
 */

#ifndef LEXBOR_DOM_INTERFACES_H
#define LEXBOR_DOM_INTERFACES_H

#ifdef __cplusplus
extern "C" {
#endif

#include <lexbor/html/base.h>


#define lxb_dom_interface_cdata_section(obj) ((lxb_dom_cdata_section_t *) obj)
#define lxb_dom_interface_character_data(obj) ((lxb_dom_character_data_t *) obj)
#define lxb_dom_interface_comment(obj) ((lxb_dom_comment_t *) obj)
#define lxb_dom_interface_document(obj) ((lxb_dom_document_t *) obj)
#define lxb_dom_interface_document_fragment(obj) ((lxb_dom_document_fragment_t *) obj)
#define lxb_dom_interface_document_type(obj) ((lxb_dom_document_type_t *) obj)
#define lxb_dom_interface_element(obj) ((lxb_dom_element_t *) obj)
#define lxb_dom_interface_event_target(obj) ((lxb_dom_event_target_t *) obj)
#define lxb_dom_interface_node(obj) ((lxb_dom_node_t *) obj)
#define lxb_dom_interface_processing_instruction(obj) ((lxb_dom_processing_instruction_t *) obj)
#define lxb_dom_interface_shadow_root(obj) ((lxb_dom_shadow_root_t *) obj)
#define lxb_dom_interface_text(obj) ((lxb_dom_text_t *) obj)


typedef struct lxb_dom_event_target lxb_dom_event_target_t;
typedef struct lxb_dom_node lxb_dom_node_t;
typedef struct lxb_dom_element lxb_dom_element_t;
typedef struct lxb_dom_element_attr lxb_dom_element_attr_t;
typedef struct lxb_dom_document lxb_dom_document_t;
typedef struct lxb_dom_document_type lxb_dom_document_type_t;
typedef struct lxb_dom_document_fragment lxb_dom_document_fragment_t;
typedef struct lxb_dom_shadow_root lxb_dom_shadow_root_t;
typedef struct lxb_dom_character_data lxb_dom_character_data_t;
typedef struct lxb_dom_text lxb_dom_text_t;
typedef struct lxb_dom_cdata_section lxb_dom_cdata_section_t;
typedef struct lxb_dom_processing_instruction lxb_dom_processing_instruction_t;
typedef struct lxb_dom_comment lxb_dom_comment_t;


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* LEXBOR_DOM_INTERFACES_H */