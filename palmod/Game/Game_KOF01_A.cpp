#include "StdAfx.h"
#include "Game_KOF01_A.h"

struct sKOF01_A_PaletteData
{
    LPCWSTR pszCharacterName;
    uint32_t nROMOffset = 0;
    uint32_t nTerminalROMOffset = 0;
    LPCWSTR pszImageSet = L"indexKOF02UMSprites_K";
    bool fHasEffects = true;
    bool fIsBoss = false; // bosses don't have some portraits
};

sKOF01_A_PaletteData KOF01_A_CharacterPalettes[] =
{
    { L"K'", 0x387122, 0x387142, L"indexKOF02UMSprites_K" },
    { L"Maxima", 0x387522, 0x387542, L"indexKOF02UMSprites_Maxima" },
    { L"Whip", 0x387922, 0x387942, L"indexKOF02UMSprites_Whip" },
    { L"Lin", 0x387d22, 0x387d42, L"indexKOF01Sprites_Lin" },
    { L"Kyo", 0x388122, 0x388142, L"indexKOF02UMSprites_KyoKusa" },
    { L"Benimaru", 0x388522, 0x388542, L"indexKOF01Sprites_Benimaru" },
    { L"Goro", 0x388922, 0x388942, L"indexKOF02UMSprites_Daimon", false },
    { L"Shingo", 0x388d22, 0x388d42, L"indexKOF02UMSprites_Shingo", false },
    { L"Iori", 0x389122, 0x389142, L"indexKOF01Sprites_Iori" },
    { L"Vanessa", 0x389522, 0x389542, L"indexKOF01Sprites_Vanessa", false },
    { L"Seth", 0x389922, 0x389942, L"indexKOF01Sprites_Seth" },
    { L"Ramon", 0x389d22, 0x389d42, L"indexKOF01Sprites_Ramon", false },
    { L"Leona", 0x38a122, 0x38a142, L"indexKOF02UMSprites_Leona" },
    { L"Ralf", 0x38a522, 0x38a542, L"indexKOF01Sprites_Ralf", false },
    { L"Clark", 0x38a922, 0x38a942, L"indexKOF02UMSprites_Clark", false },
    { L"Heidern", 0x38ad22, 0x38ad42, L"indexKOF01Sprites_Heidern" },
    { L"Terry", 0x38b122, 0x38b142, L"indexKOF02UMSprites_Terry" },
    { L"Andy", 0x38b522, 0x38b542, L"indexKOF01Sprites_Andy" },
    { L"Joe", 0x38b922, 0x38b942, L"indexKOF02UMSprites_Joe" },
    { L"Mary", 0x38bd22, 0x38bd42, L"indexKOF02UMSprites_BlueMary" },
    { L"Ryo", 0x38c122, 0x38c142, L"indexKOF02UMSprites_Ryo" },
    { L"Robert", 0x38c522, 0x38c542, L"indexKOF01Sprites_Robert" },
    { L"Yuri", 0x38c922, 0x38c942, L"indexKOF01Sprites_Yuri" },
    { L"Takuma", 0x38cd22, 0x38cd42, L"indexKOF02UMSprites_Takuma" },
    { L"King", 0x38d122, 0x38d142, L"indexKOF01Sprites_King" },
    { L"Mai", 0x38d522, 0x38d542, L"indexKOF02UMSprites_Mai" },
    { L"Hinako", 0x38d922, 0x38d942, L"indexKOF01Sprites_Hinako", false },
    { L"Xiangfei", 0x38dd22, 0x38dd42, L"indexKOF01Sprites_Xiangfei" },
    { L"Kula", 0x38e122, 0x38e142, L"indexKOF01Sprites_Kula" },
    { L"Foxy", 0x38e522, 0x38e542, L"indexKOF01Sprites_Foxy" },
    { L"K9999", 0x38e922, 0x38e942, L"indexKOF01Sprites_K9999" },
    { L"Angel", 0x38ed22, 0x38ed42, L"indexKOF01Sprites_Angel", false },
    { L"Athena", 0x38f122, 0x38f142, L"indexKOF01Sprites_Athena" },
    { L"Kensou", 0x38f522, 0x38f542, L"indexKOF01Sprites_Kensou" },
    { L"Chin", 0x38f922, 0x38f942, L"indexKOF02UMSprites_Chin" },
    { L"Bao", 0x38fd22, 0x38fd42, L"indexKOF01Sprites_Bao" },
    { L"Kim", 0x390122, 0x390142, L"indexKOF02UMSprites_Kim", false },
    { L"Chang", 0x390522, 0x390542, L"indexKOF01Sprites_Chang" },
    { L"Choi", 0x390922, 0x390942, L"indexKOF02UMSprites_Choi" },
    { L"May Lee", 0x390d22, 0x390d42, L"indexKOF01Sprites_MayLee", false },
    { L"Zero", 0x391122, 0x391142, L"indexKOF01Sprites_Zero", true, true },
    { L"Igniz", 0x391522, 0x391542, L"indexKOF01Sprites_Igniz", true, true },
};

