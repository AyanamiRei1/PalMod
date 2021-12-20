#include "StdAfx.h"
#include "GameDef.h"
#include "Game_MVC2_A.h"
#include "Game_MVC2_D.h"
#include "mvc2_descs.h"
#include "mvc2_supp.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define MVC2_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_MVC2_A::MVC2_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_MVC2_A::MainDescTree = nullptr;

size_t CGame_MVC2_A::rgExtraCountAll[MVC2_A_NUMUNIT + 1];
size_t CGame_MVC2_A::rgExtraLoc[MVC2_A_NUMUNIT + 1];

UINT32 CGame_MVC2_A::m_nTotalPaletteCountForMVC2 = 0;
UINT32 CGame_MVC2_A::m_nExpectedGameROMSize = 0x889B600; // 143,242,752 bytes
UINT32 CGame_MVC2_A::m_nConfirmedROMSize = -1;

void CGame_MVC2_A::InitializeStatics()
{
    safe_delete_array(CGame_MVC2_A::MVC2_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_MVC2_A::InitDescTree());
}

CGame_MVC2_A::CGame_MVC2_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_MVC2_A::CGame_MVC2_A: Loading ROM...\n");

    //Set color mode
    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_MAX };
    SetAlphaMode(AlphaMode::GameUsesVariableAlpha);
    SetColorMode(ColMode::COLMODE_RGB444_BE);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = MVC2_A_NUMUNIT;
    m_nExtraUnit = MVC2_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 6370;
    m_pszExtraFilename = EXTRA_FILENAME_MVC2_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForMVC2;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x260a9c0;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = MVC2_A;
    nImgGameFlag = IMGDAT_SECTION_CPS2;
    m_prgGameImageSet = MVC2_IMGIDS_USED;

    m_fGameUsesAlphaValue = true;

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_TOPTOBOTTOM;
    pButtonLabelSet = DEF_BUTTONLABEL6_MVC2;

    //Set the MVC2 supp game
    MVC2_SupplementProcessing::CurrMVC2 = (CGame_MVC2_D*)this;
    MVC2_SupplementProcessing::CurrMVC2_Arcade = this;
    //Prepare it
    MVC2_SupplementProcessing::prep_supp(false);

    //Create the redirect buffer
    rgUnitRedir = new size_t[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(size_t) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_MVC2_A::~CGame_MVC2_A(void)
{
    safe_delete_array(CGame_MVC2_A::MVC2_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();

    MVC2_SupplementProcessing::CurrMVC2 = nullptr;
    MVC2_SupplementProcessing::CurrMVC2_Arcade = nullptr;
}

CDescTree* CGame_MVC2_A::GetMainTree()
{
    return &CGame_MVC2_A::MainDescTree;
}

size_t CGame_MVC2_A::GetExtraCt(size_t nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, MVC2_A_NUMUNIT, nUnitId, MVC2_A_EXTRA_CUSTOM);
}

size_t CGame_MVC2_A::GetExtraLoc(size_t nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, MVC2_A_NUMUNIT, nUnitId, MVC2_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_MVC2_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_MVC2_A, MVC2_A_EXTRA, &MVC2_A_EXTRA_CUSTOM, MVC2_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = MVC2_A_NUMUNIT + (GetExtraCt(MVC2_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[MVC2_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForMVC2 = _InitDescTree(NewDescTree,
        MVC2_A_UNITS,
        MVC2_A_EXTRALOC,
        MVC2_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        MVC2_A_EXTRA_CUSTOM
    );;

    // For development use to speed things up
    //DumpAllCharacters();

    return NewDescTree;
}

sFileRule CGame_MVC2_A::GetRule(size_t nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"Marvel vs. Capcom 2.dat");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

size_t CGame_MVC2_A::GetCollectionCountForUnit(size_t nUnitId)
{
    if (nUnitId == MVC2_A_EXTRALOC)
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        return MVC2_A_UNITS[nUnitId].uChildAmt;
    }
}

size_t CGame_MVC2_A::GetNodeCountForCollection(size_t nUnitId, size_t nCollectionId)
{
    return _GetNodeCountForCollection(MVC2_A_UNITS, rgExtraCountAll, MVC2_A_NUMUNIT, MVC2_A_EXTRALOC, nUnitId, nCollectionId, MVC2_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_MVC2_A::GetDescriptionForCollection(size_t nUnitId, size_t nCollectionId)
{
    return _GetDescriptionForCollection(MVC2_A_UNITS, MVC2_A_EXTRALOC, nUnitId, nCollectionId);
}

size_t CGame_MVC2_A::GetPaletteCountForUnit(size_t nUnitId)
{
    return _GetPaletteCountForUnit(MVC2_A_UNITS, rgExtraCountAll, MVC2_A_NUMUNIT, MVC2_A_EXTRALOC, nUnitId, MVC2_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_MVC2_A::GetPaletteSet(size_t nUnitId, size_t nCollectionId)
{
    return _GetPaletteSet(MVC2_A_UNITS, nUnitId, nCollectionId);
}

size_t CGame_MVC2_A::GetNodeSizeFromPaletteId(size_t nUnitId, size_t nPaletteId)
{
    // Don't use this for Extra palettes.
    size_t nNodeSize = 0;
    size_t nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteSetToUse = nullptr;
    size_t nDistanceFromZero = nPaletteId;

    for (size_t nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToCheck = GetPaletteSet(nUnitId, nCollectionIndex);
        size_t nNodeCount = GetNodeCountForCollection(nUnitId, nCollectionIndex);

        if (nDistanceFromZero < nNodeCount)
        {
            nNodeSize = nNodeCount;
            break;
        }

        nDistanceFromZero -= nNodeCount;
    }

    return nNodeSize;
}

const sDescTreeNode* CGame_MVC2_A::GetNodeFromPaletteId(size_t nUnitId, size_t nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(MVC2_A_UNITS, rgExtraCountAll, MVC2_A_NUMUNIT, MVC2_A_EXTRALOC, nUnitId, nPaletteId, MVC2_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_MVC2_A::GetSpecificPalette(size_t nUnitId, size_t nPaletteId)
{
    return _GetSpecificPalette(MVC2_A_UNITS, rgExtraCountAll, MVC2_A_NUMUNIT, MVC2_A_EXTRALOC, nUnitId, nPaletteId, MVC2_A_EXTRA_CUSTOM);
}

void CGame_MVC2_A::LoadSpecificPaletteData(size_t nUnitId, size_t nPalId)
{
     if (nUnitId != MVC2_A_EXTRALOC)
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        if (paletteData)
        {
            cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

            m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;
            m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
            m_pszCurrentPaletteName = paletteData->szPaletteName;
        }
        else
        {
            // A bogus palette was requested: this is unrecoverable.
            DebugBreak();
        }
    }
    else // MVC2_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForMVC2(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_MVC2_A::LoadFile(CFile* LoadedFile, size_t nUnitId)
{
    for (size_t nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        size_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        m_pppDataBuffer[nUnitCtr] = new UINT16 * [nPalAmt];

        // Use a sorted layout
        rgUnitRedir[nUnitCtr] = MVC2_A_UNITSORT[nUnitCtr];

        for (size_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            LoadSpecificPaletteData(nUnitCtr, nPalCtr);

            m_pppDataBuffer[nUnitCtr][nPalCtr] = new UINT16[m_nCurrentPaletteSizeInColors];

            if (nUnitCtr == indexMVC2ATeamView)
            {
                // This is a virtual group.
                // We just need to be indexed in the rgUnitRedir
                ZeroMemory(m_pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSizeInColors);
                continue;
            }
            else
            {
                LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);

                LoadedFile->Read(m_pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSizeInColors * 2);
            }
        }
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;
    
    CheckForErrorsInTables();

    return TRUE;
}

BOOL CGame_MVC2_A::SaveFile(CFile* SaveFile, size_t nUnitId)
{
    UINT32 nTotalPalettesSaved = 0;

    for (size_t nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        if (nUnitCtr == indexMVC2ATeamView)
        {
            // This is a virtual group.
            continue;
        }

        size_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        for (size_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            // We don't mark proc_supp palettes dirty: only use this check if we change that behavior
            //if (IsPaletteDirty(nUnitCtr, nPalCtr))
            {
                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                SaveFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                SaveFile->Write(m_pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSizeInColors * 2);
                nTotalPalettesSaved++;
            }
        }
    }

    CString strMsg;
    strMsg.Format(L"CGame_MVC2_A::SaveFile: Saved 0x%x palettes to disk for %u units\n", nTotalPalettesSaved, nUnitAmt);
    OutputDebugString(strMsg);

    return TRUE;
}

BOOL CGame_MVC2_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    //Reset palette sources
    ClearSrcPal();

    if (Node01 == -1)
    {
        return FALSE;
    }

    sDescNode* NodeGet = GetMainTree()->GetDescNode(Node01, Node02, Node03, Node04);

    if (NodeGet == nullptr)
    {
        return FALSE;
    }

    // Default values for multisprite image display for Export
    int nSrcStart = (int)NodeGet->uPalId;
    size_t nSrcAmt = 1;
    int nNodeIncrement = 1;

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    // Make sure to reset the image id
    nTargetImgId = 0;
    size_t nImgUnitId = INVALID_UNIT_VALUE;

    bool fShouldUseAlternateLoadLogic = false;

    // Only load images for internal units, since we don't currently have a methodology for associating
    // external loads to internal sprites.
    if (NodeGet->uUnitId != MVC2_A_EXTRALOC)
    {
        const sGame_PaletteDataset* paletteDataSet = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);

        if (paletteDataSet)
        {
            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;

            const sDescTreeNode* pCurrentNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId, false);

            if (pCurrentNode) // For Basic nodes, we can allow multisprite view in the Export dialog
            {
                if (NodeGet->uUnitId == indexMVC2ATeamView)
                {
                    UINT16 nJoinedUnit1 = indexMVC2AMagneto;
                    UINT16 nJoinedUnit2 = indexMVC2AStorm;
                    UINT16 nJoinedUnit3 = indexMVC2APsylocke;
                    bool fTeamFound = false;

                    fShouldUseAlternateLoadLogic = true;

                    for (UINT16 nTeamIndex = 0; nTeamIndex < ARRAYSIZE(mvc2TeamList); nTeamIndex++)
                    {
                        if (_wcsicmp(mvc2TeamList[nTeamIndex].pszTeamName, pCurrentNode->szDesc) == 0)
                        {
                            nJoinedUnit1 = mvc2TeamList[nTeamIndex].nCharacterOne;
                            nJoinedUnit2 = mvc2TeamList[nTeamIndex].nCharacterTwo;
                            nJoinedUnit3 = mvc2TeamList[nTeamIndex].nCharacterThree;
                            fTeamFound = true;
                            break;
                        }
                    }

                    if (!fTeamFound)
                    {
                        OutputDebugString(L"WARNING: MVC2 Team lookup failed. Please fix.  Will use MSP for now.\n");
                    }

                    // Reset just in case
                    pButtonLabelSet = DEF_BUTTONLABEL6_MVC2;

                    UINT16 nNodeIndex = (NodeGet->uPalId % static_cast<UINT16>(pButtonLabelSet.size()));
                    // there are 8 palettes per main character button/color section
                    UINT16 nPaletteIndex = nNodeIndex * 8;
                    const sGame_PaletteDataset* palette1ToJoin = GetSpecificPalette(nJoinedUnit1, nPaletteIndex);
                    const sGame_PaletteDataset* palette2ToJoin = GetSpecificPalette(nJoinedUnit2, nPaletteIndex);
                    const sGame_PaletteDataset* palette3ToJoin = GetSpecificPalette(nJoinedUnit3, nPaletteIndex);


                    // Get the image dimensions so that we can collate them into one contiguous strip
                    std::array<sImgDef*, 3> pImgDefSet = {
                                                        GetHost()->GetImgFile()->GetImageDef(palette1ToJoin->indexImgToUse, k_nSpecialTeamSpriteImageIndex),
                                                        GetHost()->GetImgFile()->GetImageDef(palette2ToJoin->indexImgToUse, k_nSpecialTeamSpriteImageIndex),
                                                        GetHost()->GetImgFile()->GetImageDef(palette3ToJoin->indexImgToUse, k_nSpecialTeamSpriteImageIndex)
                    };

                    const int nXOffsetForFirst = 0;
                    const int nXOffsetForSecond = pImgDefSet[0]->uImgWidth;
                    const int nXOffsetForThird = pImgDefSet[0]->uImgWidth + pImgDefSet[1]->uImgWidth;

                    // Height is always 186, so we can't use image height to adjust positions: ignore Y for now.

                    ClearSetImgTicket(
                        CreateImgTicket(palette1ToJoin->indexImgToUse, k_nSpecialTeamSpriteImageIndex,
                            CreateImgTicket(palette2ToJoin->indexImgToUse, k_nSpecialTeamSpriteImageIndex,
                                CreateImgTicket(palette3ToJoin->indexImgToUse, k_nSpecialTeamSpriteImageIndex, nullptr, nXOffsetForThird),
                                nXOffsetForSecond),
                            nXOffsetForFirst
                        )
                    );

                    //Set each palette
                    std::vector<sDescNode*> JoinedNode = {
                        GetMainTree()->GetDescNode(nJoinedUnit1, nNodeIndex, 0, -1),
                        GetMainTree()->GetDescNode(nJoinedUnit2, nNodeIndex, 0, -1),
                        GetMainTree()->GetDescNode(nJoinedUnit3, nNodeIndex, 0, -1)
                    };

                    //Set each palette
                    CreateDefPal(JoinedNode[0], 0);
                    CreateDefPal(JoinedNode[1], 1);
                    CreateDefPal(JoinedNode[2], 2);

                    nSrcAmt = pButtonLabelSet.size(); // 6 button colors
                    nNodeIncrement = 8; // 8 palettes per main character color set
                    SetSourcePal(0, nJoinedUnit1, 0, nSrcAmt, nNodeIncrement);
                    SetSourcePal(1, nJoinedUnit2, 0, nSrcAmt, nNodeIncrement);
                    SetSourcePal(2, nJoinedUnit3, 0, nSrcAmt, nNodeIncrement);
                }
                else  if ((_wcsicmp(pCurrentNode->szDesc, L"LP") == 0) || (_wcsicmp(pCurrentNode->szDesc, L"LK") == 0) ||
                          (_wcsicmp(pCurrentNode->szDesc, L"HP") == 0) || (_wcsicmp(pCurrentNode->szDesc, L"HK") == 0) ||
                          (_wcsicmp(pCurrentNode->szDesc, L"A1") == 0) || (_wcsicmp(pCurrentNode->szDesc, L"A2") == 0))
                {
                    // We show 6 sprites (LP...A2) for export for all normal MVC2 sprites
                    nSrcAmt = pButtonLabelSet.size();
                    nNodeIncrement = pCurrentNode->uChildAmt;
                    // Need to reset because we have a status effect label set as well.
                    pButtonLabelSet = DEF_BUTTONLABEL6_MVC2;

                    while (nSrcStart >= nNodeIncrement)
                    {
                        // The starting point is the absolute first palette for the sprite in question which is found in P1
                        nSrcStart -= nNodeIncrement;
                    }
                }
                else if (_wcsicmp(pCurrentNode->szDesc, L"Status Effects") == 0)
                {
                    // Status Effects follow main buttons but are before Extras, if any
                    nSrcStart = 0;

                    for (UINT16 iCollectionIndex = 0; iCollectionIndex < DEF_BUTTONLABEL6_MVC2.size(); iCollectionIndex++)
                    {
                        nSrcStart += GetNodeCountForCollection(NodeGet->uUnitId, iCollectionIndex);
                    }

                    // There are 8 status effects
                    nSrcAmt = 8;
                    nNodeIncrement = paletteDataSet->pPalettePairingInfo ? 2 : 1;
                    pButtonLabelSet = DEF_LABEL_STATUS_EFFECTS;
                }
            }

            if (paletteDataSet->pPalettePairingInfo)
            {
                if (NodeGet->uUnitId == indexMVC2AShuma)
                {
                    OutputDebugString(L"Sadness: this sprite is wrong.  Should be reripped as paired.\n");
                }
                else
                {
                    if (paletteDataSet->pPalettePairingInfo == &pairFullyLinkedNode)
                    {
                        const size_t nPaletteCount = GetNodeSizeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId);

                        fShouldUseAlternateLoadLogic = true;
                        sImgTicket* pImgArray = nullptr;

                        for (size_t nPaletteIndex = 0; nPaletteIndex < nPaletteCount; nPaletteIndex++)
                        {
                            // The palettes get added forward, but the image tickets need to be generated in reverse order
                            const sGame_PaletteDataset* paletteDataSetToJoin = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + (nPaletteCount - 1 - nPaletteIndex));
                            if (paletteDataSetToJoin)
                            {
                                pImgArray = CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse, pImgArray);

                                //Set each palette
                                sDescNode* JoinedNode = GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPaletteIndex, -1);
                                CreateDefPal(JoinedNode, nPaletteIndex);
                                SetSourcePal(nPaletteIndex, NodeGet->uUnitId, nSrcStart + nPaletteIndex, nSrcAmt, nNodeIncrement);
                            }
                        }

                        ClearSetImgTicket(pImgArray);
                    }
                    else
                    {
                        std::vector<const sGame_PaletteDataset*> vsPaletteDataSetToJoin;
                        std::vector<int> vnPeerPaletteDistances;
                        bool fAllNodesFound = true;

                        for (size_t nPairIndex = 0; nPairIndex < paletteDataSet->pPalettePairingInfo->nPalettesToJoin; nPairIndex++)
                        {
                            switch (nPairIndex)
                            {
                            default:
                                // Fail
                                fAllNodesFound = false;
                                __fallthrough;
                            case 0:
                                vnPeerPaletteDistances.push_back(0);
                                break;
                            case 1:
                                vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner);
                                break;
                            case 2:
                                vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo2ndPartner);
                                break;
                            case 3:
                                vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo3rdPartner);
                                break;
                            case 4:
                                vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo4thPartner);
                                break;
                            case 5:
                                vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo5thPartner);
                                break;
                            case 6:
                                vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo6thPartner);
                                break;
                            case 7:
                                vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo7thPartner);
                                break;
                            }

                            const sGame_PaletteDataset* paletteDataSetToJoin = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + vnPeerPaletteDistances[nPairIndex]);

                            if (paletteDataSetToJoin)
                            {
                                vsPaletteDataSetToJoin.push_back(paletteDataSetToJoin);
                            }
                            else
                            {
                                fAllNodesFound = false;
                            }
                        }

                        std::vector<sDescNode*> vsJoinedNodes;

                        for (size_t nNodeIndex = 0; nNodeIndex < paletteDataSet->pPalettePairingInfo->nPalettesToJoin; nNodeIndex++)
                        {
                            sDescNode* sSearchedNode = nullptr;

                            // We need to readjust the nodes here.
                            size_t nNodeSize = 8;
                            size_t nAdjustedCollectionIndex = Node02;
                            INT32 nAdjustedButtonIndex = Node03 + vnPeerPaletteDistances[nNodeIndex];

                            while (nAdjustedButtonIndex >= 0)
                            {
                                sSearchedNode = GetMainTree()->GetDescNode(Node01, nAdjustedCollectionIndex, nAdjustedButtonIndex, -1);

                                if (sSearchedNode)
                                {
                                    break;
                                }

                                // This palette isn't in this node: walk to the next available node for this unit.
                                nAdjustedButtonIndex -= nNodeSize;
                                nAdjustedCollectionIndex++;
                            }

                            if (sSearchedNode)
                            {
                                vsJoinedNodes.push_back(sSearchedNode);
                            }
                            else
                            {
                                fAllNodesFound = false;
                            }
                        }

                        if (fAllNodesFound)
                        {
                            fShouldUseAlternateLoadLogic = true;

                            std::vector<sImgTicket*> vsImagePairs;
                            sImgTicket* pPreviousImage = nullptr;

                            for (int nNodeIndex = ((int)paletteDataSet->pPalettePairingInfo->nPalettesToJoin) - 1; nNodeIndex >= 0; nNodeIndex--)
                            {
                                // We allow shifted layout for the second paired palette only
                                const int nXOffs = (nNodeIndex == 1) ? paletteDataSet->pPalettePairingInfo->nXOffs : 0;
                                const int nYOffs = (nNodeIndex == 1) ? paletteDataSet->pPalettePairingInfo->nYOffs : 0;

                                sImgTicket* pThisImage = CreateImgTicket(vsPaletteDataSetToJoin[nNodeIndex]->indexImgToUse, vsPaletteDataSetToJoin[nNodeIndex]->indexOffsetToUse, pPreviousImage, nXOffs, nYOffs);

                                vsImagePairs.push_back(pThisImage);

                                pPreviousImage = pThisImage;
                            }

                            ClearSetImgTicket(vsImagePairs[(paletteDataSet->pPalettePairingInfo->nPalettesToJoin - 1)]);

                            for (int nPairIndex = 0; nPairIndex < (int)paletteDataSet->pPalettePairingInfo->nPalettesToJoin; nPairIndex++)
                            {
                                //Set each palette
                                CreateDefPal(vsJoinedNodes[nPairIndex], nPairIndex);

                                SetSourcePal(nPairIndex, NodeGet->uUnitId, nSrcStart + vnPeerPaletteDistances[nPairIndex], nSrcAmt, nNodeIncrement);
                            }
                        }
                    }
                }
            }
        }
    }
    
    if (!fShouldUseAlternateLoadLogic)
    {
        //Create the default palette
        ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

        CreateDefPal(NodeGet, 0);

        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
    }

    return TRUE;
}

size_t CGame_MVC2_A::GetBasicOffset(size_t nPalId)
{
    // Each character by default gets 6 buttons worth of 8 palettes.  
    if (nPalId >= (size_t)(8 * k_mvc2_character_coloroption_count))
    {
        // This palette is in the Extra group for this character
        return -1;
    }
    else
    {
        // This is a stock palette entry for this character: return the MOD so we know the 
        // particular offset within this button group.
        return (nPalId % 8);
    }
}

void CGame_MVC2_A::PostSetPal(size_t nUnitId, size_t nPalId)
{
    size_t nBasicOffset = GetBasicOffset(nPalId);

    CString strMessage;
    strMessage.Format(L"CGame_MVC2_A::GetBasicOffset : Palette %u updated.  This palette is %s.\n", nPalId, (nBasicOffset != -1) ? L"basic" : L"Extra");
    OutputDebugString(strMessage);

    MVC2_SupplementProcessing::proc_supp(nUnitId, nPalId);
}
