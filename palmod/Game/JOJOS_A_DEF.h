#pragma once

#if NEED_TO_UPDATE_JOJO_HEADERS
#define USE_LARGE_PALETTES
#endif

const char JOJOS_A_UNITDESC_50[][32] =
{
    "HUD",           // JOJOS_HUD_COLLECTION
    "HUD Portraits", // JOJOS_A_HUD_PORTRAIT_COLLECTION
    "Stages",        // JOJOS_A_STAGE_COLLECTION
};

const char JOJOS_A_UNITDESC_51[][32] =
{
    "Jotaro", // JOJOS_A_CHARACTER_COLLECTION_JOTARO
    "Kakyoin & Hierophant", // JOJOS_A_CHARACTER_COLLECTION_HIEROPHANT
    "Avdol", // JOJOS_A_CHARACTER_COLLECTION_AVDOL
    "Polnareff", // JOJOS_A_CHARACTER_COLLECTION_POL
    "Joseph", // JOJOS_A_CHARACTER_COLLECTION_JOSEPH
    "Iggy", // JOJOS_A_CHARACTER_COLLECTION_IGGY
    "Alessi", // JOJOS_A_CHARACTER_COLLECTION_ALESSI
    "Chaka", // JOJOS_A_CHARACTER_COLLECTION_CHAKA
    "Devo and Ebony", // JOJOS_A_CHARACTER_COLLECTION_DEVOEBONY
    "Midler", // JOJOS_A_CHARACTER_COLLECTION_MIDLER
    "Dio", // JOJOS_A_CHARACTER_COLLECTION_DIO
    "Shadow Dio", // JOJOS_A_CHARACTER_COLLECTION_SDIO
    "Young Joseph", // JOJOS_A_CHARACTER_COLLECTION_YJOSEPH
    "Hol ", // JOJOS_A_CHARACTER_COLLECTION_HOL
    "Vanilla Ice", // JOJOS_A_CHARACTER_COLLECTION_VICE
    "New Kakyoin & Hierophant", // JOJOS_A_CHARACTER_COLLECTION_HIERO
    "Anubis Polnareff", // JOJOS_A_CHARACTER_COLLECTION_BPOL
    "Petshop", // JOJOS_A_CHARACTER_COLLECTION_SHOP
    "Mariah", // JOJOS_A_CHARACTER_COLLECTION_MARIAH
    "Hol and Boingo", // JOJOS_A_CHARACTER_COLLECTION_HOLBOINGO
    "Rubber Soul", // JOJOS_A_CHARACTER_COLLECTION_RSOUL
    "Khan", // JOJOS_A_CHARACTER_COLLECTION_KHAN
    "N'Doul and Geb", // JOJOS_A_CHARACTER_COLLECTION_NDOUL
    "Boss Ice", // JOJOS_A_CHARACTER_COLLECTION_BICE
    "Death 13", // JOJOS_A_CHARACTER_COLLECTION_DEATH13
    "Timestop", // JOJOS_TIMESTOP_COLLECTION
    "Bonus", // JOJOS_A_BONUS_COLLECTION
};

constexpr auto JOJOS_A_NUMUNIT_50 = ARRAYSIZE(JOJOS_A_UNITDESC_50);
constexpr auto JOJOS_A_NUMUNIT_51 = ARRAYSIZE(JOJOS_A_UNITDESC_51);

#define JOJOS_A_EXTRALOC_50 JOJOS_A_NUMUNIT_50
#define JOJOS_A_EXTRALOC_51 JOJOS_A_NUMUNIT_51

// hud, portraits, stages: 50
// characters, timestop, bonus: 51

// Notes from Segata:
// every character palette is separated by 0x14500 from a button to another
// Jotaro A Star Breaker and Jotaro B Star Breaker are 0x14500 away and Star Breaker B is at the same distance as Star Breaker C
// So you can just add the A version and create a function that multiples the value instead of writing everything manually
// Also Characters are 0xC80 away, so Jotaro Aand Kakyoin A are just 0xC80, Kakyoin to Avdol is 0xC80 and etc


#pragma region HUD_PORTRAITS
const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_JOTARO_PALETTES[] =
{
    { "Jotaro A Life Bar Portrait", 0x07C0400, 0x07C0420, indexJojos50HUDPortraits, indexJojos51Jotaro },
    { "Jotaro B Life Bar Portrait", 0x07C0420, 0x07C0440, indexJojos50HUDPortraits, indexJojos51Jotaro },
    { "Jotaro C Life Bar Portrait", 0x07C0C00, 0x07C0C20, indexJojos50HUDPortraits, indexJojos51Jotaro },
    { "Jotaro S Life Bar Portrait", 0x07C0C20, 0x07C0C40, indexJojos50HUDPortraits, indexJojos51Jotaro },
    { "Jotaro Start Life Bar Portrait", 0x07C0C40, 0x07C0C60, indexJojos50HUDPortraits, indexJojos51Jotaro },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_KAKYOIN_PALETTES[] =
{
    { "Kakyoin A Life Bar Portrait", 0x07C0440, 0x07C0460, indexJojos50HUDPortraits, indexJojos51Kakyo },
    { "Kakyoin B Life Bar Portrait", 0x07C0460, 0x07C0480, indexJojos50HUDPortraits, indexJojos51Kakyo },
    { "Kakyoin C Life Bar Portrait", 0x07C0C60, 0x07C0C80, indexJojos50HUDPortraits, indexJojos51Kakyo },
    { "Kakyoin S Life Bar Portrait", 0x07C0C80, 0x07C0CA0, indexJojos50HUDPortraits, indexJojos51Kakyo },
    { "Kakyoin Start Life Bar Portrait", 0x07C0CA0, 0x07C0CC0, indexJojos50HUDPortraits, indexJojos51Kakyo },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_DIO_PALETTES[] =
{
    { "Dio A Life Bar Portrait", 0x07C0480, 0x07C04A0, indexJojos50HUDPortraits, indexJojos51Dio },
    { "Dio B Life Bar Portrait", 0x07C04A0, 0x07C04C0, indexJojos50HUDPortraits, indexJojos51Dio },
    { "Dio C Life Bar Portrait", 0x07C14C0, 0x07C14E0, indexJojos50HUDPortraits, indexJojos51Dio },
    { "Dio S Life Bar Portrait", 0x07C14E0, 0x07C1500, indexJojos50HUDPortraits, indexJojos51Dio },
    { "Dio Start Life Bar Portrait", 0x07C1500, 0x07C1520, indexJojos50HUDPortraits, indexJojos51Dio },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_CHAKA_PALETTES[] =
{
    { "Chaka A Life Bar Portrait", 0x07C04C0, 0x07C04E0, indexJojos50HUDPortraits, indexJojos51Chaka },
    { "Chaka B Life Bar Portrait", 0x07C04E0, 0x07C0500, indexJojos50HUDPortraits, indexJojos51Chaka },
    { "Chaka C Life Bar Portrait", 0x07C0F60, 0x07C0F80, indexJojos50HUDPortraits, indexJojos51Chaka },
    { "Chaka S Life Bar Portrait", 0x07C0F80, 0x07C0FA0, indexJojos50HUDPortraits, indexJojos51Chaka },
    { "Chaka Start Life Bar Portrait", 0x07C0FA0, 0x07C0FC0, indexJojos50HUDPortraits, indexJojos51Chaka },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_IGGY_PALETTES[] =
{
    { "Iggy A Life Bar Portrait", 0x07C0500, 0x07C0520, indexJojos50HUDPortraits, indexJojos51Iggy },
    { "Iggy B Life Bar Portrait", 0x07C0520, 0x07C0540, indexJojos50HUDPortraits, indexJojos51Iggy },
    { "Iggy C Life Bar Portrait", 0x07C0DE0, 0x07C0E00, indexJojos50HUDPortraits, indexJojos51Iggy },
    { "Iggy S Life Bar Portrait", 0x07C0E00, 0x07C0E20, indexJojos50HUDPortraits, indexJojos51Iggy },
    { "Iggy Start Life Bar Portrait", 0x07C0E20, 0x07C0E40, indexJojos50HUDPortraits, indexJojos51Iggy },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_PETSHOP_PALETTES[] =
{
    { "Petshop A Life Bar Portrait", 0x07C0540, 0x07C0560, indexJojos50HUDPortraits, indexJojos51Petshop },
    { "Petshop B Life Bar Portrait", 0x07C0560, 0x07C0580, indexJojos50HUDPortraits, indexJojos51Petshop },
    { "Petshop C Life Bar Portrait", 0x07C1800, 0x07C1820, indexJojos50HUDPortraits, indexJojos51Petshop },
    { "Petshop S Life Bar Portrait", 0x07C1820, 0x07C1840, indexJojos50HUDPortraits, indexJojos51Petshop },
    { "Petshop Start Life Bar Portrait", 0x07C1840, 0x07C1860, indexJojos50HUDPortraits, indexJojos51Petshop },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_POLNAREFF_PALETTES[] =
{
    { "Polnareff A Life Bar Portrait", 0x07C0580, 0x07C05A0, indexJojos50HUDPortraits, indexJojos51Pol },
    { "Polnareff B Life Bar Portrait", 0x07C05A0, 0x07C05C0, indexJojos50HUDPortraits, indexJojos51Pol },
    { "Polnareff C Life Bar Portrait", 0x07C0D20, 0x07C0D40, indexJojos50HUDPortraits, indexJojos51Pol },
    { "Polnareff S Life Bar Portrait", 0x07C0D40, 0x07C0D60, indexJojos50HUDPortraits, indexJojos51Pol },
    { "Polnareff Start Life Bar Portrait", 0x07C0D60, 0x07C0D80, indexJojos50HUDPortraits, indexJojos51Pol },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_JOSEPH_PALETTES[] =
{
    { "Joseph A Life Bar Portrait", 0x07C05C0, 0x07C05E0, indexJojos50HUDPortraits, indexJojos51Joseph },
    { "Joseph B Life Bar Portrait", 0x07C05E0, 0x07C0600, indexJojos50HUDPortraits, indexJojos51Joseph },
    { "Joseph C Life Bar Portrait", 0x07C0D80, 0x07C0DA0, indexJojos50HUDPortraits, indexJojos51Joseph },
    { "Joseph S Life Bar Portrait", 0x07C0DA0, 0x07C0DC0, indexJojos50HUDPortraits, indexJojos51Joseph },
    { "Joseph Start Life Bar Portrait", 0x07C0DC0, 0x07C0DE0, indexJojos50HUDPortraits, indexJojos51Joseph },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_ABDUL_PALETTES[] =
{
    { "Avdol A Life Bar Portrait", 0x07C0600, 0x07C0620, indexJojos50HUDPortraits, indexJojos51Avdol },
    { "Avdol B Life Bar Portrait", 0x07C0620, 0x07C0640, indexJojos50HUDPortraits, indexJojos51Avdol },
    { "Avdol C Life Bar Portrait", 0x07C0CC0, 0x07C0CE0, indexJojos50HUDPortraits, indexJojos51Avdol },
    { "Avdol S Life Bar Portrait", 0x07C0CE0, 0x07C0D00, indexJojos50HUDPortraits, indexJojos51Avdol },
    { "Avdol Start Life Bar Portrait", 0x07C0D00, 0x07C0D20, indexJojos50HUDPortraits, indexJojos51Avdol },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_ALESSI_PALETTES[] =
{
    { "Alessi A Life Bar Portrait", 0x07C0640, 0x07C0660, indexJojos50HUDPortraits, indexJojos51Alessi },
    { "Alessi B Life Bar Portrait", 0x07C0660, 0x07C0680, indexJojos50HUDPortraits, indexJojos51Alessi },
    { "Alessi C Life Bar Portrait", 0x07C0F00, 0x07C0F20, indexJojos50HUDPortraits, indexJojos51Alessi },
    { "Alessi S Life Bar Portrait", 0x07C0F20, 0x07C0F40, indexJojos50HUDPortraits, indexJojos51Alessi },
    { "Alessi Start Life Bar Portrait", 0x07C0F40, 0x07C0F60, indexJojos50HUDPortraits, indexJojos51Alessi },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_DEVO_PALETTES[] =
{
    { "Devo A Life Bar Portrait", 0x07C06C0, 0x07C06E0, indexJojos50HUDPortraits, indexJojos51Devo },
    { "Devo B Life Bar Portrait", 0x07C06E0, 0x07C0700, indexJojos50HUDPortraits, indexJojos51Devo },
    { "Devo C Life Bar Portrait", 0x07C1400, 0x07C1420, indexJojos50HUDPortraits, indexJojos51Devo },
    { "Devo S Life Bar Portrait", 0x07C1420, 0x07C1440, indexJojos50HUDPortraits, indexJojos51Devo },
    { "Devo Start Life Bar Portrait", 0x07C1440, 0x07C1460, indexJojos50HUDPortraits, indexJojos51Devo },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_VANILLA_PALETTES[] =
{
    { "Vanilla Ice A Life Bar Portrait", 0x07C0740, 0x07C0760, indexJojos50HUDPortraits, indexJojos51VIce },
    { "Vanilla Ice B Life Bar Portrait", 0x07C0760, 0x07C0780, indexJojos50HUDPortraits, indexJojos51VIce },
    { "Vanilla Ice C Life Bar Portrait", 0x07C1520, 0x07C1540, indexJojos50HUDPortraits, indexJojos51VIce },
    { "Vanilla Ice S Life Bar Portrait", 0x07C1540, 0x07C1560, indexJojos50HUDPortraits, indexJojos51VIce },
    { "Vanilla Ice Start Life Bar Portrait", 0x07C1560, 0x07C1580, indexJojos50HUDPortraits, indexJojos51VIce },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_HOL_PALETTES[] =
{
    { "Hol Horse A Life Bar Portrait", 0x07C0780, 0x07C07A0, indexJojos50HUDPortraits, indexJojos51Hol },
    { "Hol Horse B Life Bar Portrait", 0x07C07A0, 0x07C07C0, indexJojos50HUDPortraits, indexJojos51Hol },
    { "Hol Horse C Life Bar Portrait", 0x07C1640, 0x07C1660, indexJojos50HUDPortraits, indexJojos51Hol },
    { "Hol Horse S Life Bar Portrait", 0x07C1660, 0x07C1680, indexJojos50HUDPortraits, indexJojos51Hol },
    { "Hol Horse Start Life Bar Portrait", 0x07C1680, 0x07C16A0, indexJojos50HUDPortraits, indexJojos51Hol },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_MIDLER_PALETTES[] =
{
    { "Midler A Life Bar Portrait", 0x07C08C0, 0x07C08E0, indexJojos50HUDPortraits, indexJojos51Midler },
    { "Midler B Life Bar Portrait", 0x07C08E0, 0x07C0900, indexJojos50HUDPortraits, indexJojos51Midler },
    { "Midler C Life Bar Portrait", 0x07C1460, 0x07C1480, indexJojos50HUDPortraits, indexJojos51Midler },
    { "Midler S Life Bar Portrait", 0x07C1480, 0x07C14A0, indexJojos50HUDPortraits, indexJojos51Midler },
    { "Midler Start Life Bar Portrait", 0x07C14A0, 0x07C14C0, indexJojos50HUDPortraits, indexJojos51Midler },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_MARIAH_PALETTES[] =
{
    { "Mariah A Life Bar Portrait", 0x07C0900, 0x07C0920, indexJojos50HUDPortraits, indexJojos51Mariah },
    { "Mariah B Life Bar Portrait", 0x07C0920, 0x07C0940, indexJojos50HUDPortraits, indexJojos51Mariah },
    { "Mariah C Life Bar Portrait", 0x07C1860, 0x07C1880, indexJojos50HUDPortraits, indexJojos51Mariah },
    { "Mariah S Life Bar Portrait", 0x07C1880, 0x07C18A0, indexJojos50HUDPortraits, indexJojos51Mariah },
    { "Mariah Start Life Bar Portrait", 0x07C18A0, 0x07C18C0, indexJojos50HUDPortraits, indexJojos51Mariah },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_YJOSEPH_PALETTES[] =
{
    { "Young Joseph A Life Bar Portrait", 0x07C0B60, 0x07C0B80, indexJojos50HUDPortraits, indexJojos51YSeph },
    { "Young Joseph B Life Bar Portrait", 0x07C0B80, 0x07C0BA0, indexJojos50HUDPortraits, indexJojos51YSeph },
    { "Young Joseph C Life Bar Portrait", 0x07C15E0, 0x07C1600, indexJojos50HUDPortraits, indexJojos51YSeph },
    { "Young Joseph S Life Bar Portrait", 0x07C1600, 0x07C1620, indexJojos50HUDPortraits, indexJojos51YSeph },
    { "Young Joseph Start Life Bar Portrait", 0x07C1620, 0x07C1640, indexJojos50HUDPortraits, indexJojos51YSeph },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_SDIO_PALETTES[] =
{
    { "Shadow Dio A Life Bar Portrait", 0x07C0BA0, 0x07C0BC0, indexJojos50HUDPortraits, indexJojos51SDio },
    { "Shadow Dio B Life Bar Portrait", 0x07C0BC0, 0x07C0BE0, indexJojos50HUDPortraits, indexJojos51SDio },
    { "Shadow Dio C Life Bar Portrait", 0x07C1580, 0x07C15A0, indexJojos50HUDPortraits, indexJojos51SDio },
    { "Shadow Dio S Life Bar Portrait", 0x07C15A0, 0x07C15C0, indexJojos50HUDPortraits, indexJojos51SDio },
    { "Shadow Dio Start Life Bar Portrait", 0x07C15C0, 0x07C15E0, indexJojos50HUDPortraits, indexJojos51SDio },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_NKAKYOIN_PALETTES[] =
{
    { "New Kakyoin A / B / Start Life Bar Portrait", 0x07C16E0, 0x07C1700, indexJojos50HUDPortraits, indexJojos51NewKakyo },
    { "New Kakyoin C Life Bar Portrait", 0x07C16A0, 0x07C16C0, indexJojos50HUDPortraits, indexJojos51NewKakyo },
    { "New Kakyoin S Life Bar Portrait", 0x07C16C0, 0x07C16E0, indexJojos50HUDPortraits, indexJojos51NewKakyo },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_APOL_PALETTES[] =
{
    { "Anubis Polnareff A Life Bar Portrait", 0x07C1700, 0x07C1720, indexJojos50HUDPortraits, indexJojos51Anubis },
    { "Anubis Polnareff B Life Bar Portrait", 0x07C1720, 0x07C1740, indexJojos50HUDPortraits, indexJojos51Anubis },
    { "Anubis Polnareff C Life Bar Portrait", 0x07C1740, 0x07C1760, indexJojos50HUDPortraits, indexJojos51Anubis },
    { "Anubis Polnareff S Life Bar Portrait", 0x07C1760, 0x07C1780, indexJojos50HUDPortraits, indexJojos51Anubis },
    { "Anubis Polnareff Start Life Bar Portrait", 0x07C1780, 0x07C17A0, indexJojos50HUDPortraits, indexJojos51Anubis },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_HOLB_PALETTES[] =
{
    { "Hol & Boingo A Life Bar Portrait", 0x07C18C0, 0x07C18E0, indexJojos50HUDPortraits, indexJojos51HolBoingo },
    { "Hol & Boingo B Life Bar Portrait", 0x07C18E0, 0x07C1900, indexJojos50HUDPortraits, indexJojos51HolBoingo },
    { "Hol & Boingo C Life Bar Portrait", 0x07C1900, 0x07C1920, indexJojos50HUDPortraits, indexJojos51HolBoingo },
    { "Hol & Boingo S Life Bar Portrait", 0x07C1920, 0x07C1940, indexJojos50HUDPortraits, indexJojos51HolBoingo },
    { "Hol & Boingo Start Life Bar Portrait", 0x07C1940, 0x07C1960, indexJojos50HUDPortraits, indexJojos51HolBoingo },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_RSOUL_PALETTES[] =
{
    { "Rubber Soul A Life Bar Portrait", 0x07C1960, 0x07C1980, indexJojos50HUDPortraits, indexJojos51RSoul },
    { "Rubber Soul B Life Bar Portrait", 0x07C1980, 0x07C19A0, indexJojos50HUDPortraits, indexJojos51RSoul },
    { "Rubber Soul C Life Bar Portrait", 0x07C19A0, 0x07C19C0, indexJojos50HUDPortraits, indexJojos51RSoul },
    { "Rubber Soul S Life Bar Portrait", 0x07C19C0, 0x07C19E0, indexJojos50HUDPortraits, indexJojos51RSoul },
    { "Rubber Soul Start Life Bar Portrait", 0x07C19E0, 0x07C1A00, indexJojos50HUDPortraits, indexJojos51RSoul },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_KHAN_PALETTES[] =
{
    { "Khan A Life Bar Portrait", 0x07C1A00, 0x07C1A20, indexJojos50HUDPortraits, indexJojos51Khan },
    { "Khan B Life Bar Portrait", 0x07C1A20, 0x07C1A40, indexJojos50HUDPortraits, indexJojos51Khan },
    { "Khan C Life Bar Portrait", 0x07C1A40, 0x07C1A60, indexJojos50HUDPortraits, indexJojos51Khan },
    { "Khan S Life Bar Portrait", 0x07C1A60, 0x07C1A80, indexJojos50HUDPortraits, indexJojos51Khan },
    { "Khan Start Life Bar Portrait", 0x07C1A80, 0x07C1AA0, indexJojos50HUDPortraits, indexJojos51Khan },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_DEATH_PALETTES[] =
{
    { "Death 13 A Life Bar Portrait", 0x07C0800, 0x07C0820 },
    { "Death 13 B Life Bar Portrait", 0x07C0820, 0x07C0840 },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_NDOUL_PALETTES[] =
{
    { "N'Doul A Life Bar Portrait", 0x07C0840, 0x07C0860 },
    { "N'Doul B Life Bar Portrait", 0x07C0860, 0x07C0880 },
};

const sDescTreeNode JOJOS_HUD_PORTRAIT_COLLECTION[]
{
    { "Jotaro", DESC_NODETYPE_TREE, (void *)JOJOS_A_HUD_PORTRAIT_JOTARO_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_JOTARO_PALETTES) },
    { "Kakyoin", DESC_NODETYPE_TREE,(void*)JOJOS_A_HUD_PORTRAIT_KAKYOIN_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_KAKYOIN_PALETTES) },
    { "Dio", DESC_NODETYPE_TREE,    (void*)JOJOS_A_HUD_PORTRAIT_DIO_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_DIO_PALETTES) },
    { "Chaka", DESC_NODETYPE_TREE,  (void*)JOJOS_A_HUD_PORTRAIT_CHAKA_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_CHAKA_PALETTES) },
    { "Iggy", DESC_NODETYPE_TREE,   (void*)JOJOS_A_HUD_PORTRAIT_IGGY_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_IGGY_PALETTES) },
    { "Petshop", DESC_NODETYPE_TREE,(void*)JOJOS_A_HUD_PORTRAIT_PETSHOP_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_PETSHOP_PALETTES) },
    { "Polnareff", DESC_NODETYPE_TREE,(void*)JOJOS_A_HUD_PORTRAIT_POLNAREFF_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_POLNAREFF_PALETTES) },
    { "Joseph", DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_JOSEPH_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_JOSEPH_PALETTES) },
    { "Avdol", DESC_NODETYPE_TREE,  (void*)JOJOS_A_HUD_PORTRAIT_ABDUL_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_ABDUL_PALETTES) },
    { "Alessi", DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_ALESSI_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_ALESSI_PALETTES) },
    { "Devo", DESC_NODETYPE_TREE,   (void*)JOJOS_A_HUD_PORTRAIT_DEVO_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_DEVO_PALETTES) },
    { "Vanilla Ice", DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_VANILLA_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_VANILLA_PALETTES) },
    { "Hol Horse", DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_HOL_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_HOL_PALETTES) },
    { "Midler", DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_MIDLER_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_MIDLER_PALETTES) },
    { "Mariah", DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_MARIAH_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_MARIAH_PALETTES) },
    { "Young Joseph", DESC_NODETYPE_TREE,(void*)JOJOS_A_HUD_PORTRAIT_YJOSEPH_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_YJOSEPH_PALETTES) },
    { "Shadow Dio", DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_SDIO_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_SDIO_PALETTES) },
    { "New Kakyoin", DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_NKAKYOIN_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_NKAKYOIN_PALETTES) },
    { "Anubis Polnareff", DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_APOL_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_APOL_PALETTES) },
    { "Hol & Boingo", DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_HOLB_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_HOLB_PALETTES) },
    { "Rubber Soul", DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_RSOUL_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_RSOUL_PALETTES) },
    { "Khan", DESC_NODETYPE_TREE,       (void*)JOJOS_A_HUD_PORTRAIT_KHAN_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_KHAN_PALETTES) },
    { "Death 13", DESC_NODETYPE_TREE,   (void*)JOJOS_A_HUD_PORTRAIT_DEATH_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_DEATH_PALETTES) },
    { "N'Doul",  DESC_NODETYPE_TREE,    (void*)JOJOS_A_HUD_PORTRAIT_NDOUL_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_NDOUL_PALETTES) },
};

#pragma endregion HUD Portraits

#pragma region HUD
const sGame_PaletteDataset JOJOS_A_HUD_PALETTE_NODES[] =
{
    { "Round Markers", 0x07C0160, 0x07C0180 },
    { "Timer", 0x07C00C0, 0x07C00E0 },
    { "Lifebar", 0x07C01E0, 0x07C0200 },
    { "Stand Meter", 0x07C0200, 0x07C0220 },
    { "Stand Text Under The Stand Gauge", 0x07C0320, 0x07C0340 },
    { "Combo Meter", 0x07C01C0, 0x07C01E0 },
    { "Combo Messages", 0x07C0220, 0x07C0240 },
    { "Text Above The Lifebars",  0x07C0280, 0x07C02A0 },
    { "Stand Crash / First Hit / Etc. Messages", 0x07C0340, 0x07C0360 },
    { "Stand Meter / Near Stand Break", 0x07C0B20, 0x07C0B60 },
    { "Super Meter Bar", 0x07C03A0, 0x07C0400 },
    { "Mariah Level (Player 1 only)", 0x07C01A0, 0x07C01C0 },
    { "Dev-menu Font Color", 0x07C0000, 0x07C0020 },
};

const sDescTreeNode JOJOS_HUD_COLLECTION[]
{
    { "Palette", DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PALETTE_NODES, ARRAYSIZE(JOJOS_A_HUD_PALETTE_NODES) },
};
#pragma endregion HUD

