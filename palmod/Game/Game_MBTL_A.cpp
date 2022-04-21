#include "StdAfx.h"
#include "Game_MBTL_A.h"
#include "..\PalMod.h"

uint32_t CGame_MBTL_A::uRuleCtr = 0;

CDescTree CGame_MBTL_A::MainDescTree = nullptr;

#define MBTL_A_DEBUG DEFAULT_GAME_DEBUG_STATE

const std::vector<UINT16> MBTL_A_IMGIDS_USED =
{
    indexFrenchBreadSprites_MBTL_Akiha,             // 0x68
    indexFrenchBreadSprites_MBTL_Arcueid,           // 0x69
    indexFrenchBreadSprites_MBTL_Ciel,              // 0x6A
    indexFrenchBreadSprites_MBTL_CielSupers,        // 0x6B
    indexFrenchBreadSprites_MBTL_Hisui,             // 0x6C
    indexFrenchBreadSprites_MBTL_HisuiMaskShiki,    // 0x6D
    indexFrenchBreadSprites_MBTL_Kohaku,            // 0x6E
    indexFrenchBreadSprites_MBTL_Kouma,             // 0x6F
    indexFrenchBreadSprites_MBTL_Miyako,            // 0x70
    indexFrenchBreadSprites_MBTL_Noel,              // 0x71
    indexFrenchBreadSprites_MBTL_RedArcueid,        // 0x72
    indexFrenchBreadSprites_MBTL_Roa,               // 0x73
    indexFrenchBreadSprites_MBTL_Saber,             // 0x74
    indexFrenchBreadSprites_MBTL_Shiki,             // 0x75
    indexFrenchBreadSprites_MBTL_Vlov,              // 0x76
    indexFrenchBreadSprites_MBTL_Aoko,              // 0x77
    indexFrenchBreadSprites_MBTL_DANoel,            // 0x78
    indexFrenchBreadSprites_MBTL_PoweredCiel,       // 0x79
    indexFrenchBreadSprites_MBTL_Mario,             // 0x7a
    indexFrenchBreadSprites_MBTL_MarioNuns,         // 0x7b

    indexFrenchBreadSprites_MBTL_Bonus,             // 0x7c
};

struct MBTLNodeData
{
    LPCWSTR pszNodeName = L"uninit";
    UINT32 nAdjustmentFromBaseNode = 0;
};

const MBTLNodeData MBTLPaletteNodes[] =
{
    { L"Left",  0 },
    { L"Right", 0x7800 },
};

const std::vector <LPCWSTR> MBTLPaletteNamesNormal =
{
    L"1",
    L"2",
    L"3",
    L"4",
    L"5",

    L"6",
    L"7",
    L"8",
    L"9",
    L"10",
	
    L"11",
    L"12",
    L"13",
    L"14",
    L"15",

    L"16",
    L"17",
    L"18",
    L"19",
    L"20",
	
    L"21",
    L"22",
    L"23",
    L"24",
    L"25",

    L"26",
    L"27",
    L"28",
    L"29",
    L"30",
};

struct MBTLFileData
{
    LPCWSTR pszFileName = nullptr;
    LPCWSTR pszCharacter = nullptr;
    UINT32 nExpectedFileSize = 0;
    std::vector <LPCWSTR> ppszPaletteList;
    UINT32 nInitialLocation = 0;
    UINT32 nSpriteIndex = 0;
};

