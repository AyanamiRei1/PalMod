#pragma once

// To add characters or palette lists:
// * Update the breakersCharacterList array.
// * Uncomment DumpAllCharacters in InitDescTree
// * Run PalMod: the new headers will be printed to debug out
// That should be it.  Good luck.

const sGame_PaletteDataset BREAKERS_A_SHO_PALETTES_A[] =
{
    { L"Sho A", 0x135eaa, 0x135eca, indexBreakersSprites_Sho },
    { L"Sho A Super Trail", 0x135f4a, 0x135f6a, indexBreakersSprites_Sho },
};

const sGame_PaletteDataset BREAKERS_A_SHO_PALETTES_B[] =
{
    { L"Sho B", 0x135eca, 0x135eea, indexBreakersSprites_Sho },
    { L"Sho B Super Trail", 0x135f6a, 0x135f8a, indexBreakersSprites_Sho },
};

const sGame_PaletteDataset BREAKERS_A_SHO_PALETTES_C[] =
{
    { L"Sho C", 0x135eea, 0x135f0a, indexBreakersSprites_Sho },
    { L"Sho C Super Trail", 0x135f8a, 0x135faa, indexBreakersSprites_Sho },
};

const sGame_PaletteDataset BREAKERS_A_SHO_PALETTES_D[] =
{
    { L"Sho D", 0x135f0a, 0x135f2a, indexBreakersSprites_Sho },
    { L"Sho D Super Trail", 0x135fca, 0x135fea, indexBreakersSprites_Sho },
};

const sGame_PaletteDataset BREAKERS_A_JIN_PALETTES[] =
{
    { L"Jin", 0x135f2a, 0x135f4a, indexBreakersSprites_Sho },
    { L"Jin Super Trail", 0x135faa, 0x135fca, indexBreakersSprites_Sho },
};

const sGame_PaletteDataset BREAKERS_A_SHO_PALETTES_SHARED[] =
{
    //Shared Effects
    { L"Sho Black Flash", 0x135e2a, 0x135e4a, indexBreakersSprites_Sho },
    { L"Sho White Flash", 0x135e4a, 0x135e6a, indexBreakersSprites_Sho },
    { L"Sho Zap-Burned", 0x135fea, 0x13600a },
    { L"Sho Burned", 0x13600a, 0x13602a },
    { L"Sho Zapped 1", 0x13602a, 0x13604a },
    { L"Sho Zapped 2", 0x13604a, 0x13606a },
    { L"Sho Poisoned 1", 0x13606a, 0x13608a },
    { L"Sho Poisoned 2", 0x13608a, 0x1360aa },
    //Shared
    { L"Sho Fireball 1", 0x1360aa, 0x1360ca },
    { L"Sho Fireball 2", 0x1360ea, 0x13610a },
    { L"Sho Super Fireball", 0x13610a, 0x13612a },
    { L"Sho Firekick", 0x1360ca, 0x1360ea },
};

const sGame_PaletteDataset BREAKERS_A_DAO_PALETTES_A[] =
{
    { L"Dao A", 0x13ee5a, 0x13ee7a, indexBreakersSprites_DaoLong },
    { L"Dao A Super Trail", 0x13eefa, 0x13ef1a, indexBreakersSprites_DaoLong },
    { L"Dao A Fireball", 0x13f05a, 0x13f07a },
    { L"Dao A Bright", 0x13f0da, 0x13f0fa, indexBreakersSprites_DaoLong },
};

const sGame_PaletteDataset BREAKERS_A_DAO_PALETTES_B[] =
{
    { L"Dao B", 0x13ee7a, 0x13ee9a, indexBreakersSprites_DaoLong },
    { L"Dao B Super Trail", 0x13ef1a, 0x13ef3a, indexBreakersSprites_DaoLong },
    { L"Dao B Fireball", 0x13f07a, 0x13f09a },
    { L"Dao B Bright", 0x13f0fa, 0x13f11a, indexBreakersSprites_DaoLong },
};

const sGame_PaletteDataset BREAKERS_A_DAO_PALETTES_C[] =
{
    { L"Dao C", 0x13ee9a, 0x13eeba, indexBreakersSprites_DaoLong },
    { L"Dao C Super Trail", 0x13ef3a, 0x13ef5a, indexBreakersSprites_DaoLong },
    { L"Dao C Fireball", 0x13f09a, 0x13f0ba },
    { L"Dao C Bright", 0x13f11a, 0x13f13a, indexBreakersSprites_DaoLong },
};

const sGame_PaletteDataset BREAKERS_A_DAO_PALETTES_D[] =
{
    { L"Dao D", 0x13eeba, 0x13eeda, indexBreakersSprites_DaoLong },
    { L"Dao D Super Trail", 0x13ef5a, 0x13ef7a, indexBreakersSprites_DaoLong },
    { L"Dao D Fireball", 0x13f0ba, 0x13f0da },
    { L"Dao D Bright", 0x13f13a, 0x13f15a, indexBreakersSprites_DaoLong },
};

const sGame_PaletteDataset BREAKERS_A_LIU_PALETTES[] =
{
    { L"Liu", 0x13eeda, 0x13eefa, indexBreakersSprites_DaoLong },
    { L"Liu Super Trail", 0x13ef7a, 0x13ef9a, indexBreakersSprites_DaoLong },
    { L"Liu-Khai CPU ONLY Bright", 0x13f15a, 0x13f17a, indexBreakersSprites_DaoLong },
};