#pragma region Stages

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_ALOCKUP[] =
{
#ifndef USE_LARGE_PALETTES
    { "A Lockup (1/7)", 0x07c3000, 0x07c3200 },
    { "A Lockup (2/7)", 0x07c3200, 0x07c3400 },
    { "A Lockup (3/7)", 0x07c3400, 0x07c3600 },
    { "A Lockup (4/7)", 0x07c3600, 0x07c3800 },
    { "A Lockup (5/7)", 0x07c3800, 0x07c3a00 },
    { "A Lockup (6/7)", 0x07c3a00, 0x07c3c00 },
    { "A Lockup (7/7)", 0x07c3c00, 0x07c3d80 },
#else
    { "A Lockup", 0x07c3000, 0x07c3d80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_AHEALTHROOM[] =
{
#ifndef USE_LARGE_PALETTES
    { "A Health Room (1/6)", 0x07c3e00, 0x07c4000 },
    { "A Health Room (2/6)", 0x07c4000, 0x07c4200 },
    { "A Health Room (3/6)", 0x07c4200, 0x07c4400 },
    { "A Health Room (4/6)", 0x07c4400, 0x07c4600 },
    { "A Health Room (5/6)", 0x07c4600, 0x07c4800 },
    { "A Health Room (6/6)", 0x07c4800, 0x07c4900 },
#else
    { "A Health Room", 0x07c3e00, 0x07c4900 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_AIRPLANE[] =
{
#ifndef USE_LARGE_PALETTES
    { "In A Airplane (1/17)", 0x07c4a00, 0x07c4c00 },
    { "In A Airplane (2/17)", 0x07c4c00, 0x07c4e00 },
    { "In A Airplane (3/17)", 0x07c4e00, 0x07c5000 },
    { "In A Airplane (4/17)", 0x07c5000, 0x07c5200 },
    { "In A Airplane (5/17)", 0x07c5200, 0x07c5400 },
    { "In A Airplane (6/17)", 0x07c5400, 0x07c5600 },
    { "In A Airplane (7/17)", 0x07c5600, 0x07c5800 },
    { "In A Airplane (8/17)", 0x07c5800, 0x07c5a00 },
    { "In A Airplane (9/17)", 0x07c5a00, 0x07c5c00 },
    { "In A Airplane (10/17)", 0x07c5c00, 0x07c5e00 },
    { "In A Airplane (11/17)", 0x07c5e00, 0x07c6000 },
    { "In A Airplane (12/17)", 0x07c6000, 0x07c6200 },
    { "In A Airplane (13/17)", 0x07c6200, 0x07c6400 },
    { "In A Airplane (14/17)", 0x07c6400, 0x07c6600 },
    { "In A Airplane (15/17)", 0x07c6600, 0x07c6800 },
    { "In A Airplane (16/17)", 0x07c6800, 0x07c6a00 },
    { "In A Airplane (17/17)", 0x07c6a00, 0x07c6b80 },
#else
    { "In A Airplane", 0x07c4a00, 0x07c6b80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_TGARDEN[] =
{
#ifndef USE_LARGE_PALETTES
    { "Tigerbaum Garden (1/11)", 0x07c6c00, 0x07c6e00 },
    { "Tigerbaum Garden (2/11)", 0x07c6e00, 0x07c7000 },
    { "Tigerbaum Garden (3/11)", 0x07c7000, 0x07c7200 },
    { "Tigerbaum Garden (4/11)", 0x07c7200, 0x07c7400 },
    { "Tigerbaum Garden (5/1)", 0x07c7400, 0x07c7600 },
    { "Tigerbaum Garden (6/11)", 0x07c7600, 0x07c7800 },
    { "Tigerbaum Garden (7/11)", 0x07c7800, 0x07c7a00 },
    { "Tigerbaum Garden (8/11)", 0x07c7a00, 0x07c7c00 },
    { "Tigerbaum Garden (9/11)", 0x07c7c00, 0x07c7e00 },
    { "Tigerbaum Garden (10/11)", 0x07c7e00, 0x07c8000 },
    { "Tigerbaum Garden (11/11)", 0x07c8000, 0x07c8200 },
#else
    { "Tigerbaum Garden", 0x07c6c00, 0x07c8200 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_HOTELD[] =
{
    { "Hotel (Devil) (1/7)", 0x07c8300, 0x07c8500, indexJojos51Stages, 0x11 },
    { "Hotel (Devil) (2/7)", 0x07c8500, 0x07c8700, indexJojos51Stages, 0x12 },
    { "Hotel (Devil) (3/7)", 0x07c8700, 0x07c8900, indexJojos51Stages, 0x13 },
    { "Hotel (Devil) (4/7)", 0x07c8900, 0x07c8b00, indexJojos51Stages, 0x14 },
    { "Hotel (Devil) (5/7)", 0x07c8b00, 0x07c8d00, indexJojos51Stages, 0x15 },
    { "Hotel (Devil) (6/7)", 0x07c8d00, 0x07c8f00, indexJojos51Stages, 0x16 },
    { "Hotel (Devil) (7/7)", 0x07c8f00, 0x07c9080, indexJojos51Stages, 0x17 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_REMAINS[] =
{
#ifndef USE_LARGE_PALETTES
    { "Remains (1/9)", 0x07c9f80, 0x07ca180 },
    { "Remains (2/9)", 0x07ca180, 0x07ca380 },
    { "Remains (3/9)", 0x07ca380, 0x07ca580 },
    { "Remains (4/9)", 0x07ca580, 0x07ca780 },
    { "Remains (5/9)", 0x07ca780, 0x07ca980 },
    { "Remains (6/9)", 0x07ca980, 0x07cab80 },
    { "Remains (7/9)", 0x07cab80, 0x07cad80 },
    { "Remains (8/9)", 0x07cad80, 0x07caf80 },
    { "Remains (9/9)", 0x07caf80, 0x07cb180 },
#else
    { "Remains", 0x07c9f80, 0x07cb180 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_HOTELJ[] =
{
#ifndef USE_LARGE_PALETTES
    { "Hotel (Justice) (1/8)", 0x07cc500, 0x07cc700 },
    { "Hotel (Justice) (2/8)", 0x07cc700, 0x07cc900 },
    { "Hotel (Justice) (3/8)", 0x07cc900, 0x07ccb00 },
    { "Hotel (Justice) (4/8)", 0x07ccb00, 0x07ccd00 },
    { "Hotel (Justice) (5/8)", 0x07ccd00, 0x07ccf00 },
    { "Hotel (Justice) (6/8)", 0x07ccf00, 0x07cd100 },
    { "Hotel (Justice) (7/8)", 0x07cd100, 0x07cd300 },
    { "Hotel (Justice) (8/8)", 0x07cd300, 0x07cd380 },
#else
    { "Hotel (Justice)", 0x07cc500, 0x07cd380 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_AMPARK[] =
{
#ifndef USE_LARGE_PALETTES
    { "Amusement Park (1/27)", 0x07cd400, 0x07cd600 },
    { "Amusement Park (2/27)", 0x07cd600, 0x07cd800 },
    { "Amusement Park (3/27)", 0x07cd800, 0x07cda00 },
    { "Amusement Park (4/27)", 0x07cda00, 0x07cdc00 },
    { "Amusement Park (5/27)", 0x07cdc00, 0x07cde00 },
    { "Amusement Park (6/27)", 0x07cde00, 0x07ce000 },
    { "Amusement Park (7/27)", 0x07ce000, 0x07ce200 },
    { "Amusement Park (8/27)", 0x07ce200, 0x07ce400 },
    { "Amusement Park (9/27)", 0x07ce400, 0x07ce600 },
    { "Amusement Park (10/27)", 0x07ce600, 0x07ce800 },
    { "Amusement Park (11/27)", 0x07ce800, 0x07cea00 },
    { "Amusement Park (12/27)", 0x07cea00, 0x07cec00 },
    { "Amusement Park (13/27)", 0x07cec00, 0x07cee00 },
    { "Amusement Park (14/27)", 0x07cee00, 0x07cf000 },
    { "Amusement Park (15/27)", 0x07cf000, 0x07cf200 },
    { "Amusement Park (16/27)", 0x07cf200, 0x07cf400 },
    { "Amusement Park (17/27)", 0x07cf400, 0x07cf600 },
    { "Amusement Park (18/27)", 0x07cf600, 0x07cf800 },
    { "Amusement Park (19/27)", 0x07cf800, 0x07cfa00 },
    { "Amusement Park (20/27)", 0x07cfa00, 0x07cfc00 },
    { "Amusement Park (21/27)", 0x07cfc00, 0x07cfe00 },
    { "Amusement Park (22/27)", 0x07cfe00, 0x07d0000 },
    { "Amusement Park (23/27)", 0x07d0000, 0x07d0200 },
    { "Amusement Park (24/27)", 0x07d0200, 0x07d0400 },
    { "Amusement Park (25/27)", 0x07d0400, 0x07d0600 },
    { "Amusement Park (26/27)", 0x07d0600, 0x07d0800 },
    { "Amusement Park (27/27)", 0x07d0800, 0x07d0900 },
#else
    { "Amusement Park", 0x07cd400, 0x07d0900 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_SISLAND[] =
{
#ifndef USE_LARGE_PALETTES
    { "Small Island (1/6)", 0x07d0a00, 0x07d0c00 },
    { "Small Island (2/6)", 0x07d0c00, 0x07d0e00 },
    { "Small Island (3/6)", 0x07d0e00, 0x07d1000 },
    { "Small Island (4/6)", 0x07d1000, 0x07d1200 },
    { "Small Island (5/6)", 0x07d1200, 0x07d1400 },
    { "Small Island (6/6)", 0x07d1400, 0x07d1600 },
#else
    { "Small Island", 0x07d0a00, 0x07d1600 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_DNOON[] =
{
#ifndef USE_LARGE_PALETTES
    { "Desert Noon (1/7)", 0x07d3100, 0x07d3300 },
    { "Desert Noon (2/7)", 0x07d3300, 0x07d3500 },
    { "Desert Noon (3/7)", 0x07d3500, 0x07d3700 },
    { "Desert Noon (4/7)", 0x07d3700, 0x07d3900 },
    { "Desert Noon (5/7)", 0x07d3900, 0x07d3b00 },
    { "Desert Noon (6/7)", 0x07d3b00, 0x07d3d00 },
    { "Desert Noon (7/7)", 0x07d3d00, 0x07d3f00 },
#else
    { "Desert Noon", 0x07d3100, 0x07d3f00 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_RUIN[] =
{
#ifndef USE_LARGE_PALETTES
    { "Ruins (1/5)", 0x07d6d00, 0x07d6f00 },
    { "Ruins (2/5)", 0x07d6f00, 0x07d7100 },
    { "Ruins (3/5)", 0x07d7100, 0x07d7300 },
    { "Ruins (4/5)", 0x07d7300, 0x07d7500 },
    { "Ruins (5/5)", 0x07d7500, 0x07d7700 },
#else
    { "Ruins", 0x07d6d00, 0x07d7700 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_CTNOON[] =
{
#ifndef USE_LARGE_PALETTES
    { "Country Town Noon (1/21)", 0x07d8300, 0x07d8500 },
    { "Country Town Noon (2/21)", 0x07d8500, 0x07d8700 },
    { "Country Town Noon (3/21)", 0x07d8700, 0x07d8900 },
    { "Country Town Noon (4/21)", 0x07d8900, 0x07d8b00 },
    { "Country Town Noon (5/21)", 0x07d8b00, 0x07d8d00 },
    { "Country Town Noon (6/21)", 0x07d8d00, 0x07d8f00 },
    { "Country Town Noon (7/21)", 0x07d8f00, 0x07d9100 },
    { "Country Town Noon (8/21)", 0x07d9100, 0x07d9300 },
    { "Country Town Noon (9/21)", 0x07d9300, 0x07d9500 },
    { "Country Town Noon (10/21)", 0x07d9500, 0x07d9700 },
    { "Country Town Noon (11/21)", 0x07d9700, 0x07d9900 },
    { "Country Town Noon (12/21)", 0x07d9900, 0x07d9b00 },
    { "Country Town Noon (13/21)", 0x07d9b00, 0x07d9d00 },
    { "Country Town Noon (14/21)", 0x07d9d00, 0x07d9f00 },
    { "Country Town Noon (15/21)", 0x07d9f00, 0x07da100 },
    { "Country Town Noon (16/21)", 0x07da100, 0x07da300 },
    { "Country Town Noon (17/21)", 0x07da300, 0x07da500 },
    { "Country Town Noon (18/21)", 0x07da500, 0x07da700 },
    { "Country Town Noon (19/21)", 0x07da700, 0x07da900 },
    { "Country Town Noon (20/21)", 0x07da900, 0x07dab00 },
    { "Country Town Noon (21/21)", 0x07dab00, 0x07dac80 },
#else
    { "Country Town Noon", 0x07d8300, 0x07dac80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_UWATER[] =
{
#ifndef USE_LARGE_PALETTES
    { "Underground Water (1/8)", 0x07e0100, 0x07e0300 },
    { "Underground Water (2/8)", 0x07e0300, 0x07e0500 },
    { "Underground Water (3/8)", 0x07e0500, 0x07e0700 },
    { "Underground Water (4/8)", 0x07e0700, 0x07e0900 },
    { "Underground Water (5/8)", 0x07e0900, 0x07e0b00 },
    { "Underground Water (6/8)", 0x07e0b00, 0x07e0d00 },
    { "Underground Water (7/8)", 0x07e0d00, 0x07e0f00 },
    { "Underground Water (8/8)", 0x07e0f00, 0x07e1100 },
#else
    { "Underground Water", 0x07e0100, 0x07e1100 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_INHOUSE[] =
{
#ifndef USE_LARGE_PALETTES
    { "Inside House (1/8)", 0x07e2300, 0x07e2500 },
    { "Inside House (2/8)", 0x07e2500, 0x07e2700 },
    { "Inside House (3/8)", 0x07e2700, 0x07e2900 },
    { "Inside House (4/8)", 0x07e2900, 0x07e2b00 },
    { "Inside House (5/8)", 0x07e2b00, 0x07e2d00 },
    { "Inside House (6/8)", 0x07e2d00, 0x07e2f00 },
    { "Inside House (7/8)", 0x07e2f00, 0x07e3100 },
    { "Inside House (8/8)", 0x07e3100, 0x07e3200 },
#else
    { "Inside House", 0x07e2300, 0x07e3200 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_CROOM[] =
{
#ifndef USE_LARGE_PALETTES
    { "Coffin Room (1/6)", 0x07e4300, 0x07e4500, indexJojos51Stages, 0x5 },
    { "Coffin Room (2/6)", 0x07e4500, 0x07e4700, indexJojos51Stages, 0x6},
    { "Coffin Room (3/6)", 0x07e4700, 0x07e4900, indexJojos51Stages, 0x7 },
    { "Coffin Room (4/6)", 0x07e4900, 0x07e4b00, indexJojos51Stages, 0x8 },
    { "Coffin Room (5/6)", 0x07e4b00, 0x07e4d00, indexJojos51Stages, 0x9 },
    { "Coffin Room (6/6)", 0x07e4d00, 0x07e4e00, indexJojos51Stages, 0xa },
#else
    { "Coffin Room", 0x07e4300, 0x07e4e00 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_CLOCK[] =
{
#ifndef USE_LARGE_PALETTES
    { "Clock Tower (1/3)", 0x07e5b00, 0x07e5d00, indexJojos51Stages, 0 },
    { "Clock Tower (2/3)", 0x07e5d00, 0x07e5f00, indexJojos51Stages, 0x1 },
    { "Clock Tower (3/3)", 0x07e5f00, 0x07e6100, indexJojos51Stages, 0x2 },
#else
    { "Clock Tower", 0x07e5b00, 0x07e6100 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_SUBURB[] =
{
#ifndef USE_LARGE_PALETTES
    { "Suburbs (1/22)", 0x07e6900, 0x07e6b00 },
    { "Suburbs (2/22)", 0x07e6b00, 0x07e6d00 },
    { "Suburbs (3/22)", 0x07e6d00, 0x07e6f00 },
    { "Suburbs (4/22)", 0x07e6f00, 0x07e7100 },
    { "Suburbs (5/22)", 0x07e7100, 0x07e7300 },
    { "Suburbs (6/22)", 0x07e7300, 0x07e7500 },
    { "Suburbs (7/22)", 0x07e7500, 0x07e7700 },
    { "Suburbs (8/22)", 0x07e7700, 0x07e7900 },
    { "Suburbs (9/22)", 0x07e7900, 0x07e7b00 },
    { "Suburbs (10/22)", 0x07e7b00, 0x07e7d00 },
    { "Suburbs (11/22)", 0x07e7d00, 0x07e7f00 },
    { "Suburbs (12/22)", 0x07e7f00, 0x07e8100 },
    { "Suburbs (13/22)", 0x07e8100, 0x07e8300 },
    { "Suburbs (14/22)", 0x07e8300, 0x07e8500 },
    { "Suburbs (15/22)", 0x07e8500, 0x07e8700 },
    { "Suburbs (16/22)", 0x07e8700, 0x07e8900 },
    { "Suburbs (17/22)", 0x07e8900, 0x07e8b00 },
    { "Suburbs (18/22)", 0x07e8b00, 0x07e8d00 },
    { "Suburbs (19/22)", 0x07e8d00, 0x07e8f00 },
    { "Suburbs (20/22)", 0x07e8f00, 0x07e9100 },
    { "Suburbs (21/22)", 0x07e9100, 0x07e9300 },
    { "Suburbs (22/22)", 0x07e9300, 0x07e9480 },
#else
    { "Suburbs", 0x07e6900, 0x07e9480 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_OTBRIDGE[] =
{
#ifndef USE_LARGE_PALETTES
    { "On The Bridge (1/2)", 0x07eed00, 0x07eef00, indexJojos51Stages, 0x3 },
    { "On The Bridge (2/2)", 0x07eef00, 0x07ef100, indexJojos51Stages, 0x4 },
#else
    { "On The Bridge", 0x07eed00, 0x07ef100 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_CTTWILIGHT[] =
{
#ifndef USE_LARGE_PALETTES
    { "Country Town Twilight (1/21)", 0x07dad00, 0x07daf00 },
    { "Country Town Twilight (2/21)", 0x07daf00, 0x07db100 },
    { "Country Town Twilight (3/21)", 0x07db100, 0x07db300 },
    { "Country Town Twilight (4/21)", 0x07db300, 0x07db500 },
    { "Country Town Twilight (5/21)", 0x07db500, 0x07db700 },
    { "Country Town Twilight (6/21)", 0x07db700, 0x07db900 },
    { "Country Town Twilight (7/21)", 0x07db900, 0x07dbb00 },
    { "Country Town Twilight (8/21)", 0x07dbb00, 0x07dbd00 },
    { "Country Town Twilight (9/21)", 0x07dbd00, 0x07dbf00 },
    { "Country Town Twilight (10/21)", 0x07dbf00, 0x07dc100 },
    { "Country Town Twilight (11/21)", 0x07dc100, 0x07dc300 },
    { "Country Town Twilight (12/21)", 0x07dc300, 0x07dc500 },
    { "Country Town Twilight (13/21)", 0x07dc500, 0x07dc700 },
    { "Country Town Twilight (14/21)", 0x07dc700, 0x07dc900 },
    { "Country Town Twilight (15/21)", 0x07dc900, 0x07dcb00 },
    { "Country Town Twilight (16/21)", 0x07dcb00, 0x07dcd00 },
    { "Country Town Twilight (17/21)", 0x07dcd00, 0x07dcf00 },
    { "Country Town Twilight (18/21)", 0x07dcf00, 0x07dd100 },
    { "Country Town Twilight (19/21)", 0x07dd100, 0x07dd300 },
    { "Country Town Twilight (20/21)", 0x07dd300, 0x07dd500 },
    { "Country Town Twilight (21/21)", 0x07dd500, 0x07dd680 },
#else
    { "Country Town Twilight", 0x07dad00, 0x07dd680 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_DMORNING[] =
{
#ifndef USE_LARGE_PALETTES
    { "Desert Morning (1/8)", 0x07d4000, 0x07d4200 },
    { "Desert Morning (2/8)", 0x07d4200, 0x07d4400 },
    { "Desert Morning (3/8)", 0x07d4400, 0x07d4600 },
    { "Desert Morning (4/8)", 0x07d4600, 0x07d4800 },
    { "Desert Morning (5/8)", 0x07d4800, 0x07d4a00 },
    { "Desert Morning (6/8)", 0x07d4a00, 0x07d4c00 },
    { "Desert Morning (7/8)", 0x07d4c00, 0x07d4e00 },
    { "Desert Morning (8/8)", 0x07d4e00, 0x07d4e80 },
#else
    { "Desert Morning", 0x07d4000, 0x07d4e80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_DTWILIGHT[] =
{
#ifndef USE_LARGE_PALETTES
    { "Desert Twilight (1/8)", 0x07d5e00, 0x07d6000 },
    { "Desert Twilight (2/8)", 0x07d6000, 0x07d6200 },
    { "Desert Twilight (3/8)", 0x07d6200, 0x07d6400 },
    { "Desert Twilight (4/8)", 0x07d6400, 0x07d6600 },
    { "Desert Twilight (5/8)", 0x07d6600, 0x07d6800 },
    { "Desert Twilight (6/8)", 0x07d6800, 0x07d6a00 },
    { "Desert Twilight (7/8)", 0x07d6a00, 0x07d6c00 },
    { "Desert Twilight (8/8)", 0x07d6c00, 0x07d6c80 },
#else
    { "Desert Twilight", 0x07d5e00, 0x07d6c80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_DNIGHT[] =
{
#ifndef USE_LARGE_PALETTES
    { "Desert Night (1/8)", 0x07d4f00, 0x07d5100, indexJojos51Stages, 0xb },
    { "Desert Night (2/8)", 0x07d5100, 0x07d5300 },
    { "Desert Night (3/8)", 0x07d5300, 0x07d5500, indexJojos51Stages, 0xc },
    { "Desert Night (4/8)", 0x07d5500, 0x07d5700 },
    { "Desert Night (5/8)", 0x07d5700, 0x07d5900, indexJojos51Stages, 0xd },
    { "Desert Night (6/8)", 0x07d5900, 0x07d5b00, indexJojos51Stages, 0xe },
    { "Desert Night (7/8)", 0x07d5b00, 0x07d5d00, indexJojos51Stages, 0xf },
    { "Desert Night (8/8)", 0x07d5d00, 0x07d5d80, indexJojos51Stages, 0x10 },
#else
    { "Desert Night", 0x07d4f00, 0x07d5d80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_SISLANDJ[] =
{
#ifndef USE_LARGE_PALETTES
    { "Small Island (Joseph) (1/6)", 0x07d1700, 0x07d1900 },
    { "Small Island (Joseph) (2/6)", 0x07d1900, 0x07d1b00 },
    { "Small Island (Joseph) (3/6)", 0x07d1b00, 0x07d1d00 },
    { "Small Island (Joseph) (4/6)", 0x07d1d00, 0x07d1f00 },
    { "Small Island (Joseph) (5/6)", 0x07d1f00, 0x07d2100 },
    { "Small Island (Joseph) (6/6)", 0x07d2100, 0x07d2300 },
#else
    { "Small Island (Joseph)", 0x07d1700, 0x07d2300 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_CTNIGHT[] =
{
#ifndef USE_LARGE_PALETTES
    { "Country Town Night (1/21)", 0x07dd700, 0x07dd900 },
    { "Country Town Night (2/21)", 0x07dd900, 0x07ddb00 },
    { "Country Town Night (3/21)", 0x07ddb00, 0x07ddd00 },
    { "Country Town Night (4/21)", 0x07ddd00, 0x07ddf00 },
    { "Country Town Night (5/21)", 0x07ddf00, 0x07de100 },
    { "Country Town Night (6/21)", 0x07de100, 0x07de300 },
    { "Country Town Night (7/21)", 0x07de300, 0x07de500 },
    { "Country Town Night (8/21)", 0x07de500, 0x07de700 },
    { "Country Town Night (9/21)", 0x07de700, 0x07de900 },
    { "Country Town Night (10/21)", 0x07de900, 0x07deb00 },
    { "Country Town Night (11/21)", 0x07deb00, 0x07ded00 },
    { "Country Town Night (12/21)", 0x07ded00, 0x07def00 },
    { "Country Town Night (13/21)", 0x07def00, 0x07df100 },
    { "Country Town Night (14/21)", 0x07df100, 0x07df300 },
    { "Country Town Night (15/21)", 0x07df300, 0x07df500 },
    { "Country Town Night (16/21)", 0x07df500, 0x07df700 },
    { "Country Town Night (17/21)", 0x07df700, 0x07df900 },
    { "Country Town Night (18/21)", 0x07df900, 0x07dfb00 },
    { "Country Town Night (19/21)", 0x07dfb00, 0x07dfd00 },
    { "Country Town Night (20/21)", 0x07dfd00, 0x07dff00 },
    { "Country Town Night (21/21)", 0x07dff00, 0x07e0080 },
#else
    { "Country Town Night", 0x07dd700, 0x07e0080 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_SUBURB2[] =
{
#ifndef USE_LARGE_PALETTES
    { "Suburbs 2 (1/22)", 0x07e9500, 0x07e9700 },
    { "Suburbs 2 (2/22)", 0x07e9700, 0x07e9900 },
    { "Suburbs 2 (3/22)", 0x07e9900, 0x07e9b00 },
    { "Suburbs 2 (4/22)", 0x07e9b00, 0x07e9d00 },
    { "Suburbs 2 (5/22)", 0x07e9d00, 0x07e9f00 },
    { "Suburbs 2 (6/22)", 0x07e9f00, 0x07ea100 },
    { "Suburbs 2 (7/22)", 0x07ea100, 0x07ea300 },
    { "Suburbs 2 (8/22)", 0x07ea300, 0x07ea500 },
    { "Suburbs 2 (9/22)", 0x07ea500, 0x07ea700 },
    { "Suburbs 2 (10/22)", 0x07ea700, 0x07ea900 },
    { "Suburbs 2 (11/22)", 0x07ea900, 0x07eab00 },
    { "Suburbs 2 (12/22)", 0x07eab00, 0x07ead00 },
    { "Suburbs 2 (13/22)", 0x07ead00, 0x07eaf00 },
    { "Suburbs 2 (14/22)", 0x07eaf00, 0x07eb100 },
    { "Suburbs 2 (15/22)", 0x07eb100, 0x07eb300 },
    { "Suburbs 2 (16/22)", 0x07eb300, 0x07eb500 },
    { "Suburbs 2 (17/22)", 0x07eb500, 0x07eb700 },
    { "Suburbs 2 (18/22)", 0x07eb700, 0x07eb900 },
    { "Suburbs 2 (19/22)", 0x07eb900, 0x07ebb00 },
    { "Suburbs 2 (20/22)", 0x07ebb00, 0x07ebd00 },
    { "Suburbs 2 (21/22)", 0x07ebd00, 0x07ebf00 },
    { "Suburbs 2 (22/22)", 0x07ebf00, 0x07ec080 },
#else
    { "Suburbs 2", 0x07e9500, 0x07ec080 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_SUBURB3[] =
{
#ifndef USE_LARGE_PALETTES
    { "Suburbs 3 (1/22)", 0x07ec100, 0x07ec300 },
    { "Suburbs 3 (2/22)", 0x07ec300, 0x07ec500 },
    { "Suburbs 3 (3/22)", 0x07ec500, 0x07ec700 },
    { "Suburbs 3 (4/22)", 0x07ec700, 0x07ec900 },
    { "Suburbs 3 (5/22)", 0x07ec900, 0x07ecb00 },
    { "Suburbs 3 (6/22)", 0x07ecb00, 0x07ecd00 },
    { "Suburbs 3 (7/22)", 0x07ecd00, 0x07ecf00 },
    { "Suburbs 3 (8/22)", 0x07ecf00, 0x07ed100 },
    { "Suburbs 3 (9/22)", 0x07ed100, 0x07ed300 },
    { "Suburbs 3 (10/22)", 0x07ed300, 0x07ed500 },
    { "Suburbs 3 (11/22)", 0x07ed500, 0x07ed700 },
    { "Suburbs 3 (12/22)", 0x07ed700, 0x07ed900 },
    { "Suburbs 3 (13/22)", 0x07ed900, 0x07edb00 },
    { "Suburbs 3 (14/22)", 0x07edb00, 0x07edd00 },
    { "Suburbs 3 (15/22)", 0x07edd00, 0x07edf00 },
    { "Suburbs 3 (16/22)", 0x07edf00, 0x07ee100 },
    { "Suburbs 3 (17/22)", 0x07ee100, 0x07ee300 },
    { "Suburbs 3 (18/22)", 0x07ee300, 0x07ee500 },
    { "Suburbs 3 (19/22)", 0x07ee500, 0x07ee700 },
    { "Suburbs 3 (20/22)", 0x07ee700, 0x07ee900 },
    { "Suburbs 3 (21/22)", 0x07ee900, 0x07eeb00 },
    { "Suburbs 3 (22/22)", 0x07eeb00, 0x07eec80 },
#else
    { "Suburbs 3", 0x07ec100, 0x07eec80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW1[] =
{
#ifndef USE_LARGE_PALETTES
    { "New 1 (1/9)", 0x07cb280, 0x07cb480 },
    { "New 1 (2/9)", 0x07cb480, 0x07cb680 },
    { "New 1 (3/9)", 0x07cb680, 0x07cb880 },
    { "New 1 (4/9)", 0x07cb880, 0x07cba80 },
    { "New 1 (5/9)", 0x07cba80, 0x07cbc80 },
    { "New 1 (6/9)", 0x07cbc80, 0x07cbe80 },
    { "New 1 (7/9)", 0x07cbe80, 0x07cc080 },
    { "New 1 (8/9)", 0x07cc080, 0x07cc280 },
    { "New 1 (9/9)", 0x07cc280, 0x07cc480 },
#else
    { "New 1", 0x07cb280, 0x07cc480 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW2[] =
{
#ifndef USE_LARGE_PALETTES
    { "New 2 (1/7)", 0x07c9100, 0x07c9300 },
    { "New 2 (2/7)", 0x07c9300, 0x07c9500 },
    { "New 2 (3/7)", 0x07c9500, 0x07c9700 },
    { "New 2 (4/7)", 0x07c9700, 0x07c9900 },
    { "New 2 (5/7)", 0x07c9900, 0x07c9b00 },
    { "New 2 (6/7)", 0x07c9b00, 0x07c9d00 },
    { "New 2 (7/7)", 0x07c9d00, 0x07c9e80 },
#else
    { "New 2", 0x07c9100, 0x07c9e80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW3[] =
{
#ifndef USE_LARGE_PALETTES
    { "New 3 (1/6)", 0x07d2400, 0x07d2600 },
    { "New 3 (2/6)", 0x07d2600, 0x07d2800 },
    { "New 3 (3/6)", 0x07d2800, 0x07d2a00 },
    { "New 3 (4/6)", 0x07d2a00, 0x07d2c00 },
    { "New 3 (5/6)", 0x07d2c00, 0x07d2e00 },
    { "New 3 (6/6)", 0x07d2e00, 0x07d3000 },
#else
    { "New 3", 0x07d2400, 0x07d3000 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW4[] =
{
#ifndef USE_LARGE_PALETTES
    { "New 4 (1/5)", 0x07d7800, 0x07d7a00 },
    { "New 4 (2/5)", 0x07d7a00, 0x07d7c00 },
    { "New 4 (3/5)", 0x07d7c00, 0x07d7e00 },
    { "New 4 (4/5)", 0x07d7e00, 0x07d8000 },
    { "New 4 (5/5)", 0x07d8000, 0x07d8200 },
#else
    { "New 4", 0x07d7800, 0x07d8200 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW5[] =
{
#ifndef USE_LARGE_PALETTES
    { "New 5 (1/8)", 0x07e1200, 0x07e1400 },
    { "New 5 (2/8)", 0x07e1400, 0x07e1600 },
    { "New 5 (3/8)", 0x07e1600, 0x07e1800 },
    { "New 5 (4/8)", 0x07e1800, 0x07e1a00 },
    { "New 5 (5/8)", 0x07e1a00, 0x07e1c00 },
    { "New 5 (6/8)", 0x07e1c00, 0x07e1e00 },
    { "New 5 (7/8)", 0x07e1e00, 0x07e2000 },
    { "New 5 (8/8)", 0x07e2000, 0x07e2200 },
#else
    { "New 5", 0x07e1200, 0x07e2200 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW6[] =
{
#ifndef USE_LARGE_PALETTES
    { "New 6 (1/8)", 0x07e3300, 0x07e3500 },
    { "New 6 (2/8)", 0x07e3500, 0x07e3700 },
    { "New 6 (3/8)", 0x07e3700, 0x07e3900 },
    { "New 6 (4/8)", 0x07e3900, 0x07e3b00 },
    { "New 6 (5/8)", 0x07e3b00, 0x07e3d00 },
    { "New 6 (6/8)", 0x07e3d00, 0x07e3f00 },
    { "New 6 (7/8)", 0x07e3f00, 0x07e4100 },
    { "New 6 (8/8)", 0x07e4100, 0x07e4200 },
#else
    { "New 6", 0x07e3300, 0x07e4200 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW7[] =
{
#ifndef USE_LARGE_PALETTES
    { "New 7 (1/6)", 0x07e4f00, 0x07e5100 },
    { "New 7 (2/6)", 0x07e5100, 0x07e5300 },
    { "New 7 (3/6)", 0x07e5300, 0x07e5500 },
    { "New 7 (4/6)", 0x07e5500, 0x07e5700 },
    { "New 7 (5/6)", 0x07e5700, 0x07e5900 },
    { "New 7 (6/6)", 0x07e5900, 0x07e5a00 },
#else
    { "New 7", 0x07e4f00, 0x07e5a00 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW8[] =
{
#ifndef USE_LARGE_PALETTES
    { "New 8 (1/3)", 0x07e6200, 0x07e6400 },
    { "New 8 (2/3)", 0x07e6400, 0x07e6600 },
    { "New 8 (2/3)", 0x07e6600, 0x07e6800 },
#else
    { "New 8", 0x07e6200, 0x07e6800 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW9[] =
{
#ifndef USE_LARGE_PALETTES
    { "New 9 (1/2)", 0x07ef200, 0x07ef400 },
    { "New 9 (2/2)", 0x07ef400, 0x07ef600 },
#else
    { "New 9", 0x07ef200, 0x07ef600 },
#endif
};

const sDescTreeNode JOJOS_A_STAGE_COLLECTION[] =
{
    { "A Lockup", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_ALOCKUP, ARRAYSIZE(JOJOS_A_STAGE_NODE_ALOCKUP) },
    { "A Health Room", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_AHEALTHROOM, ARRAYSIZE(JOJOS_A_STAGE_NODE_AHEALTHROOM) },
    { "In A Airplane", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_AIRPLANE, ARRAYSIZE(JOJOS_A_STAGE_NODE_AIRPLANE) },
    { "Tigerbaum Garden", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_TGARDEN, ARRAYSIZE(JOJOS_A_STAGE_NODE_TGARDEN) },
    { "Hotel (Devil)", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_HOTELD, ARRAYSIZE(JOJOS_A_STAGE_NODE_HOTELD) },
    { "Remains", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_REMAINS, ARRAYSIZE(JOJOS_A_STAGE_NODE_REMAINS) },
    { "Hotel (Justice)", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_HOTELJ, ARRAYSIZE(JOJOS_A_STAGE_NODE_HOTELJ) },
    { "Amusement Park", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_AMPARK, ARRAYSIZE(JOJOS_A_STAGE_NODE_AMPARK) },
    { "Small Island", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_SISLAND, ARRAYSIZE(JOJOS_A_STAGE_NODE_SISLAND) },
    { "Desert Noon", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_DNOON, ARRAYSIZE(JOJOS_A_STAGE_NODE_DNOON) },
    { "Ruins", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_RUIN, ARRAYSIZE(JOJOS_A_STAGE_NODE_RUIN) },
    { "Country Town Noon", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_CTNOON, ARRAYSIZE(JOJOS_A_STAGE_NODE_CTNOON) },
    { "Underground Water", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_UWATER, ARRAYSIZE(JOJOS_A_STAGE_NODE_UWATER) },
    { "Inside House", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_INHOUSE, ARRAYSIZE(JOJOS_A_STAGE_NODE_INHOUSE) },
    { "Coffin Room", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_CROOM, ARRAYSIZE(JOJOS_A_STAGE_NODE_CROOM) },
    { "Clock Tower", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_CLOCK, ARRAYSIZE(JOJOS_A_STAGE_NODE_CLOCK) },
    { "Suburbs", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_SUBURB, ARRAYSIZE(JOJOS_A_STAGE_NODE_SUBURB) },
    { "On The Bridge", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_OTBRIDGE, ARRAYSIZE(JOJOS_A_STAGE_NODE_OTBRIDGE) },
    { "Country Town Twilight", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_CTTWILIGHT, ARRAYSIZE(JOJOS_A_STAGE_NODE_CTTWILIGHT) },
    { "Desert Morning", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_DMORNING, ARRAYSIZE(JOJOS_A_STAGE_NODE_DMORNING) },
    { "Desert Twilight", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_DTWILIGHT, ARRAYSIZE(JOJOS_A_STAGE_NODE_DTWILIGHT) },
    { "Desert Night", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_DNIGHT, ARRAYSIZE(JOJOS_A_STAGE_NODE_DNIGHT) },
    { "Small Island (Joseph)", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_SISLANDJ, ARRAYSIZE(JOJOS_A_STAGE_NODE_SISLANDJ) },
    { "Country Town Night", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_CTNIGHT, ARRAYSIZE(JOJOS_A_STAGE_NODE_CTNIGHT) },
    { "Suburbs 2", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_SUBURB2, ARRAYSIZE(JOJOS_A_STAGE_NODE_SUBURB2) },
    { "Suburbs 3", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_SUBURB3, ARRAYSIZE(JOJOS_A_STAGE_NODE_SUBURB3) },
    { "New 1", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_NEW1, ARRAYSIZE(JOJOS_A_STAGE_NODE_NEW1) },
    { "New 2", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_NEW2, ARRAYSIZE(JOJOS_A_STAGE_NODE_NEW2) },
    { "New 3", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_NEW3, ARRAYSIZE(JOJOS_A_STAGE_NODE_NEW3) },
    { "New 4", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_NEW4, ARRAYSIZE(JOJOS_A_STAGE_NODE_NEW4) },
    { "New 5", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_NEW5, ARRAYSIZE(JOJOS_A_STAGE_NODE_NEW5) },
    { "New 6", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_NEW6, ARRAYSIZE(JOJOS_A_STAGE_NODE_NEW6) },
    { "New 7", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_NEW7, ARRAYSIZE(JOJOS_A_STAGE_NODE_NEW7) },
    { "New 8", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_NEW8, ARRAYSIZE(JOJOS_A_STAGE_NODE_NEW8) },
    { "New 9", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_NEW9, ARRAYSIZE(JOJOS_A_STAGE_NODE_NEW9) },
};

#pragma endregion Stages

#pragma region Characters

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOTARO_A[] =
{
    { "Jotaro & Star Platinum A", 0x0336400, 0x0336480, indexJojos51Jotaro, indexJojos51Character_Main },
    { "Star Breaker Super A", 0x0336D80, 0x0336DC0, indexJojos51Jotaro, 1 },
    { "Star Platinum Charging Flash A", 0x0336880, 0x0336900, indexJojos51Jotaro, 2 },
    { "Jotaro Vs/Super A", 0x0410000, 0x0410080, indexJojos51Jotaro, indexJojos51Character_VsSuper },
    { "Jotaro Challenger A", 0x0410080, 0x0410100, indexJojos51Jotaro, indexJojos51Character_Challenger },
    { "Jotaro Select/Winning A (1/2)", 0x0410100, 0x0410180, indexJojos51Jotaro, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Jotaro Select/Winning A (2/2)", 0x0410180, 0x0410200, indexJojos51Jotaro, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "Jotaro Burning A (1/2)", 0x0336480, 0x0336500, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { "Jotaro Burning A (2/2)", 0x0336500, 0x0336580, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { "Jotaro Tech/Zap A (1/2)", 0x0336780, 0x0336800, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { "Jotaro Tech/Zap A (2/2)", 0x0336800, 0x0336880, indexJojos51Jotaro, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOTARO_B[] =
{
    { "Jotaro & Star Platinum B", 0x034a900, 0x034a980, indexJojos51Jotaro, indexJojos51Character_Main },
    { "Star Breaker Super B", 0x034B280, 0x034B2C0, indexJojos51Jotaro, 1  },
    { "Star Platinum Charging Flash B", 0x034AD80, 0x034AE00, indexJojos51Jotaro, 2 },
    { "Jotaro Vs/Super B", 0x0414e00, 0x0414e80, indexJojos51Jotaro, indexJojos51Character_VsSuper },
    { "Jotaro Challenger B", 0x0414e80, 0x0414f00, indexJojos51Jotaro, indexJojos51Character_Challenger },
    { "Jotaro Select/Winning B (1/2)", 0x0414f00, 0x0414f80, indexJojos51Jotaro, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Jotaro Select/Winning B (2/2)", 0x0414f80, 0x0415000, indexJojos51Jotaro, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "Jotaro Burning B (1/2)", 0x034a980, 0x034aa00, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { "Jotaro Burning B (2/2)", 0x034aa00, 0x034aa80, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { "Jotaro Tech/Zap B (1/2)", 0x034ac80, 0x034ad00, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { "Jotaro Tech/Zap B (2/2)", 0x034ad00, 0x034ad80, indexJojos51Jotaro, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOTARO_C[] =
{
    { "Jotaro & Star Platinum C", 0x035ee00, 0x035ee80, indexJojos51Jotaro, indexJojos51Character_Main },
    { "Star Breaker Super C", 0x035F780, 0x035F7C0, indexJojos51Jotaro, 1  },
    { "Star Platinum Charging Flash C", 0x035F280, 0x035F300, indexJojos51Jotaro, 2 },
    { "Jotaro Vs/Super C", 0x0419c00, 0x0419c80, indexJojos51Jotaro, indexJojos51Character_VsSuper },
    { "Jotaro Challenger C", 0x0419c80, 0x0419d00, indexJojos51Jotaro, indexJojos51Character_Challenger },
    { "Jotaro Select/Winning C (1/2)", 0x0419d00, 0x0419d80, indexJojos51Jotaro, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Jotaro Select/Winning C (2/2)", 0x0419d80, 0x0419e00, indexJojos51Jotaro, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "Jotaro Burning C (1/2)", 0x035ee80, 0x035ef00, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { "Jotaro Burning C (2/2)", 0x035ef00, 0x035ef80, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { "Jotaro Tech/Zap C (1/2)", 0x035f180, 0x035f200, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { "Jotaro Tech/Zap C (2/2)", 0x035f200, 0x035f280, indexJojos51Jotaro, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOTARO_S[] =
{
    { "Jotaro & Star Platinum S", 0x0373300, 0x0373380, indexJojos51Jotaro, indexJojos51Character_Main },
    { "Star Breaker Super S", 0x0373C80, 0x0373CC0, indexJojos51Jotaro, 1  },
    { "Star Platinum Charging Flash S", 0x0373780, 0x0373800, indexJojos51Jotaro, 2 },
    { "Jotaro Vs/Super S", 0x041ea00, 0x041ea80, indexJojos51Jotaro, indexJojos51Character_VsSuper },
    { "Jotaro Challenger S", 0x041ea80, 0x041eb00, indexJojos51Jotaro, indexJojos51Character_Challenger },
    { "Jotaro Select/Winning S (1/2)", 0x041eb00, 0x041eb80, indexJojos51Jotaro, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Jotaro Select/Winning S (2/2)", 0x041eb80, 0x041ec00, indexJojos51Jotaro, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "Jotaro Burning S (1/2)", 0x0373380, 0x0373400, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { "Jotaro Burning S (2/2)", 0x0373400, 0x0373480, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { "Jotaro Tech/Zap S (1/2)", 0x0373680, 0x0373700, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { "Jotaro Tech/Zap S (2/2)", 0x0373700, 0x0373780, indexJojos51Jotaro, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOTARO_Start[] =
{
    { "Jotaro & Star Platinum Start", 0x0387800, 0x0387880, indexJojos51Jotaro, indexJojos51Character_Main },
    { "Star Breaker Super Start", 0x0388180, 0x03881C0, indexJojos51Jotaro, 1  },
    { "Star Platinum Charging Flash Start", 0x0387C80, 0x0387D00, indexJojos51Jotaro, 2 },
    { "Jotaro Vs/Super Start", 0x0423800, 0x0423880, indexJojos51Jotaro, indexJojos51Character_VsSuper },
    { "Jotaro Challenger Start", 0x0423880, 0x0423900, indexJojos51Jotaro, indexJojos51Character_Challenger },
    { "Jotaro Select/Winning Start (1/2)", 0x0423900, 0x0423980, indexJojos51Jotaro, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Jotaro Select/Winning Start (2/2)", 0x0423980, 0x0423a00, indexJojos51Jotaro, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "Jotaro Burning Start (1/2)", 0x0387880, 0x0387900, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { "Jotaro Burning Start (2/2)", 0x0387900, 0x0387980, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { "Jotaro Tech/Zap Start (1/2)", 0x0387b80, 0x0387c00, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { "Jotaro Tech/Zap Start (2/2)", 0x0387c00, 0x0387c80, indexJojos51Jotaro, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIEROPHANT_A[] =
{
    { "Kakyoin & Hierophant Green A", 0x0337080, 0x0337100, indexJojos51Kakyo, indexJojos51Character_Main },
    { "Hierophant Changing Pal A (1/7)", 0x0337900, 0x0337980, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { "Hierophant Changing Pal A (2/7)", 0x0337980, 0x0337a00, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { "Hierophant Changing Pal A (3/7)", 0x0337a00, 0x0337a80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { "Hierophant Changing Pal A (4/7)", 0x0337a80, 0x0337b00, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { "Hierophant Changing Pal A (5/7)", 0x0337b00, 0x0337b80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { "Hierophant Changing Pal A (6/7)", 0x0337b80, 0x0337c00, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { "Hierophant Changing Pal A (7/7)", 0x0337c00, 0x0337c80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { "Hierophant Sparkles A", 0x0337c80, 0x0337ca0, indexJojos51Kakyo, 0x8 },
    { "Raging Demon Trail A", 0x0337800, 0x0337880, indexJojos51Kakyo, 0x09 },
    { "Kakyoin Remote Mode Afterimage A", 0x0337500, 0x0337580, indexJojos51Kakyo, 0x0A },
    { "Kakyoin Vs/Super A", 0x0410300, 0x0410380, indexJojos51Kakyo, indexJojos51Character_VsSuper },
    { "Kakyoin Challenger A", 0x0410380, 0x0410400, indexJojos51Kakyo, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { "Kakyoin Select/Winning A (1/2)", 0x0410400, 0x0410480, indexJojos51Kakyo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Kakyoin Select/Winning A (2/2)", 0x0410480, 0x0410500, indexJojos51Kakyo, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { "Kakyoin Select/Winning A", 0x0410400, 0x0410500 },
#endif
    { "Kakyoin Burning A (1/2)", 0x0337100, 0x0337180, indexJojos51Kakyo, 0x0 },
    { "Kakyoin Burning A (2/2)", 0x0337180, 0x0337200, indexJojos51Kakyo, 0x0 },
    { "Kakyoin Tech/Zap A (1/2)", 0x0337400, 0x0337480, indexJojos51Kakyo, 0x0 },
    { "Kakyoin Tech/Zap A (2/2)", 0x0337480, 0x0337500, indexJojos51Kakyo, 0x0 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIEROPHANT_B[] =
{
    { "Kakyoin & Hierophant Green B", 0x034b580, 0x034b600, indexJojos51Kakyo, indexJojos51Character_Main },
    { "Hierophant Changing Pal B (1/7)", 0x034be00, 0x034be80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { "Hierophant Changing Pal B (2/7)", 0x034be80, 0x034bf00, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { "Hierophant Changing Pal B (3/7)", 0x034bf00, 0x034bf80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { "Hierophant Changing Pal B (4/7)", 0x034bf80, 0x034c000, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { "Hierophant Changing Pal B (5/7)", 0x034c000, 0x034c080, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { "Hierophant Changing Pal B (6/7)", 0x034c080, 0x034c100, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { "Hierophant Changing Pal B (7/7)", 0x034c100, 0x034c180, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { "Hierophant Sparkles B", 0x034c180, 0x034c1a0, indexJojos51Kakyo, 0x8 },
    { "Raging Demon Trail B", 0x034bd00, 0x034bd80, indexJojos51Kakyo, 0x9 },
    { "Kakyoin Remote Mode Afterimage B", 0x034BA00, 0x034BA80, indexJojos51Kakyo, 0xa },
    { "Kakyoin Vs/Super B", 0x0415100, 0x0415180, indexJojos51Kakyo, indexJojos51Character_VsSuper },
    { "Kakyoin Challenger B", 0x0415180, 0x0415200, indexJojos51Kakyo, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { "Kakyoin Select/Winning B (1/2)", 0x0415200, 0x0415280, indexJojos51Kakyo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Kakyoin Select/Winning B (2/2)", 0x0415280, 0x0415300, indexJojos51Kakyo, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { "Kakyoin Select/Winning B", 0x0415200, 0x0415300 },
#endif
    { "Kakyoin Burning B (1/2)", 0x034b600, 0x034b680, indexJojos51Kakyo, 0x0 },
    { "Kakyoin Burning B (2/2)", 0x034b680, 0x034b700, indexJojos51Kakyo, 0x0 },
    { "Kakyoin Tech/Zap B (1/2)", 0x034b900, 0x034b980, indexJojos51Kakyo, 0x0 },
    { "Kakyoin Tech/Zap B (2/2)", 0x034b980, 0x034ba00, indexJojos51Kakyo, 0x0 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIEROPHANT_C[] =
{
    { "Kakyoin & Hierophant Green C", 0x035fa80, 0x035fb00, indexJojos51Kakyo, indexJojos51Character_Main },
    { "Hierophant Changing Pal C (1/7)", 0x0360300, 0x0360380, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { "Hierophant Changing Pal C (2/7)", 0x0360380, 0x0360400, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { "Hierophant Changing Pal C (3/7)", 0x0360400, 0x0360480, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { "Hierophant Changing Pal C (4/7)", 0x0360480, 0x0360500, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { "Hierophant Changing Pal C (5/7)", 0x0360500, 0x0360580, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { "Hierophant Changing Pal C (6/7)", 0x0360580, 0x0360600, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { "Hierophant Changing Pal C (7/7)", 0x0360600, 0x0360680, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { "Hierophant Sparkles C", 0x0360680, 0x03606a0, indexJojos51Kakyo, 0x8 },
    { "Raging Demon Trail C", 0x0360200, 0x0360280, indexJojos51Kakyo, 0x9 },
    { "Kakyoin Remote Mode Afterimage C", 0x035FF00, 0x035FF80, indexJojos51Kakyo, 0xa },
    { "Kakyoin Vs/Super C", 0x0419f00, 0x0419f80, indexJojos51Kakyo, indexJojos51Character_VsSuper },
    { "Kakyoin Challenger C", 0x0419f80, 0x041a000, indexJojos51Kakyo, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { "Kakyoin Select/Winning C (1/2)", 0x041a000, 0x041a080, indexJojos51Kakyo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Kakyoin Select/Winning C (2/2)", 0x041a080, 0x041a100, indexJojos51Kakyo, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { "Kakyoin Select/Winning C", 0x041a000, 0x041a100 },
#endif
    { "Kakyoin Burning C (1/2)", 0x035fb00, 0x035fb80, indexJojos51Kakyo, 0x0 },
    { "Kakyoin Burning C (2/2)", 0x035fb80, 0x035fc00, indexJojos51Kakyo, 0x0 },
    { "Kakyoin Tech/Zap C (1/2)", 0x035fe00, 0x035fe80, indexJojos51Kakyo, 0x0 },
    { "Kakyoin Tech/Zap C (2/2)", 0x035fe80, 0x035ff00, indexJojos51Kakyo, 0x0 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIEROPHANT_S[] =
{
    { "Kakyoin & Hierophant Green S", 0x0373f80, 0x0374000, indexJojos51Kakyo, indexJojos51Character_Main },
    { "Hierophant Changing Pal S (1/7)", 0x0374800, 0x0374880, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { "Hierophant Changing Pal S (2/7)", 0x0374880, 0x0374900, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { "Hierophant Changing Pal S (3/7)", 0x0374900, 0x0374980, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { "Hierophant Changing Pal S (4/7)", 0x0374980, 0x0374a00, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { "Hierophant Changing Pal S (5/7)", 0x0374a00, 0x0374a80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { "Hierophant Changing Pal S (6/7)", 0x0374a80, 0x0374b00, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { "Hierophant Changing Pal S (7/7)", 0x0374b00, 0x0374b80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { "Hierophant Sparkles S", 0x0374b80, 0x0374ba0, indexJojos51Kakyo, 0x8 },
    { "Raging Demon Trail S", 0x0374700, 0x0374780, indexJojos51Kakyo, 0x9 },
    { "Kakyoin Remote Mode Afterimage S", 0x0374400, 0x0374480, indexJojos51Kakyo, 0xa },
    { "Kakyoin Vs/Super S", 0x041ed00, 0x041ed80, indexJojos51Kakyo, indexJojos51Character_VsSuper },
    { "Kakyoin Challenger S", 0x041ed80, 0x041ee00, indexJojos51Kakyo, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { "Kakyoin Select/Winning S (1/2)", 0x041ee00, 0x041ee80, indexJojos51Kakyo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Kakyoin Select/Winning S (2/2)", 0x041ee80, 0x041ef00, indexJojos51Kakyo, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { "Kakyoin Select/Winning S", 0x041ee00, 0x041ef00 },
#endif
    { "Kakyoin Burning S (1/2)", 0x0374000, 0x0374080, indexJojos51Kakyo, 0x0 },
    { "Kakyoin Burning S (2/2)", 0x0374080, 0x0374100, indexJojos51Kakyo, 0x0 },
    { "Kakyoin Tech/Zap S (1/2)", 0x0374300, 0x0374380, indexJojos51Kakyo, 0x0 },
    { "Kakyoin Tech/Zap S (2/2)", 0x0374380, 0x0374400, indexJojos51Kakyo, 0x0 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIEROPHANT_Start[] =
{
    { "Kakyoin & Hierophant Green Start", 0x0388480, 0x0388500, indexJojos51Kakyo, indexJojos51Character_Main },
    { "Hierophant Changing Pal Start (1/7)", 0x0388d00, 0x0388d80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { "Hierophant Changing Pal Start (2/7)", 0x0388d80, 0x0388e00, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { "Hierophant Changing Pal Start (3/7)", 0x0388e00, 0x0388e80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { "Hierophant Changing Pal Start (4/7)", 0x0388e80, 0x0388f00, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { "Hierophant Changing Pal Start (5/7)", 0x0388f00, 0x0388f80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { "Hierophant Changing Pal Start (6/7)", 0x0388f80, 0x0389000, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { "Hierophant Changing Pal Start (7/7)", 0x0389000, 0x0389080, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { "Hierophant Sparkles Start", 0x0389080, 0x03890a0, indexJojos51Kakyo, 0x8 },
    { "Raging Demon Trail Start", 0x0388c00, 0x0388c80, indexJojos51Kakyo, 0x9 },
    { "Kakyoin Remote Mode Afterimage Start", 0x0388900, 0x0388980, indexJojos51Kakyo, 0xa },
    { "Kakyoin Vs/Super Start", 0x0423b00, 0x0423b80, indexJojos51Kakyo, indexJojos51Character_VsSuper },
    { "Kakyoin Challenger Start", 0x0423b80, 0x0423c00, indexJojos51Kakyo, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { "Kakyoin Select/Winning Start (1/2)", 0x0423c00, 0x0423c80, indexJojos51Kakyo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Kakyoin Select/Winning Start (2/2)", 0x0423c80, 0x0423d00, indexJojos51Kakyo, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { "Kakyoin Select/Winning Start", 0x0423c00, 0x0423d00 },
#endif
    { "Kakyoin Burning Start (1/2)", 0x0388500, 0x0388580, indexJojos51Kakyo, 0x0 },
    { "Kakyoin Burning Start (2/2)", 0x0388580, 0x0388600, indexJojos51Kakyo, 0x0 },
    { "Kakyoin Tech/Zap Start (1/2)", 0x0388800, 0x0388880, indexJojos51Kakyo, 0x0 },
    { "Kakyoin Tech/Zap Start (2/2)", 0x0388880, 0x0388900, indexJojos51Kakyo, 0x0 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_AVDOL_A[] =
{
    { "Avdol & Magician's Red A", 0x0337d00, 0x0337d80, indexJojos51Avdol, indexJojos51Character_Main, &pairHandledInCode },
    { "Avdol Fire A", 0x0338580, 0x03385c0, indexJojos51Avdol, 1, &pairHandledInCode },
    { "Avdol & MR Remote Activation A", 0x0338180, 0x0338200, indexJojos51Avdol, 2 },
    { "Avdol Vs/Super A", 0x0410600, 0x0410680, indexJojos51Avdol, indexJojos51Character_VsSuper },
    { "Avdol Challenger A", 0x0410680, 0x0410700, indexJojos51Avdol, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { "Avdol Select / Winning A (1/2)", 0x0410700, 0x0410780, indexJojos51Avdol, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Avdol Select / Winning A (2/2)", 0x0410780, 0x0410800, indexJojos51Avdol, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { "Avdol Select / Winning A", 0x0410700, 0x0410800 },
#endif
    { "Avdol Burning A (1/2)", 0x0337d80, 0x0337e00, indexJojos51Avdol, indexJojos51Character_BurnZap },
    { "Avdol Burning A (2/2)", 0x0337e00, 0x0337e80, indexJojos51Avdol, indexJojos51Character_BurnZap },
    { "Avdol Tech/Zap A (1/2)", 0x0338080, 0x0338100, indexJojos51Avdol, indexJojos51Character_BurnZap },
    { "Avdol Tech/Zap A (2/2)", 0x0338100, 0x0338180, indexJojos51Avdol, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_AVDOL_B[] =
{
    { "Avdol & Magician's Red B", 0x034c200, 0x034c280, indexJojos51Avdol, indexJojos51Character_Main, &pairHandledInCode },
    { "Avdol Fire B", 0x034ca80, 0x034cac0, indexJojos51Avdol, 1, &pairHandledInCode },
    { "Avdol & MR Remote Activation B", 0x034c680, 0x034c700, indexJojos51Avdol, 2 },
    { "Avdol Vs / Super B", 0x0415400, 0x0415480, indexJojos51Avdol, indexJojos51Character_VsSuper },
    { "Avdol Challenger B", 0x0415480, 0x0415500, indexJojos51Avdol, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { "Avdol Select / Winning B (1/2)", 0x0415500, 0x0415580, indexJojos51Avdol, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Avdol Select / Winning B (2/2)", 0x0415580, 0x0415600, indexJojos51Avdol, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { "Avdol Select / Winning B", 0x0415500, 0x0415600 },
#endif
    { "Avdol Burning B (1/2)", 0x034c280, 0x034c300, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { "Avdol Burning B (2/2)", 0x034c300, 0x034c380, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { "Avdol Tech/Zap B (1/2)", 0x034c580, 0x034c600, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { "Avdol Tech/Zap B (2/2)", 0x034c600, 0x034c680, indexJojos51Avdol, indexJojos51Character_BurnZap  },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_AVDOL_C[] =
{
    { "Avdol & Magician's Red C", 0x0360700, 0x0360780, indexJojos51Avdol, indexJojos51Character_Main, &pairHandledInCode },
    { "Avdol Fire C", 0x0360f80, 0x0360fc0, indexJojos51Avdol, 1, &pairHandledInCode },
    { "Avdol & MR Remote Activation C", 0x0360b80, 0x0360c00, indexJojos51Avdol, 2 },
    { "Avdol Vs / Super C", 0x041a200, 0x041a280, indexJojos51Avdol, indexJojos51Character_VsSuper },
    { "Avdol Challenger C", 0x041a280, 0x041a300, indexJojos51Avdol, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { "Avdol Select / Winning C (1/2)", 0x041a300, 0x041a380, indexJojos51Avdol, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Avdol Select / Winning C (2/2)", 0x041a380, 0x041a400, indexJojos51Avdol, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { "Avdol Select / Winning C", 0x041a300, 0x041a400 },
#endif
    { "Avdol Burning C (1/2)", 0x0360780, 0x0360800, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { "Avdol Burning C (2/2)", 0x0360800, 0x0360880, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { "Avdol Tech/Zap C (1/2)", 0x0360a80, 0x0360b00, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { "Avdol Tech/Zap C (2/2)", 0x0360b00, 0x0360b80, indexJojos51Avdol, indexJojos51Character_BurnZap  },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_AVDOL_S[] =
{
    { "Avdol & Magician's Red S", 0x0374c00, 0x0374c80, indexJojos51Avdol, indexJojos51Character_Main, &pairHandledInCode },
    { "Avdol Fire S", 0x0375480, 0x03754c0, indexJojos51Avdol, 1, &pairHandledInCode },
    { "Avdol & MR Remote Activation S", 0x0375080, 0x0375100, indexJojos51Avdol, 2 },
    { "Avdol Vs / Super S", 0x041f000, 0x041f080, indexJojos51Avdol, indexJojos51Character_VsSuper },
    { "Avdol Challenger S", 0x041f080, 0x041f100, indexJojos51Avdol, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { "Avdol Select / Winning S (1/2)", 0x041f100, 0x041f180, indexJojos51Avdol, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Avdol Select / Winning S (2/2)", 0x041f180, 0x041f200, indexJojos51Avdol, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { "Avdol Select / Winning S", 0x041f100, 0x041f200 },
#endif
    { "Avdol Burning S (1/2)", 0x0374c80, 0x0374d00, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { "Avdol Burning S (2/2)", 0x0374d00, 0x0374d80, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { "Avdol Tech/Zap S (1/2)", 0x0374f80, 0x0375000, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { "Avdol Tech/Zap S (2/2)", 0x0375000, 0x0375080, indexJojos51Avdol, indexJojos51Character_BurnZap  },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_AVDOL_Start[] =
{
    { "Avdol & Magician's Red Start", 0x0389100, 0x0389180, indexJojos51Avdol, indexJojos51Character_Main, &pairHandledInCode },
    { "Avdol Fire Start", 0x0389980, 0x03899c0, indexJojos51Avdol, 1, &pairHandledInCode },
    { "Avdol & MR Remote Activation Start", 0x0389580, 0x0389600, indexJojos51Avdol, 2 },
    { "Avdol Vs / Super Start", 0x0423e00, 0x0423e80, indexJojos51Avdol, indexJojos51Character_VsSuper },
    { "Avdol Challenger Start", 0x0423e80, 0x0423f00, indexJojos51Avdol, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { "Avdol Select / Winning Start (1/2)", 0x0423f00, 0x0423f80, indexJojos51Avdol, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Avdol Select / Winning Start (2/2)", 0x0423f80, 0x0424000, indexJojos51Avdol, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { "Avdol Select / Winning Start", 0x0423f00, 0x0424000 },
#endif
    { "Avdol Burning Start (1/2)", 0x0389180, 0x0389200, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { "Avdol Burning Start (2/2)", 0x0389200, 0x0389280, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { "Avdol Tech/Zap Start (1/2)", 0x0389480, 0x0389500, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { "Avdol Tech/Zap Start (2/2)", 0x0389500, 0x0389580, indexJojos51Avdol, indexJojos51Character_BurnZap  },
};

// Warning: Pol uses an older ordering system, so don't use the new enum.
const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_POL_A[] =
{
    { "Polnareff & Silver Chariot A", 0x0338980, 0x0338a00, indexJojos51Pol, 0x00 },
    { "Chariot's Changing Pal A (1/2)", 0x0339280, 0x0339300, indexJojos51Pol, 0x00 },
    { "Chariot's Changing Pal A (2/2)", 0x0339300, 0x0339380, indexJojos51Pol, 0x00 },
    { "Pol Remote Activation Flash A", 0x0338e00, 0x0338e80, indexJojos51Pol, 0x01  },
    { "Polnareff Vs / Super A", 0x0410900, 0x0410980, indexJojos51Pol, 0x02 },
    { "Polnareff Challenger A", 0x0410980, 0x0410a00, indexJojos51Pol, 0x03 },
#ifndef USE_LARGE_PALETTES
    { "Polnareff Select / Winning A (1/2)", 0x0410a00, 0x0410a80, indexJojos51Pol, 0x04, &pairHandledInCode },
    { "Polnareff Select / Winning A (2/2)", 0x0410a80, 0x0410b00, indexJojos51Pol, 0x05, &pairHandledInCode },
#else
    { "Polnareff Select / Winning A", 0x0410a00, 0x0410b00 },
#endif
    { "Polnareff Burning A (1/2)", 0x0338a00, 0x0338a80, indexJojos51Pol, 0x06 },
    { "Polnareff Burning A (2/2)", 0x0338a80, 0x0338b00, indexJojos51Pol, 0x06 },
    { "Polnareff Tech/Zap A (1/2)", 0x0338d00, 0x0338d80, indexJojos51Pol, 0x06 },
    { "Polnareff Tech/Zap A (2/2)", 0x0338d80, 0x0338e00, indexJojos51Pol, 0x06 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_POL_B[] =
{
    { "Polnareff & Silver Chariot B", 0x034ce80, 0x034cf00, indexJojos51Pol },
    { "Chariot's Changing Pal B (1/2)", 0x034d780, 0x034d800, indexJojos51Pol, 0x00 },
    { "Chariot's Changing Pal B (2/2)", 0x034d800, 0x034d880, indexJojos51Pol, 0x00 },
    { "Pol Remote Activation Flash B", 0x034d300, 0x034d380, indexJojos51Pol, 0x01 },
    { "Polnareff Vs / Super B", 0x0415700, 0x0415780, indexJojos51Pol, 0x02 },
    { "Polnareff Challenger B", 0x0415780, 0x0415800, indexJojos51Pol, 0x03 },
#ifndef USE_LARGE_PALETTES
    { "Polnareff Select / Winning B (1/2)", 0x0415800, 0x0415880, indexJojos51Pol, 0x04, &pairHandledInCode },
    { "Polnareff Select / Winning B (2/2)", 0x0415880, 0x0415900, indexJojos51Pol, 0x05, &pairHandledInCode },
#else
    { "Polnareff Select / Winning B", 0x0415800, 0x0415900 },
#endif
    { "Polnareff Burning B (1/2)", 0x034cf00, 0x034cf80, indexJojos51Pol, 0x06 },
    { "Polnareff Burning B (2/2)", 0x034cf80, 0x034d000, indexJojos51Pol, 0x06 },
    { "Polnareff Tech/Zap B (1/2)", 0x034d200, 0x034d280, indexJojos51Pol, 0x06 },
    { "Polnareff Tech/Zap B (2/2)", 0x034d280, 0x034d300, indexJojos51Pol, 0x06 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_POL_C[] =
{
    { "Polnareff & Silver Chariot C", 0x0361380, 0x0361400, indexJojos51Pol },
    { "Chariot's Changing Pal C (1/2)", 0x0361c80, 0x0361d00, indexJojos51Pol, 0x00 },
    { "Chariot's Changing Pal C (2/2)", 0x0361d00, 0x0361d80, indexJojos51Pol, 0x00 },
    { "Pol Remote Activation Flash C", 0x0361800, 0x0361880, indexJojos51Pol, 0x01 },
    { "Polnareff Vs / Super C", 0x041a500, 0x041a580, indexJojos51Pol, 0x02 },
    { "Polnareff Challenger C", 0x041a580, 0x041a600, indexJojos51Pol, 0x03 },
#ifndef USE_LARGE_PALETTES
    { "Polnareff Select / Winning C (1/2)", 0x041a600, 0x041a680, indexJojos51Pol, 0x04, &pairHandledInCode },
    { "Polnareff Select / Winning C (2/2)", 0x041a680, 0x041a700, indexJojos51Pol, 0x05, &pairHandledInCode },
#else
    { "Polnareff Select / Winning C", 0x041a600, 0x041a700 },
#endif
    { "Polnareff Burning C (1/2)", 0x0361400, 0x0361480, indexJojos51Pol, 0x06 },
    { "Polnareff Burning C (2/2)", 0x0361480, 0x0361500, indexJojos51Pol, 0x06 },
    { "Polnareff Tech/Zap C (1/2)", 0x0361700, 0x0361780, indexJojos51Pol, 0x06 },
    { "Polnareff Tech/Zap C (2/2)", 0x0361780, 0x0361800, indexJojos51Pol, 0x06 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_POL_S[] =
{
    { "Polnareff & Silver Chariot S", 0x0375880, 0x0375900, indexJojos51Pol },
    { "Chariot's Changing Pal S (1/2)", 0x0376180, 0x0376200, indexJojos51Pol, 0x00 },
    { "Chariot's Changing Pal S (2/2)", 0x0376200, 0x0376280, indexJojos51Pol, 0x00 },
    { "Pol Remote Activation Flash S", 0x0375d00, 0x0375d80, indexJojos51Pol, 0x01 },
    { "Polnareff Vs / Super S", 0x041f300, 0x041f380, indexJojos51Pol, 0x02 },
    { "Polnareff Challenger S", 0x041f380, 0x041f400, indexJojos51Pol, 0x03 },
#ifndef USE_LARGE_PALETTES
    { "Polnareff Select / Winning S (1/2)", 0x041f400, 0x041f480, indexJojos51Pol, 0x04, &pairHandledInCode },
    { "Polnareff Select / Winning S (2/2)", 0x041f480, 0x041f500, indexJojos51Pol, 0x05, &pairHandledInCode },
#else
    { "Polnareff Select / Winning S", 0x041f400, 0x041f500 },
#endif
    { "Polnareff Burning S (1/2)", 0x0375900, 0x0375980, indexJojos51Pol, 0x06 },
    { "Polnareff Burning S (2/2)", 0x0375980, 0x0375a00, indexJojos51Pol, 0x06 },
    { "Polnareff Tech/Zap S (1/2)", 0x0375c00, 0x0375c80, indexJojos51Pol, 0x06 },
    { "Polnareff Tech/Zap S (2/2)", 0x0375c80, 0x0375d00, indexJojos51Pol, 0x06 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_POL_Start[] =
{
    { "Polnareff & Silver Chariot Start", 0x0389d80, 0x0389e00, indexJojos51Pol },
    { "Chariot's Changing Pal Start (1/2)", 0x038a680, 0x038a700, indexJojos51Pol, 0x00 },
    { "Chariot's Changing Pal Start (2/2)", 0x038a700, 0x038a780, indexJojos51Pol, 0x00 },
    { "Pol Remote Activation Flash Start", 0x038a200, 0x038a280, indexJojos51Pol, 0x01 },
    { "Polnareff Vs / Super Start", 0x0424100, 0x0424180, indexJojos51Pol, 0x02 },
    { "Polnareff Challenger Start", 0x0424180, 0x0424200, indexJojos51Pol, 0x03 },
#ifndef USE_LARGE_PALETTES
    { "Polnareff Select / Winning Start (1/2)", 0x0424200, 0x0424280, indexJojos51Pol, 0x04, &pairHandledInCode },
    { "Polnareff Select / Winning Start (2/2)", 0x0424280, 0x0424300, indexJojos51Pol, 0x05, &pairHandledInCode },
#else
    { "Polnareff Select / Winning Start", 0x0424200, 0x0424300 },
#endif
    { "Polnareff Burning Start (1/2)", 0x0389e00, 0x0389e80, indexJojos51Pol, 0x06 },
    { "Polnareff Burning Start (2/2)", 0x0389e80, 0x0389f00, indexJojos51Pol, 0x06 },
    { "Polnareff Tech/Zap Start (1/2)", 0x038a100, 0x038a180, indexJojos51Pol, 0x06 },
    { "Polnareff Tech/Zap Start (2/2)", 0x038a180, 0x038a200, indexJojos51Pol, 0x06 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOSEPH_Shared[]
{
    { "Flash Back Manga Panels (Joseph 236aa)", 0x0335B80, 0x0335BC0, indexJojos51Joseph, 1 },
    { "Lisa Lisa & Caesar (Joseph 236aa)", 0x0335C00, 0x0335C80, indexJojos51Joseph, 2 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOSEPH_A[] =
{
    { "Joseph & Hermit Purple A", 0x0339600, 0x0339680, indexJojos51Joseph },
    { "Joseph Tech/Zap/CC A (1/2)", 0x0339980, 0x0339a00, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { "Joseph Tech/Zap/CC A (2/2)", 0x0339a00, 0x0339a80, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { "Joseph Vs / Super A", 0x0410c00, 0x0410c80, indexJojos51Joseph, indexJojos51Character_VsSuper },
    { "Joseph Challenger A", 0x0410c80, 0x0410d00, indexJojos51Joseph, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { "Joseph Select / Winning A (1/2)", 0x0410d00, 0x0410d80, indexJojos51Joseph, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Joseph Select / Winning A (2/2)", 0x0410d80, 0x0410e00, indexJojos51Joseph, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { "Joseph Select / Winning A", 0x0410d00, 0x0410e00 },
#endif
    { "Joseph Burning A (1/2)", 0x0339680, 0x0339700, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { "Joseph Burning A (2/2)", 0x0339700, 0x0339780, indexJojos51Joseph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOSEPH_B[] =
{
    { "Joseph & Hermit Purple B", 0x034db00, 0x034db80, indexJojos51Joseph },
    { "Joseph Tech/Zap/CC B (1/2)", 0x034de80, 0x034df00, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { "Joseph Tech/Zap/CC B (2/2)", 0x034df00, 0x034df80, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { "Joseph Vs / Super B", 0x0415a00, 0x0415a80, indexJojos51Joseph, indexJojos51Character_VsSuper },
    { "Joseph Challenger B", 0x0415a80, 0x0415b00, indexJojos51Joseph, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { "Joseph Select / Winning B (1/2)", 0x0415b00, 0x0415b80, indexJojos51Joseph, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Joseph Select / Winning B (2/2)", 0x0415b80, 0x0415c00, indexJojos51Joseph, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { "Joseph Select / Winning B", 0x0415b00, 0x0415c00 },
#endif
    { "Joseph Burning B (1/2)", 0x034db80, 0x034dc00, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { "Joseph Burning B (2/2)", 0x034dc00, 0x034dc80, indexJojos51Joseph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOSEPH_C[] =
{
    { "Joseph & Hermit Purple C", 0x0362000, 0x0362080, indexJojos51Joseph },
    { "Joseph Tech/Zap/CC C (1/2)", 0x0362380, 0x0362400, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { "Joseph Tech/Zap/CC C (2/2)", 0x0362400, 0x0362480, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { "Joseph Vs / Super C", 0x041a800, 0x041a880, indexJojos51Joseph, indexJojos51Character_VsSuper },
    { "Joseph Challenger C", 0x041a880, 0x041a900, indexJojos51Joseph, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { "Joseph Select / Winning C (1/2)", 0x041a900, 0x041a980, indexJojos51Joseph, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Joseph Select / Winning C (2/2)", 0x041a980, 0x041aa00, indexJojos51Joseph, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { "Joseph Select / Winning C", 0x041a900, 0x041aa00 },
#endif
    { "Joseph Burning C (1/2)", 0x0362080, 0x0362100, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { "Joseph Burning C (2/2)", 0x0362100, 0x0362180, indexJojos51Joseph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOSEPH_S[] =
{
    { "Joseph & Hermit Purple S", 0x0376500, 0x0376580, indexJojos51Joseph },
    { "Joseph Tech/Zap/CC S (1/2)", 0x0376880, 0x0376900, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { "Joseph Tech/Zap/CC S (2/2)", 0x0376900, 0x0376980, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { "Joseph Vs / Super S", 0x041f600, 0x041f680, indexJojos51Joseph, indexJojos51Character_VsSuper },
    { "Joseph Challenger S", 0x041f680, 0x041f700, indexJojos51Joseph, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { "Joseph Select / Winning S (1/2)", 0x041f700, 0x041f780, indexJojos51Joseph, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Joseph Select / Winning S (2/2)", 0x041f780, 0x041f800, indexJojos51Joseph, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { "Joseph Select / Winning S", 0x041f700, 0x041f800 },
#endif
    { "Joseph Burning S (1/2)", 0x0376580, 0x0376600, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { "Joseph Burning S (2/2)", 0x0376600, 0x0376680, indexJojos51Joseph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOSEPH_Start[] =
{
    { "Joseph & Hermit Purple Start", 0x038aa00, 0x038aa80, indexJojos51Joseph },
    { "Joseph Tech/Zap/CC Start (1/2)", 0x038ad80, 0x038ae00, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { "Joseph Tech/Zap/CC Start (2/2)", 0x038ae00, 0x038ae80, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { "Joseph Vs / Super Start", 0x0424400, 0x0424480, indexJojos51Joseph, indexJojos51Character_VsSuper },
    { "Joseph Challenger Start", 0x0424480, 0x0424500, indexJojos51Joseph, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { "Joseph Select / Winning Start (1/2)", 0x0424500, 0x0424580, indexJojos51Joseph, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Joseph Select / Winning Start (2/2)", 0x0424580, 0x0424600, indexJojos51Joseph, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { "Joseph Select / Winning Start", 0x0424500, 0x0424600 },
#endif
    { "Joseph Burning Start (1/2)", 0x038aa80, 0x038ab00, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { "Joseph Burning Start (2/2)", 0x038ab00, 0x038ab80, indexJojos51Joseph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_IGGY_Shared[] =
{
    { "Iggy Raging Demon Static (A / B / C / S / Start)", 0x030D300, 0x030D320, indexJojos51Iggy, 2 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_IGGY_A[] =
{
    { "Iggy & The Fool A", 0x033a280, 0x033a300, indexJojos51Iggy, indexJojos51Character_Main },
    { "Raging Demon Trail A (1/3)", 0x033aa80, 0x033ab00, indexJojos51Iggy, 1 },
    { "Raging Demon Trail A (2/3)", 0x033ab00, 0x033ab80, indexJojos51Iggy, 1 },
    { "Raging Demon Trail A (3/3)", 0x033ab80, 0x033ac00, indexJojos51Iggy, 1 },
    { "Iggy Vs / Super A", 0x0410f00, 0x0410f80, indexJojos51Iggy, indexJojos51Character_VsSuper },
    { "Iggy Challenger A", 0x0410f80, 0x0411000, indexJojos51Iggy, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { "Iggy Select / Winning A (1/2)", 0x0411000, 0x0411080, indexJojos51Iggy, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Iggy Select / Winning A (2/2)", 0x0411080, 0x0411100, indexJojos51Iggy, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { "Iggy Select / Winning A", 0x0411000, 0x0411100 },
#endif
    { "Iggy Burning A (1/2)", 0x033a300, 0x033a380, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { "Iggy Burning A (2/2)", 0x033a380, 0x033a400, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { "Iggy Tech/Zap A (1/2)", 0x033a600, 0x033a680, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { "Iggy Tech/Zap A (2/2)", 0x033a680, 0x033a700, indexJojos51Iggy, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_IGGY_B[] =
{
    { "Iggy & The Fool B", 0x034e780, 0x034e800, indexJojos51Iggy, indexJojos51Character_Main },
    { "Raging Demon Trail B (1/3)", 0x034ef80, 0x034f000, indexJojos51Iggy, 1  },
    { "Raging Demon Trail B (2/3)", 0x034f000, 0x034f080, indexJojos51Iggy, 1  },
    { "Raging Demon Trail B (3/3)", 0x034f080, 0x034f100, indexJojos51Iggy, 1  },
    { "Iggy Vs / Super B", 0x0415d00, 0x0415d80, indexJojos51Iggy, indexJojos51Character_VsSuper },
    { "Iggy Challenger B", 0x0415d80, 0x0415e00, indexJojos51Iggy, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { "Iggy Select / Winning B (1/2)", 0x0415e00, 0x0415e80, indexJojos51Iggy, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Iggy Select / Winning B (2/2)", 0x0415e80, 0x0415f00, indexJojos51Iggy, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { "Iggy Select / Winning B", 0x0415e00, 0x0415f00 },
#endif
    { "Iggy Burning B (1/2)", 0x034e800, 0x034e880, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { "Iggy Burning B (2/2)", 0x034e880, 0x034e900, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { "Iggy Tech/Zap B (1/2)", 0x034eb00, 0x034eb80, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { "Iggy Tech/Zap B (2/2)", 0x034eb80, 0x034ec00, indexJojos51Iggy, indexJojos51Character_BurnZap},
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_IGGY_C[] =
{
    { "Iggy & The Fool C", 0x0362c80, 0x0362d00, indexJojos51Iggy, indexJojos51Character_Main },
    { "Raging Demon Trail C (1/3)", 0x0363480, 0x0363500, indexJojos51Iggy, 1  },
    { "Raging Demon Trail C (2/3)", 0x0363500, 0x0363580, indexJojos51Iggy, 1  },
    { "Raging Demon Trail C (3/3)", 0x0363580, 0x0363600, indexJojos51Iggy, 1  },
    { "Iggy Vs / Super C", 0x041ab00, 0x041ab80, indexJojos51Iggy, indexJojos51Character_VsSuper },
    { "Iggy Challenger C", 0x041ab80, 0x041ac00, indexJojos51Iggy, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { "Iggy Select / Winning C (1/2)", 0x041ac00, 0x041ac80, indexJojos51Iggy, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Iggy Select / Winning C (2/2)", 0x041ac80, 0x041ad00, indexJojos51Iggy, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { "Iggy Select / Winning C", 0x041ac00, 0x041ad00 },
#endif
    { "Iggy Burning C (1/2)", 0x0362d00, 0x0362d80, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { "Iggy Burning C (2/2)", 0x0362d80, 0x0362e00, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { "Iggy Tech/Zap C (1/2)", 0x0363000, 0x0363080, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { "Iggy Tech/Zap C (2/2)", 0x0363080, 0x0363100, indexJojos51Iggy, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_IGGY_S[] =
{
    { "Iggy & The Fool S", 0x0377180, 0x0377200, indexJojos51Iggy, indexJojos51Character_Main },
    { "Raging Demon Trail S (1/3)", 0x0377980, 0x0377a00, indexJojos51Iggy, 1  },
    { "Raging Demon Trail S (2/3)", 0x0377a00, 0x0377a80, indexJojos51Iggy, 1  },
    { "Raging Demon Trail S (3/3)", 0x0377a80, 0x0377b00, indexJojos51Iggy, 1  },
    { "Iggy Vs / Super S", 0x041f900, 0x041f980, indexJojos51Iggy, indexJojos51Character_VsSuper },
    { "Iggy Challenger S", 0x041f980, 0x041fa00, indexJojos51Iggy, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { "Iggy Select / Winning S (1/2)", 0x041fa00, 0x041fa80, indexJojos51Iggy, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Iggy Select / Winning S (2/2)", 0x041fa80, 0x041fb00, indexJojos51Iggy, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { "Iggy Select / Winning S", 0x041fa00, 0x041fb00 },
#endif
    { "Iggy Burning S (1/2)", 0x0377200, 0x0377280, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { "Iggy Burning S (2/2)", 0x0377280, 0x0377300, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { "Iggy Tech/Zap S (1/2)", 0x0377500, 0x0377580, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { "Iggy Tech/Zap S (2/2)", 0x0377580, 0x0377600, indexJojos51Iggy, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_IGGY_Start[] =
{
    { "Iggy & The Fool Start", 0x038b680, 0x038b700, indexJojos51Iggy, indexJojos51Character_Main },
    { "Raging Demon Trail Start (1/3)", 0x038be80, 0x038bf00, indexJojos51Iggy, 1  },
    { "Raging Demon Trail Start (2/3)", 0x038bf00, 0x038bf80, indexJojos51Iggy, 1  },
    { "Raging Demon Trail Start (3/3)", 0x038bf80, 0x038c000, indexJojos51Iggy, 1  },
    { "Iggy Vs / Super Start", 0x0424700, 0x0424780, indexJojos51Iggy, indexJojos51Character_VsSuper },
    { "Iggy Challenger Start", 0x0424780, 0x0424800, indexJojos51Iggy, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { "Iggy Select / Winning Start (1/2)", 0x0424800, 0x0424880, indexJojos51Iggy, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Iggy Select / Winning Start (2/2)", 0x0424880, 0x0424900, indexJojos51Iggy, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { "Iggy Select / Winning Start", 0x0424800, 0x0424900 },
#endif
    { "Iggy Burning Start (1/2)", 0x038b700, 0x038b780, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { "Iggy Burning Start (2/2)", 0x038b780, 0x038b800, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { "Iggy Tech/Zap Start (1/2)", 0x038ba00, 0x038ba80, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { "Iggy Tech/Zap Start (2/2)", 0x038ba80, 0x038bb00, indexJojos51Iggy, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_ALESSI_A[] =
{
    { "Alessi & Sethan A", 0x033af00, 0x033af80, indexJojos51Alessi },
    { "Alessi A Wave Attack", 0x033b780, 0x033b7c0, indexJojos51Alessi, 1 },
    { "Alessi Tech/Zap/CC A (1/2)", 0x033b280, 0x033b300, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { "Alessi Tech/Zap/CC A (2/2)", 0x033b300, 0x033b380, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { "Alessi Winpose A", 0x033b800, 0x033b880, indexJojos51Alessi, 2 },
    { "Alessi Vs / Super A", 0x0411200, 0x0411280, indexJojos51Alessi, indexJojos51Character_VsSuper },
    { "Alessi Challenger A", 0x0411280, 0x0411300, indexJojos51Alessi, indexJojos51Character_Challenger },
    { "Alessi Select / Winning A (1/2)", 0x0411300, 0x0411380, indexJojos51Alessi, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Alessi Select / Winning A (2/2)", 0x0411380, 0x0411400, indexJojos51Alessi, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "Alessi Burning A (1/2)", 0x033af80, 0x033b000, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { "Alessi Burning A (2/2)", 0x033b000, 0x033b080, indexJojos51Alessi, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_ALESSI_B[] =
{
    { "Alessi & Sethan B", 0x034f400, 0x034f480, indexJojos51Alessi },
    { "Alessi B Wave Attack", 0x034fc80, 0x034fcc0, indexJojos51Alessi, 1 },
    { "Alessi Tech/Zap/CC B (1/2)", 0x034f780, 0x034f800, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { "Alessi Tech/Zap/CC B (2/2)", 0x034f800, 0x034f880, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { "Alessi Winpose B", 0x034fd00, 0x034fd80, indexJojos51Alessi, 2 },
    { "Alessi Vs / Super B", 0x0416000, 0x0416080, indexJojos51Alessi, indexJojos51Character_VsSuper },
    { "Alessi Challenger B", 0x0416080, 0x0416100, indexJojos51Alessi, indexJojos51Character_Challenger },
    { "Alessi Select / Winning B (1/2)", 0x0416100, 0x0416180, indexJojos51Alessi, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Alessi Select / Winning B (2/2)", 0x0416180, 0x0416200, indexJojos51Alessi, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "Alessi Burning B (1/2)", 0x034f480, 0x034f500, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { "Alessi Burning B (2/2)", 0x034f500, 0x034f580, indexJojos51Alessi, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_ALESSI_C[] =
{
    { "Alessi & Sethan C", 0x0363900, 0x0363980, indexJojos51Alessi },
    { "Alessi C Wave Attack", 0x0364180, 0x03641c0, indexJojos51Alessi, 1 },
    { "Alessi Tech/Zap/CC C (1/2)", 0x0363c80, 0x0363d00, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { "Alessi Tech/Zap/CC C (2/2)", 0x0363d00, 0x0363d80, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { "Alessi Winpose C", 0x0364200, 0x0364280, indexJojos51Alessi, 2 },
    { "Alessi Vs / Super C", 0x041ae00, 0x041ae80, indexJojos51Alessi, indexJojos51Character_VsSuper },
    { "Alessi Challenger C", 0x041ae80, 0x041af00, indexJojos51Alessi, indexJojos51Character_Challenger },
    { "Alessi Select / Winning C (1/2)", 0x041af00, 0x041af80, indexJojos51Alessi, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Alessi Select / Winning C (2/2)", 0x041af80, 0x041b000, indexJojos51Alessi, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "Alessi Burning C (1/2)", 0x0363980, 0x0363a00, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { "Alessi Burning C (2/2)", 0x0363a00, 0x0363a80, indexJojos51Alessi, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_ALESSI_S[] =
{
    { "Alessi & Sethan S", 0x0377e00, 0x0377e80, indexJojos51Alessi },
    { "Alessi S Wave Attack", 0x0378680, 0x03786c0, indexJojos51Alessi, 1 },
    { "Alessi Tech/Zap/CC S (1/2)", 0x0378180, 0x0378200, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { "Alessi Tech/Zap/CC S (2/2)", 0x0378200, 0x0378280, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { "Alessi Winpose S", 0x0378700, 0x0378780, indexJojos51Alessi, 2 },
    { "Alessi Vs / Super S", 0x041fc00, 0x041fc80, indexJojos51Alessi, indexJojos51Character_VsSuper },
    { "Alessi Challenger S", 0x041fc80, 0x041fd00, indexJojos51Alessi, indexJojos51Character_Challenger },
    { "Alessi Select / Winning S (1/2)", 0x041fd00, 0x041fd80, indexJojos51Alessi, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Alessi Select / Winning S (2/2)", 0x041fd80, 0x041fe00, indexJojos51Alessi, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "Alessi Burning S (1/2)", 0x0377e80, 0x0377f00, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { "Alessi Burning S (2/2)", 0x0377f00, 0x0377f80, indexJojos51Alessi, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_ALESSI_Start[] =
{
    { "Alessi & Sethan Start", 0x038c300, 0x038c380, indexJojos51Alessi },
    { "Alessi Start Wave Attack", 0x038cb80, 0x038cbc0, indexJojos51Alessi, 1 },
    { "Alessi Tech/Zap/CC Start (1/2)", 0x038c680, 0x038c700, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { "Alessi Tech/Zap/CC Start (2/2)", 0x038c700, 0x038c780, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { "Alessi Winpose Start", 0x038cc00, 0x038cc80, indexJojos51Alessi, 2 },
    { "Alessi Vs / Super Start", 0x0424a00, 0x0424a80, indexJojos51Alessi, indexJojos51Character_VsSuper },
    { "Alessi Challenger Start", 0x0424a80, 0x0424b00, indexJojos51Alessi, indexJojos51Character_Challenger },
    { "Alessi Select / Winning Start (1/2)", 0x0424b00, 0x0424b80, indexJojos51Alessi, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Alessi Select / Winning Start (2/2)", 0x0424b80, 0x0424c00, indexJojos51Alessi, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "Alessi Burning Start (1/2)", 0x038c380, 0x038c400, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { "Alessi Burning Start (2/2)", 0x038c400, 0x038c480, indexJojos51Alessi, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_CHAKA_A[] =
{
    { "Chaka A", 0x033bb80, 0x033bc00, indexJojos51Chaka },
    { "Chaka A Super Trail", 0x033c400, 0x033c480, indexJojos51Chaka, 1 },
    { "Chaka Tech/Zap/CC/Counter A (1/2)", 0x033bf00, 0x033bf80, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { "Chaka Tech/Zap/CC/Counter A (2/2)", 0x033bf80, 0x033c000, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { "Chaka Vs / Super A", 0x0411500, 0x0411580, indexJojos51Chaka, indexJojos51Character_VsSuper },
    { "Chaka Challenger A", 0x0411580, 0x0411600, indexJojos51Chaka, indexJojos51Character_Challenger },
    { "Chaka Select / Winning A", 0x0411600, 0x0411680, indexJojos51Chaka, indexJojos51Character_SelectWin1 },
    { "Chaka Burning A (1/2)", 0x033bc00, 0x033bc80, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { "Chaka Burning A (2/2)", 0x033bc80, 0x033bd00, indexJojos51Chaka, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_CHAKA_B[] =
{
    { "Chaka B", 0x0350080, 0x0350100, indexJojos51Chaka },
    { "Chaka B Super Trail", 0x0350900, 0x0350980, indexJojos51Chaka, 1 },
    { "Chaka Tech/Zap/CC/Counter B (1/2)", 0x0350400, 0x0350480, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { "Chaka Tech/Zap/CC/Counter B (2/2)", 0x0350480, 0x0350500, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { "Chaka Vs / Super B", 0x0416300, 0x0416380, indexJojos51Chaka, indexJojos51Character_VsSuper },
    { "Chaka Challenger B", 0x0416380, 0x0416400, indexJojos51Chaka, indexJojos51Character_Challenger },
    { "Chaka Select / Winning B", 0x0416400, 0x0416480, indexJojos51Chaka, indexJojos51Character_SelectWin1 },
    { "Chaka Burning B (1/2)", 0x0350100, 0x0350180, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { "Chaka Burning B (2/2)", 0x0350180, 0x0350200, indexJojos51Chaka, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_CHAKA_C[] =
{
    { "Chaka C", 0x0364580, 0x0364600, indexJojos51Chaka },
    { "Chaka C Super Trail", 0x0364e00, 0x0364e80, indexJojos51Chaka, 1 },
    { "Chaka Tech/Zap/CC/Counter C (1/2)", 0x0364900, 0x0364980, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { "Chaka Tech/Zap/CC/Counter C (2/2)", 0x0364980, 0x0364a00, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { "Chaka Vs / Super C", 0x041b100, 0x041b180, indexJojos51Chaka, indexJojos51Character_VsSuper },
    { "Chaka Challenger C", 0x041b180, 0x041b200, indexJojos51Chaka, indexJojos51Character_Challenger },
    { "Chaka Select / Winning C", 0x041b200, 0x041b280, indexJojos51Chaka, indexJojos51Character_SelectWin1 },
    { "Chaka Burning C (1/2)", 0x0364600, 0x0364680, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { "Chaka Burning C (2/2)", 0x0364680, 0x0364700, indexJojos51Chaka, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_CHAKA_S[] =
{
    { "Chaka S", 0x0378a80, 0x0378b00, indexJojos51Chaka },
    { "Chaka S Super Trail", 0x0379300, 0x0379380, indexJojos51Chaka, 1 },
    { "Chaka Tech/Zap/CC/Counter S (1/2)", 0x0378e00, 0x0378e80, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { "Chaka Tech/Zap/CC/Counter S (2/2)", 0x0378e80, 0x0378f00, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { "Chaka Vs / Super S", 0x041ff00, 0x041ff80, indexJojos51Chaka, indexJojos51Character_VsSuper },
    { "Chaka Challenger S", 0x041ff80, 0x0420000, indexJojos51Chaka, indexJojos51Character_Challenger },
    { "Chaka Select / Winning S", 0x0420000, 0x0420080, indexJojos51Chaka, indexJojos51Character_SelectWin1 },
    { "Chaka Burning S (1/2)", 0x0378b00, 0x0378b80, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { "Chaka Burning S (2/2)", 0x0378b80, 0x0378c00, indexJojos51Chaka, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_CHAKA_Start[] =
{
    { "Chaka Start", 0x038cf80, 0x038d000, indexJojos51Chaka },
    { "Chaka Start Super Trail", 0x038d800, 0x038d880, indexJojos51Chaka, 1 },
    { "Chaka Tech/Zap/CC/Counter Start (1/2)", 0x038d300, 0x038d380, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { "Chaka Tech/Zap/CC/Counter Start (2/2)", 0x038d380, 0x038d400, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { "Chaka Vs / Super Start", 0x0424d00, 0x0424d80, indexJojos51Chaka, indexJojos51Character_VsSuper },
    { "Chaka Challenger Start", 0x0424d80, 0x0424e00, indexJojos51Chaka, indexJojos51Character_Challenger },
    { "Chaka Select / Winning Start", 0x0424e00, 0x0424e80, indexJojos51Chaka, indexJojos51Character_SelectWin1 },
    { "Chaka Burning Start (1/2)", 0x038d000, 0x038d080, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { "Chaka Burning Start (2/2)", 0x038d080, 0x038d100, indexJojos51Chaka, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEVOEBONY_A[] =
{
    { "Devo & Ebony Devil A", 0x033c800, 0x033c880, indexJojos51Devo },
    { "Ebony Devil Stand Off A", 0x033cf00, 0x033cf80, indexJojos51Devo, 2 },
    { "Ebony Stand On Transition A", 0x033ce00, 0x033ce80, indexJojos51Devo, 2 },
    { "Ebony Super Trail A (1/3)", 0x033d100, 0x033d180, indexJojos51Devo, 2 },
    { "Ebony Super Trail A (2/3)", 0x033d180, 0x033d200, indexJojos51Devo, 2 },
    { "Ebony Super Trail A (3/3)", 0x033d200, 0x033d280, indexJojos51Devo, 2 },
    { "Devo Intro Stuff A", 0x033d400, 0x033d480, indexJojos51Devo, 1 },
    { "Devo Vs / Super A", 0x0411800, 0x0411880, indexJojos51Devo, indexJojos51Character_VsSuper },
    { "Devo Challenger A", 0x0411880, 0x0411900, indexJojos51Devo, indexJojos51Character_Challenger },
    { "Devo Select / Winning A (1/2)", 0x0411900, 0x0411980, indexJojos51Devo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Devo Select / Winning A (2/2)", 0x0411980, 0x0411a00, indexJojos51Devo, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "Devo & Ebony Devil Burning A (1/2)", 0x033c880, 0x033c900, indexJojos51Devo, indexJojos51Character_BurnZap },
    { "Devo & Ebony Devil Burning A (2/2)", 0x033c900, 0x033c980, indexJojos51Devo, indexJojos51Character_BurnZap },
    { "Devo Tech/Zap A (1/2)", 0x033cb80, 0x033cc00, indexJojos51Devo, indexJojos51Character_BurnZap },
    { "Devo Tech/Zap A (2/2)", 0x033cc00, 0x033cc80, indexJojos51Devo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEVOEBONY_B[] =
{
    { "Devo & Ebony Devil B", 0x0350d00, 0x0350d80, indexJojos51Devo },
    { "Ebony Devil Stand Off B", 0x0351400, 0x0351480, indexJojos51Devo, 2 },
    { "Ebony Stand On Transition B", 0x0351300, 0x0351380, indexJojos51Devo, 2 },
    { "Ebony Super Trail B (1/3)", 0x0351600, 0x0351680, indexJojos51Devo, 2 },
    { "Ebony Super Trail B (2/3)", 0x0351680, 0x0351700, indexJojos51Devo, 2 },
    { "Ebony Super Trail B (3/3)", 0x0351700, 0x0351780, indexJojos51Devo, 2 },
    { "Devo Intro Stuff B", 0x0351900, 0x0351980, indexJojos51Devo, 1 },
    { "Devo Vs / Super B", 0x0416600, 0x0416680, indexJojos51Devo, indexJojos51Character_VsSuper },
    { "Devo Challenger B", 0x0416680, 0x0416700, indexJojos51Devo, indexJojos51Character_Challenger },
    { "Devo Select / Winning B (1/2)", 0x0416700, 0x0416780, indexJojos51Devo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Devo Select / Winning B (2/2)", 0x0416780, 0x0416800, indexJojos51Devo, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "Devo & Ebony Devil Burning B (1/2)", 0x0350d80, 0x0350e00, indexJojos51Devo, indexJojos51Character_BurnZap },
    { "Devo & Ebony Devil Burning B (2/2)", 0x0350e00, 0x0350e80, indexJojos51Devo, indexJojos51Character_BurnZap },
    { "Devo Tech/Zap B (1/2)", 0x0351080, 0x0351100, indexJojos51Devo, indexJojos51Character_BurnZap },
    { "Devo Tech/Zap B (2/2)", 0x0351100, 0x0351180, indexJojos51Devo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEVOEBONY_C[] =
{
    { "Devo & Ebony Devil C", 0x0365200, 0x0365280, indexJojos51Devo },
    { "Ebony Devil Stand Off C", 0x0365900, 0x0365980, indexJojos51Devo, 2 },
    { "Ebony Stand On Transition C", 0x0365800, 0x0365880, indexJojos51Devo, 2 },
    { "Ebony Super Trail C (1/3)", 0x0365b00, 0x0365b80, indexJojos51Devo, 2 },
    { "Ebony Super Trail C (2/3)", 0x0365b80, 0x0365c00, indexJojos51Devo, 2 },
    { "Ebony Super Trail C (3/3)", 0x0365c00, 0x0365c80, indexJojos51Devo, 2 },
    { "Devo Intro Stuff C", 0x0365e00, 0x0365e80, indexJojos51Devo, 1 },
    { "Devo Vs / Super C", 0x041b400, 0x041b480, indexJojos51Devo, indexJojos51Character_VsSuper },
    { "Devo Challenger C", 0x041b480, 0x041b500, indexJojos51Devo, indexJojos51Character_Challenger },
    { "Devo Select / Winning C (1/2)", 0x041b500, 0x041b580, indexJojos51Devo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Devo Select / Winning C (2/2)", 0x041b580, 0x041b600, indexJojos51Devo, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "Devo & Ebony Devil Burning C (1/2)", 0x0365280, 0x0365300, indexJojos51Devo, indexJojos51Character_BurnZap },
    { "Devo & Ebony Devil Burning C (2/2)", 0x0365300, 0x0365380, indexJojos51Devo, indexJojos51Character_BurnZap },
    { "Devo Tech/Zap C (1/2)", 0x0365580, 0x0365600, indexJojos51Devo, indexJojos51Character_BurnZap },
    { "Devo Tech/Zap C (2/2)", 0x0365600, 0x0365680, indexJojos51Devo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEVOEBONY_S[] =
{
    { "Devo & Ebony Devil S", 0x0379700, 0x0379780, indexJojos51Devo },
    { "Ebony Devil Stand Off S", 0x0379e00, 0x0379e80, indexJojos51Devo, 2 },
    { "Ebony Stand On Transition S", 0x0379d00, 0x0379d80, indexJojos51Devo, 2 },
    { "Ebony Super Trail S (1/3)", 0x037a000, 0x037a080, indexJojos51Devo, 2 },
    { "Ebony Super Trail S (2/3)", 0x037a080, 0x037a100, indexJojos51Devo, 2 },
    { "Ebony Super Trail S (3/3)", 0x037a100, 0x037a180, indexJojos51Devo, 2 },
    { "Devo Intro Stuff S", 0x037a300, 0x037a380, indexJojos51Devo, 1 },
    { "Devo Vs / Super S", 0x0420200, 0x0420280, indexJojos51Devo, indexJojos51Character_VsSuper },
    { "Devo Challenger S", 0x0420280, 0x0420300, indexJojos51Devo, indexJojos51Character_Challenger },
    { "Devo Select / Winning S (1/2)", 0x0420300, 0x0420380, indexJojos51Devo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Devo Select / Winning S (2/2)", 0x0420380, 0x0420400, indexJojos51Devo, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "Devo & Ebony Devil Burning S (1/2)", 0x0379780, 0x0379800, indexJojos51Devo, indexJojos51Character_BurnZap },
    { "Devo & Ebony Devil Burning S (2/2)", 0x0379800, 0x0379880, indexJojos51Devo, indexJojos51Character_BurnZap },
    { "Devo Tech/Zap S (1/2)", 0x0379a80, 0x0379b00, indexJojos51Devo, indexJojos51Character_BurnZap },
    { "Devo Tech/Zap S (2/2)", 0x0379b00, 0x0379b80, indexJojos51Devo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEVOEBONY_Start[] =
{
    { "Devo & Ebony Devil Start", 0x038dc00, 0x038dc80, indexJojos51Devo },
    { "Ebony Devil Stand Off Start", 0x038e300, 0x038e380, indexJojos51Devo, 2 },
    { "Ebony Stand On Transition Start", 0x038e200, 0x038e280, indexJojos51Devo, 2 },
    { "Ebony Super Trail Start (1/3)", 0x038e500, 0x038e580, indexJojos51Devo, 2 },
    { "Ebony Super Trail Start (2/3)", 0x038e580, 0x038e600, indexJojos51Devo, 2 },
    { "Ebony Super Trail Start (3/3)", 0x038e600, 0x038e680, indexJojos51Devo, 2 },
    { "Devo Intro Stuff Start", 0x038e800, 0x038e880, indexJojos51Devo, 1 },
    { "Devo Vs / Super Start", 0x0425000, 0x0425080, indexJojos51Devo, indexJojos51Character_VsSuper },
    { "Devo Challenger Start", 0x0425080, 0x0425100, indexJojos51Devo, indexJojos51Character_Challenger },
    { "Devo Select / Winning Start (1/2)", 0x0425100, 0x0425180, indexJojos51Devo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Devo Select / Winning Start (2/2)", 0x0425180, 0x0425200, indexJojos51Devo, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "Devo & Ebony Devil Burning Start (1/2)", 0x038dc80, 0x038dd00, indexJojos51Devo, indexJojos51Character_BurnZap },
    { "Devo & Ebony Devil Burning Start (2/2)", 0x038dd00, 0x038dd80, indexJojos51Devo, indexJojos51Character_BurnZap },
    { "Devo Tech/Zap Start (1/2)", 0x038df80, 0x038e000, indexJojos51Devo, indexJojos51Character_BurnZap },
    { "Devo Tech/Zap Start (2/2)", 0x038e000, 0x038e080, indexJojos51Devo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MIDLER_A[] =
{
    { "Midler & High Priestess A", 0x033e100, 0x033e180, indexJojos51Midler },
    { "Midler's Super Cars A (1/4)", 0x033e980, 0x033ea00, indexJojos51Midler, 1 },
    { "Midler's Super Cars A (2/4)", 0x033ea00, 0x033ea80, indexJojos51Midler, 1 },
    { "Midler's Super Cars A (3/4)", 0x033ea80, 0x033eb00, indexJojos51Midler, 1 },
    { "Midler's Super Cars A (4/4)", 0x033eb00, 0x033eb80, indexJojos51Midler, 1 },
    { "High Priestess' Beam/Jaws A", 0x033eb80, 0x033ec00, indexJojos51Midler, 2 },
    { "Midler Vs / Super A", 0x0411e00, 0x0411e80, indexJojos51Midler, indexJojos51Character_VsSuper },
    { "Midler Challenger A", 0x0411e80, 0x0411f00, indexJojos51Midler, indexJojos51Character_Challenger },
    { "Midler Select / Winning A (1/2)", 0x0411f00, 0x0411f80, indexJojos51Midler, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Midler Select / Winning A (2/2)", 0x0411f80, 0x0412000, indexJojos51Midler, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "Midler & Burning A (1/2)", 0x033e180, 0x033e200, indexJojos51Midler, indexJojos51Character_BurnZap },
    { "Midler & Burning A (2/2)", 0x033e200, 0x033e280, indexJojos51Midler, indexJojos51Character_BurnZap },
    { "Midler Tech/Zap A (1/2)", 0x033e480, 0x033e500, indexJojos51Midler, indexJojos51Character_BurnZap },
    { "Midler Tech/Zap A (2/2)", 0x033e500, 0x033e580, indexJojos51Midler, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MIDLER_B[] =
{
    { "Midler & High Priestess B", 0x0352600, 0x0352680, indexJojos51Midler },
    { "Midler's Super Cars B (1/4)", 0x0352e80, 0x0352f00, indexJojos51Midler, 1 },
    { "Midler's Super Cars B (2/4)", 0x0352f00, 0x0352f80, indexJojos51Midler, 1 },
    { "Midler's Super Cars B (3/4)", 0x0352f80, 0x0353000, indexJojos51Midler, 1 },
    { "Midler's Super Cars B (4/4)", 0x0353000, 0x0353080, indexJojos51Midler, 1 },
    { "High Priestess' Beam/Jaws B", 0x0353080, 0x0353100, indexJojos51Midler, 2 },
    { "Midler Vs / Super B", 0x0416c00, 0x0416c80, indexJojos51Midler, indexJojos51Character_VsSuper },
    { "Midler Challenger B", 0x0416c80, 0x0416d00, indexJojos51Midler, indexJojos51Character_Challenger },
    { "Midler Select / Winning B (1/2)", 0x0416d00, 0x0416d80, indexJojos51Midler, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Midler Select / Winning B (2/2)", 0x0416d80, 0x0416e00, indexJojos51Midler, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "Midler & Burning B (1/2)", 0x0352680, 0x0352700, indexJojos51Midler, indexJojos51Character_BurnZap },
    { "Midler & Burning B (2/2)", 0x0352700, 0x0352780, indexJojos51Midler, indexJojos51Character_BurnZap },
    { "Midler Tech/Zap B (1/2)", 0x0352980, 0x0352a00, indexJojos51Midler, indexJojos51Character_BurnZap },
    { "Midler Tech/Zap B (2/2)", 0x0352a00, 0x0352a80, indexJojos51Midler, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MIDLER_C[] =
{
    { "Midler & High Priestess C", 0x0366b00, 0x0366b80, indexJojos51Midler },
    { "Midler's Super Cars C (1/4)", 0x0367380, 0x0367400, indexJojos51Midler, 1 },
    { "Midler's Super Cars C (2/4)", 0x0367400, 0x0367480, indexJojos51Midler, 1 },
    { "Midler's Super Cars C (3/4)", 0x0367480, 0x0367500, indexJojos51Midler, 1 },
    { "Midler's Super Cars C (4/4)", 0x0367500, 0x0367580, indexJojos51Midler, 1 },
    { "High Priestess' Beam/Jaws C", 0x0367580, 0x0367600, indexJojos51Midler, 2 },
    { "Midler Vs / Super C", 0x041ba00, 0x041ba80, indexJojos51Midler, indexJojos51Character_VsSuper },
    { "Midler Challenger C", 0x041ba80, 0x041bb00, indexJojos51Midler, indexJojos51Character_Challenger },
    { "Midler Select / Winning C (1/2)", 0x041bb00, 0x041bb80, indexJojos51Midler, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Midler Select / Winning C (2/2)", 0x041bb80, 0x041bc00, indexJojos51Midler, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "Midler & Burning C (1/2)", 0x0366b80, 0x0366c00, indexJojos51Midler, indexJojos51Character_BurnZap },
    { "Midler & Burning C (2/2)", 0x0366c00, 0x0366c80, indexJojos51Midler, indexJojos51Character_BurnZap },
    { "Midler Tech/Zap C (1/2)", 0x0366e80, 0x0366f00, indexJojos51Midler, indexJojos51Character_BurnZap },
    { "Midler Tech/Zap C (2/2)", 0x0366f00, 0x0366f80, indexJojos51Midler, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MIDLER_S[] =
{
    { "Midler & High Priestess S", 0x037b000, 0x037b080, indexJojos51Midler },
    { "Midler's Super Cars S (1/4)", 0x037b880, 0x037b900, indexJojos51Midler, 1 },
    { "Midler's Super Cars S (2/4)", 0x037b900, 0x037b980, indexJojos51Midler, 1 },
    { "Midler's Super Cars S (3/4)", 0x037b980, 0x037ba00, indexJojos51Midler, 1 },
    { "Midler's Super Cars S (4/4)", 0x037ba00, 0x037ba80, indexJojos51Midler, 1 },
    { "High Priestess' Beam/Jaws S", 0x037ba80, 0x037bb00, indexJojos51Midler, 2 },
    { "Midler Vs / Super S", 0x0420800, 0x0420880, indexJojos51Midler, indexJojos51Character_VsSuper },
    { "Midler Challenger S", 0x0420880, 0x0420900, indexJojos51Midler, indexJojos51Character_Challenger },
    { "Midler Select / Winning S (1/2)", 0x0420900, 0x0420980, indexJojos51Midler, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Midler Select / Winning S (2/2)", 0x0420980, 0x0420a00, indexJojos51Midler, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "Midler & Burning S (1/2)", 0x037b080, 0x037b100, indexJojos51Midler, indexJojos51Character_BurnZap },
    { "Midler & Burning S (2/2)", 0x037b100, 0x037b180, indexJojos51Midler, indexJojos51Character_BurnZap },
    { "Midler Tech/Zap S (1/2)", 0x037b380, 0x037b400, indexJojos51Midler, indexJojos51Character_BurnZap },
    { "Midler Tech/Zap S (2/2)", 0x037b400, 0x037b480, indexJojos51Midler, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MIDLER_Start[] =
{
    { "Midler & High Priestess Start", 0x038f500, 0x038f580, indexJojos51Midler },
    { "Midler's Super Cars Start (1/4)", 0x038fd80, 0x038fe00, indexJojos51Midler, 1 },
    { "Midler's Super Cars Start (2/4)", 0x038fe00, 0x038fe80, indexJojos51Midler, 1 },
    { "Midler's Super Cars Start (3/4)", 0x038fe80, 0x038ff00, indexJojos51Midler, 1 },
    { "Midler's Super Cars Start (4/4)", 0x038ff00, 0x038ff80, indexJojos51Midler, 1 },
    { "High Priestess' Beam/Jaws Start", 0x038ff80, 0x0390000, indexJojos51Midler, 2 },
    { "Midler Vs / Super Start", 0x0425600, 0x0425680, indexJojos51Midler, indexJojos51Character_VsSuper },
    { "Midler Challenger Start", 0x0425680, 0x0425700, indexJojos51Midler, indexJojos51Character_Challenger },
    { "Midler Select / Winning Start (1/2)", 0x0425700, 0x0425780, indexJojos51Midler, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Midler Select / Winning Start (2/2)", 0x0425780, 0x0425800, indexJojos51Midler, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "Midler & Burning Start (1/2)", 0x038f580, 0x038f600, indexJojos51Midler, indexJojos51Character_BurnZap },
    { "Midler & Burning Start (2/2)", 0x038f600, 0x038f680, indexJojos51Midler, indexJojos51Character_BurnZap },
    { "Midler Tech/Zap Start (1/2)", 0x038f880, 0x038f900, indexJojos51Midler, indexJojos51Character_BurnZap },
    { "Midler Tech/Zap Start (2/2)", 0x038f900, 0x038f980, indexJojos51Midler, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DIO_A[] =
{
    { "DIO & The World A", 0x033ed80, 0x033ee00, indexJojos51Dio },
    { "DIO Intro Stuff A", 0x033f700, 0x033f780, indexJojos51Dio, 1 },
    { "The World's \"Bloody Summoning\" A", 0x033f800, 0x033f880, indexJojos51Dio, 2 },
    { "DIO Tele Initial Flash A", 0x033f500, 0x033f580, indexJojos51Dio, indexJojos51Character_BurnZap },
    { "DIO Teleport A", 0x033f680, 0x033f700, indexJojos51Dio, indexJojos51Character_BurnZap },
    { "Nukesaku A", 0x033f780, 0x033f7c0, indexJojos51Dio, 8 },
    { "DIO Vs / Super A", 0x0412100, 0x0412180, indexJojos51Dio, indexJojos51Character_VsSuper },
    { "DIO Challenger A", 0x0412180, 0x0412200, indexJojos51Dio, indexJojos51Character_Challenger },
    { "DIO Select / Winning A (1/2)", 0x0412200, 0x0412280, indexJojos51Dio, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "DIO Select / Winning A (2/2)", 0x0412280, 0x0412300, indexJojos51Dio, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "DIO & The World Burning A (1/2)", 0x033ee00, 0x033ee80, indexJojos51Dio, indexJojos51Character_BurnZap },
    { "DIO & The World Burning A (2/2)", 0x033ee80, 0x033ef00, indexJojos51Dio, indexJojos51Character_BurnZap },
    { "DIO Afterimages/Tech/Zap A (1/2)", 0x033f100, 0x033f180, indexJojos51Dio, indexJojos51Character_BurnZap },
    { "DIO Afterimages/Tech/Zap A (2/2)", 0x033f180, 0x033f200, indexJojos51Dio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DIO_B[] =
{
    { "DIO & The World B", 0x0353280, 0x0353300, indexJojos51Dio },
    { "DIO Intro Stuff B", 0x0353c00, 0x0353c80, indexJojos51Dio, 1 },
    { "The World's \"Bloody Summoning\" B", 0x0353d00, 0x0353d80, indexJojos51Dio, 2 },
    { "DIO Tele Initial Flash B", 0x0353a00, 0x0353a80, indexJojos51Dio, indexJojos51Character_BurnZap },
    { "DIO Teleport B", 0x0353b80, 0x0353c00, indexJojos51Dio, indexJojos51Character_BurnZap },
    { "Nukesaku B", 0x0353c80, 0x0353cc0, indexJojos51Dio, 8 },
    { "DIO Vs / Super B", 0x0416f00, 0x0416f80, indexJojos51Dio, indexJojos51Character_VsSuper },
    { "DIO Challenger B", 0x0416f80, 0x0417000, indexJojos51Dio, indexJojos51Character_Challenger },
    { "DIO Select / Winning B (1/2)", 0x0417000, 0x0417080, indexJojos51Dio, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "DIO Select / Winning B (2/2)", 0x0417080, 0x0417100, indexJojos51Dio, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "DIO & The World Burning B (1/2)", 0x0353300, 0x0353380, indexJojos51Dio, indexJojos51Character_BurnZap },
    { "DIO & The World Burning B (2/2)", 0x0353380, 0x0353400, indexJojos51Dio, indexJojos51Character_BurnZap },
    { "DIO Afterimages/Tech/Zap B (1/2)", 0x0353600, 0x0353680, indexJojos51Dio, indexJojos51Character_BurnZap },
    { "DIO Afterimages/Tech/Zap B (2/2)", 0x0353680, 0x0353700, indexJojos51Dio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DIO_C[] =
{
    { "DIO & The World C", 0x0367780, 0x0367800, indexJojos51Dio },
    { "DIO Intro Stuff C", 0x0368100, 0x0368180, indexJojos51Dio, 1 },
    { "The World's \"Bloody Summoning\" C", 0x0368200, 0x0368280, indexJojos51Dio, 2 },
    { "DIO Tele Initial Flash C", 0x0367f00, 0x0367f80, indexJojos51Dio, indexJojos51Character_BurnZap },
    { "DIO Teleport C", 0x0368080, 0x0368100, indexJojos51Dio, indexJojos51Character_BurnZap },
    { "Nukesaku C", 0x0368180, 0x03681c0, indexJojos51Dio, 8 },
    { "DIO Vs / Super C", 0x041bd00, 0x041bd80, indexJojos51Dio, indexJojos51Character_VsSuper },
    { "DIO Challenger C", 0x041bd80, 0x041be00, indexJojos51Dio, indexJojos51Character_Challenger },
    { "DIO Select / Winning C (1/2)", 0x041be00, 0x041be80, indexJojos51Dio, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "DIO Select / Winning C (2/2)", 0x041be80, 0x041bf00, indexJojos51Dio, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "DIO & The World Burning C (1/2)", 0x0367800, 0x0367880, indexJojos51Dio, indexJojos51Character_BurnZap },
    { "DIO & The World Burning C (2/2)", 0x0367880, 0x0367900, indexJojos51Dio, indexJojos51Character_BurnZap },
    { "DIO Afterimages/Tech/Zap C (1/2)", 0x0367b00, 0x0367b80, indexJojos51Dio, indexJojos51Character_BurnZap },
    { "DIO Afterimages/Tech/Zap C (2/2)", 0x0367b80, 0x0367c00, indexJojos51Dio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DIO_S[] =
{
    { "DIO & The World S", 0x037bc80, 0x037bd00, indexJojos51Dio },
    { "DIO Intro Stuff S", 0x037c600, 0x037c680, indexJojos51Dio, 1 },
    { "The World's \"Bloody Summoning\" S", 0x037c700, 0x037c780, indexJojos51Dio, 2 },
    { "DIO Tele Initial Flash S", 0x037c400, 0x037c480, indexJojos51Dio, indexJojos51Character_BurnZap },
    { "DIO Teleport S", 0x037c580, 0x037c600, indexJojos51Dio, indexJojos51Character_BurnZap },
    { "Nukesaku S", 0x037c680, 0x037c6c0, indexJojos51Dio, 8 },
    { "DIO Vs / Super S", 0x0420b00, 0x0420b80, indexJojos51Dio, indexJojos51Character_VsSuper },
    { "DIO Challenger S", 0x0420b80, 0x0420c00, indexJojos51Dio, indexJojos51Character_Challenger },
    { "DIO Select / Winning S (1/2)", 0x0420c00, 0x0420c80, indexJojos51Dio, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "DIO Select / Winning S (2/2)", 0x0420c80, 0x0420d00, indexJojos51Dio, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "DIO & The World Burning S (1/2)", 0x037bd00, 0x037bd80, indexJojos51Dio, indexJojos51Character_BurnZap },
    { "DIO & The World Burning S (2/2)", 0x037bd80, 0x037be00, indexJojos51Dio, indexJojos51Character_BurnZap },
    { "DIO Afterimages/Tech/Zap S (1/2)", 0x037c000, 0x037c080, indexJojos51Dio, indexJojos51Character_BurnZap },
    { "DIO Afterimages/Tech/Zap S (2/2)", 0x037c080, 0x037c100, indexJojos51Dio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DIO_Start[] =
{
    { "DIO & The World Start", 0x0390180, 0x0390200, indexJojos51Dio },
    { "DIO Intro Stuff Start", 0x0390b00, 0x0390b80, indexJojos51Dio, 1 },
    { "The World's \"Bloody Summoning\" Start", 0x0390c00, 0x0390c80, indexJojos51Dio, 2 },
    { "DIO Tele Initial Flash Start", 0x0390900, 0x0390980, indexJojos51Dio, indexJojos51Character_BurnZap },
    { "DIO Teleport Start", 0x0390a80, 0x0390b00, indexJojos51Dio, indexJojos51Character_BurnZap },
    { "Nukesaku Start", 0x0390b80, 0x0390bc0, indexJojos51Dio, 8 },
    { "DIO Vs / Super Start", 0x0425900, 0x0425980, indexJojos51Dio, indexJojos51Character_VsSuper },
    { "DIO Challenger Start", 0x0425980, 0x0425a00, indexJojos51Dio, indexJojos51Character_Challenger },
    { "DIO Select / Winning Start (1/2)", 0x0425a00, 0x0425a80, indexJojos51Dio, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "DIO Select / Winning Start (2/2)", 0x0425a80, 0x0425b00, indexJojos51Dio, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "DIO & The World Burning Start (1/2)", 0x0390200, 0x0390280, indexJojos51Dio, indexJojos51Character_BurnZap },
    { "DIO & The World Burning Start (2/2)", 0x0390280, 0x0390300, indexJojos51Dio, indexJojos51Character_BurnZap },
    { "DIO Afterimages/Tech/Zap Start (1/2)", 0x0390500, 0x0390580, indexJojos51Dio, indexJojos51Character_BurnZap },
    { "DIO Afterimages/Tech/Zap Start (2/2)", 0x0390580, 0x0390600, indexJojos51Dio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SDIO_A[] =
{
    { "Shadow DIO A", 0x0341300, 0x0341380, indexJojos51SDio },
    { "623aa trail A", 0x0341b80, 0x0341c00, indexJojos51SDio, 1 },
    { "5s trail A", 0x0341ac0, 0x0341ae0, indexJojos51SDio, 2 },
    { "41236s trail A", 0x0341ec0, 0x0341ee0, indexJojos51SDio, 2},
    { "236aa trail A", 0x0341b40, 0x0341b60, indexJojos51SDio, 2 },
    { "Wang Chan A", 0x0341d00, 0x0341d40, indexJojos51SDio, 8 },
    { "Shadow DIO Vs / Super A", 0x0412a00, 0x0412a80, indexJojos51SDio, indexJojos51Character_VsSuper },
    { "Shadow DIO Challenger A", 0x0412a80, 0x0412b00, indexJojos51SDio, indexJojos51Character_Challenger },
    { "Shadow DIO Select / Winning A", 0x0412b00, 0x0412b80, indexJojos51SDio, indexJojos51Character_SelectWin1 },
    { "Shadow DIO Burning A (1/2)", 0x0341380, 0x0341400, indexJojos51SDio, indexJojos51Character_BurnZap },
    { "Shadow DIO Burning A (2/2)", 0x0341400, 0x0341480, indexJojos51SDio, indexJojos51Character_BurnZap },
    { "Shadow DIO Tech/Zap A (1/2)", 0x0341680, 0x0341700, indexJojos51SDio, indexJojos51Character_BurnZap },
    { "Shadow DIO Tech/Zap A (2/2)", 0x0341700, 0x0341780, indexJojos51SDio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SDIO_B[] =
{
    { "Shadow DIO B", 0x0355800, 0x0355880, indexJojos51SDio },
    { "623aa trail B", 0x0356080, 0x0356100, indexJojos51SDio, 1 },
    { "5s trail B", 0x0355fc0, 0x0356000, indexJojos51SDio, 2 },
    { "41236s trail B", 0x03563c0, 0x0356400, indexJojos51SDio, 2 },
    { "236aa trail B", 0x0356040, 0x0356060, indexJojos51SDio, 2 },
    { "Wang Chan B", 0x0356200, 0x0356240, indexJojos51SDio, 8 },
    { "Shadow DIO Vs / Super B", 0x0417800, 0x0417880, indexJojos51SDio, indexJojos51Character_VsSuper },
    { "Shadow DIO Challenger B", 0x0417880, 0x0417900, indexJojos51SDio, indexJojos51Character_Challenger },
    { "Shadow DIO Select / Winning B", 0x0417900, 0x0417980, indexJojos51SDio, indexJojos51Character_SelectWin1 },
    { "Shadow DIO Burning B (1/2)", 0x0355880, 0x0355900, indexJojos51SDio, indexJojos51Character_BurnZap },
    { "Shadow DIO Burning B (2/2)", 0x0355900, 0x0355980, indexJojos51SDio, indexJojos51Character_BurnZap },
    { "Shadow DIO Tech/Zap B (1/2)", 0x0355b80, 0x0355c00, indexJojos51SDio, indexJojos51Character_BurnZap },
    { "Shadow DIO Tech/Zap B (2/2)", 0x0355c00, 0x0355c80, indexJojos51SDio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SDIO_C[] =
{
    { "Shadow DIO C", 0x0369d00, 0x0369d80, indexJojos51SDio },
    { "623aa trail C", 0x036a580, 0x036a600, indexJojos51SDio, 1 },
    { "5s trail C", 0x036a4c0, 0x036a500, indexJojos51SDio, 2 },
    { "41236s trail C", 0x036a8c0, 0x036a900, indexJojos51SDio, 2 },
    { "236aa trail C", 0x036a540, 0x036a560, indexJojos51SDio, 2 },
    { "Wang Chan C", 0x036a700, 0x036a740, indexJojos51SDio, 8 },
    { "Shadow DIO Vs / Super C", 0x041c600, 0x041c680, indexJojos51SDio, indexJojos51Character_VsSuper },
    { "Shadow DIO Challenger C", 0x041c680, 0x041c700, indexJojos51SDio, indexJojos51Character_Challenger },
    { "Shadow DIO Select / Winning Screen C", 0x041c700, 0x041c780, indexJojos51SDio, indexJojos51Character_SelectWin1 },
    { "Shadow DIO Burning C (1/2)", 0x0369d80, 0x0369e00, indexJojos51SDio, indexJojos51Character_BurnZap },
    { "Shadow DIO Burning C (2/2)", 0x0369e00, 0x0369e80, indexJojos51SDio, indexJojos51Character_BurnZap },
    { "Shadow DIO Tech/Zap C (1/2)", 0x036a080, 0x036a100, indexJojos51SDio, indexJojos51Character_BurnZap },
    { "Shadow DIO Tech/Zap C (2/2)", 0x036a100, 0x036a180, indexJojos51SDio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SDIO_S[] =
{
    { "Shadow DIO S", 0x037e200, 0x037e280, indexJojos51SDio },
    { "623aa trail S", 0x037ea80, 0x037eb00, indexJojos51SDio, 1 },
    { "5s trail S", 0x037e9c0, 0x037ea00, indexJojos51SDio, 2 },
    { "41236s trail S",  0x037edc0, 0x037ee00, indexJojos51SDio, 2 },
    { "236aa trail S", 0x037ea40, 0x037ea60, indexJojos51SDio, 2 },
    { "Wang Chan S", 0x037ec00, 0x037ec40, indexJojos51SDio, 8 },
    { "Shadow DIO Vs / Super S", 0x0421400, 0x0421480, indexJojos51SDio, indexJojos51Character_VsSuper },
    { "Shadow DIO Challenger S", 0x0421480, 0x0421500, indexJojos51SDio, indexJojos51Character_Challenger },
    { "Shadow DIO Select / Winning Screen S", 0x0421500, 0x0421580, indexJojos51SDio, indexJojos51Character_SelectWin1 },
    { "Shadow DIO Burning S (1/2)", 0x037e280, 0x037e300, indexJojos51SDio, indexJojos51Character_BurnZap },
    { "Shadow DIO Burning S (2/2)", 0x037e300, 0x037e380, indexJojos51SDio, indexJojos51Character_BurnZap },
    { "Shadow DIO Tech/Zap S (1/2)", 0x037e580, 0x037e600, indexJojos51SDio, indexJojos51Character_BurnZap },
    { "Shadow DIO Tech/Zap S (2/2)", 0x037e600, 0x037e680, indexJojos51SDio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SDIO_Start[] =
{
    { "Shadow DIO Start", 0x0392700, 0x0392780, indexJojos51SDio },
    { "623aa trail Start", 0x0392f80, 0x0393000, indexJojos51SDio, 1  },
    { "5s trail Start", 0x0392ec0, 0x0392f00, indexJojos51SDio, 2 },
    { "41236s trail Start",  0x03932c0, 0x0393300, indexJojos51SDio, 2 },
    { "236aa trail Start", 0x0392f40, 0x0392f60, indexJojos51SDio, 2 },
    { "Wang Chan Start", 0x0393100, 0x0393140, indexJojos51SDio, 8 },
    { "Shadow DIO Vs / Super Start", 0x0426200, 0x0426280, indexJojos51SDio, indexJojos51Character_VsSuper },
    { "Shadow DIO Challenger Start", 0x0426280, 0x0426300, indexJojos51SDio, indexJojos51Character_Challenger },
    { "Shadow DIO Select / Winning Screen Start", 0x0426300, 0x0426380, indexJojos51SDio, indexJojos51Character_SelectWin1 },
    { "Shadow DIO Burning Start (1/2)", 0x0392780, 0x0392800, indexJojos51SDio, indexJojos51Character_BurnZap },
    { "Shadow DIO Burning Start (2/2)", 0x0392800, 0x0392880, indexJojos51SDio, indexJojos51Character_BurnZap },
    { "Shadow DIO Tech/Zap Start (1/2)", 0x0392a80, 0x0392b00, indexJojos51SDio, indexJojos51Character_BurnZap },
    { "Shadow DIO Tech/Zap Start (2/2)", 0x0392b00, 0x0392b80, indexJojos51SDio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_YJOSEPH_A[] =
{
    { "Young Joseph A", 0x0341f80, 0x0342000, indexJojos51YSeph },
    { "Young Joseph Vs / Super A", 0x0412d00, 0x0412d80, indexJojos51YSeph, indexJojos51Character_VsSuper },
    { "Young Joseph Challenger A", 0x0412d80, 0x0412e00, indexJojos51YSeph, indexJojos51Character_Challenger },
    { "Young Joseph Select / Winning Screen A", 0x0412e00, 0x0412e80, indexJojos51YSeph, indexJojos51Character_SelectWin1 },
    { "Hamon Cola Flash A", 0x0342800, 0x0342880, indexJojos51YSeph, 1 },
    { "Young Joseph Burning A (1/2)", 0x0342000, 0x0342080, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { "Young Joseph Burning A (2/2)", 0x0342080, 0x0342100, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { "Young Joseph Tech/Zap A (1/2)", 0x0342300, 0x0342380, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { "Young Joseph Tech/Zap A (2/2)", 0x0342380, 0x0342400, indexJojos51YSeph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_YJOSEPH_B[] =
{
    { "Young Joseph B", 0x0356480, 0x0356500, indexJojos51YSeph },
    { "Young Joseph Vs / Super B", 0x0417b00, 0x0417b80, indexJojos51YSeph, indexJojos51Character_VsSuper },
    { "Young Joseph Challenger B", 0x0417b80, 0x0417c00, indexJojos51YSeph, indexJojos51Character_Challenger },
    { "Young Joseph Select / Winning B", 0x0417c00, 0x0417c80, indexJojos51YSeph, indexJojos51Character_SelectWin1 },
    { "Hamon Cola Flash B", 0x0356D00, 0x0356D80, indexJojos51YSeph, 1 },
    { "Young Joseph Burning B (1/2)", 0x0356500, 0x0356580, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { "Young Joseph Burning B (2/2)", 0x0356580, 0x0356600, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { "Young Joseph Tech/Zap B (1/2)", 0x0356800, 0x0356880, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { "Young Joseph Tech/Zap B (2/2)", 0x0356880, 0x0356900, indexJojos51YSeph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_YJOSEPH_C[] =
{
    { "Young Joseph C", 0x036a980, 0x036aa00, indexJojos51YSeph },
    { "Young Joseph Vs / Super C", 0x041c900, 0x041c980, indexJojos51YSeph, indexJojos51Character_VsSuper },
    { "Young Joseph Challenger C", 0x041c980, 0x041ca00, indexJojos51YSeph, indexJojos51Character_Challenger },
    { "Young Joseph Select / Winning C", 0x041ca00, 0x041ca80, indexJojos51YSeph, indexJojos51Character_SelectWin1 },
    { "Hamon Cola Flash C", 0x036B200, 0x036B280, indexJojos51YSeph, 1 },
    { "Young Joseph Burning C (1/2)", 0x036aa00, 0x036aa80, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { "Young Joseph Burning C (2/2)", 0x036aa80, 0x036ab00, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { "Young Joseph Tech/Zap C (1/2)", 0x036ad00, 0x036ad80, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { "Young Joseph Tech/Zap C (2/2)", 0x036ad80, 0x036ae00, indexJojos51YSeph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_YJOSEPH_S[] =
{
    { "Young Joseph S", 0x037ee80, 0x037ef00, indexJojos51YSeph },
    { "Young Joseph Vs / Super S", 0x0421700, 0x0421780, indexJojos51YSeph, indexJojos51Character_VsSuper },
    { "Young Joseph Challenger S", 0x0421780, 0x0421800, indexJojos51YSeph, indexJojos51Character_Challenger },
    { "Young Joseph Select / Winning Screen S", 0x0421800, 0x0421880, indexJojos51YSeph, indexJojos51Character_SelectWin1 },
    { "Hamon Cola Flash S", 0x037F700, 0x037F780, indexJojos51YSeph, 1 },
    { "Young Joseph Burning S (1/2)", 0x037ef00, 0x037ef80, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { "Young Joseph Burning S (2/2)", 0x037ef80, 0x037f000, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { "Young Joseph Tech/Zap S (1/2)", 0x037f200, 0x037f280, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { "Young Joseph Tech/Zap S (2/2)", 0x037f280, 0x037f300, indexJojos51YSeph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_YJOSEPH_Start[] =
{
    { "Young Joseph Start", 0x0393380, 0x0393400, indexJojos51YSeph },
    { "Young Joseph Vs / Super Start", 0x0426500, 0x0426580, indexJojos51YSeph, indexJojos51Character_VsSuper },
    { "Young Joseph Challenger Start", 0x0426580, 0x0426600, indexJojos51YSeph, indexJojos51Character_Challenger },
    { "Young Joseph Select / Winning Screen Start", 0x0426600, 0x0426680, indexJojos51YSeph, indexJojos51Character_SelectWin1 },
    { "Hamon Cola Flash Start", 0x0393C00, 0x0393C80, indexJojos51YSeph, 1 },
    { "Young Joseph Burning Start (1/2)", 0x0393400, 0x0393480, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { "Young Joseph Burning Start (2/2)", 0x0393480, 0x0393500, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { "Young Joseph Tech/Zap Start (1/2)", 0x0393700, 0x0393780, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { "Young Joseph Tech/Zap Start (2/2)", 0x0393780, 0x0393800, indexJojos51YSeph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOL_A[] =
{
    { "Hol Horse A", 0x0342c00, 0x0342c80, indexJojos51Hol, 0x00 },
    { "Hol's Super Bullets A", 0x0343556, 0x0343560 },
    { "Hol's Slow-mo Bullet Trail 1 A", 0x03435d6, 0x03435e0 },
    { "Hol's Slow-mo Bullet Trail 2 A", 0x0343656, 0x0343660 },
    { "Hol's Intro/Winpose Stuff+Boingo A", 0x0343480, 0x0343500, indexJojos51Hol, 0x03 },
    { "Hol Horse Vs / Super A", 0x0413000, 0x0413080, indexJojos51Hol, 0x04 },
    { "Hol Horse Challenger A", 0x0413080, 0x0413100, indexJojos51Hol, 0x05 },
    { "Hol Horse Select / Winning A", 0x0413100, 0x0413180, indexJojos51Hol, 0x06 },
    { "Hol Horse Burning A (1/2)", 0x0342c80, 0x0342d00, indexJojos51Hol, 0x07 },
    { "Hol Horse Burning A (2/2)", 0x0342d00, 0x0342d80, indexJojos51Hol, 0x07 },
    { "Hol Horse Tech/Zap A (1/2)", 0x0342f80, 0x0343000, indexJojos51Hol, 0x07 },
    { "Hol Horse Tech/Zap A (2/2)", 0x0343000, 0x0343080, indexJojos51Hol, 0x07 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOL_B[] =
{
    { "Hol Horse B", 0x0357100, 0x0357180, indexJojos51Hol, 0x00 },
    { "Hol's Super Bullets B", 0x0357a56, 0x0357a60 },
    { "Hol's Slow-mo Bullet Trail 1 B", 0x0357ad6, 0x0357ae0 },
    { "Hol's Slow-mo Bullet Trail 2 B", 0x0357b56, 0x0357b60 },
    { "Hol's Intro/Winpose Stuff+Boingo B", 0x0357980, 0x0357a00, indexJojos51Hol, 0x03 },
    { "Hol Horse Vs / Super B", 0x0417e00, 0x0417e80, indexJojos51Hol, 0x04 },
    { "Hol Horse Challenger B", 0x0417e80, 0x0417f00, indexJojos51Hol, 0x05 },
    { "Hol Horse Select / Winning B", 0x0417f00, 0x0417f80, indexJojos51Hol, 0x06 },
    { "Hol Horse Burning B (1/2)", 0x0357180, 0x0357200, indexJojos51Hol, 0x07 },
    { "Hol Horse Burning B (2/2)", 0x0357200, 0x0357280, indexJojos51Hol, 0x07 },
    { "Hol Horse Tech/Zap B (1/2)", 0x0357480, 0x0357500, indexJojos51Hol, 0x07 },
    { "Hol Horse Tech/Zap B (2/2)", 0x0357500, 0x0357580, indexJojos51Hol, 0x07 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOL_C[] =
{
    { "Hol Horse C", 0x036b600, 0x036b680, indexJojos51Hol, 0x00 },
    { "Hol's Super Bullets C", 0x036bf56, 0x036bf60 },
    { "Hol's Slow-mo Bullet Trail 1 C", 0x036bfd6, 0x036bfe0 },
    { "Hol's Slow-mo Bullet Trail 2 C", 0x036c056, 0x036c060 },
    { "Hol's Intro/Winpose Stuff+Boingo C", 0x036be80, 0x036bf00, indexJojos51Hol, 0x03 },
    { "Hol Horse Vs / Super C", 0x041cc00, 0x041cc80, indexJojos51Hol, 0x04 },
    { "Hol Horse Challenger C", 0x041cc80, 0x041cd00, indexJojos51Hol, 0x05 },
    { "Hol Horse Select / Winning C", 0x041cd00, 0x041cd80, indexJojos51Hol, 0x06 },
    { "Hol Horse Burning C (1/2)", 0x036b680, 0x036b700, indexJojos51Hol, 0x07 },
    { "Hol Horse Burning C (2/2)", 0x036b700, 0x036b780, indexJojos51Hol, 0x07 },
    { "Hol Horse Tech/Zap C (1/2)", 0x036b980, 0x036ba00, indexJojos51Hol, 0x07 },
    { "Hol Horse Tech/Zap C (2/2)", 0x036ba00, 0x036ba80, indexJojos51Hol, 0x07 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOL_S[] =
{
    { "Hol Horse S", 0x037fb00, 0x037fb80, indexJojos51Hol, 0x00 },
    { "Hol's Super Bullets S", 0x0380456, 0x0380460 },
    { "Hol's Slow-mo Bullet Trail 1 S", 0x03804d6, 0x03804e0 },
    { "Hol's Slow-mo Bullet Trail 2 S", 0x0380556, 0x0380560 },
    { "Hol's Intro/Winpose Stuff+Boingo S", 0x0380380, 0x0380400, indexJojos51Hol, 0x03 },
    { "Hol Horse Vs / Super S", 0x0421a00, 0x0421a80, indexJojos51Hol, 0x04 },
    { "Hol Horse Challenger S", 0x0421a80, 0x0421b00, indexJojos51Hol, 0x05 },
    { "Hol Horse Select / Winning S", 0x0421b00, 0x0421b80, indexJojos51Hol, 0x06 },
    { "Hol Horse Burning S (1/2)", 0x037fb80, 0x037fc00, indexJojos51Hol, 0x07 },
    { "Hol Horse Burning S (2/2)", 0x037fc00, 0x037fc80, indexJojos51Hol, 0x07 },
    { "Hol Horse Tech/Zap S (1/2)", 0x037fe80, 0x037ff00, indexJojos51Hol, 0x07 },
    { "Hol Horse Tech/Zap S (2/2)", 0x037ff00, 0x037ff80, indexJojos51Hol, 0x07 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOL_Start[] =
{
    { "Hol Horse Start", 0x0394000, 0x0394080, indexJojos51Hol, 0x00 },
    { "Hol's Super Bullets Start", 0x0394956, 0x0394960 },
    { "Hol's Slow-mo Bullet Trail 1 Start", 0x03949d6, 0x03949e0 },
    { "Hol's Slow-mo Bullet Trail 2 Start", 0x0394a56, 0x0394a60 },
    { "Hol's Intro/Winpose Stuff+Boingo Start", 0x0394880, 0x0394900, indexJojos51Hol, 0x03 },
    { "Hol Horse Vs / Super Start", 0x0426800, 0x0426880, indexJojos51Hol, 0x04 },
    { "Hol Horse Challenger Start", 0x0426880, 0x0426900, indexJojos51Hol, 0x05 },
    { "Hol Horse Select / Winning Screen Start", 0x0426900, 0x0426980, indexJojos51Hol, 0x06 },
    { "Hol Horse Burning Start (1/2)", 0x0394080, 0x0394100, indexJojos51Hol, 0x07 },
    { "Hol Horse Burning Start (2/2)", 0x0394100, 0x0394180, indexJojos51Hol, 0x07 },
    { "Hol Horse Tech/Zap Start (1/2)", 0x0394380, 0x0394400, indexJojos51Hol, 0x07 },
    { "Hol Horse Tech/Zap Start (2/2)", 0x0394400, 0x0394480, indexJojos51Hol, 0x07 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_VICE_A[] =
{
    { "Vanilla Ice & Cream A", 0x0343880, 0x0343900, indexJojos51VIce },
    { "Vanilla Ice Vs / Super A", 0x0413300, 0x0413380, indexJojos51VIce, indexJojos51Character_VsSuper },
    { "Vanilla Ice Challenger A", 0x0413380, 0x0413400, indexJojos51VIce, indexJojos51Character_Challenger },
    { "Vanilla Ice Select / Winning A (1/2)", 0x0413400, 0x0413480, indexJojos51VIce, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Vanilla Ice Select / Winning A (2/2)", 0x0413480, 0x0413500, indexJojos51VIce, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "Vanilla Ice Burning A (1/2)", 0x0343900, 0x0343980, indexJojos51VIce, indexJojos51Character_BurnZap },
    { "Vanilla Ice Burning A (2/2)", 0x0343980, 0x0343a00, indexJojos51VIce, indexJojos51Character_BurnZap },
    { "Vanilla Ice Tech A (1/2)", 0x0343c00, 0x0343c80, indexJojos51VIce, indexJojos51Character_BurnZap },
    { "Vanilla Ice Tech A (2/2)", 0x0343c80, 0x0343d00, indexJojos51VIce, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_VICE_B[] =
{
    { "Vanilla Ice & Cream B", 0x0357d80, 0x0357e00, indexJojos51VIce },
    { "Vanilla Ice Vs / Super B", 0x0418100, 0x0418180, indexJojos51VIce, indexJojos51Character_VsSuper },
    { "Vanilla Ice Challenger B", 0x0418180, 0x0418200, indexJojos51VIce, indexJojos51Character_Challenger },
    { "Vanilla Ice Select / Winning B (1/2)", 0x0418200, 0x0418280, indexJojos51VIce, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Vanilla Ice Select / Winning B (2/2)", 0x0418280, 0x0418300, indexJojos51VIce, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "Vanilla Ice Burning B (1/2)", 0x0357e00, 0x0357e80, indexJojos51VIce, indexJojos51Character_BurnZap },
    { "Vanilla Ice Burning B (2/2)", 0x0357e80, 0x0357f00, indexJojos51VIce, indexJojos51Character_BurnZap },
    { "Vanilla Ice Tech B (1/2)", 0x0358100, 0x0358180, indexJojos51VIce, indexJojos51Character_BurnZap },
    { "Vanilla Ice Tech B (2/2)", 0x0358180, 0x0358200, indexJojos51VIce, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_VICE_C[] =
{
    { "Vanilla Ice & Cream C", 0x036c280, 0x036c300, indexJojos51VIce },
    { "Vanilla Ice Vs / Super C", 0x041cf00, 0x041cf80, indexJojos51VIce, indexJojos51Character_VsSuper },
    { "Vanilla Ice Challenger C", 0x041cf80, 0x041d000, indexJojos51VIce, indexJojos51Character_Challenger },
    { "Vanilla Ice Select / Winning C (1/2)", 0x041d000, 0x041d080, indexJojos51VIce, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Vanilla Ice Select / Winning C (2/2)", 0x041d080, 0x041d100, indexJojos51VIce, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "Vanilla Ice Burning C (1/2)", 0x036c300, 0x036c380, indexJojos51VIce, indexJojos51Character_BurnZap },
    { "Vanilla Ice Burning C (2/2)", 0x036c380, 0x036c400, indexJojos51VIce, indexJojos51Character_BurnZap },
    { "Vanilla Ice Tech C (1/2)", 0x036c600, 0x036c680, indexJojos51VIce, indexJojos51Character_BurnZap },
    { "Vanilla Ice Tech C (2/2)", 0x036c680, 0x036c700, indexJojos51VIce, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_VICE_S[] =
{
    { "Vanilla Ice & Cream S", 0x0380780, 0x0380800, indexJojos51VIce },
    { "Vanilla Ice Vs / Super S", 0x0421d00, 0x0421d80, indexJojos51VIce, indexJojos51Character_VsSuper },
    { "Vanilla Ice Challenger S", 0x0421d80, 0x0421e00, indexJojos51VIce, indexJojos51Character_Challenger },
    { "Vanilla Ice Select / Winning S (1/2)", 0x0421e00, 0x0421e80, indexJojos51VIce, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Vanilla Ice Select / Winning S (2/2)", 0x0421e80, 0x0421f00, indexJojos51VIce, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "Vanilla Ice Burning S (1/2)", 0x0380800, 0x0380880, indexJojos51VIce, indexJojos51Character_BurnZap },
    { "Vanilla Ice Burning S (2/2)", 0x0380880, 0x0380900, indexJojos51VIce, indexJojos51Character_BurnZap },
    { "Vanilla Ice Tech S (1/2)", 0x0380b00, 0x0380b80, indexJojos51VIce, indexJojos51Character_BurnZap },
    { "Vanilla Ice Tech S (2/2)", 0x0380b80, 0x0380c00, indexJojos51VIce, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_VICE_Start[] =
{
    { "Vanilla Ice & Cream Start", 0x0394c80, 0x0394d00, indexJojos51VIce },
    { "Vanilla Ice Vs / Super Start", 0x0426b00, 0x0426b80, indexJojos51VIce, indexJojos51Character_VsSuper },
    { "Vanilla Ice Challenger Start", 0x0426b80, 0x0426c00, indexJojos51VIce, indexJojos51Character_Challenger },
    { "Vanilla Ice Select / Winning Start (1/2)", 0x0426c00, 0x0426c80, indexJojos51VIce, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Vanilla Ice Select / Winning Start (2/2)", 0x0426c80, 0x0426d00, indexJojos51VIce, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "Vanilla Ice Burning Start (1/2)", 0x0394d00, 0x0394d80, indexJojos51VIce, indexJojos51Character_BurnZap },
    { "Vanilla Ice Burning Start (2/2)", 0x0394d80, 0x0394e00, indexJojos51VIce, indexJojos51Character_BurnZap },
    { "Vanilla Ice Tech Start (1/2)", 0x0395000, 0x0395080, indexJojos51VIce, indexJojos51Character_BurnZap },
    { "Vanilla Ice Tech Start (2/2)", 0x0395080, 0x0395100, indexJojos51VIce, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIERO_A[] =
{
    { "New Kakyoin & Hierophant A", 0x0344500, 0x0344580, indexJojos51NewKakyo },
    { "New Hierophant Changing Pal A (1/7)", 0x0344d80, 0x0344e00, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { "New Hierophant Changing Pal A (2/7)", 0x0344e00, 0x0344e80, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { "New Hierophant Changing Pal A (3/7)", 0x0344e80, 0x0344f00, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { "New Hierophant Changing Pal A (4/7)", 0x0344f00, 0x0344f80, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { "New Hierophant Changing Pal A (5/7)", 0x0344f80, 0x0345000, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { "New Hierophant Changing Pal A (6/7)", 0x0345000, 0x0345080, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { "New Hierophant Changing Pal A (7/7)", 0x0345080, 0x0345100, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { "New Hierophant Sparkles A", 0x0345100, 0x0345120, indexJojos51NewKakyo, 0x8 },
    { "Raging Demon Trail A", 0x0344ca0, 0x0344d20, indexJojos51NewKakyo, 0x9 },
    { "New Kakyoin Remote Mode Afterimage A", 0x0344980, 0x0344A00, indexJojos51NewKakyo, 0xa },

    { "New Kakyoin Vs / Super A", 0x0413600, 0x0413680, indexJojos51NewKakyo, indexJojos51Character_VsSuper },
    { "New Kakyoin Challenger A", 0x0413680, 0x0413700, indexJojos51NewKakyo, indexJojos51Character_Challenger },
    { "New Kakyoin Select / Winning A", 0x0413700, 0x0413780, indexJojos51NewKakyo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "New Hierophant Select / Winning A", 0x0413780, 0x0413800, indexJojos51NewKakyo, indexJojos51Character_SelectWin2, &pairHandledInCode },

    { "New Kakyoin Burning A (1/2)", 0x0344580, 0x0344600, indexJojos51NewKakyo },
    { "New Kakyoin Burning A (2/2)", 0x0344600, 0x0344680, indexJojos51NewKakyo },
    { "New Kakyoin Tech/Zap A (1/2)", 0x0344880, 0x0344900, indexJojos51NewKakyo },
    { "New Kakyoin Tech/Zap A (2/2)", 0x0344900, 0x0344980, indexJojos51NewKakyo },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIERO_B[] =
{
    { "New Kakyoin & Hierophant B", 0x0358a00, 0x0358a80, indexJojos51NewKakyo },
    { "New Hierophant Changing Pal B (1/7)", 0x0359280, 0x0359300, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { "New Hierophant Changing Pal B (2/7)", 0x0359300, 0x0359380, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { "New Hierophant Changing Pal B (3/7)", 0x0359380, 0x0359400, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { "New Hierophant Changing Pal B (4/7)", 0x0359400, 0x0359480, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { "New Hierophant Changing Pal B (5/7)", 0x0359480, 0x0359500, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { "New Hierophant Changing Pal B (6/7)", 0x0359500, 0x0359580, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { "New Hierophant Changing Pal B (7/7)", 0x0359580, 0x0359600, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { "New Hierophant Sparkles B", 0x0359600, 0x0359620, indexJojos51NewKakyo, 0x8 },
    { "Raging Demon Trail B", 0x03591a0, 0x0359220, indexJojos51NewKakyo, 0x9 },
    { "New Kakyoin Remote Mode Afterimage B", 0x0358E80, 0x0358F00, indexJojos51NewKakyo, 0xa },

    { "New Kakyoin Vs / Super B", 0x0418400, 0x0418480, indexJojos51NewKakyo, indexJojos51Character_VsSuper },
    { "New Kakyoin Challenger B", 0x0418480, 0x0418500, indexJojos51NewKakyo, indexJojos51Character_Challenger },
    { "New Kakyoin Select / Winning B", 0x0418500, 0x0418580, indexJojos51NewKakyo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "New Hierophant Select / Winning B", 0x0418580, 0x0418600, indexJojos51NewKakyo, indexJojos51Character_SelectWin2, &pairHandledInCode },

    { "New Kakyoin Burning B (1/2)", 0x0358a80, 0x0358b00, indexJojos51NewKakyo },
    { "New Kakyoin Burning B (2/2)", 0x0358b00, 0x0358b80, indexJojos51NewKakyo },
    { "New Kakyoin Tech/Zap B (1/2)", 0x0358d80, 0x0358e00, indexJojos51NewKakyo },
    { "New Kakyoin Tech/Zap B (2/2)", 0x0358e00, 0x0358e80, indexJojos51NewKakyo },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIERO_C[] =
{
    { "New Kakyoin & Hierophant C", 0x036cf00, 0x036cf80, indexJojos51NewKakyo },
    { "New Hierophant Changing Pal C (1/7)", 0x036d780, 0x036d800, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { "New Hierophant Changing Pal C (2/7)", 0x036d800, 0x036d880, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { "New Hierophant Changing Pal C (3/7)", 0x036d880, 0x036d900, indexJojos51NewKakyo, 0x1,& pairHandledInCode },
    { "New Hierophant Changing Pal C (4/7)", 0x036d900, 0x036d980, indexJojos51NewKakyo, 0x1,& pairHandledInCode },
    { "New Hierophant Changing Pal C (5/7)", 0x036d980, 0x036da00, indexJojos51NewKakyo, 0x1,& pairHandledInCode },
    { "New Hierophant Changing Pal C (6/7)", 0x036da00, 0x036da80, indexJojos51NewKakyo, 0x1,& pairHandledInCode },
    { "New Hierophant Changing Pal C (7/7)", 0x036da80, 0x036db00, indexJojos51NewKakyo, 0x1,& pairHandledInCode },
    { "New Hierophant Sparkles C", 0x036db00, 0x036db20, indexJojos51NewKakyo, 0x8 },
    { "Raging Demon Trail C", 0x036d6a0, 0x036d720, indexJojos51NewKakyo, 0x9 },
    { "New Kakyoin Remote Mode Afterimage C", 0x036D380,0x036D400, indexJojos51NewKakyo, 0xA },

    { "New Kakyoin Vs / Super C", 0x041d200, 0x041d280, indexJojos51NewKakyo, indexJojos51Character_VsSuper },
    { "New Kakyoin Challenger C", 0x041d280, 0x041d300, indexJojos51NewKakyo, indexJojos51Character_Challenger },
    { "New Kakyoin Select / Winning C", 0x041d300, 0x041d380, indexJojos51NewKakyo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "New Hierophant Select / Winning C", 0x041d380, 0x041d400, indexJojos51NewKakyo, indexJojos51Character_SelectWin2, &pairHandledInCode },

    { "New Kakyoin Burning C (1/2)", 0x036cf80, 0x036d000, indexJojos51NewKakyo },
    { "New Kakyoin Burning C (2/2)", 0x036d000, 0x036d080, indexJojos51NewKakyo },
    { "New Kakyoin Tech/Zap C (1/2)", 0x036d280, 0x036d300, indexJojos51NewKakyo },
    { "New Kakyoin Tech/Zap C (2/2)", 0x036d300, 0x036d380, indexJojos51NewKakyo },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIERO_S[] =
{
    { "New Kakyoin & Hierophant S", 0x0381400, 0x0381480, indexJojos51NewKakyo },
    { "New Hierophant Changing Pal S (1/7)", 0x0381c80, 0x0381d00, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { "New Hierophant Changing Pal S (2/7)", 0x0381d00, 0x0381d80, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { "New Hierophant Changing Pal S (3/7)", 0x0381d80, 0x0381e00, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { "New Hierophant Changing Pal S (4/7)", 0x0381e00, 0x0381e80, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { "New Hierophant Changing Pal S (5/7)", 0x0381e80, 0x0381f00, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { "New Hierophant Changing Pal S (6/7)", 0x0381f00, 0x0381f80, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { "New Hierophant Changing Pal S (7/7)", 0x0381f80, 0x0382000, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { "New Hierophant Sparkles S", 0x0382000, 0x0382020, indexJojos51NewKakyo, 0x8 },
    { "Raging Demon Trail S", 0x0381ba0, 0x0381c20, indexJojos51NewKakyo, 0x9 },
    { "New Kakyoin Remote Mode Afterimage S", 0x0381880, 0x0381900, indexJojos51NewKakyo, 0xa },

    { "New Kakyoin Vs / Super S", 0x0422000, 0x0422080, indexJojos51NewKakyo, indexJojos51Character_VsSuper },
    { "New Kakyoin Challenger S", 0x0422080, 0x0422100, indexJojos51NewKakyo, indexJojos51Character_Challenger },
    { "New Kakyoin Select / Winning S", 0x0422100, 0x0422180, indexJojos51NewKakyo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "New Hierophant Select / Winning S", 0x0422180, 0x0422200, indexJojos51NewKakyo, indexJojos51Character_SelectWin2, &pairHandledInCode },

    { "New Kakyoin Burning S (1/2)", 0x0381480, 0x0381500, indexJojos51NewKakyo },
    { "New Kakyoin Burning S (2/2)", 0x0381500, 0x0381580, indexJojos51NewKakyo },
    { "New Kakyoin Tech/Zap S (1/2)", 0x0381780, 0x0381800, indexJojos51NewKakyo },
    { "New Kakyoin Tech/Zap S (2/2)", 0x0381800, 0x0381880, indexJojos51NewKakyo },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIERO_Start[] =
{
    { "New Kakyoin & Hierophant Start", 0x0395900, 0x0395980, indexJojos51NewKakyo },
    { "New Hierophant Changing Pal Start (1/7)", 0x0396180, 0x0396200, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { "New Hierophant Changing Pal Start (2/7)", 0x0396200, 0x0396280, indexJojos51NewKakyo, 0x1,& pairHandledInCode },
    { "New Hierophant Changing Pal Start (3/7)", 0x0396280, 0x0396300, indexJojos51NewKakyo, 0x1,& pairHandledInCode },
    { "New Hierophant Changing Pal Start (4/7)", 0x0396300, 0x0396380, indexJojos51NewKakyo, 0x1,& pairHandledInCode },
    { "New Hierophant Changing Pal Start (5/7)", 0x0396380, 0x0396400, indexJojos51NewKakyo, 0x1,& pairHandledInCode },
    { "New Hierophant Changing Pal Start (6/7)", 0x0396400, 0x0396480, indexJojos51NewKakyo, 0x1,& pairHandledInCode },
    { "New Hierophant Changing Pal Start (7/7)", 0x0396480, 0x0396500, indexJojos51NewKakyo, 0x1,& pairHandledInCode },
    { "New Hierophant Sparkles Start", 0x0396500, 0x0396520, indexJojos51NewKakyo, 0x8 },
    { "Raging Demon Trail Start", 0x03960a0, 0x0396120, indexJojos51NewKakyo, 0x9 },
    { "New Kakyoin Remote Mode Afterimage Start", 0x395D80, 0x395E00, indexJojos51NewKakyo, 0xa },

    { "New Kakyoin Vs / Super Start", 0x0426e00, 0x0426e80, indexJojos51NewKakyo, indexJojos51Character_VsSuper },
    { "New Kakyoin Challenger Start", 0x0426e80, 0x0426f00, indexJojos51NewKakyo, indexJojos51Character_Challenger },
    { "New Kakyoin Select / Winning Start", 0x0426f00, 0x0426f80, indexJojos51NewKakyo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "New Hierophant Select / Winning Start", 0x0426f80, 0x0427000, indexJojos51NewKakyo, indexJojos51Character_SelectWin2, &pairHandledInCode },

    { "New Kakyoin Burning Start (1/2)", 0x0395980, 0x0395a00, indexJojos51NewKakyo },
    { "New Kakyoin Burning Start (2/2)", 0x0395a00, 0x0395a80, indexJojos51NewKakyo },
    { "New Kakyoin Tech/Zap Start (1/2)", 0x0395c80, 0x0395d00, indexJojos51NewKakyo },
    { "New Kakyoin Tech/Zap Start (2/2)", 0x0395d00, 0x0395d80, indexJojos51NewKakyo },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BPOL_A[] =
{
    { "Anubis Polnareff A", 0x0345180, 0x0345200, indexJojos51Anubis },
    { "Anubis Polnareff Vs / Super A", 0x0413900, 0x0413980, indexJojos51Anubis, indexJojos51Character_VsSuper },
    { "Anubis Polnareff Challenger A", 0x0413980, 0x0413a00, indexJojos51Anubis, indexJojos51Character_Challenger },
    { "Anubis Polnareff Select / Winning A (1/2)", 0x0413a00, 0x0413a80, indexJojos51Anubis, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Anubis Polnareff Select / Winning A (2/2)", 0x0413a80, 0x0413b00, indexJojos51Anubis, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "Anubis Polnareff Burning A (1/2)", 0x0345200, 0x0345280, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { "Anubis Polnareff Burning A (2/2)", 0x0345280, 0x0345300, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { "Anubis Polnareff Tech/Zap A (1/2)", 0x0345500, 0x0345580, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { "Anubis Polnareff Tech/Zap A (2/2)", 0x0345580, 0x0345600, indexJojos51Anubis, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BPOL_B[] =
{
    { "Anubis Polnareff B", 0x0359680, 0x0359700, indexJojos51Anubis },
    { "Anubis Polnareff Vs / Super B", 0x0418700, 0x0418780, indexJojos51Anubis, indexJojos51Character_VsSuper },
    { "Anubis Polnareff Challenger B", 0x0418780, 0x0418800, indexJojos51Anubis, indexJojos51Character_Challenger },
    { "Anubis Polnareff Select / Winning B (1/2)", 0x0418800, 0x0418880, indexJojos51Anubis, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Anubis Polnareff Select / Winning B (2/2)", 0x0418880, 0x0418900, indexJojos51Anubis, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "Anubis Polnareff Burning B (1/2)", 0x0359700, 0x0359780, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { "Anubis Polnareff Burning B (2/2)", 0x0359780, 0x0359800, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { "Anubis Polnareff Tech/Zap B (1/2)", 0x0359a00, 0x0359a80, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { "Anubis Polnareff Tech/Zap B (2/2)", 0x0359a80, 0x0359b00, indexJojos51Anubis, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BPOL_C[] =
{
    { "Anubis Polnareff C", 0x036db80, 0x036dc00, indexJojos51Anubis },
    { "Anubis Polnareff Vs / Super C", 0x041d500, 0x041d580, indexJojos51Anubis, indexJojos51Character_VsSuper },
    { "Anubis Polnareff Challenger C", 0x041d580, 0x041d600, indexJojos51Anubis, indexJojos51Character_Challenger },
    { "Anubis Polnareff Select / Winning C (1/2)", 0x041d600, 0x041d680, indexJojos51Anubis, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Anubis Polnareff Select / Winning C (2/2)", 0x041d680, 0x041d700, indexJojos51Anubis, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "Anubis Polnareff Burning C (1/2)", 0x036dc00, 0x036dc80, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { "Anubis Polnareff Burning C (2/2)", 0x036dc80, 0x036dd00, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { "Anubis Polnareff Tech/Zap C (1/2)", 0x036df00, 0x036df80, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { "Anubis Polnareff Tech/Zap C (2/2)", 0x036df80, 0x036e000, indexJojos51Anubis, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BPOL_S[] =
{
    { "Anubis Polnareff S", 0x0382080, 0x0382100, indexJojos51Anubis },
    { "Anubis Polnareff Vs / Super S", 0x0422300, 0x0422380, indexJojos51Anubis, indexJojos51Character_VsSuper },
    { "Anubis Polnareff Challenger S", 0x0422380, 0x0422400, indexJojos51Anubis, indexJojos51Character_Challenger },
    { "Anubis Polnareff Select / Winning S (1/2)", 0x0422400, 0x0422480, indexJojos51Anubis, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Anubis Polnareff Select / Winning S (2/2)", 0x0422480, 0x0422500, indexJojos51Anubis, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "Anubis Polnareff Burning S (1/2)", 0x0382100, 0x0382180, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { "Anubis Polnareff Burning S (2/2)", 0x0382180, 0x0382200, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { "Anubis Polnareff Tech/Zap S (1/2)", 0x0382400, 0x0382480, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { "Anubis Polnareff Tech/Zap S (2/2)", 0x0382480, 0x0382500, indexJojos51Anubis, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BPOL_Start[] =
{
    { "Anubis Polnareff Start", 0x0396580, 0x0396600, indexJojos51Anubis },
    { "Anubis Polnareff Vs / Super Start", 0x0427100, 0x0427180, indexJojos51Anubis, indexJojos51Character_VsSuper },
    { "Anubis Polnareff Challenger Start", 0x0427180, 0x0427200, indexJojos51Anubis, indexJojos51Character_Challenger },
    { "Anubis Polnareff Select / Winning Start (1/2)", 0x0427200, 0x0427280, indexJojos51Anubis, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Anubis Polnareff Select / Winning Start (2/2)", 0x0427280, 0x0427300, indexJojos51Anubis, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "Anubis Polnareff Burning Start (1/2)", 0x0396600, 0x0396680, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { "Anubis Polnareff Burning Start (2/2)", 0x0396680, 0x0396700, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { "Anubis Polnareff Tech/Zap Start (1/2)", 0x0396900, 0x0396980, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { "Anubis Polnareff Tech/Zap Start (2/2)", 0x0396980, 0x0396a00, indexJojos51Anubis, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SHOP_A[] =
{
    { "Petshop A", 0x0345e00, 0x0345e80, indexJojos51Petshop },
    { "Eggshop & Wealthy Begger A", 0X0346680, 0X0346700, indexJojos51Petshop, 1 },
    { "Petshop Vs / Super A", 0x0413c00, 0x0413c80, indexJojos51Petshop, indexJojos51Character_VsSuper },
    { "Petshop Challenger A", 0x0413c80, 0x0413d00, indexJojos51Petshop, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { "Petshop Select / Winning A (1/2)", 0x0413d00, 0x0413d80, indexJojos51Petshop, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Petshop Select / Winning A (2/2)", 0x0413d80, 0x0413e00, indexJojos51Petshop, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { "Petshop Select / Winning A", 0x0413d00, 0x0413e00 },
#endif
    { "Petshop Burning A (1/2)", 0x0345e80, 0x0345f00, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { "Petshop Burning A (2/2)", 0x0345f00, 0x0345f80, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { "Petshop Tech/Zap A (1/2)", 0x0346180, 0x0346200, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { "Petshop Tech/Zap A (2/2)", 0x0346200, 0x0346280, indexJojos51Petshop, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SHOP_B[] =
{
    { "Petshop B", 0x035a300, 0x035a380, indexJojos51Petshop },
    { "Eggshop & Wealthy Begger B", 0x035AB80, 0x035AC00, indexJojos51Petshop, 1 },
    { "Petshop Vs / Super B", 0x0418a00, 0x0418a80, indexJojos51Petshop, indexJojos51Character_VsSuper },
    { "Petshop Challenger B", 0x0418a80, 0x0418b00, indexJojos51Petshop, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { "Petshop Select / Winning B (1/2)", 0x0418b00, 0x0418b80, indexJojos51Petshop, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Petshop Select / Winning B (2/2)", 0x0418b80, 0x0418c00, indexJojos51Petshop, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { "Petshop Select / Winning B", 0x0418b00, 0x0418c00 },
#endif
    { "Petshop Burning B (1/2)", 0x035a380, 0x035a400, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { "Petshop Burning B (2/2)", 0x035a400, 0x035a480, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { "Petshop Tech/Zap B  (1/2)", 0x035a680, 0x035a700, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { "Petshop Tech/Zap B  (2/2)", 0x035a700, 0x035a780, indexJojos51Petshop, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SHOP_C[] =
{
    { "Petshop C", 0x036e800, 0x036e880, indexJojos51Petshop },
    { "Eggshop & Wealthy Begger C", 0x036F080, 0x036F100, indexJojos51Petshop, 1 },
    { "Petshop Vs / Super C", 0x041d800, 0x041d880, indexJojos51Petshop, indexJojos51Character_VsSuper },
    { "Petshop Challenger C", 0x041d880, 0x041d900, indexJojos51Petshop, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { "Petshop Select / Winning C (1/2)", 0x041d900, 0x041d980, indexJojos51Petshop, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Petshop Select / Winning C (2/2)", 0x041d980, 0x041da00, indexJojos51Petshop, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { "Petshop Select / Winning C", 0x041d900, 0x041da00 },
#endif
    { "Petshop Burning C (1/2)", 0x036e880, 0x036e900, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { "Petshop Burning C (2/2)", 0x036e900, 0x036e980, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { "Petshop Tech/Zap C (1/2)", 0x036eb80, 0x036ec00, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { "Petshop Tech/Zap C (2/2)", 0x036ec00, 0x036ec80, indexJojos51Petshop, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SHOP_S[] =
{
    { "Petshop S", 0x0382d00, 0x0382d80, indexJojos51Petshop },
    { "Eggshop & Wealthy Begger S", 0x0383580, 0x0383600, indexJojos51Petshop, 1 },
    { "Petshop Vs / Super S", 0x0422600, 0x0422680, indexJojos51Petshop, indexJojos51Character_VsSuper },
    { "Petshop Challenger S", 0x0422680, 0x0422700, indexJojos51Petshop, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { "Petshop Select / Winning S (1/2)", 0x0422700, 0x0422780, indexJojos51Petshop, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Petshop Select / Winning S (2/2)", 0x0422780, 0x0422800, indexJojos51Petshop, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { "Petshop Select / Winning S", 0x0422700, 0x0422800 },
#endif
    { "Petshop Burning S (1/2)", 0x0382d80, 0x0382e00, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { "Petshop Burning S (2/2)", 0x0382e00, 0x0382e80, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { "Petshop Tech/Zap S (1/2)", 0x0383080, 0x0383100, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { "Petshop Tech/Zap S (2/2)", 0x0383100, 0x0383180, indexJojos51Petshop, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SHOP_Start[] =
{
    { "Petshop Start", 0x0397200, 0x0397280, indexJojos51Petshop },
    { "Eggshop & Wealthy Begger Start", 0x0397A80, 0x0397B00, indexJojos51Petshop, 1 },
    { "Petshop Vs / Super Start", 0x0427400, 0x0427480, indexJojos51Petshop, indexJojos51Character_VsSuper },
    { "Petshop Challenger Start", 0x0427480, 0x0427500, indexJojos51Petshop, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { "Petshop Select / Winning Start (1/2)", 0x0427500, 0x0427580, indexJojos51Petshop, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Petshop Select / Winning Start (2/2)", 0x0427580, 0x0427600, indexJojos51Petshop, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { "Petshop Select / Winning Start", 0x0427500, 0x0427600 },
#endif
    { "Petshop Burning Start (1/2)", 0x0397280, 0x0397300, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { "Petshop Burning Start (2/2)", 0x0397300, 0x0397380, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { "Petshop Tech/Zap Start (1/2)", 0x0397580, 0x0397600, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { "Petshop Tech/Zap Start (2/2)", 0x0397600, 0x0397680, indexJojos51Petshop, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MARIAH_A[] =
{
    { "Mariah A", 0x0347700, 0x0347780, indexJojos51Mariah },
    { "Old Woman A", 0x0347f80, 0x0348000, indexJojos51Mariah, 6 },
    { "Mariah Winpose Stuff A (1/2)", 0x0348000, 0x0348080, indexJojos51Mariah, 1 },
    { "Mariah Winpose Stuff A (2/2)", 0x0348080, 0x0348100, indexJojos51Mariah, 2 },
    { "Mariah's Bastet A", 0x0348100, 0x0348180, indexJojos51Mariah, 8 },
    { "Mariah Vs / Super A", 0x0414200, 0x0414280, indexJojos51Mariah, indexJojos51Character_VsSuper },
    { "Mariah Challenger A", 0x0414280, 0x0414300, indexJojos51Mariah, indexJojos51Character_Challenger },
    { "Mariah Select / Winning A", 0x0414300, 0x0414380, indexJojos51Mariah, indexJojos51Character_SelectWin1 },
    { "Mariah Burning A (1/2)", 0x0347780, 0x0347800, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { "Mariah Burning A (2/2)", 0x0347800, 0x0347880, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { "Mariah Tech/Zap A (1/2)", 0x0347a80, 0x0347b00, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { "Mariah Tech/Zap A (2/2)", 0x0347b00, 0x0347b80, indexJojos51Mariah, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MARIAH_B[] =
{
    { "Mariah B", 0x035bc00, 0x035bc80, indexJojos51Mariah },
    { "Old Woman B", 0x035c480, 0x035c500, indexJojos51Mariah, 6 },
    { "Mariah Winpose Stuff B (1/2)", 0x035c500, 0x035c580, indexJojos51Mariah, 1 },
    { "Mariah Winpose Stuff B (2/2)", 0x035c580, 0x035c600, indexJojos51Mariah, 2 },
    { "Mariah's Bastet B", 0x035c600, 0x035c680, indexJojos51Mariah, 8 },
    { "Mariah Vs / Super B", 0x0419000, 0x0419080, indexJojos51Mariah, indexJojos51Character_VsSuper },
    { "Mariah Challenger B", 0x0419080, 0x0419100, indexJojos51Mariah, indexJojos51Character_Challenger },
    { "Mariah Select / Winning B", 0x0419100, 0x0419180, indexJojos51Mariah, indexJojos51Character_SelectWin1 },
    { "Mariah Burning B (1/2)", 0x035bc80, 0x035bd00, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { "Mariah Burning B (2/2)", 0x035bd00, 0x035bd80, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { "Mariah Tech/Zap B (1/2)", 0x035bf80, 0x035c000, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { "Mariah Tech/Zap B (2/2)", 0x035c000, 0x035c080, indexJojos51Mariah, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MARIAH_C[] =
{
    { "Mariah C", 0x0370100, 0x0370180, indexJojos51Mariah },
    { "Old Woman C", 0x0370980, 0x0370a00, indexJojos51Mariah, 6 },
    { "Mariah Winpose Stuff C (1/2)", 0x0370a00, 0x0370a80, indexJojos51Mariah, 1 },
    { "Mariah Winpose Stuff C (2/2)", 0x0370a80, 0x0370b00, indexJojos51Mariah, 2 },
    { "Mariah's Bastet C", 0x0370b00, 0x0370b80, indexJojos51Mariah, 8 },
    { "Mariah Vs / Super C", 0x041de00, 0x041de80, indexJojos51Mariah, indexJojos51Character_VsSuper },
    { "Mariah Challenger C", 0x041de80, 0x041df00, indexJojos51Mariah, indexJojos51Character_Challenger },
    { "Mariah Select / Winning C", 0x041df00, 0x041df80, indexJojos51Mariah, indexJojos51Character_SelectWin1 },
    { "Mariah Burning C (1/2)", 0x0370180, 0x0370200, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { "Mariah Burning C (2/2)", 0x0370200, 0x0370280, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { "Mariah Tech/Zap C (1/2)", 0x0370480, 0x0370500, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { "Mariah Tech/Zap C (2/2)", 0x0370500, 0x0370580, indexJojos51Mariah, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MARIAH_S[] =
{
    { "Mariah S", 0x0384600, 0x0384680, indexJojos51Mariah },
    { "Old Woman S", 0x0384e80, 0x0384f00, indexJojos51Mariah, 6 },
    { "Mariah Winpose Stuff S (1/2)", 0x0384f00, 0x0384f80, indexJojos51Mariah, 1 },
    { "Mariah Winpose Stuff S (2/2)", 0x0384f80, 0x0385000, indexJojos51Mariah, 2 },
    { "Mariah's Bastet S", 0x0385000, 0x0385080, indexJojos51Mariah, 8 },
    { "Mariah Vs / Super S", 0x0422c00, 0x0422c80, indexJojos51Mariah, indexJojos51Character_VsSuper },
    { "Mariah Challenger S", 0x0422c80, 0x0422d00, indexJojos51Mariah, indexJojos51Character_Challenger },
    { "Mariah Select / Winning S", 0x0422d00, 0x0422d80, indexJojos51Mariah, indexJojos51Character_SelectWin1 },
    { "Mariah Burning S (1/2)", 0x0384680, 0x0384700, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { "Mariah Burning S (2/2)", 0x0384700, 0x0384780, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { "Mariah Tech/Zap S (1/2)", 0x0384980, 0x0384a00, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { "Mariah Tech/Zap S (2/2)", 0x0384a00, 0x0384a80, indexJojos51Mariah, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MARIAH_Start[] =
{
    { "Mariah Start", 0x0398b00, 0x0398b80, indexJojos51Mariah },
    { "Old Woman Start", 0x0399380, 0x0399400, indexJojos51Mariah, 6 },
    { "Mariah Winpose Stuff Start (1/2)", 0x0399400, 0x0399480, indexJojos51Mariah, 1 },
    { "Mariah Winpose Stuff Start (2/2)", 0x0399480, 0x0399500, indexJojos51Mariah, 2 },
    { "Mariah's Bastet Start", 0x0399500, 0x0399580, indexJojos51Mariah, 8 },
    { "Mariah Vs / Super Start", 0x0427a00, 0x0427a80, indexJojos51Mariah, indexJojos51Character_VsSuper },
    { "Mariah Challenger Start", 0x0427a80, 0x0427b00, indexJojos51Mariah, indexJojos51Character_Challenger },
    { "Mariah Select / Winning Start", 0x0427b00, 0x0427b80, indexJojos51Mariah, indexJojos51Character_SelectWin1 },
    { "Mariah Burning Start (1/2)", 0x0398b80, 0x0398c00, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { "Mariah Burning Start (2/2)", 0x0398c00, 0x0398c80, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { "Mariah Tech/Zap Start (1/2)", 0x0398e80, 0x0398f00, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { "Mariah Tech/Zap Start (2/2)", 0x0398f00, 0x0398f80, indexJojos51Mariah, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOLBOINGO_A[] =
{
    { "Hol & Boingo A", 0x0348380, 0x0348400, indexJojos51HolBoingo },
    { "Child Hol & Boingo A", 0x0348c00, 0x0348c80, indexJojos51HolBoingo, 1 },
    { "Hol & Boingo Super Bullets A", 0x0348cd6, 0x0348ce0 },
    { "Hol & Boingo Vs / Super A", 0x0414500, 0x0414580, indexJojos51HolBoingo, indexJojos51Character_VsSuper },
    { "Hol & Boingo Challenger A", 0x0414580, 0x0414600, indexJojos51HolBoingo, indexJojos51Character_Challenger },
    { "Hol & Boingo Select / Winning A (1/2)", 0x0414600, 0x0414680, indexJojos51HolBoingo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Hol & Boingo Select / Winning A (2/2)", 0x0414680, 0x0414700, indexJojos51HolBoingo, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "Hol & Boingo Burning A (1/2)", 0x0348400, 0x0348480, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { "Hol & Boingo Burning A (2/2)", 0x0348480, 0x0348500, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { "Hol & Boingo Tech/Zap A (1/2)", 0x0348700, 0x0348780, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { "Hol & Boingo Tech/Zap A (2/2)", 0x0348780, 0x0348800, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOLBOINGO_B[] =
{
    { "Hol & Boingo B", 0x035c880, 0x035c900, indexJojos51HolBoingo },
    { "Child Hol & Boingo B", 0x035d100, 0x035d180, indexJojos51HolBoingo, 1 },
    { "Hol & Boingo Super Bullets B", 0x035d1d6, 0x035d1e0 },
    { "Hol & Boingo Vs / Super B", 0x0419300, 0x0419380, indexJojos51HolBoingo, indexJojos51Character_VsSuper },
    { "Hol & Boingo Challenger B", 0x0419380, 0x0419400, indexJojos51HolBoingo, indexJojos51Character_Challenger },
    { "Hol & Boingo Select / Winning B (1/2)", 0x0419400, 0x0419480, indexJojos51HolBoingo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Hol & Boingo Select / Winning B (2/2)", 0x0419480, 0x0419500, indexJojos51HolBoingo, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "Hol & Boingo Burning B (1/2)", 0x035c900, 0x035c980, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { "Hol & Boingo Burning B (2/2)", 0x035c980, 0x035ca00, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { "Hol & Boingo Tech/Zap B (1/2)", 0x035cc00, 0x035cc80, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { "Hol & Boingo Tech/Zap B (2/2)", 0x035cc80, 0x035cd00, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOLBOINGO_C[] =
{
    { "Hol & Boingo C", 0x0370d80, 0x0370e00, indexJojos51HolBoingo },
    { "Child Hol & Boingo C", 0x0371600, 0x0371680, indexJojos51HolBoingo, 1 },
    { "Hol & Boingo Super Bullets C", 0x03716d6, 0x03716e0 },
    { "Hol & Boingo Vs / Super C", 0x041e100, 0x041e180, indexJojos51HolBoingo, indexJojos51Character_VsSuper },
    { "Hol & Boingo Challenger C", 0x041e180, 0x041e200, indexJojos51HolBoingo, indexJojos51Character_Challenger },
    { "Hol & Boingo Select / Winning C (1/2)", 0x041e200, 0x041e280, indexJojos51HolBoingo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Hol & Boingo Select / Winning C (2/2)", 0x041e280, 0x041e300, indexJojos51HolBoingo, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "Hol & Boingo Burning C (1/2)", 0x0370e00, 0x0370e80, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { "Hol & Boingo Burning C (2/2)", 0x0370e80, 0x0370f00, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { "Hol & Boingo Tech/Zap C (1/2)", 0x0371100, 0x0371180, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { "Hol & Boingo Tech/Zap C (2/2)", 0x0371180, 0x0371200, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOLBOINGO_S[] =
{
    { "Hol & Boingo S", 0x0385280, 0x0385300, indexJojos51HolBoingo },
    { "Child Hol & Boingo S", 0x0385b00, 0x0385b80, indexJojos51HolBoingo, 1 },
    { "Hol & Boingo Super Bullets S", 0x0385bd6, 0x0385be0 },
    { "Hol & Boingo Vs / Super S", 0x0422f00, 0x0422f80, indexJojos51HolBoingo, indexJojos51Character_VsSuper },
    { "Hol & Boingo Challenger S", 0x0422f80, 0x0423000, indexJojos51HolBoingo, indexJojos51Character_Challenger },
    { "Hol & Boingo Select / Winning S (1/2)", 0x0423000, 0x0423080, indexJojos51HolBoingo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Hol & Boingo Select / Winning S (2/2)", 0x0423080, 0x0423100, indexJojos51HolBoingo, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "Hol & Boingo Burning S (1/2)", 0x0385300, 0x0385380, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { "Hol & Boingo Burning S (2/2)", 0x0385380, 0x0385400, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { "Hol & Boingo Tech/Zap S (1/2)", 0x0385600, 0x0385680, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { "Hol & Boingo Tech/Zap S (2/2)", 0x0385680, 0x0385700, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOLBOINGO_Start[] =
{
    { "Hol & Boingo Start", 0x0399780, 0x0399800, indexJojos51HolBoingo },
    { "Child Hol & Boingo Start", 0x039a000, 0x039a080, indexJojos51HolBoingo, 1 },
    { "Hol & Boingo Super Bullets Start", 0x039a0d6, 0x039a0e0 },
    { "Hol & Boingo Vs / Super Start", 0x0427d00, 0x0427d80, indexJojos51HolBoingo, indexJojos51Character_VsSuper },
    { "Hol & Boingo Challenger Start", 0x0427d80, 0x0427e00, indexJojos51HolBoingo, indexJojos51Character_Challenger },
    { "Hol & Boingo Select / Winning Start (1/2)", 0x0427e00, 0x0427e80, indexJojos51HolBoingo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { "Hol & Boingo Select / Winning Start (2/2)", 0x0427e80, 0x0427f00, indexJojos51HolBoingo, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { "Hol & Boingo Burning Start (1/2)", 0x0399800, 0x0399880, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { "Hol & Boingo Burning Start (2/2)", 0x0399880, 0x0399900, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { "Hol & Boingo Tech/Zap Start (1/2)", 0x0399b00, 0x0399b80, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { "Hol & Boingo Tech/Zap Start (2/2)", 0x0399b80, 0x0399c00, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_RSOUL_A[] =
{
    { "Rubber Soul A", 0x0349000, 0x0349080, indexJojos51RSoul },
    { "Rubber Child TF A", 0x0349780, 0x0349800, indexJojos51RSoul, 1 },
    { "Rubber Soul Vs / Super A", 0x0414800, 0x0414880, indexJojos51RSoul, indexJojos51Character_VsSuper },
    { "Rubber Soul Challenger A", 0x0414880, 0x0414900, indexJojos51RSoul, indexJojos51Character_Challenger },
    { "Rubber Soul Select / Winning A", 0x0414900, 0x0414980, indexJojos51RSoul, indexJojos51Character_SelectWin1 },
    { "Rubber Soul Burning A (1/2)", 0x0349080, 0x0349100, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { "Rubber Soul Burning A (2/2)", 0x0349100, 0x0349180, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { "Rubber Soul Tech/Zap A (1/2)", 0x035d880, 0x035d900, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { "Rubber Soul Tech/Zap A (2/2)", 0x035d900, 0x035d980, indexJojos51RSoul, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_RSOUL_B[] =
{
    { "Rubber Soul B", 0x035d500, 0x035d580, indexJojos51RSoul },
    { "Rubber Child TF B", 0x035dc80, 0x035dd00, indexJojos51RSoul, 1 },
    { "Rubber Soul Vs / Super B", 0x0419600, 0x0419680, indexJojos51RSoul, indexJojos51Character_VsSuper },
    { "Rubber Soul Challenger B", 0x0419680, 0x0419700, indexJojos51RSoul, indexJojos51Character_Challenger },
    { "Rubber Soul Select / Winning B", 0x0419700, 0x0419780, indexJojos51RSoul, indexJojos51Character_SelectWin1 },
    { "Rubber Soul Burning B (1/2)", 0x035d580, 0x035d600, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { "Rubber Soul Burning B (2/2)", 0x035d600, 0x035d680, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { "Rubber Soul Tech/Zap B (1/2)", 0x0371d80, 0x0371e00, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { "Rubber Soul Tech/Zap B (2/2)", 0x0371e00, 0x0371e80, indexJojos51RSoul, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_RSOUL_C[] =
{
    { "Rubber Soul C", 0x0371a00, 0x0371a80, indexJojos51RSoul },
    { "Rubber Child TF C", 0x0372180, 0x0372200, indexJojos51RSoul, 1 },
    { "Rubber Soul Vs / Super C", 0x041e400, 0x041e480, indexJojos51RSoul, indexJojos51Character_VsSuper },
    { "Rubber Soul Challenger C", 0x041e480, 0x041e500, indexJojos51RSoul, indexJojos51Character_Challenger },
    { "Rubber Soul Select / Winning C", 0x041e500, 0x041e580, indexJojos51RSoul, indexJojos51Character_SelectWin1 },
    { "Rubber Soul Burning C (1/2)", 0x0371a80, 0x0371b00, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { "Rubber Soul Burning C (2/2)", 0x0371b00, 0x0371b80, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { "Rubber Soul Tech/Zap C (1/2)", 0x0386280, 0x0386300, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { "Rubber Soul Tech/Zap C (2/2)", 0x0386300, 0x0386380, indexJojos51RSoul, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_RSOUL_S[] =
{
    { "Rubber Soul S", 0x0385f00, 0x0385f80, indexJojos51RSoul },
    { "Rubber Child TF S", 0x0386680, 0x0386700, indexJojos51RSoul, 1 },
    { "Rubber Soul Vs / Super S", 0x0423200, 0x0423280, indexJojos51RSoul, indexJojos51Character_VsSuper },
    { "Rubber Soul Challenger S", 0x0423280, 0x0423300, indexJojos51RSoul, indexJojos51Character_Challenger },
    { "Rubber Soul Select / Winning S", 0x0423300, 0x0423380, indexJojos51RSoul, indexJojos51Character_SelectWin1 },
    { "Rubber Soul Burning S (1/2)", 0x0385f80, 0x0386000, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { "Rubber Soul Burning S (2/2)", 0x0386000, 0x0386080, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { "Rubber Soul Tech/Zap S (1/2)", 0x039a780, 0x039a800, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { "Rubber Soul Tech/Zap S (2/2)", 0x039a800, 0x039a880, indexJojos51RSoul, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_RSOUL_Start[] =
{
    { "Rubber Soul Start", 0x039a400, 0x039a480, indexJojos51RSoul },
    { "Rubber Child TF Start", 0x039ab80, 0x039ac00, indexJojos51RSoul, 1 },
    { "Rubber Soul Vs / Super Start", 0x0428000, 0x0428080, indexJojos51RSoul, indexJojos51Character_VsSuper },
    { "Rubber Soul Challenger Start", 0x0428080, 0x0428100, indexJojos51RSoul, indexJojos51Character_Challenger },
    { "Rubber Soul Select / Winning Start", 0x0428100, 0x0428180, indexJojos51RSoul, indexJojos51Character_SelectWin1 },
    { "Rubber Soul Burning Start (1/2)", 0x039a480, 0x039a500, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { "Rubber Soul Burning Start (2/2)", 0x039a500, 0x039a580, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { "Rubber Soul Tech/Zap Start (1/2)", 0x03aec80, 0x03aed00, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { "Rubber Soul Tech/Zap Start (2/2)", 0x03aed00, 0x03aed80, indexJojos51RSoul, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_KHAN_A[] =
{
    { "Khan A", 0x0349c80, 0x0349d00, indexJojos51Khan },
    { "Khan's Intro Anubis A", 0x034a600, 0x034a620, indexJojos51Khan, 1 },
    { "Khan's Counter Anubis A", 0x034a780, 0x034a7a0, indexJojos51Khan, 2 },
    { "Khan's Special Slash A", 0x034a700, 0x034a720, indexJojos51Khan, 8 },
    { "Khan Sword Slashes/Counter/Tech/Zap A (1/2)", 0x034a000, 0x034a080, indexJojos51Khan, 6 },
    { "Khan Sword Slashes/Counter/Tech/Zap A (2/2)", 0x034a080, 0x034a100, indexJojos51Khan, 6 },
    { "Khan Vs/Super A", 0x0414b00, 0x0414b80, indexJojos51Khan, indexJojos51Character_VsSuper },
    { "Khan Challenger A", 0x0414b80, 0x0414c00, indexJojos51Khan, indexJojos51Character_Challenger },
    { "Khan Select/Winning A", 0x0414c00, 0x0414c80, indexJojos51Khan, indexJojos51Character_SelectWin1 },
    { "Khan Burning A (1/2)", 0x0349d00, 0x0349d80, indexJojos51Khan, indexJojos51Character_BurnZap },
    { "Khan Burning A (2/2)", 0x0349d80, 0x0349e00, indexJojos51Khan, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_KHAN_B[] =
{
    { "Khan B", 0x035e180, 0x035e200, indexJojos51Khan },
    { "Khan's Intro Anubis B", 0x035eb00, 0x035eb20, indexJojos51Khan, 1 },
    { "Khan's Counter Anubis B", 0x035ec80, 0x035eca0, indexJojos51Khan, 2 },
    { "Khan's Special Slash B", 0x035ec00, 0x035ec20, indexJojos51Khan, 8 },
    { "Khan Sword Slashes/Counter/Tech/Zap B (1/2)", 0x035e500, 0x035e580, indexJojos51Khan, 6 },
    { "Khan Sword Slashes/Counter/Tech/Zap B (2/2)", 0x035e580, 0x035e600, indexJojos51Khan, 6 },
    { "Khan Vs/Super B", 0x0419900, 0x0419980, indexJojos51Khan, indexJojos51Character_VsSuper },
    { "Khan Challenger B", 0x0419980, 0x0419a00, indexJojos51Khan, indexJojos51Character_Challenger },
    { "Khan Select/Winning B", 0x0419a00, 0x0419a80, indexJojos51Khan, indexJojos51Character_SelectWin1 },
    { "Khan Burning B (1/2)", 0x035e200, 0x035e280, indexJojos51Khan, indexJojos51Character_BurnZap },
    { "Khan Burning B (2/2)", 0x035e280, 0x035e300, indexJojos51Khan, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_KHAN_C[] =
{
    { "Khan C", 0x0372680, 0x0372700, indexJojos51Khan },
    { "Khan's Intro Anubis C", 0x0373000, 0x0373020, indexJojos51Khan, 1 },
    { "Khan's Counter Anubis C", 0x0373180, 0x03731a0, indexJojos51Khan, 2 },
    { "Khan's Special Slash C", 0x0373100, 0x0373120, indexJojos51Khan, 8 },
    { "Khan Sword Slashes/Counter/Tech/Zap C (1/2)", 0x0372a00, 0x0372a80, indexJojos51Khan, 6 },
    { "Khan Sword Slashes/Counter/Tech/Zap C (2/2)", 0x0372a80, 0x0372b00, indexJojos51Khan, 6 },
    { "Khan Vs/Super C", 0x041e700, 0x041e780, indexJojos51Khan, indexJojos51Character_VsSuper },
    { "Khan Challenger C", 0x041e780, 0x041e800, indexJojos51Khan, indexJojos51Character_Challenger },
    { "Khan Select/Winning C", 0x041e800, 0x041e880, indexJojos51Khan, indexJojos51Character_SelectWin1 },
    { "Khan Burning C (1/2)", 0x0372700, 0x0372780, indexJojos51Khan, indexJojos51Character_BurnZap },
    { "Khan Burning C (2/2)", 0x0372780, 0x0372800, indexJojos51Khan, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_KHAN_S[] =
{
    { "Khan S", 0x0386b80, 0x0386c00, indexJojos51Khan },
    { "Khan's Intro Anubis S", 0x0387500, 0x0387520, indexJojos51Khan, 1 },
    { "Khan's Counter Anubis S", 0x0387680, 0x03876a0, indexJojos51Khan, 2 },
    { "Khan's Special Slash S", 0x0387600, 0x0387620, indexJojos51Khan, 8 },
    { "Khan Sword Slashes/Counter/Tech/Zap S (1/2)", 0x0386f00, 0x0386f80, indexJojos51Khan, 6 },
    { "Khan Sword Slashes/Counter/Tech/Zap S (2/2)", 0x0386f80, 0x0387000, indexJojos51Khan, 6 },
    { "Khan Vs/Super S", 0x0423500, 0x0423580, indexJojos51Khan, indexJojos51Character_VsSuper },
    { "Khan Challenger S", 0x0423580, 0x0423600, indexJojos51Khan, indexJojos51Character_Challenger },
    { "Khan Select/Winning S", 0x0423600, 0x0423680, indexJojos51Khan, indexJojos51Character_SelectWin1 },
    { "Khan Burning S (1/2)", 0x0386c00, 0x0386c80, indexJojos51Khan, indexJojos51Character_BurnZap },
    { "Khan Burning S (2/2)", 0x0386c80, 0x0386d00, indexJojos51Khan, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_KHAN_Start[] =
{
    { "Khan Start", 0x039b080, 0x039b100, indexJojos51Khan },
    { "Khan's Intro Anubis Start", 0x039ba00, 0x039ba20, indexJojos51Khan, 1 },
    { "Khan's Counter Anubis Start", 0x039bb80, 0x039bba0, indexJojos51Khan, 2 },
    { "Khan's Special Slash Start", 0x039bb00, 0x039bb20, indexJojos51Khan, 8 },
    { "Khan Sword Slashes/Counter/Tech/Zap Start (1/2)", 0x039b400, 0x039b480, indexJojos51Khan, 6 },
    { "Khan Sword Slashes/Counter/Tech/Zap Start (2/2)", 0x039b480, 0x039b500, indexJojos51Khan, 6 },
    { "Khan Vs/Super Start", 0x0428300, 0x0428380, indexJojos51Khan, indexJojos51Character_VsSuper },
    { "Khan Challenger Start", 0x0428380, 0x0428400, indexJojos51Khan, indexJojos51Character_Challenger },
    { "Khan Select/Winning Start", 0x0428400, 0x0428480, indexJojos51Khan, indexJojos51Character_SelectWin1 },
    { "Khan Burning Start (1/2)", 0x039b100, 0x039b180, indexJojos51Khan, indexJojos51Character_BurnZap },
    { "Khan Burning Start (2/2)", 0x039b180, 0x039b200, indexJojos51Khan, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_NDOUL_A[] =
{
    { "N'Doul & Geb A", 0x033d480, 0x033d500, indexJojos51NDoul },
}; 

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_NDOUL_B[] =
{
    { "N'Doul & Geb B", 0x0351980, 0x0351a00, indexJojos51NDoul },
}; 

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_NDOUL_C[] =
{
    { "N'Doul & Geb C", 0x0365e80, 0x0365f00, indexJojos51NDoul },
}; 

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_NDOUL_S[] =
{
    { "N'Doul & Geb S", 0x037a380, 0x037a400, indexJojos51NDoul },
}; 

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_NDOUL_Start[] =
{
    { "N'Doul & Geb Start", 0x038e880, 0x038e900, indexJojos51NDoul },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BICE_A[] =
{
    { "Boss Ice A", 0x033fa00, 0x033fa80, indexJojos51BIce },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BICE_B[] =
{
    { "Boss Ice B", 0x0353f00, 0x0353f80, indexJojos51BIce },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BICE_C[] =
{
    { "Boss Ice C", 0x0368400, 0x0368480, indexJojos51BIce },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BICE_S[] =
{
    { "Boss Ice S", 0x037c900, 0x037c980, indexJojos51BIce },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BICE_Start[] =
{
    { "Boss Ice Start", 0x0390e00, 0x0390e80, indexJojos51BIce },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEATH13_A[] =
{
    { "Death 13 A", 0x0340680, 0x0340700, indexJojos51Death13 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEATH13_B[] =
{
    { "Death 13 B", 0x0354b80, 0x0354c00, indexJojos51Death13 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEATH13_C[] =
{
    { "Death 13 C", 0x0369080, 0x0369100, indexJojos51Death13 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEATH13_S[] =
{
    { "Death 13 S", 0x037d580, 0x037d600, indexJojos51Death13 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEATH13_Start[] =
{
    { "Death 13 Start", 0x0391a80, 0x0391b00, indexJojos51Death13 },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_JOTARO[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOTARO_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOTARO_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOTARO_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOTARO_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOTARO_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOTARO_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOTARO_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOTARO_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOTARO_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOTARO_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_HIEROPHANT[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIEROPHANT_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIEROPHANT_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIEROPHANT_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIEROPHANT_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIEROPHANT_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIEROPHANT_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIEROPHANT_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIEROPHANT_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIEROPHANT_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIEROPHANT_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_AVDOL[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_AVDOL_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_AVDOL_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_AVDOL_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_AVDOL_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_AVDOL_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_AVDOL_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_AVDOL_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_AVDOL_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_AVDOL_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_AVDOL_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_POL[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_POL_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_POL_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_POL_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_POL_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_POL_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_POL_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_POL_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_POL_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_POL_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_POL_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_JOSEPH[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOSEPH_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOSEPH_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOSEPH_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOSEPH_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOSEPH_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOSEPH_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOSEPH_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOSEPH_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOSEPH_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOSEPH_Start) },
    { "Shared", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOSEPH_Shared, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOSEPH_Shared) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_IGGY[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_IGGY_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_IGGY_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_IGGY_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_IGGY_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_IGGY_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_IGGY_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_IGGY_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_IGGY_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_IGGY_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_IGGY_Start) },
    { "Shared", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_IGGY_Shared, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_IGGY_Shared) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_ALESSI[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_ALESSI_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_ALESSI_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_ALESSI_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_ALESSI_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_ALESSI_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_ALESSI_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_ALESSI_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_ALESSI_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_ALESSI_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_ALESSI_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_CHAKA[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_CHAKA_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_CHAKA_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_CHAKA_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_CHAKA_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_CHAKA_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_CHAKA_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_CHAKA_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_CHAKA_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_CHAKA_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_CHAKA_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_DEVOEBONY[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEVOEBONY_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEVOEBONY_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEVOEBONY_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEVOEBONY_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEVOEBONY_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEVOEBONY_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEVOEBONY_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEVOEBONY_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEVOEBONY_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEVOEBONY_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_MIDLER[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MIDLER_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MIDLER_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MIDLER_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MIDLER_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MIDLER_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MIDLER_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MIDLER_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MIDLER_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MIDLER_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MIDLER_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_DIO[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DIO_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DIO_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DIO_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DIO_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DIO_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DIO_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DIO_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DIO_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DIO_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DIO_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_SDIO[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SDIO_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SDIO_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SDIO_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SDIO_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SDIO_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SDIO_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SDIO_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SDIO_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SDIO_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SDIO_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_YJOSEPH[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_YJOSEPH_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_YJOSEPH_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_YJOSEPH_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_YJOSEPH_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_YJOSEPH_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_YJOSEPH_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_YJOSEPH_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_YJOSEPH_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_YJOSEPH_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_YJOSEPH_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_HOL[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOL_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOL_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOL_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOL_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOL_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOL_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOL_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOL_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOL_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOL_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_VICE[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_VICE_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_VICE_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_VICE_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_VICE_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_VICE_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_VICE_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_VICE_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_VICE_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_VICE_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_VICE_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_HIERO[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIERO_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIERO_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIERO_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIERO_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIERO_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIERO_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIERO_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIERO_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIERO_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIERO_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_BPOL[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BPOL_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BPOL_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BPOL_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BPOL_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BPOL_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BPOL_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BPOL_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BPOL_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BPOL_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BPOL_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_SHOP[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SHOP_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SHOP_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SHOP_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SHOP_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SHOP_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SHOP_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SHOP_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SHOP_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SHOP_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SHOP_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_MARIAH[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MARIAH_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MARIAH_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MARIAH_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MARIAH_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MARIAH_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MARIAH_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MARIAH_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MARIAH_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MARIAH_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MARIAH_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_HOLBOINGO[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOLBOINGO_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOLBOINGO_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOLBOINGO_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOLBOINGO_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOLBOINGO_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOLBOINGO_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOLBOINGO_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOLBOINGO_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOLBOINGO_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOLBOINGO_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_RSOUL[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_RSOUL_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_RSOUL_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_RSOUL_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_RSOUL_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_RSOUL_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_RSOUL_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_RSOUL_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_RSOUL_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_RSOUL_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_RSOUL_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_KHAN[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_KHAN_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_KHAN_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_KHAN_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_KHAN_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_KHAN_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_KHAN_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_KHAN_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_KHAN_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_KHAN_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_KHAN_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_NDOUL[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_NDOUL_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_NDOUL_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_NDOUL_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_NDOUL_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_NDOUL_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_NDOUL_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_NDOUL_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_NDOUL_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_NDOUL_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_NDOUL_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_BICE[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BICE_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BICE_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BICE_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BICE_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BICE_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BICE_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BICE_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BICE_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BICE_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BICE_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_DEATH13[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEATH13_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEATH13_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEATH13_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEATH13_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEATH13_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEATH13_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEATH13_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEATH13_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEATH13_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEATH13_Start) },
};

#pragma endregion Jojo_Characters

#pragma region Bonus

// Note that this is intentionally sorted: don't alphabetize
const sGame_PaletteDataset JOJOS_BONUS_MENU_PALETTES[] =
{
    { "Mode Select Frame", 0x030d4e0, 0x030d500 },
    // { "Mode Select Text", 0x0311a90, 0x0311aa0 }, Duplicate of the Game Over Text range
    { "Challenge & Story signs", 0x030d480, 0x030d4c0 },
    { "Character Select Background", 0x0310100, 0x0310160 },
    { "Selector Rings", 0x0310080, 0x03100c0 },
    { "Character Select Comic", 0x0310000, 0x0310080 },
    { "Extra characters page arrows", 0x0310500, 0x0310540 },
    { "Vs screen Background", 0x030d000, 0x030d080 },
    { "Win screen Background", 0x0310200, 0x0310280 },
    { "D'Arby", 0x0311a00, 0x0311a80 },
    { "Darby Chips", 0x0311d00, 0x0311d80 },
    { "Osiris Arms", 0x0311b80, 0x0311c00 },
    { "Osiris Body", 0x0311b00, 0x0311b80 },
    { "Game Over Text", 0x0311a80, 0x0311b00 },
};

const sGame_PaletteDataset JOJOS_BONUS_INTRO_PALETTES[] =
{
    { "Capcom Presents (text under intro logo)", 0x030b040, 0x030b060 },
    { "Capcom logo",            0x030b080, 0x030b0a0 },
    { "Capcom Backgrounds",     0x030C300, 0x030C340 },
    { "Hol Horse intro Body",   0x030c600, 0x030c680 },
    { "Hol Horse intro Hand",   0x030c580, 0x030c600 },
    { "Hol Horse shoot scene",  0x030C400, 0x030C480 },
#ifdef USE_LARGE_PALETTES
    { "Hol Horse intro background", 0x030bb00, 0x030be00 },
#else
    { "Hol Horse intro background (1/6)", 0x030bb00, 0x030bb80 },
    { "Hol Horse intro background (2/6)", 0x030bb80, 0x030bc00 },
    { "Hol Horse intro background (3/6)", 0x030bc00, 0x030bc80 },
    { "Hol Horse intro background (4/6)", 0x030bc80, 0x030bd00 },
    { "Hol Horse intro background (5/6)", 0x030bd00, 0x030bd80 },
    { "Hol Horse intro background (6/6)", 0x030bd80, 0x030be00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Hol Horse intro ender background", 0x030be00, 0x030c300 },
#else
    { "Hol Horse intro ender background (1/10)", 0x030be00, 0x030be80 },
    { "Hol Horse intro ender background (2/10)", 0x030be80, 0x030bf00 },
    { "Hol Horse intro ender background (3/10)", 0x030bf00, 0x030bf80 },
    { "Hol Horse intro ender background (4/10)", 0x030bf80, 0x030c000 },
    { "Hol Horse intro ender background (5/10)", 0x030c000, 0x030c080 },
    { "Hol Horse intro ender background (6/10)", 0x030c080, 0x030c100 },
    { "Hol Horse intro ender background (7/10)", 0x030c100, 0x030c180 },
    { "Hol Horse intro ender background (8/10)", 0x030c180, 0x030c200 },
    { "Hol Horse intro ender background (9/10)", 0x030c200, 0x030c280 },
    { "Hol Horse intro ender background (10/10)", 0x030c280, 0x030c300 },
#endif
    { "Vanilla Ice intro",      0x030ba00, 0x030ba80 },
    { "Cream intro",            0x030ba80, 0x030bb00 },
#ifdef USE_LARGE_PALETTES
    { "Vice intro background", 0x030b100, 0x030b780 },
#else
    { "Vice intro background (1/13)", 0x030b100, 0x030b180 },
    { "Vice intro background (2/13)", 0x030b180, 0x030b200 },
    { "Vice intro background (3/13)", 0x030b200, 0x030b280 },
    { "Vice intro background (4/13)", 0x030b280, 0x030b300 },
    { "Vice intro background (5/13)", 0x030b300, 0x030b380 },
    { "Vice intro background (6/13)", 0x030b380, 0x030b400 },
    { "Vice intro background (7/13)", 0x030b400, 0x030b480 },
    { "Vice intro background (8/13)", 0x030b480, 0x030b500 },
    { "Vice intro background (9/13)", 0x030b500, 0x030b580 },
    { "Vice intro background (10/13)", 0x030b580, 0x030b600 },
    { "Vice intro background (11/13)", 0x030b600, 0x030b680 },
    { "Vice intro background (12/13)", 0x030b680, 0x030b700 },
    { "Vice intro background (13/13)", 0x030b700, 0x030b780 },
#endif
    { "Vice Intro Ender",       0x030c380, 0x030c400 },
#ifndef USE_LARGE_PALETTES
    { "Intro Manga Panels (1/5)", 0x030b780, 0x030b800 },
    { "Intro Manga Panels (2/5)", 0x030b800, 0x030b880 },
    { "Intro Manga Panels (3/5)", 0x030b880, 0x030b900 },
    { "Intro Manga Panels (4/5)", 0x030b900, 0x030b980 },
    { "Intro Manga Panels (5/5)", 0x030b980, 0x030ba00 },
#else
    { "Intro Manga Panels", 0x030b780, 0x030ba00 },
#endif
    { "Title Screen DIO",       0x030c500, 0x030c580 },
    { "Title Screen DIO Fade 1", 0x030C780, 0x030C800 },
    { "Title Screen DIO Fade 2", 0x030C800, 0x030C880 },
    { "Title Screen DIO Fade 3", 0x030C880, 0x030C900 },
    { "Title Screen DIO Manga", 0x030c900, 0x030c980 },
    { "Title Screen Jotaro",    0x030c480, 0x030c500 },
    { "Title Screen Jotaro Fade 1", 0x030C980, 0x030CA00 },
    { "Title Screen Jotaro Fade 2", 0x030CA00, 0x030CA80 },
    { "Title Screen Jotaro Fade 3", 0x030CA80, 0x030CB00 },
    { "Title Screen Jotaro Manga", 0x030cb00, 0x030cb80 },
    { "Title Screen Logo",      0x030c680, 0x030c700 },
    { "Title Screen Logo Ribbon", 0x030c700, 0x030c780 },
    { "English Title", 0x030CB80, 0x030CC00 },
    { "Title Screen Background", 0x030b0a0, 0x030b0b0 },
    { "World Map",              0x0313780, 0x0313800 },
};

const sGame_PaletteDataset JOJOS_BONUS_INGAME_PALETTES[] =
{
    { "Aja Stone", 0x0335800, 0x0335820 },
    { "Blood (Sdio grab, bpol grab,etc)", 0x0335878, 0x0335880 },
    { "Super Flash / Zap Effects", 0x0335840, 0x0335860 },
    { "Blocksparks", 0x03358d0, 0x03358e0 },
    { "Hitsparks & Pushblock", 0x0335820, 0x0335840 },
    { "Super Hitsparks", 0x03359c0, 0x03359e0 /*, indexJojos51Bonus, 0x00 */}, // temp bug
    { "Tandem Background", 0x030d900, 0x030d980 },
    { "Stand Clash Background", 0x030d100, 0x030d180 },
    { "Stand Crash Mask Background", 0x030cec0, 0x030cf00, indexJojos51Bonus, 0x0 },
    { "Stand Crash Mask Background 2", 0x030CF40, 0x030CF80, indexJojos51Bonus, 0x0 },
    { "Raging Demon Background", 0x030d180, 0x030d200 },
    { "Super KO Background", 0x030d080, 0x030d100 },
    { "Super KO Portrait", 0x030ce80, 0x030cec0, indexJojos51Bonus, 0x6 },
    { "Super KO Portrait Holes/Blood", 0x030CF80, 0x030CFC0, indexJojos51Bonus, 0x7 },
    { "\"Round 1,2,3\" Text", 0x030ce00, 0x030ce60 },
    { "\"Fight\" & \"Down\" Text", 0x030cd80, 0x030ce00, indexJojos51Bonus, 0x1 },
    { "\"LOSE\"", 0x030cce0, 0x030cd00, indexJojos51Bonus, 0x2 },
    { "\"KO\"", 0x030cd20, 0x030cd40, indexJojos51Bonus, 0x3 },
    { "\"PERFECT\"", 0X030CD40, 0X030CD60, indexJojos51Bonus, 0x4 },
    { "\"Retired\"", 0x030CC20, 0x030CC40, indexJojos51Bonus, 0x5 },
    { "VS screen text", 0x030d400, 0x030d440 },
    { "Win text (character)", 0x030cc40, 0x030cc60 },
    { "Win text (WIN)", 0x030cca0, 0x030ccc0 },

    { "Double Ko", 0x030CD60, 0x030CD80 },
    { "Draw", 0x030CC80, 0x030CCA0 },
    { "Time Up", 0x030CCC0, 0x030CCE0 },
    { "Stand Summon & Tandem Aura", 0x0335920, 0x0335940 },
    { "S.Dio 2c Stone & Requiem Zzz", 0x0335940, 0x0335980 },
    { "Base Char Dust & Floor Bounce", 0x0335B40, 0x0335B60 },
    { "Extra Char Dust & Floor Bounce", 0x0335860, 0x0335878 },
    { "Story Mode Metal Objects", 0x0335B20, 0x0335B40 },
    { "Speedwagon Pilot & Khan Dust", 0x0335880, 0x03358A0 },
    { "Chaka s.236a/236aa Effects", 0x03358E0, 0x0335900 },
    { "Some Floor Effect", 0x0335900, 0x0335920 },
    { "Here Comes A New Challenger", 0x030CD00, 0x030CD20 },
    { "Story Mode Episodes Text", 0x030CC00, 0x030CC20 },
};

const sGame_PaletteDataset JOJOS_A_BONUS_NODE_SUPERBACKGROUND[] =
{
#ifndef USE_LARGE_PALETTES
    { "Super Flash Background (Challenge Screen / Demo) (1/8)", 0x030d500, 0x030d580 },
    { "Super Flash Background (Challenge Screen / Demo) (2/8)", 0x030d580, 0x030d600 },
    { "Super Flash Background (Challenge Screen / Demo) (3/8)", 0x030d600, 0x030d680 },
    { "Super Flash Background (Challenge Screen / Demo) (4/8)", 0x030d680, 0x030d700 },
    { "Super Flash Background (Challenge Screen / Demo) (5/8)", 0x030d700, 0x030d780 },
    { "Super Flash Background (Challenge Screen / Demo) (6/8)", 0x030d780, 0x030d800 },
    { "Super Flash Background (Challenge Screen / Demo) (7/8)", 0x030d800, 0x030d880 },
    { "Super Flash Background (Challenge Screen / Demo) (8/8)", 0x030d880, 0x030d900 },
#else
    { "Super Flash Background (Challenge Screen / Demo)", 0x030d500, 0x030d900 },
#endif
};

const sGame_PaletteDataset JOJOS_BONUS_NODE_FADEBACKGROUND[] =
{
#ifndef USE_LARGE_PALETTES
    { "Fade Background (1/29)", 0x030f080, 0x030f100 },
    { "Fade Background (2/29)", 0x030f100, 0x030f180 },
    { "Fade Background (3/29)", 0x030f180, 0x030f200 },
    { "Fade Background (4/29)", 0x030f200, 0x030f280 },
    { "Fade Background (5/29)", 0x030f280, 0x030f300 },
    { "Fade Background (6/29)", 0x030f300, 0x030f380 },
    { "Fade Background (7/29)", 0x030f380, 0x030f400 },
    { "Fade Background (8/29)", 0x030f400, 0x030f480 },
    { "Fade Background (9/29)", 0x030f480, 0x030f500 },
    { "Fade Background (10/29)", 0x030f500, 0x030f580 },
    { "Fade Background (11/29)", 0x030f580, 0x030f600 },
    { "Fade Background (12/29)", 0x030f600, 0x030f680 },
    { "Fade Background (13/29)", 0x030f680, 0x030f700 },
    { "Fade Background (14/29)", 0x030f700, 0x030f780 },
    { "Fade Background (15/29)", 0x030f780, 0x030f800 },
    { "Fade Background (16/29)", 0x030f800, 0x030f880 },
    { "Fade Background (17/29)", 0x030f880, 0x030f900 },
    { "Fade Background (18/29)", 0x030f900, 0x030f980 },
    { "Fade Background (19/29)", 0x030f980, 0x030fa00 },
    { "Fade Background (20/29)", 0x030fa00, 0x030fa80 },
    { "Fade Background (21/29)", 0x030fa80, 0x030fb00 },
    { "Fade Background (22/29)", 0x030fb00, 0x030fb80 },
    { "Fade Background (23/29)", 0x030fb80, 0x030fc00 },
    { "Fade Background (24/29)", 0x030fc00, 0x030fc80 },
    { "Fade Background (25/29)", 0x030fc80, 0x030fd00 },
    { "Fade Background (26/29)", 0x030fd00, 0x030fd80 },
    { "Fade Background (27/29)", 0x030fd80, 0x030fe00 },
    { "Fade Background (28/29)", 0x030fe00, 0x030fe80 },
    { "Fade Background (29/29)", 0x030fe80, 0x030ff00 },
#else
    { "Fade Background", 0x030f080, 0x030ff00 },
#endif
};

const sGame_PaletteDataset JOJOS_BONUS_NODE_INTRO_MANGA[] =
{
#ifndef USE_LARGE_PALETTES
    { "Intro Manga Panels (1/5)", 0x030b780, 0x030b800 },
    { "Intro Manga Panels (2/5)", 0x030b800, 0x030b880 },
    { "Intro Manga Panels (3/5)", 0x030b880, 0x030b900 },
    { "Intro Manga Panels (4/5)", 0x030b900, 0x030b980 },
    { "Intro Manga Panels (5/5)", 0x030b980, 0x030ba00 },
#else
    { "Intro Manga Panels", 0x030b780, 0x030ba00 },
#endif
};

const sGame_PaletteDataset JOJOS_BONUS_TAROT_CARDS[] =
{
#ifdef FUN_COMMENT
    string: "I say we should wait until we have more of them before adding to the program (also midler is annoying)
             I know a few people are figuring those out"
#endif
    //{ "Coffin Scene: Crusaders ", 0x02eb680, 0x02eb880 },
    //{ "Jotaro Story: Imprisoned Jotaro", 0x02E8400, 0x02E8500? },
    //{ "Jotaro Story: Scared Holly", 0x02e8380, 0x02E8400 },
    //{ "Joseph Story: \"Let's Go!\" ", 0x02e7600, 0x02e7800 },
    //{ "Midler Story Ending", 0x02E6300, 0x02E6500 },

    { "Menu Cards", 0x030db40, 0x030db80 },
    //{ "Card Backs", 0x030DB00, 0x030DB40 },
    { "Star Platinum Light Menu Card", 0x030DB80, 0x030DC00 },
    { "Star Platinum Menu Card", 0x030DC00, 0x030DC80 },
    { "Hierophant Light Menu Card", 0x030DC80, 0x030DD00 },
    { "Hierophant Menu", 0x030DD00, 0x030DD80 },
    { "Magician's Red Light Menu Card", 0x030DD80, 0x030DE00 },
    { "Magician's Red Menu Card", 0x030DE00, 0x030DE80 },
    { "Silver Chariot Light Menu Card", 0x030DE80, 0x030DF00 },
    { "Silver Chariot Menu Card", 0x030DF00, 0x030DF80 },
    { "The Hermit Light Menu Card", 0x030DF80, 0x030E000 },
    { "The Hermit Menu Card", 0x030E000, 0x030E080 },
    { "The Fool Light Menu Card", 0x030E080, 0x030E100 },
    { "The Fool Menu Card", 0x030E100, 0x030E180 },
    { "Sethan Light Menu Card", 0x030E180, 0x030E200 },
    { "Sethan Menu Card", 0x030E200, 0x030E280 },
    { "Anubis Light Menu Card", 0x030E280, 0x030E300 },
    { "Anubis Menu Card", 0x030E300, 0x030E380 },
    { "The Devil Light Menu Card", 0x030E380, 0x030E400 },
    { "The Devil Menu Card", 0x030E400, 0x030E480 },
    { "Geb Light Menu Card", 0x030E480, 0x030E500 },
    { "Geb Menu Card", 0x030E500, 0x030E580 },
    { "High Priestess Light Menu Card", 0x030E580, 0x030E600 },
    { "High Priestess Menu Card", 0x030E600, 0x030E680 },
    { "The Tower Light Menu Card", 0x030E680, 0x030E700 },
    { "The Tower Menu Card", 0x030E700, 0x030E780 },
    { "The Emperor Light Menu Card", 0x030E780, 0x030E800 },
    { "The Emperor Menu Card", 0x030E800, 0x030E880 },
    { "Hanged Man Light Menu Card", 0x030E880, 0x030E900 },
    { "Hanged Man Menu Card", 0x030E900, 0x030E980 },
    { "Death 13 Light Menu Card", 0x030E980, 0x030EA00 },
    { "Death 13 Menu Card", 0x030EA00, 0x030EA80 },
    { "Judgement Light Menu Card", 0x030EA80, 0x030EB00 },
    { "Judgement Menu Card", 0x030EB00, 0x030EB80 },
    { "Justice Light Menu Card", 0x030EB80, 0x030EC00 },
    { "Justice Menu Card", 0x030EC00, 0x030EC80 },
    { "Horus Light Menu Card", 0x030EC80, 0x030ED00 },
    { "Horus Menu Card", 0x030ED00, 0x030ED80 },
    { "Cream Light Menu Card", 0x030ED80, 0x030EE00 },
    { "Cream Menu Card", 0x030EE00, 0x030EE80 },
    { "The World Light Menu Card", 0x030EE80, 0x030EF00 },
    { "The World Menu Card", 0x030EF00, 0x030EF80 },
};

const sDescTreeNode JOJOS_A_BONUS_COLLECTION[]
{
    { "Intro", DESC_NODETYPE_TREE, (void*)JOJOS_BONUS_INTRO_PALETTES, ARRAYSIZE(JOJOS_BONUS_INTRO_PALETTES) },
    { "Menu", DESC_NODETYPE_TREE, (void*)JOJOS_BONUS_MENU_PALETTES, ARRAYSIZE(JOJOS_BONUS_MENU_PALETTES) },
    { "In Game", DESC_NODETYPE_TREE, (void*)JOJOS_BONUS_INGAME_PALETTES, ARRAYSIZE(JOJOS_BONUS_INGAME_PALETTES) },
    { "Fade Background (Challenge Screen / Demo)", DESC_NODETYPE_TREE, (void*)JOJOS_BONUS_NODE_FADEBACKGROUND, ARRAYSIZE(JOJOS_BONUS_NODE_FADEBACKGROUND) },
    // Pushing these directly into INTRO
    //{ "Intro Manga Panels", DESC_NODETYPE_TREE, (void*)JOJOS_BONUS_NODE_INTRO_MANGA, ARRAYSIZE(JOJOS_BONUS_NODE_INTRO_MANGA) },
    { "Super Screen Background", DESC_NODETYPE_TREE, (void*)JOJOS_A_BONUS_NODE_SUPERBACKGROUND, ARRAYSIZE(JOJOS_A_BONUS_NODE_SUPERBACKGROUND) },
    { "Tarot Cards", DESC_NODETYPE_TREE, (void*)JOJOS_BONUS_TAROT_CARDS, ARRAYSIZE(JOJOS_BONUS_TAROT_CARDS) },
};

#pragma endregion Bonus

#pragma region Timestop
const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_ALOCKUP[] =
{
#ifndef USE_LARGE_PALETTES
    { "A Lockup TS (1/7)", 0x02d0000, 0x02d0200 },
    { "A Lockup TS (2/7)", 0x02d0200, 0x02d0400 },
    { "A Lockup TS (3/7)", 0x02d0400,  0x02d0600 },
    { "A Lockup TS (4/7)", 0x02d0600, 0x02d0800 },
    { "A Lockup TS (5/7)", 0x02d0800, 0x02d0a00 },
    { "A Lockup TS (6/7)", 0x02d0a00, 0x02d0c00 },
    { "A Lockup TS (7/7)", 0x02d0c00, 0x02d0d80 },
#else
    { "A Lockup TS", 0x02d0000, 0x02d0d80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_HEALTH[] =
{
#ifndef USE_LARGE_PALETTES
    { "A Health Room TS (1/22)", 0x02d0e00, 0x02d0e80 },
    { "A Health Room TS (2/22)", 0x02d0e80, 0x02d0f00 },
    { "A Health Room TS (3/22)", 0x02d0f00, 0x02d0f80 },
    { "A Health Room TS (4/22)", 0x02d0f80, 0x02d1000 },
    { "A Health Room TS (5/22)", 0x02d1000, 0x02d1080 },
    { "A Health Room TS (6/22)", 0x02d1080, 0x02d1100 },
    { "A Health Room TS (7/22)", 0x02d1100, 0x02d1180 },
    { "A Health Room TS (8/22)", 0x02d1180, 0x02d1200 },
    { "A Health Room TS (9/22)", 0x02d1200, 0x02d1280 },
    { "A Health Room TS (10/22)", 0x02d1280, 0x02d1300 },
    { "A Health Room TS (11/22)", 0x02d1300, 0x02d1380 },
    { "A Health Room TS (12/22)", 0x02d1380, 0x02d1400 },
    { "A Health Room TS (13/22)", 0x02d1400, 0x02d1480 },
    { "A Health Room TS (14/22)", 0x02d1480, 0x02d1500 },
    { "A Health Room TS (15/22)", 0x02d1500, 0x02d1580 },
    { "A Health Room TS (16/22)", 0x02d1580, 0x02d1600 },
    { "A Health Room TS (17/22)", 0x02d1600, 0x02d1680 },
    { "A Health Room TS (18/22)", 0x02d1680, 0x02d1700 },
    { "A Health Room TS (19/22)", 0x02d1700, 0x02d1780 },
    { "A Health Room TS (20/22)", 0x02d1780, 0x02d1800 },
    { "A Health Room TS (21/22)", 0x02d1800, 0x02d1880 },
    { "A Health Room TS (22/22)", 0x02d1880, 0x02d1900 },
#else
    { "A Health Room TS", 0x02d0e00, 0x02d1900 },
#endif
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_AIRPLANE[] =
{
#ifndef USE_LARGE_PALETTES
    { "In A Airplane TS (1/67)", 0x02d1a00, 0x02d1a80 },
    { "In A Airplane TS (2/67)", 0x02d1a80, 0x02d1b00 },
    { "In A Airplane TS (3/67)", 0x02d1b00, 0x02d1b80 },
    { "In A Airplane TS (4/67)", 0x02d1b80, 0x02d1c00 },
    { "In A Airplane TS (5/67)", 0x02d1c00, 0x02d1c80 },
    { "In A Airplane TS (6/67)", 0x02d1c80, 0x02d1d00 },
    { "In A Airplane TS (7/67)", 0x02d1d00, 0x02d1d80 },
    { "In A Airplane TS (8/67)", 0x02d1d80, 0x02d1e00 },
    { "In A Airplane TS (9/67)", 0x02d1e00, 0x02d1e80 },
    { "In A Airplane TS (10/67)", 0x02d1e80, 0x02d1f00 },
    { "In A Airplane TS (11/67)", 0x02d1f00, 0x02d1f80 },
    { "In A Airplane TS (12/67)", 0x02d1f80, 0x02d2000 },
    { "In A Airplane TS (13/67)", 0x02d2000, 0x02d2080 },
    { "In A Airplane TS (14/67)", 0x02d2080, 0x02d2100 },
    { "In A Airplane TS (15/67)", 0x02d2100, 0x02d2180 },
    { "In A Airplane TS (16/67)", 0x02d2180, 0x02d2200 },
    { "In A Airplane TS (17/67)", 0x02d2200, 0x02d2280 },
    { "In A Airplane TS (18/67)", 0x02d2280, 0x02d2300 },
    { "In A Airplane TS (19/67)", 0x02d2300, 0x02d2380 },
    { "In A Airplane TS (20/67)", 0x02d2380, 0x02d2400 },
    { "In A Airplane TS (21/67)", 0x02d2400, 0x02d2480 },
    { "In A Airplane TS (22/67)", 0x02d2480, 0x02d2500 },
    { "In A Airplane TS (23/67)", 0x02d2500, 0x02d2580 },
    { "In A Airplane TS (24/67)", 0x02d2580, 0x02d2600 },
    { "In A Airplane TS (25/67)", 0x02d2600, 0x02d2680 },
    { "In A Airplane TS (26/67)", 0x02d2680, 0x02d2700 },
    { "In A Airplane TS (27/67)", 0x02d2700, 0x02d2780 },
    { "In A Airplane TS (28/67)", 0x02d2780, 0x02d2800 },
    { "In A Airplane TS (29/67)", 0x02d2800, 0x02d2880 },
    { "In A Airplane TS (30/67)", 0x02d2880, 0x02d2900 },
    { "In A Airplane TS (31/67)", 0x02d2900, 0x02d2980 },
    { "In A Airplane TS (32/67)", 0x02d2980, 0x02d2a00 },
    { "In A Airplane TS (33/67)", 0x02d2a00, 0x02d2a80 },
    { "In A Airplane TS (34/67)", 0x02d2a80, 0x02d2b00 },
    { "In A Airplane TS (35/67)", 0x02d2b00, 0x02d2b80 },
    { "In A Airplane TS (36/67)", 0x02d2b80, 0x02d2c00 },
    { "In A Airplane TS (37/67)", 0x02d2c00, 0x02d2c80 },
    { "In A Airplane TS (38/67)", 0x02d2c80, 0x02d2d00 },
    { "In A Airplane TS (39/67)", 0x02d2d00, 0x02d2d80 },
    { "In A Airplane TS (40/67)", 0x02d2d80, 0x02d2e00 },
    { "In A Airplane TS (41/67)", 0x02d2e00, 0x02d2e80 },
    { "In A Airplane TS (42/67)", 0x02d2e80, 0x02d2f00 },
    { "In A Airplane TS (43/67)", 0x02d2f00, 0x02d2f80 },
    { "In A Airplane TS (44/67)", 0x02d2f80, 0x02d3000 },
    { "In A Airplane TS (45/67)", 0x02d3000, 0x02d3080 },
    { "In A Airplane TS (46/67)", 0x02d3080, 0x02d3100 },
    { "In A Airplane TS (47/67)", 0x02d3100, 0x02d3180 },
    { "In A Airplane TS (48/67)", 0x02d3180, 0x02d3200 },
    { "In A Airplane TS (49/67)", 0x02d3200, 0x02d3280 },
    { "In A Airplane TS (50/67)", 0x02d3280, 0x02d3300 },
    { "In A Airplane TS (51/67)", 0x02d3300, 0x02d3380 },
    { "In A Airplane TS (52/67)", 0x02d3380, 0x02d3400 },
    { "In A Airplane TS (53/67)", 0x02d3400, 0x02d3480 },
    { "In A Airplane TS (54/67)", 0x02d3480, 0x02d3500 },
    { "In A Airplane TS (55/67)", 0x02d3500, 0x02d3580 },
    { "In A Airplane TS (56/67)", 0x02d3580, 0x02d3600 },
    { "In A Airplane TS (57/67)", 0x02d3600, 0x02d3680 },
    { "In A Airplane TS (58/67)", 0x02d3680, 0x02d3700 },
    { "In A Airplane TS (59/67)", 0x02d3700, 0x02d3780 },
    { "In A Airplane TS (60/67)", 0x02d3780, 0x02d3800 },
    { "In A Airplane TS (61/67)", 0x02d3800, 0x02d3880 },
    { "In A Airplane TS (62/67)", 0x02d3880, 0x02d3900 },
    { "In A Airplane TS (63/67)", 0x02d3900, 0x02d3980 },
    { "In A Airplane TS (64/67)", 0x02d3980, 0x02d3a00 },
    { "In A Airplane TS (65/67)", 0x02d3a00, 0x02d3a80 },
    { "In A Airplane TS (66/67)", 0x02d3a80, 0x02d3b00 },
    { "In A Airplane TS (67/67)", 0x02d3b00, 0x02d3b80 },
#else
    { "In A Airplane TS", 0x02d1a00, 0x02d3b80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_TIGERBAUM[] =
{
#ifndef USE_LARGE_PALETTES
    { "Tigerbaum Garden TS (1/44)", 0x02d3c00, 0x02d3c80 },
    { "Tigerbaum Garden TS (2/44)", 0x02d3c80, 0x02d3d00 },
    { "Tigerbaum Garden TS (3/44)", 0x02d3d00, 0x02d3d80 },
    { "Tigerbaum Garden TS (4/44)", 0x02d3d80, 0x02d3e00 },
    { "Tigerbaum Garden TS (5/44)", 0x02d3e00, 0x02d3e80 },
    { "Tigerbaum Garden TS (6/44)", 0x02d3e80, 0x02d3f00 },
    { "Tigerbaum Garden TS (7/44)", 0x02d3f00, 0x02d3f80 },
    { "Tigerbaum Garden TS (8/44)", 0x02d3f80, 0x02d4000 },
    { "Tigerbaum Garden TS (9/44)", 0x02d4000, 0x02d4080 },
    { "Tigerbaum Garden TS (10/44)", 0x02d4080, 0x02d4100 },
    { "Tigerbaum Garden TS (11/44)", 0x02d4100, 0x02d4180 },
    { "Tigerbaum Garden TS (12/44)", 0x02d4180, 0x02d4200 },
    { "Tigerbaum Garden TS (13/44)", 0x02d4200, 0x02d4280 },
    { "Tigerbaum Garden TS (14/44)", 0x02d4280, 0x02d4300 },
    { "Tigerbaum Garden TS (15/44)", 0x02d4300, 0x02d4380 },
    { "Tigerbaum Garden TS (16/44)", 0x02d4380, 0x02d4400 },
    { "Tigerbaum Garden TS (17/44)", 0x02d4400, 0x02d4480 },
    { "Tigerbaum Garden TS (18/44)", 0x02d4480, 0x02d4500 },
    { "Tigerbaum Garden TS (19/44)", 0x02d4500, 0x02d4580 },
    { "Tigerbaum Garden TS (20/44)", 0x02d4580, 0x02d4600 },
    { "Tigerbaum Garden TS (21/44)", 0x02d4600, 0x02d4680 },
    { "Tigerbaum Garden TS (22/44)", 0x02d4680, 0x02d4700 },
    { "Tigerbaum Garden TS (23/44)", 0x02d4700, 0x02d4780 },
    { "Tigerbaum Garden TS (24/44)", 0x02d4780, 0x02d4800 },
    { "Tigerbaum Garden TS (25/44)", 0x02d4800, 0x02d4880 },
    { "Tigerbaum Garden TS (26/44)", 0x02d4880, 0x02d4900 },
    { "Tigerbaum Garden TS (27/44)", 0x02d4900, 0x02d4980 },
    { "Tigerbaum Garden TS (28/44)", 0x02d4980, 0x02d4a00 },
    { "Tigerbaum Garden TS (29/44)", 0x02d4a00, 0x02d4a80 },
    { "Tigerbaum Garden TS (30/44)", 0x02d4a80, 0x02d4b00 },
    { "Tigerbaum Garden TS (31/44)", 0x02d4b00, 0x02d4b80 },
    { "Tigerbaum Garden TS (32/44)", 0x02d4b80, 0x02d4c00 },
    { "Tigerbaum Garden TS (33/44)", 0x02d4c00, 0x02d4c80 },
    { "Tigerbaum Garden TS (34/44)", 0x02d4c80, 0x02d4d00 },
    { "Tigerbaum Garden TS (35/44)", 0x02d4d00, 0x02d4d80 },
    { "Tigerbaum Garden TS (36/44)", 0x02d4d80, 0x02d4e00 },
    { "Tigerbaum Garden TS (37/44)", 0x02d4e00, 0x02d4e80 },
    { "Tigerbaum Garden TS (38/44)", 0x02d4e80, 0x02d4f00 },
    { "Tigerbaum Garden TS (39/44)", 0x02d4f00, 0x02d4f80 },
    { "Tigerbaum Garden TS (40/44)", 0x02d4f80, 0x02d5000 },
    { "Tigerbaum Garden TS (41/44)", 0x02d5000, 0x02d5080 },
    { "Tigerbaum Garden TS (42/44)", 0x02d5080, 0x02d5100 },
    { "Tigerbaum Garden TS (43/44)", 0x02d5100, 0x02d5180 },
    { "Tigerbaum Garden TS (44/44)", 0x02d5180, 0x02d5200 },
#else
    { "Tigerbaum Garden TS", 0x02d3c00, 0x02d5200 },
#endif
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_HOTELD[] =
{
    { "Hotel (Devil) / New 2 TS (1/7)", 0x02d5300, 0x02d5500, indexJojos51Stages, 0x11 },
    { "Hotel (Devil) / New 2 TS (2/7)", 0x02d5500, 0x02d5700, indexJojos51Stages, 0x12 },
    { "Hotel (Devil) / New 2 TS (3/7)", 0x02d5700, 0x02d5900, indexJojos51Stages, 0x13 },
    { "Hotel (Devil) / New 2 TS (4/7)", 0x02d5900, 0x02d5b00, indexJojos51Stages, 0x14 },
    { "Hotel (Devil) / New 2 TS (5/7)", 0x02d5b00, 0x02d5d00, indexJojos51Stages, 0x15 },
    { "Hotel (Devil) / New 2 TS (6/7)", 0x02d5d00, 0x02d5f00, indexJojos51Stages, 0x16 },
    { "Hotel (Devil) / New 2 TS (7/7)", 0x02d5f00, 0x02d6000, indexJojos51Stages, 0x17 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_REMAINS[] =
{
#ifndef USE_LARGE_PALETTES
    { "Remains / New 1 TS (1/36)", 0x02d6100, 0x02d6180 },
    { "Remains / New 1 TS (2/36)", 0x02d6180, 0x02d6200 },
    { "Remains / New 1 TS (3/36)", 0x02d6200, 0x02d6280 },
    { "Remains / New 1 TS (4/36)", 0x02d6280, 0x02d6300 },
    { "Remains / New 1 TS (5/36)", 0x02d6300, 0x02d6380 },
    { "Remains / New 1 TS (6/36)", 0x02d6380, 0x02d6400 },
    { "Remains / New 1 TS (7/36)", 0x02d6400, 0x02d6480 },
    { "Remains / New 1 TS (8/36)", 0x02d6480, 0x02d6500 },
    { "Remains / New 1 TS (9/36)", 0x02d6500, 0x02d6580 },
    { "Remains / New 1 TS (10/36)", 0x02d6580, 0x02d6600 },
    { "Remains / New 1 TS (11/36)", 0x02d6600, 0x02d6680 },
    { "Remains / New 1 TS (12/36)", 0x02d6680, 0x02d6700 },
    { "Remains / New 1 TS (13/36)", 0x02d6700, 0x02d6780 },
    { "Remains / New 1 TS (14/36)", 0x02d6780, 0x02d6800 },
    { "Remains / New 1 TS (15/36)", 0x02d6800, 0x02d6880 },
    { "Remains / New 1 TS (16/36)", 0x02d6880, 0x02d6900 },
    { "Remains / New 1 TS (17/36)", 0x02d6900, 0x02d6980 },
    { "Remains / New 1 TS (18/36)", 0x02d6980, 0x02d6a00 },
    { "Remains / New 1 TS (19/36)", 0x02d6a00, 0x02d6a80 },
    { "Remains / New 1 TS (20/36)", 0x02d6a80, 0x02d6b00 },
    { "Remains / New 1 TS (21/36)", 0x02d6b00, 0x02d6b80 },
    { "Remains / New 1 TS (22/36)", 0x02d6b80, 0x02d6c00 },
    { "Remains / New 1 TS (23/36)", 0x02d6c00, 0x02d6c80 },
    { "Remains / New 1 TS (24/36)", 0x02d6c80, 0x02d6d00 },
    { "Remains / New 1 TS (25/36)", 0x02d6d00, 0x02d6d80 },
    { "Remains / New 1 TS (26/36)", 0x02d6d80, 0x02d6e00 },
    { "Remains / New 1 TS (27/36)", 0x02d6e00, 0x02d6e80 },
    { "Remains / New 1 TS (28/36)", 0x02d6e80, 0x02d6f00 },
    { "Remains / New 1 TS (29/36)", 0x02d6f00, 0x02d6f80 },
    { "Remains / New 1 TS (30/36)", 0x02d6f80, 0x02d7000 },
    { "Remains / New 1 TS (31/36)", 0x02d7000, 0x02d7080 },
    { "Remains / New 1 TS (32/36)", 0x02d7080, 0x02d7100 },
    { "Remains / New 1 TS (33/36)", 0x02d7100, 0x02d7180 },
    { "Remains / New 1 TS (34/36)", 0x02d7180, 0x02d7200 },
    { "Remains / New 1 TS (35/36)", 0x02d7200, 0x02d7280 },
    { "Remains / New 1 TS (36/36)", 0x02d7280, 0x02d7300 },
#else
    { "Remains / New 1 TS", 0x02d6100, 0x02d7300 },
#endif
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_HOTELJ[] =
{
#ifndef USE_LARGE_PALETTES
    { "Hotel (Justice) TS (1/29)", 0x02d7400, 0x02d7480 },
    { "Hotel (Justice) TS (2/29)", 0x02d7480, 0x02d7500 },
    { "Hotel (Justice) TS (3/29)", 0x02d7500, 0x02d7580 },
    { "Hotel (Justice) TS (4/29)", 0x02d7580, 0x02d7600 },
    { "Hotel (Justice) TS (5/29)", 0x02d7600, 0x02d7680 },
    { "Hotel (Justice) TS (6/29)", 0x02d7680, 0x02d7700 },
    { "Hotel (Justice) TS (7/29)", 0x02d7700, 0x02d7780 },
    { "Hotel (Justice) TS (8/29)", 0x02d7780, 0x02d7800 },
    { "Hotel (Justice) TS (9/29)", 0x02d7800, 0x02d7880 },
    { "Hotel (Justice) TS (10/29)", 0x02d7880, 0x02d7900 },
    { "Hotel (Justice) TS (11/29)", 0x02d7900, 0x02d7980 },
    { "Hotel (Justice) TS (12/29)", 0x02d7980, 0x02d7a00 },
    { "Hotel (Justice) TS (13/29)", 0x02d7a00, 0x02d7a80 },
    { "Hotel (Justice) TS (14/29)", 0x02d7a80, 0x02d7b00 },
    { "Hotel (Justice) TS (15/29)", 0x02d7b00, 0x02d7b80 },
    { "Hotel (Justice) TS (16/29)", 0x02d7b80, 0x02d7c00 },
    { "Hotel (Justice) TS (17/29)", 0x02d7c00, 0x02d7c80 },
    { "Hotel (Justice) TS (18/29)", 0x02d7c80, 0x02d7d00 },
    { "Hotel (Justice) TS (19/29)", 0x02d7d00, 0x02d7d80 },
    { "Hotel (Justice) TS (20/29)", 0x02d7d80, 0x02d7e00 },
    { "Hotel (Justice) TS (21/29)", 0x02d7e00, 0x02d7e80 },
    { "Hotel (Justice) TS (22/29)", 0x02d7e80, 0x02d7f00 },
    { "Hotel (Justice) TS (23/29)", 0x02d7f00, 0x02d7f80 },
    { "Hotel (Justice) TS (24/29)", 0x02d7f80, 0x02d8000 },
    { "Hotel (Justice) TS (25/29)", 0x02d8000, 0x02d8080 },
    { "Hotel (Justice) TS (26/29)", 0x02d8080, 0x02d8100 },
    { "Hotel (Justice) TS (27/29)", 0x02d8100, 0x02d8180 },
    { "Hotel (Justice) TS (28/29)", 0x02d8180, 0x02d8200 },
    { "Hotel (Justice) TS (29/29)", 0x02d8200, 0x02d8280 },
#else
    { "Hotel (Justice) TS", 0x02d7400, 0x02d8280 },
#endif
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_SISLAND[] =
{
#ifndef USE_LARGE_PALETTES
    { "Small Island / New 3 TS (1/24)", 0x02d8300, 0x02d8380 },
    { "Small Island / New 3 TS (2/24)", 0x02d8380, 0x02d8400 },
    { "Small Island / New 3 TS (3/24)", 0x02d8400, 0x02d8480 },
    { "Small Island / New 3 TS (4/24)", 0x02d8480, 0x02d8500 },
    { "Small Island / New 3 TS (5/24)", 0x02d8500, 0x02d8580 },
    { "Small Island / New 3 TS (6/24)", 0x02d8580, 0x02d8600 },
    { "Small Island / New 3 TS (7/24)", 0x02d8600, 0x02d8680 },
    { "Small Island / New 3 TS (8/24)", 0x02d8680, 0x02d8700 },
    { "Small Island / New 3 TS (9/24)", 0x02d8700, 0x02d8780 },
    { "Small Island / New 3 TS (10/24)", 0x02d8780, 0x02d8800 },
    { "Small Island / New 3 TS (11/24)", 0x02d8800, 0x02d8880 },
    { "Small Island / New 3 TS (12/24)", 0x02d8880, 0x02d8900 },
    { "Small Island / New 3 TS (13/24)", 0x02d8900, 0x02d8980 },
    { "Small Island / New 3 TS (14/24)", 0x02d8980, 0x02d8a00 },
    { "Small Island / New 3 TS (15/24)", 0x02d8a00, 0x02d8a80 },
    { "Small Island / New 3 TS (16/24)", 0x02d8a80, 0x02d8b00 },
    { "Small Island / New 3 TS (17/24)", 0x02d8b00, 0x02d8b80 },
    { "Small Island / New 3 TS (18/24)", 0x02d8b80, 0x02d8c00 },
    { "Small Island / New 3 TS (19/24)", 0x02d8c00, 0x02d8c80 },
    { "Small Island / New 3 TS (20/24)", 0x02d8c80, 0x02d8d00 },
    { "Small Island / New 3 TS (21/24)", 0x02d8d00, 0x02d8d80 },
    { "Small Island / New 3 TS (22/24)", 0x02d8d80, 0x02d8e00 },
    { "Small Island / New 3 TS (23/24)", 0x02d8e00, 0x02d8e80 },
    { "Small Island / New 3 TS (24/24)", 0x02d8e80, 0x02d8f00 },
#else
    { "Small Island / New 3 TS", 0x02d8300, 0x02d8f00 },
#endif
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_DNOON[] =
{
#ifndef USE_LARGE_PALETTES
    { "Desert Noon TS (1/7)", 0x02d9000, 0x02d9200, indexJojos51Stages, 0x0b },
    { "Desert Noon TS (2/7)", 0x02d9200, 0x02d9400, indexJojos51Stages, 0x0c },
    { "Desert Noon TS (3/7)", 0x02d9400, 0x02d9600, indexJojos51Stages, 0x0d },
    { "Desert Noon TS (4/7)", 0x02d9600, 0x02d9800, indexJojos51Stages, 0x0e },
    { "Desert Noon TS (5/7)", 0x02d9800, 0x02d9a00, indexJojos51Stages, 0x0f },
    { "Desert Noon TS (6/7)", 0x02d9a00, 0x02d9c00, indexJojos51Stages, 0x10 },
    { "Desert Noon TS (7/7)", 0x02d9c00, 0x02d9e00, indexJojos51Stages, 0x10 },
#else
    { "Desert Noon TS", 0x02d9000, 0x02d9e00 },
#endif
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_DMORN[] =
{
#ifndef USE_LARGE_PALETTES
    { "Desert Morning / Twilight (1/29)", 0x02d9f00, 0x02d9f80 },
    { "Desert Morning / Twilight (2/29)", 0x02d9f80, 0x02da000 },
    { "Desert Morning / Twilight (3/29)", 0x02da000, 0x02da080 },
    { "Desert Morning / Twilight (4/29)", 0x02da080, 0x02da100 },
    { "Desert Morning / Twilight (5/29)", 0x02da100, 0x02da180 },
    { "Desert Morning / Twilight (6/29)", 0x02da180, 0x02da200 },
    { "Desert Morning / Twilight (7/29)", 0x02da200, 0x02da280 },
    { "Desert Morning / Twilight (8/29)", 0x02da280, 0x02da300 },
    { "Desert Morning / Twilight (9/29)", 0x02da300, 0x02da380 },
    { "Desert Morning / Twilight (10/29)", 0x02da380, 0x02da400 },
    { "Desert Morning / Twilight (11/29)", 0x02da400, 0x02da480 },
    { "Desert Morning / Twilight (12/29)", 0x02da480, 0x02da500 },
    { "Desert Morning / Twilight (13/29)", 0x02da500, 0x02da580 },
    { "Desert Morning / Twilight (14/29)", 0x02da580, 0x02da600 },
    { "Desert Morning / Twilight (15/29)", 0x02da600, 0x02da680 },
    { "Desert Morning / Twilight (16/29)", 0x02da680, 0x02da700 },
    { "Desert Morning / Twilight (17/29)", 0x02da700, 0x02da780 },
    { "Desert Morning / Twilight (18/29)", 0x02da780, 0x02da800 },
    { "Desert Morning / Twilight (19/29)", 0x02da800, 0x02da880 },
    { "Desert Morning / Twilight (20/29)", 0x02da880, 0x02da900 },
    { "Desert Morning / Twilight (21/29)", 0x02da900, 0x02da980 },
    { "Desert Morning / Twilight (22/29)", 0x02da980, 0x02daa00 },
    { "Desert Morning / Twilight (23/29)", 0x02daa00, 0x02daa80 },
    { "Desert Morning / Twilight (24/29)", 0x02daa80, 0x02dab00 },
    { "Desert Morning / Twilight (25/29)", 0x02dab00, 0x02dab80 },
    { "Desert Morning / Twilight (26/29)", 0x02dab80, 0x02dac00 },
    { "Desert Morning / Twilight (27/29)", 0x02dac00, 0x02dac80 },
    { "Desert Morning / Twilight (28/29)", 0x02dac80, 0x02dad00 },
    { "Desert Morning / Twilight (29/29)", 0x02dad00, 0x02dad80 },
#else
    { "Desert Morning / Twilight", 0x02d9f00, 0x02dad80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_DNIGHT[] =
{
#ifndef USE_LARGE_PALETTES
    { "Desert Night TS (1/8)", 0x02dae00, 0x02db000, indexJojos51Stages, 0xb },
    { "Desert Night TS (2/8)", 0x02db000, 0x02db200 },
    { "Desert Night TS (3/8)", 0x02db200, 0x02db400, indexJojos51Stages, 0xc},
    { "Desert Night TS (4/8)", 0x02db400, 0x02db600 },
    { "Desert Night TS (5/8)", 0x02db600, 0x02db800, indexJojos51Stages, 0xd },
    { "Desert Night TS (6/8)", 0x02db800, 0x02dba00, indexJojos51Stages, 0xe },
    { "Desert Night TS (7/8)", 0x02dba00, 0x02dbc00, indexJojos51Stages, 0xf },
    { "Desert Night TS (8/8)", 0x02dbc00, 0x02dbc80, indexJojos51Stages, 0x10 },
#else
    { "Desert Night TS", 0x02dae00, 0x02dbc80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_RUINS[] =
{
#ifndef USE_LARGE_PALETTES
    { "Ruins / New 4 TS (1/20)", 0x02dbd00, 0x02dbd80 },
    { "Ruins / New 4 TS (2/20)", 0x02dbd80, 0x02dbe00 },
    { "Ruins / New 4 TS (3/20)", 0x02dbe00, 0x02dbe80 },
    { "Ruins / New 4 TS (4/20)", 0x02dbe80, 0x02dbf00 },
    { "Ruins / New 4 TS (5/20)", 0x02dbf00, 0x02dbf80 },
    { "Ruins / New 4 TS (6/20)", 0x02dbf80, 0x02dc000 },
    { "Ruins / New 4 TS (7/20)", 0x02dc000, 0x02dc080 },
    { "Ruins / New 4 TS (8/20)", 0x02dc080, 0x02dc100 },
    { "Ruins / New 4 TS (9/20)", 0x02dc100, 0x02dc180 },
    { "Ruins / New 4 TS (10/20)", 0x02dc180, 0x02dc200 },
    { "Ruins / New 4 TS (11/20)", 0x02dc200, 0x02dc280 },
    { "Ruins / New 4 TS (12/20)", 0x02dc280, 0x02dc300 },
    { "Ruins / New 4 TS (13/20)", 0x02dc300, 0x02dc380 },
    { "Ruins / New 4 TS (14/20)", 0x02dc380, 0x02dc400 },
    { "Ruins / New 4 TS (15/20)", 0x02dc400, 0x02dc480 },
    { "Ruins / New 4 TS (16/20)", 0x02dc480, 0x02dc500 },
    { "Ruins / New 4 TS (17/20)", 0x02dc500, 0x02dc580 },
    { "Ruins / New 4 TS (18/20)", 0x02dc580, 0x02dc600 },
    { "Ruins / New 4 TS (19/20)", 0x02dc600, 0x02dc680 },
    { "Ruins / New 4 TS (20/20)", 0x02dc680, 0x02dc700 },
#else
    { "Ruins / New 4 TS", 0x02dbd00, 0x02dc700 },
#endif
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_CTOWN[] =
{
#ifndef USE_LARGE_PALETTES
    { "Country Town Noon / Twilight / Night TS (1/83)", 0x02dc800, 0x02dc880 },
    { "Country Town Noon / Twilight / Night TS (2/83)", 0x02dc880, 0x02dc900 },
    { "Country Town Noon / Twilight / Night TS (3/83)", 0x02dc900, 0x02dc980 },
    { "Country Town Noon / Twilight / Night TS (4/83)", 0x02dc980, 0x02dca00 },
    { "Country Town Noon / Twilight / Night TS (5/83)", 0x02dca00, 0x02dca80 },
    { "Country Town Noon / Twilight / Night TS (6/83)", 0x02dca80, 0x02dcb00 },
    { "Country Town Noon / Twilight / Night TS (7/83)", 0x02dcb00, 0x02dcb80 },
    { "Country Town Noon / Twilight / Night TS (8/83)", 0x02dcb80, 0x02dcc00 },
    { "Country Town Noon / Twilight / Night TS (9/83)", 0x02dcc00, 0x02dcc80 },
    { "Country Town Noon / Twilight / Night TS (10/83)", 0x02dcc80, 0x02dcd00 },
    { "Country Town Noon / Twilight / Night TS (11/83)", 0x02dcd00, 0x02dcd80 },
    { "Country Town Noon / Twilight / Night TS (12/83)", 0x02dcd80, 0x02dce00 },
    { "Country Town Noon / Twilight / Night TS (13/83)", 0x02dce00, 0x02dce80 },
    { "Country Town Noon / Twilight / Night TS (14/83)", 0x02dce80, 0x02dcf00 },
    { "Country Town Noon / Twilight / Night TS (15/83)", 0x02dcf00, 0x02dcf80 },
    { "Country Town Noon / Twilight / Night TS (16/83)", 0x02dcf80, 0x02dd000 },
    { "Country Town Noon / Twilight / Night TS (17/83)", 0x02dd000, 0x02dd080 },
    { "Country Town Noon / Twilight / Night TS (18/83)", 0x02dd080, 0x02dd100 },
    { "Country Town Noon / Twilight / Night TS (19/83)", 0x02dd100, 0x02dd180 },
    { "Country Town Noon / Twilight / Night TS (20/83)", 0x02dd180, 0x02dd200 },
    { "Country Town Noon / Twilight / Night TS (21/83)", 0x02dd200, 0x02dd280 },
    { "Country Town Noon / Twilight / Night TS (22/83)", 0x02dd280, 0x02dd300 },
    { "Country Town Noon / Twilight / Night TS (23/83)", 0x02dd300, 0x02dd380 },
    { "Country Town Noon / Twilight / Night TS (24/83)", 0x02dd380, 0x02dd400 },
    { "Country Town Noon / Twilight / Night TS (25/83)", 0x02dd400, 0x02dd480 },
    { "Country Town Noon / Twilight / Night TS (26/83)", 0x02dd480, 0x02dd500 },
    { "Country Town Noon / Twilight / Night TS (27/83)", 0x02dd500, 0x02dd580 },
    { "Country Town Noon / Twilight / Night TS (28/83)", 0x02dd580, 0x02dd600 },
    { "Country Town Noon / Twilight / Night TS (29/83)", 0x02dd600, 0x02dd680 },
    { "Country Town Noon / Twilight / Night TS (30/83)", 0x02dd680, 0x02dd700 },
    { "Country Town Noon / Twilight / Night TS (31/83)", 0x02dd700, 0x02dd780 },
    { "Country Town Noon / Twilight / Night TS (32/83)", 0x02dd780, 0x02dd800 },
    { "Country Town Noon / Twilight / Night TS (33/83)", 0x02dd800, 0x02dd880 },
    { "Country Town Noon / Twilight / Night TS (34/83)", 0x02dd880, 0x02dd900 },
    { "Country Town Noon / Twilight / Night TS (35/83)", 0x02dd900, 0x02dd980 },
    { "Country Town Noon / Twilight / Night TS (36/83)", 0x02dd980, 0x02dda00 },
    { "Country Town Noon / Twilight / Night TS (37/83)", 0x02dda00, 0x02dda80 },
    { "Country Town Noon / Twilight / Night TS (38/83)", 0x02dda80, 0x02ddb00 },
    { "Country Town Noon / Twilight / Night TS (39/83)", 0x02ddb00, 0x02ddb80 },
    { "Country Town Noon / Twilight / Night TS (40/83)", 0x02ddb80, 0x02ddc00 },
    { "Country Town Noon / Twilight / Night TS (41/83)", 0x02ddc00, 0x02ddc80 },
    { "Country Town Noon / Twilight / Night TS (42/83)", 0x02ddc80, 0x02ddd00 },
    { "Country Town Noon / Twilight / Night TS (43/83)", 0x02ddd00, 0x02ddd80 },
    { "Country Town Noon / Twilight / Night TS (44/83)", 0x02ddd80, 0x02dde00 },
    { "Country Town Noon / Twilight / Night TS (45/83)", 0x02dde00, 0x02dde80 },
    { "Country Town Noon / Twilight / Night TS (46/83)", 0x02dde80, 0x02ddf00 },
    { "Country Town Noon / Twilight / Night TS (47/83)", 0x02ddf00, 0x02ddf80 },
    { "Country Town Noon / Twilight / Night TS (48/83)", 0x02ddf80, 0x02de000 },
    { "Country Town Noon / Twilight / Night TS (49/83)", 0x02de000, 0x02de080 },
    { "Country Town Noon / Twilight / Night TS (50/83)", 0x02de080, 0x02de100 },
    { "Country Town Noon / Twilight / Night TS (51/83)", 0x02de100, 0x02de180 },
    { "Country Town Noon / Twilight / Night TS (52/83)", 0x02de180, 0x02de200 },
    { "Country Town Noon / Twilight / Night TS (53/83)", 0x02de200, 0x02de280 },
    { "Country Town Noon / Twilight / Night TS (54/83)", 0x02de280, 0x02de300 },
    { "Country Town Noon / Twilight / Night TS (55/83)", 0x02de300, 0x02de380 },
    { "Country Town Noon / Twilight / Night TS (56/83)", 0x02de380, 0x02de400 },
    { "Country Town Noon / Twilight / Night TS (57/83)", 0x02de400, 0x02de480 },
    { "Country Town Noon / Twilight / Night TS (58/83)", 0x02de480, 0x02de500 },
    { "Country Town Noon / Twilight / Night TS (59/83)", 0x02de500, 0x02de580 },
    { "Country Town Noon / Twilight / Night TS (60/83)", 0x02de580, 0x02de600 },
    { "Country Town Noon / Twilight / Night TS (61/83)", 0x02de600, 0x02de680 },
    { "Country Town Noon / Twilight / Night TS (62/83)", 0x02de680, 0x02de700 },
    { "Country Town Noon / Twilight / Night TS (63/83)", 0x02de700, 0x02de780 },
    { "Country Town Noon / Twilight / Night TS (64/83)", 0x02de780, 0x02de800 },
    { "Country Town Noon / Twilight / Night TS (65/83)", 0x02de800, 0x02de880 },
    { "Country Town Noon / Twilight / Night TS (66/83)", 0x02de880, 0x02de900 },
    { "Country Town Noon / Twilight / Night TS (67/83)", 0x02de900, 0x02de980 },
    { "Country Town Noon / Twilight / Night TS (68/83)", 0x02de980, 0x02dea00 },
    { "Country Town Noon / Twilight / Night TS (69/83)", 0x02dea00, 0x02dea80 },
    { "Country Town Noon / Twilight / Night TS (70/83)", 0x02dea80, 0x02deb00 },
    { "Country Town Noon / Twilight / Night TS (71/83)", 0x02deb00, 0x02deb80 },
    { "Country Town Noon / Twilight / Night TS (72/83)", 0x02deb80, 0x02dec00 },
    { "Country Town Noon / Twilight / Night TS (73/83)", 0x02dec00, 0x02dec80 },
    { "Country Town Noon / Twilight / Night TS (74/83)", 0x02dec80, 0x02ded00 },
    { "Country Town Noon / Twilight / Night TS (75/83)", 0x02ded00, 0x02ded80 },
    { "Country Town Noon / Twilight / Night TS (76/83)", 0x02ded80, 0x02dee00 },
    { "Country Town Noon / Twilight / Night TS (77/83)", 0x02dee00, 0x02dee80 },
    { "Country Town Noon / Twilight / Night TS (78/83)", 0x02dee80, 0x02def00 },
    { "Country Town Noon / Twilight / Night TS (79/83)", 0x02def00, 0x02def80 },
    { "Country Town Noon / Twilight / Night TS (80/83)", 0x02def80, 0x02df000 },
    { "Country Town Noon / Twilight / Night TS (81/83)", 0x02df000, 0x02df080 },
    { "Country Town Noon / Twilight / Night TS (82/83)", 0x02df080, 0x02df100 },
    { "Country Town Noon / Twilight / Night TS (83/83)", 0x02df100, 0x02df180 },
#else
    { "Country Town Noon / Twilight / Night TS", 0x02dc800, 0x02df180 },
#endif
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_UWATER[] =
{
#ifndef USE_LARGE_PALETTES
    { "Underground Water / New 5 TS (1/32)", 0x02df200, 0x02df280 },
    { "Underground Water / New 5 TS (2/32)", 0x02df280, 0x02df300 },
    { "Underground Water / New 5 TS (3/32)", 0x02df300, 0x02df380 },
    { "Underground Water / New 5 TS (4/32)", 0x02df380, 0x02df400 },
    { "Underground Water / New 5 TS (5/32)", 0x02df400, 0x02df480 },
    { "Underground Water / New 5 TS (6/32)", 0x02df480, 0x02df500 },
    { "Underground Water / New 5 TS (7/32)", 0x02df500, 0x02df580 },
    { "Underground Water / New 5 TS (8/32)", 0x02df580, 0x02df600 },
    { "Underground Water / New 5 TS (9/32)", 0x02df600, 0x02df680 },
    { "Underground Water / New 5 TS (10/32)", 0x02df680, 0x02df700 },
    { "Underground Water / New 5 TS (11/32)", 0x02df700, 0x02df780 },
    { "Underground Water / New 5 TS (12/32)", 0x02df780, 0x02df800 },
    { "Underground Water / New 5 TS (13/32)", 0x02df800, 0x02df880 },
    { "Underground Water / New 5 TS (14/32)", 0x02df880, 0x02df900 },
    { "Underground Water / New 5 TS (15/32)", 0x02df900, 0x02df980 },
    { "Underground Water / New 5 TS (16/32)", 0x02df980, 0x02dfa00 },
    { "Underground Water / New 5 TS (17/32)", 0x02dfa00, 0x02dfa80 },
    { "Underground Water / New 5 TS (18/32)", 0x02dfa80, 0x02dfb00 },
    { "Underground Water / New 5 TS (19/32)", 0x02dfb00, 0x02dfb80 },
    { "Underground Water / New 5 TS (20/32)", 0x02dfb80, 0x02dfc00 },
    { "Underground Water / New 5 TS (21/32)", 0x02dfc00, 0x02dfc80 },
    { "Underground Water / New 5 TS (22/32)", 0x02dfc80, 0x02dfd00 },
    { "Underground Water / New 5 TS (23/32)", 0x02dfd00, 0x02dfd80 },
    { "Underground Water / New 5 TS (24/32)", 0x02dfd80, 0x02dfe00 },
    { "Underground Water / New 5 TS (25/32)", 0x02dfe00, 0x02dfe80 },
    { "Underground Water / New 5 TS (26/32)", 0x02dfe80, 0x02dff00 },
    { "Underground Water / New 5 TS (27/32)", 0x02dff00, 0x02dff80 },
    { "Underground Water / New 5 TS (28/32)", 0x02dff80, 0x02e0000 },
    { "Underground Water / New 5 TS (29/32)", 0x02e0000, 0x02e0080 },
    { "Underground Water / New 5 TS (30/32)", 0x02e0080, 0x02e0100 },
    { "Underground Water / New 5 TS (31/32)", 0x02e0100, 0x02e0180 },
    { "Underground Water / New 5 TS (32/32)", 0x02e0180, 0x02e0200 },
#else
    { "Underground Water / New 5 TS", 0x02df200, 0x02e0200 },
#endif
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_INHOUSE[] =
{
#ifndef USE_LARGE_PALETTES
    { "Inside House / New 6 TS (1/30)", 0x02e0300, 0x02e0380 },
    { "Inside House / New 6 TS (2/30)", 0x02e0380, 0x02e0400 },
    { "Inside House / New 6 TS (3/30)", 0x02e0400, 0x02e0480 },
    { "Inside House / New 6 TS (4/30)", 0x02e0480, 0x02e0500 },
    { "Inside House / New 6 TS (5/30)", 0x02e0500, 0x02e0580 },
    { "Inside House / New 6 TS (6/30)", 0x02e0580, 0x02e0600 },
    { "Inside House / New 6 TS (7/30)", 0x02e0600, 0x02e0680 },
    { "Inside House / New 6 TS (8/30)", 0x02e0680, 0x02e0700 },
    { "Inside House / New 6 TS (9/30)", 0x02e0700, 0x02e0780 },
    { "Inside House / New 6 TS (10/30)", 0x02e0780, 0x02e0800 },
    { "Inside House / New 6 TS (11/30)", 0x02e0800, 0x02e0880 },
    { "Inside House / New 6 TS (12/30)", 0x02e0880, 0x02e0900 },
    { "Inside House / New 6 TS (13/30)", 0x02e0900, 0x02e0980 },
    { "Inside House / New 6 TS (14/30)", 0x02e0980, 0x02e0a00 },
    { "Inside House / New 6 TS (15/30)", 0x02e0a00, 0x02e0a80 },
    { "Inside House / New 6 TS (16/30)", 0x02e0a80, 0x02e0b00 },
    { "Inside House / New 6 TS (17/30)", 0x02e0b00, 0x02e0b80 },
    { "Inside House / New 6 TS (18/30)", 0x02e0b80, 0x02e0c00 },
    { "Inside House / New 6 TS (19/30)", 0x02e0c00, 0x02e0c80 },
    { "Inside House / New 6 TS (20/30)", 0x02e0c80, 0x02e0d00 },
    { "Inside House / New 6 TS (21/30)", 0x02e0d00, 0x02e0d80 },
    { "Inside House / New 6 TS (22/30)", 0x02e0d80, 0x02e0e00 },
    { "Inside House / New 6 TS (23/30)", 0x02e0e00, 0x02e0e80 },
    { "Inside House / New 6 TS (24/30)", 0x02e0e80, 0x02e0f00 },
    { "Inside House / New 6 TS (25/30)", 0x02e0f00, 0x02e0f80 },
    { "Inside House / New 6 TS (26/30)", 0x02e0f80, 0x02e1000 },
    { "Inside House / New 6 TS (27/30)", 0x02e1000, 0x02e1080 },
    { "Inside House / New 6 TS (28/30)", 0x02e1080, 0x02e1100 },
    { "Inside House / New 6 TS (29/30)", 0x02e1100, 0x02e1180 },
    { "Inside House / New 6 TS (30/30)", 0x02e1180, 0x02e1200 },
#else
    { "Inside House / New 6 TS", 0x02e0300, 0x02e1200 },
#endif
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_CROOM[] =
{
#ifndef USE_LARGE_PALETTES
    { "Coffin Room / New 7 TS (1/4)", 0x02e1300, 0x02e1500, indexJojos51Stages, 0x5 },
    { "Coffin Room / New 7 TS (2/4)", 0x02e1500, 0x02e1700, indexJojos51Stages, 0x6 },
    { "Coffin Room / New 7 TS (3/4)", 0x02e1700, 0x02e1900, indexJojos51Stages, 0x7 },
    { "Coffin Room / New 7 TS (4/4)", 0x02e1900, 0x02e1b00, indexJojos51Stages, 0x8 },
#else
    { "Coffin Room / New 7 TS", 0x02e1300, 0x02e1b00 },
#endif
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_CTOWER[] =
{
#ifndef USE_LARGE_PALETTES
    { "Clock Tower / New 8 TS (1/3)", 0x02e1c00, 0x02e1e00, indexJojos51Stages, 0 },
    { "Clock Tower / New 8 TS (2/3)", 0x02e1e00, 0x02e2000, indexJojos51Stages, 1 },
    { "Clock Tower / New 8 TS (3/3)", 0x02e2000, 0x02e2200, indexJojos51Stages, 2 },
#else
    { "Clock Tower / New 8 TS", 0x02e1c00, 0x02e2200 },
#endif
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_SUBURB[] =
{
#ifndef USE_LARGE_PALETTES
    { "Surburbs 1 / 2 / 3 TS (1/88)", 0x02e2300, 0x02e2380 },
    { "Surburbs 1 / 2 / 3 TS (2/88)", 0x02e2380, 0x02e2400 },
    { "Surburbs 1 / 2 / 3 TS (3/88)", 0x02e2400, 0x02e2480 },
    { "Surburbs 1 / 2 / 3 TS (4/88)", 0x02e2480, 0x02e2500 },
    { "Surburbs 1 / 2 / 3 TS (5/88)", 0x02e2500, 0x02e2580 },
    { "Surburbs 1 / 2 / 3 TS (6/88)", 0x02e2580, 0x02e2600 },
    { "Surburbs 1 / 2 / 3 TS (7/88)", 0x02e2600, 0x02e2680 },
    { "Surburbs 1 / 2 / 3 TS (8/88)", 0x02e2680, 0x02e2700 },
    { "Surburbs 1 / 2 / 3 TS (9/88)", 0x02e2700, 0x02e2780 },
    { "Surburbs 1 / 2 / 3 TS (10/88)", 0x02e2780, 0x02e2800 },
    { "Surburbs 1 / 2 / 3 TS (11/88)", 0x02e2800, 0x02e2880 },
    { "Surburbs 1 / 2 / 3 TS (12/88)", 0x02e2880, 0x02e2900 },
    { "Surburbs 1 / 2 / 3 TS (13/88)", 0x02e2900, 0x02e2980 },
    { "Surburbs 1 / 2 / 3 TS (14/88)", 0x02e2980, 0x02e2a00 },
    { "Surburbs 1 / 2 / 3 TS (15/88)", 0x02e2a00, 0x02e2a80 },
    { "Surburbs 1 / 2 / 3 TS (16/88)", 0x02e2a80, 0x02e2b00 },
    { "Surburbs 1 / 2 / 3 TS (17/88)", 0x02e2b00, 0x02e2b80 },
    { "Surburbs 1 / 2 / 3 TS (18/88)", 0x02e2b80, 0x02e2c00 },
    { "Surburbs 1 / 2 / 3 TS (19/88)", 0x02e2c00, 0x02e2c80 },
    { "Surburbs 1 / 2 / 3 TS (20/88)", 0x02e2c80, 0x02e2d00 },
    { "Surburbs 1 / 2 / 3 TS (21/88)", 0x02e2d00, 0x02e2d80 },
    { "Surburbs 1 / 2 / 3 TS (22/88)", 0x02e2d80, 0x02e2e00 },
    { "Surburbs 1 / 2 / 3 TS (23/88)", 0x02e2e00, 0x02e2e80 },
    { "Surburbs 1 / 2 / 3 TS (24/88)", 0x02e2e80, 0x02e2f00 },
    { "Surburbs 1 / 2 / 3 TS (25/88)", 0x02e2f00, 0x02e2f80 },
    { "Surburbs 1 / 2 / 3 TS (26/88)", 0x02e2f80, 0x02e3000 },
    { "Surburbs 1 / 2 / 3 TS (27/88)", 0x02e3000, 0x02e3080 },
    { "Surburbs 1 / 2 / 3 TS (28/88)", 0x02e3080, 0x02e3100 },
    { "Surburbs 1 / 2 / 3 TS (29/88)", 0x02e3100, 0x02e3180 },
    { "Surburbs 1 / 2 / 3 TS (30/88)", 0x02e3180, 0x02e3200 },
    { "Surburbs 1 / 2 / 3 TS (31/88)", 0x02e3200, 0x02e3280 },
    { "Surburbs 1 / 2 / 3 TS (32/88)", 0x02e3280, 0x02e3300 },
    { "Surburbs 1 / 2 / 3 TS (33/88)", 0x02e3300, 0x02e3380 },
    { "Surburbs 1 / 2 / 3 TS (34/88)", 0x02e3380, 0x02e3400 },
    { "Surburbs 1 / 2 / 3 TS (35/88)", 0x02e3400, 0x02e3480 },
    { "Surburbs 1 / 2 / 3 TS (36/88)", 0x02e3480, 0x02e3500 },
    { "Surburbs 1 / 2 / 3 TS (37/88)", 0x02e3500, 0x02e3580 },
    { "Surburbs 1 / 2 / 3 TS (38/88)", 0x02e3580, 0x02e3600 },
    { "Surburbs 1 / 2 / 3 TS (39/88)", 0x02e3600, 0x02e3680 },
    { "Surburbs 1 / 2 / 3 TS (40/88)", 0x02e3680, 0x02e3700 },
    { "Surburbs 1 / 2 / 3 TS (41/88)", 0x02e3700, 0x02e3780 },
    { "Surburbs 1 / 2 / 3 TS (42/88)", 0x02e3780, 0x02e3800 },
    { "Surburbs 1 / 2 / 3 TS (43/88)", 0x02e3800, 0x02e3880 },
    { "Surburbs 1 / 2 / 3 TS (44/88)", 0x02e3880, 0x02e3900 },
    { "Surburbs 1 / 2 / 3 TS (45/88)", 0x02e3900, 0x02e3980 },
    { "Surburbs 1 / 2 / 3 TS (46/88)", 0x02e3980, 0x02e3a00 },
    { "Surburbs 1 / 2 / 3 TS (47/88)", 0x02e3a00, 0x02e3a80 },
    { "Surburbs 1 / 2 / 3 TS (48/88)", 0x02e3a80, 0x02e3b00 },
    { "Surburbs 1 / 2 / 3 TS (49/88)", 0x02e3b00, 0x02e3b80 },
    { "Surburbs 1 / 2 / 3 TS (50/88)", 0x02e3b80, 0x02e3c00 },
    { "Surburbs 1 / 2 / 3 TS (51/88)", 0x02e3c00, 0x02e3c80 },
    { "Surburbs 1 / 2 / 3 TS (52/88)", 0x02e3c80, 0x02e3d00 },
    { "Surburbs 1 / 2 / 3 TS (53/88)", 0x02e3d00, 0x02e3d80 },
    { "Surburbs 1 / 2 / 3 TS (54/88)", 0x02e3d80, 0x02e3e00 },
    { "Surburbs 1 / 2 / 3 TS (55/88)", 0x02e3e00, 0x02e3e80 },
    { "Surburbs 1 / 2 / 3 TS (56/88)", 0x02e3e80, 0x02e3f00 },
    { "Surburbs 1 / 2 / 3 TS (57/88)", 0x02e3f00, 0x02e3f80 },
    { "Surburbs 1 / 2 / 3 TS (58/88)", 0x02e3f80, 0x02e4000 },
    { "Surburbs 1 / 2 / 3 TS (59/88)", 0x02e4000, 0x02e4080 },
    { "Surburbs 1 / 2 / 3 TS (60/88)", 0x02e4080, 0x02e4100 },
    { "Surburbs 1 / 2 / 3 TS (61/88)", 0x02e4100, 0x02e4180 },
    { "Surburbs 1 / 2 / 3 TS (62/88)", 0x02e4180, 0x02e4200 },
    { "Surburbs 1 / 2 / 3 TS (63/88)", 0x02e4200, 0x02e4280 },
    { "Surburbs 1 / 2 / 3 TS (64/88)", 0x02e4280, 0x02e4300 },
    { "Surburbs 1 / 2 / 3 TS (65/88)", 0x02e4300, 0x02e4380 },
    { "Surburbs 1 / 2 / 3 TS (66/88)", 0x02e4380, 0x02e4400 },
    { "Surburbs 1 / 2 / 3 TS (67/88)", 0x02e4400, 0x02e4480 },
    { "Surburbs 1 / 2 / 3 TS (68/88)", 0x02e4480, 0x02e4500 },
    { "Surburbs 1 / 2 / 3 TS (69/88)", 0x02e4500, 0x02e4580 },
    { "Surburbs 1 / 2 / 3 TS (70/88)", 0x02e4580, 0x02e4600 },
    { "Surburbs 1 / 2 / 3 TS (71/88)", 0x02e4600, 0x02e4680 },
    { "Surburbs 1 / 2 / 3 TS (72/88)", 0x02e4680, 0x02e4700 },
    { "Surburbs 1 / 2 / 3 TS (73/88)", 0x02e4700, 0x02e4780 },
    { "Surburbs 1 / 2 / 3 TS (74/88)", 0x02e4780, 0x02e4800 },
    { "Surburbs 1 / 2 / 3 TS (75/88)", 0x02e4800, 0x02e4880 },
    { "Surburbs 1 / 2 / 3 TS (76/88)", 0x02e4880, 0x02e4900 },
    { "Surburbs 1 / 2 / 3 TS (77/88)", 0x02e4900, 0x02e4980 },
    { "Surburbs 1 / 2 / 3 TS (78/88)", 0x02e4980, 0x02e4a00 },
    { "Surburbs 1 / 2 / 3 TS (79/88)", 0x02e4a00, 0x02e4a80 },
    { "Surburbs 1 / 2 / 3 TS (80/88)", 0x02e4a80, 0x02e4b00 },
    { "Surburbs 1 / 2 / 3 TS (81/88)", 0x02e4b00, 0x02e4b80 },
    { "Surburbs 1 / 2 / 3 TS (82/88)", 0x02e4b80, 0x02e4c00 },
    { "Surburbs 1 / 2 / 3 TS (83/88)", 0x02e4c00, 0x02e4c80 },
    { "Surburbs 1 / 2 / 3 TS (84/88)", 0x02e4c80, 0x02e4d00 },
    { "Surburbs 1 / 2 / 3 TS (85/88)", 0x02e4d00, 0x02e4d80 },
    { "Surburbs 1 / 2 / 3 TS (86/88)", 0x02e4d80, 0x02e4e00 },
    { "Surburbs 1 / 2 / 3 TS (87/88)", 0x02e4e00, 0x02e4e80 },
    { "Surburbs 1 / 2 / 3 TS (88/88)", 0x02e4e80, 0x02e4f00 },
#else
    { "Surburbs 1 / 2 / 3 TS", 0x02e2300, 0x02e4f00 },
#endif
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_OBRIDGE[] =
{
#ifndef USE_LARGE_PALETTES
    { "On the Bridge TS (1/2)", 0x02e4f00, 0x02e5100, indexJojos51Stages, 0x3 },
    { "On the Bridge TS (2/2)", 0x02e5100, 0x02e5300, indexJojos51Stages, 0x4 },
#else
    { "On the Bridge TS", 0x02e4f00, 0x02e5300 },
#endif
};

const sDescTreeNode JOJOS_TIMESTOP_COLLECTION[] =
{
    { "A Lockup TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_ALOCKUP, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_ALOCKUP) },
    { "A Health Room TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_HEALTH, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_HEALTH) },
    { "In A Airplane TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_AIRPLANE, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_AIRPLANE) },
    { "Tigerbaum Garden TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_TIGERBAUM, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_TIGERBAUM) },
    { "Hotel (Devil) / New 2 TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_HOTELD, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_HOTELD) },
    { "Remains / New 1 TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_REMAINS, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_REMAINS) },
    { "Hotel (Justice) TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_HOTELJ, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_HOTELJ) },
    { "Small Island / New 3 TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_SISLAND, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_SISLAND) },
    { "Desert Morning TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_DMORN, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_DMORN) },
    { "Desert Noon TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_DNOON, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_DNOON) },
    { "Desert Night TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_DNIGHT, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_DNIGHT) },
    { "Ruins / New 4 TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_RUINS, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_RUINS) },
    { "Country Town Noon / Twilight / Night TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_CTOWN, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_CTOWN) },
    { "Underground Water / New 5", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_UWATER, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_UWATER) },
    { "Inside House / New 6", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_INHOUSE, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_INHOUSE) },
    { "Coffin Room / New 7 TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_CROOM, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_CROOM) },
    { "Clock Tower / New 8", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_CTOWER, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_CTOWER) },
    { "Suburbs 1", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_SUBURB, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_SUBURB) },
    { "On The Bridge", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_OBRIDGE, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_OBRIDGE) },
};

#pragma endregion Timestop

const sDescTreeNode JOJOS_UNITS_50[ARRAYSIZE(JOJOS_A_UNITDESC_50)] =
{
    { "HUD", DESC_NODETYPE_TREE,           (void*)JOJOS_HUD_COLLECTION, ARRAYSIZE(JOJOS_HUD_COLLECTION) },
    { "HUD Portraits", DESC_NODETYPE_TREE, (void*)JOJOS_HUD_PORTRAIT_COLLECTION, ARRAYSIZE(JOJOS_HUD_PORTRAIT_COLLECTION) },
    { "Stages", DESC_NODETYPE_TREE,        (void*)JOJOS_A_STAGE_COLLECTION, ARRAYSIZE(JOJOS_A_STAGE_COLLECTION) },
};

const sDescTreeNode JOJOS_UNITS_51[ARRAYSIZE(JOJOS_A_UNITDESC_51)] =
{
    { "Jotaro", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_JOTARO, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_JOTARO) },
    { "Kakyoin & Hierophant", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_HIEROPHANT, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_HIEROPHANT) },
    { "Avdol", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_AVDOL, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_AVDOL) },
    { "Polnareff", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_POL, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_POL) },
    { "Joseph", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_JOSEPH, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_JOSEPH) },
    { "Iggy", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_IGGY, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_IGGY) },
    { "Alessi", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_ALESSI, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_ALESSI) },
    { "Chaka", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_CHAKA, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_CHAKA) },
    { "Devo and Ebony", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_DEVOEBONY, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_DEVOEBONY) },
    { "Midler", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_MIDLER, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_MIDLER) },
    { "Dio", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_DIO, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_DIO) },
    { "Shadow Dio", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_SDIO, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_SDIO) },
    { "Young Joseph", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_YJOSEPH, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_YJOSEPH) },
    { "Hol ", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_HOL, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_HOL) },
    { "Vanilla Ice", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_VICE, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_VICE) },
    { "New Kakyoin & Hierophant", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_HIERO, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_HIERO) },
    { "Anubis Polnareff", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_BPOL, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_BPOL) },
    { "Petshop", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_SHOP, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_SHOP) },
    { "Mariah", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_MARIAH, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_MARIAH) },
    { "Hol and Boingo", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_HOLBOINGO, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_HOLBOINGO) },
    { "Rubber Soul", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_RSOUL, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_RSOUL) },
    { "Khan", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_KHAN, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_KHAN) },
    { "N'Doul and Geb", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_NDOUL, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_NDOUL) },
    { "Boss Ice", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_BICE, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_BICE) },
    { "Death 13", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_DEATH13, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_DEATH13) },
    { "Timestop", DESC_NODETYPE_TREE, (void*)JOJOS_TIMESTOP_COLLECTION, ARRAYSIZE(JOJOS_TIMESTOP_COLLECTION) },
    { "Bonus", DESC_NODETYPE_TREE,    (void*)JOJOS_A_BONUS_COLLECTION, ARRAYSIZE(JOJOS_A_BONUS_COLLECTION) },
};

// Unused natively, but used for Extra extension files people plug in.  May need to fork into 50/51 versions.
const stExtraDef JOJOS_A_EXTRA[] =
{
    //Start

    { UNIT_START_VALUE },

    //Extra

    { INVALID_UNIT_VALUE }
};
