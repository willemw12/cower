/*
 *  alpmhelper.h
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _ALPMHELPER_H
#define _ALPMHELPER_H

void alpm_quick_init(void);
alpm_list_t *alpm_query_search(alpm_list_t*);
pmdb_t *alpm_sync_search(alpm_list_t*);
int is_in_pacman(const char*);

#endif /* _ALPMHELPER_H */