const sGame_PaletteDataset BREAKERS_A_DAO_PALETTES_SHARED[] =
{
    { L"Dao Super Fireball Charge", 0x13ee1a, 0x13ee3a },
    { L"Dao Super Fireball", 0x13f17a, 0x13f19a },

    //Shared Effects
    { L"Dao Black Flash", 0x13edda, 0x13edfa, indexBreakersSprites_DaoLong },
    { L"Dao White Flash", 0x13edfa, 0x13ee1a, indexBreakersSprites_DaoLong },
    { L"Dao Zap-Burned", 0x13ef9a, 0x13efba },
    { L"Dao Burned", 0x13efba, 0x13efda },
    { L"Dao Zapped 1", 0x13efda, 0x13effa },
    { L"Dao Zapped 2", 0x13effa, 0x13f01a },
    { L"Dao Poisoned 1", 0x13f01a, 0x13f03a },
    { L"Dao Poisoned 2", 0x13f03a, 0x13f05a },
};

const sGame_PaletteDataset BREAKERS_A_CONDOR_PALETTES_A[] =
{
    { L"Condor A", 0x146778, 0x146798, indexBreakersSprites_Condor },
    { L"Condor A Super Trail", 0x146818, 0x146838, indexBreakersSprites_Condor },
    { L"Condor A Zap Attack", 0x146978, 0x146998 },
};

const sGame_PaletteDataset BREAKERS_A_CONDOR_PALETTES_B[] =
{
    { L"Condor B", 0x146798, 0x1467b8, indexBreakersSprites_Condor },
    { L"Condor B Super Trail", 0x146838, 0x146858, indexBreakersSprites_Condor },
    { L"Condor B Zap Attack", 0x146998, 0x1469b8 },
};

const sGame_PaletteDataset BREAKERS_A_CONDOR_PALETTES_C[] =
{
    { L"Condor C", 0x1467b8, 0x1467d8, indexBreakersSprites_Condor },
    { L"Condor C Super Trail", 0x146858, 0x146878, indexBreakersSprites_Condor },
    { L"Condor C Zap Attack", 0x1469b8, 0x1469d8 },
};

const sGame_PaletteDataset BREAKERS_A_CONDOR_PALETTES_D[] =
{
    { L"Condor D", 0x1467d8, 0x1467f8, indexBreakersSprites_Condor },
    { L"Condor D Super Trail", 0x146878, 0x146898, indexBreakersSprites_Condor },
    { L"Condor D Zap Attack", 0x1469d8, 0x1469f8 },
};

const sGame_PaletteDataset BREAKERS_A_GIGARS_PALETTES[] =
{
    { L"Gigars", 0x1467f8, 0x146818, indexBreakersSprites_Condor },
    { L"Gigars Super Trail", 0x146898, 0x1468b8, indexBreakersSprites_Condor },
};

const sGame_PaletteDataset BREAKERS_A_CONDOR_PALETTES_SHARED[] =
{
    //Shared Effects
    { L"Condor Black Flash", 0x1466f8, 0x146718, indexBreakersSprites_Condor },
    { L"Condor White Flash", 0x146718, 0x146738, indexBreakersSprites_Condor },
    { L"Condor Zap-Burned", 0x1468b8, 0x1468d8 },
    { L"Condor Burned", 0x1468d8, 0x1468f8 },
    { L"Condor Zapped 1", 0x1468f8, 0x146918 },
    { L"Condor Zapped 2", 0x146918, 0x146938 },
    { L"Condor Poisoned 1", 0x146938, 0x146958 },
    { L"Condor Poisoned 2", 0x146958, 0x146978 },
    //Shared
    { L"Condor Zap Attack 2", 0x146758, 0x146778 },
    { L"Condor Dust", 0x1469f8, 0x146a18 },
};

const sGame_PaletteDataset BREAKERS_A_TIA_PALETTES_A[] =
{
    { L"Tia A", 0x1524a8, 0x1524c8, indexBreakersSprites_Tia },
    { L"Tia A Super Trail", 0x152548, 0x152568, indexBreakersSprites_Tia },
    { L"Tia A Lighting Power", 0x1526a8, 0x1526c8 },
    { L"Tia A Lighting Power 2", 0x152728, 0x152748 },
};

const sGame_PaletteDataset BREAKERS_A_TIA_PALETTES_B[] =
{
    { L"Tia B", 0x1524c8, 0x1524e8, indexBreakersSprites_Tia },
    { L"Tia B Super Trail", 0x152568, 0x152588, indexBreakersSprites_Tia },
    { L"Tia B Lighting Power", 0x1526c8, 0x1526e8 },
    { L"Tia B Lighting Power 2", 0x152748, 0x152768 },
};

const sGame_PaletteDataset BREAKERS_A_TIA_PALETTES_C[] =
{
    { L"Tia C", 0x1524e8, 0x152508, indexBreakersSprites_Tia },
    { L"Tia C Super Trail", 0x152588, 0x1525a8, indexBreakersSprites_Tia },
    { L"Tia C Lighting Power", 0x1526e8, 0x152708 },
    { L"Tia C Lighting Power 2", 0x152768, 0x152788 },
};