struct sKOF01_A_EffectData
{
    LPCWSTR pszCharacterName;
    uint32_t nROMOffset = 0;
    uint32_t nTerminalROMOffset = 0;
};

sKOF01_A_EffectData KOF01_A_EffectPalettes[] =
{
    { L"K' Effects", 0x392522, 0x392622 },
    { L"Maxima Effects", 0x392722, 0x392822 },
    { L"Whip Effects", 0x392922, 0x392a22 },
    { L"Lin Effects", 0x392b22, 0x392c22 },
    { L"Kyo Effects", 0x392d22, 0x392e22 },
    { L"Benimaru Effects", 0x392f22, 0x393022 },
    { L"Iori Effects", 0x393522, 0x393622 },
    { L"Seth Effects", 0x393922, 0x393a22 },
    { L"Leona Effects", 0x393d22, 0x393e22 },
    { L"Heidern Effects", 0x394322, 0x394422 },
    { L"Terry Effects", 0x394522, 0x394622 },
    { L"Andy Effects", 0x394722, 0x394822 },
    { L"Joe Effects", 0x394922, 0x394a22 },
    { L"Mary Effects", 0x394b22, 0x394c22 },
    { L"Ryo Effects", 0x394d22, 0x394e22 },
    { L"Robert Effects", 0x394f22, 0x395022 },
    { L"Yuri Effects", 0x395122, 0x395222 },
    { L"Takuma Effects", 0x395322, 0x395422 },
    { L"King Effects", 0x395522, 0x395622 },
    { L"Mai Effects", 0x395722, 0x395822 },
    { L"Xiangfei Effects", 0x395b22, 0x395c22 },
    { L"Kula Effects", 0x395d22, 0x395e22 },
    { L"Foxy Effects", 0x395f22, 0x396022 },
    { L"K9999 Effects", 0x396122, 0x396222 },
    { L"Athena Effects", 0x396522, 0x396622 },
    { L"Kensou Effects", 0x396722, 0x396822 },
    { L"Chin Effects", 0x396922, 0x396a22 },
    { L"Bao Effects", 0x396b22, 0x396c22 },
    { L"Chang Effects", 0x396f22, 0x397022 },
    { L"Choi Effects", 0x397122, 0x397222 },
    { L"Zero Extras", 0x397522, 0x397622 },
    { L"Igniz Extras", 0x397722, 0x397822 },
    { L"Striker Krizalid Effects", 0x397922, 0x397a22 },
};

