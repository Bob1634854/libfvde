/*
 * XML plist functions
 *
 * Copyright (C) 2011-2014, Omar Choudary <choudary.omar@gmail.com>
 *                          Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBFVDE_XML_PLIST_H )
#define _LIBFVDE_XML_PLIST_H

#include <common.h>
#include <types.h>

#include <libxml/tree.h>

#include "libfvde_libcerror.h"

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct libfvde_xml_plist libfvde_xml_plist_t;

struct libfvde_xml_plist
{
/* TODO refactor */
        /* The XML document
	 */
        xmlDoc *xml_document;

	/* The root node
	 */
	xmlNode *root_node;

	/* The main dict node
	 */
	xmlNode *main_dict_node;
};

int libfvde_xml_plist_initialize(
     libfvde_xml_plist_t **plist,
     libcerror_error_t **error );

int libfvde_xml_plist_free(
     libfvde_xml_plist_t **plist,
     libcerror_error_t **error );

int libfvde_xml_plist_copy_from_byte_stream(
     libfvde_xml_plist_t *plist,
     const uint8_t *byte_stream,
     size_t byte_stream_size,
     libcerror_error_t **error );

#if defined( __cplusplus )
}
#endif

#endif

