#pragma once
#include "GameClassByDir.h"
#include "FatalFuryS_A_DEF.h"

class CGame_FatalFuryS_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"058-p1.p1", 0x100000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Fatal Fury Special (Neo-Geo)", L"058-p1.p1", 0x2f585ba2, 0 },
        { L"Fatal Fury Special (Neo-Geo)", L"058-p1.bin", 0x2f585ba2, 0 },
        { L"Fatal Fury Special (Boss hack by Yumeji)", L"058-p1bs.p1", 0x8cd18f7f, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Fatal Fury S (Neo-Geo)",
        FatalFuryS_A,
        IMGDAT_SECTION_KOF,
        FFS_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        FatalFuryS_A_UNITS,
        ARRAYSIZE(FatalFuryS_A_UNITS),
        L"FatalFurySAE.txt",            // Extra filename
        147,                            // Count of palettes listed in the header
        0x40000,                        // Lowest known location used for palettes
    };

public:
    CGame_FatalFuryS_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