std::vector <MBTLFileData> MBTLCharacterData =
{
    //The character order is alphabetical instead of ID order
    { L"data\\_csel\\Chr002.pal",       L"Akiha Tohno",                            61456,    MBTLPaletteNamesNormal,    0x10, indexFrenchBreadSprites_MBTL_Akiha },
    { L"data\\_csel\\Chr015.pal",       L"Aoko Aozaki",                            61456,    MBTLPaletteNamesNormal,    0x10, indexFrenchBreadSprites_MBTL_Aoko },
    { L"data\\_csel\\Chr000.pal",       L"Arcueid",                                61456,    MBTLPaletteNamesNormal,    0x10, indexFrenchBreadSprites_MBTL_Arcueid },
    { L"data\\_csel\\Chr011.pal",       L"Ciel",                                   61456,    MBTLPaletteNamesNormal,    0x10, indexFrenchBreadSprites_MBTL_Ciel },
    { L"data\\_csel\\Chr014.pal",       L"Dead Apostle Noel",                      61456,    MBTLPaletteNamesNormal,    0x10, indexFrenchBreadSprites_MBTL_DANoel },
    { L"data\\_csel\\Chr001.pal",       L"Hisui",                                  61456,    MBTLPaletteNamesNormal,    0x10, indexFrenchBreadSprites_MBTL_Hisui },
    { L"data\\_csel\\Chr004.pal",       L"Kohaku",                                 61456,    MBTLPaletteNamesNormal,    0x10, indexFrenchBreadSprites_MBTL_Kohaku },
    { L"data\\_csel\\Chr006.pal",       L"Kouma Kishima",                          61456,    MBTLPaletteNamesNormal,    0x10, indexFrenchBreadSprites_MBTL_Kouma },
    { L"data\\_csel\\Chr017.pal",       L"Mario Gallo Bestino",                    61456,    MBTLPaletteNamesNormal,    0x10, indexFrenchBreadSprites_MBTL_Mario },
    { L"data\\_csel\\Chr013.pal",       L"Miyako Arima",                           61456,    MBTLPaletteNamesNormal,    0x10, indexFrenchBreadSprites_MBTL_Miyako },
    { L"data\\_csel\\Chr008.pal",       L"Noel",                                   61456,    MBTLPaletteNamesNormal,    0x10, indexFrenchBreadSprites_MBTL_Noel },
    { L"data\\_csel\\Chr016.pal",       L"Powered Ciel",                           61456,    MBTLPaletteNamesNormal,    0x10, indexFrenchBreadSprites_MBTL_PoweredCiel },
    { L"data\\_csel\\Chr010.pal",       L"Red Arcueid",                            61456,    MBTLPaletteNamesNormal,    0x10, indexFrenchBreadSprites_MBTL_RedArcueid },
    { L"data\\_csel\\Chr005.pal",       L"Roa",                                    61456,    MBTLPaletteNamesNormal,    0x10, indexFrenchBreadSprites_MBTL_Roa },
    { L"data\\_csel\\Chr012.pal",       L"Saber",                                  61456,    MBTLPaletteNamesNormal,    0x10, indexFrenchBreadSprites_MBTL_Saber },
    { L"data\\_csel\\Chr003.pal",       L"Shiki Tohno",                            61456,    MBTLPaletteNamesNormal,    0x10, indexFrenchBreadSprites_MBTL_Shiki },
    { L"data\\_csel\\Chr009.pal",       L"Vlov",                                   61456,    MBTLPaletteNamesNormal,    0x10, indexFrenchBreadSprites_MBTL_Vlov },


    { L"data\\chr011\\Chr011_p1.pal",   L"Ciel (Arc Drive/Last Arc)",              61456,    MBTLPaletteNamesNormal,    0x10, indexFrenchBreadSprites_MBTL_CielSupers },
    { L"data\\chr001\\Chr001_p1.pal",   L"Hisui (Mask Shiki)",                     61456,    MBTLPaletteNamesNormal,    0x10, indexFrenchBreadSprites_MBTL_Shiki },
    { L"data\\_csel\\Chr018.pal",       L"Mario (Main Sister)",                    61456,    MBTLPaletteNamesNormal,    0x10, indexFrenchBreadSprites_MBTL_MarioNuns },
    { L"data\\chr017\\Chr017_p1.pal",   L"Mario (Assist Sister)",                  61456,    MBTLPaletteNamesNormal,    0x10, indexFrenchBreadSprites_MBTL_MarioNuns },
    { L"data\\chr017\\Chr017_p2.pal",   L"Noel (Mario Arc Drive)",                 61456,    MBTLPaletteNamesNormal,    0x10, indexFrenchBreadSprites_MBTL_Noel },

};

