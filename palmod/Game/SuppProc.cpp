#include "StdAfx.h"
#include "SuppProc.h"
#include "ColorScale.h"
#include "ColorSystem.h"
#include "..\PalMod.h"

// Our supplement palette array parsing doesn't natively handle negative numbers,
// so this function allows us to handle that.
int AdjustNumberForPossibleNegation(int nPossiblyNegativeNumber)
{
    if (nPossiblyNegativeNumber > NEG)
    {
        nPossiblyNegativeNumber -= NEG;
        nPossiblyNegativeNumber *= -1;
    }

    return nPossiblyNegativeNumber;
}

void CSecondaryPaletteProcessing::ProcessSecondaryCopyWithIndex(UINT16 char_id, UINT16 source_palette, UINT16 destination_palette, UINT8 dst_index, UINT8 src_index, UINT8 index_amt)
{
    CString strDebugInfo;
    if ((src_index == 0) && (index_amt == 0x10))
    {
        strDebugInfo.Format(L"\t\tProcessSecondaryCopyWithIndex being applied: full copy of source palette 0x%x to destination palette 0x%x\n",
            source_palette, destination_palette);
    }
    else
    {
        strDebugInfo.Format(L"\t\tProcessSecondaryCopyWithIndex being applied: copying from source palette 0x%x at index 0x%x to destination palette 0x%x at index 0x%x for 0x%x colors\n",
            source_palette, src_index, destination_palette, dst_index, index_amt);
    }
    OutputDebugString(strDebugInfo);

    COLORREF* pSourcePalette = CreatePal(char_id, source_palette);
    COLORREF* pDestinationPalette = CreatePal(char_id, destination_palette);

    if (pSourcePalette && pDestinationPalette)
    {
        memcpy(&pDestinationPalette[dst_index], &pSourcePalette[src_index], index_amt * sizeof(COLORREF));

        WritePal(char_id, destination_palette, pDestinationPalette, dst_index + index_amt);
    }
    else
    {
        MessageBox(g_appHWnd, L"Warning: invalid secondary palette change requested.  This is a bug in PalMod: please report.", GetHost()->GetAppName(), MB_ICONERROR);
    }
}

void CSecondaryPaletteProcessing::ProcessSecondaryWhite(UINT16 char_id, UINT16 destination_palette, UINT8 index_start, UINT8 index_inc)
{
    OutputDebugString(L"\t\tProcessSecondaryWhite being applied\n");

    COLORREF* pDestinationPalette = CreatePal(char_id, destination_palette);

    if (pDestinationPalette)
    {
        for (int i = index_start; i < (index_start + index_inc); i++)
        {
            pDestinationPalette[i] = 0xFF000000 | RGB(0xff, 0xff, 0xff);
        }

        WritePal(char_id, destination_palette, pDestinationPalette, -1);
    }
    else
    {
        MessageBox(g_appHWnd, L"Warning: invalid secondary palette change requested.  This is a bug in PalMod: please report.", GetHost()->GetAppName(), MB_ICONERROR);
    }
}

void CSecondaryPaletteProcessing::ProcessSecondaryHSLEffects(UINT16 char_id, UINT16 mod_type, int mod_amt, UINT16 destination_palette, UINT8 index_start, UINT8 index_inc)
{
    COLORREF* pDestinationPalette = CreatePal(char_id, destination_palette);

    if (pDestinationPalette)
    {
        double src_h, src_s, src_l, /* add_h ,*/ add_s = 0.0, add_l = 0.0;

        mod_amt = AdjustNumberForPossibleNegation(mod_amt);

        CString strDebugInfo;
        strDebugInfo.Format(L"\t\tProcessSecondaryHSLEffects being applied : applying %s at %i to palette 0x%x starting at 0x%x for 0x%x colors\n", (mod_type == MOD_LUM) ? L"MOD_LUM" : L"MOD_SAT", mod_amt, destination_palette, index_start, index_inc);
        OutputDebugString(strDebugInfo);

        switch (mod_type)
        {
            /*
        case MOD_HUE:
            add_h = (double)mod_amt / 360.0;
            */
        case MOD_LUM:
            add_l = (double)mod_amt / 100.0;
            break;
        case MOD_SAT:
            add_s = (double)mod_amt / 255.0;
            break;
        }

        for (int i = index_start; i < (index_start + index_inc); i++)
        {
            COLORREF input_col = pDestinationPalette[i];

            RGBtoHLS(input_col, &src_h, &src_l, &src_s);

            //src_h += add_l;
            src_s += add_s;
            src_l += add_l;

            src_s = LimitHLS(src_s);
            src_l = LimitHLS(src_l);

            // Convert back, forcing alpha on the way.
            pDestinationPalette[i] = 0xFF000000 | HLStoRGB(src_h, src_l, src_s);
        }

        WritePal(char_id, destination_palette, pDestinationPalette, -1);
    }
    else
    {
        MessageBox(g_appHWnd, L"Warning: invalid secondary palette change requested.  This is a bug in PalMod: please report.", GetHost()->GetAppName(), MB_ICONERROR);
    }
}

