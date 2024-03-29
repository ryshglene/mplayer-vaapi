/*
 * This file is part of MPlayer.
 *
 * MPlayer is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * MPlayer is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with MPlayer; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef MPLAYER_FMT_CONVERSION_H
#define MPLAYER_FMT_CONVERSION_H

#include "config.h"
#include "libavutil/avutil.h"
#include "libavutil/samplefmt.h"

enum AVPixelFormat imgfmt2pixfmt(int fmt);
int pixfmt2imgfmt(enum AVPixelFormat pix_fmt, int codec_id);
enum AVSampleFormat affmt2samplefmt(int fmt);
int samplefmt2affmt(enum AVSampleFormat sample_fmt);

#endif /* MPLAYER_FMT_CONVERSION_H */
