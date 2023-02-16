#pragma once
#include "GameClassByDir.h"
#include "DOUBLEDRAGON_A_DEF.h"

class CGame_DOUBLEDRAGON_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"082-p1.p1", 0x200000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Double Dragon (Neo-Geo)", L"082-p1.p1", 0x34ab832a, 0 },
        { L"Double Dragon (Neo-Geo)", L"082-p1.bin", 0x34ab832a, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Double Dragon (Neo-Geo)",
        DOUBLEDRAGON_A,
        IMGDAT_SECTION_NEOGEO,
        DDRAGON_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_NEOGEO,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        DOUBLEDRAGON_A_UNITS,
        ARRAYSIZE(DOUBLEDRAGON_A_UNITS),
        L"DoubleDragonE.txt",           // Extra filename
        140,                            // Count of palettes listed in the header
        0x110bd0,                       // Lowest known location used for palettes
    };

public:
    CGame_DOUBLEDRAGON_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
