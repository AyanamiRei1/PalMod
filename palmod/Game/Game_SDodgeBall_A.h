#pragma once
#include "GameClassByDir.h"
#include "SDODGEBALL_A_DEF.h"

class CGame_SDODGEBALL_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"208-p1.p1", 0x200000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Super Dodge Ball (Neo-Geo)", L"208-p1.p1", 0x127f3d32, 0 },
        { L"Super Dodge Ball (Neo-Geo)", L"208-p1.bin", 0x127f3d32, 0 },
        { L"Super Dodge Ball (Neo-Geo)", L"SDB_P1.ROM", 0x127f3d32, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Super Dodge Ball (Neo-Geo)",
        SDODGEBALL_A,
        IMGDAT_SECTION_NEOGEO,
        SuperDodgeball_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_NEOGEO,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        SDODGEBALL_A_UNITS,
        ARRAYSIZE(SDODGEBALL_A_UNITS),
        L"SDodgeBallE.txt",        // Extra filename
        299,                       // Count of palettes listed in the header
        0xe04c,                    // Lowest known location used for palettes
    };

public:
    CGame_SDODGEBALL_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
