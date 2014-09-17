// Keen Dreams Source Code - SDL port
// Copyright (C) 2014 Javier M. Chavez
// Copyright (C) 2014 Ben Russell
//
// This program is free software// you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation// either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY// without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program// if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

#include "id_heads.h"

int px, py;
byte pdrawmode;
byte fontcolor;

cardtype VW_VideoID (void)
{
	// Not that it actually matters,
	// but emulating a VGA-style inferface is the easiest way to go.
	return VGAcard;
}

void VW_WaitVBL (int number)
{
	// TODO: Actually wait

}