CGame_MBTL_A::CGame_MBTL_A(UINT32 nConfirmedROMSize /* = -1 */)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX };
    SetAlphaMode(AlphaMode::GameUsesFixedAlpha);
    m_fGameUsesAlphaValue = true;
    SetColorMode(ColMode::COLMODE_RGBA8888);

    InitializeStatics();

    // Don't load extras
    m_pszExtraFilename = nullptr;

    nFileAmt = nUnitAmt = m_nTotalInternalUnits = static_cast<uint32_t>(MBTLCharacterData.size());

    InitDataBuffer();

    nGameFlag = MBTL_A;
    nImgGameFlag = IMGDAT_SECTION_FRENCHBREAD;
    m_prgGameImageSet = MBTL_A_IMGIDS_USED;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;

    pButtonLabelSet = DEF_BUTTONLABEL_2_LEFTRIGHT;

    //Create the redirect buffer
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, 0, sizeof(uint32_t) * nUnitAmt);

    FlushChangeTrackingArray();
    PrepChangeTrackingArray();
}

CGame_MBTL_A::~CGame_MBTL_A()
{
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

void CGame_MBTL_A::InitializeStatics()
{
    MainDescTree.SetRootTree(CGame_MBTL_A::InitDescTree());
}

sFileRule CGame_MBTL_A::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    const uint32_t nAdjustedUnitId = (nUnitId & RULE_COUNTER_DEMASK);
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s", MBTLCharacterData[nAdjustedUnitId].pszFileName);
    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = MBTLCharacterData[nAdjustedUnitId].nExpectedFileSize;

    return NewFileRule;
}

sFileRule CGame_MBTL_A::GetNextRule()
{
    sFileRule NewFileRule = GetRule(uRuleCtr);

    uRuleCtr++;

    if (uRuleCtr >= MBTLCharacterData.size())
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

sDescTreeNode* CGame_MBTL_A::InitDescTree()
{
    uint32_t nTotalPaletteCount = 0;
    uint32_t nUnitCt = static_cast<uint32_t>(MBTLCharacterData.size());

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[MBTL_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    strMsg.Format(L"CGame_MBTL_A_DIR::InitDescTree: Building desc tree for MBTL_A...\n");
    OutputDebugString(strMsg);

    //Go through each character
    for (uint32_t iUnitCtr = 0; iUnitCtr < nUnitCt; iUnitCtr++)
    {
        sDescTreeNode* UnitNode = nullptr;
        sDescTreeNode* CollectionNode = nullptr;
        sDescNode* ChildNode = nullptr;

        uint32_t nUnitChildCount = GetCollectionCountForUnit(iUnitCtr);

        UnitNode = &((sDescTreeNode*)NewDescTree->ChildNodes)[iUnitCtr];

        //Set each description
        _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"%s", MBTLCharacterData[iUnitCtr].pszCharacter);

        UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
        //All children have collection trees
        UnitNode->uChildType = DESC_NODETYPE_TREE;
        UnitNode->uChildAmt = nUnitChildCount;

#if MBTL_A_DEBUG
        strMsg.Format(L"Unit: \"%s\", %u of %u, %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, UnitNode->uChildAmt);
        OutputDebugString(strMsg);
#endif

        uint32_t  nTotalPalettesUsedInUnit = 0;

        //Set data for each child group ("collection")
        for (uint32_t  iCollectionCtr = 0; iCollectionCtr < nUnitChildCount; iCollectionCtr++)
        {
            CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[iCollectionCtr];

            //Set each collection data
            _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, GetDescriptionForCollection(iUnitCtr, iCollectionCtr));
            //Collection children have nodes
            uint32_t  nListedChildrenCount = GetNodeCountForCollection(iUnitCtr, iCollectionCtr);
            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nListedChildrenCount;
            CollectionNode->ChildNodes = (sDescTreeNode*)new sDescNode[nListedChildrenCount];

#if MBTL_A_DEBUG
            strMsg.Format(L"\tCollection: \"%s\", %u of %u, %u children\n", CollectionNode->szDesc, iCollectionCtr + 1, nUnitChildCount, nListedChildrenCount);
            OutputDebugString(strMsg);
#endif

            for (uint32_t  nNodeIndex = 0; nNodeIndex < nListedChildrenCount; nNodeIndex++)
            {
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nNodeIndex];

                _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, L"%s", MBTLCharacterData[iUnitCtr].ppszPaletteList[nNodeIndex]);

                ChildNode->uUnitId = iUnitCtr;
                ChildNode->uPalId = nTotalPalettesUsedInUnit++;
                nTotalPaletteCount++;

#if MBTL_A_DEBUG
                strMsg.Format(L"\t\tPalette: \"%s\", %u of %u\n", ChildNode->szDesc, nNodeIndex + 1, nListedChildrenCount);
                OutputDebugString(strMsg);
#endif
            }
        }
    }

    m_nTotalPaletteCount = nTotalPaletteCount;

    strMsg.Format(L"CGame_MBTL_A_DIR::InitDescTree: Loaded %u palettes for MBTL ROM\n", nTotalPaletteCount);
    OutputDebugString(strMsg);

    return NewDescTree;
}

