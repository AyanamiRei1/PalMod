#include "stdafx.h"
#include "MVC2_SUPP.h"
#include "ColorScale.h"
#include "mvc2_validate.h"
#include "..\PalMod.h"

// This file handles supplemental palette processing that is useful when a user modifies a particular palette.
// Examples:
// * Chun-Li and Cyclops both use a specific secondary palette for HK effects that should match their primary palette
// * Colossus, Juggernaut, and Megaman have cycling 'flash' palettes that should be modifications of their primary palette


namespace MVC2_SupplementProcessing
{
    UINT8** _mvc2_dreamcast_data = nullptr;
    UINT16*** _mvc2_arcade_data = nullptr;
    int rgSuppLoc[MVC2_D_NUMUNIT] = {};
    std::vector<UINT16> mvc2_supp_const;

    CGame_MVC2_D* CurrMVC2 = nullptr;
    CGame_MVC2_A* CurrMVC2_Arcade = nullptr;

    bool VerifyWriteIsSafe(size_t nCharId, UINT8 nCopyLength)
    {
        // We can copy all 16 colors if we start at 0, but if we're shifting colors we need to not stomp on the transparency color
        if (nCopyLength > 16)
        {
            CString strError;
            strError.Format(L"ERROR! Invalid length for %s supplemental color processing.  Effects processing skipped to avoid corrupting this character.\n\nPlease report this bug: it'll be fixed immediately,", MVC2_D_UNITDESC[nCharId]);
            MessageBox(g_appHWnd, strError, GetHost()->GetAppName(), MB_ICONERROR);
            return false;
        }

        return true;
    }

    // Create the array of supplemental processing information needed for mvc2 sprites
    void prep_supp(bool forDreamcast /*= true */)
    {
        int nIndexCtr = 0;

        if (k_mvc2_character_coloroption_count == 6)
        {
            mvc2_supp_const = mvc2_6color_supp_const;
        }
        else
        {
            mvc2_supp_const = mvc2_16color_supp_const;
        }

        //0 each location
        memset(rgSuppLoc, 0, sizeof(int) * MVC2_D_NUMUNIT);

        while (mvc2_supp_const[nIndexCtr] != SUPP_END)
        {
            if ((mvc2_supp_const[nIndexCtr] & 0xFF00) == SUPP_START)
            {
                const UINT8 nArrayIndex = mvc2_supp_const[nIndexCtr] & 0x00FF;
                rgSuppLoc[nArrayIndex] = nIndexCtr;
            }

            nIndexCtr++;
        }

        if (forDreamcast)
        {
            _mvc2_dreamcast_data = (UINT8**)(CurrMVC2->GetDataBuffer());
            _mvc2_arcade_data = nullptr;
        }
        else
        {
            _mvc2_dreamcast_data = nullptr;
            _mvc2_arcade_data = CurrMVC2_Arcade->GetDataBuffer();
        }
    }

    UINT16* get_pal_16(size_t char_id, size_t pal_no)
    {
        if (_mvc2_dreamcast_data)
        {
            return (UINT16*)&_mvc2_dreamcast_data[char_id][pal_no * 32];
        }
        else
        {
            return _mvc2_arcade_data[char_id][pal_no];
        }
    }

    int supp_copy_index(size_t char_id, size_t source_palette, size_t destination_palette, UINT8 dst_index, UINT8 src_index, UINT8 index_amt)
    {
        CString strDebugInfo;
        if ((src_index == 0) && (index_amt == 0x10))
        {
            strDebugInfo.Format(L"\t\t\tsupp_copy_index being applied: full copy of source palette 0x%x to destination palette 0x%x\n",
                source_palette, destination_palette);
        }
        else
        {
            strDebugInfo.Format(L"\t\t\tsupp_copy_index being applied: copying from source palette 0x%x at index 0x%x to destination palette 0x%x at index 0x%x for 0x%x colors\n",
                source_palette, src_index, destination_palette, dst_index, index_amt);
        }
        OutputDebugString(strDebugInfo);

        UINT16* src_16 = get_pal_16(char_id, source_palette);
        UINT16* dst_16 = get_pal_16(char_id, destination_palette);

        memcpy(&dst_16[dst_index], &src_16[src_index], index_amt * sizeof(UINT16));

        return 1;
    }

