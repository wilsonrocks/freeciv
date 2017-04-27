/***********************************************************************
 Freeciv - Copyright (C) 2017 - Freeciv Development Team
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
***********************************************************************/

#ifndef FC_SERVER_SETTINGS_H
#define FC_SERVER_SETTINGS_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* common */
#include "fc_types.h"


/* Special value to signal the absence of a server setting. */
#define SERVER_SETTING_NONE ((server_setting_id) -1)


/* Pure server settings. */
server_setting_id server_setting_by_name(const char *name);
bool server_setting_exists(server_setting_id id);

enum sset_type server_setting_type_get(server_setting_id id);

const char *server_setting_name_get(server_setting_id id);

bool server_setting_value_bool_get(server_setting_id id);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif // FC_SERVER_SETTINGS_H