const sGame_PaletteDataset BREAKERS_A_TIA_PALETTES_D[] =
{
    { L"Tia D", 0x152508, 0x152528, indexBreakersSprites_Tia },
    { L"Tia D Super Trail", 0x1525a8, 0x1525c8, indexBreakersSprites_Tia },
    { L"Tia D Lighting Power", 0x152708, 0x152728 },
    { L"Tia D Lighting Power 2", 0x152788, 0x1527a8 },
};

const sGame_PaletteDataset BREAKERS_A_SHELLY_PALETTES[] =
{
    { L"Shelly", 0x152528, 0x152548, indexBreakersSprites_Tia },
    { L"Shelly Super Trail", 0x1525c8, 0x1525e8, indexBreakersSprites_Tia },
};

const sGame_PaletteDataset BREAKERS_A_TIA_PALETTES_SHARED[] =
{
    //Shared Effects
    { L"Tia Black Flash", 0x152428, 0x152448, indexBreakersSprites_Tia },
    { L"Tia White Flash", 0x152448, 0x152468, indexBreakersSprites_Tia },
    { L"Tia Zap-Burned", 0x1525e8, 0x152608 },
    { L"Tia Burned", 0x152608, 0x152628 },
    { L"Tia Zapped 1", 0x152628, 0x152648 },
    { L"Tia Zapped 2", 0x152648, 0x152668 },
    { L"Tia Poisoned 1", 0x152668, 0x152688 },
    { L"Tia Poisoned 2", 0x152688, 0x1526a8 },
    //Shared
    { L"Flashing Light Power", 0x1527a8, 0x1527c8 },
    { L"Burning Revolver", 0x1527c8, 0x152808 },
    { L"Tia Dust", 0x152808, 0x152828 },
};

const sGame_PaletteDataset BREAKERS_A_RILA_PALETTES_A[] =
{
    { L"Rila A", 0x15b354, 0x15b374, indexBreakersSprites_Rila },
    { L"Rila A Super Trail", 0x15b3f4, 0x15b414, indexBreakersSprites_Rila },
    { L"Rila A Shine Beast", 0x15b554, 0x15b574 },
};

const sGame_PaletteDataset BREAKERS_A_RILA_PALETTES_B[] =
{
    { L"Rila B", 0x15b374, 0x15b394, indexBreakersSprites_Rila },
    { L"Rila B Super Trail", 0x15b414, 0x15b434, indexBreakersSprites_Rila },
    { L"Rila B Shine Beast", 0x15b574, 0x15b594 },
};

const sGame_PaletteDataset BREAKERS_A_RILA_PALETTES_C[] =
{
    { L"Rila C", 0x15b394, 0x15b3b4, indexBreakersSprites_Rila },
    { L"Rila C Super Trail", 0x15b434, 0x15b454, indexBreakersSprites_Rila },
    { L"Rila C Shine Beast", 0x15b594, 0x15b5b4 },
};

const sGame_PaletteDataset BREAKERS_A_RILA_PALETTES_D[] =
{
    { L"Rila D", 0x15b3b4, 0x15b3d4, indexBreakersSprites_Rila },
    { L"Rila D Super Trail", 0x15b454, 0x15b474, indexBreakersSprites_Rila },
    { L"Rila D Shine Beast", 0x15b5b4, 0x15b5d4 },
};

const sGame_PaletteDataset BREAKERS_A_SANDRA_PALETTES[] =
{
    { L"Sandra", 0x15b3d4, 0x15b3f4, indexBreakersSprites_Rila },
    { L"Sandra Super Trail", 0x15b474, 0x15b494, indexBreakersSprites_Rila },
};

const sGame_PaletteDataset BREAKERS_A_RILA_PALETTES_SHARED[] =
{
    //Shared Effects
    { L"Rila Black Flash", 0x15b2d4, 0x15b2f4, indexBreakersSprites_Rila },
    { L"Rila White Flash", 0x15b2f4, 0x15b314, indexBreakersSprites_Rila },
    { L"Rila Zap-Burned", 0x15b494, 0x15b4b4 },
    { L"Rila Burned", 0x15b4b4, 0x15b4d4 },
    { L"Rila Zapped 1", 0x15b4d4, 0x15b4f4 },
    { L"Rila Zapped 2", 0x15b4f4, 0x15b514 },
    { L"Rila Poisoned 1", 0x15b514, 0x15b534 },
    { L"Rila Poisoned 2", 0x15b534, 0x15b554 },
    //Shared
    { L"Rila Slash 1", 0x15b314, 0x15b334 },
    { L"Rila Slash 2", 0x15b334, 0x15b354 },
    { L"Rila Special Slash", 0x15b5d4, 0x15b5f4 },
    { L"Rila Dust", 0x15b614, 0x15b634 },
};

const sGame_PaletteDataset BREAKERS_A_ALSION_PALETTES_A[] =
{
    { L"Alsion A", 0x164206, 0x164226, indexBreakersSprites_AlsionIII },
    { L"Alsion A Super Trail", 0x1642a6, 0x1642c6, indexBreakersSprites_AlsionIII },
    { L"Alsion A Dash Attacks", 0x164406, 0x164426 },
    { L"Alsion A Teleport", 0x164486, 0x1644a6 },
    { L"Alsion A Deadly Claw", 0x164546, 0x164566 },
};