    int supp_mod_white(size_t char_id, size_t destination_palette, UINT8 index_start, UINT8 index_inc)
    {
        OutputDebugString(L"\t\t\tsupp_mod_white being applied\n");

        UINT16* dst_16 = get_pal_16(char_id, destination_palette);

        for (int i = index_start; i < index_start + index_inc; i++)
        {
            dst_16[i] |= 0xFFFF;
        }

        return 1;
    }

    int supp_mod_hsl(size_t char_id, UINT16 mod_type, int mod_amt, size_t destination_palette, UINT8 index_start, UINT8 index_inc)
    {
        COLORREF input_col;

        double src_h, src_s, src_l, /* add_h ,*/ add_s = 0.0, add_l = 0.0;

        UINT16* dst_16 = get_pal_16(char_id, destination_palette);

        mod_amt = AdjustNumberForPossibleNegation(mod_amt);

        CString strDebugInfo;
        strDebugInfo.Format(L"\t\t\tsupp_mod_hsl being applied : applying %s at %i to palette 0x%x starting at 0x%x for 0x%x colors\n", (mod_type == MOD_LUM) ? L"MOD_LUM" : L"MOD_SAT", mod_amt, destination_palette, index_start, index_inc);
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
            input_col = CurrMVC2->ConvPal16(dst_16[i]);

            RGBtoHLS(input_col, &src_h, &src_l, &src_s);

            //src_h += add_l;
            src_s += add_s;
            src_l += add_l;

            //LimitHLS(src_h);
            src_s = LimitHLS(src_s);
            src_l = LimitHLS(src_l);

            dst_16[i] &= 0xF000;
            dst_16[i] |= CurrMVC2->ConvCol16(HLStoRGB(src_h, src_l, src_s));
        }