void CSecondaryPaletteProcessing::ProcessSecondaryTintEffects(UINT16 char_id, UINT16 source_palette, UINT16 destination_palette, UINT8 dst_index, UINT8 src_index, UINT8 index_amt,
    int tint_factor_r, int tint_factor_g, int tint_factor_b)
{
    COLORREF* pSourcePalette = CreatePal(char_id, source_palette);
    COLORREF* pDestinationPalette = CreatePal(char_id, destination_palette);

    if (pSourcePalette && pDestinationPalette)
    {
        tint_factor_r = AdjustNumberForPossibleNegation(tint_factor_r);
        tint_factor_g = AdjustNumberForPossibleNegation(tint_factor_g);
        tint_factor_b = AdjustNumberForPossibleNegation(tint_factor_b);

        CString strDebugInfo;
        strDebugInfo.Format(L"\t\tProcessSecondaryTintEffects being applied : applying tint(%i, %i, %i) from source palette 0x%x at 0x%x to palette 0x%x at 0x%x for 0x%x colors\n",
            tint_factor_r, tint_factor_g, tint_factor_b, source_palette, src_index, destination_palette, dst_index, index_amt);
        OutputDebugString(strDebugInfo);

        for (UINT8 offset = 0; offset < index_amt; offset++)
        {
            COLORREF input_col = pSourcePalette[offset + src_index];

            pSourcePalette[offset + src_index] = input_col;

            AddColorStepsToColorValue(input_col, &pDestinationPalette[offset + dst_index],
                tint_factor_r,
                tint_factor_g,
                tint_factor_b,
                0);
        }

        WritePal(char_id, destination_palette, pDestinationPalette, -1);
    }
    else
    {
        MessageBox(g_appHWnd, L"Warning: invalid secondary palette change requested.  This is a bug in PalMod: please report.", GetHost()->GetAppName(), MB_ICONERROR);
    }
}

