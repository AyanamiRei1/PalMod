#pragma once

const sGame_PaletteDataset NEOGEO_A_STUB_PALETTE[] =
{
    { L"Test Only - Don't Edit", 0x0, 0x20 },
};

const sDescTreeNode NEOGEO_A_STUB_COLLECTION[] =
{
    { L"Stub Palette Set", DESC_NODETYPE_TREE, (void*)NEOGEO_A_STUB_PALETTE, ARRAYSIZE(NEOGEO_A_STUB_PALETTE) },
};

const sDescTreeNode NEOGEO_A_UNITS[] =
{
    { L"Stub Unit", DESC_NODETYPE_TREE, (void*)NEOGEO_A_STUB_COLLECTION, ARRAYSIZE(NEOGEO_A_STUB_COLLECTION) },
};

// We want the user to use the extras file, so don't preload.
constexpr auto NEOGEO_A_NUMUNIT = 0;

const stExtraDef UNKNOWN_GAME_EXTRAS_LIST[] =
{
    // Start
    { UNIT_START_VALUE },

    { 0, L"Configure your Extras file.", 0, 0x20 },

    { INVALID_UNIT_VALUE }
};
