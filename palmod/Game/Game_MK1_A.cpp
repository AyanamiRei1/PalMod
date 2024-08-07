#include "StdAfx.h"
#include "Game_MK1_A.h"

CGame_MK1_A::MK1ALoadingKey CGame_MK1_A::m_eVersionToLoad = MK1ALoadingKey::Base;

void CGame_MK1_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, MK1ALoadingKey> m_rgFileNameToVersion =
    {
        // these should be all lower case
        { L"l5_mortal_kombat_t-unit_uj12_game_rom.uj12", MK1ALoadingKey::V50Alt },
        { L"mkg-u112.rom", MK1ALoadingKey::V30Alt },
        { L"mkt-uj12.bin", MK1ALoadingKey::Base },
    };

    CString strFileNameLowerCase = strFileName.c_str();
    strFileNameLowerCase.MakeLower();

    auto result = m_rgFileNameToVersion.find(strFileNameLowerCase.GetString());

    if (result != m_rgFileNameToVersion.end())
    {
        m_eVersionToLoad = result->second;
    }
    else
    {
        m_eVersionToLoad = MK1ALoadingKey::V30Alt;
    }

    return;
}

CGame_MK1_A::CGame_MK1_A(uint32_t nConfirmedROMSize)
{
    switch (m_eVersionToLoad)
    {
    case MK1ALoadingKey::Base:
    default:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_Base);
        break;
    case MK1ALoadingKey::V30Alt:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_V30YAlt);
        break;
    case MK1ALoadingKey::V50Alt:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_V50TAlt);
        break;
    }
}

sFileRule CGame_MK1_A::GetRule(uint32_t nRuleId)
{
    switch (m_eVersionToLoad)
    {
    case MK1ALoadingKey::Base:
    default:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_Base);
    case MK1ALoadingKey::V30Alt:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_V30YAlt);
    case MK1ALoadingKey::V50Alt:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_V50TAlt);
    }
}
