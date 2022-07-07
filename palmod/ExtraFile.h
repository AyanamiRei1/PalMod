#pragma once

#include "game\gamedef.h"

class CGameWithExtrasFile : public CGameClass
{
protected:
    static uint32_t m_nTotalPaletteCount;
    uint16_t m_nExtraUnit = INVALID_UNIT_VALUE;
    uint32_t m_nSafeCountForThisRom = 0;
    uint32_t m_nLowestRomLocationThisPass = k_nBogusHighValue;
    uint32_t m_nLowestRomExtrasLocationThisPass = k_nBogusHighValue;
    LPCWSTR m_pszExtraFilename = nullptr;
    LPCWSTR m_pszDupedPaletteName = nullptr;

    static constexpr LPCSTR m_kpszGameNameKey = ";GameName=";
    static constexpr LPCSTR m_kpszColorFormatKey = ";ColorFormat=";
    static constexpr LPCSTR m_kpszAlphaModeKey = ";AlphaMode=";

    static char m_paszGameNameOverride[MAX_PATH];
    static AlphaMode m_AlphaModeOverride;
    static ColMode m_ColorModeOverride;

    static void ResetStaticOverrideVariables();
    static void SetGameNameOverride(LPCSTR paszGameNameString);
    static void SetAlphaOverride(LPCSTR paszAlphaString);
    static void SetColorFormatOverride(LPCSTR paszColorString);

private:
    bool IsROMOffsetDuplicated(uint32_t nUnitId, uint32_t nPalId, uint32_t nStartingOffsetToCheck, uint32_t nEndOfRegionToCheck = 0);
    int GetDupeCountInExtrasDataset();
    int GetDupeCountInDataset();

    struct sExtrasFileCreationOptions
    {
        BOOL fAddKnownAsComments = FALSE;
        BOOL fSortKnownPalettes = TRUE;
        BOOL fShowUnknownRegions = FALSE;
        BOOL fShowPreUnknown = FALSE;
        BOOL fShowPostUnknown = FALSE;
    };

    bool _CreateNewExtrasFile(LPCWSTR pszFilePath);
    bool _GetExtrasOptionsFromUser(sExtrasFileCreationOptions& sCreationOptions);
    void _WriteToFileAsANSI(CFile& ExtraFile, CString strData);
    void _CreateExtrasFileWithOptions(CFile& ExtraFile, sExtrasFileCreationOptions& sCreationOptions);

public:
    CGameWithExtrasFile() {};
    virtual ~CGameWithExtrasFile() {};

    // Checks for duplicate entries and surprisingly low entries.
    void CheckForErrorsInTables();

    void OpenExtraFile() override;
    bool GameAllowsExtraFile() override { return m_pszExtraFilename != nullptr; };

    static AlphaMode GetExtrasOverrideForAlphaType() { return m_AlphaModeOverride; };
    static ColMode GetExtrasOverrideForColorFormat() { return m_ColorModeOverride; };
    static LPCSTR GetExtrasOverrideForGameName() { return m_paszGameNameOverride; };

    static void LoadExtraFileForGame(LPCWSTR pszExtraFileName, stExtraDef** pCompleteExtraDefs, uint32_t nExtraUnitStart, uint32_t nGameROMSize, uint8_t cbColorSize = 2);
};
