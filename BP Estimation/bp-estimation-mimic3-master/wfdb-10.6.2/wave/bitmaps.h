/* file: bitmaps.h		G. Moody	26 April 1990
				Last revised:	29 April 1999
Icon and cursor bitmaps for WAVE

-------------------------------------------------------------------------------
WAVE: Waveform analyzer, viewer, and editor
Copyright (C) 1999 George B. Moody

This program is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation; either version 2 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program; if not, see <http://www.gnu.org/licenses/>.

You may contact the author by e-mail (wfdb@physionet.org) or postal mail
(MIT Room E25-505A, Cambridge, MA 02139 USA).  For updates to this software,
please visit PhysioNet (http://www.physionet.org/).
_______________________________________________________________________________

*/

/* Bitmap of icon. */
#define icon_width 64
#define icon_height 64
static char icon_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x40, 0x10,
   0x40, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x00,
   0x40, 0x00, 0x40, 0x28, 0x40, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x48,
   0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x40, 0x48, 0x40, 0x00, 0x40, 0x00,
   0xaa, 0xaa, 0xaa, 0xee, 0xaa, 0xaa, 0xaa, 0x2a, 0x40, 0x00, 0x40, 0x44,
   0x40, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00,
   0x40, 0x00, 0x40, 0x44, 0x40, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x44,
   0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x40, 0x44, 0x40, 0x00, 0x40, 0x00,
   0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x40, 0x44,
   0x40, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00,
   0x40, 0x00, 0x40, 0x44, 0x40, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x44,
   0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x40, 0x44, 0x40, 0x00, 0x40, 0x00,
   0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x40, 0x44,
   0x40, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00,
   0x40, 0x00, 0x40, 0x44, 0x40, 0x00, 0x40, 0x00, 0xaa, 0xaa, 0xaa, 0xee,
   0xaa, 0xaa, 0xaa, 0x2a, 0x40, 0x00, 0x40, 0x84, 0x40, 0x00, 0x42, 0x00,
   0x00, 0x00, 0x00, 0x82, 0x00, 0xc0, 0x05, 0x00, 0x40, 0x00, 0x40, 0x82,
   0x40, 0x40, 0x58, 0x00, 0x00, 0x00, 0x00, 0x82, 0x00, 0x20, 0x20, 0x00,
   0x40, 0x40, 0x40, 0x82, 0x40, 0x20, 0x40, 0x00, 0x00, 0xa0, 0x01, 0x82,
   0x00, 0x10, 0x80, 0x00, 0x40, 0x30, 0x42, 0x82, 0x40, 0x10, 0x40, 0x01,
   0x00, 0x08, 0x04, 0x82, 0x00, 0x08, 0x00, 0x02, 0x5e, 0x08, 0x44, 0x82,
   0x40, 0x08, 0x40, 0x02, 0xe0, 0x07, 0x18, 0x82, 0x00, 0x08, 0x00, 0x04,
   0x40, 0x00, 0xe0, 0x82, 0x40, 0x04, 0x40, 0x18, 0x00, 0x00, 0x80, 0x82,
   0x00, 0x04, 0x00, 0x20, 0x40, 0x00, 0x40, 0x83, 0x40, 0x04, 0x40, 0x00,
   0x00, 0x00, 0x00, 0x83, 0x00, 0x04, 0x00, 0x00, 0x40, 0x00, 0x40, 0x83,
   0x40, 0x02, 0x40, 0x00, 0xaa, 0xaa, 0xaa, 0xab, 0xaa, 0xaa, 0xaa, 0x2a,
   0x40, 0x00, 0x40, 0x82, 0x40, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80,
   0x80, 0x00, 0x00, 0x00, 0x40, 0x00, 0x40, 0x80, 0x60, 0x00, 0x40, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x40, 0x00, 0x40, 0x00,
   0x4a, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00,
   0x40, 0x00, 0x40, 0x00, 0x4c, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x08, 0x00, 0x00, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x71, 0x38, 0x00,
   0x40, 0x00, 0x40, 0x00, 0x10, 0x88, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x10, 0x88, 0x04, 0x00, 0x40, 0x00, 0x40, 0x00, 0x10, 0x08, 0x04, 0x00,
   0x00, 0x00, 0x00, 0x00, 0xf0, 0x08, 0x64, 0x00, 0x40, 0x00, 0x40, 0x00,
   0x10, 0x08, 0x44, 0xaa, 0xaa, 0xaa, 0xaa, 0x2a, 0x10, 0x88, 0x44, 0x00,
   0x40, 0x00, 0x40, 0x00, 0x10, 0x88, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xf0, 0x71, 0x58, 0x00, 0x40, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

/* Bitmap of crosshair cursor. */
#define cursor_width 16
#define cursor_height 16
static char cursor_bits[] = {
   0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00,
   0x80, 0x00, 0xff, 0x7f, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00,
   0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x00, 0x00};