void CGame_KOF01_A::DumpPaletteHeaders()
{
    CString strOutput;
    const uint32_t nColorOptionsPerCharacter = static_cast<uint32_t>(DEF_BUTTONLABEL_2_PK.size());
    constexpr uint32_t KOF01_PALETTE_LENGTH = 0x20;
    constexpr uint32_t KOF01_PALETTE_DOUBLE_LENGTH = 0x40;
    constexpr uint32_t KOF01_CHARACTER_LENGTH = 0x200;
    const uint16_t nCountStatusEffects = 8;

    const uint32_t KOF01_STRIKER_START = 0x398322;
    const uint32_t KOF01_ORDERSELECT_START = 0x399322;
    const uint32_t KOF01_SELECTPORTRAIT_START = 0x399f22;
    const uint32_t KOF01_WINPORTRAIT_START = 0x39d122;
    const uint32_t KOF01_LIFEBARPORTRAIT_START = 0x3b8922;
    const uint32_t KOF01_NEXTCHARACTERPORTRAIT_P_START = 0x3b7d22;
    const uint32_t KOF01_NEXTCHARACTERPORTRAIT_K_START = 0x3b8222;

    for (uint16_t nCharIndex = 0; nCharIndex < ARRAYSIZE(KOF01_A_CharacterPalettes); nCharIndex++)
    {
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF01_A_CharacterPalettes[nCharIndex].pszCharacterName);

        for (uint16_t nColorIndex = 0; nColorIndex < nColorOptionsPerCharacter; nColorIndex++)
        {
            wchar_t szColorOptionCodeDesc[MAX_DESCRIPTION_LENGTH];
            StruprRemoveNonASCII(szColorOptionCodeDesc, ARRAYSIZE(szColorOptionCodeDesc), DEF_BUTTONLABEL_2_PK[nColorIndex]);

            strOutput.Format(L"const sGame_PaletteDataset KOF01_A_%s_%s_PALETTES[] = \r\n{\r\n", szCodeDesc, szColorOptionCodeDesc);
            OutputDebugString(strOutput);

            uint32_t nCurrentOffset = KOF01_A_CharacterPalettes[nCharIndex].nROMOffset + (nColorIndex * KOF01_CHARACTER_LENGTH);

            strOutput.Format(L"    { L\"%s %s\", 0x%x, 0x%x, %s },\r\n", KOF01_A_CharacterPalettes[nCharIndex].pszCharacterName, DEF_BUTTONLABEL_2_PK[nColorIndex],
                 nCurrentOffset, nCurrentOffset + KOF01_PALETTE_LENGTH, KOF01_A_CharacterPalettes[nCharIndex].pszImageSet);
            OutputDebugString(strOutput);

            const LPCWSTR ppszPaletteLines[] =
            {
                L"Character Extra 1",
                L"Character Extra 2",
                L"Electric Palette",
                L"Lin Poison Palette (Unused)",
                L"Freeze Palette (Unused)",
                L"Super Trail",
            };

            for (uint16_t nPaletteIndex = 0; nPaletteIndex < ARRAYSIZE(ppszPaletteLines); nPaletteIndex++)
            {
                nCurrentOffset = KOF01_A_CharacterPalettes[nCharIndex].nROMOffset + ((1 + nPaletteIndex) * KOF01_PALETTE_LENGTH) + (nColorIndex * KOF01_CHARACTER_LENGTH);

                strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x, %s },\r\n", ppszPaletteLines[nPaletteIndex], nCurrentOffset, nCurrentOffset + KOF01_PALETTE_LENGTH, KOF01_A_CharacterPalettes[nCharIndex].pszImageSet);
                OutputDebugString(strOutput);
            }

            if (!KOF01_A_CharacterPalettes[nCharIndex].fIsBoss)
            {
                // There are three palette lengths between striker portraits
                nCurrentOffset = KOF01_STRIKER_START + (3 * nCharIndex * KOF01_PALETTE_LENGTH) + (nColorIndex * KOF01_PALETTE_LENGTH);
                strOutput.Format(L"    { L\"Striker Portrait\", 0x%x, 0x%x },\r\n", nCurrentOffset, nCurrentOffset + KOF01_PALETTE_LENGTH);
                OutputDebugString(strOutput);
            }

            wchar_t szKOF01ImageSet[MAX_DESCRIPTION_LENGTH];
            StrRemoveNonASCII(szKOF01ImageSet, ARRAYSIZE(szKOF01ImageSet), KOF01_A_CharacterPalettes[nCharIndex].pszCharacterName);

            nCurrentOffset = KOF01_ORDERSELECT_START + (static_cast<uint32_t>(DEF_BUTTONLABEL_2_PK.size()) * nCharIndex * KOF01_PALETTE_LENGTH) + (nColorIndex * KOF01_PALETTE_LENGTH);
            strOutput.Format(L"    { L\"Order Select Portrait\", 0x%x, 0x%x, indexKOF01Sprites_%s, 0x44 },\r\n", nCurrentOffset, nCurrentOffset + KOF01_PALETTE_LENGTH, szKOF01ImageSet);
            OutputDebugString(strOutput);

            if (!KOF01_A_CharacterPalettes[nCharIndex].fIsBoss)
            {
                // this area is select portrait p, select portrait k, then the shared three win portrait assist
                nCurrentOffset = KOF01_SELECTPORTRAIT_START + (5 * nCharIndex * KOF01_PALETTE_DOUBLE_LENGTH) + (nColorIndex * KOF01_PALETTE_DOUBLE_LENGTH);
                strOutput.Format(L"    { L\"Select Portrait\", 0x%x, 0x%x, indexKOF01Sprites_%s, 0x42 },\r\n", nCurrentOffset, nCurrentOffset + KOF01_PALETTE_DOUBLE_LENGTH, szKOF01ImageSet);
                OutputDebugString(strOutput);
            }

            nCurrentOffset = KOF01_WINPORTRAIT_START + (static_cast<uint32_t>(DEF_BUTTONLABEL_2_PK.size()) * nCharIndex * KOF01_PALETTE_DOUBLE_LENGTH) + (nColorIndex * KOF01_PALETTE_DOUBLE_LENGTH);
            strOutput.Format(L"    { L\"Win Portrait\", 0x%x, 0x%x, indexKOF01Sprites_%s, 0x40 },\r\n", nCurrentOffset, nCurrentOffset + KOF01_PALETTE_DOUBLE_LENGTH, szKOF01ImageSet);
            OutputDebugString(strOutput);

            nCurrentOffset = KOF01_LIFEBARPORTRAIT_START + (static_cast<uint32_t>(DEF_BUTTONLABEL_2_PK.size()) * nCharIndex * KOF01_PALETTE_LENGTH) + (nColorIndex * KOF01_PALETTE_LENGTH);
            strOutput.Format(L"    { L\"Lifebar Portrait\", 0x%x, 0x%x, indexKOF01Sprites_%s, 0x43 },\r\n", nCurrentOffset, nCurrentOffset + KOF01_PALETTE_LENGTH, szKOF01ImageSet);
            OutputDebugString(strOutput);

            if (!KOF01_A_CharacterPalettes[nCharIndex].fIsBoss)
            {
                if (nColorIndex == 0)
                {
                    nCurrentOffset = KOF01_NEXTCHARACTERPORTRAIT_P_START + (nCharIndex * KOF01_PALETTE_LENGTH);
                }
                else
                {
                    nCurrentOffset = KOF01_NEXTCHARACTERPORTRAIT_K_START + (nCharIndex * KOF01_PALETTE_LENGTH);
                }

                strOutput.Format(L"    { L\"Next Character Lifebar Portrait\", 0x%x, 0x%x },\r\n", nCurrentOffset, nCurrentOffset + KOF01_PALETTE_LENGTH);
                OutputDebugString(strOutput);
            }

            OutputDebugString(L"};\r\n\r\n");
        }
    }

    for (uint16_t nCharIndex = 0; nCharIndex < ARRAYSIZE(KOF01_A_CharacterPalettes); nCharIndex++)
    {
        if (!KOF01_A_CharacterPalettes[nCharIndex].fIsBoss)
        {
            wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
            StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF01_A_CharacterPalettes[nCharIndex].pszCharacterName);

            strOutput.Format(L"const sGame_PaletteDataset KOF01_A_%s_WINPORTRAIT_PALETTES[] = \r\n{\r\n", szCodeDesc);
            OutputDebugString(strOutput);

            // this area is select portrait p, select portrait k, then the shared three win portrait assist
            uint32_t nCurrentOffset = KOF01_SELECTPORTRAIT_START + (5 * nCharIndex * KOF01_PALETTE_DOUBLE_LENGTH) + (2 * KOF01_PALETTE_DOUBLE_LENGTH);
            strOutput.Format(L"    { L\"Win Portrait Assist 1\", 0x%x, 0x%x },\r\n", nCurrentOffset, nCurrentOffset + KOF01_PALETTE_DOUBLE_LENGTH);
            OutputDebugString(strOutput);
            nCurrentOffset = KOF01_SELECTPORTRAIT_START + (5 * nCharIndex * KOF01_PALETTE_DOUBLE_LENGTH) + (3 * KOF01_PALETTE_DOUBLE_LENGTH);
            strOutput.Format(L"    { L\"Win Portrait Assist 2\", 0x%x, 0x%x },\r\n", nCurrentOffset, nCurrentOffset + KOF01_PALETTE_DOUBLE_LENGTH);
            OutputDebugString(strOutput);
            nCurrentOffset = KOF01_SELECTPORTRAIT_START + (5 * nCharIndex * KOF01_PALETTE_DOUBLE_LENGTH) + (4 * KOF01_PALETTE_DOUBLE_LENGTH);
            strOutput.Format(L"    { L\"Win Portrait Assist 3\", 0x%x, 0x%x },\r\n", nCurrentOffset, nCurrentOffset + KOF01_PALETTE_DOUBLE_LENGTH);
            OutputDebugString(strOutput);

            OutputDebugString(L"};\r\n\r\n");
        }
    }

    for (uint16_t nCharIndex = 0; nCharIndex < ARRAYSIZE(KOF01_A_EffectPalettes); nCharIndex++)
    {
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF01_A_EffectPalettes[nCharIndex].pszCharacterName);

        strOutput.Format(L"const sGame_PaletteDataset KOF01_A_%s_PALETTES[] = \r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);

        // Status effects
        for (uint16_t nStatusIndex = 0; nStatusIndex < nCountStatusEffects; nStatusIndex++)
        {
            uint32_t nCurrentOffset = KOF01_A_EffectPalettes[nCharIndex].nROMOffset + (nStatusIndex * KOF01_PALETTE_LENGTH);

            strOutput.Format(L"    { L\"Effect %u\", 0x%x, 0x%x },\r\n", nStatusIndex, nCurrentOffset, nCurrentOffset + KOF01_PALETTE_LENGTH);
            OutputDebugString(strOutput);
        }

        OutputDebugString(L"};\r\n\r\n");
    }

    for (uint16_t nCharIndex = 0; nCharIndex < ARRAYSIZE(KOF01_A_CharacterPalettes); nCharIndex++)
    {
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF01_A_CharacterPalettes[nCharIndex].pszCharacterName);

        strOutput.Format(L"const sDescTreeNode KOF01_A_%s_COLLECTION[] = \r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);

        for (uint16_t nColorIndex = 0; nColorIndex < nColorOptionsPerCharacter; nColorIndex++)
        {
            wchar_t szColorOptionCodeDesc[MAX_DESCRIPTION_LENGTH];
            StruprRemoveNonASCII(szColorOptionCodeDesc, ARRAYSIZE(szColorOptionCodeDesc), DEF_BUTTONLABEL_2_PK[nColorIndex]);

            strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)KOF01_A_%s_%s_PALETTES, ARRAYSIZE(KOF01_A_%s_%s_PALETTES) },\r\n", DEF_BUTTONLABEL_2_PK[nColorIndex], szCodeDesc, szColorOptionCodeDesc, szCodeDesc, szColorOptionCodeDesc);
            OutputDebugString(strOutput);
        }

        if (!KOF01_A_CharacterPalettes[nCharIndex].fIsBoss)
        {
            strOutput.Format(L"    { L\"Win Portrait Assist\", DESC_NODETYPE_TREE, (void*)KOF01_A_%s_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_%s_WINPORTRAIT_PALETTES) },\r\n", szCodeDesc, szCodeDesc);
            OutputDebugString(strOutput);
        }

        if (KOF01_A_CharacterPalettes[nCharIndex].fHasEffects)
        {
            strOutput.Format(L"    { L\"Effects\", DESC_NODETYPE_TREE, (void*)KOF01_A_%sEFFECTS_PALETTES, ARRAYSIZE(KOF01_A_%sEFFECTS_PALETTES) },\r\n", szCodeDesc, szCodeDesc);
            OutputDebugString(strOutput);
        }
        OutputDebugString(L"};\r\n\r\n");
    }
}