const sGame_PaletteDataset BREAKERS_A_ALSION_PALETTES_B[] =
{
    { L"Alsion B", 0x164226, 0x164246, indexBreakersSprites_AlsionIII },
    { L"Alsion B Super Trail", 0x1642c6, 0x1642e6, indexBreakersSprites_AlsionIII },
    { L"Alsion B Dash Attacks", 0x164426, 0x164446 },
    { L"Alsion B Teleport", 0x1644a6, 0x1644c6 },
    { L"Alsion B Deadly Claw", 0x164566, 0x164586 },
};

const sGame_PaletteDataset BREAKERS_A_ALSION_PALETTES_C[] =
{
    { L"Alsion C", 0x164246, 0x164266, indexBreakersSprites_AlsionIII },
    { L"Alsion C Super Trail", 0x1642e6, 0x164306, indexBreakersSprites_AlsionIII },
    { L"Alsion C Dash Attacks", 0x164446, 0x164466 },
    { L"Alsion C Teleport", 0x1644c6, 0x1644e6 },
    { L"Alsion C Deadly Claw", 0x164586, 0x1645a6 },
};

const sGame_PaletteDataset BREAKERS_A_ALSION_PALETTES_D[] =
{
    { L"Alsion D", 0x164266, 0x164286, indexBreakersSprites_AlsionIII },
    { L"Alsion D Super Trail", 0x164306, 0x164326, indexBreakersSprites_AlsionIII },
    { L"Alsion D Dash Attacks", 0x164466, 0x164486 },
    { L"Alsion D Teleport", 0x1644e6, 0x164506 },
    { L"Alsion D Deadly Claw", 0x1645a6, 0x1645c6 },
};

const sGame_PaletteDataset BREAKERS_A_ATOUM_PALETTES[] =
{
    { L"Atoum", 0x164286, 0x1642a6, indexBreakersSprites_AlsionIII },
    { L"Atoum Super Trail", 0x164326, 0x164346, indexBreakersSprites_AlsionIII },
};

const sGame_PaletteDataset BREAKERS_A_ALSION_PALETTES_SHARED[] =
{
    //Shared Effects
    { L"Alsion Black Flash", 0x164186, 0x1641a6, indexBreakersSprites_AlsionIII },
    { L"Alsion White Flash", 0x1641a6, 0x1641c6, indexBreakersSprites_AlsionIII },
    { L"Alsion Zap-Burned", 0x164346, 0x164366 },
    { L"Alsion Burned", 0x164366, 0x164386 },
    { L"Alsion Zapped 1", 0x164386, 0x1643a6 },
    { L"Alsion Zapped 2", 0x1643a6, 0x1643c6 },
    { L"Alsion Poisoned 1", 0x1643c6, 0x1643e6 },
    { L"Alsion Poisoned 2", 0x1643e6, 0x164406 },
    //Shared
    { L"Alsion Special Kick Slash", 0x1641c6, 0x1641e6 },
    { L"Alsion Normal Kick Slash", 0x1641e6, 0x164206 },
    { L"Alsion A-B Anubis Ghosts", 0x164506, 0x164526 },
    { L"Alsion C-D Anubis Ghosts", 0x164526, 0x164546 },
    { L"Alsion A-B Poison Fog 1", 0x1645c6, 0x1645e6 },
    { L"Alsion A-B Poison Fog 2", 0x1645e6, 0x164606 },
    { L"Alsion C-D Poison Fog 1", 0x164606, 0x164626 },
    { L"Alsion C-D Poison Fog 2", 0x164626, 0x164646 },
    { L"Alsion Dust", 0x164646, 0x164666 },
};

const sGame_PaletteDataset BREAKERS_A_PIELLE_PALETTES_A[] =
{
    { L"Pielle A", 0x16d222, 0x16d242, indexBreakersSprites_Pielle },
    { L"Pielle A Super Trail", 0x16d2c2, 0x16d2e2, indexBreakersSprites_Pielle },
    { L"Pielle A Bonjour Shot", 0x16d422, 0x16d442 },
    { L"Pielle A Roses", 0x16d4a2, 0x16d4c2 },
    { L"Pielle A Special Slash", 0x16d562, 0x16d582 },
};

const sGame_PaletteDataset BREAKERS_A_PIELLE_PALETTES_B[] =
{
    { L"Pielle B", 0x16d242, 0x16d262, indexBreakersSprites_Pielle },
    { L"Pielle B Super Trail", 0x16d2e2, 0x16d302, indexBreakersSprites_Pielle },
    { L"Pielle B Bonjour Shot", 0x16d442, 0x16d462 },
    { L"Pielle B Roses", 0x16d4c2, 0x16d4e2 },
    { L"Pielle B Special Slash", 0x16d582, 0x16d5a2 },
};

const sGame_PaletteDataset BREAKERS_A_PIELLE_PALETTES_C[] =
{
    { L"Pielle C", 0x16d262, 0x16d282, indexBreakersSprites_Pielle },
    { L"Pielle C Super Trail", 0x16d302, 0x16d322, indexBreakersSprites_Pielle },
    { L"Pielle C Bonjour Shot", 0x16d462, 0x16d482 },
    { L"Pielle C Roses", 0x16d4e2, 0x16d502 },
    { L"Pielle C Special Slash", 0x16d5a2, 0x16d5c2 },
};

const sGame_PaletteDataset BREAKERS_A_PIELLE_PALETTES_D[] =
{
    { L"Pielle D", 0x16d282, 0x16d2a2, indexBreakersSprites_Pielle },
    { L"Pielle D Super Trail", 0x16d322, 0x16d342, indexBreakersSprites_Pielle },
    { L"Pielle D Bonjour Shot", 0x16d482, 0x16d4a2 },
    { L"Pielle D Roses", 0x16d502, 0x16d522 },
    { L"Pielle D Special Slash", 0x16d5c2, 0x16d5e2 },
};

