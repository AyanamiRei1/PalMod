#include "StdAfx.h"
#include "DescTree.h"

CDescTree::CDescTree(sDescTreeNode* InputTree)
{
    SetRootTree(InputTree);
}

CDescTree::~CDescTree()
{
    FlushRootTree();
}

void CDescTree::FlushRootTree()
{
    if (RootTree && m_isInitialized)
    {
        m_isInitialized = false;
        FlushTree(RootTree);
        safe_delete(RootTree);
    }
}

void CDescTree::SetRootTree(sDescTreeNode* NewTree)
{
    FlushRootTree();

    if (NewTree)
    {
        RootTree = NewTree;
        m_isInitialized = true;
    }
}

void CDescTree::FlushTree(sDescTreeNode* CurrTree)
{
    if (CurrTree)
    {
        switch (CurrTree->uChildType)
        {
        case DESC_NODETYPE_TREE:
        {
            for (uint16_t nChildCtr = 0; nChildCtr < CurrTree->uChildAmt; nChildCtr++)
            {
                FlushTree(&((sDescTreeNode*)CurrTree->ChildNodes)[nChildCtr]);
            }

           safe_delete_array(CurrTree->ChildNodes);
           break;
        }

        case DESC_NODETYPE_NODE:
        {
            safe_delete_array(CurrTree->ChildNodes);
            break;
        }
        }
    }
}

// Debug functionality so you can see how a game is going to be presented.
void CDescTree::DumpTree(const sDescTreeNode* pTreeOfInterest)
{
    const sDescTreeNode* pTreeToEnumerate = (pTreeOfInterest == nullptr) ? RootTree : pTreeOfInterest;

    if (pTreeToEnumerate)
    {
        CString strOutput;

        switch (pTreeToEnumerate->uChildType)
        {
        case DESC_NODETYPE_NODE:
            strOutput.Format(L"\tButton '%s'.  It has 0x%x children.\n", pTreeToEnumerate->szDesc, pTreeToEnumerate->uChildAmt);
            OutputDebugString(strOutput);

            for (uint16_t iPlaceInNode = 0; iPlaceInNode < pTreeToEnumerate->uChildAmt; iPlaceInNode++)
            {
                sDescNode* pChildNode = &((sDescNode*)pTreeToEnumerate->ChildNodes)[iPlaceInNode];

                if (pChildNode)
                {
                    strOutput.Format(L"\t\tNode '%s'.  This is UnitId 0x%x, PaletteId 0x%x.\n", pChildNode->szDesc, pChildNode->uUnitId, pChildNode->uPalId);
                    OutputDebugString(strOutput);
                }
            }
            break;
        case DESC_NODETYPE_TREE:
            strOutput.Format(L"Entering unit '%s'. It has 0x%x child Buttons.\n", pTreeToEnumerate->szDesc, pTreeToEnumerate->uChildAmt);
            OutputDebugString(strOutput);

            for (uint16_t iPlaceInNode = 0; iPlaceInNode < pTreeToEnumerate->uChildAmt; iPlaceInNode++)
            {
                sDescTreeNode* pChildTreeSet = &((sDescTreeNode*)pTreeToEnumerate->ChildNodes)[iPlaceInNode];

                if (pChildTreeSet)
                {
                    DumpTree(pChildTreeSet);
                }
            }
            break;
        }
    }
    else
    {
        OutputDebugString(L"No tree loaded.\n");
    }
}

sDescTreeNode* CDescTree::GetDescTree(int nChildId, ...)
{
    if (nChildId == -1)
    {
        return RootTree;
    }

    sDescTreeNode* OutTree = RootTree;
    BOOL fChildIsNode = FALSE;

    int nCurrId = nChildId;
    va_list args;

    va_start(args, nChildId);

    while ((nCurrId != -1) && !fChildIsNode)
    {
        switch (OutTree->uChildType)
        {
        case DESC_NODETYPE_NODE:
            fChildIsNode = TRUE;
            // Caller needs to cast to sDescNode
            OutTree = &((sDescTreeNode*)OutTree->ChildNodes)[nCurrId];
            break;
        case DESC_NODETYPE_TREE:
            OutTree = &((sDescTreeNode*)OutTree->ChildNodes)[nCurrId];
            break;
        }

        nCurrId = va_arg(args, int);
    }

    va_end(args);

    return OutTree;
}

sDescNode* CDescTree::GetDescNode(int nChildId, ...)
{
    sDescTreeNode* CurrTree = RootTree;
    sDescNode* OutNode = nullptr;

    uint32_t nCurrId = 0;
    BOOL fFoundNode = FALSE;

    va_list args;

    va_start(args, nChildId);

    nCurrId = nChildId;

    while (!fFoundNode && (nCurrId != -1))
    {
        switch (CurrTree->uChildType)
        {
        case DESC_NODETYPE_NODE:
        {
            fFoundNode = TRUE;

            if (nCurrId < CurrTree->uChildAmt)
            {
                OutNode = &((sDescNode*)CurrTree->ChildNodes)[nCurrId];
            }
        }
        break;

        case DESC_NODETYPE_TREE:
        {
            if (nCurrId < CurrTree->uChildAmt)
            {
                CurrTree = &((sDescTreeNode*)CurrTree->ChildNodes)[nCurrId];
            }
        }
        break;
        }

        nCurrId = va_arg(args, int);
    }

    va_end(args);

    return OutNode;
}
