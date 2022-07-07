#pragma once

#include "GameClass.h"

class CGameLoad
{
private:
    BOOL SetGame(int nGameFlag);

    uint32_t(*GetRuleCtr)(void) = {};
    void (*ResetRuleCtr)(void) = {};
    sFileRule(*GetNextRule)(void) = {};
    sFileRule(*GetRule)(uint32_t) = {};
    CGameClass* CreateGame(int nGameFlag, uint32_t nConfirmedROMSize, int nExtraGameData = 0, LPCWSTR pszFilePath = nullptr);

    bool IsLocationOnReadOnlyDrive(LPCWSTR pszLocation, LPWSTR pszDrivePath = nullptr, uint32_t ccPathSize = 0);
    bool VerifyLocationIsUsable(LPCWSTR pszLocation);

    CString strLoadSaveStr = L"";

    int nSaveLoadCount = 0;
    int nSaveLoadSucc = 0;
    int nSaveLoadErr = 0;

public:
    CGameLoad(void);
    ~CGameLoad(void);

    CGameClass* LoadFile(int nGameFlag, wchar_t* pszLoadFile);
    CGameClass* LoadDir(int nGameFlag, wchar_t* pszLoadDir);
    void SaveGame(CGameClass* CurrGame);
    void SavePatchFile(CGameClass* CurrGame);
    void SaveMultiplePatchFiles(CGameClass* CurrGame, CString strTargetDirectory);
    void CrosscopyGame(CGameClass* CurrGame);

    int GetErrCt() { return nSaveLoadErr; };
    CString GetLoadSaveStr() { return strLoadSaveStr; };
};
