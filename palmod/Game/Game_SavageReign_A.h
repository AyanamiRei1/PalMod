#pragma once
#include "GameClassByDir.h"
#include "SAVAGEREIGN_A_DEF.h"

class CGame_SAVAGEREIGN_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"059-p1.p1", 0x200000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Savage Reign (Neo-Geo)", L"059-p1.p1", 0x01d4e9c0, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Savage Reign (Neo-Geo)",
        SAVAGEREIGN_A,
        IMGDAT_SECTION_NEOGEO,
        SAVAGEREIGN_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_AB,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        SAVAGEREIGN_A_UNITS,
        ARRAYSIZE(SAVAGEREIGN_A_UNITS),
        L"SavageReignE.txt",        // Extra filename
        308,                        // Count of palettes listed in the header
        0xa3000,                    // Lowest known location used for palettes
    };

public:
    CGame_SAVAGEREIGN_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