const sGame_PaletteDataset BREAKERS_A_GEORGE_PALETTES[] =
{
    { L"George", 0x16d2a2, 0x16d2c2, indexBreakersSprites_Pielle },
    { L"George Super Trail", 0x16d342, 0x16d362, indexBreakersSprites_Pielle },
};

const sGame_PaletteDataset BREAKERS_A_PIELLE_PALETTES_SHARED[] =
{
    //Shared Effects
    { L"Pielle Black Flash", 0x16d1a2, 0x16d1c2, indexBreakersSprites_Pielle },
    { L"Pielle White Flash", 0x16d1c2, 0x16d1e2, indexBreakersSprites_Pielle },
    { L"Pielle Zap-Burned", 0x16d362, 0x16d382 },
    { L"Pielle Burned", 0x16d382, 0x16d3a2 },
    { L"Pielle Zapped 1", 0x16d3a2, 0x16d3c2 },
    { L"Pielle Zapped 2", 0x16d3c2, 0x16d3e2 },
    { L"Pielle Poisoned 1", 0x16d3e2, 0x16d402 },
    { L"Pielle Poisoned 2", 0x16d402, 0x16d422 },
    //Shared
    { L"Pielle Zap/Slash Effects", 0x16d522, 0x16d542 },
    { L"Pielle Zap Effects 2", 0x16d542, 0x16d562 },
    { L"Pielle Butler", 0x16d5e2, 0x16d602 },
};

const sGame_PaletteDataset BREAKERS_A_MAHERL_PALETTES_A[] =
{
    { L"Maherl A", 0x177288, 0x1772a8, indexBreakersSprites_Maherl },
    { L"Maherl A Super Trail", 0x177328, 0x177348, indexBreakersSprites_Maherl },
    { L"Maherl A Cadabra Bomber", 0x177488, 0x1774a8 },
};

const sGame_PaletteDataset BREAKERS_A_MAHERL_PALETTES_B[] =
{
    { L"Maherl B", 0x1772a8, 0x1772c8, indexBreakersSprites_Maherl },
    { L"Maherl B Super Trail", 0x177348, 0x177368, indexBreakersSprites_Maherl },
    { L"Maherl B Cadabra Bomber", 0x1774a8, 0x1774c8 },
};

const sGame_PaletteDataset BREAKERS_A_MAHERL_PALETTES_C[] =
{
    { L"Maherl C", 0x1772c8, 0x1772e8, indexBreakersSprites_Maherl },
    { L"Maherl C Super Trail", 0x177368, 0x177388, indexBreakersSprites_Maherl },
    { L"Maherl C Cadabra Bomber", 0x1774c8, 0x1774e8 },
};

const sGame_PaletteDataset BREAKERS_A_MAHERL_PALETTES_D[] =
{
    { L"Maherl D", 0x1772e8, 0x177308, indexBreakersSprites_Maherl },
    { L"Maherl D Super Trail", 0x177388, 0x1773a8, indexBreakersSprites_Maherl },
    { L"Maherl D Cadabra Bomber", 0x1774e8, 0x177508 },
};

const sGame_PaletteDataset BREAKERS_A_JAVA_PALETTES[] =
{
    { L"Javar", 0x177308, 0x177328, indexBreakersSprites_Maherl },
    { L"Javar Super Trail", 0x1773a8, 0x1773c8, indexBreakersSprites_Maherl },
};

const sGame_PaletteDataset BREAKERS_A_MAHERL_PALETTES_SHARED[] =
{
    //Shared Effects
    { L"Maherl Black Flash", 0x177208, 0x177228, indexBreakersSprites_Maherl },
    { L"Maherl White Flash", 0x177228, 0x177248, indexBreakersSprites_Maherl },
    { L"Maherl Zap-Burned", 0x1773c8, 0x1773e8 },
    { L"Maherl Burned", 0x1773e8, 0x177408 },
    { L"Maherl Zapped 1", 0x177408, 0x177428 },
    { L"Maherl Zapped 2", 0x177428, 0x177448 },
    { L"Maherl Poisoned 1", 0x177448, 0x177468 },
    { L"Maherl Poisoned 2", 0x177468, 0x177488 },
    //Shared
    { L"Maherl Fire Breath", 0x177268, 0x177288 },
    { L"Maherl Slash Sword 1", 0x177508, 0x177528 },
    { L"Maherl Slash Sword 2", 0x177528, 0x177548 },
    { L"Maherl Punish Sword 1", 0x177548, 0x177568 },
    { L"Maherl Punish Sword 2", 0x177588, 0x1775a8 },
    { L"Maherl Dust", 0x1775c8, 0x1775e8 },
};

const sGame_PaletteDataset BREAKERS_A_SAIZO_PALETTES_A[] =
{
    { L"Saizo A", 0x1897fe, 0x18981e, indexBreakersSprites_Saizo },
    { L"Saizo A Super Trail", 0x18989e, 0x1898be, indexBreakersSprites_Saizo },
};

const sGame_PaletteDataset BREAKERS_A_SAIZO_PALETTES_B[] =
{
    { L"Saizo B", 0x18981e, 0x18983e, indexBreakersSprites_Saizo },
    { L"Saizo B Super Trail", 0x1898be, 0x1898de, indexBreakersSprites_Saizo },
};

