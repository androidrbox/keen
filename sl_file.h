/* Keen Dreams Source Code
 * Copyright (C) 2014 Javier M. Chavez
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License aint32_t
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef _SL_FILE_H
#define _SL_FILE_H


//==========================================================================
//
//										DEFINES
//
//==========================================================================

#ifndef MakeID
#define MakeID(a,b,c,d)			(((int32_t)(d)<<24L)|((int32_t)(c)<<16L)|((int32_t)(b)<<8L)|(int32_t)(a))
#endif


#define ID_SLIB					MakeID('S','L','I','B')
#define SLIB						("SLIB")
#define SOFTLIB_VER				2
#define ID_CHUNK					MakeID('C','U','N','K')



//==========================================================================
//
//										TYPES
//
//==========================================================================




//--------------------------------------------------------------------------
//							SOFTLIB File Entry Types
//--------------------------------------------------------------------------
typedef enum LibFileTypes
{
	lib_DATA =0,					// Just streight raw data
//	lib_AUDIO,						// Multi chunk audio file

} LibFileTypes;



//--------------------------------------------------------------------------
//   							SOFTLIB Library File header..
//
//						   * This header will NEVER change! *
//						   lol it just did --GM
//--------------------------------------------------------------------------

typedef struct SoftLibHdr
{
	uint16_t Version;									// Library Version Num
	uint16_t FileCount;
} __attribute__((__packed__)) SoftlibHdr;



//--------------------------------------------------------------------------
//   							SOFTLIB Directory Entry Hdr
//
// This can change according to Version of SoftLib (Make sure we are
// always downward compatable!
//--------------------------------------------------------------------------

#define SL_FILENAMESIZE		16

typedef struct FileEntryHdr
{
	char FileName[SL_FILENAMESIZE];		  	// NOTE : May not be null terminated!
	uint32_t Offset;
	uint32_t ChunkLen;
	uint32_t OrginalLength;
	int16_t Compression;							// ct_TYPES
} __attribute__((__packed__)) FileEntryHdr;



//--------------------------------------------------------------------------
//							   SOFTLIB Entry Chunk Header
//--------------------------------------------------------------------------

typedef struct ChunkHeader
{
	uint32_t HeaderID;
	uint32_t OrginalLength;
	int16_t Compression;								// ct_TYPES
} __attribute__((__packed__)) ChunkHeader;



#endif