        return 1;
    }

    int supp_mod_tint(size_t char_id, size_t source_palette, size_t destination_palette, UINT8 dst_index, UINT8 src_index, UINT8 index_amt,
        int tint_factor_r, int tint_factor_g, int tint_factor_b)
    {
        UINT16* src_16 = get_pal_16(char_id, source_palette);
        UINT16* dst_16 = get_pal_16(char_id, destination_palette);

        tint_factor_r = AdjustNumberForPossibleNegation(tint_factor_r);
        tint_factor_g = AdjustNumberForPossibleNegation(tint_factor_g);
        tint_factor_b = AdjustNumberForPossibleNegation(tint_factor_b);

        CString strDebugInfo;
        strDebugInfo.Format(L"\t\t\tsupp_mod_tint being applied : applying tint(%i, %i, %i) from source palette 0x%x at 0x%x to palette 0x%x at 0x%x for 0x%x colors\n",
            tint_factor_r, tint_factor_g, tint_factor_b, source_palette, src_index, destination_palette, dst_index, index_amt);
        OutputDebugString(strDebugInfo);

        for (UINT8 offset = 0; offset < index_amt; offset++)
        {
            COLORREF input_col = CurrMVC2->ConvPal16(src_16[offset + src_index]);

            BYTE newR = min(255, max(0, (int)GetRValue(input_col) + ((int)17 * tint_factor_r)));
            BYTE newG = min(255, max(0, (int)GetGValue(input_col) + ((int)17 * tint_factor_g)));
            BYTE newB = min(255, max(0, (int)GetBValue(input_col) + ((int)17 * tint_factor_b)));

            newR /= 17;
            newG /= 17;
            newB /= 17;

            dst_16[offset + dst_index] = 0xF000 | (newR << 8) | (newG << 4) | newB;
        }
        return 1;
    }

    int supp_copy_crosscharacter(size_t source_id, size_t source_palette, size_t destination_id, size_t destination_palette, UINT8 source_index, UINT8 destination_index, UINT8 copy_amount)
    {
        CString strDebugInfo;
        strDebugInfo.Format(L"\t\t\tsupp_copy_crosscharacter being applied: Copying source unit 0x%02x palette 0x%02x to destination unit 0x%02x palette 0x%02x\n", source_id, source_palette, destination_id, destination_palette);
        OutputDebugString(strDebugInfo);

        UINT16* src_16 = get_pal_16(source_id, source_palette);
        UINT16* dst_16 = get_pal_16(destination_id, destination_palette);

        memcpy(&dst_16[destination_index], &src_16[source_index], copy_amount * sizeof(UINT16));

        return 1;
    }

    int supp_copy_spiral(size_t char_id, size_t source_palette, size_t destination_palette, UINT8 source_index /* = 0 */, UINT8 destination_index /* = 0 */, UINT8 copy_amount /* = 0x10 */)
    {
        return supp_copy_crosscharacter(char_id, source_palette, indexCPS2Sprites_Spiral /*0x31, spiral*/, destination_palette, source_index, destination_index, copy_amount);
    }

    int HandleCammyCopies(size_t char_no, size_t pal_no)
    {
        int nTotalLinkedPalettesUpdated = 0;

        if (char_no == indexCPS2Sprites_Cammy)
        {
            const int maxCorePalId = 6 * 8;
            if (pal_no < maxCorePalId) // not an extra
            {
                const int nColorInQuestion = pal_no % 8;

                if (nColorInQuestion == 0x03) // Cammy's M.Bison
                {
                    const int nSourceNode = (int)floor(pal_no / 8);
                    nTotalLinkedPalettesUpdated += supp_copy_crosscharacter(char_no, pal_no, indexCPS2Sprites_Bison, nSourceNode * 8, 0, 0, 0x10);
                }
            }
        }

        return nTotalLinkedPalettesUpdated;
    }

    int HandleBisonCopies(size_t char_no, size_t pal_no)
    {
        int nTotalLinkedPalettesUpdated = 0;

        if (char_no == indexCPS2Sprites_Bison)
        {
            const int maxCorePalId = 6 * 8;
            if (pal_no < maxCorePalId) // not an extra
            {
                const int nColorInQuestion = pal_no % 8;

                if (nColorInQuestion == 0x00) // core M.Bison
                {
                    const int nSourceNode = (int)floor(pal_no / 8);
                    nTotalLinkedPalettesUpdated += supp_copy_crosscharacter(char_no, pal_no, indexCPS2Sprites_Cammy, (nSourceNode * 8) + 0x03, 0, 0, 0x10);
                }
            }
        }

        return nTotalLinkedPalettesUpdated;
    }

    // Spiral's shared transform super uses all of the other LP Marvel character sprites, so copy those across
    int HandleSpiralCopies(size_t char_no, size_t pal_no)
    {
        int nTotalLinkedPalettesUpdated = 0;

        // This should generally work, except for sentinel FX which is itself modified by sentinel.  handled post-proc below
             if ((char_no == indexCPS2Sprites_Cyclops) && (pal_no == 0))        { nTotalLinkedPalettesUpdated += supp_copy_spiral(char_no, pal_no, 0x38); } // cyke
        else if ((char_no == indexCPS2Sprites_Wolverine) && (pal_no == 0))      { nTotalLinkedPalettesUpdated += supp_copy_spiral(char_no, pal_no, 0x39); } // wolvie
        else if ((char_no == indexCPS2Sprites_Wolverine) && (pal_no == 1))      { nTotalLinkedPalettesUpdated += supp_copy_spiral(char_no, pal_no, 0x3A); } // wolvie claws
        else if ((char_no == indexCPS2Sprites_Psylocke) && (pal_no == 0))       { nTotalLinkedPalettesUpdated += supp_copy_spiral(char_no, pal_no, 0x3B); } // psylocke
        else if ((char_no == indexCPS2Sprites_Psylocke) && (pal_no == 1))       { nTotalLinkedPalettesUpdated += supp_copy_spiral(char_no, pal_no, 0x3C); } // psyblade
        else if ((char_no == indexCPS2Sprites_Iceman) && (pal_no == 0))         { nTotalLinkedPalettesUpdated += supp_copy_spiral(char_no, pal_no, 0x3D); } // iceman
        else if ((char_no == indexCPS2Sprites_Rogue) && (pal_no == 0))          { nTotalLinkedPalettesUpdated += supp_copy_spiral(char_no, pal_no, 0x3E); } // rogue
        else if ((char_no == indexCPS2Sprites_CapAm) && (pal_no == 0))          { nTotalLinkedPalettesUpdated += supp_copy_spiral(char_no, pal_no, 0x3F); } // captain america
        else if ((char_no == indexCPS2Sprites_Spidey) && (pal_no == 0))         { nTotalLinkedPalettesUpdated += supp_copy_spiral(char_no, pal_no, 0x40); } // spider-man
        else if ((char_no == indexCPS2Sprites_Hulk) && (pal_no == 0))           { nTotalLinkedPalettesUpdated += supp_copy_spiral(char_no, pal_no, 0x41); } // hulk
        else if ((char_no == indexCPS2Sprites_Venom) && (pal_no == 0))          { nTotalLinkedPalettesUpdated += supp_copy_spiral(char_no, pal_no, 0x42); } // venom
        else if ((char_no == indexCPS2Sprites_DrDoom) && (pal_no == 0))         { nTotalLinkedPalettesUpdated += supp_copy_spiral(char_no, pal_no, 0x43); } // dr doom
        else if ((char_no == indexCPS2Sprites_DrDoom) && (pal_no == 1))         { nTotalLinkedPalettesUpdated += supp_copy_spiral(char_no, pal_no, 0x44); } // dr doom fx
        else if ((char_no == indexCPS2Sprites_Marrow) && (pal_no == 0))         { nTotalLinkedPalettesUpdated += supp_copy_spiral(char_no, pal_no, 0x45); } // marrow
     // else if ((char_no == 0xFF) && (pal_no == 0))                            { nTotalLinkedPalettesUpdated += supp_copy_spiral(char_no, pal_no, 0x46); } // UNUSED
        else if ((char_no == indexCPS2Sprites_Cable) && (pal_no == 0))          { nTotalLinkedPalettesUpdated += supp_copy_spiral(char_no, pal_no, 0x47); } // cable
     // else if ((char_no == 0xFF) && (pal_no == 0))                            { nTotalLinkedPalettesUpdated += supp_copy_spiral(char_no, pal_no, 0x48); } // UNUSED
        else if ((char_no == indexCPS2Sprites_Gambit) && (pal_no == 0))         { nTotalLinkedPalettesUpdated += supp_copy_spiral(char_no, pal_no, 0x49); } // gambit
        else if ((char_no == indexCPS2Sprites_Juggy) && (pal_no == 0))          { nTotalLinkedPalettesUpdated += supp_copy_spiral(char_no, pal_no, 0x4A); } // juggernaut
        else if ((char_no == indexCPS2Sprites_Storm) && (pal_no == 0))          { nTotalLinkedPalettesUpdated += supp_copy_spiral(char_no, pal_no, 0x4B); } // storm
        else if ((char_no == indexCPS2Sprites_Storm) && (pal_no == 0x42))       { nTotalLinkedPalettesUpdated += supp_copy_spiral(char_no, pal_no, 0x4C); } // storm lightning FX
        else if ((char_no == indexCPS2Sprites_Sabretooth) && (pal_no == 0))     { nTotalLinkedPalettesUpdated += supp_copy_spiral(char_no, pal_no, 0x4D); } // sabe
        else if ((char_no == indexCPS2Sprites_Magneto) && (pal_no == 0))        { nTotalLinkedPalettesUpdated += supp_copy_spiral(char_no, pal_no, 0x4E); } // magnus
     // else if ((char_no == 0xFF) && (pal_no == 0))                            { nTotalLinkedPalettesUpdated += supp_copy_spiral(char_no, pal_no, 0x4F); } // UNUSED
        else if ((char_no == indexCPS2Sprites_Shuma) && (pal_no == 0))          { nTotalLinkedPalettesUpdated += supp_copy_spiral(char_no, pal_no, 0x50); } // shuma
        else if ((char_no == indexCPS2Sprites_WarMachine) && (pal_no == 0))     { nTotalLinkedPalettesUpdated += supp_copy_spiral(char_no, pal_no, 0x51); } // war machine
        else if ((char_no == indexCPS2Sprites_SilverSamurai) && (pal_no == 0))  { nTotalLinkedPalettesUpdated += supp_copy_spiral(char_no, pal_no, 0x52); } // silver samurai
        else if ((char_no == indexCPS2Sprites_OmegaRed) && (pal_no == 0))       { nTotalLinkedPalettesUpdated += supp_copy_spiral(char_no, pal_no, 0x53); } // omega red
        else if ((char_no == indexCPS2Sprites_Colossus) && (pal_no == 0))       { nTotalLinkedPalettesUpdated += supp_copy_spiral(char_no, pal_no, 0x54); } // colossus
        else if ((char_no == indexCPS2Sprites_IronMan) && (pal_no == 0))        { nTotalLinkedPalettesUpdated += supp_copy_spiral(char_no, pal_no, 0x55); } // iron man
        else if ((char_no == indexCPS2Sprites_Sentinel) && (pal_no == 0))       { nTotalLinkedPalettesUpdated += supp_copy_spiral(char_no, pal_no, 0x56); } // sentinel
        else if ((char_no == indexCPS2Sprites_Sentinel) && (pal_no == 1))       { nTotalLinkedPalettesUpdated += supp_copy_spiral(char_no, pal_no, 0x57, 1, 1, 7); } // sentinel FX
        else if ((char_no == indexCPS2Sprites_Blackheart) && (pal_no == 0))     { nTotalLinkedPalettesUpdated += supp_copy_spiral(char_no, pal_no, 0x58); } // blackheart
        else if ((char_no == indexCPS2Sprites_Thanos) && (pal_no == 0))         { nTotalLinkedPalettesUpdated += supp_copy_spiral(char_no, pal_no, 0x59); } // thanos

        return nTotalLinkedPalettesUpdated;
    }

    // This handles palettes that are modified as part of modifying a primary palette
    int HandleSpiralCopies_ForSupplementedPalettes(size_t char_no, size_t pal_no)
    {
        int nTotalLinkedPalettesUpdated = 0;

        if ((char_no == indexCPS2Sprites_Sentinel) && (pal_no == 0))
        {
            // copy sentinel FX
            nTotalLinkedPalettesUpdated += supp_copy_spiral(char_no, 0x01, 0x57, 1, 1, 7);
        }

        return nTotalLinkedPalettesUpdated;
    }

    int HandleCammyBisonCopies(size_t char_no, size_t pal_no)
    {
        int nTotalLinkedPalettesUpdated = 0;

        nTotalLinkedPalettesUpdated += HandleCammyCopies(char_no, pal_no);
        nTotalLinkedPalettesUpdated += HandleBisonCopies(char_no, pal_no);

        return nTotalLinkedPalettesUpdated;
    }

    void proc_supp(size_t char_no, size_t pal_no)
    {
        CString strDebugInfo;
        int nTotalLinkedPalettesUpdated = 0;

        strDebugInfo.Format(L"\tproc_supp: Processing supplemental palettes for character 0x%02x (%s), palette number 0x%x\n", char_no, MVC2_D_UNITDESC[char_no], pal_no);
        OutputDebugString(strDebugInfo);

        if (!_mvc2_dreamcast_data && !_mvc2_arcade_data)
        {
            OutputDebugString(L"\t\tproc_supp: Error: palette buffer not available\n");
            return;
        }

        // These happen without regards to whether we have other supplemental processing for this character
        int nBisonCammyPalettesUpdated = HandleCammyBisonCopies(char_no, pal_no);
        int nSpiralPalettesUpdated = HandleSpiralCopies(char_no, pal_no);

        if (rgSuppLoc[char_no])
        {
            BOOL isCurrentPaletteABasicPalette = FALSE, isCurrentPaletteAnExtraPalette = FALSE;

            // Load the supplemental data for this character
            UINT16* supplementalEffectsData = const_cast<UINT16*>(&mvc2_supp_const[rgSuppLoc[char_no]]);
            UINT16 indexCounterForEffects = 1; //1 to skip the count

            UINT16 index_sz = supplementalEffectsData[0];

            //SUPP_NODE
            // Node_start: offset within the palette set.
            // Node_inc: the number of palettes to increment within the palette set of interest.  
                // Consider an animation comprised of three sprites: you would want to increment three sprites further 
            // Base_Start: which palette to be copying from if it isn't the main BUTTON palette
            // Base_inc: the number of palettes to increment on the copy side.
            UINT16 node_start = 0, node_inc = 0, base_start = 0, base_inc = 1;

            //Check to see if we are modifying any basic palettes
            UINT16 index_data = supplementalEffectsData[indexCounterForEffects];

            while ((index_data & 0xF000) != SUPP_START) // SUPP_START marks the beginning of the next character
            {
                isCurrentPaletteABasicPalette = FALSE;
                isCurrentPaletteAnExtraPalette = FALSE;

                // If the current position is SUPP_NODE or SUPP_NODE_*, that indicates the beginning of a new modifier array
                    //Possible sources = SUPP_NODE, SUPP_NODE_EX, SUPP_NODE_ABSOL, SUPP_NODE_EX | SUPP_NODE_NOCOPY, SUPP_NODE_EX | SUPP_NODE_ABSOL
                if ((index_data & 0xF000) == SUPP_NODE) //&& indexCounterForEffects < index_sz)
                {
                    OutputDebugString(L"\t\tproc_supp: New modification node encountered\n");

                    //Fix later
                    UINT8 add = 3; //count of data provided for a SUPP_NODE entry, which is the minimum.

                    UINT16 in_start = supplementalEffectsData[indexCounterForEffects + 1];

                    if (in_start & MOD_ABS)
                    {
                        node_start = in_start & 0x7FFF;
                    }
                    else
                    {
                        node_start = in_start + ID_MOD;
                    }

                    node_inc = supplementalEffectsData[indexCounterForEffects + 2];

                    //Set the source palette
                    size_t source_palette = pal_no;

                    if ((index_data & SUPP_NODE_ABSOL) == SUPP_NODE_ABSOL)
                    {
                        // SUPP_NODE_ABSOL adds two values: the first is the palette to copy from, and the second is the incrementation value
                        base_start = supplementalEffectsData[indexCounterForEffects + 3];

                        if (base_start & MOD_ABS)
                        {
                            base_start = base_start & 0x7FFF;
                        }
                        else
                        {
                            base_start = base_start + ID_MOD;
                        }

                        base_inc = supplementalEffectsData[indexCounterForEffects + 4];

                        /*
                        if ((pal_no / base_inc) < k_mvc2_character_coloroption_count && pal_no - ((pal_no / base_inc) * base_inc) == base_start)
                            isCurrentPaletteAnExtraPalette = TRUE;
                        else if ((index_data & SUPP_NODE_NOCOPY) == SUPP_NODE_NOCOPY)
                        {
                            isCurrentPaletteAnExtraPalette = TRUE;
                        }
                        */

                        add += 2;
                    }
                    else
                    {
                        base_start = 0;
                        base_inc = 8; // increment is one character set of 8 palettes
                    }

                    bool thisNodeForExtraPalettesOnly = ((index_data & EXTRA_NODE_ONLY) == EXTRA_NODE_ONLY);

                    // Ensure that this palette comes from one of the first BUTTON_COUNT * NORMAL_PALETTE_COUNT (8 *k_mvc2_character_coloroption_count)
                    if ((pal_no / 8) < k_mvc2_character_coloroption_count && (pal_no % 8) == 0)
                    {
                        isCurrentPaletteABasicPalette = TRUE;
                    }
                    else
                    {
                        isCurrentPaletteAnExtraPalette = TRUE;
                    }

                    bool shouldProcessEffectsForThisNode = true;
                    if (thisNodeForExtraPalettesOnly ? !isCurrentPaletteAnExtraPalette : !isCurrentPaletteABasicPalette)
                    {
                        shouldProcessEffectsForThisNode = false;
                        OutputDebugString(L"\t\tproc_supp: This node is being skipped for this palette type.\n");
                    }

                    UINT8 pal_ctr;
                    size_t destination_palette;

                    if (!thisNodeForExtraPalettesOnly)
                    {
                        pal_ctr = (UINT8)(pal_no / base_inc);
                        destination_palette = node_start + (node_inc * pal_ctr);

                        if ((index_data & SUPP_NODE_ABSOL) == SUPP_NODE_ABSOL)
                        {
                            //Set the absolute source palette
                            source_palette = base_start + (base_inc * pal_ctr);
                        }
                    }
                    else
                    {
                        // Figure out which character we are on and offset by that.
                        // Make sure we both are after the Extra start of interest and at a valid offset given the increment step.
                        if ((pal_no >= base_start) && ((pal_no - base_start) % base_inc == 0))
                        {
                            // Character offset will be a value from 0-5
                            pal_ctr = (UINT8)((pal_no - base_start) / base_inc);
                        }
                        else
                        {
                            // This isn't an Extras palette, we aren't processing this.
                            pal_ctr = k_mvc2_character_coloroption_count;
                        }

                        destination_palette = node_start + (node_inc * pal_ctr);

                        if ((index_data & SUPP_NODE_ABSOL) == SUPP_NODE_ABSOL)
                        {
                            //Set the absolute source palette
                            source_palette = base_start + (base_inc * pal_ctr);
                        }

                        // We're in Extras space, so make sure we're within the bounds of the character.
                        if (pal_ctr > (k_mvc2_character_coloroption_count - 1))
                        {
                            OutputDebugString(L"\t\tproc_supp: This node is not applicable to this palette range.\n");
                            shouldProcessEffectsForThisNode = false;
                        }
                    }

                    //Set the counter past the indexes into the actual actions and reset the step counter
                    indexCounterForEffects += add;
                    add = 0;

                    if ((index_data & SUPP_NODE_EX) == SUPP_NODE_EX)
                    {
                        add = 3;
                    }

                    //if (isCurrentPaletteABasicPalette)
                    {
                        int copy_start = 0;
                        int copy_amt = 15;
                        int copy_dst = 0;

                        if ((index_data & SUPP_NODE_EX) == SUPP_NODE_EX)
                        {
                            copy_start = supplementalEffectsData[indexCounterForEffects + 0];
                            copy_amt = supplementalEffectsData[indexCounterForEffects + 1];
                            copy_dst = supplementalEffectsData[indexCounterForEffects + 2];
                        }

                        if (shouldProcessEffectsForThisNode)
                        {
                            strDebugInfo.Format(L"\t\tproc_supp: Preparing to process from palette 0x%x to palette 0x%x\n", source_palette, destination_palette);
                        }
                        else
                        {
                            strDebugInfo.Format(L"\t\tproc_supp: Skipping processing from palette 0x%x to palette 0x%x\n", source_palette, destination_palette);
                        }

                        OutputDebugString(strDebugInfo);

    #ifdef SPECIAL_PALETTE_DUMP_MODE
                        // I needed to hook into the supplemental palette processing to figure out what we're actually touching so injected this
                        // and the related SPECIAL_PALETTE_DUMP_MODE .  Hopefully we never need to do that again as it was awful.

                        shouldProcessEffectsForThisNode = false;
                        dump_palettes(char_no, source_palette, char_no, destination_palette);
    #endif                

                        // Unless we get told otherwise, we do a copy first and then worry about modifying values.
                        if (index_data != SUPP_NODE_NOCOPY)
                        {
                            if (shouldProcessEffectsForThisNode)
                            {
                                if (VerifyWriteIsSafe(char_no, copy_dst + copy_amt))
                                {
                                    nTotalLinkedPalettesUpdated += supp_copy_index(char_no, source_palette, destination_palette, copy_dst, copy_start, copy_amt);
                                }
                            }
                        }

                        indexCounterForEffects += add;
                        index_data = supplementalEffectsData[indexCounterForEffects];

                        int iNodeBeingProcessed = 0x0;

                        while (((index_data & 0xF000) != SUPP_NODE) && ((index_data & 0xF000) != SUPP_START))
                        {
                            if (shouldProcessEffectsForThisNode)
                            {
                                OutputDebugString(L"\t\tproc_supp: Processing FX for this node\n");
                            }

                            if (iNodeBeingProcessed > 200)
                            {
                                // This character node is corrupt and needs to be fixed.
                                DebugBreak();
                            }

                            //pi = palette index - value should be from 0-15.
                            UINT8 pi_start = (UINT8)supplementalEffectsData[indexCounterForEffects + 1];
                            UINT8 pi_amt = (UINT8)supplementalEffectsData[indexCounterForEffects + 2];

                            switch (index_data)
                            {
                            case MOD_TINT:
                            {
                                if (shouldProcessEffectsForThisNode && VerifyWriteIsSafe(char_no, (UINT8)supplementalEffectsData[indexCounterForEffects + 3] + pi_amt))
                                {
                                    nTotalLinkedPalettesUpdated += supp_mod_tint(char_no, pal_no, destination_palette, (UINT8)supplementalEffectsData[indexCounterForEffects + 3], pi_start, pi_amt,
                                        supplementalEffectsData[indexCounterForEffects + 4], supplementalEffectsData[indexCounterForEffects + 5], supplementalEffectsData[indexCounterForEffects + 6]);
                                }

                                indexCounterForEffects += 7;
                                break;
                            }
                            case MOD_WHITE:
                            {
                                if (shouldProcessEffectsForThisNode && VerifyWriteIsSafe(char_no, pi_start + pi_amt))
                                {
                                    nTotalLinkedPalettesUpdated += supp_mod_white(char_no, destination_palette, pi_start, pi_amt);
                                }

                                indexCounterForEffects += 3;
                                break;
                            }

                            case MOD_COPY:
                            {
                                if (shouldProcessEffectsForThisNode && VerifyWriteIsSafe(char_no, supplementalEffectsData[indexCounterForEffects + 3] + pi_amt))
                                {
                                    nTotalLinkedPalettesUpdated += supp_copy_index(char_no, pal_no, destination_palette, (UINT8)supplementalEffectsData[indexCounterForEffects + 3], pi_start, pi_amt);
                                }

                                indexCounterForEffects += 4;
                                break;
                            }

                            case MOD_LUM:
                            case MOD_SAT:
                            {
                                if (shouldProcessEffectsForThisNode && VerifyWriteIsSafe(char_no, pi_start + pi_amt))
                                {
                                    UINT16 mod_type = supplementalEffectsData[indexCounterForEffects];
                                    UINT16 mod_amt = supplementalEffectsData[indexCounterForEffects + 3];

                                    nTotalLinkedPalettesUpdated += supp_mod_hsl(char_no, mod_type, mod_amt, destination_palette, pi_start, pi_amt);
                                }

                                indexCounterForEffects += 4;
                                break;
                            }
                            }

                            index_data = supplementalEffectsData[indexCounterForEffects];
                        }
                    }
                }
            }

            // We catch indirectly updated palettes here.
            nSpiralPalettesUpdated += HandleSpiralCopies_ForSupplementedPalettes(char_no, pal_no);
        }
        else
        {
            OutputDebugString(L"\t\tproc_supp: Not applicable here\n");
        }

        if (nTotalLinkedPalettesUpdated)
        {
            GetHost()->GetPalModDlg()->SetStatusText(L"Updated.  Also updated secondary palettes.");
        }
        else if (nSpiralPalettesUpdated)
        {
            GetHost()->GetPalModDlg()->SetStatusText(L"Updated.  Also updated Spiral's copy of this LP palette.");
        }
        else if (nBisonCammyPalettesUpdated)
        {
            GetHost()->GetPalModDlg()->SetStatusText(L"Updated.  Also updated Cammy's copy of this palette.");
        }

        strDebugInfo.Format(L"\tproc_supp: Finished processing %u supplemental palettes for character 0x%02x, palette number 0x%x\n\n", nTotalLinkedPalettesUpdated, char_no, pal_no);
        OutputDebugString(strDebugInfo);
    }
}