const sGame_PaletteDataset BREAKERS_A_SAIZO_PALETTES_C[] =
{
    { L"Saizo C", 0x18983e, 0x18985e, indexBreakersSprites_Saizo },
    { L"Saizo C Super Trail", 0x1898de, 0x1898fe, indexBreakersSprites_Saizo },
};

const sGame_PaletteDataset BREAKERS_A_SAIZO_PALETTES_D[] =
{
    { L"Saizo D", 0x18985e, 0x18987e, indexBreakersSprites_Saizo },
    { L"Saizo D Super Trail", 0x1898fe, 0x18991e, indexBreakersSprites_Saizo },
};

const sGame_PaletteDataset BREAKERS_A_YUKIKAGE_PALETTES[] =
{
    { L"Yukikage", 0x18987e, 0x18989e, indexBreakersSprites_Saizo },
    { L"Yukikage Super Trail", 0x18991e, 0x18993e, indexBreakersSprites_Saizo },
};

const sGame_PaletteDataset BREAKERS_A_SAIZO_PALETTES_SHARED[] =
{
    //Shared Effects
    { L"Saizo Black Flash", 0x18977e, 0x18979e, indexBreakersSprites_Saizo },
    { L"Saizo White Flash", 0x18979e, 0x1897be, indexBreakersSprites_Saizo },
    { L"Saizo Zap-Burned", 0x18993e, 0x18995e },
    { L"Saizo Burned", 0x18995e, 0x18997e },
    { L"Saizo Zapped 1", 0x18997e, 0x18999e },
    { L"Saizo Zapped 2", 0x18999e, 0x1899be },
    { L"Saizo Poisoned 1", 0x1899be, 0x1899de },
    { L"Saizo Poisoned 2", 0x1899de, 0x1899fe },
    //Shared
    { L"Saizo Hiryu Kunai/Bakudan", 0x189a7e, 0x189a9e },
    { L"Saizo Hiryu Bakudan Smoke", 0x189abe, 0x189ade },
    { L"Saizo Engetsu Zan", 0x189a9e, 0x189abe },
    { L"Saizo Frog", 0x1899fe, 0x189a1e },
    { L"Saizo Frog Spike Ball", 0x189a5e, 0x189a7e },
    { L"Saizo Eagle", 0x189a1e, 0x189a3e },
    { L"Saizo Flames", 0x189a3e, 0x189a5e },
};

//Bai-Hu
const sGame_PaletteDataset BREAKERS_A_BAIHU_PALETTES[] =
{
    //Main
    { L"Bai-Hu", 0x180b2e, 0x180b4e },
    { L"Bai-Hu Supertrail", 0x180b4e, 0x180b6e },
    { L"Bai-Hu Tele-Dash 1", 0x180c4e, 0x180c6e },
    { L"Bai-Hu Tele-Dash 2", 0x180c6e, 0x180c8e },
    { L"Bai-Hu Changing Pal 1", 0x180dae, 0x180dce },
    { L"Bai-Hu Changing Pal 2", 0x180dce, 0x180dee },
    { L"Bai-Hu Changing Pal 3", 0x180dee, 0x180e0e },
    { L"Bai-Hu Changing Pal 4", 0x180e0e, 0x180e2e },
    { L"Bai-Hu Changing Pal 5", 0x180e2e, 0x180e4e },
    { L"Bai-Hu Changing Pal 6", 0x180e4e, 0x180e6e },
    { L"Bai-Hu Changing Pal 7", 0x180e6e, 0x180e8e },
    //Effects
    { L"Bai-Hu Black Flash", 0x180a8e, 0x180aae },
    { L"Bai-Hu White Flash", 0x180aae, 0x180ace },
    { L"Bai-Hu Zap-Burned", 0x180b6e, 0x180b8e },
    { L"Bai-Hu Burned", 0x180b8e, 0x180bae },
    { L"Bai-Hu Zapped 1", 0x180bae, 0x180bce },
    { L"Bai-Hu Zapped 2", 0x180bce, 0x180bee },
    { L"Bai-Hu Poisoned 1", 0x180bee, 0x180c0e },
    { L"Bai-Hu Poisoned 2", 0x180c0e, 0x180c2e },
    //Special
    { L"Bai-Hu Electric Effect", 0x180ace, 0x180aee },
    { L"Bai-Hu Thunder Palm", 0x180aee, 0x180b0e },
    { L"Bai-Hu Spirits Powers 1", 0x180c8e, 0x180cae },
    { L"Bai-Hu Spirits Powers 2", 0x180cae, 0x180cce },
    { L"Bai-Hu Spirits Powers 3", 0x180cce, 0x180cee },
    { L"Bai-Hu Spirits Powers 4", 0x180cee, 0x180d0e },
    { L"Bai-Hu Spirits Powers 5", 0x180d0e, 0x180d2e },
    { L"Bai-Hu Spirits Powers 6", 0x180d2e, 0x180d4e },
    { L"Bai-Hu Spirits Powers 7", 0x180d4e, 0x180d6e },
    { L"Bai-Hu Spirit Win Pose", 0x180d6e, 0x180d8e },
    { L"Bai-Hu Blocking Aura", 0x180c2e, 0x180c4e },
    { L"Bai-Hu Dust", 0x180d8e, 0x180dae },
};

