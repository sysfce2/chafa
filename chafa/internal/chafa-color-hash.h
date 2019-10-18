/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

/* Copyright (C) 2019 Hans Petter Jansson
 *
 * This file is part of Chafa, a program that turns images into character art.
 *
 * Chafa is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Chafa is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Chafa.  If not, see <http://www.gnu.org/licenses/>. */

#define CHAFA_COLOR_HASH_N_ENTRIES 16384

typedef struct
{
    guint32 map [CHAFA_COLOR_HASH_N_ENTRIES];
}
ChafaColorHash;

void   chafa_color_hash_init    (ChafaColorHash *color_hash);
void   chafa_color_hash_deinit  (ChafaColorHash *color_hash);

void   chafa_color_hash_replace (ChafaColorHash *color_hash, guint32 color, guint8 pen);
guint8 chafa_color_hash_lookup  (const ChafaColorHash *color_hash, guint32 color);