void CSecondaryPaletteProcessing::ProcessAdditionalPaletteChangesRequired(const UINT16 nUnitId, const UINT16 nChangedPaletteNumber, const UINT16* supplementalEffectsData)
{
    CString strDebugInfo;
    strDebugInfo.Format(L"\tProcessAdditionalPaletteChangesRequired: Processing supplemental palettes for unit 0x%02x palette number 0x%x\n", nUnitId, nChangedPaletteNumber);
    OutputDebugString(strDebugInfo);

    UINT8 tokens_used = 0;

    //SUPP_NODE
    // Syntax:
    //  SUPP_NODE, <Increment to palette to change>, <MVC2 only value, leave as 0>

    //Check to see if we are modifying any basic palettes
    UINT16 indexCounterForEffects = 1; // 1 to skip the START token
    UINT16 currentEffectsToken = supplementalEffectsData[indexCounterForEffects];

    while ((currentEffectsToken & 0xF000) != SUPP_START) // SUPP_START marks the beginning of the next character
    {
        // If the current position is SUPP_NODE or SUPP_NODE_*, that indicates the beginning of a new modifier array
            //Possible sources = SUPP_NODE, SUPP_NODE_EX, SUPP_NODE_ABSOL, SUPP_NODE_EX | SUPP_NODE_NOCOPY, SUPP_NODE_EX | SUPP_NODE_ABSOL
        if ((currentEffectsToken & 0xF000) == SUPP_NODE)
        {
            OutputDebugString(L"\tProcessAdditionalPaletteChangesRequired: New modification node encountered\n");

            tokens_used = 3; //count of data provided for a SUPP_NODE entry, which is the minimum.

            UINT16 in_start = supplementalEffectsData[indexCounterForEffects + 1];

            // Figure out what palettes we're going to be modifying
            UINT16 destination_palette = nChangedPaletteNumber + (in_start & 0x7FFF);

            //Set the counter past the indexes into the actual actions and reset the step counter
            indexCounterForEffects += tokens_used;
            tokens_used = 0;

            {
                strDebugInfo.Format(L"\t\tPreparing to process from palette 0x%x to palette 0x%x\n", nChangedPaletteNumber, destination_palette);
                OutputDebugString(strDebugInfo);

                // Unless we get told otherwise, we do a copy first and then worry about modifying values.
                if (currentEffectsToken != SUPP_NODE_NOCOPY)
                {
                    int copy_start = 0;
                    int copy_amt = GetCurrentPaletteSizeInColors();
                    int copy_dst = 0;

                    ProcessSecondaryCopyWithIndex(nUnitId, nChangedPaletteNumber, destination_palette, copy_dst, copy_start, copy_amt);
                }

                indexCounterForEffects += tokens_used;
                currentEffectsToken = supplementalEffectsData[indexCounterForEffects];

                while (((currentEffectsToken & 0xF000) != SUPP_NODE) && ((currentEffectsToken & 0xF000) != SUPP_START))
                {
                    OutputDebugString(L"\t\t\tProcessing FX for this node\n");

                    //pi = palette index - value should be from 0 to <palette length>, maxing at 255.
                    UINT8 pi_start = (UINT8)supplementalEffectsData[indexCounterForEffects + 1];
                    UINT8 pi_amt = (UINT8)supplementalEffectsData[indexCounterForEffects + 2];

                    switch (currentEffectsToken)
                    {
                    case MOD_TINT:
                    {
                        ProcessSecondaryTintEffects(nUnitId, nChangedPaletteNumber, destination_palette, (UINT8)supplementalEffectsData[indexCounterForEffects + 3], pi_start, pi_amt,
                            supplementalEffectsData[indexCounterForEffects + 4], supplementalEffectsData[indexCounterForEffects + 5], supplementalEffectsData[indexCounterForEffects + 6]);

                        indexCounterForEffects += 7;
                        break;
                    }
                    case MOD_WHITE:
                    {
                        ProcessSecondaryWhite(nUnitId, destination_palette, pi_start, pi_amt);

                        indexCounterForEffects += 3;
                        break;
                    }

                    case MOD_COPY:
                    {
                        ProcessSecondaryCopyWithIndex(nUnitId, nChangedPaletteNumber, destination_palette, (UINT8)supplementalEffectsData[indexCounterForEffects + 3], pi_start, pi_amt);

                        indexCounterForEffects += 4;
                        break;
                    }

                    case MOD_LUM:
                    case MOD_SAT:
                    {
                        // We have first done a full copy of the source palette to dest palette here, and now we apply desired LUM/SAT tweaks.
                        UINT16 mod_type = supplementalEffectsData[indexCounterForEffects];
                        UINT16 mod_amt = supplementalEffectsData[indexCounterForEffects + 3];

                        ProcessSecondaryHSLEffects(nUnitId, mod_type, mod_amt, destination_palette, pi_start, pi_amt);

                        indexCounterForEffects += 4;
                        break;
                    }
                    }

                    currentEffectsToken = supplementalEffectsData[indexCounterForEffects];
                }
            }

            GetHost()->GetPalModDlg()->SetStatusText(L"Palette updated in memory.  Also updated secondary palettes.");

        }
    }

    strDebugInfo.Format(L"ProcessAdditionalPaletteChangesRequired: Finished processing supplemental palettes for character 0x%02x, palette number 0x%x\n\n", nUnitId, nChangedPaletteNumber);
    OutputDebugString(strDebugInfo);
}