#pragma once
#include "GameClassByDir.h"
#include "ROTD_A_DEF.h"

class CGame_ROTD_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"264-p1.p1", 0x800000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Rage of the Dragons (Neo-Geo)", L"264-p1.p1", 0xb8cc969d, 0 },
        // This is a smaller file but it works
        { L"Rage of the Dragons (Neo-Geo Clone)", L"264-pk1.p1", 0xff2fa719, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Rage of the Dragons (Neo-Geo)",
        ROTD_A,
        IMGDAT_SECTION_NEOGEO,
        ROTD_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_NEOGEO,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        ROTD_A_UNITS,
        ARRAYSIZE(ROTD_A_UNITS),
        L"RotDE.txt",           // Extra filename
        646,                    // Count of palettes listed in the header
        0x80102,                // Lowest known location used for palettes
    };

public:
    CGame_ROTD_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