const sDescTreeNode BREAKERS_A_SHO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)BREAKERS_A_SHO_PALETTES_A, ARRAYSIZE(BREAKERS_A_SHO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)BREAKERS_A_SHO_PALETTES_B, ARRAYSIZE(BREAKERS_A_SHO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)BREAKERS_A_SHO_PALETTES_C, ARRAYSIZE(BREAKERS_A_SHO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)BREAKERS_A_SHO_PALETTES_D, ARRAYSIZE(BREAKERS_A_SHO_PALETTES_D) },
    { L"Jin", DESC_NODETYPE_TREE, (void*)BREAKERS_A_JIN_PALETTES, ARRAYSIZE(BREAKERS_A_JIN_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)BREAKERS_A_SHO_PALETTES_SHARED, ARRAYSIZE(BREAKERS_A_SHO_PALETTES_SHARED) },
};

const sDescTreeNode BREAKERS_A_DAO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)BREAKERS_A_DAO_PALETTES_A, ARRAYSIZE(BREAKERS_A_DAO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)BREAKERS_A_DAO_PALETTES_B, ARRAYSIZE(BREAKERS_A_DAO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)BREAKERS_A_DAO_PALETTES_C, ARRAYSIZE(BREAKERS_A_DAO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)BREAKERS_A_DAO_PALETTES_D, ARRAYSIZE(BREAKERS_A_DAO_PALETTES_D) },
    { L"Liu", DESC_NODETYPE_TREE, (void*)BREAKERS_A_LIU_PALETTES, ARRAYSIZE(BREAKERS_A_LIU_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)BREAKERS_A_DAO_PALETTES_SHARED, ARRAYSIZE(BREAKERS_A_DAO_PALETTES_SHARED) },
};

const sDescTreeNode BREAKERS_A_CONDOR_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)BREAKERS_A_CONDOR_PALETTES_A, ARRAYSIZE(BREAKERS_A_CONDOR_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)BREAKERS_A_CONDOR_PALETTES_B, ARRAYSIZE(BREAKERS_A_CONDOR_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)BREAKERS_A_CONDOR_PALETTES_C, ARRAYSIZE(BREAKERS_A_CONDOR_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)BREAKERS_A_CONDOR_PALETTES_D, ARRAYSIZE(BREAKERS_A_CONDOR_PALETTES_D) },
    { L"Gigars", DESC_NODETYPE_TREE, (void*)BREAKERS_A_GIGARS_PALETTES, ARRAYSIZE(BREAKERS_A_GIGARS_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)BREAKERS_A_CONDOR_PALETTES_SHARED, ARRAYSIZE(BREAKERS_A_CONDOR_PALETTES_SHARED) },
};

const sDescTreeNode BREAKERS_A_TIA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)BREAKERS_A_TIA_PALETTES_A, ARRAYSIZE(BREAKERS_A_TIA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)BREAKERS_A_TIA_PALETTES_B, ARRAYSIZE(BREAKERS_A_TIA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)BREAKERS_A_TIA_PALETTES_C, ARRAYSIZE(BREAKERS_A_TIA_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)BREAKERS_A_TIA_PALETTES_D, ARRAYSIZE(BREAKERS_A_TIA_PALETTES_D) },
    { L"Shelly", DESC_NODETYPE_TREE, (void*)BREAKERS_A_SHELLY_PALETTES, ARRAYSIZE(BREAKERS_A_SHELLY_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)BREAKERS_A_TIA_PALETTES_SHARED, ARRAYSIZE(BREAKERS_A_TIA_PALETTES_SHARED) },
};

const sDescTreeNode BREAKERS_A_RILA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)BREAKERS_A_RILA_PALETTES_A, ARRAYSIZE(BREAKERS_A_RILA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)BREAKERS_A_RILA_PALETTES_B, ARRAYSIZE(BREAKERS_A_RILA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)BREAKERS_A_RILA_PALETTES_C, ARRAYSIZE(BREAKERS_A_RILA_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)BREAKERS_A_RILA_PALETTES_D, ARRAYSIZE(BREAKERS_A_RILA_PALETTES_D) },
    { L"Sandra", DESC_NODETYPE_TREE, (void*)BREAKERS_A_SANDRA_PALETTES, ARRAYSIZE(BREAKERS_A_SANDRA_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)BREAKERS_A_RILA_PALETTES_SHARED, ARRAYSIZE(BREAKERS_A_RILA_PALETTES_SHARED) },
};

const sDescTreeNode BREAKERS_A_ALSION_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)BREAKERS_A_ALSION_PALETTES_A, ARRAYSIZE(BREAKERS_A_ALSION_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)BREAKERS_A_ALSION_PALETTES_B, ARRAYSIZE(BREAKERS_A_ALSION_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)BREAKERS_A_ALSION_PALETTES_C, ARRAYSIZE(BREAKERS_A_ALSION_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)BREAKERS_A_ALSION_PALETTES_D, ARRAYSIZE(BREAKERS_A_ALSION_PALETTES_D) },
    { L"Atoum", DESC_NODETYPE_TREE, (void*)BREAKERS_A_ATOUM_PALETTES, ARRAYSIZE(BREAKERS_A_ATOUM_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)BREAKERS_A_ALSION_PALETTES_SHARED, ARRAYSIZE(BREAKERS_A_ALSION_PALETTES_SHARED) },
};

