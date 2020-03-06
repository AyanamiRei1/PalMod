#pragma once

#include "GameClass.h"

class CGameLoad
{
private:
	BOOL SetGame(int nGameFlag);

	UINT8(*GetRuleCtr)(void);
	void (*ResetRuleCtr)(void);
	sFileRule(*GetNextRule)(void);
	sFileRule(*GetRule)(int);
	CGameClass* CreateGame(int nGameFlag);

	CString szLoadSaveStr = "";

	int nSaveLoadCount = 0;
	int nSaveLoadSucc = 0;
	int nSaveLoadErr = 0;

public:
	CGameLoad(void);
	~CGameLoad(void);

	CGameClass* LoadFile(int nGameFlag, CHAR* szLoadFile);
	CGameClass* LoadDir(int nGameFlag, CHAR* szLoadDir);
	void SaveGame(CGameClass* CurrGame);

	int GetErrCt() { return nSaveLoadErr; };
	CString GetLoadSaveStr() { return szLoadSaveStr; };
};
