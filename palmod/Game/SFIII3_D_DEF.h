#pragma once

#define SFIII3_D_NUMUNIT 0x14
#define SFIII3_D_PALSZ 64

const char SFIII3_D_UNITDESC[SFIII3_D_NUMUNIT][16] = 
{
	//"Gill",		//0x
	"Alex",			//0x00 
	"Ryu",			//0x01
	"Yun",			//0x02
	"Dudley",		//0x03
	"Necro",		//0x04
	"Hugo",			//0x05
	"Ibuki",		//0x06
	"Elena",		//0x07
	"Oro",			//0x08
	"Yang",			//0x09
	"Ken",			//0x0A
	"Sean",			//0x0B
	"Urien",		//0x0C
	"Gouki",		//0x0D
	"Shin-Gouki",	//0x0E  // Shin-Gouki is not present on the Dreamcast
	"Chun-Li",		//0x0F
	"Makoto",		//0x10
	"Q",			//0x11
	"Twelve",		//0x12
	"Remy"			//0x13
};

const UINT8 SFIII3_D_UNITSORT[SFIII3_D_NUMUNIT] = //Plus 1 for the extra palettes
{
	0x00, 
	0x0F, 
	0x03, 
	0x07, 
	0x0D, 
	0x05, 
	0x06, 
	0x0A, 
	0x10, 
	0x04, 
	0x08, 
	0x11, 
	0x13, 
	0x01, 
	0x0B, 
	// BUGBUG: This glitch results in Alex showing twice.
	0x0E,  // Shin-Gouki is not present nor available on DC.
	0x12, 
	0x0C, 
	0x09, 
	0x02
};
