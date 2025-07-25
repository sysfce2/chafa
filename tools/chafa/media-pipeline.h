/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

/* Copyright (C) 2024-2025 Hans Petter Jansson
 *
 * This file is part of Chafa, a program that shows pictures on text terminals.
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

#ifndef __MEDIA_PIPELINE_H__
#define __MEDIA_PIPELINE_H__

#include <glib.h>
#include "media-loader.h"
#include "path-queue.h"

G_BEGIN_DECLS

typedef struct MediaPipeline MediaPipeline;

MediaPipeline *media_pipeline_new (PathQueue *path_queue, gint target_width, gint target_height);
void media_pipeline_destroy (MediaPipeline *pipeline);

gboolean media_pipeline_pop (MediaPipeline *pipeline,
                             gchar **path_out,
                             MediaLoader **loader_out,
                             GError **error_out);

G_END_DECLS

#endif /* __MEDIA_PIPELINE_H__ */
