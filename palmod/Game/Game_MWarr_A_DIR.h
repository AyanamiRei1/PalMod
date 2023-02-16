#pragma once
#include "GameClassByDir.h"
#include "MWarr_A_DIR_DEF.h"

class CGame_MWarr_A_DIR : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"prg_ev", 0x80000 },
            { L"prg_od", 0x80000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Mighty Warriors (Elettronica Video Games)",
        MWARR_A,
        IMGDAT_SECTION_OTHER,
        MWarr_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR555_BE,
        m_sFileLoadingData,
        {},
        MWarr_A_UNITS,
        ARRAYSIZE(MWarr_A_UNITS),
        L"MWarrE.txt",                  // Extra filename
        24,                             // Count of palettes listed in the header
        0x92BB6,                        // Lowest known location used for palettes
    };

public:
    CGame_MWarr_A_DIR(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
    static sFileRule GetNextRule() { return CGameClassByDir::GetNextRule(m_sFileLoadingData); };
};
