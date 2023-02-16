#pragma once
#include "GameClassByDir.h"
#include "FatalFury2_A_DEF.h"

class CGame_FatalFury2_A : public CGameClassByDir
{
private:
    enum class FF2LoadingKey
    {
        Normal,
        Jumbo,
    };

    static FF2LoadingKey m_eVersionToLoad;

    static inline const sDirectoryLoadingData FatalFury2_A_FileLoadingData_Normal =
    {
        {
            { L"047-p1.bin", 0x80000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData FatalFury2_A_FileLoadingData_Alt =
    {
        {
            { L"047-p1.p1", 0x100000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Fatal Fury 2 (Neo-Geo)", L"047-p1.bin", 0xbe40ea92, 0 },
        { L"Fatal Fury 2 (Neo-Geo)", L"047-p1.p1", 0xecfdbb69, 0 },
        { L"Fatal Fury 2 (Neo-Geo)", L"047-epr.ep1", 0xbe40ea92, 0 },
    };

    const sCoreGameData m_sCoreGameData_Normal
    {
        L"Fatal Fury 2 (Neo-Geo)",
        FatalFury2_A,
        IMGDAT_SECTION_KOF,
        FatalFury2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        FatalFury2_A_FileLoadingData_Normal,
        m_rgCRC32Data,
        FatalFury2_A_UNITS,
        ARRAYSIZE(FatalFury2_A_UNITS),
        L"FatalFury2E.txt",             // Extra filename
        137,                            // Count of palettes listed in the header
        0x38000,                        // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_Alt
    {
        L"Fatal Fury 2 (Neo-Geo)",
        FatalFury2_A,
        IMGDAT_SECTION_KOF,
        FatalFury2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        FatalFury2_A_FileLoadingData_Alt,
        m_rgCRC32Data,
        FatalFury2_A_UNITS,
        ARRAYSIZE(FatalFury2_A_UNITS),
        L"FatalFury2E.txt",             // Extra filename
        137,                            // Count of palettes listed in the header
        0x38000,                        // Lowest known location used for palettes
    };

public:
    CGame_FatalFury2_A(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    static sFileRule GetRule(uint32_t nRuleId);
};