uint32_t CGame_MBTL_A::GetCollectionCountForUnit(uint32_t nUnitId)
{
    // Just one palette set per character
    return ARRAYSIZE(MBTLPaletteNodes);
}

uint32_t CGame_MBTL_A::GetNodeCountForCollection(uint32_t nUnitId, uint32_t  /*nCollectionId*/)
{
    return static_cast<uint32_t>(MBTLCharacterData[nUnitId].ppszPaletteList.size());
}

uint32_t CGame_MBTL_A::GetPaletteCountForUnit(uint32_t nUnitId)
{
    return static_cast<uint32_t>(MBTLCharacterData[nUnitId].ppszPaletteList.size()) * ARRAYSIZE(MBTLPaletteNodes);
}

LPCWSTR CGame_MBTL_A::GetDescriptionForCollection(uint32_t  /*nUnitId */, uint32_t nCollectionId)
{
    return MBTLPaletteNodes[nCollectionId].pszNodeName;
}

void CGame_MBTL_A::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    // MBTL palettes are all 0x400 long
    const int cbPaletteSizeOnDisc = 0x400;

    uint32_t nAdjustedPalId = nPalId % static_cast<uint32_t>(MBTLPaletteNamesNormal.size());
    uint32_t nPaletteSet = nPalId / static_cast<uint32_t>(MBTLPaletteNamesNormal.size());

    m_pszCurrentPaletteName = MBTLCharacterData[nUnitId].ppszPaletteList[nAdjustedPalId];
    m_nCurrentPaletteROMLocation = MBTLCharacterData[nUnitId].nInitialLocation + (cbPaletteSizeOnDisc * nAdjustedPalId) + (0x0 * nAdjustedPalId);
    m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;

    if (nPaletteSet)
    {
        m_nCurrentPaletteROMLocation += MBTLPaletteNodes[nPaletteSet].nAdjustmentFromBaseNode;
    }
}

BOOL CGame_MBTL_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    //Reset palette sources
    ClearSrcPal();

    if (Node01 == -1)
    {
        return FALSE;
    }

    sDescNode* NodeGet = GetMainTree()->GetDescNode(Node01, Node02, Node03, Node04);

    if (NodeGet == NULL)
    {
        return FALSE;
    }

    //Change the image id if we need to
    int nTargetImgId = 0;
    uint32_t nImgUnitId = MBTLCharacterData[NodeGet->uUnitId].nSpriteIndex;

    // This logic presumes that we are only showing core character palettes.  If we decide to handle
    // anything else, we'd want to validate that the palette in question is in the core lists
    uint32_t nSrcStart = (int)(NodeGet->uPalId % MBTLCharacterData[NodeGet->uUnitId].ppszPaletteList.size());
    uint32_t nSrcAmt = static_cast<uint32_t>(pButtonLabelSet.size());
    uint32_t nNodeIncrement = static_cast<uint32_t>(MBTLCharacterData[NodeGet->uUnitId].ppszPaletteList.size());

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    bool fShouldUseAlternateLoadLogic = false;

    if (!fShouldUseAlternateLoadLogic)
    {
        //Create the default palette
        CreateDefPal(NodeGet, 0);

        // Only internal units get sprites
        ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
    }

    return TRUE;
}