const sDescTreeNode BREAKERS_A_PIELLE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)BREAKERS_A_PIELLE_PALETTES_A, ARRAYSIZE(BREAKERS_A_PIELLE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)BREAKERS_A_PIELLE_PALETTES_B, ARRAYSIZE(BREAKERS_A_PIELLE_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)BREAKERS_A_PIELLE_PALETTES_C, ARRAYSIZE(BREAKERS_A_PIELLE_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)BREAKERS_A_PIELLE_PALETTES_D, ARRAYSIZE(BREAKERS_A_PIELLE_PALETTES_D) },
    { L"George", DESC_NODETYPE_TREE, (void*)BREAKERS_A_GEORGE_PALETTES, ARRAYSIZE(BREAKERS_A_GEORGE_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)BREAKERS_A_PIELLE_PALETTES_SHARED, ARRAYSIZE(BREAKERS_A_PIELLE_PALETTES_SHARED) },
};

const sDescTreeNode BREAKERS_A_MAHERL_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)BREAKERS_A_MAHERL_PALETTES_A, ARRAYSIZE(BREAKERS_A_MAHERL_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)BREAKERS_A_MAHERL_PALETTES_B, ARRAYSIZE(BREAKERS_A_MAHERL_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)BREAKERS_A_MAHERL_PALETTES_C, ARRAYSIZE(BREAKERS_A_MAHERL_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)BREAKERS_A_MAHERL_PALETTES_D, ARRAYSIZE(BREAKERS_A_MAHERL_PALETTES_D) },
    { L"Java", DESC_NODETYPE_TREE, (void*)BREAKERS_A_JAVA_PALETTES, ARRAYSIZE(BREAKERS_A_JAVA_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)BREAKERS_A_MAHERL_PALETTES_SHARED, ARRAYSIZE(BREAKERS_A_MAHERL_PALETTES_SHARED) },
};

const sDescTreeNode BREAKERS_A_SAIZO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)BREAKERS_A_SAIZO_PALETTES_A, ARRAYSIZE(BREAKERS_A_SAIZO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)BREAKERS_A_SAIZO_PALETTES_B, ARRAYSIZE(BREAKERS_A_SAIZO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)BREAKERS_A_SAIZO_PALETTES_C, ARRAYSIZE(BREAKERS_A_SAIZO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)BREAKERS_A_SAIZO_PALETTES_D, ARRAYSIZE(BREAKERS_A_SAIZO_PALETTES_D) },
    { L"Yukikage", DESC_NODETYPE_TREE, (void*)BREAKERS_A_YUKIKAGE_PALETTES, ARRAYSIZE(BREAKERS_A_YUKIKAGE_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)BREAKERS_A_SAIZO_PALETTES_SHARED, ARRAYSIZE(BREAKERS_A_SAIZO_PALETTES_SHARED) },
};

const sDescTreeNode BREAKERS_A_BAIHU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)BREAKERS_A_BAIHU_PALETTES, ARRAYSIZE(BREAKERS_A_BAIHU_PALETTES) },
};

const sDescTreeNode BREAKERS_A_UNITS[] =
{
    { L"Alsion", DESC_NODETYPE_TREE, (void*)BREAKERS_A_ALSION_COLLECTION, ARRAYSIZE(BREAKERS_A_ALSION_COLLECTION) },
    { L"Condor", DESC_NODETYPE_TREE, (void*)BREAKERS_A_CONDOR_COLLECTION, ARRAYSIZE(BREAKERS_A_CONDOR_COLLECTION) },
    { L"Dao", DESC_NODETYPE_TREE, (void*)BREAKERS_A_DAO_COLLECTION, ARRAYSIZE(BREAKERS_A_DAO_COLLECTION) },
    { L"Maherl", DESC_NODETYPE_TREE, (void*)BREAKERS_A_MAHERL_COLLECTION, ARRAYSIZE(BREAKERS_A_MAHERL_COLLECTION) },
    { L"Pielle", DESC_NODETYPE_TREE, (void*)BREAKERS_A_PIELLE_COLLECTION, ARRAYSIZE(BREAKERS_A_PIELLE_COLLECTION) },
    { L"Rila", DESC_NODETYPE_TREE, (void*)BREAKERS_A_RILA_COLLECTION, ARRAYSIZE(BREAKERS_A_RILA_COLLECTION) },
    { L"Saizo", DESC_NODETYPE_TREE, (void*)BREAKERS_A_SAIZO_COLLECTION, ARRAYSIZE(BREAKERS_A_SAIZO_COLLECTION) },
    { L"Sho", DESC_NODETYPE_TREE, (void*)BREAKERS_A_SHO_COLLECTION, ARRAYSIZE(BREAKERS_A_SHO_COLLECTION) },
    { L"Tia", DESC_NODETYPE_TREE, (void*)BREAKERS_A_TIA_COLLECTION, ARRAYSIZE(BREAKERS_A_TIA_COLLECTION) },
    { L"Bai-Hu", DESC_NODETYPE_TREE, (void*)BREAKERS_A_BAIHU_COLLECTION, ARRAYSIZE(BREAKERS_A_BAIHU_COLLECTION) },
};

constexpr auto BREAKERS_A_NUMUNIT = ARRAYSIZE(BREAKERS_A_UNITS);

#define BREAKERS_A_EXTRALOC BREAKERS_A_NUMUNIT

// We extend this array with data groveled from the extras file, if any.
const stExtraDef BREAKERS_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