BOOL CGame_MBTL_A::LoadFile(CFile* LoadedFile, uint32_t nUnitNumber)
{
    BOOL fSuccess = TRUE;
    CString strInfo;

    strInfo.Format(L"CGame_MBTL_A_DIR::LoadFile: Preparing to load data for unit number %u (character %s)\n", nUnitNumber, MBTLCharacterData[nUnitNumber].pszCharacter);
    OutputDebugString(strInfo);

    strInfo.Format(L"\tCGame_MBTL_A_DIR::LoadFile: Loaded palettes starting at location 0x%x\n", MBTLCharacterData[nUnitNumber].nInitialLocation);
    OutputDebugString(strInfo);

    uint32_t nPalAmt = GetPaletteCountForUnit(nUnitNumber);

    if (m_pppDataBuffer32[nUnitNumber] == nullptr)
    {
        m_pppDataBuffer32[nUnitNumber] = new UINT32 * [nPalAmt];
        memset(m_pppDataBuffer32[nUnitNumber], 0, sizeof(UINT32*) * nPalAmt);
    }

    // These are already sorted, no need to redirect
    rgUnitRedir[nUnitNumber] = nUnitNumber;

    for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
    {
        LoadSpecificPaletteData(nUnitNumber, nPalCtr);

        m_pppDataBuffer32[nUnitNumber][nPalCtr] = new UINT32[m_nCurrentPaletteSizeInColors];

        LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
        LoadedFile->Read(m_pppDataBuffer32[nUnitNumber][nPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);

#if MBTL_A_DEBUG
        strInfo.Format(L"\tCGame_MBTL_A_DIR::LoadFile: Loaded palette '%s' from location 0x%x\n", m_pszCurrentPaletteName, m_nCurrentPaletteROMLocation);
        OutputDebugString(strInfo);
#endif
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;

    return fSuccess;
}

BOOL CGame_MBTL_A::SaveFile(CFile* SaveFile, uint32_t nUnitId)
{
    UINT32 nTotalPalettesSaved = 0;
    uint32_t nPalAmt = GetPaletteCountForUnit(nUnitId);

    for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
    {
        if (IsPaletteDirty(nUnitId, nPalCtr))
        {
            LoadSpecificPaletteData(nUnitId, nPalCtr);

            SaveFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
            if (GameIsUsing16BitColor())
            {
                SaveFile->Write(m_pppDataBuffer[nUnitId][nPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);
            }
            else if (GameIsUsing32BitColor())
            {
                SaveFile->Write(m_pppDataBuffer32[nUnitId][nPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);
            }

            nTotalPalettesSaved++;
        }
    }

    CString strMsg;
    strMsg.Format(L"CGame_MBTL_A::SaveFile: Saved 0x%x palettes to disk for unit %u\n", nTotalPalettesSaved, nUnitId);
    OutputDebugString(strMsg);

    return TRUE;
}

void CGame_MBTL_A::PostSetPal(uint32_t nUnitId, uint32_t nPalId)
{
    CString strMessage;
    strMessage.Format(L"CGame_MBTL_A::PostSetPal : Updating left/right partner for unit %u palette %u.\n", nUnitId, nPalId);
    OutputDebugString(strMessage);

    static_assert(ARRAYSIZE(MBTLPaletteNodes) == 2, "MBTL post-processing presumes two paired nodes: update PostSetPal for your change.");

    uint32_t nPartnerId = nPalId;
    const uint32_t nNodeCount = GetNodeCountForCollection(nUnitId, 0);

    // Flip to the left/right partner
    if (nPalId >= nNodeCount)
    {
        nPartnerId -= nNodeCount;
        GetHost()->GetPalModDlg()->SetStatusText(L"Updated: updated Left partner palette as well.");
    }
    else
    {
        nPartnerId += nNodeCount;
        GetHost()->GetPalModDlg()->SetStatusText(L"Updated: updated Right partner palette as well.");
    }

    LoadSpecificPaletteData(nUnitId, nPalId);
    MarkPaletteDirty(nUnitId, nPartnerId);

    for (UINT16 nArrayIndex = 0; nArrayIndex < m_nCurrentPaletteSizeInColors; nArrayIndex++)
    {
        m_pppDataBuffer32[nUnitId][nPartnerId][nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nArrayIndex];
    }

    // Red Arcueid uses flipped glove positioning: adjust for that here.
    if (wcscmp(MBTLCharacterData[nUnitId].pszCharacter, L"Red Arcueid") == 0)
    {
        const UINT16 nGlove1Position = 96;
        const UINT16 nGlove2Position = 103;
        const UINT16 nGloveLength = 6;

        for (UINT16 nArrayIndex = 0; nArrayIndex < nGloveLength; nArrayIndex++)
        {
            m_pppDataBuffer32[nUnitId][nPartnerId][nGlove1Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nGlove2Position + nArrayIndex];
            m_pppDataBuffer32[nUnitId][nPartnerId][nGlove2Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nGlove1Position + nArrayIndex];
        }
    }
}
