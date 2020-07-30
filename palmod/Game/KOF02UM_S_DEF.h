#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of KOF02UM_S_KYO_PALETTE_A. 
// * Update every array using KOF02UM_S_NUMUNIT below
// That should be it.  Good luck.

constexpr auto KOF02UM_S_NUMUNIT = indexKOF02UM_S_Last;

#define KOF02UM_S_EXTRALOC KOF02UM_S_NUMUNIT

struct sKOF02_CharacterDump
{
    LPCTSTR pszCharacterName = nullptr;
    UINT32 locationA = 0;
    UINT32 locationB = 0;
    UINT32 locationC = 0;
    UINT32 locationD = 0;
    LPCTSTR pszImageRefName = nullptr;
    LPCTSTR pszHSDM1NameOverride = nullptr;
    LPCTSTR pszDMSDMNameOverride = nullptr;
    LPCTSTR pszHSDM2NameOverride = nullptr;
    LPCTSTR pszHSDM3NameOverride = nullptr;
};

// Sorted by ROM layout...
const sKOF02_CharacterDump KOF02UM_CharacterOffsetArray[] =
{
    { _T("Kyo"),            0x02000, 0x02200, 0x02400, 0x02600, _T("indexKOFSprites_02Kyo"),        _T("Fire Attack Stuff 1"), _T("Fire Attack Stuff 2"), _T("Shingo Intro Stuff") },
    { _T("Benimaru"),       0x02800, 0x02A00, 0x02C00, 0x02E00, _T("indexKOFSprites_98Benimaru"),   _T("Raijiken Flash"), _T("SDM/MAX Super Effects") },
    { _T("Daimon"),         0x03000, 0x03200, 0x03400, 0x03600, _T("indexKOFSprites_98Daimon"),     },
    { _T("Terry"),          0x03800, 0x03A00, 0x03C00, 0x03E00, _T("indexKOFSprites_98Terry"),      _T("Terry and Child Winpose"), _T("MAX2 Trail") },
    { _T("Andy"),           0x04000, 0x04200, 0x04400, 0x04600, _T("indexKOFSprites_02Andy"),       _T("Super Desperation Move 1"), _T("Max Desperation Move") },
    { _T("Joe"),            0x04800, 0x04A00, 0x04C00, 0x04E00, _T("indexKOFSprites_98Joe"),        },
    { _T("Kim"),            0x05000, 0x05200, 0x05400, 0x05600, _T("indexKOFSprites_98Kim"),        },
    { _T("Chang"),          0x05800, 0x05A00, 0x05C00, 0x05E00, _T("indexKOFSprites_98Chang"),      },
    { _T("Choi"),           0x06000, 0x06200, 0x06400, 0x06600, _T("indexKOFSprites_98Choi"),       _T("Claw Attack Effects") },
    { _T("Athena"),         0x06800, 0x06A00, 0x06C00, 0x06E00, _T("indexKOFSprites_02Athena"),     _T("Athena Transformations"), _T("SDM/MAX Super Palette"), nullptr, _T("Intro Stuff") },
    { _T("Kensou"),         0x07000, 0x07200, 0x07400, 0x07600, _T("indexKOFSprites_98Kensou"),     _T("MAX2 Power Up State") },
    { _T("Chin"),           0x07800, 0x07A00, 0x07C00, 0x07E00, _T("indexKOFSprites_02Chin"),       _T("Fire Palette") },
    { _T("Leona"),          0x08000, 0x08200, 0x08400, 0x08600, _T("indexKOFSprites_98Leona"),      _T("MAX2 Kick Effect"), _T("Orochi Leona") },
    { _T("Ralf"),           0x08800, 0x08A00, 0x08C00, 0x08E00, _T("indexKOFSprites_02Ralf"),       },
    { _T("Clark"),          0x09000, 0x09200, 0x09400, 0x09600, _T("indexKOFSprites_02Clark"),      },
    { _T("Ryo"),            0x09800, 0x09A00, 0x09C00, 0x09E00, _T("indexKOFSprites_98Ryo"),        },
    { _T("Robert"),         0x0A000, 0x0A200, 0x0A400, 0x0A600, _T("indexKOFSprites_02Robert"),     },
    { _T("Takuma"),         0x0A800, 0x0AA00, 0x0AC00, 0x0AE00, _T("indexKOFSprites_98Takuma"),     },
    { _T("Mai"),            0x0B000, 0x0B200, 0x0B400, 0x0B600, _T("indexKOFSprites_98Mai"),        _T("SDM/MAX Fire Effect 1"), _T("SDM/MAX Fire Effect 2"), _T("Dress"), _T("Andy Intro Stuff") },
    { _T("Yuri"),           0x0B800, 0x0BA00, 0x0BC00, 0x0BE00, _T("indexKOFSprites_02Yuri"),       },
    { _T("May Lee"),        0x0C000, 0x0C200, 0x0C400, 0x0C600, _T("indexKOFSprites_02MayLee"),     },
    { _T("Iori"),           0x0C800, 0x0CA00, 0x0CC00, 0x0CE00, _T("indexKOFSprites_98Iori"),       },
    { _T("Mature"),         0x0D000, 0x0D200, 0x0D400, 0x0D600, _T("indexKOFSprites_98Mature"),     },
    { _T("Vice"),           0x0D800, 0x0DA00, 0x0DC00, 0x0DE00, _T("indexKOFSprites_98Vice"),       },
    { _T("Yamazaki"),       0x0E000, 0x0E200, 0x0E400, 0x0E600, _T("indexKOFSprites_98Yamazaki"),   _T("Uppercut Super"), _T("Intro Stuff") },
    { _T("Blue Mary"),      0x0E800, 0x0EA00, 0x0EC00, 0x0EE00, _T("indexKOFSprites_98BlueMary"),   _T("Anton and Jacket") },
    { _T("Billy"),          0x0F000, 0x0F200, 0x0F400, 0x0F600, _T("indexKOFSprites_98Billy"),      nullptr, _T("Eiji Kisaragi") },
    { _T("Yashiro"),        0x0F800, 0x0FA00, 0x0FC00, 0x0FE00, _T("indexKOFSprites_98Yashiro"),    },
    { _T("Shermie"),        0x10000, 0x10200, 0x10400, 0x10600, _T("indexKOFSprites_98Shermie"),    },
    { _T("Chris"),          0x10800, 0x10A00, 0x10C00, 0x10E00, _T("indexKOFSprites_98Chris"),      },
    { _T("K�"),             0x11000, 0x11200, 0x11400, 0x11600, _T("indexKOFSprites_02K"),          _T("Diana Intro Stuff") },
    { _T("Maxima"),         0x11800, 0x11A00, 0x11C00, 0x11E00, _T("indexKOFSprites_02Maxima"),     },
    { _T("Whip"),           0x12000, 0x12200, 0x12400, 0x12600, _T("indexKOFSprites_02Whip"),       },
    { _T("Vanessa"),        0x12800, 0x12A00, 0x12C00, 0x12E00, _T("indexKOFSprites_02Vanessa"),    },
    { _T("Seth"),           0x13000, 0x13200, 0x13400, 0x13600, _T("indexKOFSprites_02Seth"),       },
    { _T("Ramon"),          0x13800, 0x13A00, 0x13C00, 0x13E00, _T("indexKOFSprites_02Ramon"),      },
    { _T("Kula"),           0x14000, 0x14200, 0x14400, 0x14600, _T("indexKOFSprites_02Kula"),       _T("Diana Stuff"), _T("Foxy Stuff"), nullptr, _T("Ice Attack") },
    { _T("Nameless"),       0x14800, 0x14A00, 0x14C00, 0x14E00, _T("indexKOFSprites_02Nameless"),   _T("SDM Fire"), nullptr, nullptr, _T("MAX Super Drill") },
    { _T("Angel"),          0x15000, 0x15200, 0x15400, 0x15600, _T("indexKOFSprites_02Angel"),      _T("Time Over Lose") },
    { _T("Omega Rugal"),    0x15800, 0x15A00, 0x15C00, 0x15E00, _T("indexKOFSprites_98Rugal"),      nullptr, nullptr, _T("Superboss Intro Stuff") },
    { _T("Kusanagi"),       0x16000, 0x16200, 0x16400, 0x16600, _T("indexKOFSprites_02Kusanagi"),   _T("Fire Attack Stuff 1"), _T("Fire Attack Stuff 2") },
    { _T("O.Yashiro"),      0x16800, 0x16A00, 0x16C00, 0x16E00, _T("indexKOFSprites_98Yashiro"),    },
    { _T("O.Shermie"),      0x17000, 0x17200, 0x17400, 0x17600, _T("indexKOFSprites_98Shermie"),    nullptr, nullptr, nullptr, _T("MAX2 Lightning") },
    { _T("O.Chris"),        0x17800, 0x17A00, 0x17C00, 0x17E00, _T("indexKOFSprites_98Chris"),      nullptr, _T("Orochi Fire Palette"), nullptr, _T("Orochi") },

    // 45c000
    { _T("Shingo"),         0x45c00, 0x45d00, 0x45e00, 0x45f00, _T("indexKOFSprites_98Shingo"),     },
    { _T("King"),           0x46400, 0x46500, 0x46600, 0x46700, _T("indexKOFSprites_02King"),       _T("Rose and Kick Effects") },
    { _T("Xiangfei"),       0x46c00, 0x46d00, 0x46e00, 0x46f00, _T("indexKOFSprites_01Xiangfei"),   _T("Sword Stuff") },
    { _T("Hinako"),         0x47400, 0x47500, 0x47600, 0x47700, _T("indexKOFSprites_02Hinako"),     },
    { _T("Heidern"),        0x47c00, 0x47d00, 0x47e00, 0x47f00, _T("indexKOFSprites_98Heidern"),    _T("Intro Stuff"), _T("Storm Bringer Effects") },
    { _T("Lin"),            0x48400, 0x48500, 0x48600, 0x48700, _T("indexKOFSprites_02Lin"),        nullptr, _T("Lin Win Stuff") },
    { _T("EX Takuma"),      0x48c00, 0x48d00, 0x48e00, 0x48f00, _T("indexKOFSprites_98Takuma"),     },
    { _T("Bao"),            0x49400, 0x49500, 0x49600, 0x49700, _T("indexKOFSprites_00Bao"),        },
    { _T("Jhun Hoon"),      0x49c00, 0x49d00, 0x49e00, 0x49f00, _T("indexKOFSprites_02Jhun"),       },
    { _T("Kyo-1"),          0x4a400, 0x4a500, 0x4a600, 0x4a700, _T("indexKOFSprites_98Kyo"),        _T("Fire Attack Stuff 1"), _T("Fire Attack Stuff 2") },
    { _T("Foxy"),           0x4ac00, 0x4ad00, 0x4ae00, 0x4af00, _T("indexKOFSprites_02Foxy"),       _T("Sword Cutter Effect"), _T("Diana Win Stuff"), _T("NESTS Flag Super/Win") },

    { _T("Kasumi"),         0x4b400, 0x4b500, 0x4b600, 0x4b700, _T("indexKOFSprites_00Kasumi"),     },
    { _T("Geese"),          0x4bc00, 0x4bd00, 0x4be00, 0x4bf00, _T("indexKOFSprites_02Geese"),      },
    { _T("Nightmare Geese"), 0x4c400, 0x4c500, 0x4c600, 0x4c700, _T("indexKOFSprites_02Geese"),     },
    { _T("EX Robert"),      0x4cc00, 0x4cd00, 0x4ce00, 0x4cf00, _T("indexKOFSprites_00Robert"),     },
    { _T("EX Kensou"),      0x4d400, 0x4d500, 0x4d600, 0x4d700, _T("indexKOFSprites_98Kensou"),     _T("Super Desperation Move Attack") },
    { _T("Kyo-2"),          0x4dc00, 0x4dd00, 0x4de00, 0x4df00, _T("indexKOFSprites_98Kyo"),        _T("Fire Attack Stuff 1"), _T("Fire Attack Stuff 2") },
    { _T("Goenitz"),        0x4e400, 0x4e500, 0x4e600, 0x4e700, _T("indexKOFSprites_02Goenitz"),    },

    { _T("Krizalid"),       0x4ec00, 0x4ed00, 0x4ee00, 0x4ef00, _T("indexKOFSprites_99Krizalid"),   _T("Krizalid Intro Stuff"), _T("SDM/MAX Fire 1") },
    { _T("Clone Zero"),     0x4f400, 0x4f500, 0x4f600, 0x4f700, _T("indexKOFSprites_00ZeroClone"),  },

    { _T("Original Zero"),  0x4fc00, 0x4fd00, 0x4fe00, 0x4ff00, _T("indexKOFSprites_02OZero"),      _T("Striker Glugan"), nullptr, _T("Striker Lon"), _T("Striker Krizalid") },
    { _T("Igniz"),          0x50400, 0x50500, 0x50600, 0x50700, _T("indexKOFSprites_02Igniz"),      _T("Misty Win Stuff") },
};


// These tables were added by hand through research.  They are not part of the table print output logic.
const sGame_PaletteDataset KOF02UM_S_KYO_PALETTES_PORTRAITS[] =
{
    { _T("Kyo A Portrait"), 0x53900, 0x53920, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kyo },
    { _T("Kyo B Portrait"), 0x53920, 0x53940, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kyo },
    { _T("Kyo C Portrait"), 0x53940, 0x53960, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kyo },
    { _T("Kyo D Portrait"), 0x53960, 0x53980, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kyo },
};

const sGame_PaletteDataset KOF02UM_S_BENIMARU_PALETTES_PORTRAITS[] =
{
    { _T("Benimaru A Portrait"), 0x53a00, 0x53a20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Benimaru },
    { _T("Benimaru B Portrait"), 0x53a20, 0x53a40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Benimaru },
    { _T("Benimaru C Portrait"), 0x53a40, 0x53a60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Benimaru },
    { _T("Benimaru D Portrait"), 0x53a60, 0x53a80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Benimaru },
};

const sGame_PaletteDataset KOF02UM_S_DAIMON_PALETTES_PORTRAITS[] =
{
    { _T("Daimon A Portrait"), 0x53b00, 0x53b20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Daimon },
    { _T("Daimon B Portrait"), 0x53b20, 0x53b40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Daimon },
    { _T("Daimon C Portrait"), 0x53b40, 0x53b60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Daimon },
    { _T("Daimon D Portrait"), 0x53b60, 0x53b80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Daimon },
};

const sGame_PaletteDataset KOF02UM_S_TERRY_PALETTES_PORTRAITS[] =
{
    { _T("Terry A Portrait"), 0x53c00, 0x53c20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Terry },
    { _T("Terry B Portrait"), 0x53c20, 0x53c40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Terry },
    { _T("Terry C Portrait"), 0x53c40, 0x53c60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Terry },
    { _T("Terry D Portrait"), 0x53c60, 0x53c80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Terry },
};

const sGame_PaletteDataset KOF02UM_S_ANDY_PALETTES_PORTRAITS[] =
{
    { _T("Andy A Portrait"), 0x53d00, 0x53d20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Andy },
    { _T("Andy B Portrait"), 0x53d20, 0x53d40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Andy },
    { _T("Andy C Portrait"), 0x53d40, 0x53d60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Andy },
    { _T("Andy D Portrait"), 0x53d60, 0x53d80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Andy },
};

const sGame_PaletteDataset KOF02UM_S_JOE_PALETTES_PORTRAITS[] =
{
    { _T("Joe A Portrait"), 0x53e00, 0x53e20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Joe },
    { _T("Joe B Portrait"), 0x53e20, 0x53e40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Joe },
    { _T("Joe C Portrait"), 0x53e40, 0x53e60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Joe },
    { _T("Joe D Portrait"), 0x53e60, 0x53e80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Joe },
};

const sGame_PaletteDataset KOF02UM_S_KIM_PALETTES_PORTRAITS[] =
{
    { _T("Kim A Portrait"), 0x53f00, 0x53f20, indexKOFSprites_02UMExtras, indexKOF02UM_S_King },
    { _T("Kim B Portrait"), 0x53f20, 0x53f40, indexKOFSprites_02UMExtras, indexKOF02UM_S_King },
    { _T("Kim C Portrait"), 0x53f40, 0x53f60, indexKOFSprites_02UMExtras, indexKOF02UM_S_King },
    { _T("Kim D Portrait"), 0x53f60, 0x53f80, indexKOFSprites_02UMExtras, indexKOF02UM_S_King },
};

const sGame_PaletteDataset KOF02UM_S_CHANG_PALETTES_PORTRAITS[] =
{
    { _T("Chang A Portrait"), 0x54000, 0x54020, indexKOFSprites_02UMExtras, indexKOF02UM_S_Chang },
    { _T("Chang B Portrait"), 0x54020, 0x54040, indexKOFSprites_02UMExtras, indexKOF02UM_S_Chang },
    { _T("Chang C Portrait"), 0x54040, 0x54060, indexKOFSprites_02UMExtras, indexKOF02UM_S_Chang },
    { _T("Chang D Portrait"), 0x54060, 0x54080, indexKOFSprites_02UMExtras, indexKOF02UM_S_Chang },
};

const sGame_PaletteDataset KOF02UM_S_CHOI_PALETTES_PORTRAITS[] =
{
    { _T("Choi A Portrait"), 0x54100, 0x54120, indexKOFSprites_02UMExtras, indexKOF02UM_S_Choi },
    { _T("Choi B Portrait"), 0x54120, 0x54140, indexKOFSprites_02UMExtras, indexKOF02UM_S_Choi },
    { _T("Choi C Portrait"), 0x54140, 0x54160, indexKOFSprites_02UMExtras, indexKOF02UM_S_Choi },
    { _T("Choi D Portrait"), 0x54160, 0x54180, indexKOFSprites_02UMExtras, indexKOF02UM_S_Choi },
};

const sGame_PaletteDataset KOF02UM_S_ATHENA_PALETTES_PORTRAITS[] =
{
    { _T("Athena A Portrait"), 0x54200, 0x54220, indexKOFSprites_02UMExtras, indexKOF02UM_S_Athena },
    { _T("Athena B Portriat"), 0x54220, 0x54240, indexKOFSprites_02UMExtras, indexKOF02UM_S_Athena },
    { _T("Athena C Portrait"), 0x54240, 0x54260, indexKOFSprites_02UMExtras, indexKOF02UM_S_Athena },
    { _T("Athena D Portrait"), 0x54260, 0x54280, indexKOFSprites_02UMExtras, indexKOF02UM_S_Athena },
};

const sGame_PaletteDataset KOF02UM_S_KENSOU_PALETTES_PORTRAITS[] =
{
    { _T("Kensou A Portrait"), 0x54300, 0x54320, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kim },
    { _T("Kensou B Portrait"), 0x54320, 0x54340, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kim },
    { _T("Kensou C Portrait"), 0x54340, 0x54360, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kim },
    { _T("Kensou D Portrait"), 0x54360, 0x54380, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kim },
};

const sGame_PaletteDataset KOF02UM_S_CHIN_PALETTES_PORTRAITS[] =
{
    { _T("Chin A Portrait"), 0x54400, 0x54420, indexKOFSprites_02UMExtras, indexKOF02UM_S_Chin },
    { _T("Chin B Portrait"), 0x54420, 0x54440, indexKOFSprites_02UMExtras, indexKOF02UM_S_Chin },
    { _T("Chin C Portrait"), 0x54440, 0x54460, indexKOFSprites_02UMExtras, indexKOF02UM_S_Chin },
    { _T("Chin D Portrait"), 0x54460, 0x54480, indexKOFSprites_02UMExtras, indexKOF02UM_S_Chin },
};

const sGame_PaletteDataset KOF02UM_S_LEONA_PALETTES_PORTRAITS[] =
{
    { _T("Leona A Portrait"), 0x54500, 0x54520, indexKOFSprites_02UMExtras, indexKOF02UM_S_Leona },
    { _T("Leona B Portrait"), 0x54520, 0x54540, indexKOFSprites_02UMExtras, indexKOF02UM_S_Leona },
    { _T("Leona C Portrait"), 0x54540, 0x54560, indexKOFSprites_02UMExtras, indexKOF02UM_S_Leona },
    { _T("Leona D Portrait"), 0x54560, 0x54580, indexKOFSprites_02UMExtras, indexKOF02UM_S_Leona },
};

const sGame_PaletteDataset KOF02UM_S_RALF_PALETTES_PORTRAITS[] =
{
    { _T("Ralf A Portrait"), 0x54600, 0x54620, indexKOFSprites_02UMExtras, indexKOF02UM_S_Ralf },
    { _T("Ralf B Portrait"), 0x54620, 0x54640, indexKOFSprites_02UMExtras, indexKOF02UM_S_Ralf },
    { _T("Ralf C Portrait"), 0x54640, 0x54660, indexKOFSprites_02UMExtras, indexKOF02UM_S_Ralf },
    { _T("Ralf D Portrait"), 0x54660, 0x54680, indexKOFSprites_02UMExtras, indexKOF02UM_S_Ralf },
};

const sGame_PaletteDataset KOF02UM_S_CLARK_PALETTES_PORTRAITS[] =
{
    { _T("Clark A Portrait"), 0x54700, 0x54720, indexKOFSprites_02UMExtras, indexKOF02UM_S_Clark },
    { _T("Clark B Portrait"), 0x54720, 0x54740, indexKOFSprites_02UMExtras, indexKOF02UM_S_Clark },
    { _T("Clark C Portrait"), 0x54740, 0x54760, indexKOFSprites_02UMExtras, indexKOF02UM_S_Clark },
    { _T("Clark D Portrait"), 0x54760, 0x54780, indexKOFSprites_02UMExtras, indexKOF02UM_S_Clark },
};

const sGame_PaletteDataset KOF02UM_S_RYO_PALETTES_PORTRAITS[] =
{
    { _T("Ryo A Portrait"), 0x54800, 0x54820, indexKOFSprites_02UMExtras, indexKOF02UM_S_Ryo },
    { _T("Ryo B Portrait"), 0x54820, 0x54840, indexKOFSprites_02UMExtras, indexKOF02UM_S_Ryo },
    { _T("Ryo C Portrait"), 0x54840, 0x54860, indexKOFSprites_02UMExtras, indexKOF02UM_S_Ryo },
    { _T("Ryo D Portrait"), 0x54860, 0x54880, indexKOFSprites_02UMExtras, indexKOF02UM_S_Ryo },
};

const sGame_PaletteDataset KOF02UM_S_ROBERT_PALETTES_PORTRAITS[] =
{
    { _T("Robert A Portrait"), 0x54900, 0x54920, indexKOFSprites_02UMExtras, indexKOF02UM_S_Robert },
    { _T("Robert B Portrait"), 0x54920, 0x54940, indexKOFSprites_02UMExtras, indexKOF02UM_S_Robert },
    { _T("Robert C Portrait"), 0x54940, 0x54960, indexKOFSprites_02UMExtras, indexKOF02UM_S_Robert },
    { _T("Robert D Portrait"), 0x54960, 0x54980, indexKOFSprites_02UMExtras, indexKOF02UM_S_Robert },
};

const sGame_PaletteDataset KOF02UM_S_TAKUMA_PALETTES_PORTRAITS[] =
{
    { _T("Takuma A Portrait"), 0x54a00, 0x54a20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Takuma },
    { _T("Takuma B Portrait"), 0x54a20, 0x54a40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Takuma },
    { _T("Takuma C Portrait"), 0x54a40, 0x54a60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Takuma },
    { _T("Takuma D Portrait"), 0x54a60, 0x54a80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Takuma },
};

const sGame_PaletteDataset KOF02UM_S_MAI_PALETTES_PORTRAITS[] =
{
    { _T("Mai A Portrait"), 0x54b00, 0x54b20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Mai },
    { _T("Mai B Portrait"), 0x54b20, 0x54b40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Mai },
    { _T("Mai C Portrait"), 0x54b40, 0x54b60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Mai },
    { _T("Mai D Portrait"), 0x54b60, 0x54b80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Mai },
};

const sGame_PaletteDataset KOF02UM_S_YURI_PALETTES_PORTRAITS[] =
{
    { _T("Yuri A Portrait"), 0x54c00, 0x54c20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Yuri },
    { _T("Yuri B Portrait"), 0x54c20, 0x54c40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Yuri },
    { _T("Yuri C Portrait"), 0x54c40, 0x54c60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Yuri },
    { _T("Yuri D Portrait"), 0x54c60, 0x54c80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Yuri },
};

const sGame_PaletteDataset KOF02UM_S_MAYLEE_PALETTES_PORTRAITS[] =
{
    { _T("May Lee A Portrait"), 0x54d00, 0x54d20, indexKOFSprites_02UMExtras, indexKOF02UM_S_MayLee },
    { _T("May Lee B Portrait"), 0x54d20, 0x54d40, indexKOFSprites_02UMExtras, indexKOF02UM_S_MayLee },
    { _T("May Lee C Portrait"), 0x54d40, 0x54d60, indexKOFSprites_02UMExtras, indexKOF02UM_S_MayLee },
    { _T("May Lee D Portrait"), 0x54d60, 0x54d80, indexKOFSprites_02UMExtras, indexKOF02UM_S_MayLee },
};

const sGame_PaletteDataset KOF02UM_S_IORI_PALETTES_PORTRAITS[] =
{
    { _T("Iori A Portrait"), 0x54e00, 0x54e20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Iori },
    { _T("Iori B Portrait"), 0x54e20, 0x54e40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Iori },
    { _T("Iori C Portrait"), 0x54e40, 0x54e60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Iori },
    { _T("Iori D Portrait"), 0x54e60, 0x54e80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Iori },
};

const sGame_PaletteDataset KOF02UM_S_MATURE_PALETTES_PORTRAITS[] =
{
    { _T("Mature A Portrait"), 0x54f00, 0x54f20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Mature },
    { _T("Mature B Portrait"), 0x54f20, 0x54f40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Mature },
    { _T("Mature C Portrait"), 0x54f40, 0x54f60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Mature },
    { _T("Mature D Portrait"), 0x54f60, 0x54f80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Mature },
};

const sGame_PaletteDataset KOF02UM_S_VICE_PALETTES_PORTRAITS[] =
{
    { _T("Vice A Portrait"), 0x55000, 0x55020, indexKOFSprites_02UMExtras, indexKOF02UM_S_Vice },
    { _T("Vice B Portrait"), 0x55020, 0x55040, indexKOFSprites_02UMExtras, indexKOF02UM_S_Vice },
    { _T("Vice C Portrait"), 0x55040, 0x55060, indexKOFSprites_02UMExtras, indexKOF02UM_S_Vice },
    { _T("Vice D Portrait"), 0x55060, 0x55080, indexKOFSprites_02UMExtras, indexKOF02UM_S_Vice },
};

const sGame_PaletteDataset KOF02UM_S_YAMAZAKI_PALETTES_PORTRAITS[] =
{
    { _T("Yamazaki A Portrait"), 0x55100, 0x55120, indexKOFSprites_02UMExtras, indexKOF02UM_S_Yamazaki },
    { _T("Yamazaki B Portrait"), 0x55120, 0x55140, indexKOFSprites_02UMExtras, indexKOF02UM_S_Yamazaki },
    { _T("Yamazaki C Portrait"), 0x55140, 0x55160, indexKOFSprites_02UMExtras, indexKOF02UM_S_Yamazaki },
    { _T("Yamazaki D Portrait"), 0x55160, 0x55180, indexKOFSprites_02UMExtras, indexKOF02UM_S_Yamazaki },
};

const sGame_PaletteDataset KOF02UM_S_BLUEMARY_PALETTES_PORTRAITS[] =
{
    { _T("Blue Mary A Portrait"), 0x55200, 0x55220, indexKOFSprites_02UMExtras, indexKOF02UM_S_BlueMary },
    { _T("Blue Mary B Portrait"), 0x55220, 0x55240, indexKOFSprites_02UMExtras, indexKOF02UM_S_BlueMary },
    { _T("Blue Mary C Portrait"), 0x55240, 0x55260, indexKOFSprites_02UMExtras, indexKOF02UM_S_BlueMary },
    { _T("Blue Mary D Portrait"), 0x55260, 0x55280, indexKOFSprites_02UMExtras, indexKOF02UM_S_BlueMary },
};

const sGame_PaletteDataset KOF02UM_S_BILLY_PALETTES_PORTRAITS[] =
{
    { _T("Billy A Portrait"), 0x55300, 0x55320, indexKOFSprites_02UMExtras, indexKOF02UM_S_Billy },
    { _T("Billy B Portrait"), 0x55320, 0x55340, indexKOFSprites_02UMExtras, indexKOF02UM_S_Billy },
    { _T("Billy C Portrait"), 0x55340, 0x55360, indexKOFSprites_02UMExtras, indexKOF02UM_S_Billy },
    { _T("Billy D Portrait"), 0x55360, 0x55380, indexKOFSprites_02UMExtras, indexKOF02UM_S_Billy },
};

const sGame_PaletteDataset KOF02UM_S_YASHIRO_PALETTES_PORTRAITS[] =
{
    { _T("Yashiro A Portrait"), 0x55400, 0x55420, indexKOFSprites_02UMExtras, indexKOF02UM_S_Yashiro },
    { _T("Yashiro B Portrait"), 0x55420, 0x55440, indexKOFSprites_02UMExtras, indexKOF02UM_S_Yashiro },
    { _T("Yashiro C Portrait"), 0x55440, 0x55460, indexKOFSprites_02UMExtras, indexKOF02UM_S_Yashiro },
    { _T("Yashiro D Portrait"), 0x55460, 0x55480, indexKOFSprites_02UMExtras, indexKOF02UM_S_Yashiro },
};

const sGame_PaletteDataset KOF02UM_S_SHERMIE_PALETTES_PORTRAITS[] =
{
    { _T("Shermie A Portrait"), 0x55500, 0x55520, indexKOFSprites_02UMExtras, indexKOF02UM_S_Shermie },
    { _T("Shermie B Portrait"), 0x55520, 0x55540, indexKOFSprites_02UMExtras, indexKOF02UM_S_Shermie },
    { _T("Shermie C Portrait"), 0x55540, 0x55560, indexKOFSprites_02UMExtras, indexKOF02UM_S_Shermie },
    { _T("Shermie D Portrait"), 0x55560, 0x55580, indexKOFSprites_02UMExtras, indexKOF02UM_S_Shermie },
};

const sGame_PaletteDataset KOF02UM_S_CHRIS_PALETTES_PORTRAITS[] =
{
    { _T("Chris A Portrait"), 0x55600, 0x55620, indexKOFSprites_02UMExtras, indexKOF02UM_S_Chris },
    { _T("Chris B Portrait"), 0x55620, 0x55640, indexKOFSprites_02UMExtras, indexKOF02UM_S_Chris },
    { _T("Chris C Portrait"), 0x55640, 0x55660, indexKOFSprites_02UMExtras, indexKOF02UM_S_Chris },
    { _T("Chris D Portrait"), 0x55660, 0x55680, indexKOFSprites_02UMExtras, indexKOF02UM_S_Chris },
};

const sGame_PaletteDataset KOF02UM_S_K_PALETTES_PORTRAITS[] =
{
    { _T("K' A Portrait"), 0x55700, 0x55720, indexKOFSprites_02UMExtras, indexKOF02UM_S_K },
    { _T("K' B Portrait"), 0x55720, 0x55740, indexKOFSprites_02UMExtras, indexKOF02UM_S_K },
    { _T("K' C Portrait"), 0x55740, 0x55760, indexKOFSprites_02UMExtras, indexKOF02UM_S_K },
    { _T("K' D Portrait"), 0x55760, 0x55780, indexKOFSprites_02UMExtras, indexKOF02UM_S_K },
};

const sGame_PaletteDataset KOF02UM_S_MAXIMA_PALETTES_PORTRAITS[] =
{
    { _T("Maxima A Portrait"), 0x55800, 0x55820, indexKOFSprites_02UMExtras, indexKOF02UM_S_Maxima },
    { _T("Maxima B Portrait"), 0x55820, 0x55840, indexKOFSprites_02UMExtras, indexKOF02UM_S_Maxima },
    { _T("Maxima C Portrait"), 0x55840, 0x55860, indexKOFSprites_02UMExtras, indexKOF02UM_S_Maxima },
    { _T("Maxima D Portrait"), 0x55860, 0x55880, indexKOFSprites_02UMExtras, indexKOF02UM_S_Maxima },
};

const sGame_PaletteDataset KOF02UM_S_WHIP_PALETTES_PORTRAITS[] =
{
    { _T("Whip A Portrait"), 0x55900, 0x55920, indexKOFSprites_02UMExtras, indexKOF02UM_S_Whip },
    { _T("Whip B Portrait"), 0x55920, 0x55940, indexKOFSprites_02UMExtras, indexKOF02UM_S_Whip },
    { _T("Whip C Portrait"), 0x55940, 0x55960, indexKOFSprites_02UMExtras, indexKOF02UM_S_Whip },
    { _T("Whip D Portrait"), 0x55960, 0x55980, indexKOFSprites_02UMExtras, indexKOF02UM_S_Whip },
};

const sGame_PaletteDataset KOF02UM_S_VANESSA_PALETTES_PORTRAITS[] =
{
    { _T("Vanessa A Portrait"), 0x55a00, 0x55a20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Vanessa },
    { _T("Vanessa B Portrait"), 0x55a20, 0x55a40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Vanessa },
    { _T("Vanessa C Portrait"), 0x55a40, 0x55a60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Vanessa },
    { _T("Vanessa D Portrait"), 0x55a60, 0x55a80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Vanessa },
};

const sGame_PaletteDataset KOF02UM_S_SETH_PALETTES_PORTRAITS[] =
{
    { _T("Seth A Portrait"), 0x55b00, 0x55b20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Seth },
    { _T("Seth B Portrait"), 0x55b20, 0x55b40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Seth },
    { _T("Seth C Portrait"), 0x55b40, 0x55b60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Seth },
    { _T("Seth D Portrait"), 0x55b60, 0x55b80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Seth },
};

const sGame_PaletteDataset KOF02UM_S_RAMON_PALETTES_PORTRAITS[] =
{
    { _T("Ramon A Portrait"), 0x55c00, 0x55c20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Ramon },
    { _T("Ramon B Portrait"), 0x55c20, 0x55c40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Ramon },
    { _T("Ramon C Portrait"), 0x55c40, 0x55c60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Ramon },
    { _T("Ramon D Portrait"), 0x55c60, 0x55c80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Ramon },
};

const sGame_PaletteDataset KOF02UM_S_KULA_PALETTES_PORTRAITS[] =
{
    { _T("Kula A Portrait"), 0x55d00, 0x55d20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kusanagi },
    { _T("Kula B Portrait"), 0x55d20, 0x55d40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kusanagi },
    { _T("Kula C Portrait"), 0x55d40, 0x55d60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kusanagi },
    { _T("Kula D Portrait"), 0x55d60, 0x55d80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kusanagi },
};

const sGame_PaletteDataset KOF02UM_S_NAMELESS_PALETTES_PORTRAITS[] =
{
    { _T("Nameless A Portrait"), 0x55e00, 0x55e20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Nameless },
    { _T("Nameless B Portrait"), 0x55e20, 0x55e40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Nameless },
    { _T("Nameless C Portrait"), 0x55e40, 0x55e60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Nameless },
    { _T("Nameless D Portrait"), 0x55e60, 0x55e80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Nameless },
};

const sGame_PaletteDataset KOF02UM_S_ANGEL_PALETTES_PORTRAITS[] =
{
    { _T("Angel A Portrait"), 0x55f00, 0x55f20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Angel },
    { _T("Angel B Portrait"), 0x55f20, 0x55f40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Angel },
    { _T("Angel C Portrait"), 0x55f40, 0x55f60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Angel },
    { _T("Angel D Portrait"), 0x55f60, 0x55f80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Angel },
};

const sGame_PaletteDataset KOF02UM_S_OMEGARUGAL_PALETTES_PORTRAITS[] =
{
    { _T("Omega Rugal A Portrait"), 0x56000, 0x56020, indexKOFSprites_02UMExtras, indexKOF02UM_S_OmegaRugal },
    { _T("Omega Rugal B Portrait"), 0x56020, 0x56040, indexKOFSprites_02UMExtras, indexKOF02UM_S_OmegaRugal },
    { _T("Omega Rugal C Portrait"), 0x56040, 0x56060, indexKOFSprites_02UMExtras, indexKOF02UM_S_OmegaRugal },
    { _T("Omega Rugal D Portrait"), 0x56060, 0x56080, indexKOFSprites_02UMExtras, indexKOF02UM_S_OmegaRugal },
};

const sGame_PaletteDataset KOF02UM_S_KUSANAGI_PALETTES_PORTRAITS[] =
{
    { _T("Kusanagi A Portrait"), 0x56100, 0x56120, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kasumi },
    { _T("Kusanagi B Portrait"), 0x56120, 0x56140, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kasumi },
    { _T("Kusanagi C Portrait"), 0x56140, 0x56160, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kasumi },
    { _T("Kusanagi D Potrait"), 0x56160, 0x56180, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kasumi },
};

const sGame_PaletteDataset KOF02UM_S_SHINGO_PALETTES_PORTRAITS[] =
{
    { _T("Shingo A Portrait"), 0x56200, 0x56220, indexKOFSprites_02UMExtras, indexKOF02UM_S_Shingo },
    { _T("Shingo B Portrait"), 0x56220, 0x56240, indexKOFSprites_02UMExtras, indexKOF02UM_S_Shingo },
    { _T("Shingo C Portrait"), 0x56240, 0x56260, indexKOFSprites_02UMExtras, indexKOF02UM_S_Shingo },
    { _T("Shingo D Portrait"), 0x56260, 0x56280, indexKOFSprites_02UMExtras, indexKOF02UM_S_Shingo },
};

const sGame_PaletteDataset KOF02UM_S_KING_PALETTES_PORTRAITS[] =
{
    { _T("King A Portrait"), 0x56300, 0x56320, indexKOFSprites_02UMExtras, indexKOF02UM_S_Krizalid },
    { _T("King B Portrait"), 0x56320, 0x56340, indexKOFSprites_02UMExtras, indexKOF02UM_S_Krizalid },
    { _T("King C Portrait"), 0x56340, 0x56360, indexKOFSprites_02UMExtras, indexKOF02UM_S_Krizalid },
    { _T("King D Portrait"), 0x56360, 0x56380, indexKOFSprites_02UMExtras, indexKOF02UM_S_Krizalid },
};

const sGame_PaletteDataset KOF02UM_S_XIANGFEI_PALETTES_PORTRAITS[] =
{
    { _T("Xiangfei A Portrait"), 0x56400, 0x56420, indexKOFSprites_02UMExtras, indexKOF02UM_S_Xiangfei },
    { _T("Xiangfei B Portrait"), 0x56420, 0x56440, indexKOFSprites_02UMExtras, indexKOF02UM_S_Xiangfei },
    { _T("Xiangfei C Portrait"), 0x56440, 0x56460, indexKOFSprites_02UMExtras, indexKOF02UM_S_Xiangfei },
    { _T("Xiangfei D Portrait"), 0x56460, 0x56480, indexKOFSprites_02UMExtras, indexKOF02UM_S_Xiangfei },
};

const sGame_PaletteDataset KOF02UM_S_HINAKO_PALETTES_PORTRAITS[] =
{
    { _T("Hinako A Portrait"), 0x56500, 0x56520, indexKOFSprites_02UMExtras, indexKOF02UM_S_Hinako },
    { _T("Hinako B Portrait"), 0x56520, 0x56540, indexKOFSprites_02UMExtras, indexKOF02UM_S_Hinako },
    { _T("Hinako C Portrait"), 0x56540, 0x56560, indexKOFSprites_02UMExtras, indexKOF02UM_S_Hinako },
    { _T("Hinako D Portrait"), 0x56560, 0x56580, indexKOFSprites_02UMExtras, indexKOF02UM_S_Hinako },
};

const sGame_PaletteDataset KOF02UM_S_HEIDERN_PALETTES_PORTRAITS[] =
{
    { _T("Heidern A Portrait"), 0x56600, 0x56620, indexKOFSprites_02UMExtras, indexKOF02UM_S_Heidern },
    { _T("Heidern B Portrait"), 0x56620, 0x56640, indexKOFSprites_02UMExtras, indexKOF02UM_S_Heidern },
    { _T("Heidern C Portrait"), 0x56640, 0x56660, indexKOFSprites_02UMExtras, indexKOF02UM_S_Heidern },
    { _T("Heidern D Portrait"), 0x56660, 0x56680, indexKOFSprites_02UMExtras, indexKOF02UM_S_Heidern },
};

const sGame_PaletteDataset KOF02UM_S_LIN_PALETTES_PORTRAITS[] =
{
    { _T("Lin A Portrait"), 0x56700, 0x56720, indexKOFSprites_02UMExtras, indexKOF02UM_S_Lin },
    { _T("Lin B Portrait"), 0x56720, 0x56740, indexKOFSprites_02UMExtras, indexKOF02UM_S_Lin },
    { _T("Lin C Portrait"), 0x56740, 0x56760, indexKOFSprites_02UMExtras, indexKOF02UM_S_Lin },
    { _T("Lin D Portrait"), 0x56760, 0x56780, indexKOFSprites_02UMExtras, indexKOF02UM_S_Lin },
};

const sGame_PaletteDataset KOF02UM_S_EXTAKUMA_PALETTES_PORTRAITS[] =
{
    { _T("EX Takuma A Portrait"), 0x56800, 0x56820, indexKOFSprites_02UMExtras, indexKOF02UM_S_EXTakuma },
    { _T("EX Takuma B Portrait"), 0x56820, 0x56840, indexKOFSprites_02UMExtras, indexKOF02UM_S_EXTakuma },
    { _T("EX Takuma C Portrait"), 0x56840, 0x56860, indexKOFSprites_02UMExtras, indexKOF02UM_S_EXTakuma },
    { _T("EX Takuma D Portrait"), 0x56860, 0x56880, indexKOFSprites_02UMExtras, indexKOF02UM_S_EXTakuma },
};

const sGame_PaletteDataset KOF02UM_S_BAO_PALETTES_PORTRAITS[] =
{
    { _T("Bao A Portrait"), 0x56900, 0x56920, indexKOFSprites_02UMExtras, indexKOF02UM_S_Bao },
    { _T("Bao B Portrait"), 0x56920, 0x56940, indexKOFSprites_02UMExtras, indexKOF02UM_S_Bao },
    { _T("Bao C Portrait"), 0x56940, 0x56960, indexKOFSprites_02UMExtras, indexKOF02UM_S_Bao },
    { _T("Bao D Portrait"), 0x56960, 0x56980, indexKOFSprites_02UMExtras, indexKOF02UM_S_Bao },
};

const sGame_PaletteDataset KOF02UM_S_JHUNHOON_PALETTES_PORTRAITS[] =
{
    { _T("Jhun A Portrait"), 0x56a00, 0x56a20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Jhun },
    { _T("Jhun B Portrait"), 0x56a20, 0x56a40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Jhun },
    { _T("Jhun C Portrait"), 0x56a40, 0x56a60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Jhun },
    { _T("Jhun D Portrait"), 0x56a60, 0x56a80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Jhun },
};

const sGame_PaletteDataset KOF02UM_S_KYO1_PALETTES_PORTRAITS[] =
{
    { _T("Kyo-1 A Portrait"), 0x56b00, 0x56b20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kyo1 },
    { _T("Kyo-1 B Portrait"), 0x56b20, 0x56b40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kyo1 },
    { _T("Kyo-1 C Portrait"), 0x56b40, 0x56b60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kyo1 },
    { _T("Kyo-1 D Portrait"), 0x56b60, 0x56b80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kyo1 },
};

const sGame_PaletteDataset KOF02UM_S_FOXY_PALETTES_PORTRAITS[] =
{
    { _T("Foxy A Portrait"), 0x56c00, 0x56c20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Foxy },
    { _T("Foxy B Portrait"), 0x56c20, 0x56c40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Foxy },
    { _T("Foxy C Portrait"), 0x56c40, 0x56c60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Foxy },
    { _T("Foxy D Portrait"), 0x56c60, 0x56c80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Foxy },
};

const sGame_PaletteDataset KOF02UM_S_KASUMI_PALETTES_PORTRAITS[] =
{
    { _T("Kasumi A Portrait"), 0x56d00, 0x56d20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kensou },
    { _T("Kasumi B Portrait"), 0x56d20, 0x56d40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kensou },
    { _T("Kasumi C Portrait"), 0x56d40, 0x56d60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kensou },
    { _T("Kasumi D Portrait"), 0x56d60, 0x56d80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kensou },
};

const sGame_PaletteDataset KOF02UM_S_GEESE_PALETTES_PORTRAITS[] =
{
    { _T("Geese A Portrait"), 0x56e00, 0x56e20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Geese },
    { _T("Geese B Portrait"), 0x56e20, 0x56e40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Geese },
    { _T("Geese C Portrait"), 0x56e40, 0x56e60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Geese },
    { _T("Geese D Portrait"), 0x56e60, 0x56e80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Geese },
};

const sGame_PaletteDataset KOF02UM_S_NIGHTMAREGEESE_PALETTES_PORTRAITS[] =
{
    { _T("Nightmare Geese A Portrait"), 0x56f00, 0x56f20, indexKOFSprites_02UMExtras, indexKOF02UM_S_NGeese },
    { _T("Nightmare Geese B Portrait"), 0x56f20, 0x56f40, indexKOFSprites_02UMExtras, indexKOF02UM_S_NGeese },
    { _T("Nightmare Geese C Portrait"), 0x56f40, 0x56f60, indexKOFSprites_02UMExtras, indexKOF02UM_S_NGeese },
    { _T("Nightmare Geese D Portrait"), 0x56f60, 0x56f80, indexKOFSprites_02UMExtras, indexKOF02UM_S_NGeese },
};

const sGame_PaletteDataset KOF02UM_S_EXROBERT_PALETTES_PORTRAITS[] =
{
    { _T("EX Robert A Portrait"), 0x57000, 0x57020, indexKOFSprites_02UMExtras, indexKOF02UM_S_EXRobert },
    { _T("EX Robert B Portrait"), 0x57020, 0x57040, indexKOFSprites_02UMExtras, indexKOF02UM_S_EXRobert },
    { _T("EX Robert C Portrait"), 0x57040, 0x57060, indexKOFSprites_02UMExtras, indexKOF02UM_S_EXRobert },
    { _T("EX Robert D Portrait"), 0x57060, 0x57080, indexKOFSprites_02UMExtras, indexKOF02UM_S_EXRobert },
};

const sGame_PaletteDataset KOF02UM_S_EXKENSOU_PALETTES_PORTRAITS[] =
{
    { _T("EX Kensou A Portrait"), 0x57100, 0x57120, indexKOFSprites_02UMExtras, indexKOF02UM_S_EXKensou },
    { _T("EX Kensou B Portrait"), 0x57120, 0x57140, indexKOFSprites_02UMExtras, indexKOF02UM_S_EXKensou },
    { _T("EX Kensou C Portrait"), 0x57140, 0x57160, indexKOFSprites_02UMExtras, indexKOF02UM_S_EXKensou },
    { _T("EX Kensou D Portrait"), 0x57160, 0x57180, indexKOFSprites_02UMExtras, indexKOF02UM_S_EXKensou },
};

const sGame_PaletteDataset KOF02UM_S_KYO2_PALETTES_PORTRAITS[] =
{
    { _T("Kyo-2 A Portrait"), 0x57200, 0x57220, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kyo2 },
    { _T("Kyo-2 B Portrait"), 0x57220, 0x57240, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kyo2 },
    { _T("Kyo-2 C Portrait"), 0x57240, 0x57260, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kyo2 },
    { _T("Kyo-2 D Portrait"), 0x57260, 0x57280, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kyo2 },
};

const sGame_PaletteDataset KOF02UM_S_GOENITZ_PALETTES_PORTRAITS[] =
{
    { _T("Goenitz A Portrait"), 0x57300, 0x57320, indexKOFSprites_02UMExtras, indexKOF02UM_S_Goenitz },
    { _T("Goenitz B Portrait"), 0x57320, 0x57340, indexKOFSprites_02UMExtras, indexKOF02UM_S_Goenitz },
    { _T("Goenitz C Portrait"), 0x57340, 0x57360, indexKOFSprites_02UMExtras, indexKOF02UM_S_Goenitz },
    { _T("Goenitz D Portrait"), 0x57360, 0x57380, indexKOFSprites_02UMExtras, indexKOF02UM_S_Goenitz },
};

const sGame_PaletteDataset KOF02UM_S_KRIZALID_PALETTES_PORTRAITS[] =
{
    { _T("Krizalid A Portrait"), 0x57400, 0x57420, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kula },
    { _T("Krizalid B Portrait"), 0x57420, 0x57440, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kula },
    { _T("Krizalid C Portrait"), 0x57440, 0x57460, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kula },
    { _T("Krizalid D Portrait"), 0x57460, 0x57480, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kula },
};

const sGame_PaletteDataset KOF02UM_S_CLONEZERO_PALETTES_PORTRAITS[] =
{
    { _T("Zero-1 A Portrait"), 0x57500, 0x57520, indexKOFSprites_02UMExtras, indexKOF02UM_S_CloneZero },
    { _T("Zero-1 B Portrait"), 0x57520, 0x57540, indexKOFSprites_02UMExtras, indexKOF02UM_S_CloneZero },
    { _T("Zero-1 C Portrait"), 0x57540, 0x57560, indexKOFSprites_02UMExtras, indexKOF02UM_S_CloneZero },
    { _T("Zero-1 D Portrait"), 0x57560, 0x57580, indexKOFSprites_02UMExtras, indexKOF02UM_S_CloneZero },
};

const sGame_PaletteDataset KOF02UM_S_ORIGINALZERO_PALETTES_PORTRAITS[] =
{
    { _T("Zero A Portrait"), 0x57600, 0x57620, indexKOFSprites_02UMExtras, indexKOF02UM_S_OZero },
    { _T("Zero B Portrait"), 0x57620, 0x57640, indexKOFSprites_02UMExtras, indexKOF02UM_S_OZero },
    { _T("Zero C Portrait"), 0x57640, 0x57660, indexKOFSprites_02UMExtras, indexKOF02UM_S_OZero },
    { _T("Zero D Portrait"), 0x57660, 0x57680, indexKOFSprites_02UMExtras, indexKOF02UM_S_OZero },
};

const sGame_PaletteDataset KOF02UM_S_IGNIZ_PALETTES_PORTRAITS[] =
{
    { _T("Igniz A Portrait"), 0x57700, 0x57720, indexKOFSprites_02UMExtras, indexKOF02UM_S_Igniz },
    { _T("Igniz B Portrait"), 0x57720, 0x57740, indexKOFSprites_02UMExtras, indexKOF02UM_S_Igniz },
    { _T("Igniz C Portrait"), 0x57740, 0x57760, indexKOFSprites_02UMExtras, indexKOF02UM_S_Igniz },
    { _T("Igniz D Portrait"), 0x57760, 0x57780, indexKOFSprites_02UMExtras, indexKOF02UM_S_Igniz },
};

const sGame_PaletteDataset KOF02UM_S_OYASHIRO_PALETTES_PORTRAITS[] =
{
    { _T("Orochi Yashiro A Portrait"), 0x57900, 0x57920, indexKOFSprites_02UMExtras, indexKOF02UM_S_OYashiro },
    { _T("Orochi Yashiro B Portrait"), 0x57920, 0x57940, indexKOFSprites_02UMExtras, indexKOF02UM_S_OYashiro },
    { _T("Orochi Yashiro C Portrait"), 0x57940, 0x57960, indexKOFSprites_02UMExtras, indexKOF02UM_S_OYashiro },
    { _T("Orochi Yashiro D Portrait"), 0x57960, 0x57980, indexKOFSprites_02UMExtras, indexKOF02UM_S_OYashiro },
};

const sGame_PaletteDataset KOF02UM_S_OSHERMIE_PALETTES_PORTRAITS[] =
{
    { _T("Orochi Shermie A Portrait"), 0x57a00, 0x57a20, indexKOFSprites_02UMExtras, indexKOF02UM_S_OShermie },
    { _T("Orochi Shermie B Portrait"), 0x57a20, 0x57a40, indexKOFSprites_02UMExtras, indexKOF02UM_S_OShermie },
    { _T("Orochi Shermie C Portrait"), 0x57a40, 0x57a60, indexKOFSprites_02UMExtras, indexKOF02UM_S_OShermie },
    { _T("Orochi Shermie D Portrait"), 0x57a60, 0x57a80, indexKOFSprites_02UMExtras, indexKOF02UM_S_OShermie },
};

const sGame_PaletteDataset KOF02UM_S_OCHRIS_PALETTES_PORTRAITS[] =
{
    { _T("Orochi Chris A Portrait"), 0x57b00, 0x57b20, indexKOFSprites_02UMExtras, indexKOF02UM_S_OChris },
    { _T("Orochi Chris B Portrait"), 0x57b20, 0x57b40, indexKOFSprites_02UMExtras, indexKOF02UM_S_OChris },
    { _T("Orochi Chris C Portrait"), 0x57b40, 0x57b60, indexKOFSprites_02UMExtras, indexKOF02UM_S_OChris },
    { _T("Orochi Chris D Portrait"), 0x57b60, 0x57b80, indexKOFSprites_02UMExtras, indexKOF02UM_S_OChris },
};

const sGame_PaletteDataset KOF02UM_S_ANDY_PALETTES_MOVES[] =
{
    { _T("Andy Hishoken A"), 0x18800, 0x18820 },
    { _T("Andy Hishoken C"), 0x18820, 0x18840 },
    { _T("Andy Cutter Move"), 0x18880, 0x188a0 },
    { _T("Andy SDM/MAX Fire"), 0x188a0, 0x188c0 },
    { _T("Andy SDM Attack Main"), 0x188c0, 0x188e0 },
    { _T("Andy SDM Attack Charge"), 0x188e0, 0x18900 },
};

const sGame_PaletteDataset KOF02UM_S_ATHENA_PALETTES_MOVES[] =
{
    { _T("Athena SDM Orbs"), 0x19200, 0x19220 },
    { _T("Athena Snowglobe MAX Super"), 0x19220, 0x19240 },
    { _T("Athena Bikini Outfit"), 0x19240, 0x19260 },
    { _T("Athena Schoolgirl Outfit"), 0x19260, 0x19280 },
    { _T("Athena Psycho Ball Hit"), 0x19280, 0x192a0 },
    { _T("Athena SDM Stuff"), 0x192a0, 0x192c0 },
    { _T("Athena MAX Super Armor"), 0x192c0, 0x192e0 },
    { _T("Athena SDM/MAX Attack Hit"), 0x192e0, 0x19300 },
};

const sGame_PaletteDataset KOF02UM_S_BAO_PALETTES_MOVES[] =
{
    { _T("Bao Psycho Ball Attack"), 0x52700, 0x52720 },
    { _T("Bao Psycho Ball Bound/Bounce"), 0x52720, 0x52740 },
    { _T("Bao Psycho Ball Extra"), 0x52740, 0x52760 },
    { _T("Bao SDM Psycho Ball"), 0x52760, 0x52780 },
    { _T("Bao MAX Psycho Ball"), 0x52780, 0x527a0 },
    { _T("Bao MAX Psycho Attack"), 0x527a0, 0x527c0 },
    { _T("Bao SDM Psycho Attack"), 0x527c0, 0x527e0 },
    { _T("Bao MAX2 Attack"), 0x527e0, 0x52800 },
};

const sGame_PaletteDataset KOF02UM_S_BENIMARU_PALETTES_MOVES[] =
{
    { _T("Benimaru Electricity"), 0x18200, 0x18220 },
    { _T("Benimaru Raikouken"), 0x18220, 0x18240 },
    { _T("Benimaru Raijiken"), 0x18240, 0x18260 },
};

const sGame_PaletteDataset KOF02UM_S_BILLY_PALETTES_MOVES[] =
{
    { _T("Billy Fire Wheel"), 0x1b400, 0x1b420 },
    { _T("Billy Fire Wheel Hit"), 0x1b420, 0x1b440 },
    { _T("Billy Fire Pillar"), 0x1b4c0, 0x1b4e0 },
};

const sGame_PaletteDataset KOF02UM_S_CHANG_PALETTES_MOVES[] =
{
    { _T("Chang Dust Effect"), 0x18e00, 0x18e20 },
};

const sGame_PaletteDataset KOF02UM_S_CHIN_PALETTES_MOVES[] =
{

    { _T("Chin Super Fire"), 0x19600, 0x19620 },
    { _T("Chin Fire Effect"), 0x19640, 0x19660 },
};

const sGame_PaletteDataset KOF02UM_S_CHOI_PALETTES_MOVES[] =
{
    { _T("Choi Tordado Stuff"), 0x19000, 0x19020 },
    { _T("Choi SDM Lightning"), 0x19040, 0x19060 },
    { _T("Choi SDM Effects"), 0x19060, 0x19080 },
    { _T("Choi MAX2 Attack"), 0x19080, 0x190a0 },
};

const sGame_PaletteDataset KOF02UM_S_CHRIS_PALETTES_MOVES[] =
{
    { _T("Chris Super Effects"), 0x1ba00, 0x1ba20 },
    { _T("Chris Cutter Special"), 0x1ba20, 0x1ba40 },
    { _T("Chris Cutter Super"), 0x1ba40, 0x1ba60 },
    { _T("Chris Super Attack"), 0x1ba60, 0x1ba80 },
};

const sGame_PaletteDataset KOF02UM_S_OCHRIS_PALETTES_MOVES[] =
{
    { _T("Orochi Chris Fire Stuff 1"), 0x1d600, 0x1d620 },
    { _T("Orochi Chris Fire Stuff 2"), 0x1d640, 0x1d660 },
    { _T("Orochi Chris Super Fire"), 0x1d660, 0x1d680 },
    { _T("Orochi Chris Special Fire"), 0x1d6a0, 0x1d6c0 },
};

const sGame_PaletteDataset KOF02UM_S_CLARK_PALETTES_MOVES[] =
{
    { _T("Clark Dust Effects"), 0x19c00, 0x19c20 },
};

const sGame_PaletteDataset KOF02UM_S_DAIMON_PALETTES_MOVES[] =
{
    { _T("Daimon MAX2 Text"), 0x18400, 0x18420 },
    { _T("Daimon Ground Pound"), 0x18420, 0x18440 },
    { _T("Daimon MAX2 Dust"), 0x18460, 0x18480 },
    { _T("Daimon Dust Effect"), 0x18480, 0x184a0 },
};

const sGame_PaletteDataset KOF02UM_S_FOXY_PALETTES_MOVES[] =
{
    { _T("Foxy and Diana"), 0x52a20, 0x52a40 },
    { _T("Foxy and Kula Win Stuff"), 0x52a40, 0x52a60 },
    { _T("Foxy and Diana Win Stuff"), 0x52a60, 0x52a80 },
};

const sGame_PaletteDataset KOF02UM_S_GEESE_PALETTES_MOVES[] =
{
    { _T("Geese Electricity Effects"), 0x52c00, 0x52c20 },
    { _T("Geese MAX2 Attack"), 0x52c20, 0x52c40 },
    { _T("Geese SDM Raging Storm"), 0x52c40, 0x52c60 },
    { _T("Geese Reppuuken"), 0x52c60, 0x52c80 },
    { _T("Geese MAX Grab Super"), 0x52c80, 0x52ca0 },
    { _T("Geese MAX Grab Text"), 0x52ce0, 0x52d00 },
};

const sGame_PaletteDataset KOF02UM_S_NIGHTMAREGEESE_PALETTES_MOVES[] =
{
    { _T("Nightmare Geese Explosion Effects"), 0x52d00, 0x52d20 },
    { _T("Nightmare Geese Reppuuken"), 0x52d20, 0x52d40 },
    { _T("Nightmare Geese Raging Storm"), 0x52d60, 0x52d80 },
    { _T("Nightmare Geese Idle Flames"), 0x52d80, 0x52da0 },
    { _T("Nightmare Geese Reppuuken Effects"), 0x52da0, 0x52dc0 },
    { _T("Nightmare Geese MAX Red Storm"), 0x52dc0, 0x52de0 },
};

const sGame_PaletteDataset KOF02UM_S_GOENITZ_PALETTES_MOVES[] =
{
    { _T("Goenitz DP Cutter Move"), 0x53100, 0x53120 },
    { _T("Goenitz Yonokaze"), 0x53120, 0x53140 },
    { _T("Goenitz MAX Blood"), 0x53140, 0x53160 },
    { _T("Goenitz MAX2 Tornado 1"), 0x53160, 0x53180 },
    { _T("Goenitz Cutter Move 1"), 0x53180, 0x531a0 },
    { _T("Goenitz Cutter Move 2"), 0x531a0, 0x531c0 },
    { _T("Goenitz MAX2 Tornado 2"), 0x531c0, 0x531e0 },
};

const sGame_PaletteDataset KOF02UM_S_HEIDERN_PALETTES_MOVES[] =
{
    { _T("Heidern Cutter Move"), 0x52400, 0x52420 },
    { _T("Heidern MAX2 Hit"), 0x52420, 0x52440 },
    { _T("Heidern Blood Attack 1"), 0x52440, 0x52460 },
    { _T("Heidern Small Blood Burst"), 0x52460, 0x52480 },
    { _T("Heidern Medium Blood Burst"), 0x52480, 0x524a0 },
    { _T("Heidern Large Blood Burst"), 0x524a0, 0x524c0 },
    { _T("Heidern MAX2 Super"), 0x524c0, 0x524e0 },
};

const sGame_PaletteDataset KOF02UM_S_HINAKO_PALETTES_MOVES[] =
{
    { _T("Hinako Intro Dust"), 0x52300, 0x52320 },
    { _T("Hinako MAX2 Attack Burst"), 0x52320, 0x52340 },
    { _T("Hinako MAX2 Dust"), 0x52340, 0x52360 },
    { _T("Hinako Dust"), 0x52380, 0x523a0 },
};

const sGame_PaletteDataset KOF02UM_S_IGNIZ_PALETTES_MOVES[] =
{
    { _T("Igniz Main Projectile"), 0x53500, 0x53520 },
    { _T("Igniz MAX2 Super 1"), 0x53520, 0x53540 },
    { _T("Igniz MAX2 Super 2 Galaxy"), 0x53540, 0x53560 },
    { _T("Igniz MAX2 Super 3 Break"), 0x53560, 0x53580 },
    { _T("Igniz MAX2 Super 4 Shatter"), 0x53580, 0x535a0 },
};

const sGame_PaletteDataset KOF02UM_S_IORI_PALETTES_MOVES[] =
{
    { _T("Iori DP Flames"), 0x1aa00, 0x1aa20 },
    { _T("Iori Dust Effects"), 0x1aa20, 0x1aa40 },
    { _T("Iori SDM Followup Attack"), 0x1aa60, 0x1aa80 },
    { _T("Iori Flame and Extras"), 0x1aa80, 0x1aaa0 },
    { _T("Iori Fire Projectile"), 0x1aaa0, 0x1aac0 },
    { _T("Iori Fire Pillar"), 0x1aae0, 0x1ab00 },
};

const sGame_PaletteDataset KOF02UM_S_JHUNHOON_PALETTES_MOVES[] =
{
    { _T("Jhun Wave Attack"), 0x52800, 0x52820 },
    { _T("Jhun Cutter Attack"), 0x52820, 0x52840 },
    { _T("Jhun Red Cutter Move"), 0x52840, 0x52860 },
};

const sGame_PaletteDataset KOF02UM_S_JOE_PALETTES_MOVES[] =
{
    { _T("Joe Hurricane Upper"), 0x18a00, 0x18a20 },
    { _T("Joe Hurricane Upper Purple"), 0x18a20, 0x18a40 },
    { _T("Joe Screw Upper SDM"), 0x18a40, 0x18a60 },
    { _T("Joe Kick Moves"), 0x18a60, 0x18a80 },
    { _T("Joe SDM Effects"), 0x18a80, 0x18aa0 },
    { _T("Joe MAX Screw Upper"), 0x18aa0, 0x18ac0 },
    { _T("Joe Tiger Kick Super"), 0x18ac0, 0x18ae0 },
};

const sGame_PaletteDataset KOF02UM_S_K_PALETTES_MOVES[] =
{
    { _T("K' Fire Stuff"), 0x1bc00, 0x1bc20 },
    { _T("K' MAX2 Flash"), 0x1bce0, 0x1bd00 },
};

const sGame_PaletteDataset KOF02UM_S_KASUMI_PALETTES_MOVES[] =
{
    { _T("Kasumi MAX2 Attack"), 0x52b00, 0x52b20 },
    { _T("Kasumi SDM Attack"), 0x52b20, 0x52b40 },
    { _T("Kasumi MAX2 Assist"), 0x52b60, 0x52b80 },
    { _T("Kasumi Special Wave Attack"), 0x52b80, 0x52ba0 },
};

const sGame_PaletteDataset KOF02UM_S_KENSOU_PALETTES_MOVES[] =
{
    { _T("Kensou Psycho Ball"), 0x19400, 0x19420 },
    { _T("Kensou Psycho Ball Hit"), 0x19420, 0x19440 },
    { _T("Kensou SDM Burst"), 0x19440, 0x19460 },
    { _T("Kensou MAX2 Super Ball"), 0x19480, 0x194a0 },
};

const sGame_PaletteDataset KOF02UM_S_EXKENSOU_PALETTES_MOVES[] =
{
    { _T("EX Kensou MAX2 Super"), 0x52f80, 0x52fa0 },
    { _T("EX Kensou Dust Effects"), 0x52fa0, 0x52fc0 },
};

const sGame_PaletteDataset KOF02UM_S_KIM_PALETTES_MOVES[] =
{
    { _T("Kim MAX2 Holy Fire"), 0x18c00, 0x18c20 },
    { _T("Kim MAX2 Phoenix"), 0x18c20, 0x18c40 },
};

const sGame_PaletteDataset KOF02UM_S_KING_PALETTES_MOVES[] =
{
    { _T("King Venom Strike"), 0x52100, 0x52120 },
    { _T("King Venom Strike Hit"), 0x52120, 0x52140 },
    { _T("King MAX2 Effects"), 0x52140, 0x52160 },
};

const sGame_PaletteDataset KOF02UM_S_KRIZALID_PALETTES_MOVES[] =
{
    { _T("Krizalid Cutter Stuff"), 0x53200, 0x53220 },
    { _T("Krizalid SDM Attack"), 0x53220, 0x53240 },
    { _T("Krizalid MAX Attack"), 0x53240, 0x53260 },
    { _T("Krizalid Typhoon Leg"), 0x53260, 0x53280 },
    { _T("Krizalid SDM Fire"), 0x53280, 0x532a0 },
};

const sGame_PaletteDataset KOF02UM_S_KULA_PALETTES_MOVES[] =
{
    { _T("Kula Ice Stuff 1"), 0x1c800, 0x1c820 },
    { _T("Kula Block Effect"), 0x1c820, 0x1c840 },
    { _T("Kula Special Effects"), 0x1c840, 0x1c860 },
    { _T("Kula Ice Stuff 2"), 0x1c860, 0x1c880 },
    { _T("Kula Ice Stuff 3"), 0x1c880, 0x1c8a0 },
    { _T("Kula MAX Freeze Screen"), 0x1c8a0, 0x1c8c0 },
    { _T("Kula Stuff with Candy"), 0x1c8e0, 0x1c900 },
};

const sGame_PaletteDataset KOF02UM_S_KUSANAGI_PALETTES_MOVES[] =
{
    { _T("Kusanagi Fire Intro Stuff"), 0x1d000, 0x1d020 },
    { _T("Kusanagi Fire Effects 1"), 0x1d020, 0x1d040 },
    { _T("Kusanagi Fire Effects 2"), 0x1d040, 0x1d060 },
    { _T("Kusanagi Fire and Dust Effect"), 0x1d0a0, 0x1d0c0 },
    { _T("Kusanagi Super Fire"), 0x1d0c0, 0x1d0e0 },
    { _T("Kusanagi MAX2 Fire"), 0x1d0e0, 0x1d100 },
};

#pragma region Move Palettes

const sGame_PaletteDataset KOF02UM_S_KYO_PALETTES_MOVES[] =
{
    { _T("Kyo Intro Stuff"), 0x18000, 0x18020 },
    { _T("Kyo SDM/MAX Super Attack 1"), 0x18020, 0x18040 },
    { _T("Kyo DP Fire"), 0x18040, 0x18060 },
    { _T("Kyo SDM/MAX Super Attack 2"), 0x180c0, 0x180e0 },
};

const sGame_PaletteDataset KOF02UM_S_KYO1_PALETTES_MOVES[] =
{
    { _T("Kyo-1 Intro and Fire Extras"), 0x52900, 0x52920 },
    { _T("Kyo-1 Fire Wave Super"), 0x52920, 0x52940 },
    { _T("Kyo-1 Fire Stuff"), 0x52940, 0x52960 },
    { _T("Kyo-1 Super Fire"), 0x52980, 0x529a0 },
    { _T("Kyo-1 Fire Projectile"), 0x529e0, 0x52a00 },
};

const sGame_PaletteDataset KOF02UM_S_KYO2_PALETTES_MOVES[] =
{
    { _T("Kyo-2 Intro Stuff"), 0x53000, 0x53020 },
    { _T("Kyo-2 Rekka Fire"), 0x53020, 0x53040 },
    { _T("Kyo-2 SDM Followup Kick"), 0x53040, 0x53060 },
    { _T("Kyo-2 SDM/MAX Fire"), 0x530c0, 0x530e0 },
};

const sGame_PaletteDataset KOF02UM_S_LEONA_PALETTES_MOVES[] =
{
    { _T("Leona Cutter Move 1"), 0x19800, 0x19820 },
    { _T("Leona Energy Projectile"), 0x19820, 0x19840 },
    { _T("Leona V-Cutter"), 0x19840, 0x19860 },
    { _T("Leona Cutter Move 2"), 0x19860, 0x19880 },
    { _T("Leona Cutter Move 3"), 0x19880, 0x198a0 },
    { _T("Leona SDM Fuse"), 0x198a0, 0x198c0 },
    { _T("Leona Ring Bomb"), 0x198c0, 0x198e0 },
    { _T("Leona SDM Dust Effects"), 0x198e0, 0x19900 },
};

const sGame_PaletteDataset KOF02UM_S_LIN_PALETTES_MOVES[] =
{
    { _T("Lin Vile Spit"), 0x52500, 0x52520 },
    { _T("Lin Spark Thing"), 0x52520, 0x52540 },
    { _T("Lin Intro Stuff"), 0x52540, 0x52560 },
    { _T("Lin Poison Gas"), 0x52560, 0x52580 },
    { _T("Lin Poison Blast"), 0x52580, 0x525a0 },
    { _T("Lin Arm Attack"), 0x525a0, 0x525c0 },
};

const sGame_PaletteDataset KOF02UM_S_MAI_PALETTES_MOVES[] =
{
    { _T("Mai Fire Stuff"), 0x1a400, 0x1a420 },
    { _T("Mai Special Flame"), 0x1a440, 0x1a460 },
    { _T("Mai Wedding Dress"), 0x1a460, 0x1a480 },
    { _T("Mai Fire and Sakura Flowers"), 0x1a4a0, 0x1a4c0 },
    { _T("Mai Fire Pillar"), 0x1a4e0, 0x1a500 },
};

const sGame_PaletteDataset KOF02UM_S_BLUEMARY_PALETTES_MOVES[] =
{
    { _T("Blue Mary Electricity Followup"), 0x1b200, 0x1b220 },
    { _T("Blue Mary Cutter Attack"), 0x1b220, 0x1b240 },
    { _T("Blue Mary Rose Stuff"), 0x1b240, 0x1b260 },
};

const sGame_PaletteDataset KOF02UM_S_MATURE_PALETTES_MOVES[] =
{
    { _T("Mature Cutter Move 1"), 0x1ac00, 0x1ac20 },
    { _T("Mature Cutter Move 2"), 0x1ac20, 0x1ac40 },
    { _T("Mature SDM Slam"), 0x1ac40, 0x1ac60 },
    { _T("Mature MAX Slam"), 0x1aca0, 0x1acc0 },
};

const sGame_PaletteDataset KOF02UM_S_MAXIMA_PALETTES_MOVES[] =
{
    { _T("Maxima Dust Stuff"), 0x1be00, 0x1be20 },
    { _T("Maxima Atomic Buster Effect"), 0x1be20, 0x1be40 },
    { _T("Maxima Special Stuff"), 0x1be40, 0x1be60 },
    { _T("Maxima Intro Stuff"), 0x1be80, 0x1bea0 },
    { _T("Maxima Sparks"), 0x1bea0, 0x1bec0 },
    { _T("Maxima Energy Blast"), 0x1bec0, 0x1bee0 },
    { _T("Maxima MAX2 Blast"), 0x1bee0, 0x1bf00 },
};

const sGame_PaletteDataset KOF02UM_S_MAYLEE_PALETTES_MOVES[] =
{
    { _T("May Lee MAX Electricity"), 0x1a800, 0x1a820 },
    { _T("May Lee Electric Punch"), 0x1a820, 0x1a840 },
};

const sGame_PaletteDataset KOF02UM_S_NAMELESS_PALETTES_MOVES[] =
{
    { _T("Nameless MAX2 Fire"), 0x1ca00, 0x1ca20 },
    { _T("Nameless MAX Dust Effects"), 0x1ca20, 0x1ca40 },
    { _T("Nameless SDM Fire"), 0x1ca40, 0x1ca60 },
    { _T("Nameless and Isolde"), 0x1ca60, 0x1ca80 },
};

const sGame_PaletteDataset KOF02UM_S_OMEGARUGAL_PALETTES_MOVES[] =
{
    { _T("Omega Rugal Reppuken and Win"), 0x1ce00, 0x1ce20 },
    { _T("Omega Rugal Kaizer Wave"), 0x1ce20, 0x1ce40 },
    { _T("Omega Rugal Kaizer Wave Hit"), 0x1ce40, 0x1ce60 },
    { _T("Omega Rugal Dark Reflector"), 0x1ce60, 0x1ce80 },
    { _T("Omega Rugal Genocide Cutter Effect 1"), 0x1ce80, 0x1cea0 },
    { _T("Omega Rugal Genocide Cutter Effect 2"), 0x1cea0, 0x1cec0 },
    { _T("Omega Rugal Divine Arrow and Gravity Smash"), 0x1cec0, 0x1cee0 },
    { _T("Omega Rugal Super Slam"), 0x1cee0, 0x1cf00 },
};

const sGame_PaletteDataset KOF02UM_S_ORIGINALZERO_PALETTES_MOVES[] =
{
    { _T("Zero Void"), 0x53400, 0x53420 },
    { _T("Zero Void Effects"), 0x534a0, 0x534c0 },
};

const sGame_PaletteDataset KOF02UM_S_RALF_PALETTES_MOVES[] =
{
    { _T("Ralf MAX2 Super Dust"), 0x19a00, 0x19a20 },
};

const sGame_PaletteDataset KOF02UM_S_RAMON_PALETTES_MOVES[] =
{
    { _T("Ramon Flower Stuff"), 0x1c600, 0x1c620 },
};

const sGame_PaletteDataset KOF02UM_S_ROBERT_PALETTES_MOVES[] =
{
    { _T("Robert Hao Shokouken"), 0x1a000, 0x1a020 },
    { _T("Robert Tiger Hit Effect"), 0x1a020, 0x1a040 },
    { _T("Robert Projectile Hit"), 0x1a0a0, 0x1a0c0 },
    { _T("Robert Projectile"), 0x1a0e0, 0x1a100 },
};

const sGame_PaletteDataset KOF02UM_S_EXROBERT_PALETTES_MOVES[] =
{
    { _T("EX Robert Hao Shokouken"), 0x52e00, 0x52e20 },
    { _T("EX Robert Hao Shokouken Hit"), 0x52e20, 0x52e40 },
    { _T("EX Robert Projectile Hit"), 0x52ea0, 0x52ec0 },
    { _T("EX Robert Projectile"), 0x52ee0, 0x52f00 },
};

const sGame_PaletteDataset KOF02UM_S_RYO_PALETTES_MOVES[] =
{
    { _T("Ryo Projectile"), 0x19e00, 0x19e20 },
    { _T("Ryo MAX2 Super Followup"), 0x19e20, 0x19e40 },
};

const sGame_PaletteDataset KOF02UM_S_SETH_PALETTES_MOVES[] =
{
    { _T("Seth Dust Effect 1"), 0x1c400, 0x1c420 },
    { _T("Seth Dust Effect 2"), 0x1c420, 0x1c440 },
};

const sGame_PaletteDataset KOF02UM_S_OSHERMIE_PALETTES_MOVES[] =
{
    { _T("Orochi Shermie Kick Super"), 0x1d400, 0x1d420 },
    { _T("Orochi Shermie Kiss"), 0x1d420, 0x1d440 },
    { _T("Orochi Shermie Lightning"), 0x1d440, 0x1d460 },
    { _T("Orochi Shermie SDM Raikouken"), 0x1d460, 0x1d480 },
    { _T("Orochi Shermie MAX Raikouken"), 0x1d480, 0x1d4a0 },
    { _T("Orochi Shermie Lightning Struck"), 0x1d4a0, 0x1d4c0 },
    { _T("Orochi Shermie Electric Cutter"), 0x1d4c0, 0x1d4e0 },
    { _T("Orochi Shermie Explosion Effect"), 0x1d4e0, 0x1d500 },
};

const sGame_PaletteDataset KOF02UM_S_TAKUMA_PALETTES_MOVES[] =
{
    { _T("Takuma Kouken"), 0x1a200, 0x1a220 },
    { _T("Takuma Projectile"), 0x1a220, 0x1a240 },
    { _T("Takuma Dust Effects"), 0x1a2e0, 0x1a300 },
};

const sGame_PaletteDataset KOF02UM_S_EXTAKUMA_PALETTES_MOVES[] =
{
    { _T("EX Takuma Kouken"), 0x52600, 0x52620 },
    { _T("EX Takuma MAX2 Projectile"), 0x52620, 0x52640 },
    { _T("EX Takuma Kouken Hit Effects"), 0x52640, 0x52660 },
    { _T("EX Takuma Hao Shokouken"), 0x52680, 0x526a0 },
    { _T("EX Takuma Hao Shokouken Hit"), 0x526a0, 0x526c0 },
};

const sGame_PaletteDataset KOF02UM_S_TERRY_PALETTES_MOVES[] =
{
    { _T("Terry Punch Effects"), 0x18600, 0x18620 },
    { _T("Terry Power Dunk"), 0x18620, 0x18640 },
    { _T("Terry Power Wave Hit"), 0x18640, 0x18660 },
    { _T("Terry MAX2 Super"), 0x18660, 0x18680 },
    { _T("Terry Round Wave"), 0x186e0, 0x18700 },
};

const sGame_PaletteDataset KOF02UM_S_VANESSA_PALETTES_MOVES[] =
{
    { _T("Vanessa MAX2 Attack"), 0x1c200, 0x1c220 },
    { _T("Vanessa Special Effect"), 0x1c220, 0x1c240 },
    { _T("Vanessa Dust Effects"), 0x1c240, 0x1c260 },
};

const sGame_PaletteDataset KOF02UM_S_VICE_PALETTES_MOVES[] =
{
    { _T("Vice Cutter Move"), 0x1ae00, 0x1ae20 },
    { _T("Vice SDM Slam"), 0x1ae40, 0x1ae60 },
    { _T("Vice MAX Slam"), 0x1ae60, 0x1ae80 },
    { _T("Vice MAX2 Super Effects"), 0x1ae80, 0x1aea0 },
};

const sGame_PaletteDataset KOF02UM_S_WHIP_PALETTES_MOVES[] =
{
    { _T("Whip Gun Stuff"), 0x1c000, 0x1c020 },
    { _T("Whip Dust Effect"), 0x1c040, 0x1c060 },
    { _T("Whip MAX2 GUN"), 0x1c060, 0x1c080 },
};

const sGame_PaletteDataset KOF02UM_S_XIANGFEI_PALETTES_MOVES[] =
{
    { _T("Xiangfei Dust Effect"), 0x52200, 0x52220 },
    { _T("Xiangfei Dust Curve"), 0x52220, 0x52240 },
    { _T("Xiangfei Energy Burst"), 0x52240, 0x52260 },
    { _T("Xiangfei Energy Special Effect"), 0x52260, 0x52280 },
    { _T("Xiangfei Dust Burst"), 0x52280, 0x522a0 },
    { _T("Xiangfei Fake Combo Meter"), 0x522a0, 0x522c0 },
    { _T("Xiangfei Fake Combo Flash"), 0x522e0, 0x52300 },
};

const sGame_PaletteDataset KOF02UM_S_YAMAZAKI_PALETTES_MOVES[] =
{
    { _T("Yamazaki Uppercut Super"), 0x1b000, 0x1b020 },
    { _T("Yamazaki Dust"), 0x1b020, 0x1b040 },
    { _T("Yamazaki Reflect Projectile"), 0x1b0a0, 0x1b0c0 },
    { _T("Yamazaki Projectile Hit"), 0x1b0c0, 0x1b0e0 },
};

const sGame_PaletteDataset KOF02UM_S_YASHIRO_PALETTES_MOVES[] =
{
    { _T("Yashiro Dust Effects"), 0x1b620, 0x1b640 },
    { _T("Yashiro SDM Effects"), 0x1b660, 0x1b680 },
    { _T("Yashiro MAX Effects"), 0x1b680, 0x1b6a0 },
};

const sGame_PaletteDataset KOF02UM_S_OYASHIRO_PALETTES_MOVES[] =
{
    { _T("Orochi Yashiro Ground Attack"), 0x1d200, 0x1d220 },
    { _T("Orochi Yashiro MAX Pillar"), 0x1d240, 0x1d260 },
    { _T("Orochi Yashiro Dust"), 0x1d2a0, 0x1d2c0 },
};

const sGame_PaletteDataset KOF02UM_S_YURI_PALETTES_MOVES[] =
{
    { _T("Yuri General Projectiles"), 0x1a600, 0x1a620 },
    { _T("Yuri Cypher"), 0x1a640, 0x1a660 },
    { _T("Yuri Daiouken Hit"), 0x1a6a0, 0x1a6c0 },
    { _T("Yuri SDM Effect"), 0x1a6c0, 0x1a6e0 },
    { _T("Yuri Kouken Hit"), 0x1a6e0, 0x1a700 },
};

const sGame_PaletteDataset KOF02UM_S_CLONEZERO_PALETTES_MOVES[] =
{
    { _T("Clone Zero Shadow Special"), 0x53300, 0x53320 },
    { _T("Clone Zero Special Fire"), 0x53320, 0x53340 },
    { _T("Clone Zero SDM/MAX Void"), 0x53340, 0x53360 },
    { _T("Clone Zero SDM/MAX Projectiles"), 0x53360, 0x53380 },
};

#pragma endregion Move Palettes

#pragma region Character Palettes (Auto-Generated)
// Everything below is data generated by the table above.

const sGame_PaletteDataset KOF02UM_S_KYO_PALETTES_A[] =
{
    { _T("Kyo A"), 0x0002000, 0x0002020, indexKOFSprites_02Kyo },
    { _T("A - Fire Attack Stuff 1"), 0x0002020, 0x0002040, indexKOFSprites_02Kyo },
    { _T("A - Fire Attack Stuff 2"), 0x0002040, 0x0002060, indexKOFSprites_02Kyo },
    { _T("A - Electric Shock Effect"), 0x0002060, 0x0002080, indexKOFSprites_02Kyo },
    { _T("A - Max Flash"), 0x0002080, 0x00020a0, indexKOFSprites_02Kyo },
    { _T("A - Shingo Intro Stuff"), 0x00020a0, 0x00020c0, indexKOFSprites_02Kyo },
    { _T("A - Soul Palette"), 0x00020c0, 0x00020e0, indexKOFSprites_02Kyo },
    { _T("A - Hidden Super Desperation Move 3"), 0x00020e0, 0x0002100, indexKOFSprites_02Kyo },
};

const sGame_PaletteDataset KOF02UM_S_KYO_PALETTES_B[] =
{
    { _T("Kyo B"), 0x0002200, 0x0002220, indexKOFSprites_02Kyo },
    { _T("B - Fire Attack Stuff 1"), 0x0002220, 0x0002240, indexKOFSprites_02Kyo },
    { _T("B - Fire Attack Stuff 2"), 0x0002240, 0x0002260, indexKOFSprites_02Kyo },
    { _T("B - Electric Shock Effect"), 0x0002260, 0x0002280, indexKOFSprites_02Kyo },
    { _T("B - Max Flash"), 0x0002280, 0x00022a0, indexKOFSprites_02Kyo },
    { _T("B - Shingo Intro Stuff"), 0x00022a0, 0x00022c0, indexKOFSprites_02Kyo },
    { _T("B - Soul Palette"), 0x00022c0, 0x00022e0, indexKOFSprites_02Kyo },
    { _T("B - Hidden Super Desperation Move 3"), 0x00022e0, 0x0002300, indexKOFSprites_02Kyo },
};

const sGame_PaletteDataset KOF02UM_S_KYO_PALETTES_C[] =
{
    { _T("Kyo C"), 0x0002400, 0x0002420, indexKOFSprites_02Kyo },
    { _T("C - Fire Attack Stuff 1"), 0x0002420, 0x0002440, indexKOFSprites_02Kyo },
    { _T("C - Fire Attack Stuff 2"), 0x0002440, 0x0002460, indexKOFSprites_02Kyo },
    { _T("C - Electric Shock Effect"), 0x0002460, 0x0002480, indexKOFSprites_02Kyo },
    { _T("C - Max Flash"), 0x0002480, 0x00024a0, indexKOFSprites_02Kyo },
    { _T("C - Shingo Intro Stuff"), 0x00024a0, 0x00024c0, indexKOFSprites_02Kyo },
    { _T("C - Soul Palette"), 0x00024c0, 0x00024e0, indexKOFSprites_02Kyo },
    { _T("C - Hidden Super Desperation Move 3"), 0x00024e0, 0x0002500, indexKOFSprites_02Kyo },
};

const sGame_PaletteDataset KOF02UM_S_KYO_PALETTES_D[] =
{
    { _T("Kyo D"), 0x0002600, 0x0002620, indexKOFSprites_02Kyo },
    { _T("D - Fire Attack Stuff 1"), 0x0002620, 0x0002640, indexKOFSprites_02Kyo },
    { _T("D - Fire Attack Stuff 2"), 0x0002640, 0x0002660, indexKOFSprites_02Kyo },
    { _T("D - Electric Shock Effect"), 0x0002660, 0x0002680, indexKOFSprites_02Kyo },
    { _T("D - Max Flash"), 0x0002680, 0x00026a0, indexKOFSprites_02Kyo },
    { _T("D - Shingo Intro Stuff"), 0x00026a0, 0x00026c0, indexKOFSprites_02Kyo },
    { _T("D - Soul Palette"), 0x00026c0, 0x00026e0, indexKOFSprites_02Kyo },
    { _T("D - Hidden Super Desperation Move 3"), 0x00026e0, 0x0002700, indexKOFSprites_02Kyo },
};

const sDescTreeNode KOF02UM_S_KYO_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO_PALETTES_A, ARRAYSIZE(KOF02UM_S_KYO_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO_PALETTES_B, ARRAYSIZE(KOF02UM_S_KYO_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO_PALETTES_C, ARRAYSIZE(KOF02UM_S_KYO_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO_PALETTES_D, ARRAYSIZE(KOF02UM_S_KYO_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_KYO_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_KYO_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_BENIMARU_PALETTES_A[] =
{
    { _T("Benimaru A"), 0x0002800, 0x0002820, indexKOFSprites_98Benimaru },
    { _T("A - Raijiken Flash"), 0x0002820, 0x0002840, indexKOFSprites_98Benimaru },
    { _T("A - SDM/MAX Super Effects"), 0x0002840, 0x0002860, indexKOFSprites_98Benimaru },
    { _T("A - Electric Shock Effect"), 0x0002860, 0x0002880, indexKOFSprites_98Benimaru },
    { _T("A - Max Flash"), 0x0002880, 0x00028a0, indexKOFSprites_98Benimaru },
    { _T("A - Hidden Super Desperation Move 2"), 0x00028a0, 0x00028c0, indexKOFSprites_98Benimaru },
    { _T("A - Soul Palette"), 0x00028c0, 0x00028e0, indexKOFSprites_98Benimaru },
    { _T("A - Hidden Super Desperation Move 3"), 0x00028e0, 0x0002900, indexKOFSprites_98Benimaru },
};

const sGame_PaletteDataset KOF02UM_S_BENIMARU_PALETTES_B[] =
{
    { _T("Benimaru B"), 0x0002a00, 0x0002a20, indexKOFSprites_98Benimaru },
    { _T("B - Raijiken Flash"), 0x0002a20, 0x0002a40, indexKOFSprites_98Benimaru },
    { _T("B - SDM/MAX Super Effects"), 0x0002a40, 0x0002a60, indexKOFSprites_98Benimaru },
    { _T("B - Electric Shock Effect"), 0x0002a60, 0x0002a80, indexKOFSprites_98Benimaru },
    { _T("B - Max Flash"), 0x0002a80, 0x0002aa0, indexKOFSprites_98Benimaru },
    { _T("B - Hidden Super Desperation Move 2"), 0x0002aa0, 0x0002ac0, indexKOFSprites_98Benimaru },
    { _T("B - Soul Palette"), 0x0002ac0, 0x0002ae0, indexKOFSprites_98Benimaru },
    { _T("B - Hidden Super Desperation Move 3"), 0x0002ae0, 0x0002b00, indexKOFSprites_98Benimaru },
};

const sGame_PaletteDataset KOF02UM_S_BENIMARU_PALETTES_C[] =
{
    { _T("Benimaru C"), 0x0002c00, 0x0002c20, indexKOFSprites_98Benimaru },
    { _T("C - Raijiken Flash"), 0x0002c20, 0x0002c40, indexKOFSprites_98Benimaru },
    { _T("C - SDM/MAX Super Effects"), 0x0002c40, 0x0002c60, indexKOFSprites_98Benimaru },
    { _T("C - Electric Shock Effect"), 0x0002c60, 0x0002c80, indexKOFSprites_98Benimaru },
    { _T("C - Max Flash"), 0x0002c80, 0x0002ca0, indexKOFSprites_98Benimaru },
    { _T("C - Hidden Super Desperation Move 2"), 0x0002ca0, 0x0002cc0, indexKOFSprites_98Benimaru },
    { _T("C - Soul Palette"), 0x0002cc0, 0x0002ce0, indexKOFSprites_98Benimaru },
    { _T("C - Hidden Super Desperation Move 3"), 0x0002ce0, 0x0002d00, indexKOFSprites_98Benimaru },
};

const sGame_PaletteDataset KOF02UM_S_BENIMARU_PALETTES_D[] =
{
    { _T("Benimaru D"), 0x0002e00, 0x0002e20, indexKOFSprites_98Benimaru },
    { _T("D - Raijiken Flash"), 0x0002e20, 0x0002e40, indexKOFSprites_98Benimaru },
    { _T("D - SDM/MAX Super Effects"), 0x0002e40, 0x0002e60, indexKOFSprites_98Benimaru },
    { _T("D - Electric Shock Effect"), 0x0002e60, 0x0002e80, indexKOFSprites_98Benimaru },
    { _T("D - Max Flash"), 0x0002e80, 0x0002ea0, indexKOFSprites_98Benimaru },
    { _T("D - Hidden Super Desperation Move 2"), 0x0002ea0, 0x0002ec0, indexKOFSprites_98Benimaru },
    { _T("D - Soul Palette"), 0x0002ec0, 0x0002ee0, indexKOFSprites_98Benimaru },
    { _T("D - Hidden Super Desperation Move 3"), 0x0002ee0, 0x0002f00, indexKOFSprites_98Benimaru },
};

const sDescTreeNode KOF02UM_S_BENIMARU_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_BENIMARU_PALETTES_A, ARRAYSIZE(KOF02UM_S_BENIMARU_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_BENIMARU_PALETTES_B, ARRAYSIZE(KOF02UM_S_BENIMARU_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_BENIMARU_PALETTES_C, ARRAYSIZE(KOF02UM_S_BENIMARU_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_BENIMARU_PALETTES_D, ARRAYSIZE(KOF02UM_S_BENIMARU_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_BENIMARU_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_BENIMARU_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_BENIMARU_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_BENIMARU_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_DAIMON_PALETTES_A[] =
{
    { _T("Daimon A"), 0x0003000, 0x0003020, indexKOFSprites_98Daimon },
    { _T("A - Hidden Super Desperation Move 1"), 0x0003020, 0x0003040, indexKOFSprites_98Daimon },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0003040, 0x0003060, indexKOFSprites_98Daimon },
    { _T("A - Electric Shock Effect"), 0x0003060, 0x0003080, indexKOFSprites_98Daimon },
    { _T("A - Max Flash"), 0x0003080, 0x00030a0, indexKOFSprites_98Daimon },
    { _T("A - Hidden Super Desperation Move 2"), 0x00030a0, 0x00030c0, indexKOFSprites_98Daimon },
    { _T("A - Soul Palette"), 0x00030c0, 0x00030e0, indexKOFSprites_98Daimon },
    { _T("A - Hidden Super Desperation Move 3"), 0x00030e0, 0x0003100, indexKOFSprites_98Daimon },
};

const sGame_PaletteDataset KOF02UM_S_DAIMON_PALETTES_B[] =
{
    { _T("Daimon B"), 0x0003200, 0x0003220, indexKOFSprites_98Daimon },
    { _T("B - Hidden Super Desperation Move 1"), 0x0003220, 0x0003240, indexKOFSprites_98Daimon },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0003240, 0x0003260, indexKOFSprites_98Daimon },
    { _T("B - Electric Shock Effect"), 0x0003260, 0x0003280, indexKOFSprites_98Daimon },
    { _T("B - Max Flash"), 0x0003280, 0x00032a0, indexKOFSprites_98Daimon },
    { _T("B - Hidden Super Desperation Move 2"), 0x00032a0, 0x00032c0, indexKOFSprites_98Daimon },
    { _T("B - Soul Palette"), 0x00032c0, 0x00032e0, indexKOFSprites_98Daimon },
    { _T("B - Hidden Super Desperation Move 3"), 0x00032e0, 0x0003300, indexKOFSprites_98Daimon },
};

const sGame_PaletteDataset KOF02UM_S_DAIMON_PALETTES_C[] =
{
    { _T("Daimon C"), 0x0003400, 0x0003420, indexKOFSprites_98Daimon },
    { _T("C - Hidden Super Desperation Move 1"), 0x0003420, 0x0003440, indexKOFSprites_98Daimon },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0003440, 0x0003460, indexKOFSprites_98Daimon },
    { _T("C - Electric Shock Effect"), 0x0003460, 0x0003480, indexKOFSprites_98Daimon },
    { _T("C - Max Flash"), 0x0003480, 0x00034a0, indexKOFSprites_98Daimon },
    { _T("C - Hidden Super Desperation Move 2"), 0x00034a0, 0x00034c0, indexKOFSprites_98Daimon },
    { _T("C - Soul Palette"), 0x00034c0, 0x00034e0, indexKOFSprites_98Daimon },
    { _T("C - Hidden Super Desperation Move 3"), 0x00034e0, 0x0003500, indexKOFSprites_98Daimon },
};

const sGame_PaletteDataset KOF02UM_S_DAIMON_PALETTES_D[] =
{
    { _T("Daimon D"), 0x0003600, 0x0003620, indexKOFSprites_98Daimon },
    { _T("D - Hidden Super Desperation Move 1"), 0x0003620, 0x0003640, indexKOFSprites_98Daimon },
    { _T("D - Desperation Move / Super Desperation Move"), 0x0003640, 0x0003660, indexKOFSprites_98Daimon },
    { _T("D - Electric Shock Effect"), 0x0003660, 0x0003680, indexKOFSprites_98Daimon },
    { _T("D - Max Flash"), 0x0003680, 0x00036a0, indexKOFSprites_98Daimon },
    { _T("D - Hidden Super Desperation Move 2"), 0x00036a0, 0x00036c0, indexKOFSprites_98Daimon },
    { _T("D - Soul Palette"), 0x00036c0, 0x00036e0, indexKOFSprites_98Daimon },
    { _T("D - Hidden Super Desperation Move 3"), 0x00036e0, 0x0003700, indexKOFSprites_98Daimon },
};

const sDescTreeNode KOF02UM_S_DAIMON_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_DAIMON_PALETTES_A, ARRAYSIZE(KOF02UM_S_DAIMON_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_DAIMON_PALETTES_B, ARRAYSIZE(KOF02UM_S_DAIMON_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_DAIMON_PALETTES_C, ARRAYSIZE(KOF02UM_S_DAIMON_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_DAIMON_PALETTES_D, ARRAYSIZE(KOF02UM_S_DAIMON_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_DAIMON_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_DAIMON_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_DAIMON_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_DAIMON_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_TERRY_PALETTES_A[] =
{
    { _T("Terry A"), 0x0003800, 0x0003820, indexKOFSprites_98Terry },
    { _T("A - Terry and Child Winpose"), 0x0003820, 0x0003840, indexKOFSprites_98Terry },
    { _T("A - MAX2 Trail"), 0x0003840, 0x0003860, indexKOFSprites_98Terry },
    { _T("A - Electric Shock Effect"), 0x0003860, 0x0003880, indexKOFSprites_98Terry },
    { _T("A - Max Flash"), 0x0003880, 0x00038a0, indexKOFSprites_98Terry },
    { _T("A - Hidden Super Desperation Move 2"), 0x00038a0, 0x00038c0, indexKOFSprites_98Terry },
    { _T("A - Soul Palette"), 0x00038c0, 0x00038e0, indexKOFSprites_98Terry },
    { _T("A - Hidden Super Desperation Move 3"), 0x00038e0, 0x0003900, indexKOFSprites_98Terry },
};

const sGame_PaletteDataset KOF02UM_S_TERRY_PALETTES_B[] =
{
    { _T("Terry B"), 0x0003a00, 0x0003a20, indexKOFSprites_98Terry },
    { _T("B - Terry and Child Winpose"), 0x0003a20, 0x0003a40, indexKOFSprites_98Terry },
    { _T("B - MAX2 Trail"), 0x0003a40, 0x0003a60, indexKOFSprites_98Terry },
    { _T("B - Electric Shock Effect"), 0x0003a60, 0x0003a80, indexKOFSprites_98Terry },
    { _T("B - Max Flash"), 0x0003a80, 0x0003aa0, indexKOFSprites_98Terry },
    { _T("B - Hidden Super Desperation Move 2"), 0x0003aa0, 0x0003ac0, indexKOFSprites_98Terry },
    { _T("B - Soul Palette"), 0x0003ac0, 0x0003ae0, indexKOFSprites_98Terry },
    { _T("B - Hidden Super Desperation Move 3"), 0x0003ae0, 0x0003b00, indexKOFSprites_98Terry },
};

const sGame_PaletteDataset KOF02UM_S_TERRY_PALETTES_C[] =
{
    { _T("Terry C"), 0x0003c00, 0x0003c20, indexKOFSprites_98Terry },
    { _T("C - Terry and Child Winpose"), 0x0003c20, 0x0003c40, indexKOFSprites_98Terry },
    { _T("C - MAX2 Trail"), 0x0003c40, 0x0003c60, indexKOFSprites_98Terry },
    { _T("C - Electric Shock Effect"), 0x0003c60, 0x0003c80, indexKOFSprites_98Terry },
    { _T("C - Max Flash"), 0x0003c80, 0x0003ca0, indexKOFSprites_98Terry },
    { _T("C - Hidden Super Desperation Move 2"), 0x0003ca0, 0x0003cc0, indexKOFSprites_98Terry },
    { _T("C - Soul Palette"), 0x0003cc0, 0x0003ce0, indexKOFSprites_98Terry },
    { _T("C - Hidden Super Desperation Move 3"), 0x0003ce0, 0x0003d00, indexKOFSprites_98Terry },
};

const sGame_PaletteDataset KOF02UM_S_TERRY_PALETTES_D[] =
{
    { _T("Terry D"), 0x0003e00, 0x0003e20, indexKOFSprites_98Terry },
    { _T("D - Terry and Child Winpose"), 0x0003e20, 0x0003e40, indexKOFSprites_98Terry },
    { _T("D - MAX2 Trail"), 0x0003e40, 0x0003e60, indexKOFSprites_98Terry },
    { _T("D - Electric Shock Effect"), 0x0003e60, 0x0003e80, indexKOFSprites_98Terry },
    { _T("D - Max Flash"), 0x0003e80, 0x0003ea0, indexKOFSprites_98Terry },
    { _T("D - Hidden Super Desperation Move 2"), 0x0003ea0, 0x0003ec0, indexKOFSprites_98Terry },
    { _T("D - Soul Palette"), 0x0003ec0, 0x0003ee0, indexKOFSprites_98Terry },
    { _T("D - Hidden Super Desperation Move 3"), 0x0003ee0, 0x0003f00, indexKOFSprites_98Terry },
};

const sDescTreeNode KOF02UM_S_TERRY_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_TERRY_PALETTES_A, ARRAYSIZE(KOF02UM_S_TERRY_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_TERRY_PALETTES_B, ARRAYSIZE(KOF02UM_S_TERRY_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_TERRY_PALETTES_C, ARRAYSIZE(KOF02UM_S_TERRY_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_TERRY_PALETTES_D, ARRAYSIZE(KOF02UM_S_TERRY_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_TERRY_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_TERRY_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_TERRY_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_TERRY_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_ANDY_PALETTES_A[] =
{
    { _T("Andy A"), 0x0004000, 0x0004020, indexKOFSprites_02Andy },
    { _T("A - Super Desperation Move 1"), 0x0004020, 0x0004040, indexKOFSprites_02Andy },
    { _T("A - Max Desperation Move"), 0x0004040, 0x0004060, indexKOFSprites_02Andy },
    { _T("A - Electric Shock Effect"), 0x0004060, 0x0004080, indexKOFSprites_02Andy },
    { _T("A - Max Flash"), 0x0004080, 0x00040a0, indexKOFSprites_02Andy },
    { _T("A - Hidden Super Desperation Move 2"), 0x00040a0, 0x00040c0, indexKOFSprites_02Andy },
    { _T("A - Soul Palette"), 0x00040c0, 0x00040e0, indexKOFSprites_02Andy },
    { _T("A - Hidden Super Desperation Move 3"), 0x00040e0, 0x0004100, indexKOFSprites_02Andy },
};

const sGame_PaletteDataset KOF02UM_S_ANDY_PALETTES_B[] =
{
    { _T("Andy B"), 0x0004200, 0x0004220, indexKOFSprites_02Andy },
    { _T("B - Super Desperation Move 1"), 0x0004220, 0x0004240, indexKOFSprites_02Andy },
    { _T("B - Max Desperation Move"), 0x0004240, 0x0004260, indexKOFSprites_02Andy },
    { _T("B - Electric Shock Effect"), 0x0004260, 0x0004280, indexKOFSprites_02Andy },
    { _T("B - Max Flash"), 0x0004280, 0x00042a0, indexKOFSprites_02Andy },
    { _T("B - Hidden Super Desperation Move 2"), 0x00042a0, 0x00042c0, indexKOFSprites_02Andy },
    { _T("B - Soul Palette"), 0x00042c0, 0x00042e0, indexKOFSprites_02Andy },
    { _T("B - Hidden Super Desperation Move 3"), 0x00042e0, 0x0004300, indexKOFSprites_02Andy },
};

const sGame_PaletteDataset KOF02UM_S_ANDY_PALETTES_C[] =
{
    { _T("Andy C"), 0x0004400, 0x0004420, indexKOFSprites_02Andy },
    { _T("C - Super Desperation Move 1"), 0x0004420, 0x0004440, indexKOFSprites_02Andy },
    { _T("C - Max Desperation Move"), 0x0004440, 0x0004460, indexKOFSprites_02Andy },
    { _T("C - Electric Shock Effect"), 0x0004460, 0x0004480, indexKOFSprites_02Andy },
    { _T("C - Max Flash"), 0x0004480, 0x00044a0, indexKOFSprites_02Andy },
    { _T("C - Hidden Super Desperation Move 2"), 0x00044a0, 0x00044c0, indexKOFSprites_02Andy },
    { _T("C - Soul Palette"), 0x00044c0, 0x00044e0, indexKOFSprites_02Andy },
    { _T("C - Hidden Super Desperation Move 3"), 0x00044e0, 0x0004500, indexKOFSprites_02Andy },
};

const sGame_PaletteDataset KOF02UM_S_ANDY_PALETTES_D[] =
{
    { _T("Andy D"), 0x0004600, 0x0004620, indexKOFSprites_02Andy },
    { _T("D - Super Desperation Move 1"), 0x0004620, 0x0004640, indexKOFSprites_02Andy },
    { _T("D - Max Desperation Move"), 0x0004640, 0x0004660, indexKOFSprites_02Andy },
    { _T("D - Electric Shock Effect"), 0x0004660, 0x0004680, indexKOFSprites_02Andy },
    { _T("D - Max Flash"), 0x0004680, 0x00046a0, indexKOFSprites_02Andy },
    { _T("D - Hidden Super Desperation Move 2"), 0x00046a0, 0x00046c0, indexKOFSprites_02Andy },
    { _T("D - Soul Palette"), 0x00046c0, 0x00046e0, indexKOFSprites_02Andy },
    { _T("D - Hidden Super Desperation Move 3"), 0x00046e0, 0x0004700, indexKOFSprites_02Andy },
};

const sDescTreeNode KOF02UM_S_ANDY_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_ANDY_PALETTES_A, ARRAYSIZE(KOF02UM_S_ANDY_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_ANDY_PALETTES_B, ARRAYSIZE(KOF02UM_S_ANDY_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_ANDY_PALETTES_C, ARRAYSIZE(KOF02UM_S_ANDY_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_ANDY_PALETTES_D, ARRAYSIZE(KOF02UM_S_ANDY_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_ANDY_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_ANDY_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_ANDY_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_ANDY_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_JOE_PALETTES_A[] =
{
    { _T("Joe A"), 0x0004800, 0x0004820, indexKOFSprites_98Joe },
    { _T("A - Hidden Super Desperation Move 1"), 0x0004820, 0x0004840, indexKOFSprites_98Joe },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0004840, 0x0004860, indexKOFSprites_98Joe },
    { _T("A - Electric Shock Effect"), 0x0004860, 0x0004880, indexKOFSprites_98Joe },
    { _T("A - Max Flash"), 0x0004880, 0x00048a0, indexKOFSprites_98Joe },
    { _T("A - Hidden Super Desperation Move 2"), 0x00048a0, 0x00048c0, indexKOFSprites_98Joe },
    { _T("A - Soul Palette"), 0x00048c0, 0x00048e0, indexKOFSprites_98Joe },
    { _T("A - Hidden Super Desperation Move 3"), 0x00048e0, 0x0004900, indexKOFSprites_98Joe },
};

const sGame_PaletteDataset KOF02UM_S_JOE_PALETTES_B[] =
{
    { _T("Joe B"), 0x0004a00, 0x0004a20, indexKOFSprites_98Joe },
    { _T("B - Hidden Super Desperation Move 1"), 0x0004a20, 0x0004a40, indexKOFSprites_98Joe },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0004a40, 0x0004a60, indexKOFSprites_98Joe },
    { _T("B - Electric Shock Effect"), 0x0004a60, 0x0004a80, indexKOFSprites_98Joe },
    { _T("B - Max Flash"), 0x0004a80, 0x0004aa0, indexKOFSprites_98Joe },
    { _T("B - Hidden Super Desperation Move 2"), 0x0004aa0, 0x0004ac0, indexKOFSprites_98Joe },
    { _T("B - Soul Palette"), 0x0004ac0, 0x0004ae0, indexKOFSprites_98Joe },
    { _T("B - Hidden Super Desperation Move 3"), 0x0004ae0, 0x0004b00, indexKOFSprites_98Joe },
};

const sGame_PaletteDataset KOF02UM_S_JOE_PALETTES_C[] =
{
    { _T("Joe C"), 0x0004c00, 0x0004c20, indexKOFSprites_98Joe },
    { _T("C - Hidden Super Desperation Move 1"), 0x0004c20, 0x0004c40, indexKOFSprites_98Joe },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0004c40, 0x0004c60, indexKOFSprites_98Joe },
    { _T("C - Electric Shock Effect"), 0x0004c60, 0x0004c80, indexKOFSprites_98Joe },
    { _T("C - Max Flash"), 0x0004c80, 0x0004ca0, indexKOFSprites_98Joe },
    { _T("C - Hidden Super Desperation Move 2"), 0x0004ca0, 0x0004cc0, indexKOFSprites_98Joe },
    { _T("C - Soul Palette"), 0x0004cc0, 0x0004ce0, indexKOFSprites_98Joe },
    { _T("C - Hidden Super Desperation Move 3"), 0x0004ce0, 0x0004d00, indexKOFSprites_98Joe },
};

const sGame_PaletteDataset KOF02UM_S_JOE_PALETTES_D[] =
{
    { _T("Joe D"), 0x0004e00, 0x0004e20, indexKOFSprites_98Joe },
    { _T("D - Hidden Super Desperation Move 1"), 0x0004e20, 0x0004e40, indexKOFSprites_98Joe },
    { _T("D - Desperation Move / Super Desperation Move"), 0x0004e40, 0x0004e60, indexKOFSprites_98Joe },
    { _T("D - Electric Shock Effect"), 0x0004e60, 0x0004e80, indexKOFSprites_98Joe },
    { _T("D - Max Flash"), 0x0004e80, 0x0004ea0, indexKOFSprites_98Joe },
    { _T("D - Hidden Super Desperation Move 2"), 0x0004ea0, 0x0004ec0, indexKOFSprites_98Joe },
    { _T("D - Soul Palette"), 0x0004ec0, 0x0004ee0, indexKOFSprites_98Joe },
    { _T("D - Hidden Super Desperation Move 3"), 0x0004ee0, 0x0004f00, indexKOFSprites_98Joe },
};

const sDescTreeNode KOF02UM_S_JOE_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_JOE_PALETTES_A, ARRAYSIZE(KOF02UM_S_JOE_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_JOE_PALETTES_B, ARRAYSIZE(KOF02UM_S_JOE_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_JOE_PALETTES_C, ARRAYSIZE(KOF02UM_S_JOE_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_JOE_PALETTES_D, ARRAYSIZE(KOF02UM_S_JOE_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_JOE_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_JOE_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_JOE_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_JOE_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_KIM_PALETTES_A[] =
{
    { _T("Kim A"), 0x0005000, 0x0005020, indexKOFSprites_98Kim },
    { _T("A - Hidden Super Desperation Move 1"), 0x0005020, 0x0005040, indexKOFSprites_98Kim },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0005040, 0x0005060, indexKOFSprites_98Kim },
    { _T("A - Electric Shock Effect"), 0x0005060, 0x0005080, indexKOFSprites_98Kim },
    { _T("A - Max Flash"), 0x0005080, 0x00050a0, indexKOFSprites_98Kim },
    { _T("A - Hidden Super Desperation Move 2"), 0x00050a0, 0x00050c0, indexKOFSprites_98Kim },
    { _T("A - Soul Palette"), 0x00050c0, 0x00050e0, indexKOFSprites_98Kim },
    { _T("A - Hidden Super Desperation Move 3"), 0x00050e0, 0x0005100, indexKOFSprites_98Kim },
};

const sGame_PaletteDataset KOF02UM_S_KIM_PALETTES_B[] =
{
    { _T("Kim B"), 0x0005200, 0x0005220, indexKOFSprites_98Kim },
    { _T("B - Hidden Super Desperation Move 1"), 0x0005220, 0x0005240, indexKOFSprites_98Kim },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0005240, 0x0005260, indexKOFSprites_98Kim },
    { _T("B - Electric Shock Effect"), 0x0005260, 0x0005280, indexKOFSprites_98Kim },
    { _T("B - Max Flash"), 0x0005280, 0x00052a0, indexKOFSprites_98Kim },
    { _T("B - Hidden Super Desperation Move 2"), 0x00052a0, 0x00052c0, indexKOFSprites_98Kim },
    { _T("B - Soul Palette"), 0x00052c0, 0x00052e0, indexKOFSprites_98Kim },
    { _T("B - Hidden Super Desperation Move 3"), 0x00052e0, 0x0005300, indexKOFSprites_98Kim },
};

const sGame_PaletteDataset KOF02UM_S_KIM_PALETTES_C[] =
{
    { _T("Kim C"), 0x0005400, 0x0005420, indexKOFSprites_98Kim },
    { _T("C - Hidden Super Desperation Move 1"), 0x0005420, 0x0005440, indexKOFSprites_98Kim },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0005440, 0x0005460, indexKOFSprites_98Kim },
    { _T("C - Electric Shock Effect"), 0x0005460, 0x0005480, indexKOFSprites_98Kim },
    { _T("C - Max Flash"), 0x0005480, 0x00054a0, indexKOFSprites_98Kim },
    { _T("C - Hidden Super Desperation Move 2"), 0x00054a0, 0x00054c0, indexKOFSprites_98Kim },
    { _T("C - Soul Palette"), 0x00054c0, 0x00054e0, indexKOFSprites_98Kim },
    { _T("C - Hidden Super Desperation Move 3"), 0x00054e0, 0x0005500, indexKOFSprites_98Kim },
};

const sGame_PaletteDataset KOF02UM_S_KIM_PALETTES_D[] =
{
    { _T("Kim D"), 0x0005600, 0x0005620, indexKOFSprites_98Kim },
    { _T("D - Hidden Super Desperation Move 1"), 0x0005620, 0x0005640, indexKOFSprites_98Kim },
    { _T("D - Desperation Move / Super Desperation Move"), 0x0005640, 0x0005660, indexKOFSprites_98Kim },
    { _T("D - Electric Shock Effect"), 0x0005660, 0x0005680, indexKOFSprites_98Kim },
    { _T("D - Max Flash"), 0x0005680, 0x00056a0, indexKOFSprites_98Kim },
    { _T("D - Hidden Super Desperation Move 2"), 0x00056a0, 0x00056c0, indexKOFSprites_98Kim },
    { _T("D - Soul Palette"), 0x00056c0, 0x00056e0, indexKOFSprites_98Kim },
    { _T("D - Hidden Super Desperation Move 3"), 0x00056e0, 0x0005700, indexKOFSprites_98Kim },
};

const sDescTreeNode KOF02UM_S_KIM_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KIM_PALETTES_A, ARRAYSIZE(KOF02UM_S_KIM_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KIM_PALETTES_B, ARRAYSIZE(KOF02UM_S_KIM_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KIM_PALETTES_C, ARRAYSIZE(KOF02UM_S_KIM_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KIM_PALETTES_D, ARRAYSIZE(KOF02UM_S_KIM_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KIM_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_KIM_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KIM_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_KIM_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_CHANG_PALETTES_A[] =
{
    { _T("Chang A"), 0x0005800, 0x0005820, indexKOFSprites_98Chang },
    { _T("A - Hidden Super Desperation Move 1"), 0x0005820, 0x0005840, indexKOFSprites_98Chang },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0005840, 0x0005860, indexKOFSprites_98Chang },
    { _T("A - Electric Shock Effect"), 0x0005860, 0x0005880, indexKOFSprites_98Chang },
    { _T("A - Max Flash"), 0x0005880, 0x00058a0, indexKOFSprites_98Chang },
    { _T("A - Hidden Super Desperation Move 2"), 0x00058a0, 0x00058c0, indexKOFSprites_98Chang },
    { _T("A - Soul Palette"), 0x00058c0, 0x00058e0, indexKOFSprites_98Chang },
    { _T("A - Hidden Super Desperation Move 3"), 0x00058e0, 0x0005900, indexKOFSprites_98Chang },
};

const sGame_PaletteDataset KOF02UM_S_CHANG_PALETTES_B[] =
{
    { _T("Chang B"), 0x0005a00, 0x0005a20, indexKOFSprites_98Chang },
    { _T("B - Hidden Super Desperation Move 1"), 0x0005a20, 0x0005a40, indexKOFSprites_98Chang },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0005a40, 0x0005a60, indexKOFSprites_98Chang },
    { _T("B - Electric Shock Effect"), 0x0005a60, 0x0005a80, indexKOFSprites_98Chang },
    { _T("B - Max Flash"), 0x0005a80, 0x0005aa0, indexKOFSprites_98Chang },
    { _T("B - Hidden Super Desperation Move 2"), 0x0005aa0, 0x0005ac0, indexKOFSprites_98Chang },
    { _T("B - Soul Palette"), 0x0005ac0, 0x0005ae0, indexKOFSprites_98Chang },
    { _T("B - Hidden Super Desperation Move 3"), 0x0005ae0, 0x0005b00, indexKOFSprites_98Chang },
};

const sGame_PaletteDataset KOF02UM_S_CHANG_PALETTES_C[] =
{
    { _T("Chang C"), 0x0005c00, 0x0005c20, indexKOFSprites_98Chang },
    { _T("C - Hidden Super Desperation Move 1"), 0x0005c20, 0x0005c40, indexKOFSprites_98Chang },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0005c40, 0x0005c60, indexKOFSprites_98Chang },
    { _T("C - Electric Shock Effect"), 0x0005c60, 0x0005c80, indexKOFSprites_98Chang },
    { _T("C - Max Flash"), 0x0005c80, 0x0005ca0, indexKOFSprites_98Chang },
    { _T("C - Hidden Super Desperation Move 2"), 0x0005ca0, 0x0005cc0, indexKOFSprites_98Chang },
    { _T("C - Soul Palette"), 0x0005cc0, 0x0005ce0, indexKOFSprites_98Chang },
    { _T("C - Hidden Super Desperation Move 3"), 0x0005ce0, 0x0005d00, indexKOFSprites_98Chang },
};

const sGame_PaletteDataset KOF02UM_S_CHANG_PALETTES_D[] =
{
    { _T("Chang D"), 0x0005e00, 0x0005e20, indexKOFSprites_98Chang },
    { _T("D - Hidden Super Desperation Move 1"), 0x0005e20, 0x0005e40, indexKOFSprites_98Chang },
    { _T("D - Desperation Move / Super Desperation Move"), 0x0005e40, 0x0005e60, indexKOFSprites_98Chang },
    { _T("D - Electric Shock Effect"), 0x0005e60, 0x0005e80, indexKOFSprites_98Chang },
    { _T("D - Max Flash"), 0x0005e80, 0x0005ea0, indexKOFSprites_98Chang },
    { _T("D - Hidden Super Desperation Move 2"), 0x0005ea0, 0x0005ec0, indexKOFSprites_98Chang },
    { _T("D - Soul Palette"), 0x0005ec0, 0x0005ee0, indexKOFSprites_98Chang },
    { _T("D - Hidden Super Desperation Move 3"), 0x0005ee0, 0x0005f00, indexKOFSprites_98Chang },
};

const sDescTreeNode KOF02UM_S_CHANG_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHANG_PALETTES_A, ARRAYSIZE(KOF02UM_S_CHANG_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHANG_PALETTES_B, ARRAYSIZE(KOF02UM_S_CHANG_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHANG_PALETTES_C, ARRAYSIZE(KOF02UM_S_CHANG_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHANG_PALETTES_D, ARRAYSIZE(KOF02UM_S_CHANG_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHANG_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_CHANG_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHANG_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_CHANG_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_CHOI_PALETTES_A[] =
{
    { _T("Choi A"), 0x0006000, 0x0006020, indexKOFSprites_98Choi },
    { _T("A - Claw Attack Effects"), 0x0006020, 0x0006040, indexKOFSprites_98Choi },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0006040, 0x0006060, indexKOFSprites_98Choi },
    { _T("A - Electric Shock Effect"), 0x0006060, 0x0006080, indexKOFSprites_98Choi },
    { _T("A - Max Flash"), 0x0006080, 0x00060a0, indexKOFSprites_98Choi },
    { _T("A - Hidden Super Desperation Move 2"), 0x00060a0, 0x00060c0, indexKOFSprites_98Choi },
    { _T("A - Soul Palette"), 0x00060c0, 0x00060e0, indexKOFSprites_98Choi },
    { _T("A - Hidden Super Desperation Move 3"), 0x00060e0, 0x0006100, indexKOFSprites_98Choi },
};

const sGame_PaletteDataset KOF02UM_S_CHOI_PALETTES_B[] =
{
    { _T("Choi B"), 0x0006200, 0x0006220, indexKOFSprites_98Choi },
    { _T("B - Claw Attack Effects"), 0x0006220, 0x0006240, indexKOFSprites_98Choi },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0006240, 0x0006260, indexKOFSprites_98Choi },
    { _T("B - Electric Shock Effect"), 0x0006260, 0x0006280, indexKOFSprites_98Choi },
    { _T("B - Max Flash"), 0x0006280, 0x00062a0, indexKOFSprites_98Choi },
    { _T("B - Hidden Super Desperation Move 2"), 0x00062a0, 0x00062c0, indexKOFSprites_98Choi },
    { _T("B - Soul Palette"), 0x00062c0, 0x00062e0, indexKOFSprites_98Choi },
    { _T("B - Hidden Super Desperation Move 3"), 0x00062e0, 0x0006300, indexKOFSprites_98Choi },
};

const sGame_PaletteDataset KOF02UM_S_CHOI_PALETTES_C[] =
{
    { _T("Choi C"), 0x0006400, 0x0006420, indexKOFSprites_98Choi },
    { _T("C - Claw Attack Effects"), 0x0006420, 0x0006440, indexKOFSprites_98Choi },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0006440, 0x0006460, indexKOFSprites_98Choi },
    { _T("C - Electric Shock Effect"), 0x0006460, 0x0006480, indexKOFSprites_98Choi },
    { _T("C - Max Flash"), 0x0006480, 0x00064a0, indexKOFSprites_98Choi },
    { _T("C - Hidden Super Desperation Move 2"), 0x00064a0, 0x00064c0, indexKOFSprites_98Choi },
    { _T("C - Soul Palette"), 0x00064c0, 0x00064e0, indexKOFSprites_98Choi },
    { _T("C - Hidden Super Desperation Move 3"), 0x00064e0, 0x0006500, indexKOFSprites_98Choi },
};

const sGame_PaletteDataset KOF02UM_S_CHOI_PALETTES_D[] =
{
    { _T("Choi D"), 0x0006600, 0x0006620, indexKOFSprites_98Choi },
    { _T("D - Claw Attack Effects"), 0x0006620, 0x0006640, indexKOFSprites_98Choi },
    { _T("D - Desperation Move / Super Desperation Move"), 0x0006640, 0x0006660, indexKOFSprites_98Choi },
    { _T("D - Electric Shock Effect"), 0x0006660, 0x0006680, indexKOFSprites_98Choi },
    { _T("D - Max Flash"), 0x0006680, 0x00066a0, indexKOFSprites_98Choi },
    { _T("D - Hidden Super Desperation Move 2"), 0x00066a0, 0x00066c0, indexKOFSprites_98Choi },
    { _T("D - Soul Palette"), 0x00066c0, 0x00066e0, indexKOFSprites_98Choi },
    { _T("D - Hidden Super Desperation Move 3"), 0x00066e0, 0x0006700, indexKOFSprites_98Choi },
};

const sDescTreeNode KOF02UM_S_CHOI_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHOI_PALETTES_A, ARRAYSIZE(KOF02UM_S_CHOI_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHOI_PALETTES_B, ARRAYSIZE(KOF02UM_S_CHOI_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHOI_PALETTES_C, ARRAYSIZE(KOF02UM_S_CHOI_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHOI_PALETTES_D, ARRAYSIZE(KOF02UM_S_CHOI_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHOI_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_CHOI_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHOI_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_CHOI_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_ATHENA_PALETTES_A[] =
{
    { _T("Athena A"), 0x0006800, 0x0006820, indexKOFSprites_02Athena },
    { _T("A - Athena Transformations"), 0x0006820, 0x0006840, indexKOFSprites_02Athena },
    { _T("A - SDM/MAX Super Palette"), 0x0006840, 0x0006860, indexKOFSprites_02Athena },
    { _T("A - Electric Shock Effect"), 0x0006860, 0x0006880, indexKOFSprites_02Athena },
    { _T("A - Max Flash"), 0x0006880, 0x00068a0, indexKOFSprites_02Athena },
    { _T("A - Hidden Super Desperation Move 2"), 0x00068a0, 0x00068c0, indexKOFSprites_02Athena },
    { _T("A - Soul Palette"), 0x00068c0, 0x00068e0, indexKOFSprites_02Athena },
    { _T("A - Intro Stuff"), 0x00068e0, 0x0006900, indexKOFSprites_02Athena },
};

const sGame_PaletteDataset KOF02UM_S_ATHENA_PALETTES_B[] =
{
    { _T("Athena B"), 0x0006a00, 0x0006a20, indexKOFSprites_02Athena },
    { _T("B - Athena Transformations"), 0x0006a20, 0x0006a40, indexKOFSprites_02Athena },
    { _T("B - SDM/MAX Super Palette"), 0x0006a40, 0x0006a60, indexKOFSprites_02Athena },
    { _T("B - Electric Shock Effect"), 0x0006a60, 0x0006a80, indexKOFSprites_02Athena },
    { _T("B - Max Flash"), 0x0006a80, 0x0006aa0, indexKOFSprites_02Athena },
    { _T("B - Hidden Super Desperation Move 2"), 0x0006aa0, 0x0006ac0, indexKOFSprites_02Athena },
    { _T("B - Soul Palette"), 0x0006ac0, 0x0006ae0, indexKOFSprites_02Athena },
    { _T("B - Intro Stuff"), 0x0006ae0, 0x0006b00, indexKOFSprites_02Athena },
};

const sGame_PaletteDataset KOF02UM_S_ATHENA_PALETTES_C[] =
{
    { _T("Athena C"), 0x0006c00, 0x0006c20, indexKOFSprites_02Athena },
    { _T("C - Athena Transformations"), 0x0006c20, 0x0006c40, indexKOFSprites_02Athena },
    { _T("C - SDM/MAX Super Palette"), 0x0006c40, 0x0006c60, indexKOFSprites_02Athena },
    { _T("C - Electric Shock Effect"), 0x0006c60, 0x0006c80, indexKOFSprites_02Athena },
    { _T("C - Max Flash"), 0x0006c80, 0x0006ca0, indexKOFSprites_02Athena },
    { _T("C - Hidden Super Desperation Move 2"), 0x0006ca0, 0x0006cc0, indexKOFSprites_02Athena },
    { _T("C - Soul Palette"), 0x0006cc0, 0x0006ce0, indexKOFSprites_02Athena },
    { _T("C - Intro Stuff"), 0x0006ce0, 0x0006d00, indexKOFSprites_02Athena },
};

const sGame_PaletteDataset KOF02UM_S_ATHENA_PALETTES_D[] =
{
    { _T("Athena D"), 0x0006e00, 0x0006e20, indexKOFSprites_02Athena },
    { _T("D - Athena Transformations"), 0x0006e20, 0x0006e40, indexKOFSprites_02Athena },
    { _T("D - SDM/MAX Super Palette"), 0x0006e40, 0x0006e60, indexKOFSprites_02Athena },
    { _T("D - Electric Shock Effect"), 0x0006e60, 0x0006e80, indexKOFSprites_02Athena },
    { _T("D - Max Flash"), 0x0006e80, 0x0006ea0, indexKOFSprites_02Athena },
    { _T("D - Hidden Super Desperation Move 2"), 0x0006ea0, 0x0006ec0, indexKOFSprites_02Athena },
    { _T("D - Soul Palette"), 0x0006ec0, 0x0006ee0, indexKOFSprites_02Athena },
    { _T("D - Intro Stuff"), 0x0006ee0, 0x0006f00, indexKOFSprites_02Athena },
};

const sDescTreeNode KOF02UM_S_ATHENA_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_ATHENA_PALETTES_A, ARRAYSIZE(KOF02UM_S_ATHENA_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_ATHENA_PALETTES_B, ARRAYSIZE(KOF02UM_S_ATHENA_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_ATHENA_PALETTES_C, ARRAYSIZE(KOF02UM_S_ATHENA_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_ATHENA_PALETTES_D, ARRAYSIZE(KOF02UM_S_ATHENA_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_ATHENA_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_ATHENA_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_ATHENA_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_ATHENA_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_KENSOU_PALETTES_A[] =
{
    { _T("Kensou A"), 0x0007000, 0x0007020, indexKOFSprites_98Kensou },
    { _T("A - MAX2 Power Up State"), 0x0007020, 0x0007040, indexKOFSprites_98Kensou },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0007040, 0x0007060, indexKOFSprites_98Kensou },
    { _T("A - Electric Shock Effect"), 0x0007060, 0x0007080, indexKOFSprites_98Kensou },
    { _T("A - Max Flash"), 0x0007080, 0x00070a0, indexKOFSprites_98Kensou },
    { _T("A - Hidden Super Desperation Move 2"), 0x00070a0, 0x00070c0, indexKOFSprites_98Kensou },
    { _T("A - Soul Palette"), 0x00070c0, 0x00070e0, indexKOFSprites_98Kensou },
    { _T("A - Hidden Super Desperation Move 3"), 0x00070e0, 0x0007100, indexKOFSprites_98Kensou },
};

const sGame_PaletteDataset KOF02UM_S_KENSOU_PALETTES_B[] =
{
    { _T("Kensou B"), 0x0007200, 0x0007220, indexKOFSprites_98Kensou },
    { _T("B - MAX2 Power Up State"), 0x0007220, 0x0007240, indexKOFSprites_98Kensou },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0007240, 0x0007260, indexKOFSprites_98Kensou },
    { _T("B - Electric Shock Effect"), 0x0007260, 0x0007280, indexKOFSprites_98Kensou },
    { _T("B - Max Flash"), 0x0007280, 0x00072a0, indexKOFSprites_98Kensou },
    { _T("B - Hidden Super Desperation Move 2"), 0x00072a0, 0x00072c0, indexKOFSprites_98Kensou },
    { _T("B - Soul Palette"), 0x00072c0, 0x00072e0, indexKOFSprites_98Kensou },
    { _T("B - Hidden Super Desperation Move 3"), 0x00072e0, 0x0007300, indexKOFSprites_98Kensou },
};

const sGame_PaletteDataset KOF02UM_S_KENSOU_PALETTES_C[] =
{
    { _T("Kensou C"), 0x0007400, 0x0007420, indexKOFSprites_98Kensou },
    { _T("C - MAX2 Power Up State"), 0x0007420, 0x0007440, indexKOFSprites_98Kensou },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0007440, 0x0007460, indexKOFSprites_98Kensou },
    { _T("C - Electric Shock Effect"), 0x0007460, 0x0007480, indexKOFSprites_98Kensou },
    { _T("C - Max Flash"), 0x0007480, 0x00074a0, indexKOFSprites_98Kensou },
    { _T("C - Hidden Super Desperation Move 2"), 0x00074a0, 0x00074c0, indexKOFSprites_98Kensou },
    { _T("C - Soul Palette"), 0x00074c0, 0x00074e0, indexKOFSprites_98Kensou },
    { _T("C - Hidden Super Desperation Move 3"), 0x00074e0, 0x0007500, indexKOFSprites_98Kensou },
};

const sGame_PaletteDataset KOF02UM_S_KENSOU_PALETTES_D[] =
{
    { _T("Kensou D"), 0x0007600, 0x0007620, indexKOFSprites_98Kensou },
    { _T("D - MAX2 Power Up State"), 0x0007620, 0x0007640, indexKOFSprites_98Kensou },
    { _T("D - Desperation Move / Super Desperation Move"), 0x0007640, 0x0007660, indexKOFSprites_98Kensou },
    { _T("D - Electric Shock Effect"), 0x0007660, 0x0007680, indexKOFSprites_98Kensou },
    { _T("D - Max Flash"), 0x0007680, 0x00076a0, indexKOFSprites_98Kensou },
    { _T("D - Hidden Super Desperation Move 2"), 0x00076a0, 0x00076c0, indexKOFSprites_98Kensou },
    { _T("D - Soul Palette"), 0x00076c0, 0x00076e0, indexKOFSprites_98Kensou },
    { _T("D - Hidden Super Desperation Move 3"), 0x00076e0, 0x0007700, indexKOFSprites_98Kensou },
};

const sDescTreeNode KOF02UM_S_KENSOU_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KENSOU_PALETTES_A, ARRAYSIZE(KOF02UM_S_KENSOU_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KENSOU_PALETTES_B, ARRAYSIZE(KOF02UM_S_KENSOU_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KENSOU_PALETTES_C, ARRAYSIZE(KOF02UM_S_KENSOU_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KENSOU_PALETTES_D, ARRAYSIZE(KOF02UM_S_KENSOU_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KENSOU_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_KENSOU_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KENSOU_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_KENSOU_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_CHIN_PALETTES_A[] =
{
    { _T("Chin A"), 0x0007800, 0x0007820, indexKOFSprites_02Chin },
    { _T("A - Fire Palette"), 0x0007820, 0x0007840, indexKOFSprites_02Chin },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0007840, 0x0007860, indexKOFSprites_02Chin },
    { _T("A - Electric Shock Effect"), 0x0007860, 0x0007880, indexKOFSprites_02Chin },
    { _T("A - Max Flash"), 0x0007880, 0x00078a0, indexKOFSprites_02Chin },
    { _T("A - Hidden Super Desperation Move 2"), 0x00078a0, 0x00078c0, indexKOFSprites_02Chin },
    { _T("A - Soul Palette"), 0x00078c0, 0x00078e0, indexKOFSprites_02Chin },
    { _T("A - Hidden Super Desperation Move 3"), 0x00078e0, 0x0007900, indexKOFSprites_02Chin },
};

const sGame_PaletteDataset KOF02UM_S_CHIN_PALETTES_B[] =
{
    { _T("Chin B"), 0x0007a00, 0x0007a20, indexKOFSprites_02Chin },
    { _T("B - Fire Palette"), 0x0007a20, 0x0007a40, indexKOFSprites_02Chin },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0007a40, 0x0007a60, indexKOFSprites_02Chin },
    { _T("B - Electric Shock Effect"), 0x0007a60, 0x0007a80, indexKOFSprites_02Chin },
    { _T("B - Max Flash"), 0x0007a80, 0x0007aa0, indexKOFSprites_02Chin },
    { _T("B - Hidden Super Desperation Move 2"), 0x0007aa0, 0x0007ac0, indexKOFSprites_02Chin },
    { _T("B - Soul Palette"), 0x0007ac0, 0x0007ae0, indexKOFSprites_02Chin },
    { _T("B - Hidden Super Desperation Move 3"), 0x0007ae0, 0x0007b00, indexKOFSprites_02Chin },
};

const sGame_PaletteDataset KOF02UM_S_CHIN_PALETTES_C[] =
{
    { _T("Chin C"), 0x0007c00, 0x0007c20, indexKOFSprites_02Chin },
    { _T("C - Fire Palette"), 0x0007c20, 0x0007c40, indexKOFSprites_02Chin },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0007c40, 0x0007c60, indexKOFSprites_02Chin },
    { _T("C - Electric Shock Effect"), 0x0007c60, 0x0007c80, indexKOFSprites_02Chin },
    { _T("C - Max Flash"), 0x0007c80, 0x0007ca0, indexKOFSprites_02Chin },
    { _T("C - Hidden Super Desperation Move 2"), 0x0007ca0, 0x0007cc0, indexKOFSprites_02Chin },
    { _T("C - Soul Palette"), 0x0007cc0, 0x0007ce0, indexKOFSprites_02Chin },
    { _T("C - Hidden Super Desperation Move 3"), 0x0007ce0, 0x0007d00, indexKOFSprites_02Chin },
};

const sGame_PaletteDataset KOF02UM_S_CHIN_PALETTES_D[] =
{
    { _T("Chin D"), 0x0007e00, 0x0007e20, indexKOFSprites_02Chin },
    { _T("D - Fire Palette"), 0x0007e20, 0x0007e40, indexKOFSprites_02Chin },
    { _T("D - Desperation Move / Super Desperation Move"), 0x0007e40, 0x0007e60, indexKOFSprites_02Chin },
    { _T("D - Electric Shock Effect"), 0x0007e60, 0x0007e80, indexKOFSprites_02Chin },
    { _T("D - Max Flash"), 0x0007e80, 0x0007ea0, indexKOFSprites_02Chin },
    { _T("D - Hidden Super Desperation Move 2"), 0x0007ea0, 0x0007ec0, indexKOFSprites_02Chin },
    { _T("D - Soul Palette"), 0x0007ec0, 0x0007ee0, indexKOFSprites_02Chin },
    { _T("D - Hidden Super Desperation Move 3"), 0x0007ee0, 0x0007f00, indexKOFSprites_02Chin },
};

const sDescTreeNode KOF02UM_S_CHIN_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHIN_PALETTES_A, ARRAYSIZE(KOF02UM_S_CHIN_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHIN_PALETTES_B, ARRAYSIZE(KOF02UM_S_CHIN_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHIN_PALETTES_C, ARRAYSIZE(KOF02UM_S_CHIN_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHIN_PALETTES_D, ARRAYSIZE(KOF02UM_S_CHIN_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHIN_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_CHIN_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHIN_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_CHIN_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_LEONA_PALETTES_A[] =
{
    { _T("Leona A"), 0x0008000, 0x0008020, indexKOFSprites_98Leona },
    { _T("A - MAX2 Kick Effect"), 0x0008020, 0x0008040, indexKOFSprites_98Leona },
    { _T("A - Orochi Leona"), 0x0008040, 0x0008060, indexKOFSprites_98Leona },
    { _T("A - Electric Shock Effect"), 0x0008060, 0x0008080, indexKOFSprites_98Leona },
    { _T("A - Max Flash"), 0x0008080, 0x00080a0, indexKOFSprites_98Leona },
    { _T("A - Hidden Super Desperation Move 2"), 0x00080a0, 0x00080c0, indexKOFSprites_98Leona },
    { _T("A - Soul Palette"), 0x00080c0, 0x00080e0, indexKOFSprites_98Leona },
    { _T("A - Hidden Super Desperation Move 3"), 0x00080e0, 0x0008100, indexKOFSprites_98Leona },
};

const sGame_PaletteDataset KOF02UM_S_LEONA_PALETTES_B[] =
{
    { _T("Leona B"), 0x0008200, 0x0008220, indexKOFSprites_98Leona },
    { _T("B - MAX2 Kick Effect"), 0x0008220, 0x0008240, indexKOFSprites_98Leona },
    { _T("B - Orochi Leona"), 0x0008240, 0x0008260, indexKOFSprites_98Leona },
    { _T("B - Electric Shock Effect"), 0x0008260, 0x0008280, indexKOFSprites_98Leona },
    { _T("B - Max Flash"), 0x0008280, 0x00082a0, indexKOFSprites_98Leona },
    { _T("B - Hidden Super Desperation Move 2"), 0x00082a0, 0x00082c0, indexKOFSprites_98Leona },
    { _T("B - Soul Palette"), 0x00082c0, 0x00082e0, indexKOFSprites_98Leona },
    { _T("B - Hidden Super Desperation Move 3"), 0x00082e0, 0x0008300, indexKOFSprites_98Leona },
};

const sGame_PaletteDataset KOF02UM_S_LEONA_PALETTES_C[] =
{
    { _T("Leona C"), 0x0008400, 0x0008420, indexKOFSprites_98Leona },
    { _T("C - MAX2 Kick Effect"), 0x0008420, 0x0008440, indexKOFSprites_98Leona },
    { _T("C - Orochi Leona"), 0x0008440, 0x0008460, indexKOFSprites_98Leona },
    { _T("C - Electric Shock Effect"), 0x0008460, 0x0008480, indexKOFSprites_98Leona },
    { _T("C - Max Flash"), 0x0008480, 0x00084a0, indexKOFSprites_98Leona },
    { _T("C - Hidden Super Desperation Move 2"), 0x00084a0, 0x00084c0, indexKOFSprites_98Leona },
    { _T("C - Soul Palette"), 0x00084c0, 0x00084e0, indexKOFSprites_98Leona },
    { _T("C - Hidden Super Desperation Move 3"), 0x00084e0, 0x0008500, indexKOFSprites_98Leona },
};

const sGame_PaletteDataset KOF02UM_S_LEONA_PALETTES_D[] =
{
    { _T("Leona D"), 0x0008600, 0x0008620, indexKOFSprites_98Leona },
    { _T("D - MAX2 Kick Effect"), 0x0008620, 0x0008640, indexKOFSprites_98Leona },
    { _T("D - Orochi Leona"), 0x0008640, 0x0008660, indexKOFSprites_98Leona },
    { _T("D - Electric Shock Effect"), 0x0008660, 0x0008680, indexKOFSprites_98Leona },
    { _T("D - Max Flash"), 0x0008680, 0x00086a0, indexKOFSprites_98Leona },
    { _T("D - Hidden Super Desperation Move 2"), 0x00086a0, 0x00086c0, indexKOFSprites_98Leona },
    { _T("D - Soul Palette"), 0x00086c0, 0x00086e0, indexKOFSprites_98Leona },
    { _T("D - Hidden Super Desperation Move 3"), 0x00086e0, 0x0008700, indexKOFSprites_98Leona },
};

const sDescTreeNode KOF02UM_S_LEONA_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_LEONA_PALETTES_A, ARRAYSIZE(KOF02UM_S_LEONA_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_LEONA_PALETTES_B, ARRAYSIZE(KOF02UM_S_LEONA_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_LEONA_PALETTES_C, ARRAYSIZE(KOF02UM_S_LEONA_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_LEONA_PALETTES_D, ARRAYSIZE(KOF02UM_S_LEONA_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_LEONA_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_LEONA_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_LEONA_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_LEONA_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_RALF_PALETTES_A[] =
{
    { _T("Ralf A"), 0x0008800, 0x0008820, indexKOFSprites_02Ralf },
    { _T("A - Hidden Super Desperation Move 1"), 0x0008820, 0x0008840, indexKOFSprites_02Ralf },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0008840, 0x0008860, indexKOFSprites_02Ralf },
    { _T("A - Electric Shock Effect"), 0x0008860, 0x0008880, indexKOFSprites_02Ralf },
    { _T("A - Max Flash"), 0x0008880, 0x00088a0, indexKOFSprites_02Ralf },
    { _T("A - Hidden Super Desperation Move 2"), 0x00088a0, 0x00088c0, indexKOFSprites_02Ralf },
    { _T("A - Soul Palette"), 0x00088c0, 0x00088e0, indexKOFSprites_02Ralf },
    { _T("A - Hidden Super Desperation Move 3"), 0x00088e0, 0x0008900, indexKOFSprites_02Ralf },
};

const sGame_PaletteDataset KOF02UM_S_RALF_PALETTES_B[] =
{
    { _T("Ralf B"), 0x0008a00, 0x0008a20, indexKOFSprites_02Ralf },
    { _T("B - Hidden Super Desperation Move 1"), 0x0008a20, 0x0008a40, indexKOFSprites_02Ralf },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0008a40, 0x0008a60, indexKOFSprites_02Ralf },
    { _T("B - Electric Shock Effect"), 0x0008a60, 0x0008a80, indexKOFSprites_02Ralf },
    { _T("B - Max Flash"), 0x0008a80, 0x0008aa0, indexKOFSprites_02Ralf },
    { _T("B - Hidden Super Desperation Move 2"), 0x0008aa0, 0x0008ac0, indexKOFSprites_02Ralf },
    { _T("B - Soul Palette"), 0x0008ac0, 0x0008ae0, indexKOFSprites_02Ralf },
    { _T("B - Hidden Super Desperation Move 3"), 0x0008ae0, 0x0008b00, indexKOFSprites_02Ralf },
};

const sGame_PaletteDataset KOF02UM_S_RALF_PALETTES_C[] =
{
    { _T("Ralf C"), 0x0008c00, 0x0008c20, indexKOFSprites_02Ralf },
    { _T("C - Hidden Super Desperation Move 1"), 0x0008c20, 0x0008c40, indexKOFSprites_02Ralf },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0008c40, 0x0008c60, indexKOFSprites_02Ralf },
    { _T("C - Electric Shock Effect"), 0x0008c60, 0x0008c80, indexKOFSprites_02Ralf },
    { _T("C - Max Flash"), 0x0008c80, 0x0008ca0, indexKOFSprites_02Ralf },
    { _T("C - Hidden Super Desperation Move 2"), 0x0008ca0, 0x0008cc0, indexKOFSprites_02Ralf },
    { _T("C - Soul Palette"), 0x0008cc0, 0x0008ce0, indexKOFSprites_02Ralf },
    { _T("C - Hidden Super Desperation Move 3"), 0x0008ce0, 0x0008d00, indexKOFSprites_02Ralf },
};

const sGame_PaletteDataset KOF02UM_S_RALF_PALETTES_D[] =
{
    { _T("Ralf D"), 0x0008e00, 0x0008e20, indexKOFSprites_02Ralf },
    { _T("D - Hidden Super Desperation Move 1"), 0x0008e20, 0x0008e40, indexKOFSprites_02Ralf },
    { _T("D - Desperation Move / Super Desperation Move"), 0x0008e40, 0x0008e60, indexKOFSprites_02Ralf },
    { _T("D - Electric Shock Effect"), 0x0008e60, 0x0008e80, indexKOFSprites_02Ralf },
    { _T("D - Max Flash"), 0x0008e80, 0x0008ea0, indexKOFSprites_02Ralf },
    { _T("D - Hidden Super Desperation Move 2"), 0x0008ea0, 0x0008ec0, indexKOFSprites_02Ralf },
    { _T("D - Soul Palette"), 0x0008ec0, 0x0008ee0, indexKOFSprites_02Ralf },
    { _T("D - Hidden Super Desperation Move 3"), 0x0008ee0, 0x0008f00, indexKOFSprites_02Ralf },
};

const sDescTreeNode KOF02UM_S_RALF_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_RALF_PALETTES_A, ARRAYSIZE(KOF02UM_S_RALF_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_RALF_PALETTES_B, ARRAYSIZE(KOF02UM_S_RALF_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_RALF_PALETTES_C, ARRAYSIZE(KOF02UM_S_RALF_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_RALF_PALETTES_D, ARRAYSIZE(KOF02UM_S_RALF_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_RALF_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_RALF_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_RALF_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_RALF_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_CLARK_PALETTES_A[] =
{
    { _T("Clark A"), 0x0009000, 0x0009020, indexKOFSprites_02Clark },
    { _T("A - Hidden Super Desperation Move 1"), 0x0009020, 0x0009040, indexKOFSprites_02Clark },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0009040, 0x0009060, indexKOFSprites_02Clark },
    { _T("A - Electric Shock Effect"), 0x0009060, 0x0009080, indexKOFSprites_02Clark },
    { _T("A - Max Flash"), 0x0009080, 0x00090a0, indexKOFSprites_02Clark },
    { _T("A - Hidden Super Desperation Move 2"), 0x00090a0, 0x00090c0, indexKOFSprites_02Clark },
    { _T("A - Soul Palette"), 0x00090c0, 0x00090e0, indexKOFSprites_02Clark },
    { _T("A - Hidden Super Desperation Move 3"), 0x00090e0, 0x0009100, indexKOFSprites_02Clark },
};

const sGame_PaletteDataset KOF02UM_S_CLARK_PALETTES_B[] =
{
    { _T("Clark B"), 0x0009200, 0x0009220, indexKOFSprites_02Clark },
    { _T("B - Hidden Super Desperation Move 1"), 0x0009220, 0x0009240, indexKOFSprites_02Clark },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0009240, 0x0009260, indexKOFSprites_02Clark },
    { _T("B - Electric Shock Effect"), 0x0009260, 0x0009280, indexKOFSprites_02Clark },
    { _T("B - Max Flash"), 0x0009280, 0x00092a0, indexKOFSprites_02Clark },
    { _T("B - Hidden Super Desperation Move 2"), 0x00092a0, 0x00092c0, indexKOFSprites_02Clark },
    { _T("B - Soul Palette"), 0x00092c0, 0x00092e0, indexKOFSprites_02Clark },
    { _T("B - Hidden Super Desperation Move 3"), 0x00092e0, 0x0009300, indexKOFSprites_02Clark },
};

const sGame_PaletteDataset KOF02UM_S_CLARK_PALETTES_C[] =
{
    { _T("Clark C"), 0x0009400, 0x0009420, indexKOFSprites_02Clark },
    { _T("C - Hidden Super Desperation Move 1"), 0x0009420, 0x0009440, indexKOFSprites_02Clark },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0009440, 0x0009460, indexKOFSprites_02Clark },
    { _T("C - Electric Shock Effect"), 0x0009460, 0x0009480, indexKOFSprites_02Clark },
    { _T("C - Max Flash"), 0x0009480, 0x00094a0, indexKOFSprites_02Clark },
    { _T("C - Hidden Super Desperation Move 2"), 0x00094a0, 0x00094c0, indexKOFSprites_02Clark },
    { _T("C - Soul Palette"), 0x00094c0, 0x00094e0, indexKOFSprites_02Clark },
    { _T("C - Hidden Super Desperation Move 3"), 0x00094e0, 0x0009500, indexKOFSprites_02Clark },
};

const sGame_PaletteDataset KOF02UM_S_CLARK_PALETTES_D[] =
{
    { _T("Clark D"), 0x0009600, 0x0009620, indexKOFSprites_02Clark },
    { _T("D - Hidden Super Desperation Move 1"), 0x0009620, 0x0009640, indexKOFSprites_02Clark },
    { _T("D - Desperation Move / Super Desperation Move"), 0x0009640, 0x0009660, indexKOFSprites_02Clark },
    { _T("D - Electric Shock Effect"), 0x0009660, 0x0009680, indexKOFSprites_02Clark },
    { _T("D - Max Flash"), 0x0009680, 0x00096a0, indexKOFSprites_02Clark },
    { _T("D - Hidden Super Desperation Move 2"), 0x00096a0, 0x00096c0, indexKOFSprites_02Clark },
    { _T("D - Soul Palette"), 0x00096c0, 0x00096e0, indexKOFSprites_02Clark },
    { _T("D - Hidden Super Desperation Move 3"), 0x00096e0, 0x0009700, indexKOFSprites_02Clark },
};

const sDescTreeNode KOF02UM_S_CLARK_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CLARK_PALETTES_A, ARRAYSIZE(KOF02UM_S_CLARK_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CLARK_PALETTES_B, ARRAYSIZE(KOF02UM_S_CLARK_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CLARK_PALETTES_C, ARRAYSIZE(KOF02UM_S_CLARK_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CLARK_PALETTES_D, ARRAYSIZE(KOF02UM_S_CLARK_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CLARK_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_CLARK_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CLARK_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_CLARK_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_RYO_PALETTES_A[] =
{
    { _T("Ryo A"), 0x0009800, 0x0009820, indexKOFSprites_98Ryo },
    { _T("A - Hidden Super Desperation Move 1"), 0x0009820, 0x0009840, indexKOFSprites_98Ryo },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0009840, 0x0009860, indexKOFSprites_98Ryo },
    { _T("A - Electric Shock Effect"), 0x0009860, 0x0009880, indexKOFSprites_98Ryo },
    { _T("A - Max Flash"), 0x0009880, 0x00098a0, indexKOFSprites_98Ryo },
    { _T("A - Hidden Super Desperation Move 2"), 0x00098a0, 0x00098c0, indexKOFSprites_98Ryo },
    { _T("A - Soul Palette"), 0x00098c0, 0x00098e0, indexKOFSprites_98Ryo },
    { _T("A - Hidden Super Desperation Move 3"), 0x00098e0, 0x0009900, indexKOFSprites_98Ryo },
};

const sGame_PaletteDataset KOF02UM_S_RYO_PALETTES_B[] =
{
    { _T("Ryo B"), 0x0009a00, 0x0009a20, indexKOFSprites_98Ryo },
    { _T("B - Hidden Super Desperation Move 1"), 0x0009a20, 0x0009a40, indexKOFSprites_98Ryo },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0009a40, 0x0009a60, indexKOFSprites_98Ryo },
    { _T("B - Electric Shock Effect"), 0x0009a60, 0x0009a80, indexKOFSprites_98Ryo },
    { _T("B - Max Flash"), 0x0009a80, 0x0009aa0, indexKOFSprites_98Ryo },
    { _T("B - Hidden Super Desperation Move 2"), 0x0009aa0, 0x0009ac0, indexKOFSprites_98Ryo },
    { _T("B - Soul Palette"), 0x0009ac0, 0x0009ae0, indexKOFSprites_98Ryo },
    { _T("B - Hidden Super Desperation Move 3"), 0x0009ae0, 0x0009b00, indexKOFSprites_98Ryo },
};

const sGame_PaletteDataset KOF02UM_S_RYO_PALETTES_C[] =
{
    { _T("Ryo C"), 0x0009c00, 0x0009c20, indexKOFSprites_98Ryo },
    { _T("C - Hidden Super Desperation Move 1"), 0x0009c20, 0x0009c40, indexKOFSprites_98Ryo },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0009c40, 0x0009c60, indexKOFSprites_98Ryo },
    { _T("C - Electric Shock Effect"), 0x0009c60, 0x0009c80, indexKOFSprites_98Ryo },
    { _T("C - Max Flash"), 0x0009c80, 0x0009ca0, indexKOFSprites_98Ryo },
    { _T("C - Hidden Super Desperation Move 2"), 0x0009ca0, 0x0009cc0, indexKOFSprites_98Ryo },
    { _T("C - Soul Palette"), 0x0009cc0, 0x0009ce0, indexKOFSprites_98Ryo },
    { _T("C - Hidden Super Desperation Move 3"), 0x0009ce0, 0x0009d00, indexKOFSprites_98Ryo },
};

const sGame_PaletteDataset KOF02UM_S_RYO_PALETTES_D[] =
{
    { _T("Ryo D"), 0x0009e00, 0x0009e20, indexKOFSprites_98Ryo },
    { _T("D - Hidden Super Desperation Move 1"), 0x0009e20, 0x0009e40, indexKOFSprites_98Ryo },
    { _T("D - Desperation Move / Super Desperation Move"), 0x0009e40, 0x0009e60, indexKOFSprites_98Ryo },
    { _T("D - Electric Shock Effect"), 0x0009e60, 0x0009e80, indexKOFSprites_98Ryo },
    { _T("D - Max Flash"), 0x0009e80, 0x0009ea0, indexKOFSprites_98Ryo },
    { _T("D - Hidden Super Desperation Move 2"), 0x0009ea0, 0x0009ec0, indexKOFSprites_98Ryo },
    { _T("D - Soul Palette"), 0x0009ec0, 0x0009ee0, indexKOFSprites_98Ryo },
    { _T("D - Hidden Super Desperation Move 3"), 0x0009ee0, 0x0009f00, indexKOFSprites_98Ryo },
};

const sDescTreeNode KOF02UM_S_RYO_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_RYO_PALETTES_A, ARRAYSIZE(KOF02UM_S_RYO_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_RYO_PALETTES_B, ARRAYSIZE(KOF02UM_S_RYO_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_RYO_PALETTES_C, ARRAYSIZE(KOF02UM_S_RYO_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_RYO_PALETTES_D, ARRAYSIZE(KOF02UM_S_RYO_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_RYO_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_RYO_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_RYO_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_RYO_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_ROBERT_PALETTES_A[] =
{
    { _T("Robert A"), 0x000a000, 0x000a020, indexKOFSprites_02Robert },
    { _T("A - Hidden Super Desperation Move 1"), 0x000a020, 0x000a040, indexKOFSprites_02Robert },
    { _T("A - Desperation Move / Super Desperation Move"), 0x000a040, 0x000a060, indexKOFSprites_02Robert },
    { _T("A - Electric Shock Effect"), 0x000a060, 0x000a080, indexKOFSprites_02Robert },
    { _T("A - Max Flash"), 0x000a080, 0x000a0a0, indexKOFSprites_02Robert },
    { _T("A - Hidden Super Desperation Move 2"), 0x000a0a0, 0x000a0c0, indexKOFSprites_02Robert },
    { _T("A - Soul Palette"), 0x000a0c0, 0x000a0e0, indexKOFSprites_02Robert },
    { _T("A - Hidden Super Desperation Move 3"), 0x000a0e0, 0x000a100, indexKOFSprites_02Robert },
};

const sGame_PaletteDataset KOF02UM_S_ROBERT_PALETTES_B[] =
{
    { _T("Robert B"), 0x000a200, 0x000a220, indexKOFSprites_02Robert },
    { _T("B - Hidden Super Desperation Move 1"), 0x000a220, 0x000a240, indexKOFSprites_02Robert },
    { _T("B - Desperation Move / Super Desperation Move"), 0x000a240, 0x000a260, indexKOFSprites_02Robert },
    { _T("B - Electric Shock Effect"), 0x000a260, 0x000a280, indexKOFSprites_02Robert },
    { _T("B - Max Flash"), 0x000a280, 0x000a2a0, indexKOFSprites_02Robert },
    { _T("B - Hidden Super Desperation Move 2"), 0x000a2a0, 0x000a2c0, indexKOFSprites_02Robert },
    { _T("B - Soul Palette"), 0x000a2c0, 0x000a2e0, indexKOFSprites_02Robert },
    { _T("B - Hidden Super Desperation Move 3"), 0x000a2e0, 0x000a300, indexKOFSprites_02Robert },
};

const sGame_PaletteDataset KOF02UM_S_ROBERT_PALETTES_C[] =
{
    { _T("Robert C"), 0x000a400, 0x000a420, indexKOFSprites_02Robert },
    { _T("C - Hidden Super Desperation Move 1"), 0x000a420, 0x000a440, indexKOFSprites_02Robert },
    { _T("C - Desperation Move / Super Desperation Move"), 0x000a440, 0x000a460, indexKOFSprites_02Robert },
    { _T("C - Electric Shock Effect"), 0x000a460, 0x000a480, indexKOFSprites_02Robert },
    { _T("C - Max Flash"), 0x000a480, 0x000a4a0, indexKOFSprites_02Robert },
    { _T("C - Hidden Super Desperation Move 2"), 0x000a4a0, 0x000a4c0, indexKOFSprites_02Robert },
    { _T("C - Soul Palette"), 0x000a4c0, 0x000a4e0, indexKOFSprites_02Robert },
    { _T("C - Hidden Super Desperation Move 3"), 0x000a4e0, 0x000a500, indexKOFSprites_02Robert },
};

const sGame_PaletteDataset KOF02UM_S_ROBERT_PALETTES_D[] =
{
    { _T("Robert D"), 0x000a600, 0x000a620, indexKOFSprites_02Robert },
    { _T("D - Hidden Super Desperation Move 1"), 0x000a620, 0x000a640, indexKOFSprites_02Robert },
    { _T("D - Desperation Move / Super Desperation Move"), 0x000a640, 0x000a660, indexKOFSprites_02Robert },
    { _T("D - Electric Shock Effect"), 0x000a660, 0x000a680, indexKOFSprites_02Robert },
    { _T("D - Max Flash"), 0x000a680, 0x000a6a0, indexKOFSprites_02Robert },
    { _T("D - Hidden Super Desperation Move 2"), 0x000a6a0, 0x000a6c0, indexKOFSprites_02Robert },
    { _T("D - Soul Palette"), 0x000a6c0, 0x000a6e0, indexKOFSprites_02Robert },
    { _T("D - Hidden Super Desperation Move 3"), 0x000a6e0, 0x000a700, indexKOFSprites_02Robert },
};

const sDescTreeNode KOF02UM_S_ROBERT_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_ROBERT_PALETTES_A, ARRAYSIZE(KOF02UM_S_ROBERT_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_ROBERT_PALETTES_B, ARRAYSIZE(KOF02UM_S_ROBERT_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_ROBERT_PALETTES_C, ARRAYSIZE(KOF02UM_S_ROBERT_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_ROBERT_PALETTES_D, ARRAYSIZE(KOF02UM_S_ROBERT_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_ROBERT_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_ROBERT_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_ROBERT_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_ROBERT_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_TAKUMA_PALETTES_A[] =
{
    { _T("Takuma A"), 0x000a800, 0x000a820, indexKOFSprites_98Takuma },
    { _T("A - Hidden Super Desperation Move 1"), 0x000a820, 0x000a840, indexKOFSprites_98Takuma },
    { _T("A - Desperation Move / Super Desperation Move"), 0x000a840, 0x000a860, indexKOFSprites_98Takuma },
    { _T("A - Electric Shock Effect"), 0x000a860, 0x000a880, indexKOFSprites_98Takuma },
    { _T("A - Max Flash"), 0x000a880, 0x000a8a0, indexKOFSprites_98Takuma },
    { _T("A - Hidden Super Desperation Move 2"), 0x000a8a0, 0x000a8c0, indexKOFSprites_98Takuma },
    { _T("A - Soul Palette"), 0x000a8c0, 0x000a8e0, indexKOFSprites_98Takuma },
    { _T("A - Hidden Super Desperation Move 3"), 0x000a8e0, 0x000a900, indexKOFSprites_98Takuma },
};

const sGame_PaletteDataset KOF02UM_S_TAKUMA_PALETTES_B[] =
{
    { _T("Takuma B"), 0x000aa00, 0x000aa20, indexKOFSprites_98Takuma },
    { _T("B - Hidden Super Desperation Move 1"), 0x000aa20, 0x000aa40, indexKOFSprites_98Takuma },
    { _T("B - Desperation Move / Super Desperation Move"), 0x000aa40, 0x000aa60, indexKOFSprites_98Takuma },
    { _T("B - Electric Shock Effect"), 0x000aa60, 0x000aa80, indexKOFSprites_98Takuma },
    { _T("B - Max Flash"), 0x000aa80, 0x000aaa0, indexKOFSprites_98Takuma },
    { _T("B - Hidden Super Desperation Move 2"), 0x000aaa0, 0x000aac0, indexKOFSprites_98Takuma },
    { _T("B - Soul Palette"), 0x000aac0, 0x000aae0, indexKOFSprites_98Takuma },
    { _T("B - Hidden Super Desperation Move 3"), 0x000aae0, 0x000ab00, indexKOFSprites_98Takuma },
};

const sGame_PaletteDataset KOF02UM_S_TAKUMA_PALETTES_C[] =
{
    { _T("Takuma C"), 0x000ac00, 0x000ac20, indexKOFSprites_98Takuma },
    { _T("C - Hidden Super Desperation Move 1"), 0x000ac20, 0x000ac40, indexKOFSprites_98Takuma },
    { _T("C - Desperation Move / Super Desperation Move"), 0x000ac40, 0x000ac60, indexKOFSprites_98Takuma },
    { _T("C - Electric Shock Effect"), 0x000ac60, 0x000ac80, indexKOFSprites_98Takuma },
    { _T("C - Max Flash"), 0x000ac80, 0x000aca0, indexKOFSprites_98Takuma },
    { _T("C - Hidden Super Desperation Move 2"), 0x000aca0, 0x000acc0, indexKOFSprites_98Takuma },
    { _T("C - Soul Palette"), 0x000acc0, 0x000ace0, indexKOFSprites_98Takuma },
    { _T("C - Hidden Super Desperation Move 3"), 0x000ace0, 0x000ad00, indexKOFSprites_98Takuma },
};

const sGame_PaletteDataset KOF02UM_S_TAKUMA_PALETTES_D[] =
{
    { _T("Takuma D"), 0x000ae00, 0x000ae20, indexKOFSprites_98Takuma },
    { _T("D - Hidden Super Desperation Move 1"), 0x000ae20, 0x000ae40, indexKOFSprites_98Takuma },
    { _T("D - Desperation Move / Super Desperation Move"), 0x000ae40, 0x000ae60, indexKOFSprites_98Takuma },
    { _T("D - Electric Shock Effect"), 0x000ae60, 0x000ae80, indexKOFSprites_98Takuma },
    { _T("D - Max Flash"), 0x000ae80, 0x000aea0, indexKOFSprites_98Takuma },
    { _T("D - Hidden Super Desperation Move 2"), 0x000aea0, 0x000aec0, indexKOFSprites_98Takuma },
    { _T("D - Soul Palette"), 0x000aec0, 0x000aee0, indexKOFSprites_98Takuma },
    { _T("D - Hidden Super Desperation Move 3"), 0x000aee0, 0x000af00, indexKOFSprites_98Takuma },
};

const sDescTreeNode KOF02UM_S_TAKUMA_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_TAKUMA_PALETTES_A, ARRAYSIZE(KOF02UM_S_TAKUMA_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_TAKUMA_PALETTES_B, ARRAYSIZE(KOF02UM_S_TAKUMA_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_TAKUMA_PALETTES_C, ARRAYSIZE(KOF02UM_S_TAKUMA_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_TAKUMA_PALETTES_D, ARRAYSIZE(KOF02UM_S_TAKUMA_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_TAKUMA_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_TAKUMA_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_TAKUMA_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_TAKUMA_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_MAI_PALETTES_A[] =
{
    { _T("Mai A"), 0x000b000, 0x000b020, indexKOFSprites_98Mai },
    { _T("A - SDM/MAX Fire Effect 1"), 0x000b020, 0x000b040, indexKOFSprites_98Mai },
    { _T("A - SDM/MAX Fire Effect 2"), 0x000b040, 0x000b060, indexKOFSprites_98Mai },
    { _T("A - Electric Shock Effect"), 0x000b060, 0x000b080, indexKOFSprites_98Mai },
    { _T("A - Max Flash"), 0x000b080, 0x000b0a0, indexKOFSprites_98Mai },
    { _T("A - Dress"), 0x000b0a0, 0x000b0c0, indexKOFSprites_98Mai },
    { _T("A - Soul Palette"), 0x000b0c0, 0x000b0e0, indexKOFSprites_98Mai },
    { _T("A - Andy Intro Stuff"), 0x000b0e0, 0x000b100, indexKOFSprites_98Mai },
};

const sGame_PaletteDataset KOF02UM_S_MAI_PALETTES_B[] =
{
    { _T("Mai B"), 0x000b200, 0x000b220, indexKOFSprites_98Mai },
    { _T("B - SDM/MAX Fire Effect 1"), 0x000b220, 0x000b240, indexKOFSprites_98Mai },
    { _T("B - SDM/MAX Fire Effect 2"), 0x000b240, 0x000b260, indexKOFSprites_98Mai },
    { _T("B - Electric Shock Effect"), 0x000b260, 0x000b280, indexKOFSprites_98Mai },
    { _T("B - Max Flash"), 0x000b280, 0x000b2a0, indexKOFSprites_98Mai },
    { _T("B - Dress"), 0x000b2a0, 0x000b2c0, indexKOFSprites_98Mai },
    { _T("B - Soul Palette"), 0x000b2c0, 0x000b2e0, indexKOFSprites_98Mai },
    { _T("B - Andy Intro Stuff"), 0x000b2e0, 0x000b300, indexKOFSprites_98Mai },
};

const sGame_PaletteDataset KOF02UM_S_MAI_PALETTES_C[] =
{
    { _T("Mai C"), 0x000b400, 0x000b420, indexKOFSprites_98Mai },
    { _T("C - SDM/MAX Fire Effect 1"), 0x000b420, 0x000b440, indexKOFSprites_98Mai },
    { _T("C - SDM/MAX Fire Effect 2"), 0x000b440, 0x000b460, indexKOFSprites_98Mai },
    { _T("C - Electric Shock Effect"), 0x000b460, 0x000b480, indexKOFSprites_98Mai },
    { _T("C - Max Flash"), 0x000b480, 0x000b4a0, indexKOFSprites_98Mai },
    { _T("C - Dress"), 0x000b4a0, 0x000b4c0, indexKOFSprites_98Mai },
    { _T("C - Soul Palette"), 0x000b4c0, 0x000b4e0, indexKOFSprites_98Mai },
    { _T("C - Andy Intro Stuff"), 0x000b4e0, 0x000b500, indexKOFSprites_98Mai },
};

const sGame_PaletteDataset KOF02UM_S_MAI_PALETTES_D[] =
{
    { _T("Mai D"), 0x000b600, 0x000b620, indexKOFSprites_98Mai },
    { _T("D - SDM/MAX Fire Effect 1"), 0x000b620, 0x000b640, indexKOFSprites_98Mai },
    { _T("D - SDM/MAX Fire Effect 2"), 0x000b640, 0x000b660, indexKOFSprites_98Mai },
    { _T("D - Electric Shock Effect"), 0x000b660, 0x000b680, indexKOFSprites_98Mai },
    { _T("D - Max Flash"), 0x000b680, 0x000b6a0, indexKOFSprites_98Mai },
    { _T("D - Dress"), 0x000b6a0, 0x000b6c0, indexKOFSprites_98Mai },
    { _T("D - Soul Palette"), 0x000b6c0, 0x000b6e0, indexKOFSprites_98Mai },
    { _T("D - Andy Intro Stuff"), 0x000b6e0, 0x000b700, indexKOFSprites_98Mai },
};

const sDescTreeNode KOF02UM_S_MAI_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAI_PALETTES_A, ARRAYSIZE(KOF02UM_S_MAI_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAI_PALETTES_B, ARRAYSIZE(KOF02UM_S_MAI_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAI_PALETTES_C, ARRAYSIZE(KOF02UM_S_MAI_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAI_PALETTES_D, ARRAYSIZE(KOF02UM_S_MAI_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAI_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_MAI_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAI_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_MAI_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_YURI_PALETTES_A[] =
{
    { _T("Yuri A"), 0x000b800, 0x000b820, indexKOFSprites_02Yuri },
    { _T("A - Hidden Super Desperation Move 1"), 0x000b820, 0x000b840, indexKOFSprites_02Yuri },
    { _T("A - Desperation Move / Super Desperation Move"), 0x000b840, 0x000b860, indexKOFSprites_02Yuri },
    { _T("A - Electric Shock Effect"), 0x000b860, 0x000b880, indexKOFSprites_02Yuri },
    { _T("A - Max Flash"), 0x000b880, 0x000b8a0, indexKOFSprites_02Yuri },
    { _T("A - Hidden Super Desperation Move 2"), 0x000b8a0, 0x000b8c0, indexKOFSprites_02Yuri },
    { _T("A - Soul Palette"), 0x000b8c0, 0x000b8e0, indexKOFSprites_02Yuri },
    { _T("A - Hidden Super Desperation Move 3"), 0x000b8e0, 0x000b900, indexKOFSprites_02Yuri },
};

const sGame_PaletteDataset KOF02UM_S_YURI_PALETTES_B[] =
{
    { _T("Yuri B"), 0x000ba00, 0x000ba20, indexKOFSprites_02Yuri },
    { _T("B - Hidden Super Desperation Move 1"), 0x000ba20, 0x000ba40, indexKOFSprites_02Yuri },
    { _T("B - Desperation Move / Super Desperation Move"), 0x000ba40, 0x000ba60, indexKOFSprites_02Yuri },
    { _T("B - Electric Shock Effect"), 0x000ba60, 0x000ba80, indexKOFSprites_02Yuri },
    { _T("B - Max Flash"), 0x000ba80, 0x000baa0, indexKOFSprites_02Yuri },
    { _T("B - Hidden Super Desperation Move 2"), 0x000baa0, 0x000bac0, indexKOFSprites_02Yuri },
    { _T("B - Soul Palette"), 0x000bac0, 0x000bae0, indexKOFSprites_02Yuri },
    { _T("B - Hidden Super Desperation Move 3"), 0x000bae0, 0x000bb00, indexKOFSprites_02Yuri },
};

const sGame_PaletteDataset KOF02UM_S_YURI_PALETTES_C[] =
{
    { _T("Yuri C"), 0x000bc00, 0x000bc20, indexKOFSprites_02Yuri },
    { _T("C - Hidden Super Desperation Move 1"), 0x000bc20, 0x000bc40, indexKOFSprites_02Yuri },
    { _T("C - Desperation Move / Super Desperation Move"), 0x000bc40, 0x000bc60, indexKOFSprites_02Yuri },
    { _T("C - Electric Shock Effect"), 0x000bc60, 0x000bc80, indexKOFSprites_02Yuri },
    { _T("C - Max Flash"), 0x000bc80, 0x000bca0, indexKOFSprites_02Yuri },
    { _T("C - Hidden Super Desperation Move 2"), 0x000bca0, 0x000bcc0, indexKOFSprites_02Yuri },
    { _T("C - Soul Palette"), 0x000bcc0, 0x000bce0, indexKOFSprites_02Yuri },
    { _T("C - Hidden Super Desperation Move 3"), 0x000bce0, 0x000bd00, indexKOFSprites_02Yuri },
};

const sGame_PaletteDataset KOF02UM_S_YURI_PALETTES_D[] =
{
    { _T("Yuri D"), 0x000be00, 0x000be20, indexKOFSprites_02Yuri },
    { _T("D - Hidden Super Desperation Move 1"), 0x000be20, 0x000be40, indexKOFSprites_02Yuri },
    { _T("D - Desperation Move / Super Desperation Move"), 0x000be40, 0x000be60, indexKOFSprites_02Yuri },
    { _T("D - Electric Shock Effect"), 0x000be60, 0x000be80, indexKOFSprites_02Yuri },
    { _T("D - Max Flash"), 0x000be80, 0x000bea0, indexKOFSprites_02Yuri },
    { _T("D - Hidden Super Desperation Move 2"), 0x000bea0, 0x000bec0, indexKOFSprites_02Yuri },
    { _T("D - Soul Palette"), 0x000bec0, 0x000bee0, indexKOFSprites_02Yuri },
    { _T("D - Hidden Super Desperation Move 3"), 0x000bee0, 0x000bf00, indexKOFSprites_02Yuri },
};

const sDescTreeNode KOF02UM_S_YURI_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_YURI_PALETTES_A, ARRAYSIZE(KOF02UM_S_YURI_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_YURI_PALETTES_B, ARRAYSIZE(KOF02UM_S_YURI_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_YURI_PALETTES_C, ARRAYSIZE(KOF02UM_S_YURI_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_YURI_PALETTES_D, ARRAYSIZE(KOF02UM_S_YURI_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_YURI_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_YURI_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_YURI_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_YURI_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_MAYLEE_PALETTES_A[] =
{
    { _T("May Lee A"), 0x000c000, 0x000c020, indexKOFSprites_02MayLee },
    { _T("A - Hidden Super Desperation Move 1"), 0x000c020, 0x000c040, indexKOFSprites_02MayLee },
    { _T("A - Desperation Move / Super Desperation Move"), 0x000c040, 0x000c060, indexKOFSprites_02MayLee },
    { _T("A - Electric Shock Effect"), 0x000c060, 0x000c080, indexKOFSprites_02MayLee },
    { _T("A - Max Flash"), 0x000c080, 0x000c0a0, indexKOFSprites_02MayLee },
    { _T("A - Hidden Super Desperation Move 2"), 0x000c0a0, 0x000c0c0, indexKOFSprites_02MayLee },
    { _T("A - Soul Palette"), 0x000c0c0, 0x000c0e0, indexKOFSprites_02MayLee },
    { _T("A - Hidden Super Desperation Move 3"), 0x000c0e0, 0x000c100, indexKOFSprites_02MayLee },
};

const sGame_PaletteDataset KOF02UM_S_MAYLEE_PALETTES_B[] =
{
    { _T("May Lee B"), 0x000c200, 0x000c220, indexKOFSprites_02MayLee },
    { _T("B - Hidden Super Desperation Move 1"), 0x000c220, 0x000c240, indexKOFSprites_02MayLee },
    { _T("B - Desperation Move / Super Desperation Move"), 0x000c240, 0x000c260, indexKOFSprites_02MayLee },
    { _T("B - Electric Shock Effect"), 0x000c260, 0x000c280, indexKOFSprites_02MayLee },
    { _T("B - Max Flash"), 0x000c280, 0x000c2a0, indexKOFSprites_02MayLee },
    { _T("B - Hidden Super Desperation Move 2"), 0x000c2a0, 0x000c2c0, indexKOFSprites_02MayLee },
    { _T("B - Soul Palette"), 0x000c2c0, 0x000c2e0, indexKOFSprites_02MayLee },
    { _T("B - Hidden Super Desperation Move 3"), 0x000c2e0, 0x000c300, indexKOFSprites_02MayLee },
};

const sGame_PaletteDataset KOF02UM_S_MAYLEE_PALETTES_C[] =
{
    { _T("May Lee C"), 0x000c400, 0x000c420, indexKOFSprites_02MayLee },
    { _T("C - Hidden Super Desperation Move 1"), 0x000c420, 0x000c440, indexKOFSprites_02MayLee },
    { _T("C - Desperation Move / Super Desperation Move"), 0x000c440, 0x000c460, indexKOFSprites_02MayLee },
    { _T("C - Electric Shock Effect"), 0x000c460, 0x000c480, indexKOFSprites_02MayLee },
    { _T("C - Max Flash"), 0x000c480, 0x000c4a0, indexKOFSprites_02MayLee },
    { _T("C - Hidden Super Desperation Move 2"), 0x000c4a0, 0x000c4c0, indexKOFSprites_02MayLee },
    { _T("C - Soul Palette"), 0x000c4c0, 0x000c4e0, indexKOFSprites_02MayLee },
    { _T("C - Hidden Super Desperation Move 3"), 0x000c4e0, 0x000c500, indexKOFSprites_02MayLee },
};

const sGame_PaletteDataset KOF02UM_S_MAYLEE_PALETTES_D[] =
{
    { _T("May Lee D"), 0x000c600, 0x000c620, indexKOFSprites_02MayLee },
    { _T("D - Hidden Super Desperation Move 1"), 0x000c620, 0x000c640, indexKOFSprites_02MayLee },
    { _T("D - Desperation Move / Super Desperation Move"), 0x000c640, 0x000c660, indexKOFSprites_02MayLee },
    { _T("D - Electric Shock Effect"), 0x000c660, 0x000c680, indexKOFSprites_02MayLee },
    { _T("D - Max Flash"), 0x000c680, 0x000c6a0, indexKOFSprites_02MayLee },
    { _T("D - Hidden Super Desperation Move 2"), 0x000c6a0, 0x000c6c0, indexKOFSprites_02MayLee },
    { _T("D - Soul Palette"), 0x000c6c0, 0x000c6e0, indexKOFSprites_02MayLee },
    { _T("D - Hidden Super Desperation Move 3"), 0x000c6e0, 0x000c700, indexKOFSprites_02MayLee },
};

const sDescTreeNode KOF02UM_S_MAYLEE_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAYLEE_PALETTES_A, ARRAYSIZE(KOF02UM_S_MAYLEE_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAYLEE_PALETTES_B, ARRAYSIZE(KOF02UM_S_MAYLEE_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAYLEE_PALETTES_C, ARRAYSIZE(KOF02UM_S_MAYLEE_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAYLEE_PALETTES_D, ARRAYSIZE(KOF02UM_S_MAYLEE_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAYLEE_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_MAYLEE_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAYLEE_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_MAYLEE_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_IORI_PALETTES_A[] =
{
    { _T("Iori A"), 0x000c800, 0x000c820, indexKOFSprites_98Iori },
    { _T("A - Hidden Super Desperation Move 1"), 0x000c820, 0x000c840, indexKOFSprites_98Iori },
    { _T("A - Desperation Move / Super Desperation Move"), 0x000c840, 0x000c860, indexKOFSprites_98Iori },
    { _T("A - Electric Shock Effect"), 0x000c860, 0x000c880, indexKOFSprites_98Iori },
    { _T("A - Max Flash"), 0x000c880, 0x000c8a0, indexKOFSprites_98Iori },
    { _T("A - Hidden Super Desperation Move 2"), 0x000c8a0, 0x000c8c0, indexKOFSprites_98Iori },
    { _T("A - Soul Palette"), 0x000c8c0, 0x000c8e0, indexKOFSprites_98Iori },
    { _T("A - Hidden Super Desperation Move 3"), 0x000c8e0, 0x000c900, indexKOFSprites_98Iori },
};

const sGame_PaletteDataset KOF02UM_S_IORI_PALETTES_B[] =
{
    { _T("Iori B"), 0x000ca00, 0x000ca20, indexKOFSprites_98Iori },
    { _T("B - Hidden Super Desperation Move 1"), 0x000ca20, 0x000ca40, indexKOFSprites_98Iori },
    { _T("B - Desperation Move / Super Desperation Move"), 0x000ca40, 0x000ca60, indexKOFSprites_98Iori },
    { _T("B - Electric Shock Effect"), 0x000ca60, 0x000ca80, indexKOFSprites_98Iori },
    { _T("B - Max Flash"), 0x000ca80, 0x000caa0, indexKOFSprites_98Iori },
    { _T("B - Hidden Super Desperation Move 2"), 0x000caa0, 0x000cac0, indexKOFSprites_98Iori },
    { _T("B - Soul Palette"), 0x000cac0, 0x000cae0, indexKOFSprites_98Iori },
    { _T("B - Hidden Super Desperation Move 3"), 0x000cae0, 0x000cb00, indexKOFSprites_98Iori },
};

const sGame_PaletteDataset KOF02UM_S_IORI_PALETTES_C[] =
{
    { _T("Iori C"), 0x000cc00, 0x000cc20, indexKOFSprites_98Iori },
    { _T("C - Hidden Super Desperation Move 1"), 0x000cc20, 0x000cc40, indexKOFSprites_98Iori },
    { _T("C - Desperation Move / Super Desperation Move"), 0x000cc40, 0x000cc60, indexKOFSprites_98Iori },
    { _T("C - Electric Shock Effect"), 0x000cc60, 0x000cc80, indexKOFSprites_98Iori },
    { _T("C - Max Flash"), 0x000cc80, 0x000cca0, indexKOFSprites_98Iori },
    { _T("C - Hidden Super Desperation Move 2"), 0x000cca0, 0x000ccc0, indexKOFSprites_98Iori },
    { _T("C - Soul Palette"), 0x000ccc0, 0x000cce0, indexKOFSprites_98Iori },
    { _T("C - Hidden Super Desperation Move 3"), 0x000cce0, 0x000cd00, indexKOFSprites_98Iori },
};

const sGame_PaletteDataset KOF02UM_S_IORI_PALETTES_D[] =
{
    { _T("Iori D"), 0x000ce00, 0x000ce20, indexKOFSprites_98Iori },
    { _T("D - Hidden Super Desperation Move 1"), 0x000ce20, 0x000ce40, indexKOFSprites_98Iori },
    { _T("D - Desperation Move / Super Desperation Move"), 0x000ce40, 0x000ce60, indexKOFSprites_98Iori },
    { _T("D - Electric Shock Effect"), 0x000ce60, 0x000ce80, indexKOFSprites_98Iori },
    { _T("D - Max Flash"), 0x000ce80, 0x000cea0, indexKOFSprites_98Iori },
    { _T("D - Hidden Super Desperation Move 2"), 0x000cea0, 0x000cec0, indexKOFSprites_98Iori },
    { _T("D - Soul Palette"), 0x000cec0, 0x000cee0, indexKOFSprites_98Iori },
    { _T("D - Hidden Super Desperation Move 3"), 0x000cee0, 0x000cf00, indexKOFSprites_98Iori },
};

const sDescTreeNode KOF02UM_S_IORI_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_IORI_PALETTES_A, ARRAYSIZE(KOF02UM_S_IORI_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_IORI_PALETTES_B, ARRAYSIZE(KOF02UM_S_IORI_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_IORI_PALETTES_C, ARRAYSIZE(KOF02UM_S_IORI_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_IORI_PALETTES_D, ARRAYSIZE(KOF02UM_S_IORI_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_IORI_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_IORI_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_IORI_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_IORI_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_MATURE_PALETTES_A[] =
{
    { _T("Mature A"), 0x000d000, 0x000d020, indexKOFSprites_98Mature },
    { _T("A - Hidden Super Desperation Move 1"), 0x000d020, 0x000d040, indexKOFSprites_98Mature },
    { _T("A - Desperation Move / Super Desperation Move"), 0x000d040, 0x000d060, indexKOFSprites_98Mature },
    { _T("A - Electric Shock Effect"), 0x000d060, 0x000d080, indexKOFSprites_98Mature },
    { _T("A - Max Flash"), 0x000d080, 0x000d0a0, indexKOFSprites_98Mature },
    { _T("A - Hidden Super Desperation Move 2"), 0x000d0a0, 0x000d0c0, indexKOFSprites_98Mature },
    { _T("A - Soul Palette"), 0x000d0c0, 0x000d0e0, indexKOFSprites_98Mature },
    { _T("A - Hidden Super Desperation Move 3"), 0x000d0e0, 0x000d100, indexKOFSprites_98Mature },
};

const sGame_PaletteDataset KOF02UM_S_MATURE_PALETTES_B[] =
{
    { _T("Mature B"), 0x000d200, 0x000d220, indexKOFSprites_98Mature },
    { _T("B - Hidden Super Desperation Move 1"), 0x000d220, 0x000d240, indexKOFSprites_98Mature },
    { _T("B - Desperation Move / Super Desperation Move"), 0x000d240, 0x000d260, indexKOFSprites_98Mature },
    { _T("B - Electric Shock Effect"), 0x000d260, 0x000d280, indexKOFSprites_98Mature },
    { _T("B - Max Flash"), 0x000d280, 0x000d2a0, indexKOFSprites_98Mature },
    { _T("B - Hidden Super Desperation Move 2"), 0x000d2a0, 0x000d2c0, indexKOFSprites_98Mature },
    { _T("B - Soul Palette"), 0x000d2c0, 0x000d2e0, indexKOFSprites_98Mature },
    { _T("B - Hidden Super Desperation Move 3"), 0x000d2e0, 0x000d300, indexKOFSprites_98Mature },
};

const sGame_PaletteDataset KOF02UM_S_MATURE_PALETTES_C[] =
{
    { _T("Mature C"), 0x000d400, 0x000d420, indexKOFSprites_98Mature },
    { _T("C - Hidden Super Desperation Move 1"), 0x000d420, 0x000d440, indexKOFSprites_98Mature },
    { _T("C - Desperation Move / Super Desperation Move"), 0x000d440, 0x000d460, indexKOFSprites_98Mature },
    { _T("C - Electric Shock Effect"), 0x000d460, 0x000d480, indexKOFSprites_98Mature },
    { _T("C - Max Flash"), 0x000d480, 0x000d4a0, indexKOFSprites_98Mature },
    { _T("C - Hidden Super Desperation Move 2"), 0x000d4a0, 0x000d4c0, indexKOFSprites_98Mature },
    { _T("C - Soul Palette"), 0x000d4c0, 0x000d4e0, indexKOFSprites_98Mature },
    { _T("C - Hidden Super Desperation Move 3"), 0x000d4e0, 0x000d500, indexKOFSprites_98Mature },
};

const sGame_PaletteDataset KOF02UM_S_MATURE_PALETTES_D[] =
{
    { _T("Mature D"), 0x000d600, 0x000d620, indexKOFSprites_98Mature },
    { _T("D - Hidden Super Desperation Move 1"), 0x000d620, 0x000d640, indexKOFSprites_98Mature },
    { _T("D - Desperation Move / Super Desperation Move"), 0x000d640, 0x000d660, indexKOFSprites_98Mature },
    { _T("D - Electric Shock Effect"), 0x000d660, 0x000d680, indexKOFSprites_98Mature },
    { _T("D - Max Flash"), 0x000d680, 0x000d6a0, indexKOFSprites_98Mature },
    { _T("D - Hidden Super Desperation Move 2"), 0x000d6a0, 0x000d6c0, indexKOFSprites_98Mature },
    { _T("D - Soul Palette"), 0x000d6c0, 0x000d6e0, indexKOFSprites_98Mature },
    { _T("D - Hidden Super Desperation Move 3"), 0x000d6e0, 0x000d700, indexKOFSprites_98Mature },
};

const sDescTreeNode KOF02UM_S_MATURE_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_MATURE_PALETTES_A, ARRAYSIZE(KOF02UM_S_MATURE_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_MATURE_PALETTES_B, ARRAYSIZE(KOF02UM_S_MATURE_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_MATURE_PALETTES_C, ARRAYSIZE(KOF02UM_S_MATURE_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_MATURE_PALETTES_D, ARRAYSIZE(KOF02UM_S_MATURE_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_MATURE_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_MATURE_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_MATURE_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_MATURE_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_VICE_PALETTES_A[] =
{
    { _T("Vice A"), 0x000d800, 0x000d820, indexKOFSprites_98Vice },
    { _T("A - Hidden Super Desperation Move 1"), 0x000d820, 0x000d840, indexKOFSprites_98Vice },
    { _T("A - Desperation Move / Super Desperation Move"), 0x000d840, 0x000d860, indexKOFSprites_98Vice },
    { _T("A - Electric Shock Effect"), 0x000d860, 0x000d880, indexKOFSprites_98Vice },
    { _T("A - Max Flash"), 0x000d880, 0x000d8a0, indexKOFSprites_98Vice },
    { _T("A - Hidden Super Desperation Move 2"), 0x000d8a0, 0x000d8c0, indexKOFSprites_98Vice },
    { _T("A - Soul Palette"), 0x000d8c0, 0x000d8e0, indexKOFSprites_98Vice },
    { _T("A - Hidden Super Desperation Move 3"), 0x000d8e0, 0x000d900, indexKOFSprites_98Vice },
};

const sGame_PaletteDataset KOF02UM_S_VICE_PALETTES_B[] =
{
    { _T("Vice B"), 0x000da00, 0x000da20, indexKOFSprites_98Vice },
    { _T("B - Hidden Super Desperation Move 1"), 0x000da20, 0x000da40, indexKOFSprites_98Vice },
    { _T("B - Desperation Move / Super Desperation Move"), 0x000da40, 0x000da60, indexKOFSprites_98Vice },
    { _T("B - Electric Shock Effect"), 0x000da60, 0x000da80, indexKOFSprites_98Vice },
    { _T("B - Max Flash"), 0x000da80, 0x000daa0, indexKOFSprites_98Vice },
    { _T("B - Hidden Super Desperation Move 2"), 0x000daa0, 0x000dac0, indexKOFSprites_98Vice },
    { _T("B - Soul Palette"), 0x000dac0, 0x000dae0, indexKOFSprites_98Vice },
    { _T("B - Hidden Super Desperation Move 3"), 0x000dae0, 0x000db00, indexKOFSprites_98Vice },
};

const sGame_PaletteDataset KOF02UM_S_VICE_PALETTES_C[] =
{
    { _T("Vice C"), 0x000dc00, 0x000dc20, indexKOFSprites_98Vice },
    { _T("C - Hidden Super Desperation Move 1"), 0x000dc20, 0x000dc40, indexKOFSprites_98Vice },
    { _T("C - Desperation Move / Super Desperation Move"), 0x000dc40, 0x000dc60, indexKOFSprites_98Vice },
    { _T("C - Electric Shock Effect"), 0x000dc60, 0x000dc80, indexKOFSprites_98Vice },
    { _T("C - Max Flash"), 0x000dc80, 0x000dca0, indexKOFSprites_98Vice },
    { _T("C - Hidden Super Desperation Move 2"), 0x000dca0, 0x000dcc0, indexKOFSprites_98Vice },
    { _T("C - Soul Palette"), 0x000dcc0, 0x000dce0, indexKOFSprites_98Vice },
    { _T("C - Hidden Super Desperation Move 3"), 0x000dce0, 0x000dd00, indexKOFSprites_98Vice },
};

const sGame_PaletteDataset KOF02UM_S_VICE_PALETTES_D[] =
{
    { _T("Vice D"), 0x000de00, 0x000de20, indexKOFSprites_98Vice },
    { _T("D - Hidden Super Desperation Move 1"), 0x000de20, 0x000de40, indexKOFSprites_98Vice },
    { _T("D - Desperation Move / Super Desperation Move"), 0x000de40, 0x000de60, indexKOFSprites_98Vice },
    { _T("D - Electric Shock Effect"), 0x000de60, 0x000de80, indexKOFSprites_98Vice },
    { _T("D - Max Flash"), 0x000de80, 0x000dea0, indexKOFSprites_98Vice },
    { _T("D - Hidden Super Desperation Move 2"), 0x000dea0, 0x000dec0, indexKOFSprites_98Vice },
    { _T("D - Soul Palette"), 0x000dec0, 0x000dee0, indexKOFSprites_98Vice },
    { _T("D - Hidden Super Desperation Move 3"), 0x000dee0, 0x000df00, indexKOFSprites_98Vice },
};

const sDescTreeNode KOF02UM_S_VICE_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_VICE_PALETTES_A, ARRAYSIZE(KOF02UM_S_VICE_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_VICE_PALETTES_B, ARRAYSIZE(KOF02UM_S_VICE_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_VICE_PALETTES_C, ARRAYSIZE(KOF02UM_S_VICE_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_VICE_PALETTES_D, ARRAYSIZE(KOF02UM_S_VICE_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_VICE_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_VICE_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_VICE_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_VICE_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_YAMAZAKI_PALETTES_A[] =
{
    { _T("Yamazaki A"), 0x000e000, 0x000e020, indexKOFSprites_98Yamazaki },
    { _T("A - Uppercut Super"), 0x000e020, 0x000e040, indexKOFSprites_98Yamazaki },
    { _T("A - Intro Stuff"), 0x000e040, 0x000e060, indexKOFSprites_98Yamazaki },
    { _T("A - Electric Shock Effect"), 0x000e060, 0x000e080, indexKOFSprites_98Yamazaki },
    { _T("A - Max Flash"), 0x000e080, 0x000e0a0, indexKOFSprites_98Yamazaki },
    { _T("A - Hidden Super Desperation Move 2"), 0x000e0a0, 0x000e0c0, indexKOFSprites_98Yamazaki },
    { _T("A - Soul Palette"), 0x000e0c0, 0x000e0e0, indexKOFSprites_98Yamazaki },
    { _T("A - Hidden Super Desperation Move 3"), 0x000e0e0, 0x000e100, indexKOFSprites_98Yamazaki },
};

const sGame_PaletteDataset KOF02UM_S_YAMAZAKI_PALETTES_B[] =
{
    { _T("Yamazaki B"), 0x000e200, 0x000e220, indexKOFSprites_98Yamazaki },
    { _T("B - Uppercut Super"), 0x000e220, 0x000e240, indexKOFSprites_98Yamazaki },
    { _T("B - Intro Stuff"), 0x000e240, 0x000e260, indexKOFSprites_98Yamazaki },
    { _T("B - Electric Shock Effect"), 0x000e260, 0x000e280, indexKOFSprites_98Yamazaki },
    { _T("B - Max Flash"), 0x000e280, 0x000e2a0, indexKOFSprites_98Yamazaki },
    { _T("B - Hidden Super Desperation Move 2"), 0x000e2a0, 0x000e2c0, indexKOFSprites_98Yamazaki },
    { _T("B - Soul Palette"), 0x000e2c0, 0x000e2e0, indexKOFSprites_98Yamazaki },
    { _T("B - Hidden Super Desperation Move 3"), 0x000e2e0, 0x000e300, indexKOFSprites_98Yamazaki },
};

const sGame_PaletteDataset KOF02UM_S_YAMAZAKI_PALETTES_C[] =
{
    { _T("Yamazaki C"), 0x000e400, 0x000e420, indexKOFSprites_98Yamazaki },
    { _T("C - Uppercut Super"), 0x000e420, 0x000e440, indexKOFSprites_98Yamazaki },
    { _T("C - Intro Stuff"), 0x000e440, 0x000e460, indexKOFSprites_98Yamazaki },
    { _T("C - Electric Shock Effect"), 0x000e460, 0x000e480, indexKOFSprites_98Yamazaki },
    { _T("C - Max Flash"), 0x000e480, 0x000e4a0, indexKOFSprites_98Yamazaki },
    { _T("C - Hidden Super Desperation Move 2"), 0x000e4a0, 0x000e4c0, indexKOFSprites_98Yamazaki },
    { _T("C - Soul Palette"), 0x000e4c0, 0x000e4e0, indexKOFSprites_98Yamazaki },
    { _T("C - Hidden Super Desperation Move 3"), 0x000e4e0, 0x000e500, indexKOFSprites_98Yamazaki },
};

const sGame_PaletteDataset KOF02UM_S_YAMAZAKI_PALETTES_D[] =
{
    { _T("Yamazaki D"), 0x000e600, 0x000e620, indexKOFSprites_98Yamazaki },
    { _T("D - Uppercut Super"), 0x000e620, 0x000e640, indexKOFSprites_98Yamazaki },
    { _T("D - Intro Stuff"), 0x000e640, 0x000e660, indexKOFSprites_98Yamazaki },
    { _T("D - Electric Shock Effect"), 0x000e660, 0x000e680, indexKOFSprites_98Yamazaki },
    { _T("D - Max Flash"), 0x000e680, 0x000e6a0, indexKOFSprites_98Yamazaki },
    { _T("D - Hidden Super Desperation Move 2"), 0x000e6a0, 0x000e6c0, indexKOFSprites_98Yamazaki },
    { _T("D - Soul Palette"), 0x000e6c0, 0x000e6e0, indexKOFSprites_98Yamazaki },
    { _T("D - Hidden Super Desperation Move 3"), 0x000e6e0, 0x000e700, indexKOFSprites_98Yamazaki },
};

const sDescTreeNode KOF02UM_S_YAMAZAKI_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_YAMAZAKI_PALETTES_A, ARRAYSIZE(KOF02UM_S_YAMAZAKI_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_YAMAZAKI_PALETTES_B, ARRAYSIZE(KOF02UM_S_YAMAZAKI_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_YAMAZAKI_PALETTES_C, ARRAYSIZE(KOF02UM_S_YAMAZAKI_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_YAMAZAKI_PALETTES_D, ARRAYSIZE(KOF02UM_S_YAMAZAKI_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_YAMAZAKI_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_YAMAZAKI_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_YAMAZAKI_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_YAMAZAKI_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_BLUEMARY_PALETTES_A[] =
{
    { _T("Blue Mary A"), 0x000e800, 0x000e820, indexKOFSprites_98BlueMary },
    { _T("A - Anton and Jacket"), 0x000e820, 0x000e840, indexKOFSprites_98BlueMary },
    { _T("A - Desperation Move / Super Desperation Move"), 0x000e840, 0x000e860, indexKOFSprites_98BlueMary },
    { _T("A - Electric Shock Effect"), 0x000e860, 0x000e880, indexKOFSprites_98BlueMary },
    { _T("A - Max Flash"), 0x000e880, 0x000e8a0, indexKOFSprites_98BlueMary },
    { _T("A - Hidden Super Desperation Move 2"), 0x000e8a0, 0x000e8c0, indexKOFSprites_98BlueMary },
    { _T("A - Soul Palette"), 0x000e8c0, 0x000e8e0, indexKOFSprites_98BlueMary },
    { _T("A - Hidden Super Desperation Move 3"), 0x000e8e0, 0x000e900, indexKOFSprites_98BlueMary },
};

const sGame_PaletteDataset KOF02UM_S_BLUEMARY_PALETTES_B[] =
{
    { _T("Blue Mary B"), 0x000ea00, 0x000ea20, indexKOFSprites_98BlueMary },
    { _T("B - Anton and Jacket"), 0x000ea20, 0x000ea40, indexKOFSprites_98BlueMary },
    { _T("B - Desperation Move / Super Desperation Move"), 0x000ea40, 0x000ea60, indexKOFSprites_98BlueMary },
    { _T("B - Electric Shock Effect"), 0x000ea60, 0x000ea80, indexKOFSprites_98BlueMary },
    { _T("B - Max Flash"), 0x000ea80, 0x000eaa0, indexKOFSprites_98BlueMary },
    { _T("B - Hidden Super Desperation Move 2"), 0x000eaa0, 0x000eac0, indexKOFSprites_98BlueMary },
    { _T("B - Soul Palette"), 0x000eac0, 0x000eae0, indexKOFSprites_98BlueMary },
    { _T("B - Hidden Super Desperation Move 3"), 0x000eae0, 0x000eb00, indexKOFSprites_98BlueMary },
};

const sGame_PaletteDataset KOF02UM_S_BLUEMARY_PALETTES_C[] =
{
    { _T("Blue Mary C"), 0x000ec00, 0x000ec20, indexKOFSprites_98BlueMary },
    { _T("C - Anton and Jacket"), 0x000ec20, 0x000ec40, indexKOFSprites_98BlueMary },
    { _T("C - Desperation Move / Super Desperation Move"), 0x000ec40, 0x000ec60, indexKOFSprites_98BlueMary },
    { _T("C - Electric Shock Effect"), 0x000ec60, 0x000ec80, indexKOFSprites_98BlueMary },
    { _T("C - Max Flash"), 0x000ec80, 0x000eca0, indexKOFSprites_98BlueMary },
    { _T("C - Hidden Super Desperation Move 2"), 0x000eca0, 0x000ecc0, indexKOFSprites_98BlueMary },
    { _T("C - Soul Palette"), 0x000ecc0, 0x000ece0, indexKOFSprites_98BlueMary },
    { _T("C - Hidden Super Desperation Move 3"), 0x000ece0, 0x000ed00, indexKOFSprites_98BlueMary },
};

const sGame_PaletteDataset KOF02UM_S_BLUEMARY_PALETTES_D[] =
{
    { _T("Blue Mary D"), 0x000ee00, 0x000ee20, indexKOFSprites_98BlueMary },
    { _T("D - Anton and Jacket"), 0x000ee20, 0x000ee40, indexKOFSprites_98BlueMary },
    { _T("D - Desperation Move / Super Desperation Move"), 0x000ee40, 0x000ee60, indexKOFSprites_98BlueMary },
    { _T("D - Electric Shock Effect"), 0x000ee60, 0x000ee80, indexKOFSprites_98BlueMary },
    { _T("D - Max Flash"), 0x000ee80, 0x000eea0, indexKOFSprites_98BlueMary },
    { _T("D - Hidden Super Desperation Move 2"), 0x000eea0, 0x000eec0, indexKOFSprites_98BlueMary },
    { _T("D - Soul Palette"), 0x000eec0, 0x000eee0, indexKOFSprites_98BlueMary },
    { _T("D - Hidden Super Desperation Move 3"), 0x000eee0, 0x000ef00, indexKOFSprites_98BlueMary },
};

const sDescTreeNode KOF02UM_S_BLUEMARY_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_BLUEMARY_PALETTES_A, ARRAYSIZE(KOF02UM_S_BLUEMARY_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_BLUEMARY_PALETTES_B, ARRAYSIZE(KOF02UM_S_BLUEMARY_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_BLUEMARY_PALETTES_C, ARRAYSIZE(KOF02UM_S_BLUEMARY_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_BLUEMARY_PALETTES_D, ARRAYSIZE(KOF02UM_S_BLUEMARY_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_BLUEMARY_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_BLUEMARY_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_BLUEMARY_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_BLUEMARY_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_BILLY_PALETTES_A[] =
{
    { _T("Billy A"), 0x000f000, 0x000f020, indexKOFSprites_98Billy },
    { _T("A - Hidden Super Desperation Move 1"), 0x000f020, 0x000f040, indexKOFSprites_98Billy },
    { _T("A - Eiji Kisaragi"), 0x000f040, 0x000f060, indexKOFSprites_98Billy },
    { _T("A - Electric Shock Effect"), 0x000f060, 0x000f080, indexKOFSprites_98Billy },
    { _T("A - Max Flash"), 0x000f080, 0x000f0a0, indexKOFSprites_98Billy },
    { _T("A - Hidden Super Desperation Move 2"), 0x000f0a0, 0x000f0c0, indexKOFSprites_98Billy },
    { _T("A - Soul Palette"), 0x000f0c0, 0x000f0e0, indexKOFSprites_98Billy },
    { _T("A - Hidden Super Desperation Move 3"), 0x000f0e0, 0x000f100, indexKOFSprites_98Billy },
};

const sGame_PaletteDataset KOF02UM_S_BILLY_PALETTES_B[] =
{
    { _T("Billy B"), 0x000f200, 0x000f220, indexKOFSprites_98Billy },
    { _T("B - Hidden Super Desperation Move 1"), 0x000f220, 0x000f240, indexKOFSprites_98Billy },
    { _T("B - Eiji Kisaragi"), 0x000f240, 0x000f260, indexKOFSprites_98Billy },
    { _T("B - Electric Shock Effect"), 0x000f260, 0x000f280, indexKOFSprites_98Billy },
    { _T("B - Max Flash"), 0x000f280, 0x000f2a0, indexKOFSprites_98Billy },
    { _T("B - Hidden Super Desperation Move 2"), 0x000f2a0, 0x000f2c0, indexKOFSprites_98Billy },
    { _T("B - Soul Palette"), 0x000f2c0, 0x000f2e0, indexKOFSprites_98Billy },
    { _T("B - Hidden Super Desperation Move 3"), 0x000f2e0, 0x000f300, indexKOFSprites_98Billy },
};

const sGame_PaletteDataset KOF02UM_S_BILLY_PALETTES_C[] =
{
    { _T("Billy C"), 0x000f400, 0x000f420, indexKOFSprites_98Billy },
    { _T("C - Hidden Super Desperation Move 1"), 0x000f420, 0x000f440, indexKOFSprites_98Billy },
    { _T("C - Eiji Kisaragi"), 0x000f440, 0x000f460, indexKOFSprites_98Billy },
    { _T("C - Electric Shock Effect"), 0x000f460, 0x000f480, indexKOFSprites_98Billy },
    { _T("C - Max Flash"), 0x000f480, 0x000f4a0, indexKOFSprites_98Billy },
    { _T("C - Hidden Super Desperation Move 2"), 0x000f4a0, 0x000f4c0, indexKOFSprites_98Billy },
    { _T("C - Soul Palette"), 0x000f4c0, 0x000f4e0, indexKOFSprites_98Billy },
    { _T("C - Hidden Super Desperation Move 3"), 0x000f4e0, 0x000f500, indexKOFSprites_98Billy },
};

const sGame_PaletteDataset KOF02UM_S_BILLY_PALETTES_D[] =
{
    { _T("Billy D"), 0x000f600, 0x000f620, indexKOFSprites_98Billy },
    { _T("D - Hidden Super Desperation Move 1"), 0x000f620, 0x000f640, indexKOFSprites_98Billy },
    { _T("D - Eiji Kisaragi"), 0x000f640, 0x000f660, indexKOFSprites_98Billy },
    { _T("D - Electric Shock Effect"), 0x000f660, 0x000f680, indexKOFSprites_98Billy },
    { _T("D - Max Flash"), 0x000f680, 0x000f6a0, indexKOFSprites_98Billy },
    { _T("D - Hidden Super Desperation Move 2"), 0x000f6a0, 0x000f6c0, indexKOFSprites_98Billy },
    { _T("D - Soul Palette"), 0x000f6c0, 0x000f6e0, indexKOFSprites_98Billy },
    { _T("D - Hidden Super Desperation Move 3"), 0x000f6e0, 0x000f700, indexKOFSprites_98Billy },
};

const sDescTreeNode KOF02UM_S_BILLY_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_BILLY_PALETTES_A, ARRAYSIZE(KOF02UM_S_BILLY_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_BILLY_PALETTES_B, ARRAYSIZE(KOF02UM_S_BILLY_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_BILLY_PALETTES_C, ARRAYSIZE(KOF02UM_S_BILLY_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_BILLY_PALETTES_D, ARRAYSIZE(KOF02UM_S_BILLY_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_BILLY_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_BILLY_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_BILLY_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_BILLY_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_YASHIRO_PALETTES_A[] =
{
    { _T("Yashiro A"), 0x000f800, 0x000f820, indexKOFSprites_98Yashiro },
    { _T("A - Hidden Super Desperation Move 1"), 0x000f820, 0x000f840, indexKOFSprites_98Yashiro },
    { _T("A - Desperation Move / Super Desperation Move"), 0x000f840, 0x000f860, indexKOFSprites_98Yashiro },
    { _T("A - Electric Shock Effect"), 0x000f860, 0x000f880, indexKOFSprites_98Yashiro },
    { _T("A - Max Flash"), 0x000f880, 0x000f8a0, indexKOFSprites_98Yashiro },
    { _T("A - Hidden Super Desperation Move 2"), 0x000f8a0, 0x000f8c0, indexKOFSprites_98Yashiro },
    { _T("A - Soul Palette"), 0x000f8c0, 0x000f8e0, indexKOFSprites_98Yashiro },
    { _T("A - Hidden Super Desperation Move 3"), 0x000f8e0, 0x000f900, indexKOFSprites_98Yashiro },
};

const sGame_PaletteDataset KOF02UM_S_YASHIRO_PALETTES_B[] =
{
    { _T("Yashiro B"), 0x000fa00, 0x000fa20, indexKOFSprites_98Yashiro },
    { _T("B - Hidden Super Desperation Move 1"), 0x000fa20, 0x000fa40, indexKOFSprites_98Yashiro },
    { _T("B - Desperation Move / Super Desperation Move"), 0x000fa40, 0x000fa60, indexKOFSprites_98Yashiro },
    { _T("B - Electric Shock Effect"), 0x000fa60, 0x000fa80, indexKOFSprites_98Yashiro },
    { _T("B - Max Flash"), 0x000fa80, 0x000faa0, indexKOFSprites_98Yashiro },
    { _T("B - Hidden Super Desperation Move 2"), 0x000faa0, 0x000fac0, indexKOFSprites_98Yashiro },
    { _T("B - Soul Palette"), 0x000fac0, 0x000fae0, indexKOFSprites_98Yashiro },
    { _T("B - Hidden Super Desperation Move 3"), 0x000fae0, 0x000fb00, indexKOFSprites_98Yashiro },
};

const sGame_PaletteDataset KOF02UM_S_YASHIRO_PALETTES_C[] =
{
    { _T("Yashiro C"), 0x000fc00, 0x000fc20, indexKOFSprites_98Yashiro },
    { _T("C - Hidden Super Desperation Move 1"), 0x000fc20, 0x000fc40, indexKOFSprites_98Yashiro },
    { _T("C - Desperation Move / Super Desperation Move"), 0x000fc40, 0x000fc60, indexKOFSprites_98Yashiro },
    { _T("C - Electric Shock Effect"), 0x000fc60, 0x000fc80, indexKOFSprites_98Yashiro },
    { _T("C - Max Flash"), 0x000fc80, 0x000fca0, indexKOFSprites_98Yashiro },
    { _T("C - Hidden Super Desperation Move 2"), 0x000fca0, 0x000fcc0, indexKOFSprites_98Yashiro },
    { _T("C - Soul Palette"), 0x000fcc0, 0x000fce0, indexKOFSprites_98Yashiro },
    { _T("C - Hidden Super Desperation Move 3"), 0x000fce0, 0x000fd00, indexKOFSprites_98Yashiro },
};

const sGame_PaletteDataset KOF02UM_S_YASHIRO_PALETTES_D[] =
{
    { _T("Yashiro D"), 0x000fe00, 0x000fe20, indexKOFSprites_98Yashiro },
    { _T("D - Hidden Super Desperation Move 1"), 0x000fe20, 0x000fe40, indexKOFSprites_98Yashiro },
    { _T("D - Desperation Move / Super Desperation Move"), 0x000fe40, 0x000fe60, indexKOFSprites_98Yashiro },
    { _T("D - Electric Shock Effect"), 0x000fe60, 0x000fe80, indexKOFSprites_98Yashiro },
    { _T("D - Max Flash"), 0x000fe80, 0x000fea0, indexKOFSprites_98Yashiro },
    { _T("D - Hidden Super Desperation Move 2"), 0x000fea0, 0x000fec0, indexKOFSprites_98Yashiro },
    { _T("D - Soul Palette"), 0x000fec0, 0x000fee0, indexKOFSprites_98Yashiro },
    { _T("D - Hidden Super Desperation Move 3"), 0x000fee0, 0x000ff00, indexKOFSprites_98Yashiro },
};

const sDescTreeNode KOF02UM_S_YASHIRO_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_YASHIRO_PALETTES_A, ARRAYSIZE(KOF02UM_S_YASHIRO_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_YASHIRO_PALETTES_B, ARRAYSIZE(KOF02UM_S_YASHIRO_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_YASHIRO_PALETTES_C, ARRAYSIZE(KOF02UM_S_YASHIRO_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_YASHIRO_PALETTES_D, ARRAYSIZE(KOF02UM_S_YASHIRO_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_YASHIRO_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_YASHIRO_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_YASHIRO_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_YASHIRO_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_SHERMIE_PALETTES_A[] =
{
    { _T("Shermie A"), 0x0010000, 0x0010020, indexKOFSprites_98Shermie },
    { _T("A - Hidden Super Desperation Move 1"), 0x0010020, 0x0010040, indexKOFSprites_98Shermie },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0010040, 0x0010060, indexKOFSprites_98Shermie },
    { _T("A - Electric Shock Effect"), 0x0010060, 0x0010080, indexKOFSprites_98Shermie },
    { _T("A - Max Flash"), 0x0010080, 0x00100a0, indexKOFSprites_98Shermie },
    { _T("A - Hidden Super Desperation Move 2"), 0x00100a0, 0x00100c0, indexKOFSprites_98Shermie },
    { _T("A - Soul Palette"), 0x00100c0, 0x00100e0, indexKOFSprites_98Shermie },
    { _T("A - Hidden Super Desperation Move 3"), 0x00100e0, 0x0010100, indexKOFSprites_98Shermie },
};

const sGame_PaletteDataset KOF02UM_S_SHERMIE_PALETTES_B[] =
{
    { _T("Shermie B"), 0x0010200, 0x0010220, indexKOFSprites_98Shermie },
    { _T("B - Hidden Super Desperation Move 1"), 0x0010220, 0x0010240, indexKOFSprites_98Shermie },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0010240, 0x0010260, indexKOFSprites_98Shermie },
    { _T("B - Electric Shock Effect"), 0x0010260, 0x0010280, indexKOFSprites_98Shermie },
    { _T("B - Max Flash"), 0x0010280, 0x00102a0, indexKOFSprites_98Shermie },
    { _T("B - Hidden Super Desperation Move 2"), 0x00102a0, 0x00102c0, indexKOFSprites_98Shermie },
    { _T("B - Soul Palette"), 0x00102c0, 0x00102e0, indexKOFSprites_98Shermie },
    { _T("B - Hidden Super Desperation Move 3"), 0x00102e0, 0x0010300, indexKOFSprites_98Shermie },
};

const sGame_PaletteDataset KOF02UM_S_SHERMIE_PALETTES_C[] =
{
    { _T("Shermie C"), 0x0010400, 0x0010420, indexKOFSprites_98Shermie },
    { _T("C - Hidden Super Desperation Move 1"), 0x0010420, 0x0010440, indexKOFSprites_98Shermie },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0010440, 0x0010460, indexKOFSprites_98Shermie },
    { _T("C - Electric Shock Effect"), 0x0010460, 0x0010480, indexKOFSprites_98Shermie },
    { _T("C - Max Flash"), 0x0010480, 0x00104a0, indexKOFSprites_98Shermie },
    { _T("C - Hidden Super Desperation Move 2"), 0x00104a0, 0x00104c0, indexKOFSprites_98Shermie },
    { _T("C - Soul Palette"), 0x00104c0, 0x00104e0, indexKOFSprites_98Shermie },
    { _T("C - Hidden Super Desperation Move 3"), 0x00104e0, 0x0010500, indexKOFSprites_98Shermie },
};

const sGame_PaletteDataset KOF02UM_S_SHERMIE_PALETTES_D[] =
{
    { _T("Shermie D"), 0x0010600, 0x0010620, indexKOFSprites_98Shermie },
    { _T("D - Hidden Super Desperation Move 1"), 0x0010620, 0x0010640, indexKOFSprites_98Shermie },
    { _T("D - Desperation Move / Super Desperation Move"), 0x0010640, 0x0010660, indexKOFSprites_98Shermie },
    { _T("D - Electric Shock Effect"), 0x0010660, 0x0010680, indexKOFSprites_98Shermie },
    { _T("D - Max Flash"), 0x0010680, 0x00106a0, indexKOFSprites_98Shermie },
    { _T("D - Hidden Super Desperation Move 2"), 0x00106a0, 0x00106c0, indexKOFSprites_98Shermie },
    { _T("D - Soul Palette"), 0x00106c0, 0x00106e0, indexKOFSprites_98Shermie },
    { _T("D - Hidden Super Desperation Move 3"), 0x00106e0, 0x0010700, indexKOFSprites_98Shermie },
};

const sDescTreeNode KOF02UM_S_SHERMIE_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_SHERMIE_PALETTES_A, ARRAYSIZE(KOF02UM_S_SHERMIE_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_SHERMIE_PALETTES_B, ARRAYSIZE(KOF02UM_S_SHERMIE_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_SHERMIE_PALETTES_C, ARRAYSIZE(KOF02UM_S_SHERMIE_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_SHERMIE_PALETTES_D, ARRAYSIZE(KOF02UM_S_SHERMIE_PALETTES_D) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_SHERMIE_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_SHERMIE_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_CHRIS_PALETTES_A[] =
{
    { _T("Chris A"), 0x0010800, 0x0010820, indexKOFSprites_98Chris },
    { _T("A - Hidden Super Desperation Move 1"), 0x0010820, 0x0010840, indexKOFSprites_98Chris },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0010840, 0x0010860, indexKOFSprites_98Chris },
    { _T("A - Electric Shock Effect"), 0x0010860, 0x0010880, indexKOFSprites_98Chris },
    { _T("A - Max Flash"), 0x0010880, 0x00108a0, indexKOFSprites_98Chris },
    { _T("A - Hidden Super Desperation Move 2"), 0x00108a0, 0x00108c0, indexKOFSprites_98Chris },
    { _T("A - Soul Palette"), 0x00108c0, 0x00108e0, indexKOFSprites_98Chris },
    { _T("A - Hidden Super Desperation Move 3"), 0x00108e0, 0x0010900, indexKOFSprites_98Chris },
};

const sGame_PaletteDataset KOF02UM_S_CHRIS_PALETTES_B[] =
{
    { _T("Chris B"), 0x0010a00, 0x0010a20, indexKOFSprites_98Chris },
    { _T("B - Hidden Super Desperation Move 1"), 0x0010a20, 0x0010a40, indexKOFSprites_98Chris },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0010a40, 0x0010a60, indexKOFSprites_98Chris },
    { _T("B - Electric Shock Effect"), 0x0010a60, 0x0010a80, indexKOFSprites_98Chris },
    { _T("B - Max Flash"), 0x0010a80, 0x0010aa0, indexKOFSprites_98Chris },
    { _T("B - Hidden Super Desperation Move 2"), 0x0010aa0, 0x0010ac0, indexKOFSprites_98Chris },
    { _T("B - Soul Palette"), 0x0010ac0, 0x0010ae0, indexKOFSprites_98Chris },
    { _T("B - Hidden Super Desperation Move 3"), 0x0010ae0, 0x0010b00, indexKOFSprites_98Chris },
};

const sGame_PaletteDataset KOF02UM_S_CHRIS_PALETTES_C[] =
{
    { _T("Chris C"), 0x0010c00, 0x0010c20, indexKOFSprites_98Chris },
    { _T("C - Hidden Super Desperation Move 1"), 0x0010c20, 0x0010c40, indexKOFSprites_98Chris },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0010c40, 0x0010c60, indexKOFSprites_98Chris },
    { _T("C - Electric Shock Effect"), 0x0010c60, 0x0010c80, indexKOFSprites_98Chris },
    { _T("C - Max Flash"), 0x0010c80, 0x0010ca0, indexKOFSprites_98Chris },
    { _T("C - Hidden Super Desperation Move 2"), 0x0010ca0, 0x0010cc0, indexKOFSprites_98Chris },
    { _T("C - Soul Palette"), 0x0010cc0, 0x0010ce0, indexKOFSprites_98Chris },
    { _T("C - Hidden Super Desperation Move 3"), 0x0010ce0, 0x0010d00, indexKOFSprites_98Chris },
};

const sGame_PaletteDataset KOF02UM_S_CHRIS_PALETTES_D[] =
{
    { _T("Chris D"), 0x0010e00, 0x0010e20, indexKOFSprites_98Chris },
    { _T("D - Hidden Super Desperation Move 1"), 0x0010e20, 0x0010e40, indexKOFSprites_98Chris },
    { _T("D - Desperation Move / Super Desperation Move"), 0x0010e40, 0x0010e60, indexKOFSprites_98Chris },
    { _T("D - Electric Shock Effect"), 0x0010e60, 0x0010e80, indexKOFSprites_98Chris },
    { _T("D - Max Flash"), 0x0010e80, 0x0010ea0, indexKOFSprites_98Chris },
    { _T("D - Hidden Super Desperation Move 2"), 0x0010ea0, 0x0010ec0, indexKOFSprites_98Chris },
    { _T("D - Soul Palette"), 0x0010ec0, 0x0010ee0, indexKOFSprites_98Chris },
    { _T("D - Hidden Super Desperation Move 3"), 0x0010ee0, 0x0010f00, indexKOFSprites_98Chris },
};

const sDescTreeNode KOF02UM_S_CHRIS_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHRIS_PALETTES_A, ARRAYSIZE(KOF02UM_S_CHRIS_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHRIS_PALETTES_B, ARRAYSIZE(KOF02UM_S_CHRIS_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHRIS_PALETTES_C, ARRAYSIZE(KOF02UM_S_CHRIS_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHRIS_PALETTES_D, ARRAYSIZE(KOF02UM_S_CHRIS_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHRIS_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_CHRIS_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHRIS_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_CHRIS_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_K_PALETTES_A[] =
{
    { _T("K� A"), 0x0011000, 0x0011020, indexKOFSprites_02K },
    { _T("A - Diana Intro Stuff"), 0x0011020, 0x0011040, indexKOFSprites_02K },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0011040, 0x0011060, indexKOFSprites_02K },
    { _T("A - Electric Shock Effect"), 0x0011060, 0x0011080, indexKOFSprites_02K },
    { _T("A - Max Flash"), 0x0011080, 0x00110a0, indexKOFSprites_02K },
    { _T("A - Hidden Super Desperation Move 2"), 0x00110a0, 0x00110c0, indexKOFSprites_02K },
    { _T("A - Soul Palette"), 0x00110c0, 0x00110e0, indexKOFSprites_02K },
    { _T("A - Hidden Super Desperation Move 3"), 0x00110e0, 0x0011100, indexKOFSprites_02K },
};

const sGame_PaletteDataset KOF02UM_S_K_PALETTES_B[] =
{
    { _T("K� B"), 0x0011200, 0x0011220, indexKOFSprites_02K },
    { _T("B - Diana Intro Stuff"), 0x0011220, 0x0011240, indexKOFSprites_02K },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0011240, 0x0011260, indexKOFSprites_02K },
    { _T("B - Electric Shock Effect"), 0x0011260, 0x0011280, indexKOFSprites_02K },
    { _T("B - Max Flash"), 0x0011280, 0x00112a0, indexKOFSprites_02K },
    { _T("B - Hidden Super Desperation Move 2"), 0x00112a0, 0x00112c0, indexKOFSprites_02K },
    { _T("B - Soul Palette"), 0x00112c0, 0x00112e0, indexKOFSprites_02K },
    { _T("B - Hidden Super Desperation Move 3"), 0x00112e0, 0x0011300, indexKOFSprites_02K },
};

const sGame_PaletteDataset KOF02UM_S_K_PALETTES_C[] =
{
    { _T("K� C"), 0x0011400, 0x0011420, indexKOFSprites_02K },
    { _T("C - Diana Intro Stuff"), 0x0011420, 0x0011440, indexKOFSprites_02K },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0011440, 0x0011460, indexKOFSprites_02K },
    { _T("C - Electric Shock Effect"), 0x0011460, 0x0011480, indexKOFSprites_02K },
    { _T("C - Max Flash"), 0x0011480, 0x00114a0, indexKOFSprites_02K },
    { _T("C - Hidden Super Desperation Move 2"), 0x00114a0, 0x00114c0, indexKOFSprites_02K },
    { _T("C - Soul Palette"), 0x00114c0, 0x00114e0, indexKOFSprites_02K },
    { _T("C - Hidden Super Desperation Move 3"), 0x00114e0, 0x0011500, indexKOFSprites_02K },
};

const sGame_PaletteDataset KOF02UM_S_K_PALETTES_D[] =
{
    { _T("K� D"), 0x0011600, 0x0011620, indexKOFSprites_02K },
    { _T("D - Diana Intro Stuff"), 0x0011620, 0x0011640, indexKOFSprites_02K },
    { _T("D - Desperation Move / Super Desperation Move"), 0x0011640, 0x0011660, indexKOFSprites_02K },
    { _T("D - Electric Shock Effect"), 0x0011660, 0x0011680, indexKOFSprites_02K },
    { _T("D - Max Flash"), 0x0011680, 0x00116a0, indexKOFSprites_02K },
    { _T("D - Hidden Super Desperation Move 2"), 0x00116a0, 0x00116c0, indexKOFSprites_02K },
    { _T("D - Soul Palette"), 0x00116c0, 0x00116e0, indexKOFSprites_02K },
    { _T("D - Hidden Super Desperation Move 3"), 0x00116e0, 0x0011700, indexKOFSprites_02K },
};

const sDescTreeNode KOF02UM_S_K_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_K_PALETTES_A, ARRAYSIZE(KOF02UM_S_K_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_K_PALETTES_B, ARRAYSIZE(KOF02UM_S_K_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_K_PALETTES_C, ARRAYSIZE(KOF02UM_S_K_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_K_PALETTES_D, ARRAYSIZE(KOF02UM_S_K_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_K_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_K_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_K_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_K_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_MAXIMA_PALETTES_A[] =
{
    { _T("Maxima A"), 0x0011800, 0x0011820, indexKOFSprites_02Maxima },
    { _T("A - Hidden Super Desperation Move 1"), 0x0011820, 0x0011840, indexKOFSprites_02Maxima },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0011840, 0x0011860, indexKOFSprites_02Maxima },
    { _T("A - Electric Shock Effect"), 0x0011860, 0x0011880, indexKOFSprites_02Maxima },
    { _T("A - Max Flash"), 0x0011880, 0x00118a0, indexKOFSprites_02Maxima },
    { _T("A - Hidden Super Desperation Move 2"), 0x00118a0, 0x00118c0, indexKOFSprites_02Maxima },
    { _T("A - Soul Palette"), 0x00118c0, 0x00118e0, indexKOFSprites_02Maxima },
    { _T("A - Hidden Super Desperation Move 3"), 0x00118e0, 0x0011900, indexKOFSprites_02Maxima },
};

const sGame_PaletteDataset KOF02UM_S_MAXIMA_PALETTES_B[] =
{
    { _T("Maxima B"), 0x0011a00, 0x0011a20, indexKOFSprites_02Maxima },
    { _T("B - Hidden Super Desperation Move 1"), 0x0011a20, 0x0011a40, indexKOFSprites_02Maxima },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0011a40, 0x0011a60, indexKOFSprites_02Maxima },
    { _T("B - Electric Shock Effect"), 0x0011a60, 0x0011a80, indexKOFSprites_02Maxima },
    { _T("B - Max Flash"), 0x0011a80, 0x0011aa0, indexKOFSprites_02Maxima },
    { _T("B - Hidden Super Desperation Move 2"), 0x0011aa0, 0x0011ac0, indexKOFSprites_02Maxima },
    { _T("B - Soul Palette"), 0x0011ac0, 0x0011ae0, indexKOFSprites_02Maxima },
    { _T("B - Hidden Super Desperation Move 3"), 0x0011ae0, 0x0011b00, indexKOFSprites_02Maxima },
};

const sGame_PaletteDataset KOF02UM_S_MAXIMA_PALETTES_C[] =
{
    { _T("Maxima C"), 0x0011c00, 0x0011c20, indexKOFSprites_02Maxima },
    { _T("C - Hidden Super Desperation Move 1"), 0x0011c20, 0x0011c40, indexKOFSprites_02Maxima },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0011c40, 0x0011c60, indexKOFSprites_02Maxima },
    { _T("C - Electric Shock Effect"), 0x0011c60, 0x0011c80, indexKOFSprites_02Maxima },
    { _T("C - Max Flash"), 0x0011c80, 0x0011ca0, indexKOFSprites_02Maxima },
    { _T("C - Hidden Super Desperation Move 2"), 0x0011ca0, 0x0011cc0, indexKOFSprites_02Maxima },
    { _T("C - Soul Palette"), 0x0011cc0, 0x0011ce0, indexKOFSprites_02Maxima },
    { _T("C - Hidden Super Desperation Move 3"), 0x0011ce0, 0x0011d00, indexKOFSprites_02Maxima },
};

const sGame_PaletteDataset KOF02UM_S_MAXIMA_PALETTES_D[] =
{
    { _T("Maxima D"), 0x0011e00, 0x0011e20, indexKOFSprites_02Maxima },
    { _T("D - Hidden Super Desperation Move 1"), 0x0011e20, 0x0011e40, indexKOFSprites_02Maxima },
    { _T("D - Desperation Move / Super Desperation Move"), 0x0011e40, 0x0011e60, indexKOFSprites_02Maxima },
    { _T("D - Electric Shock Effect"), 0x0011e60, 0x0011e80, indexKOFSprites_02Maxima },
    { _T("D - Max Flash"), 0x0011e80, 0x0011ea0, indexKOFSprites_02Maxima },
    { _T("D - Hidden Super Desperation Move 2"), 0x0011ea0, 0x0011ec0, indexKOFSprites_02Maxima },
    { _T("D - Soul Palette"), 0x0011ec0, 0x0011ee0, indexKOFSprites_02Maxima },
    { _T("D - Hidden Super Desperation Move 3"), 0x0011ee0, 0x0011f00, indexKOFSprites_02Maxima },
};

const sDescTreeNode KOF02UM_S_MAXIMA_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAXIMA_PALETTES_A, ARRAYSIZE(KOF02UM_S_MAXIMA_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAXIMA_PALETTES_B, ARRAYSIZE(KOF02UM_S_MAXIMA_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAXIMA_PALETTES_C, ARRAYSIZE(KOF02UM_S_MAXIMA_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAXIMA_PALETTES_D, ARRAYSIZE(KOF02UM_S_MAXIMA_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAXIMA_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_MAXIMA_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAXIMA_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_MAXIMA_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_WHIP_PALETTES_A[] =
{
    { _T("Whip A"), 0x0012000, 0x0012020, indexKOFSprites_02Whip },
    { _T("A - Hidden Super Desperation Move 1"), 0x0012020, 0x0012040, indexKOFSprites_02Whip },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0012040, 0x0012060, indexKOFSprites_02Whip },
    { _T("A - Electric Shock Effect"), 0x0012060, 0x0012080, indexKOFSprites_02Whip },
    { _T("A - Max Flash"), 0x0012080, 0x00120a0, indexKOFSprites_02Whip },
    { _T("A - Hidden Super Desperation Move 2"), 0x00120a0, 0x00120c0, indexKOFSprites_02Whip },
    { _T("A - Soul Palette"), 0x00120c0, 0x00120e0, indexKOFSprites_02Whip },
    { _T("A - Hidden Super Desperation Move 3"), 0x00120e0, 0x0012100, indexKOFSprites_02Whip },
};

const sGame_PaletteDataset KOF02UM_S_WHIP_PALETTES_B[] =
{
    { _T("Whip B"), 0x0012200, 0x0012220, indexKOFSprites_02Whip },
    { _T("B - Hidden Super Desperation Move 1"), 0x0012220, 0x0012240, indexKOFSprites_02Whip },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0012240, 0x0012260, indexKOFSprites_02Whip },
    { _T("B - Electric Shock Effect"), 0x0012260, 0x0012280, indexKOFSprites_02Whip },
    { _T("B - Max Flash"), 0x0012280, 0x00122a0, indexKOFSprites_02Whip },
    { _T("B - Hidden Super Desperation Move 2"), 0x00122a0, 0x00122c0, indexKOFSprites_02Whip },
    { _T("B - Soul Palette"), 0x00122c0, 0x00122e0, indexKOFSprites_02Whip },
    { _T("B - Hidden Super Desperation Move 3"), 0x00122e0, 0x0012300, indexKOFSprites_02Whip },
};

const sGame_PaletteDataset KOF02UM_S_WHIP_PALETTES_C[] =
{
    { _T("Whip C"), 0x0012400, 0x0012420, indexKOFSprites_02Whip },
    { _T("C - Hidden Super Desperation Move 1"), 0x0012420, 0x0012440, indexKOFSprites_02Whip },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0012440, 0x0012460, indexKOFSprites_02Whip },
    { _T("C - Electric Shock Effect"), 0x0012460, 0x0012480, indexKOFSprites_02Whip },
    { _T("C - Max Flash"), 0x0012480, 0x00124a0, indexKOFSprites_02Whip },
    { _T("C - Hidden Super Desperation Move 2"), 0x00124a0, 0x00124c0, indexKOFSprites_02Whip },
    { _T("C - Soul Palette"), 0x00124c0, 0x00124e0, indexKOFSprites_02Whip },
    { _T("C - Hidden Super Desperation Move 3"), 0x00124e0, 0x0012500, indexKOFSprites_02Whip },
};

const sGame_PaletteDataset KOF02UM_S_WHIP_PALETTES_D[] =
{
    { _T("Whip D"), 0x0012600, 0x0012620, indexKOFSprites_02Whip },
    { _T("D - Hidden Super Desperation Move 1"), 0x0012620, 0x0012640, indexKOFSprites_02Whip },
    { _T("D - Desperation Move / Super Desperation Move"), 0x0012640, 0x0012660, indexKOFSprites_02Whip },
    { _T("D - Electric Shock Effect"), 0x0012660, 0x0012680, indexKOFSprites_02Whip },
    { _T("D - Max Flash"), 0x0012680, 0x00126a0, indexKOFSprites_02Whip },
    { _T("D - Hidden Super Desperation Move 2"), 0x00126a0, 0x00126c0, indexKOFSprites_02Whip },
    { _T("D - Soul Palette"), 0x00126c0, 0x00126e0, indexKOFSprites_02Whip },
    { _T("D - Hidden Super Desperation Move 3"), 0x00126e0, 0x0012700, indexKOFSprites_02Whip },
};

const sDescTreeNode KOF02UM_S_WHIP_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_WHIP_PALETTES_A, ARRAYSIZE(KOF02UM_S_WHIP_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_WHIP_PALETTES_B, ARRAYSIZE(KOF02UM_S_WHIP_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_WHIP_PALETTES_C, ARRAYSIZE(KOF02UM_S_WHIP_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_WHIP_PALETTES_D, ARRAYSIZE(KOF02UM_S_WHIP_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_WHIP_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_WHIP_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_WHIP_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_WHIP_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_VANESSA_PALETTES_A[] =
{
    { _T("Vanessa A"), 0x0012800, 0x0012820, indexKOFSprites_02Vanessa },
    { _T("A - Hidden Super Desperation Move 1"), 0x0012820, 0x0012840, indexKOFSprites_02Vanessa },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0012840, 0x0012860, indexKOFSprites_02Vanessa },
    { _T("A - Electric Shock Effect"), 0x0012860, 0x0012880, indexKOFSprites_02Vanessa },
    { _T("A - Max Flash"), 0x0012880, 0x00128a0, indexKOFSprites_02Vanessa },
    { _T("A - Hidden Super Desperation Move 2"), 0x00128a0, 0x00128c0, indexKOFSprites_02Vanessa },
    { _T("A - Soul Palette"), 0x00128c0, 0x00128e0, indexKOFSprites_02Vanessa },
    { _T("A - Hidden Super Desperation Move 3"), 0x00128e0, 0x0012900, indexKOFSprites_02Vanessa },
};

const sGame_PaletteDataset KOF02UM_S_VANESSA_PALETTES_B[] =
{
    { _T("Vanessa B"), 0x0012a00, 0x0012a20, indexKOFSprites_02Vanessa },
    { _T("B - Hidden Super Desperation Move 1"), 0x0012a20, 0x0012a40, indexKOFSprites_02Vanessa },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0012a40, 0x0012a60, indexKOFSprites_02Vanessa },
    { _T("B - Electric Shock Effect"), 0x0012a60, 0x0012a80, indexKOFSprites_02Vanessa },
    { _T("B - Max Flash"), 0x0012a80, 0x0012aa0, indexKOFSprites_02Vanessa },
    { _T("B - Hidden Super Desperation Move 2"), 0x0012aa0, 0x0012ac0, indexKOFSprites_02Vanessa },
    { _T("B - Soul Palette"), 0x0012ac0, 0x0012ae0, indexKOFSprites_02Vanessa },
    { _T("B - Hidden Super Desperation Move 3"), 0x0012ae0, 0x0012b00, indexKOFSprites_02Vanessa },
};

const sGame_PaletteDataset KOF02UM_S_VANESSA_PALETTES_C[] =
{
    { _T("Vanessa C"), 0x0012c00, 0x0012c20, indexKOFSprites_02Vanessa },
    { _T("C - Hidden Super Desperation Move 1"), 0x0012c20, 0x0012c40, indexKOFSprites_02Vanessa },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0012c40, 0x0012c60, indexKOFSprites_02Vanessa },
    { _T("C - Electric Shock Effect"), 0x0012c60, 0x0012c80, indexKOFSprites_02Vanessa },
    { _T("C - Max Flash"), 0x0012c80, 0x0012ca0, indexKOFSprites_02Vanessa },
    { _T("C - Hidden Super Desperation Move 2"), 0x0012ca0, 0x0012cc0, indexKOFSprites_02Vanessa },
    { _T("C - Soul Palette"), 0x0012cc0, 0x0012ce0, indexKOFSprites_02Vanessa },
    { _T("C - Hidden Super Desperation Move 3"), 0x0012ce0, 0x0012d00, indexKOFSprites_02Vanessa },
};

const sGame_PaletteDataset KOF02UM_S_VANESSA_PALETTES_D[] =
{
    { _T("Vanessa D"), 0x0012e00, 0x0012e20, indexKOFSprites_02Vanessa },
    { _T("D - Hidden Super Desperation Move 1"), 0x0012e20, 0x0012e40, indexKOFSprites_02Vanessa },
    { _T("D - Desperation Move / Super Desperation Move"), 0x0012e40, 0x0012e60, indexKOFSprites_02Vanessa },
    { _T("D - Electric Shock Effect"), 0x0012e60, 0x0012e80, indexKOFSprites_02Vanessa },
    { _T("D - Max Flash"), 0x0012e80, 0x0012ea0, indexKOFSprites_02Vanessa },
    { _T("D - Hidden Super Desperation Move 2"), 0x0012ea0, 0x0012ec0, indexKOFSprites_02Vanessa },
    { _T("D - Soul Palette"), 0x0012ec0, 0x0012ee0, indexKOFSprites_02Vanessa },
    { _T("D - Hidden Super Desperation Move 3"), 0x0012ee0, 0x0012f00, indexKOFSprites_02Vanessa },
};

const sDescTreeNode KOF02UM_S_VANESSA_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_VANESSA_PALETTES_A, ARRAYSIZE(KOF02UM_S_VANESSA_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_VANESSA_PALETTES_B, ARRAYSIZE(KOF02UM_S_VANESSA_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_VANESSA_PALETTES_C, ARRAYSIZE(KOF02UM_S_VANESSA_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_VANESSA_PALETTES_D, ARRAYSIZE(KOF02UM_S_VANESSA_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_VANESSA_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_VANESSA_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_VANESSA_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_VANESSA_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_SETH_PALETTES_A[] =
{
    { _T("Seth A"), 0x0013000, 0x0013020, indexKOFSprites_02Seth },
    { _T("A - Hidden Super Desperation Move 1"), 0x0013020, 0x0013040, indexKOFSprites_02Seth },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0013040, 0x0013060, indexKOFSprites_02Seth },
    { _T("A - Electric Shock Effect"), 0x0013060, 0x0013080, indexKOFSprites_02Seth },
    { _T("A - Max Flash"), 0x0013080, 0x00130a0, indexKOFSprites_02Seth },
    { _T("A - Hidden Super Desperation Move 2"), 0x00130a0, 0x00130c0, indexKOFSprites_02Seth },
    { _T("A - Soul Palette"), 0x00130c0, 0x00130e0, indexKOFSprites_02Seth },
    { _T("A - Hidden Super Desperation Move 3"), 0x00130e0, 0x0013100, indexKOFSprites_02Seth },
};

const sGame_PaletteDataset KOF02UM_S_SETH_PALETTES_B[] =
{
    { _T("Seth B"), 0x0013200, 0x0013220, indexKOFSprites_02Seth },
    { _T("B - Hidden Super Desperation Move 1"), 0x0013220, 0x0013240, indexKOFSprites_02Seth },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0013240, 0x0013260, indexKOFSprites_02Seth },
    { _T("B - Electric Shock Effect"), 0x0013260, 0x0013280, indexKOFSprites_02Seth },
    { _T("B - Max Flash"), 0x0013280, 0x00132a0, indexKOFSprites_02Seth },
    { _T("B - Hidden Super Desperation Move 2"), 0x00132a0, 0x00132c0, indexKOFSprites_02Seth },
    { _T("B - Soul Palette"), 0x00132c0, 0x00132e0, indexKOFSprites_02Seth },
    { _T("B - Hidden Super Desperation Move 3"), 0x00132e0, 0x0013300, indexKOFSprites_02Seth },
};

const sGame_PaletteDataset KOF02UM_S_SETH_PALETTES_C[] =
{
    { _T("Seth C"), 0x0013400, 0x0013420, indexKOFSprites_02Seth },
    { _T("C - Hidden Super Desperation Move 1"), 0x0013420, 0x0013440, indexKOFSprites_02Seth },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0013440, 0x0013460, indexKOFSprites_02Seth },
    { _T("C - Electric Shock Effect"), 0x0013460, 0x0013480, indexKOFSprites_02Seth },
    { _T("C - Max Flash"), 0x0013480, 0x00134a0, indexKOFSprites_02Seth },
    { _T("C - Hidden Super Desperation Move 2"), 0x00134a0, 0x00134c0, indexKOFSprites_02Seth },
    { _T("C - Soul Palette"), 0x00134c0, 0x00134e0, indexKOFSprites_02Seth },
    { _T("C - Hidden Super Desperation Move 3"), 0x00134e0, 0x0013500, indexKOFSprites_02Seth },
};

const sGame_PaletteDataset KOF02UM_S_SETH_PALETTES_D[] =
{
    { _T("Seth D"), 0x0013600, 0x0013620, indexKOFSprites_02Seth },
    { _T("D - Hidden Super Desperation Move 1"), 0x0013620, 0x0013640, indexKOFSprites_02Seth },
    { _T("D - Desperation Move / Super Desperation Move"), 0x0013640, 0x0013660, indexKOFSprites_02Seth },
    { _T("D - Electric Shock Effect"), 0x0013660, 0x0013680, indexKOFSprites_02Seth },
    { _T("D - Max Flash"), 0x0013680, 0x00136a0, indexKOFSprites_02Seth },
    { _T("D - Hidden Super Desperation Move 2"), 0x00136a0, 0x00136c0, indexKOFSprites_02Seth },
    { _T("D - Soul Palette"), 0x00136c0, 0x00136e0, indexKOFSprites_02Seth },
    { _T("D - Hidden Super Desperation Move 3"), 0x00136e0, 0x0013700, indexKOFSprites_02Seth },
};

const sDescTreeNode KOF02UM_S_SETH_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_SETH_PALETTES_A, ARRAYSIZE(KOF02UM_S_SETH_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_SETH_PALETTES_B, ARRAYSIZE(KOF02UM_S_SETH_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_SETH_PALETTES_C, ARRAYSIZE(KOF02UM_S_SETH_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_SETH_PALETTES_D, ARRAYSIZE(KOF02UM_S_SETH_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_SETH_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_SETH_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_SETH_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_SETH_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_RAMON_PALETTES_A[] =
{
    { _T("Ramon A"), 0x0013800, 0x0013820, indexKOFSprites_02Ramon },
    { _T("A - Hidden Super Desperation Move 1"), 0x0013820, 0x0013840, indexKOFSprites_02Ramon },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0013840, 0x0013860, indexKOFSprites_02Ramon },
    { _T("A - Electric Shock Effect"), 0x0013860, 0x0013880, indexKOFSprites_02Ramon },
    { _T("A - Max Flash"), 0x0013880, 0x00138a0, indexKOFSprites_02Ramon },
    { _T("A - Hidden Super Desperation Move 2"), 0x00138a0, 0x00138c0, indexKOFSprites_02Ramon },
    { _T("A - Soul Palette"), 0x00138c0, 0x00138e0, indexKOFSprites_02Ramon },
    { _T("A - Hidden Super Desperation Move 3"), 0x00138e0, 0x0013900, indexKOFSprites_02Ramon },
};

const sGame_PaletteDataset KOF02UM_S_RAMON_PALETTES_B[] =
{
    { _T("Ramon B"), 0x0013a00, 0x0013a20, indexKOFSprites_02Ramon },
    { _T("B - Hidden Super Desperation Move 1"), 0x0013a20, 0x0013a40, indexKOFSprites_02Ramon },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0013a40, 0x0013a60, indexKOFSprites_02Ramon },
    { _T("B - Electric Shock Effect"), 0x0013a60, 0x0013a80, indexKOFSprites_02Ramon },
    { _T("B - Max Flash"), 0x0013a80, 0x0013aa0, indexKOFSprites_02Ramon },
    { _T("B - Hidden Super Desperation Move 2"), 0x0013aa0, 0x0013ac0, indexKOFSprites_02Ramon },
    { _T("B - Soul Palette"), 0x0013ac0, 0x0013ae0, indexKOFSprites_02Ramon },
    { _T("B - Hidden Super Desperation Move 3"), 0x0013ae0, 0x0013b00, indexKOFSprites_02Ramon },
};

const sGame_PaletteDataset KOF02UM_S_RAMON_PALETTES_C[] =
{
    { _T("Ramon C"), 0x0013c00, 0x0013c20, indexKOFSprites_02Ramon },
    { _T("C - Hidden Super Desperation Move 1"), 0x0013c20, 0x0013c40, indexKOFSprites_02Ramon },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0013c40, 0x0013c60, indexKOFSprites_02Ramon },
    { _T("C - Electric Shock Effect"), 0x0013c60, 0x0013c80, indexKOFSprites_02Ramon },
    { _T("C - Max Flash"), 0x0013c80, 0x0013ca0, indexKOFSprites_02Ramon },
    { _T("C - Hidden Super Desperation Move 2"), 0x0013ca0, 0x0013cc0, indexKOFSprites_02Ramon },
    { _T("C - Soul Palette"), 0x0013cc0, 0x0013ce0, indexKOFSprites_02Ramon },
    { _T("C - Hidden Super Desperation Move 3"), 0x0013ce0, 0x0013d00, indexKOFSprites_02Ramon },
};

const sGame_PaletteDataset KOF02UM_S_RAMON_PALETTES_D[] =
{
    { _T("Ramon D"), 0x0013e00, 0x0013e20, indexKOFSprites_02Ramon },
    { _T("D - Hidden Super Desperation Move 1"), 0x0013e20, 0x0013e40, indexKOFSprites_02Ramon },
    { _T("D - Desperation Move / Super Desperation Move"), 0x0013e40, 0x0013e60, indexKOFSprites_02Ramon },
    { _T("D - Electric Shock Effect"), 0x0013e60, 0x0013e80, indexKOFSprites_02Ramon },
    { _T("D - Max Flash"), 0x0013e80, 0x0013ea0, indexKOFSprites_02Ramon },
    { _T("D - Hidden Super Desperation Move 2"), 0x0013ea0, 0x0013ec0, indexKOFSprites_02Ramon },
    { _T("D - Soul Palette"), 0x0013ec0, 0x0013ee0, indexKOFSprites_02Ramon },
    { _T("D - Hidden Super Desperation Move 3"), 0x0013ee0, 0x0013f00, indexKOFSprites_02Ramon },
};

const sDescTreeNode KOF02UM_S_RAMON_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_RAMON_PALETTES_A, ARRAYSIZE(KOF02UM_S_RAMON_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_RAMON_PALETTES_B, ARRAYSIZE(KOF02UM_S_RAMON_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_RAMON_PALETTES_C, ARRAYSIZE(KOF02UM_S_RAMON_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_RAMON_PALETTES_D, ARRAYSIZE(KOF02UM_S_RAMON_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_RAMON_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_RAMON_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_RAMON_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_RAMON_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_KULA_PALETTES_A[] =
{
    { _T("Kula A"), 0x0014000, 0x0014020, indexKOFSprites_02Kula },
    { _T("A - Diana Stuff"), 0x0014020, 0x0014040, indexKOFSprites_02Kula },
    { _T("A - Foxy Stuff"), 0x0014040, 0x0014060, indexKOFSprites_02Kula },
    { _T("A - Electric Shock Effect"), 0x0014060, 0x0014080, indexKOFSprites_02Kula },
    { _T("A - Max Flash"), 0x0014080, 0x00140a0, indexKOFSprites_02Kula },
    { _T("A - Hidden Super Desperation Move 2"), 0x00140a0, 0x00140c0, indexKOFSprites_02Kula },
    { _T("A - Soul Palette"), 0x00140c0, 0x00140e0, indexKOFSprites_02Kula },
    { _T("A - Ice Attack"), 0x00140e0, 0x0014100, indexKOFSprites_02Kula },
};

const sGame_PaletteDataset KOF02UM_S_KULA_PALETTES_B[] =
{
    { _T("Kula B"), 0x0014200, 0x0014220, indexKOFSprites_02Kula },
    { _T("B - Diana Stuff"), 0x0014220, 0x0014240, indexKOFSprites_02Kula },
    { _T("B - Foxy Stuff"), 0x0014240, 0x0014260, indexKOFSprites_02Kula },
    { _T("B - Electric Shock Effect"), 0x0014260, 0x0014280, indexKOFSprites_02Kula },
    { _T("B - Max Flash"), 0x0014280, 0x00142a0, indexKOFSprites_02Kula },
    { _T("B - Hidden Super Desperation Move 2"), 0x00142a0, 0x00142c0, indexKOFSprites_02Kula },
    { _T("B - Soul Palette"), 0x00142c0, 0x00142e0, indexKOFSprites_02Kula },
    { _T("B - Ice Attack"), 0x00142e0, 0x0014300, indexKOFSprites_02Kula },
};

const sGame_PaletteDataset KOF02UM_S_KULA_PALETTES_C[] =
{
    { _T("Kula C"), 0x0014400, 0x0014420, indexKOFSprites_02Kula },
    { _T("C - Diana Stuff"), 0x0014420, 0x0014440, indexKOFSprites_02Kula },
    { _T("C - Foxy Stuff"), 0x0014440, 0x0014460, indexKOFSprites_02Kula },
    { _T("C - Electric Shock Effect"), 0x0014460, 0x0014480, indexKOFSprites_02Kula },
    { _T("C - Max Flash"), 0x0014480, 0x00144a0, indexKOFSprites_02Kula },
    { _T("C - Hidden Super Desperation Move 2"), 0x00144a0, 0x00144c0, indexKOFSprites_02Kula },
    { _T("C - Soul Palette"), 0x00144c0, 0x00144e0, indexKOFSprites_02Kula },
    { _T("C - Ice Attack"), 0x00144e0, 0x0014500, indexKOFSprites_02Kula },
};

const sGame_PaletteDataset KOF02UM_S_KULA_PALETTES_D[] =
{
    { _T("Kula D"), 0x0014600, 0x0014620, indexKOFSprites_02Kula },
    { _T("D - Diana Stuff"), 0x0014620, 0x0014640, indexKOFSprites_02Kula },
    { _T("D - Foxy Stuff"), 0x0014640, 0x0014660, indexKOFSprites_02Kula },
    { _T("D - Electric Shock Effect"), 0x0014660, 0x0014680, indexKOFSprites_02Kula },
    { _T("D - Max Flash"), 0x0014680, 0x00146a0, indexKOFSprites_02Kula },
    { _T("D - Hidden Super Desperation Move 2"), 0x00146a0, 0x00146c0, indexKOFSprites_02Kula },
    { _T("D - Soul Palette"), 0x00146c0, 0x00146e0, indexKOFSprites_02Kula },
    { _T("D - Ice Attack"), 0x00146e0, 0x0014700, indexKOFSprites_02Kula },
};

const sDescTreeNode KOF02UM_S_KULA_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KULA_PALETTES_A, ARRAYSIZE(KOF02UM_S_KULA_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KULA_PALETTES_B, ARRAYSIZE(KOF02UM_S_KULA_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KULA_PALETTES_C, ARRAYSIZE(KOF02UM_S_KULA_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KULA_PALETTES_D, ARRAYSIZE(KOF02UM_S_KULA_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KULA_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_KULA_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KULA_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_KULA_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_NAMELESS_PALETTES_A[] =
{
    { _T("Nameless A"), 0x0014800, 0x0014820, indexKOFSprites_02Nameless },
    { _T("A - SDM Fire"), 0x0014820, 0x0014840, indexKOFSprites_02Nameless },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0014840, 0x0014860, indexKOFSprites_02Nameless },
    { _T("A - Electric Shock Effect"), 0x0014860, 0x0014880, indexKOFSprites_02Nameless },
    { _T("A - Max Flash"), 0x0014880, 0x00148a0, indexKOFSprites_02Nameless },
    { _T("A - Hidden Super Desperation Move 2"), 0x00148a0, 0x00148c0, indexKOFSprites_02Nameless },
    { _T("A - Soul Palette"), 0x00148c0, 0x00148e0, indexKOFSprites_02Nameless },
    { _T("A - MAX Super Drill"), 0x00148e0, 0x0014900, indexKOFSprites_02Nameless },
};

const sGame_PaletteDataset KOF02UM_S_NAMELESS_PALETTES_B[] =
{
    { _T("Nameless B"), 0x0014a00, 0x0014a20, indexKOFSprites_02Nameless },
    { _T("B - SDM Fire"), 0x0014a20, 0x0014a40, indexKOFSprites_02Nameless },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0014a40, 0x0014a60, indexKOFSprites_02Nameless },
    { _T("B - Electric Shock Effect"), 0x0014a60, 0x0014a80, indexKOFSprites_02Nameless },
    { _T("B - Max Flash"), 0x0014a80, 0x0014aa0, indexKOFSprites_02Nameless },
    { _T("B - Hidden Super Desperation Move 2"), 0x0014aa0, 0x0014ac0, indexKOFSprites_02Nameless },
    { _T("B - Soul Palette"), 0x0014ac0, 0x0014ae0, indexKOFSprites_02Nameless },
    { _T("B - MAX Super Drill"), 0x0014ae0, 0x0014b00, indexKOFSprites_02Nameless },
};

const sGame_PaletteDataset KOF02UM_S_NAMELESS_PALETTES_C[] =
{
    { _T("Nameless C"), 0x0014c00, 0x0014c20, indexKOFSprites_02Nameless },
    { _T("C - SDM Fire"), 0x0014c20, 0x0014c40, indexKOFSprites_02Nameless },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0014c40, 0x0014c60, indexKOFSprites_02Nameless },
    { _T("C - Electric Shock Effect"), 0x0014c60, 0x0014c80, indexKOFSprites_02Nameless },
    { _T("C - Max Flash"), 0x0014c80, 0x0014ca0, indexKOFSprites_02Nameless },
    { _T("C - Hidden Super Desperation Move 2"), 0x0014ca0, 0x0014cc0, indexKOFSprites_02Nameless },
    { _T("C - Soul Palette"), 0x0014cc0, 0x0014ce0, indexKOFSprites_02Nameless },
    { _T("C - MAX Super Drill"), 0x0014ce0, 0x0014d00, indexKOFSprites_02Nameless },
};

const sGame_PaletteDataset KOF02UM_S_NAMELESS_PALETTES_D[] =
{
    { _T("Nameless D"), 0x0014e00, 0x0014e20, indexKOFSprites_02Nameless },
    { _T("D - SDM Fire"), 0x0014e20, 0x0014e40, indexKOFSprites_02Nameless },
    { _T("D - Desperation Move / Super Desperation Move"), 0x0014e40, 0x0014e60, indexKOFSprites_02Nameless },
    { _T("D - Electric Shock Effect"), 0x0014e60, 0x0014e80, indexKOFSprites_02Nameless },
    { _T("D - Max Flash"), 0x0014e80, 0x0014ea0, indexKOFSprites_02Nameless },
    { _T("D - Hidden Super Desperation Move 2"), 0x0014ea0, 0x0014ec0, indexKOFSprites_02Nameless },
    { _T("D - Soul Palette"), 0x0014ec0, 0x0014ee0, indexKOFSprites_02Nameless },
    { _T("D - MAX Super Drill"), 0x0014ee0, 0x0014f00, indexKOFSprites_02Nameless },
};

const sDescTreeNode KOF02UM_S_NAMELESS_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_NAMELESS_PALETTES_A, ARRAYSIZE(KOF02UM_S_NAMELESS_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_NAMELESS_PALETTES_B, ARRAYSIZE(KOF02UM_S_NAMELESS_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_NAMELESS_PALETTES_C, ARRAYSIZE(KOF02UM_S_NAMELESS_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_NAMELESS_PALETTES_D, ARRAYSIZE(KOF02UM_S_NAMELESS_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_NAMELESS_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_NAMELESS_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_NAMELESS_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_NAMELESS_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_ANGEL_PALETTES_A[] =
{
    { _T("Angel A"), 0x0015000, 0x0015020, indexKOFSprites_02Angel },
    { _T("A - Time Over Lose"), 0x0015020, 0x0015040, indexKOFSprites_02Angel },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0015040, 0x0015060, indexKOFSprites_02Angel },
    { _T("A - Electric Shock Effect"), 0x0015060, 0x0015080, indexKOFSprites_02Angel },
    { _T("A - Max Flash"), 0x0015080, 0x00150a0, indexKOFSprites_02Angel },
    { _T("A - Hidden Super Desperation Move 2"), 0x00150a0, 0x00150c0, indexKOFSprites_02Angel },
    { _T("A - Soul Palette"), 0x00150c0, 0x00150e0, indexKOFSprites_02Angel },
    { _T("A - Hidden Super Desperation Move 3"), 0x00150e0, 0x0015100, indexKOFSprites_02Angel },
};

const sGame_PaletteDataset KOF02UM_S_ANGEL_PALETTES_B[] =
{
    { _T("Angel B"), 0x0015200, 0x0015220, indexKOFSprites_02Angel },
    { _T("B - Time Over Lose"), 0x0015220, 0x0015240, indexKOFSprites_02Angel },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0015240, 0x0015260, indexKOFSprites_02Angel },
    { _T("B - Electric Shock Effect"), 0x0015260, 0x0015280, indexKOFSprites_02Angel },
    { _T("B - Max Flash"), 0x0015280, 0x00152a0, indexKOFSprites_02Angel },
    { _T("B - Hidden Super Desperation Move 2"), 0x00152a0, 0x00152c0, indexKOFSprites_02Angel },
    { _T("B - Soul Palette"), 0x00152c0, 0x00152e0, indexKOFSprites_02Angel },
    { _T("B - Hidden Super Desperation Move 3"), 0x00152e0, 0x0015300, indexKOFSprites_02Angel },
};

const sGame_PaletteDataset KOF02UM_S_ANGEL_PALETTES_C[] =
{
    { _T("Angel C"), 0x0015400, 0x0015420, indexKOFSprites_02Angel },
    { _T("C - Time Over Lose"), 0x0015420, 0x0015440, indexKOFSprites_02Angel },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0015440, 0x0015460, indexKOFSprites_02Angel },
    { _T("C - Electric Shock Effect"), 0x0015460, 0x0015480, indexKOFSprites_02Angel },
    { _T("C - Max Flash"), 0x0015480, 0x00154a0, indexKOFSprites_02Angel },
    { _T("C - Hidden Super Desperation Move 2"), 0x00154a0, 0x00154c0, indexKOFSprites_02Angel },
    { _T("C - Soul Palette"), 0x00154c0, 0x00154e0, indexKOFSprites_02Angel },
    { _T("C - Hidden Super Desperation Move 3"), 0x00154e0, 0x0015500, indexKOFSprites_02Angel },
};

const sGame_PaletteDataset KOF02UM_S_ANGEL_PALETTES_D[] =
{
    { _T("Angel D"), 0x0015600, 0x0015620, indexKOFSprites_02Angel },
    { _T("D - Time Over Lose"), 0x0015620, 0x0015640, indexKOFSprites_02Angel },
    { _T("D - Desperation Move / Super Desperation Move"), 0x0015640, 0x0015660, indexKOFSprites_02Angel },
    { _T("D - Electric Shock Effect"), 0x0015660, 0x0015680, indexKOFSprites_02Angel },
    { _T("D - Max Flash"), 0x0015680, 0x00156a0, indexKOFSprites_02Angel },
    { _T("D - Hidden Super Desperation Move 2"), 0x00156a0, 0x00156c0, indexKOFSprites_02Angel },
    { _T("D - Soul Palette"), 0x00156c0, 0x00156e0, indexKOFSprites_02Angel },
    { _T("D - Hidden Super Desperation Move 3"), 0x00156e0, 0x0015700, indexKOFSprites_02Angel },
};

const sDescTreeNode KOF02UM_S_ANGEL_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_ANGEL_PALETTES_A, ARRAYSIZE(KOF02UM_S_ANGEL_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_ANGEL_PALETTES_B, ARRAYSIZE(KOF02UM_S_ANGEL_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_ANGEL_PALETTES_C, ARRAYSIZE(KOF02UM_S_ANGEL_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_ANGEL_PALETTES_D, ARRAYSIZE(KOF02UM_S_ANGEL_PALETTES_D) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_ANGEL_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_ANGEL_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_OMEGARUGAL_PALETTES_A[] =
{
    { _T("Omega Rugal A"), 0x0015800, 0x0015820, indexKOFSprites_98Rugal },
    { _T("A - Hidden Super Desperation Move 1"), 0x0015820, 0x0015840, indexKOFSprites_98Rugal },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0015840, 0x0015860, indexKOFSprites_98Rugal },
    { _T("A - Electric Shock Effect"), 0x0015860, 0x0015880, indexKOFSprites_98Rugal },
    { _T("A - Max Flash"), 0x0015880, 0x00158a0, indexKOFSprites_98Rugal },
    { _T("A - Superboss Intro Stuff"), 0x00158a0, 0x00158c0, indexKOFSprites_98Rugal },
    { _T("A - Soul Palette"), 0x00158c0, 0x00158e0, indexKOFSprites_98Rugal },
    { _T("A - Hidden Super Desperation Move 3"), 0x00158e0, 0x0015900, indexKOFSprites_98Rugal },
};

const sGame_PaletteDataset KOF02UM_S_OMEGARUGAL_PALETTES_B[] =
{
    { _T("Omega Rugal B"), 0x0015a00, 0x0015a20, indexKOFSprites_98Rugal },
    { _T("B - Hidden Super Desperation Move 1"), 0x0015a20, 0x0015a40, indexKOFSprites_98Rugal },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0015a40, 0x0015a60, indexKOFSprites_98Rugal },
    { _T("B - Electric Shock Effect"), 0x0015a60, 0x0015a80, indexKOFSprites_98Rugal },
    { _T("B - Max Flash"), 0x0015a80, 0x0015aa0, indexKOFSprites_98Rugal },
    { _T("B - Superboss Intro Stuff"), 0x0015aa0, 0x0015ac0, indexKOFSprites_98Rugal },
    { _T("B - Soul Palette"), 0x0015ac0, 0x0015ae0, indexKOFSprites_98Rugal },
    { _T("B - Hidden Super Desperation Move 3"), 0x0015ae0, 0x0015b00, indexKOFSprites_98Rugal },
};

const sGame_PaletteDataset KOF02UM_S_OMEGARUGAL_PALETTES_C[] =
{
    { _T("Omega Rugal C"), 0x0015c00, 0x0015c20, indexKOFSprites_98Rugal },
    { _T("C - Hidden Super Desperation Move 1"), 0x0015c20, 0x0015c40, indexKOFSprites_98Rugal },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0015c40, 0x0015c60, indexKOFSprites_98Rugal },
    { _T("C - Electric Shock Effect"), 0x0015c60, 0x0015c80, indexKOFSprites_98Rugal },
    { _T("C - Max Flash"), 0x0015c80, 0x0015ca0, indexKOFSprites_98Rugal },
    { _T("C - Superboss Intro Stuff"), 0x0015ca0, 0x0015cc0, indexKOFSprites_98Rugal },
    { _T("C - Soul Palette"), 0x0015cc0, 0x0015ce0, indexKOFSprites_98Rugal },
    { _T("C - Hidden Super Desperation Move 3"), 0x0015ce0, 0x0015d00, indexKOFSprites_98Rugal },
};

const sGame_PaletteDataset KOF02UM_S_OMEGARUGAL_PALETTES_D[] =
{
    { _T("Omega Rugal D"), 0x0015e00, 0x0015e20, indexKOFSprites_98Rugal },
    { _T("D - Hidden Super Desperation Move 1"), 0x0015e20, 0x0015e40, indexKOFSprites_98Rugal },
    { _T("D - Desperation Move / Super Desperation Move"), 0x0015e40, 0x0015e60, indexKOFSprites_98Rugal },
    { _T("D - Electric Shock Effect"), 0x0015e60, 0x0015e80, indexKOFSprites_98Rugal },
    { _T("D - Max Flash"), 0x0015e80, 0x0015ea0, indexKOFSprites_98Rugal },
    { _T("D - Superboss Intro Stuff"), 0x0015ea0, 0x0015ec0, indexKOFSprites_98Rugal },
    { _T("D - Soul Palette"), 0x0015ec0, 0x0015ee0, indexKOFSprites_98Rugal },
    { _T("D - Hidden Super Desperation Move 3"), 0x0015ee0, 0x0015f00, indexKOFSprites_98Rugal },
};

const sDescTreeNode KOF02UM_S_OMEGARUGAL_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_OMEGARUGAL_PALETTES_A, ARRAYSIZE(KOF02UM_S_OMEGARUGAL_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_OMEGARUGAL_PALETTES_B, ARRAYSIZE(KOF02UM_S_OMEGARUGAL_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_OMEGARUGAL_PALETTES_C, ARRAYSIZE(KOF02UM_S_OMEGARUGAL_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_OMEGARUGAL_PALETTES_D, ARRAYSIZE(KOF02UM_S_OMEGARUGAL_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_OMEGARUGAL_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_OMEGARUGAL_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_OMEGARUGAL_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_OMEGARUGAL_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_KUSANAGI_PALETTES_A[] =
{
    { _T("Kusanagi A"), 0x0016000, 0x0016020, indexKOFSprites_02Kusanagi },
    { _T("A - Fire Attack Stuff 1"), 0x0016020, 0x0016040, indexKOFSprites_02Kusanagi },
    { _T("A - Fire Attack Stuff 2"), 0x0016040, 0x0016060, indexKOFSprites_02Kusanagi },
    { _T("A - Electric Shock Effect"), 0x0016060, 0x0016080, indexKOFSprites_02Kusanagi },
    { _T("A - Max Flash"), 0x0016080, 0x00160a0, indexKOFSprites_02Kusanagi },
    { _T("A - Hidden Super Desperation Move 2"), 0x00160a0, 0x00160c0, indexKOFSprites_02Kusanagi },
    { _T("A - Soul Palette"), 0x00160c0, 0x00160e0, indexKOFSprites_02Kusanagi },
    { _T("A - Hidden Super Desperation Move 3"), 0x00160e0, 0x0016100, indexKOFSprites_02Kusanagi },
};

const sGame_PaletteDataset KOF02UM_S_KUSANAGI_PALETTES_B[] =
{
    { _T("Kusanagi B"), 0x0016200, 0x0016220, indexKOFSprites_02Kusanagi },
    { _T("B - Fire Attack Stuff 1"), 0x0016220, 0x0016240, indexKOFSprites_02Kusanagi },
    { _T("B - Fire Attack Stuff 2"), 0x0016240, 0x0016260, indexKOFSprites_02Kusanagi },
    { _T("B - Electric Shock Effect"), 0x0016260, 0x0016280, indexKOFSprites_02Kusanagi },
    { _T("B - Max Flash"), 0x0016280, 0x00162a0, indexKOFSprites_02Kusanagi },
    { _T("B - Hidden Super Desperation Move 2"), 0x00162a0, 0x00162c0, indexKOFSprites_02Kusanagi },
    { _T("B - Soul Palette"), 0x00162c0, 0x00162e0, indexKOFSprites_02Kusanagi },
    { _T("B - Hidden Super Desperation Move 3"), 0x00162e0, 0x0016300, indexKOFSprites_02Kusanagi },
};

const sGame_PaletteDataset KOF02UM_S_KUSANAGI_PALETTES_C[] =
{
    { _T("Kusanagi C"), 0x0016400, 0x0016420, indexKOFSprites_02Kusanagi },
    { _T("C - Fire Attack Stuff 1"), 0x0016420, 0x0016440, indexKOFSprites_02Kusanagi },
    { _T("C - Fire Attack Stuff 2"), 0x0016440, 0x0016460, indexKOFSprites_02Kusanagi },
    { _T("C - Electric Shock Effect"), 0x0016460, 0x0016480, indexKOFSprites_02Kusanagi },
    { _T("C - Max Flash"), 0x0016480, 0x00164a0, indexKOFSprites_02Kusanagi },
    { _T("C - Hidden Super Desperation Move 2"), 0x00164a0, 0x00164c0, indexKOFSprites_02Kusanagi },
    { _T("C - Soul Palette"), 0x00164c0, 0x00164e0, indexKOFSprites_02Kusanagi },
    { _T("C - Hidden Super Desperation Move 3"), 0x00164e0, 0x0016500, indexKOFSprites_02Kusanagi },
};

const sGame_PaletteDataset KOF02UM_S_KUSANAGI_PALETTES_D[] =
{
    { _T("Kusanagi D"), 0x0016600, 0x0016620, indexKOFSprites_02Kusanagi },
    { _T("D - Fire Attack Stuff 1"), 0x0016620, 0x0016640, indexKOFSprites_02Kusanagi },
    { _T("D - Fire Attack Stuff 2"), 0x0016640, 0x0016660, indexKOFSprites_02Kusanagi },
    { _T("D - Electric Shock Effect"), 0x0016660, 0x0016680, indexKOFSprites_02Kusanagi },
    { _T("D - Max Flash"), 0x0016680, 0x00166a0, indexKOFSprites_02Kusanagi },
    { _T("D - Hidden Super Desperation Move 2"), 0x00166a0, 0x00166c0, indexKOFSprites_02Kusanagi },
    { _T("D - Soul Palette"), 0x00166c0, 0x00166e0, indexKOFSprites_02Kusanagi },
    { _T("D - Hidden Super Desperation Move 3"), 0x00166e0, 0x0016700, indexKOFSprites_02Kusanagi },
};

const sDescTreeNode KOF02UM_S_KUSANAGI_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KUSANAGI_PALETTES_A, ARRAYSIZE(KOF02UM_S_KUSANAGI_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KUSANAGI_PALETTES_B, ARRAYSIZE(KOF02UM_S_KUSANAGI_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KUSANAGI_PALETTES_C, ARRAYSIZE(KOF02UM_S_KUSANAGI_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KUSANAGI_PALETTES_D, ARRAYSIZE(KOF02UM_S_KUSANAGI_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KUSANAGI_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_KUSANAGI_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KUSANAGI_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_KUSANAGI_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_OYASHIRO_PALETTES_A[] =
{
    { _T("O.Yashiro A"), 0x0016800, 0x0016820, indexKOFSprites_98Yashiro },
    { _T("A - Hidden Super Desperation Move 1"), 0x0016820, 0x0016840, indexKOFSprites_98Yashiro },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0016840, 0x0016860, indexKOFSprites_98Yashiro },
    { _T("A - Electric Shock Effect"), 0x0016860, 0x0016880, indexKOFSprites_98Yashiro },
    { _T("A - Max Flash"), 0x0016880, 0x00168a0, indexKOFSprites_98Yashiro },
    { _T("A - Hidden Super Desperation Move 2"), 0x00168a0, 0x00168c0, indexKOFSprites_98Yashiro },
    { _T("A - Soul Palette"), 0x00168c0, 0x00168e0, indexKOFSprites_98Yashiro },
    { _T("A - Hidden Super Desperation Move 3"), 0x00168e0, 0x0016900, indexKOFSprites_98Yashiro },
};

const sGame_PaletteDataset KOF02UM_S_OYASHIRO_PALETTES_B[] =
{
    { _T("O.Yashiro B"), 0x0016a00, 0x0016a20, indexKOFSprites_98Yashiro },
    { _T("B - Hidden Super Desperation Move 1"), 0x0016a20, 0x0016a40, indexKOFSprites_98Yashiro },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0016a40, 0x0016a60, indexKOFSprites_98Yashiro },
    { _T("B - Electric Shock Effect"), 0x0016a60, 0x0016a80, indexKOFSprites_98Yashiro },
    { _T("B - Max Flash"), 0x0016a80, 0x0016aa0, indexKOFSprites_98Yashiro },
    { _T("B - Hidden Super Desperation Move 2"), 0x0016aa0, 0x0016ac0, indexKOFSprites_98Yashiro },
    { _T("B - Soul Palette"), 0x0016ac0, 0x0016ae0, indexKOFSprites_98Yashiro },
    { _T("B - Hidden Super Desperation Move 3"), 0x0016ae0, 0x0016b00, indexKOFSprites_98Yashiro },
};

const sGame_PaletteDataset KOF02UM_S_OYASHIRO_PALETTES_C[] =
{
    { _T("O.Yashiro C"), 0x0016c00, 0x0016c20, indexKOFSprites_98Yashiro },
    { _T("C - Hidden Super Desperation Move 1"), 0x0016c20, 0x0016c40, indexKOFSprites_98Yashiro },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0016c40, 0x0016c60, indexKOFSprites_98Yashiro },
    { _T("C - Electric Shock Effect"), 0x0016c60, 0x0016c80, indexKOFSprites_98Yashiro },
    { _T("C - Max Flash"), 0x0016c80, 0x0016ca0, indexKOFSprites_98Yashiro },
    { _T("C - Hidden Super Desperation Move 2"), 0x0016ca0, 0x0016cc0, indexKOFSprites_98Yashiro },
    { _T("C - Soul Palette"), 0x0016cc0, 0x0016ce0, indexKOFSprites_98Yashiro },
    { _T("C - Hidden Super Desperation Move 3"), 0x0016ce0, 0x0016d00, indexKOFSprites_98Yashiro },
};

const sGame_PaletteDataset KOF02UM_S_OYASHIRO_PALETTES_D[] =
{
    { _T("O.Yashiro D"), 0x0016e00, 0x0016e20, indexKOFSprites_98Yashiro },
    { _T("D - Hidden Super Desperation Move 1"), 0x0016e20, 0x0016e40, indexKOFSprites_98Yashiro },
    { _T("D - Desperation Move / Super Desperation Move"), 0x0016e40, 0x0016e60, indexKOFSprites_98Yashiro },
    { _T("D - Electric Shock Effect"), 0x0016e60, 0x0016e80, indexKOFSprites_98Yashiro },
    { _T("D - Max Flash"), 0x0016e80, 0x0016ea0, indexKOFSprites_98Yashiro },
    { _T("D - Hidden Super Desperation Move 2"), 0x0016ea0, 0x0016ec0, indexKOFSprites_98Yashiro },
    { _T("D - Soul Palette"), 0x0016ec0, 0x0016ee0, indexKOFSprites_98Yashiro },
    { _T("D - Hidden Super Desperation Move 3"), 0x0016ee0, 0x0016f00, indexKOFSprites_98Yashiro },
};

const sDescTreeNode KOF02UM_S_OYASHIRO_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_OYASHIRO_PALETTES_A, ARRAYSIZE(KOF02UM_S_OYASHIRO_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_OYASHIRO_PALETTES_B, ARRAYSIZE(KOF02UM_S_OYASHIRO_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_OYASHIRO_PALETTES_C, ARRAYSIZE(KOF02UM_S_OYASHIRO_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_OYASHIRO_PALETTES_D, ARRAYSIZE(KOF02UM_S_OYASHIRO_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_OYASHIRO_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_OYASHIRO_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_OYASHIRO_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_OYASHIRO_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_OSHERMIE_PALETTES_A[] =
{
    { _T("O.Shermie A"), 0x0017000, 0x0017020, indexKOFSprites_98Shermie },
    { _T("A - Hidden Super Desperation Move 1"), 0x0017020, 0x0017040, indexKOFSprites_98Shermie },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0017040, 0x0017060, indexKOFSprites_98Shermie },
    { _T("A - Electric Shock Effect"), 0x0017060, 0x0017080, indexKOFSprites_98Shermie },
    { _T("A - Max Flash"), 0x0017080, 0x00170a0, indexKOFSprites_98Shermie },
    { _T("A - Hidden Super Desperation Move 2"), 0x00170a0, 0x00170c0, indexKOFSprites_98Shermie },
    { _T("A - Soul Palette"), 0x00170c0, 0x00170e0, indexKOFSprites_98Shermie },
    { _T("A - MAX2 Lightning"), 0x00170e0, 0x0017100, indexKOFSprites_98Shermie },
};

const sGame_PaletteDataset KOF02UM_S_OSHERMIE_PALETTES_B[] =
{
    { _T("O.Shermie B"), 0x0017200, 0x0017220, indexKOFSprites_98Shermie },
    { _T("B - Hidden Super Desperation Move 1"), 0x0017220, 0x0017240, indexKOFSprites_98Shermie },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0017240, 0x0017260, indexKOFSprites_98Shermie },
    { _T("B - Electric Shock Effect"), 0x0017260, 0x0017280, indexKOFSprites_98Shermie },
    { _T("B - Max Flash"), 0x0017280, 0x00172a0, indexKOFSprites_98Shermie },
    { _T("B - Hidden Super Desperation Move 2"), 0x00172a0, 0x00172c0, indexKOFSprites_98Shermie },
    { _T("B - Soul Palette"), 0x00172c0, 0x00172e0, indexKOFSprites_98Shermie },
    { _T("B - MAX2 Lightning"), 0x00172e0, 0x0017300, indexKOFSprites_98Shermie },
};

const sGame_PaletteDataset KOF02UM_S_OSHERMIE_PALETTES_C[] =
{
    { _T("O.Shermie C"), 0x0017400, 0x0017420, indexKOFSprites_98Shermie },
    { _T("C - Hidden Super Desperation Move 1"), 0x0017420, 0x0017440, indexKOFSprites_98Shermie },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0017440, 0x0017460, indexKOFSprites_98Shermie },
    { _T("C - Electric Shock Effect"), 0x0017460, 0x0017480, indexKOFSprites_98Shermie },
    { _T("C - Max Flash"), 0x0017480, 0x00174a0, indexKOFSprites_98Shermie },
    { _T("C - Hidden Super Desperation Move 2"), 0x00174a0, 0x00174c0, indexKOFSprites_98Shermie },
    { _T("C - Soul Palette"), 0x00174c0, 0x00174e0, indexKOFSprites_98Shermie },
    { _T("C - MAX2 Lightning"), 0x00174e0, 0x0017500, indexKOFSprites_98Shermie },
};

const sGame_PaletteDataset KOF02UM_S_OSHERMIE_PALETTES_D[] =
{
    { _T("O.Shermie D"), 0x0017600, 0x0017620, indexKOFSprites_98Shermie },
    { _T("D - Hidden Super Desperation Move 1"), 0x0017620, 0x0017640, indexKOFSprites_98Shermie },
    { _T("D - Desperation Move / Super Desperation Move"), 0x0017640, 0x0017660, indexKOFSprites_98Shermie },
    { _T("D - Electric Shock Effect"), 0x0017660, 0x0017680, indexKOFSprites_98Shermie },
    { _T("D - Max Flash"), 0x0017680, 0x00176a0, indexKOFSprites_98Shermie },
    { _T("D - Hidden Super Desperation Move 2"), 0x00176a0, 0x00176c0, indexKOFSprites_98Shermie },
    { _T("D - Soul Palette"), 0x00176c0, 0x00176e0, indexKOFSprites_98Shermie },
    { _T("D - MAX2 Lightning"), 0x00176e0, 0x0017700, indexKOFSprites_98Shermie },
};

const sDescTreeNode KOF02UM_S_OSHERMIE_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_OSHERMIE_PALETTES_A, ARRAYSIZE(KOF02UM_S_OSHERMIE_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_OSHERMIE_PALETTES_B, ARRAYSIZE(KOF02UM_S_OSHERMIE_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_OSHERMIE_PALETTES_C, ARRAYSIZE(KOF02UM_S_OSHERMIE_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_OSHERMIE_PALETTES_D, ARRAYSIZE(KOF02UM_S_OSHERMIE_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_OSHERMIE_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_OSHERMIE_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_OSHERMIE_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_OSHERMIE_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_OCHRIS_PALETTES_A[] =
{
    { _T("O.Chris A"), 0x0017800, 0x0017820, indexKOFSprites_98Chris },
    { _T("A - Hidden Super Desperation Move 1"), 0x0017820, 0x0017840, indexKOFSprites_98Chris },
    { _T("A - Orochi Fire Palette"), 0x0017840, 0x0017860, indexKOFSprites_98Chris },
    { _T("A - Electric Shock Effect"), 0x0017860, 0x0017880, indexKOFSprites_98Chris },
    { _T("A - Max Flash"), 0x0017880, 0x00178a0, indexKOFSprites_98Chris },
    { _T("A - Hidden Super Desperation Move 2"), 0x00178a0, 0x00178c0, indexKOFSprites_98Chris },
    { _T("A - Soul Palette"), 0x00178c0, 0x00178e0, indexKOFSprites_98Chris },
    { _T("A - Orochi"), 0x00178e0, 0x0017900, indexKOFSprites_98Chris },
};

const sGame_PaletteDataset KOF02UM_S_OCHRIS_PALETTES_B[] =
{
    { _T("O.Chris B"), 0x0017a00, 0x0017a20, indexKOFSprites_98Chris },
    { _T("B - Hidden Super Desperation Move 1"), 0x0017a20, 0x0017a40, indexKOFSprites_98Chris },
    { _T("B - Orochi Fire Palette"), 0x0017a40, 0x0017a60, indexKOFSprites_98Chris },
    { _T("B - Electric Shock Effect"), 0x0017a60, 0x0017a80, indexKOFSprites_98Chris },
    { _T("B - Max Flash"), 0x0017a80, 0x0017aa0, indexKOFSprites_98Chris },
    { _T("B - Hidden Super Desperation Move 2"), 0x0017aa0, 0x0017ac0, indexKOFSprites_98Chris },
    { _T("B - Soul Palette"), 0x0017ac0, 0x0017ae0, indexKOFSprites_98Chris },
    { _T("B - Orochi"), 0x0017ae0, 0x0017b00, indexKOFSprites_98Chris },
};

const sGame_PaletteDataset KOF02UM_S_OCHRIS_PALETTES_C[] =
{
    { _T("O.Chris C"), 0x0017c00, 0x0017c20, indexKOFSprites_98Chris },
    { _T("C - Hidden Super Desperation Move 1"), 0x0017c20, 0x0017c40, indexKOFSprites_98Chris },
    { _T("C - Orochi Fire Palette"), 0x0017c40, 0x0017c60, indexKOFSprites_98Chris },
    { _T("C - Electric Shock Effect"), 0x0017c60, 0x0017c80, indexKOFSprites_98Chris },
    { _T("C - Max Flash"), 0x0017c80, 0x0017ca0, indexKOFSprites_98Chris },
    { _T("C - Hidden Super Desperation Move 2"), 0x0017ca0, 0x0017cc0, indexKOFSprites_98Chris },
    { _T("C - Soul Palette"), 0x0017cc0, 0x0017ce0, indexKOFSprites_98Chris },
    { _T("C - Orochi"), 0x0017ce0, 0x0017d00, indexKOFSprites_98Chris },
};

const sGame_PaletteDataset KOF02UM_S_OCHRIS_PALETTES_D[] =
{
    { _T("O.Chris D"), 0x0017e00, 0x0017e20, indexKOFSprites_98Chris },
    { _T("D - Hidden Super Desperation Move 1"), 0x0017e20, 0x0017e40, indexKOFSprites_98Chris },
    { _T("D - Orochi Fire Palette"), 0x0017e40, 0x0017e60, indexKOFSprites_98Chris },
    { _T("D - Electric Shock Effect"), 0x0017e60, 0x0017e80, indexKOFSprites_98Chris },
    { _T("D - Max Flash"), 0x0017e80, 0x0017ea0, indexKOFSprites_98Chris },
    { _T("D - Hidden Super Desperation Move 2"), 0x0017ea0, 0x0017ec0, indexKOFSprites_98Chris },
    { _T("D - Soul Palette"), 0x0017ec0, 0x0017ee0, indexKOFSprites_98Chris },
    { _T("D - Orochi"), 0x0017ee0, 0x0017f00, indexKOFSprites_98Chris },
};

const sDescTreeNode KOF02UM_S_OCHRIS_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_OCHRIS_PALETTES_A, ARRAYSIZE(KOF02UM_S_OCHRIS_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_OCHRIS_PALETTES_B, ARRAYSIZE(KOF02UM_S_OCHRIS_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_OCHRIS_PALETTES_C, ARRAYSIZE(KOF02UM_S_OCHRIS_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_OCHRIS_PALETTES_D, ARRAYSIZE(KOF02UM_S_OCHRIS_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_OCHRIS_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_OCHRIS_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_OCHRIS_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_OCHRIS_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_SHINGO_PALETTES_A[] =
{
    { _T("Shingo A"), 0x0045c00, 0x0045c20, indexKOFSprites_98Shingo },
    { _T("A - Hidden Super Desperation Move 1"), 0x0045c20, 0x0045c40, indexKOFSprites_98Shingo },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0045c40, 0x0045c60, indexKOFSprites_98Shingo },
    { _T("A - Electric Shock Effect"), 0x0045c60, 0x0045c80, indexKOFSprites_98Shingo },
    { _T("A - Max Flash"), 0x0045c80, 0x0045ca0, indexKOFSprites_98Shingo },
    { _T("A - Hidden Super Desperation Move 2"), 0x0045ca0, 0x0045cc0, indexKOFSprites_98Shingo },
    { _T("A - Soul Palette"), 0x0045cc0, 0x0045ce0, indexKOFSprites_98Shingo },
    { _T("A - Hidden Super Desperation Move 3"), 0x0045ce0, 0x0045d00, indexKOFSprites_98Shingo },
};

const sGame_PaletteDataset KOF02UM_S_SHINGO_PALETTES_B[] =
{
    { _T("Shingo B"), 0x0045d00, 0x0045d20, indexKOFSprites_98Shingo },
    { _T("B - Hidden Super Desperation Move 1"), 0x0045d20, 0x0045d40, indexKOFSprites_98Shingo },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0045d40, 0x0045d60, indexKOFSprites_98Shingo },
    { _T("B - Electric Shock Effect"), 0x0045d60, 0x0045d80, indexKOFSprites_98Shingo },
    { _T("B - Max Flash"), 0x0045d80, 0x0045da0, indexKOFSprites_98Shingo },
    { _T("B - Hidden Super Desperation Move 2"), 0x0045da0, 0x0045dc0, indexKOFSprites_98Shingo },
    { _T("B - Soul Palette"), 0x0045dc0, 0x0045de0, indexKOFSprites_98Shingo },
    { _T("B - Hidden Super Desperation Move 3"), 0x0045de0, 0x0045e00, indexKOFSprites_98Shingo },
};

const sGame_PaletteDataset KOF02UM_S_SHINGO_PALETTES_C[] =
{
    { _T("Shingo C"), 0x0045e00, 0x0045e20, indexKOFSprites_98Shingo },
    { _T("C - Hidden Super Desperation Move 1"), 0x0045e20, 0x0045e40, indexKOFSprites_98Shingo },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0045e40, 0x0045e60, indexKOFSprites_98Shingo },
    { _T("C - Electric Shock Effect"), 0x0045e60, 0x0045e80, indexKOFSprites_98Shingo },
    { _T("C - Max Flash"), 0x0045e80, 0x0045ea0, indexKOFSprites_98Shingo },
    { _T("C - Hidden Super Desperation Move 2"), 0x0045ea0, 0x0045ec0, indexKOFSprites_98Shingo },
    { _T("C - Soul Palette"), 0x0045ec0, 0x0045ee0, indexKOFSprites_98Shingo },
    { _T("C - Hidden Super Desperation Move 3"), 0x0045ee0, 0x0045f00, indexKOFSprites_98Shingo },
};

const sGame_PaletteDataset KOF02UM_S_SHINGO_PALETTES_D[] =
{
    { _T("Shingo D"), 0x0045f00, 0x0045f20, indexKOFSprites_98Shingo },
    { _T("D - Hidden Super Desperation Move 1"), 0x0045f20, 0x0045f40, indexKOFSprites_98Shingo },
    { _T("D - Desperation Move / Super Desperation Move"), 0x0045f40, 0x0045f60, indexKOFSprites_98Shingo },
    { _T("D - Electric Shock Effect"), 0x0045f60, 0x0045f80, indexKOFSprites_98Shingo },
    { _T("D - Max Flash"), 0x0045f80, 0x0045fa0, indexKOFSprites_98Shingo },
    { _T("D - Hidden Super Desperation Move 2"), 0x0045fa0, 0x0045fc0, indexKOFSprites_98Shingo },
    { _T("D - Soul Palette"), 0x0045fc0, 0x0045fe0, indexKOFSprites_98Shingo },
    { _T("D - Hidden Super Desperation Move 3"), 0x0045fe0, 0x0046000, indexKOFSprites_98Shingo },
};

const sDescTreeNode KOF02UM_S_SHINGO_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_SHINGO_PALETTES_A, ARRAYSIZE(KOF02UM_S_SHINGO_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_SHINGO_PALETTES_B, ARRAYSIZE(KOF02UM_S_SHINGO_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_SHINGO_PALETTES_C, ARRAYSIZE(KOF02UM_S_SHINGO_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_SHINGO_PALETTES_D, ARRAYSIZE(KOF02UM_S_SHINGO_PALETTES_D) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_SHINGO_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_SHINGO_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_KING_PALETTES_A[] =
{
    { _T("King A"), 0x0046400, 0x0046420, indexKOFSprites_02King },
    { _T("A - Rose and Kick Effects"), 0x0046420, 0x0046440, indexKOFSprites_02King },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0046440, 0x0046460, indexKOFSprites_02King },
    { _T("A - Electric Shock Effect"), 0x0046460, 0x0046480, indexKOFSprites_02King },
    { _T("A - Max Flash"), 0x0046480, 0x00464a0, indexKOFSprites_02King },
    { _T("A - Hidden Super Desperation Move 2"), 0x00464a0, 0x00464c0, indexKOFSprites_02King },
    { _T("A - Soul Palette"), 0x00464c0, 0x00464e0, indexKOFSprites_02King },
    { _T("A - Hidden Super Desperation Move 3"), 0x00464e0, 0x0046500, indexKOFSprites_02King },
};

const sGame_PaletteDataset KOF02UM_S_KING_PALETTES_B[] =
{
    { _T("King B"), 0x0046500, 0x0046520, indexKOFSprites_02King },
    { _T("B - Rose and Kick Effects"), 0x0046520, 0x0046540, indexKOFSprites_02King },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0046540, 0x0046560, indexKOFSprites_02King },
    { _T("B - Electric Shock Effect"), 0x0046560, 0x0046580, indexKOFSprites_02King },
    { _T("B - Max Flash"), 0x0046580, 0x00465a0, indexKOFSprites_02King },
    { _T("B - Hidden Super Desperation Move 2"), 0x00465a0, 0x00465c0, indexKOFSprites_02King },
    { _T("B - Soul Palette"), 0x00465c0, 0x00465e0, indexKOFSprites_02King },
    { _T("B - Hidden Super Desperation Move 3"), 0x00465e0, 0x0046600, indexKOFSprites_02King },
};

const sGame_PaletteDataset KOF02UM_S_KING_PALETTES_C[] =
{
    { _T("King C"), 0x0046600, 0x0046620, indexKOFSprites_02King },
    { _T("C - Rose and Kick Effects"), 0x0046620, 0x0046640, indexKOFSprites_02King },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0046640, 0x0046660, indexKOFSprites_02King },
    { _T("C - Electric Shock Effect"), 0x0046660, 0x0046680, indexKOFSprites_02King },
    { _T("C - Max Flash"), 0x0046680, 0x00466a0, indexKOFSprites_02King },
    { _T("C - Hidden Super Desperation Move 2"), 0x00466a0, 0x00466c0, indexKOFSprites_02King },
    { _T("C - Soul Palette"), 0x00466c0, 0x00466e0, indexKOFSprites_02King },
    { _T("C - Hidden Super Desperation Move 3"), 0x00466e0, 0x0046700, indexKOFSprites_02King },
};

const sGame_PaletteDataset KOF02UM_S_KING_PALETTES_D[] =
{
    { _T("King D"), 0x0046700, 0x0046720, indexKOFSprites_02King },
    { _T("D - Rose and Kick Effects"), 0x0046720, 0x0046740, indexKOFSprites_02King },
    { _T("D - Desperation Move / Super Desperation Move"), 0x0046740, 0x0046760, indexKOFSprites_02King },
    { _T("D - Electric Shock Effect"), 0x0046760, 0x0046780, indexKOFSprites_02King },
    { _T("D - Max Flash"), 0x0046780, 0x00467a0, indexKOFSprites_02King },
    { _T("D - Hidden Super Desperation Move 2"), 0x00467a0, 0x00467c0, indexKOFSprites_02King },
    { _T("D - Soul Palette"), 0x00467c0, 0x00467e0, indexKOFSprites_02King },
    { _T("D - Hidden Super Desperation Move 3"), 0x00467e0, 0x0046800, indexKOFSprites_02King },
};

const sDescTreeNode KOF02UM_S_KING_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KING_PALETTES_A, ARRAYSIZE(KOF02UM_S_KING_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KING_PALETTES_B, ARRAYSIZE(KOF02UM_S_KING_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KING_PALETTES_C, ARRAYSIZE(KOF02UM_S_KING_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KING_PALETTES_D, ARRAYSIZE(KOF02UM_S_KING_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KING_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_KING_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KING_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_KING_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_XIANGFEI_PALETTES_A[] =
{
    { _T("Xiangfei A"), 0x0046c00, 0x0046c20, indexKOFSprites_01Xiangfei },
    { _T("A - Sword Stuff"), 0x0046c20, 0x0046c40, indexKOFSprites_01Xiangfei },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0046c40, 0x0046c60, indexKOFSprites_01Xiangfei },
    { _T("A - Electric Shock Effect"), 0x0046c60, 0x0046c80, indexKOFSprites_01Xiangfei },
    { _T("A - Max Flash"), 0x0046c80, 0x0046ca0, indexKOFSprites_01Xiangfei },
    { _T("A - Hidden Super Desperation Move 2"), 0x0046ca0, 0x0046cc0, indexKOFSprites_01Xiangfei },
    { _T("A - Soul Palette"), 0x0046cc0, 0x0046ce0, indexKOFSprites_01Xiangfei },
    { _T("A - Hidden Super Desperation Move 3"), 0x0046ce0, 0x0046d00, indexKOFSprites_01Xiangfei },
};

const sGame_PaletteDataset KOF02UM_S_XIANGFEI_PALETTES_B[] =
{
    { _T("Xiangfei B"), 0x0046d00, 0x0046d20, indexKOFSprites_01Xiangfei },
    { _T("B - Sword Stuff"), 0x0046d20, 0x0046d40, indexKOFSprites_01Xiangfei },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0046d40, 0x0046d60, indexKOFSprites_01Xiangfei },
    { _T("B - Electric Shock Effect"), 0x0046d60, 0x0046d80, indexKOFSprites_01Xiangfei },
    { _T("B - Max Flash"), 0x0046d80, 0x0046da0, indexKOFSprites_01Xiangfei },
    { _T("B - Hidden Super Desperation Move 2"), 0x0046da0, 0x0046dc0, indexKOFSprites_01Xiangfei },
    { _T("B - Soul Palette"), 0x0046dc0, 0x0046de0, indexKOFSprites_01Xiangfei },
    { _T("B - Hidden Super Desperation Move 3"), 0x0046de0, 0x0046e00, indexKOFSprites_01Xiangfei },
};

const sGame_PaletteDataset KOF02UM_S_XIANGFEI_PALETTES_C[] =
{
    { _T("Xiangfei C"), 0x0046e00, 0x0046e20, indexKOFSprites_01Xiangfei },
    { _T("C - Sword Stuff"), 0x0046e20, 0x0046e40, indexKOFSprites_01Xiangfei },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0046e40, 0x0046e60, indexKOFSprites_01Xiangfei },
    { _T("C - Electric Shock Effect"), 0x0046e60, 0x0046e80, indexKOFSprites_01Xiangfei },
    { _T("C - Max Flash"), 0x0046e80, 0x0046ea0, indexKOFSprites_01Xiangfei },
    { _T("C - Hidden Super Desperation Move 2"), 0x0046ea0, 0x0046ec0, indexKOFSprites_01Xiangfei },
    { _T("C - Soul Palette"), 0x0046ec0, 0x0046ee0, indexKOFSprites_01Xiangfei },
    { _T("C - Hidden Super Desperation Move 3"), 0x0046ee0, 0x0046f00, indexKOFSprites_01Xiangfei },
};

const sGame_PaletteDataset KOF02UM_S_XIANGFEI_PALETTES_D[] =
{
    { _T("Xiangfei D"), 0x0046f00, 0x0046f20, indexKOFSprites_01Xiangfei },
    { _T("D - Sword Stuff"), 0x0046f20, 0x0046f40, indexKOFSprites_01Xiangfei },
    { _T("D - Desperation Move / Super Desperation Move"), 0x0046f40, 0x0046f60, indexKOFSprites_01Xiangfei },
    { _T("D - Electric Shock Effect"), 0x0046f60, 0x0046f80, indexKOFSprites_01Xiangfei },
    { _T("D - Max Flash"), 0x0046f80, 0x0046fa0, indexKOFSprites_01Xiangfei },
    { _T("D - Hidden Super Desperation Move 2"), 0x0046fa0, 0x0046fc0, indexKOFSprites_01Xiangfei },
    { _T("D - Soul Palette"), 0x0046fc0, 0x0046fe0, indexKOFSprites_01Xiangfei },
    { _T("D - Hidden Super Desperation Move 3"), 0x0046fe0, 0x0047000, indexKOFSprites_01Xiangfei },
};

const sDescTreeNode KOF02UM_S_XIANGFEI_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_XIANGFEI_PALETTES_A, ARRAYSIZE(KOF02UM_S_XIANGFEI_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_XIANGFEI_PALETTES_B, ARRAYSIZE(KOF02UM_S_XIANGFEI_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_XIANGFEI_PALETTES_C, ARRAYSIZE(KOF02UM_S_XIANGFEI_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_XIANGFEI_PALETTES_D, ARRAYSIZE(KOF02UM_S_XIANGFEI_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_XIANGFEI_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_XIANGFEI_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_XIANGFEI_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_XIANGFEI_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_HINAKO_PALETTES_A[] =
{
    { _T("Hinako A"), 0x0047400, 0x0047420, indexKOFSprites_02Hinako },
    { _T("A - Hidden Super Desperation Move 1"), 0x0047420, 0x0047440, indexKOFSprites_02Hinako },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0047440, 0x0047460, indexKOFSprites_02Hinako },
    { _T("A - Electric Shock Effect"), 0x0047460, 0x0047480, indexKOFSprites_02Hinako },
    { _T("A - Max Flash"), 0x0047480, 0x00474a0, indexKOFSprites_02Hinako },
    { _T("A - Hidden Super Desperation Move 2"), 0x00474a0, 0x00474c0, indexKOFSprites_02Hinako },
    { _T("A - Soul Palette"), 0x00474c0, 0x00474e0, indexKOFSprites_02Hinako },
    { _T("A - Hidden Super Desperation Move 3"), 0x00474e0, 0x0047500, indexKOFSprites_02Hinako },
};

const sGame_PaletteDataset KOF02UM_S_HINAKO_PALETTES_B[] =
{
    { _T("Hinako B"), 0x0047500, 0x0047520, indexKOFSprites_02Hinako },
    { _T("B - Hidden Super Desperation Move 1"), 0x0047520, 0x0047540, indexKOFSprites_02Hinako },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0047540, 0x0047560, indexKOFSprites_02Hinako },
    { _T("B - Electric Shock Effect"), 0x0047560, 0x0047580, indexKOFSprites_02Hinako },
    { _T("B - Max Flash"), 0x0047580, 0x00475a0, indexKOFSprites_02Hinako },
    { _T("B - Hidden Super Desperation Move 2"), 0x00475a0, 0x00475c0, indexKOFSprites_02Hinako },
    { _T("B - Soul Palette"), 0x00475c0, 0x00475e0, indexKOFSprites_02Hinako },
    { _T("B - Hidden Super Desperation Move 3"), 0x00475e0, 0x0047600, indexKOFSprites_02Hinako },
};

const sGame_PaletteDataset KOF02UM_S_HINAKO_PALETTES_C[] =
{
    { _T("Hinako C"), 0x0047600, 0x0047620, indexKOFSprites_02Hinako },
    { _T("C - Hidden Super Desperation Move 1"), 0x0047620, 0x0047640, indexKOFSprites_02Hinako },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0047640, 0x0047660, indexKOFSprites_02Hinako },
    { _T("C - Electric Shock Effect"), 0x0047660, 0x0047680, indexKOFSprites_02Hinako },
    { _T("C - Max Flash"), 0x0047680, 0x00476a0, indexKOFSprites_02Hinako },
    { _T("C - Hidden Super Desperation Move 2"), 0x00476a0, 0x00476c0, indexKOFSprites_02Hinako },
    { _T("C - Soul Palette"), 0x00476c0, 0x00476e0, indexKOFSprites_02Hinako },
    { _T("C - Hidden Super Desperation Move 3"), 0x00476e0, 0x0047700, indexKOFSprites_02Hinako },
};

const sGame_PaletteDataset KOF02UM_S_HINAKO_PALETTES_D[] =
{
    { _T("Hinako D"), 0x0047700, 0x0047720, indexKOFSprites_02Hinako },
    { _T("D - Hidden Super Desperation Move 1"), 0x0047720, 0x0047740, indexKOFSprites_02Hinako },
    { _T("D - Desperation Move / Super Desperation Move"), 0x0047740, 0x0047760, indexKOFSprites_02Hinako },
    { _T("D - Electric Shock Effect"), 0x0047760, 0x0047780, indexKOFSprites_02Hinako },
    { _T("D - Max Flash"), 0x0047780, 0x00477a0, indexKOFSprites_02Hinako },
    { _T("D - Hidden Super Desperation Move 2"), 0x00477a0, 0x00477c0, indexKOFSprites_02Hinako },
    { _T("D - Soul Palette"), 0x00477c0, 0x00477e0, indexKOFSprites_02Hinako },
    { _T("D - Hidden Super Desperation Move 3"), 0x00477e0, 0x0047800, indexKOFSprites_02Hinako },
};

const sDescTreeNode KOF02UM_S_HINAKO_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_HINAKO_PALETTES_A, ARRAYSIZE(KOF02UM_S_HINAKO_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_HINAKO_PALETTES_B, ARRAYSIZE(KOF02UM_S_HINAKO_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_HINAKO_PALETTES_C, ARRAYSIZE(KOF02UM_S_HINAKO_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_HINAKO_PALETTES_D, ARRAYSIZE(KOF02UM_S_HINAKO_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_HINAKO_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_HINAKO_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_HINAKO_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_HINAKO_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_HEIDERN_PALETTES_A[] =
{
    { _T("Heidern A"), 0x0047c00, 0x0047c20, indexKOFSprites_98Heidern },
    { _T("A - Intro Stuff"), 0x0047c20, 0x0047c40, indexKOFSprites_98Heidern },
    { _T("A - Storm Bringer Effects"), 0x0047c40, 0x0047c60, indexKOFSprites_98Heidern },
    { _T("A - Electric Shock Effect"), 0x0047c60, 0x0047c80, indexKOFSprites_98Heidern },
    { _T("A - Max Flash"), 0x0047c80, 0x0047ca0, indexKOFSprites_98Heidern },
    { _T("A - Hidden Super Desperation Move 2"), 0x0047ca0, 0x0047cc0, indexKOFSprites_98Heidern },
    { _T("A - Soul Palette"), 0x0047cc0, 0x0047ce0, indexKOFSprites_98Heidern },
    { _T("A - Hidden Super Desperation Move 3"), 0x0047ce0, 0x0047d00, indexKOFSprites_98Heidern },
};

const sGame_PaletteDataset KOF02UM_S_HEIDERN_PALETTES_B[] =
{
    { _T("Heidern B"), 0x0047d00, 0x0047d20, indexKOFSprites_98Heidern },
    { _T("B - Intro Stuff"), 0x0047d20, 0x0047d40, indexKOFSprites_98Heidern },
    { _T("B - Storm Bringer Effects"), 0x0047d40, 0x0047d60, indexKOFSprites_98Heidern },
    { _T("B - Electric Shock Effect"), 0x0047d60, 0x0047d80, indexKOFSprites_98Heidern },
    { _T("B - Max Flash"), 0x0047d80, 0x0047da0, indexKOFSprites_98Heidern },
    { _T("B - Hidden Super Desperation Move 2"), 0x0047da0, 0x0047dc0, indexKOFSprites_98Heidern },
    { _T("B - Soul Palette"), 0x0047dc0, 0x0047de0, indexKOFSprites_98Heidern },
    { _T("B - Hidden Super Desperation Move 3"), 0x0047de0, 0x0047e00, indexKOFSprites_98Heidern },
};

const sGame_PaletteDataset KOF02UM_S_HEIDERN_PALETTES_C[] =
{
    { _T("Heidern C"), 0x0047e00, 0x0047e20, indexKOFSprites_98Heidern },
    { _T("C - Intro Stuff"), 0x0047e20, 0x0047e40, indexKOFSprites_98Heidern },
    { _T("C - Storm Bringer Effects"), 0x0047e40, 0x0047e60, indexKOFSprites_98Heidern },
    { _T("C - Electric Shock Effect"), 0x0047e60, 0x0047e80, indexKOFSprites_98Heidern },
    { _T("C - Max Flash"), 0x0047e80, 0x0047ea0, indexKOFSprites_98Heidern },
    { _T("C - Hidden Super Desperation Move 2"), 0x0047ea0, 0x0047ec0, indexKOFSprites_98Heidern },
    { _T("C - Soul Palette"), 0x0047ec0, 0x0047ee0, indexKOFSprites_98Heidern },
    { _T("C - Hidden Super Desperation Move 3"), 0x0047ee0, 0x0047f00, indexKOFSprites_98Heidern },
};

const sGame_PaletteDataset KOF02UM_S_HEIDERN_PALETTES_D[] =
{
    { _T("Heidern D"), 0x0047f00, 0x0047f20, indexKOFSprites_98Heidern },
    { _T("D - Intro Stuff"), 0x0047f20, 0x0047f40, indexKOFSprites_98Heidern },
    { _T("D - Storm Bringer Effects"), 0x0047f40, 0x0047f60, indexKOFSprites_98Heidern },
    { _T("D - Electric Shock Effect"), 0x0047f60, 0x0047f80, indexKOFSprites_98Heidern },
    { _T("D - Max Flash"), 0x0047f80, 0x0047fa0, indexKOFSprites_98Heidern },
    { _T("D - Hidden Super Desperation Move 2"), 0x0047fa0, 0x0047fc0, indexKOFSprites_98Heidern },
    { _T("D - Soul Palette"), 0x0047fc0, 0x0047fe0, indexKOFSprites_98Heidern },
    { _T("D - Hidden Super Desperation Move 3"), 0x0047fe0, 0x0048000, indexKOFSprites_98Heidern },
};

const sDescTreeNode KOF02UM_S_HEIDERN_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_HEIDERN_PALETTES_A, ARRAYSIZE(KOF02UM_S_HEIDERN_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_HEIDERN_PALETTES_B, ARRAYSIZE(KOF02UM_S_HEIDERN_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_HEIDERN_PALETTES_C, ARRAYSIZE(KOF02UM_S_HEIDERN_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_HEIDERN_PALETTES_D, ARRAYSIZE(KOF02UM_S_HEIDERN_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_HEIDERN_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_HEIDERN_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_HEIDERN_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_HEIDERN_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_LIN_PALETTES_A[] =
{
    { _T("Lin A"), 0x0048400, 0x0048420, indexKOFSprites_02Lin },
    { _T("A - Hidden Super Desperation Move 1"), 0x0048420, 0x0048440, indexKOFSprites_02Lin },
    { _T("A - Lin Win Stuff"), 0x0048440, 0x0048460, indexKOFSprites_02Lin },
    { _T("A - Electric Shock Effect"), 0x0048460, 0x0048480, indexKOFSprites_02Lin },
    { _T("A - Max Flash"), 0x0048480, 0x00484a0, indexKOFSprites_02Lin },
    { _T("A - Hidden Super Desperation Move 2"), 0x00484a0, 0x00484c0, indexKOFSprites_02Lin },
    { _T("A - Soul Palette"), 0x00484c0, 0x00484e0, indexKOFSprites_02Lin },
    { _T("A - Hidden Super Desperation Move 3"), 0x00484e0, 0x0048500, indexKOFSprites_02Lin },
};

const sGame_PaletteDataset KOF02UM_S_LIN_PALETTES_B[] =
{
    { _T("Lin B"), 0x0048500, 0x0048520, indexKOFSprites_02Lin },
    { _T("B - Hidden Super Desperation Move 1"), 0x0048520, 0x0048540, indexKOFSprites_02Lin },
    { _T("B - Lin Win Stuff"), 0x0048540, 0x0048560, indexKOFSprites_02Lin },
    { _T("B - Electric Shock Effect"), 0x0048560, 0x0048580, indexKOFSprites_02Lin },
    { _T("B - Max Flash"), 0x0048580, 0x00485a0, indexKOFSprites_02Lin },
    { _T("B - Hidden Super Desperation Move 2"), 0x00485a0, 0x00485c0, indexKOFSprites_02Lin },
    { _T("B - Soul Palette"), 0x00485c0, 0x00485e0, indexKOFSprites_02Lin },
    { _T("B - Hidden Super Desperation Move 3"), 0x00485e0, 0x0048600, indexKOFSprites_02Lin },
};

const sGame_PaletteDataset KOF02UM_S_LIN_PALETTES_C[] =
{
    { _T("Lin C"), 0x0048600, 0x0048620, indexKOFSprites_02Lin },
    { _T("C - Hidden Super Desperation Move 1"), 0x0048620, 0x0048640, indexKOFSprites_02Lin },
    { _T("C - Lin Win Stuff"), 0x0048640, 0x0048660, indexKOFSprites_02Lin },
    { _T("C - Electric Shock Effect"), 0x0048660, 0x0048680, indexKOFSprites_02Lin },
    { _T("C - Max Flash"), 0x0048680, 0x00486a0, indexKOFSprites_02Lin },
    { _T("C - Hidden Super Desperation Move 2"), 0x00486a0, 0x00486c0, indexKOFSprites_02Lin },
    { _T("C - Soul Palette"), 0x00486c0, 0x00486e0, indexKOFSprites_02Lin },
    { _T("C - Hidden Super Desperation Move 3"), 0x00486e0, 0x0048700, indexKOFSprites_02Lin },
};

const sGame_PaletteDataset KOF02UM_S_LIN_PALETTES_D[] =
{
    { _T("Lin D"), 0x0048700, 0x0048720, indexKOFSprites_02Lin },
    { _T("D - Hidden Super Desperation Move 1"), 0x0048720, 0x0048740, indexKOFSprites_02Lin },
    { _T("D - Lin Win Stuff"), 0x0048740, 0x0048760, indexKOFSprites_02Lin },
    { _T("D - Electric Shock Effect"), 0x0048760, 0x0048780, indexKOFSprites_02Lin },
    { _T("D - Max Flash"), 0x0048780, 0x00487a0, indexKOFSprites_02Lin },
    { _T("D - Hidden Super Desperation Move 2"), 0x00487a0, 0x00487c0, indexKOFSprites_02Lin },
    { _T("D - Soul Palette"), 0x00487c0, 0x00487e0, indexKOFSprites_02Lin },
    { _T("D - Hidden Super Desperation Move 3"), 0x00487e0, 0x0048800, indexKOFSprites_02Lin },
};

const sDescTreeNode KOF02UM_S_LIN_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_LIN_PALETTES_A, ARRAYSIZE(KOF02UM_S_LIN_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_LIN_PALETTES_B, ARRAYSIZE(KOF02UM_S_LIN_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_LIN_PALETTES_C, ARRAYSIZE(KOF02UM_S_LIN_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_LIN_PALETTES_D, ARRAYSIZE(KOF02UM_S_LIN_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_LIN_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_LIN_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_LIN_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_LIN_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_EXTAKUMA_PALETTES_A[] =
{
    { _T("EX Takuma A"), 0x0048c00, 0x0048c20, indexKOFSprites_98Takuma },
    { _T("A - Hidden Super Desperation Move 1"), 0x0048c20, 0x0048c40, indexKOFSprites_98Takuma },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0048c40, 0x0048c60, indexKOFSprites_98Takuma },
    { _T("A - Electric Shock Effect"), 0x0048c60, 0x0048c80, indexKOFSprites_98Takuma },
    { _T("A - Max Flash"), 0x0048c80, 0x0048ca0, indexKOFSprites_98Takuma },
    { _T("A - Hidden Super Desperation Move 2"), 0x0048ca0, 0x0048cc0, indexKOFSprites_98Takuma },
    { _T("A - Soul Palette"), 0x0048cc0, 0x0048ce0, indexKOFSprites_98Takuma },
    { _T("A - Hidden Super Desperation Move 3"), 0x0048ce0, 0x0048d00, indexKOFSprites_98Takuma },
};

const sGame_PaletteDataset KOF02UM_S_EXTAKUMA_PALETTES_B[] =
{
    { _T("EX Takuma B"), 0x0048d00, 0x0048d20, indexKOFSprites_98Takuma },
    { _T("B - Hidden Super Desperation Move 1"), 0x0048d20, 0x0048d40, indexKOFSprites_98Takuma },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0048d40, 0x0048d60, indexKOFSprites_98Takuma },
    { _T("B - Electric Shock Effect"), 0x0048d60, 0x0048d80, indexKOFSprites_98Takuma },
    { _T("B - Max Flash"), 0x0048d80, 0x0048da0, indexKOFSprites_98Takuma },
    { _T("B - Hidden Super Desperation Move 2"), 0x0048da0, 0x0048dc0, indexKOFSprites_98Takuma },
    { _T("B - Soul Palette"), 0x0048dc0, 0x0048de0, indexKOFSprites_98Takuma },
    { _T("B - Hidden Super Desperation Move 3"), 0x0048de0, 0x0048e00, indexKOFSprites_98Takuma },
};

const sGame_PaletteDataset KOF02UM_S_EXTAKUMA_PALETTES_C[] =
{
    { _T("EX Takuma C"), 0x0048e00, 0x0048e20, indexKOFSprites_98Takuma },
    { _T("C - Hidden Super Desperation Move 1"), 0x0048e20, 0x0048e40, indexKOFSprites_98Takuma },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0048e40, 0x0048e60, indexKOFSprites_98Takuma },
    { _T("C - Electric Shock Effect"), 0x0048e60, 0x0048e80, indexKOFSprites_98Takuma },
    { _T("C - Max Flash"), 0x0048e80, 0x0048ea0, indexKOFSprites_98Takuma },
    { _T("C - Hidden Super Desperation Move 2"), 0x0048ea0, 0x0048ec0, indexKOFSprites_98Takuma },
    { _T("C - Soul Palette"), 0x0048ec0, 0x0048ee0, indexKOFSprites_98Takuma },
    { _T("C - Hidden Super Desperation Move 3"), 0x0048ee0, 0x0048f00, indexKOFSprites_98Takuma },
};

const sGame_PaletteDataset KOF02UM_S_EXTAKUMA_PALETTES_D[] =
{
    { _T("EX Takuma D"), 0x0048f00, 0x0048f20, indexKOFSprites_98Takuma },
    { _T("D - Hidden Super Desperation Move 1"), 0x0048f20, 0x0048f40, indexKOFSprites_98Takuma },
    { _T("D - Desperation Move / Super Desperation Move"), 0x0048f40, 0x0048f60, indexKOFSprites_98Takuma },
    { _T("D - Electric Shock Effect"), 0x0048f60, 0x0048f80, indexKOFSprites_98Takuma },
    { _T("D - Max Flash"), 0x0048f80, 0x0048fa0, indexKOFSprites_98Takuma },
    { _T("D - Hidden Super Desperation Move 2"), 0x0048fa0, 0x0048fc0, indexKOFSprites_98Takuma },
    { _T("D - Soul Palette"), 0x0048fc0, 0x0048fe0, indexKOFSprites_98Takuma },
    { _T("D - Hidden Super Desperation Move 3"), 0x0048fe0, 0x0049000, indexKOFSprites_98Takuma },
};

const sDescTreeNode KOF02UM_S_EXTAKUMA_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXTAKUMA_PALETTES_A, ARRAYSIZE(KOF02UM_S_EXTAKUMA_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXTAKUMA_PALETTES_B, ARRAYSIZE(KOF02UM_S_EXTAKUMA_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXTAKUMA_PALETTES_C, ARRAYSIZE(KOF02UM_S_EXTAKUMA_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXTAKUMA_PALETTES_D, ARRAYSIZE(KOF02UM_S_EXTAKUMA_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXTAKUMA_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_EXTAKUMA_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXTAKUMA_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_EXTAKUMA_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_BAO_PALETTES_A[] =
{
    { _T("Bao A"), 0x0049400, 0x0049420, indexKOFSprites_00Bao },
    { _T("A - Hidden Super Desperation Move 1"), 0x0049420, 0x0049440, indexKOFSprites_00Bao },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0049440, 0x0049460, indexKOFSprites_00Bao },
    { _T("A - Electric Shock Effect"), 0x0049460, 0x0049480, indexKOFSprites_00Bao },
    { _T("A - Max Flash"), 0x0049480, 0x00494a0, indexKOFSprites_00Bao },
    { _T("A - Hidden Super Desperation Move 2"), 0x00494a0, 0x00494c0, indexKOFSprites_00Bao },
    { _T("A - Soul Palette"), 0x00494c0, 0x00494e0, indexKOFSprites_00Bao },
    { _T("A - Hidden Super Desperation Move 3"), 0x00494e0, 0x0049500, indexKOFSprites_00Bao },
};

const sGame_PaletteDataset KOF02UM_S_BAO_PALETTES_B[] =
{
    { _T("Bao B"), 0x0049500, 0x0049520, indexKOFSprites_00Bao },
    { _T("B - Hidden Super Desperation Move 1"), 0x0049520, 0x0049540, indexKOFSprites_00Bao },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0049540, 0x0049560, indexKOFSprites_00Bao },
    { _T("B - Electric Shock Effect"), 0x0049560, 0x0049580, indexKOFSprites_00Bao },
    { _T("B - Max Flash"), 0x0049580, 0x00495a0, indexKOFSprites_00Bao },
    { _T("B - Hidden Super Desperation Move 2"), 0x00495a0, 0x00495c0, indexKOFSprites_00Bao },
    { _T("B - Soul Palette"), 0x00495c0, 0x00495e0, indexKOFSprites_00Bao },
    { _T("B - Hidden Super Desperation Move 3"), 0x00495e0, 0x0049600, indexKOFSprites_00Bao },
};

const sGame_PaletteDataset KOF02UM_S_BAO_PALETTES_C[] =
{
    { _T("Bao C"), 0x0049600, 0x0049620, indexKOFSprites_00Bao },
    { _T("C - Hidden Super Desperation Move 1"), 0x0049620, 0x0049640, indexKOFSprites_00Bao },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0049640, 0x0049660, indexKOFSprites_00Bao },
    { _T("C - Electric Shock Effect"), 0x0049660, 0x0049680, indexKOFSprites_00Bao },
    { _T("C - Max Flash"), 0x0049680, 0x00496a0, indexKOFSprites_00Bao },
    { _T("C - Hidden Super Desperation Move 2"), 0x00496a0, 0x00496c0, indexKOFSprites_00Bao },
    { _T("C - Soul Palette"), 0x00496c0, 0x00496e0, indexKOFSprites_00Bao },
    { _T("C - Hidden Super Desperation Move 3"), 0x00496e0, 0x0049700, indexKOFSprites_00Bao },
};

const sGame_PaletteDataset KOF02UM_S_BAO_PALETTES_D[] =
{
    { _T("Bao D"), 0x0049700, 0x0049720, indexKOFSprites_00Bao },
    { _T("D - Hidden Super Desperation Move 1"), 0x0049720, 0x0049740, indexKOFSprites_00Bao },
    { _T("D - Desperation Move / Super Desperation Move"), 0x0049740, 0x0049760, indexKOFSprites_00Bao },
    { _T("D - Electric Shock Effect"), 0x0049760, 0x0049780, indexKOFSprites_00Bao },
    { _T("D - Max Flash"), 0x0049780, 0x00497a0, indexKOFSprites_00Bao },
    { _T("D - Hidden Super Desperation Move 2"), 0x00497a0, 0x00497c0, indexKOFSprites_00Bao },
    { _T("D - Soul Palette"), 0x00497c0, 0x00497e0, indexKOFSprites_00Bao },
    { _T("D - Hidden Super Desperation Move 3"), 0x00497e0, 0x0049800, indexKOFSprites_00Bao },
};

const sDescTreeNode KOF02UM_S_BAO_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_BAO_PALETTES_A, ARRAYSIZE(KOF02UM_S_BAO_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_BAO_PALETTES_B, ARRAYSIZE(KOF02UM_S_BAO_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_BAO_PALETTES_C, ARRAYSIZE(KOF02UM_S_BAO_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_BAO_PALETTES_D, ARRAYSIZE(KOF02UM_S_BAO_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_BAO_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_BAO_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_BAO_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_BAO_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_JHUNHOON_PALETTES_A[] =
{
    { _T("Jhun Hoon A"), 0x0049c00, 0x0049c20, indexKOFSprites_02Jhun },
    { _T("A - Hidden Super Desperation Move 1"), 0x0049c20, 0x0049c40, indexKOFSprites_02Jhun },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0049c40, 0x0049c60, indexKOFSprites_02Jhun },
    { _T("A - Electric Shock Effect"), 0x0049c60, 0x0049c80, indexKOFSprites_02Jhun },
    { _T("A - Max Flash"), 0x0049c80, 0x0049ca0, indexKOFSprites_02Jhun },
    { _T("A - Hidden Super Desperation Move 2"), 0x0049ca0, 0x0049cc0, indexKOFSprites_02Jhun },
    { _T("A - Soul Palette"), 0x0049cc0, 0x0049ce0, indexKOFSprites_02Jhun },
    { _T("A - Hidden Super Desperation Move 3"), 0x0049ce0, 0x0049d00, indexKOFSprites_02Jhun },
};

const sGame_PaletteDataset KOF02UM_S_JHUNHOON_PALETTES_B[] =
{
    { _T("Jhun Hoon B"), 0x0049d00, 0x0049d20, indexKOFSprites_02Jhun },
    { _T("B - Hidden Super Desperation Move 1"), 0x0049d20, 0x0049d40, indexKOFSprites_02Jhun },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0049d40, 0x0049d60, indexKOFSprites_02Jhun },
    { _T("B - Electric Shock Effect"), 0x0049d60, 0x0049d80, indexKOFSprites_02Jhun },
    { _T("B - Max Flash"), 0x0049d80, 0x0049da0, indexKOFSprites_02Jhun },
    { _T("B - Hidden Super Desperation Move 2"), 0x0049da0, 0x0049dc0, indexKOFSprites_02Jhun },
    { _T("B - Soul Palette"), 0x0049dc0, 0x0049de0, indexKOFSprites_02Jhun },
    { _T("B - Hidden Super Desperation Move 3"), 0x0049de0, 0x0049e00, indexKOFSprites_02Jhun },
};

const sGame_PaletteDataset KOF02UM_S_JHUNHOON_PALETTES_C[] =
{
    { _T("Jhun Hoon C"), 0x0049e00, 0x0049e20, indexKOFSprites_02Jhun },
    { _T("C - Hidden Super Desperation Move 1"), 0x0049e20, 0x0049e40, indexKOFSprites_02Jhun },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0049e40, 0x0049e60, indexKOFSprites_02Jhun },
    { _T("C - Electric Shock Effect"), 0x0049e60, 0x0049e80, indexKOFSprites_02Jhun },
    { _T("C - Max Flash"), 0x0049e80, 0x0049ea0, indexKOFSprites_02Jhun },
    { _T("C - Hidden Super Desperation Move 2"), 0x0049ea0, 0x0049ec0, indexKOFSprites_02Jhun },
    { _T("C - Soul Palette"), 0x0049ec0, 0x0049ee0, indexKOFSprites_02Jhun },
    { _T("C - Hidden Super Desperation Move 3"), 0x0049ee0, 0x0049f00, indexKOFSprites_02Jhun },
};

const sGame_PaletteDataset KOF02UM_S_JHUNHOON_PALETTES_D[] =
{
    { _T("Jhun Hoon D"), 0x0049f00, 0x0049f20, indexKOFSprites_02Jhun },
    { _T("D - Hidden Super Desperation Move 1"), 0x0049f20, 0x0049f40, indexKOFSprites_02Jhun },
    { _T("D - Desperation Move / Super Desperation Move"), 0x0049f40, 0x0049f60, indexKOFSprites_02Jhun },
    { _T("D - Electric Shock Effect"), 0x0049f60, 0x0049f80, indexKOFSprites_02Jhun },
    { _T("D - Max Flash"), 0x0049f80, 0x0049fa0, indexKOFSprites_02Jhun },
    { _T("D - Hidden Super Desperation Move 2"), 0x0049fa0, 0x0049fc0, indexKOFSprites_02Jhun },
    { _T("D - Soul Palette"), 0x0049fc0, 0x0049fe0, indexKOFSprites_02Jhun },
    { _T("D - Hidden Super Desperation Move 3"), 0x0049fe0, 0x004a000, indexKOFSprites_02Jhun },
};

const sDescTreeNode KOF02UM_S_JHUNHOON_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_JHUNHOON_PALETTES_A, ARRAYSIZE(KOF02UM_S_JHUNHOON_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_JHUNHOON_PALETTES_B, ARRAYSIZE(KOF02UM_S_JHUNHOON_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_JHUNHOON_PALETTES_C, ARRAYSIZE(KOF02UM_S_JHUNHOON_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_JHUNHOON_PALETTES_D, ARRAYSIZE(KOF02UM_S_JHUNHOON_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_JHUNHOON_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_JHUNHOON_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_JHUNHOON_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_JHUNHOON_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_KYO1_PALETTES_A[] =
{
    { _T("Kyo-1 A"), 0x004a400, 0x004a420, indexKOFSprites_98Kyo },
    { _T("A - Fire Attack Stuff 1"), 0x004a420, 0x004a440, indexKOFSprites_98Kyo },
    { _T("A - Fire Attack Stuff 2"), 0x004a440, 0x004a460, indexKOFSprites_98Kyo },
    { _T("A - Electric Shock Effect"), 0x004a460, 0x004a480, indexKOFSprites_98Kyo },
    { _T("A - Max Flash"), 0x004a480, 0x004a4a0, indexKOFSprites_98Kyo },
    { _T("A - Hidden Super Desperation Move 2"), 0x004a4a0, 0x004a4c0, indexKOFSprites_98Kyo },
    { _T("A - Soul Palette"), 0x004a4c0, 0x004a4e0, indexKOFSprites_98Kyo },
    { _T("A - Hidden Super Desperation Move 3"), 0x004a4e0, 0x004a500, indexKOFSprites_98Kyo },
};

const sGame_PaletteDataset KOF02UM_S_KYO1_PALETTES_B[] =
{
    { _T("Kyo-1 B"), 0x004a500, 0x004a520, indexKOFSprites_98Kyo },
    { _T("B - Fire Attack Stuff 1"), 0x004a520, 0x004a540, indexKOFSprites_98Kyo },
    { _T("B - Fire Attack Stuff 2"), 0x004a540, 0x004a560, indexKOFSprites_98Kyo },
    { _T("B - Electric Shock Effect"), 0x004a560, 0x004a580, indexKOFSprites_98Kyo },
    { _T("B - Max Flash"), 0x004a580, 0x004a5a0, indexKOFSprites_98Kyo },
    { _T("B - Hidden Super Desperation Move 2"), 0x004a5a0, 0x004a5c0, indexKOFSprites_98Kyo },
    { _T("B - Soul Palette"), 0x004a5c0, 0x004a5e0, indexKOFSprites_98Kyo },
    { _T("B - Hidden Super Desperation Move 3"), 0x004a5e0, 0x004a600, indexKOFSprites_98Kyo },
};

const sGame_PaletteDataset KOF02UM_S_KYO1_PALETTES_C[] =
{
    { _T("Kyo-1 C"), 0x004a600, 0x004a620, indexKOFSprites_98Kyo },
    { _T("C - Fire Attack Stuff 1"), 0x004a620, 0x004a640, indexKOFSprites_98Kyo },
    { _T("C - Fire Attack Stuff 2"), 0x004a640, 0x004a660, indexKOFSprites_98Kyo },
    { _T("C - Electric Shock Effect"), 0x004a660, 0x004a680, indexKOFSprites_98Kyo },
    { _T("C - Max Flash"), 0x004a680, 0x004a6a0, indexKOFSprites_98Kyo },
    { _T("C - Hidden Super Desperation Move 2"), 0x004a6a0, 0x004a6c0, indexKOFSprites_98Kyo },
    { _T("C - Soul Palette"), 0x004a6c0, 0x004a6e0, indexKOFSprites_98Kyo },
    { _T("C - Hidden Super Desperation Move 3"), 0x004a6e0, 0x004a700, indexKOFSprites_98Kyo },
};

const sGame_PaletteDataset KOF02UM_S_KYO1_PALETTES_D[] =
{
    { _T("Kyo-1 D"), 0x004a700, 0x004a720, indexKOFSprites_98Kyo },
    { _T("D - Fire Attack Stuff 1"), 0x004a720, 0x004a740, indexKOFSprites_98Kyo },
    { _T("D - Fire Attack Stuff 2"), 0x004a740, 0x004a760, indexKOFSprites_98Kyo },
    { _T("D - Electric Shock Effect"), 0x004a760, 0x004a780, indexKOFSprites_98Kyo },
    { _T("D - Max Flash"), 0x004a780, 0x004a7a0, indexKOFSprites_98Kyo },
    { _T("D - Hidden Super Desperation Move 2"), 0x004a7a0, 0x004a7c0, indexKOFSprites_98Kyo },
    { _T("D - Soul Palette"), 0x004a7c0, 0x004a7e0, indexKOFSprites_98Kyo },
    { _T("D - Hidden Super Desperation Move 3"), 0x004a7e0, 0x004a800, indexKOFSprites_98Kyo },
};

const sDescTreeNode KOF02UM_S_KYO1_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO1_PALETTES_A, ARRAYSIZE(KOF02UM_S_KYO1_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO1_PALETTES_B, ARRAYSIZE(KOF02UM_S_KYO1_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO1_PALETTES_C, ARRAYSIZE(KOF02UM_S_KYO1_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO1_PALETTES_D, ARRAYSIZE(KOF02UM_S_KYO1_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO1_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_KYO1_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO1_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_KYO1_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_FOXY_PALETTES_A[] =
{
    { _T("Foxy A"), 0x004ac00, 0x004ac20, indexKOFSprites_02Foxy },
    { _T("A - Sword Cutter Effect"), 0x004ac20, 0x004ac40, indexKOFSprites_02Foxy },
    { _T("A - Diana Win Stuff"), 0x004ac40, 0x004ac60, indexKOFSprites_02Foxy },
    { _T("A - Electric Shock Effect"), 0x004ac60, 0x004ac80, indexKOFSprites_02Foxy },
    { _T("A - Max Flash"), 0x004ac80, 0x004aca0, indexKOFSprites_02Foxy },
    { _T("A - NESTS Flag Super/Win"), 0x004aca0, 0x004acc0, indexKOFSprites_02Foxy },
    { _T("A - Soul Palette"), 0x004acc0, 0x004ace0, indexKOFSprites_02Foxy },
    { _T("A - Hidden Super Desperation Move 3"), 0x004ace0, 0x004ad00, indexKOFSprites_02Foxy },
};

const sGame_PaletteDataset KOF02UM_S_FOXY_PALETTES_B[] =
{
    { _T("Foxy B"), 0x004ad00, 0x004ad20, indexKOFSprites_02Foxy },
    { _T("B - Sword Cutter Effect"), 0x004ad20, 0x004ad40, indexKOFSprites_02Foxy },
    { _T("B - Diana Win Stuff"), 0x004ad40, 0x004ad60, indexKOFSprites_02Foxy },
    { _T("B - Electric Shock Effect"), 0x004ad60, 0x004ad80, indexKOFSprites_02Foxy },
    { _T("B - Max Flash"), 0x004ad80, 0x004ada0, indexKOFSprites_02Foxy },
    { _T("B - NESTS Flag Super/Win"), 0x004ada0, 0x004adc0, indexKOFSprites_02Foxy },
    { _T("B - Soul Palette"), 0x004adc0, 0x004ade0, indexKOFSprites_02Foxy },
    { _T("B - Hidden Super Desperation Move 3"), 0x004ade0, 0x004ae00, indexKOFSprites_02Foxy },
};

const sGame_PaletteDataset KOF02UM_S_FOXY_PALETTES_C[] =
{
    { _T("Foxy C"), 0x004ae00, 0x004ae20, indexKOFSprites_02Foxy },
    { _T("C - Sword Cutter Effect"), 0x004ae20, 0x004ae40, indexKOFSprites_02Foxy },
    { _T("C - Diana Win Stuff"), 0x004ae40, 0x004ae60, indexKOFSprites_02Foxy },
    { _T("C - Electric Shock Effect"), 0x004ae60, 0x004ae80, indexKOFSprites_02Foxy },
    { _T("C - Max Flash"), 0x004ae80, 0x004aea0, indexKOFSprites_02Foxy },
    { _T("C - NESTS Flag Super/Win"), 0x004aea0, 0x004aec0, indexKOFSprites_02Foxy },
    { _T("C - Soul Palette"), 0x004aec0, 0x004aee0, indexKOFSprites_02Foxy },
    { _T("C - Hidden Super Desperation Move 3"), 0x004aee0, 0x004af00, indexKOFSprites_02Foxy },
};

const sGame_PaletteDataset KOF02UM_S_FOXY_PALETTES_D[] =
{
    { _T("Foxy D"), 0x004af00, 0x004af20, indexKOFSprites_02Foxy },
    { _T("D - Sword Cutter Effect"), 0x004af20, 0x004af40, indexKOFSprites_02Foxy },
    { _T("D - Diana Win Stuff"), 0x004af40, 0x004af60, indexKOFSprites_02Foxy },
    { _T("D - Electric Shock Effect"), 0x004af60, 0x004af80, indexKOFSprites_02Foxy },
    { _T("D - Max Flash"), 0x004af80, 0x004afa0, indexKOFSprites_02Foxy },
    { _T("D - NESTS Flag Super/Win"), 0x004afa0, 0x004afc0, indexKOFSprites_02Foxy },
    { _T("D - Soul Palette"), 0x004afc0, 0x004afe0, indexKOFSprites_02Foxy },
    { _T("D - Hidden Super Desperation Move 3"), 0x004afe0, 0x004b000, indexKOFSprites_02Foxy },
};

const sDescTreeNode KOF02UM_S_FOXY_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_FOXY_PALETTES_A, ARRAYSIZE(KOF02UM_S_FOXY_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_FOXY_PALETTES_B, ARRAYSIZE(KOF02UM_S_FOXY_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_FOXY_PALETTES_C, ARRAYSIZE(KOF02UM_S_FOXY_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_FOXY_PALETTES_D, ARRAYSIZE(KOF02UM_S_FOXY_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_FOXY_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_FOXY_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_FOXY_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_FOXY_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_KASUMI_PALETTES_A[] =
{
    { _T("Kasumi A"), 0x004b400, 0x004b420, indexKOFSprites_00Kasumi },
    { _T("A - Hidden Super Desperation Move 1"), 0x004b420, 0x004b440, indexKOFSprites_00Kasumi },
    { _T("A - Desperation Move / Super Desperation Move"), 0x004b440, 0x004b460, indexKOFSprites_00Kasumi },
    { _T("A - Electric Shock Effect"), 0x004b460, 0x004b480, indexKOFSprites_00Kasumi },
    { _T("A - Max Flash"), 0x004b480, 0x004b4a0, indexKOFSprites_00Kasumi },
    { _T("A - Hidden Super Desperation Move 2"), 0x004b4a0, 0x004b4c0, indexKOFSprites_00Kasumi },
    { _T("A - Soul Palette"), 0x004b4c0, 0x004b4e0, indexKOFSprites_00Kasumi },
    { _T("A - Hidden Super Desperation Move 3"), 0x004b4e0, 0x004b500, indexKOFSprites_00Kasumi },
};

const sGame_PaletteDataset KOF02UM_S_KASUMI_PALETTES_B[] =
{
    { _T("Kasumi B"), 0x004b500, 0x004b520, indexKOFSprites_00Kasumi },
    { _T("B - Hidden Super Desperation Move 1"), 0x004b520, 0x004b540, indexKOFSprites_00Kasumi },
    { _T("B - Desperation Move / Super Desperation Move"), 0x004b540, 0x004b560, indexKOFSprites_00Kasumi },
    { _T("B - Electric Shock Effect"), 0x004b560, 0x004b580, indexKOFSprites_00Kasumi },
    { _T("B - Max Flash"), 0x004b580, 0x004b5a0, indexKOFSprites_00Kasumi },
    { _T("B - Hidden Super Desperation Move 2"), 0x004b5a0, 0x004b5c0, indexKOFSprites_00Kasumi },
    { _T("B - Soul Palette"), 0x004b5c0, 0x004b5e0, indexKOFSprites_00Kasumi },
    { _T("B - Hidden Super Desperation Move 3"), 0x004b5e0, 0x004b600, indexKOFSprites_00Kasumi },
};

const sGame_PaletteDataset KOF02UM_S_KASUMI_PALETTES_C[] =
{
    { _T("Kasumi C"), 0x004b600, 0x004b620, indexKOFSprites_00Kasumi },
    { _T("C - Hidden Super Desperation Move 1"), 0x004b620, 0x004b640, indexKOFSprites_00Kasumi },
    { _T("C - Desperation Move / Super Desperation Move"), 0x004b640, 0x004b660, indexKOFSprites_00Kasumi },
    { _T("C - Electric Shock Effect"), 0x004b660, 0x004b680, indexKOFSprites_00Kasumi },
    { _T("C - Max Flash"), 0x004b680, 0x004b6a0, indexKOFSprites_00Kasumi },
    { _T("C - Hidden Super Desperation Move 2"), 0x004b6a0, 0x004b6c0, indexKOFSprites_00Kasumi },
    { _T("C - Soul Palette"), 0x004b6c0, 0x004b6e0, indexKOFSprites_00Kasumi },
    { _T("C - Hidden Super Desperation Move 3"), 0x004b6e0, 0x004b700, indexKOFSprites_00Kasumi },
};

const sGame_PaletteDataset KOF02UM_S_KASUMI_PALETTES_D[] =
{
    { _T("Kasumi D"), 0x004b700, 0x004b720, indexKOFSprites_00Kasumi },
    { _T("D - Hidden Super Desperation Move 1"), 0x004b720, 0x004b740, indexKOFSprites_00Kasumi },
    { _T("D - Desperation Move / Super Desperation Move"), 0x004b740, 0x004b760, indexKOFSprites_00Kasumi },
    { _T("D - Electric Shock Effect"), 0x004b760, 0x004b780, indexKOFSprites_00Kasumi },
    { _T("D - Max Flash"), 0x004b780, 0x004b7a0, indexKOFSprites_00Kasumi },
    { _T("D - Hidden Super Desperation Move 2"), 0x004b7a0, 0x004b7c0, indexKOFSprites_00Kasumi },
    { _T("D - Soul Palette"), 0x004b7c0, 0x004b7e0, indexKOFSprites_00Kasumi },
    { _T("D - Hidden Super Desperation Move 3"), 0x004b7e0, 0x004b800, indexKOFSprites_00Kasumi },
};

const sDescTreeNode KOF02UM_S_KASUMI_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KASUMI_PALETTES_A, ARRAYSIZE(KOF02UM_S_KASUMI_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KASUMI_PALETTES_B, ARRAYSIZE(KOF02UM_S_KASUMI_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KASUMI_PALETTES_C, ARRAYSIZE(KOF02UM_S_KASUMI_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KASUMI_PALETTES_D, ARRAYSIZE(KOF02UM_S_KASUMI_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KASUMI_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_KASUMI_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KASUMI_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_KASUMI_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_GEESE_PALETTES_A[] =
{
    { _T("Geese A"), 0x004bc00, 0x004bc20, indexKOFSprites_02Geese },
    { _T("A - Hidden Super Desperation Move 1"), 0x004bc20, 0x004bc40, indexKOFSprites_02Geese },
    { _T("A - Desperation Move / Super Desperation Move"), 0x004bc40, 0x004bc60, indexKOFSprites_02Geese },
    { _T("A - Electric Shock Effect"), 0x004bc60, 0x004bc80, indexKOFSprites_02Geese },
    { _T("A - Max Flash"), 0x004bc80, 0x004bca0, indexKOFSprites_02Geese },
    { _T("A - Hidden Super Desperation Move 2"), 0x004bca0, 0x004bcc0, indexKOFSprites_02Geese },
    { _T("A - Soul Palette"), 0x004bcc0, 0x004bce0, indexKOFSprites_02Geese },
    { _T("A - Hidden Super Desperation Move 3"), 0x004bce0, 0x004bd00, indexKOFSprites_02Geese },
};

const sGame_PaletteDataset KOF02UM_S_GEESE_PALETTES_B[] =
{
    { _T("Geese B"), 0x004bd00, 0x004bd20, indexKOFSprites_02Geese },
    { _T("B - Hidden Super Desperation Move 1"), 0x004bd20, 0x004bd40, indexKOFSprites_02Geese },
    { _T("B - Desperation Move / Super Desperation Move"), 0x004bd40, 0x004bd60, indexKOFSprites_02Geese },
    { _T("B - Electric Shock Effect"), 0x004bd60, 0x004bd80, indexKOFSprites_02Geese },
    { _T("B - Max Flash"), 0x004bd80, 0x004bda0, indexKOFSprites_02Geese },
    { _T("B - Hidden Super Desperation Move 2"), 0x004bda0, 0x004bdc0, indexKOFSprites_02Geese },
    { _T("B - Soul Palette"), 0x004bdc0, 0x004bde0, indexKOFSprites_02Geese },
    { _T("B - Hidden Super Desperation Move 3"), 0x004bde0, 0x004be00, indexKOFSprites_02Geese },
};

const sGame_PaletteDataset KOF02UM_S_GEESE_PALETTES_C[] =
{
    { _T("Geese C"), 0x004be00, 0x004be20, indexKOFSprites_02Geese },
    { _T("C - Hidden Super Desperation Move 1"), 0x004be20, 0x004be40, indexKOFSprites_02Geese },
    { _T("C - Desperation Move / Super Desperation Move"), 0x004be40, 0x004be60, indexKOFSprites_02Geese },
    { _T("C - Electric Shock Effect"), 0x004be60, 0x004be80, indexKOFSprites_02Geese },
    { _T("C - Max Flash"), 0x004be80, 0x004bea0, indexKOFSprites_02Geese },
    { _T("C - Hidden Super Desperation Move 2"), 0x004bea0, 0x004bec0, indexKOFSprites_02Geese },
    { _T("C - Soul Palette"), 0x004bec0, 0x004bee0, indexKOFSprites_02Geese },
    { _T("C - Hidden Super Desperation Move 3"), 0x004bee0, 0x004bf00, indexKOFSprites_02Geese },
};

const sGame_PaletteDataset KOF02UM_S_GEESE_PALETTES_D[] =
{
    { _T("Geese D"), 0x004bf00, 0x004bf20, indexKOFSprites_02Geese },
    { _T("D - Hidden Super Desperation Move 1"), 0x004bf20, 0x004bf40, indexKOFSprites_02Geese },
    { _T("D - Desperation Move / Super Desperation Move"), 0x004bf40, 0x004bf60, indexKOFSprites_02Geese },
    { _T("D - Electric Shock Effect"), 0x004bf60, 0x004bf80, indexKOFSprites_02Geese },
    { _T("D - Max Flash"), 0x004bf80, 0x004bfa0, indexKOFSprites_02Geese },
    { _T("D - Hidden Super Desperation Move 2"), 0x004bfa0, 0x004bfc0, indexKOFSprites_02Geese },
    { _T("D - Soul Palette"), 0x004bfc0, 0x004bfe0, indexKOFSprites_02Geese },
    { _T("D - Hidden Super Desperation Move 3"), 0x004bfe0, 0x004c000, indexKOFSprites_02Geese },
};

const sDescTreeNode KOF02UM_S_GEESE_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_GEESE_PALETTES_A, ARRAYSIZE(KOF02UM_S_GEESE_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_GEESE_PALETTES_B, ARRAYSIZE(KOF02UM_S_GEESE_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_GEESE_PALETTES_C, ARRAYSIZE(KOF02UM_S_GEESE_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_GEESE_PALETTES_D, ARRAYSIZE(KOF02UM_S_GEESE_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_GEESE_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_GEESE_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_GEESE_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_GEESE_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_NIGHTMAREGEESE_PALETTES_A[] =
{
    { _T("Nightmare Geese A"), 0x004c400, 0x004c420, indexKOFSprites_02Geese },
    { _T("A - Hidden Super Desperation Move 1"), 0x004c420, 0x004c440, indexKOFSprites_02Geese },
    { _T("A - Desperation Move / Super Desperation Move"), 0x004c440, 0x004c460, indexKOFSprites_02Geese },
    { _T("A - Electric Shock Effect"), 0x004c460, 0x004c480, indexKOFSprites_02Geese },
    { _T("A - Max Flash"), 0x004c480, 0x004c4a0, indexKOFSprites_02Geese },
    { _T("A - Hidden Super Desperation Move 2"), 0x004c4a0, 0x004c4c0, indexKOFSprites_02Geese },
    { _T("A - Soul Palette"), 0x004c4c0, 0x004c4e0, indexKOFSprites_02Geese },
    { _T("A - Hidden Super Desperation Move 3"), 0x004c4e0, 0x004c500, indexKOFSprites_02Geese },
};

const sGame_PaletteDataset KOF02UM_S_NIGHTMAREGEESE_PALETTES_B[] =
{
    { _T("Nightmare Geese B"), 0x004c500, 0x004c520, indexKOFSprites_02Geese },
    { _T("B - Hidden Super Desperation Move 1"), 0x004c520, 0x004c540, indexKOFSprites_02Geese },
    { _T("B - Desperation Move / Super Desperation Move"), 0x004c540, 0x004c560, indexKOFSprites_02Geese },
    { _T("B - Electric Shock Effect"), 0x004c560, 0x004c580, indexKOFSprites_02Geese },
    { _T("B - Max Flash"), 0x004c580, 0x004c5a0, indexKOFSprites_02Geese },
    { _T("B - Hidden Super Desperation Move 2"), 0x004c5a0, 0x004c5c0, indexKOFSprites_02Geese },
    { _T("B - Soul Palette"), 0x004c5c0, 0x004c5e0, indexKOFSprites_02Geese },
    { _T("B - Hidden Super Desperation Move 3"), 0x004c5e0, 0x004c600, indexKOFSprites_02Geese },
};

const sGame_PaletteDataset KOF02UM_S_NIGHTMAREGEESE_PALETTES_C[] =
{
    { _T("Nightmare Geese C"), 0x004c600, 0x004c620, indexKOFSprites_02Geese },
    { _T("C - Hidden Super Desperation Move 1"), 0x004c620, 0x004c640, indexKOFSprites_02Geese },
    { _T("C - Desperation Move / Super Desperation Move"), 0x004c640, 0x004c660, indexKOFSprites_02Geese },
    { _T("C - Electric Shock Effect"), 0x004c660, 0x004c680, indexKOFSprites_02Geese },
    { _T("C - Max Flash"), 0x004c680, 0x004c6a0, indexKOFSprites_02Geese },
    { _T("C - Hidden Super Desperation Move 2"), 0x004c6a0, 0x004c6c0, indexKOFSprites_02Geese },
    { _T("C - Soul Palette"), 0x004c6c0, 0x004c6e0, indexKOFSprites_02Geese },
    { _T("C - Hidden Super Desperation Move 3"), 0x004c6e0, 0x004c700, indexKOFSprites_02Geese },
};

const sGame_PaletteDataset KOF02UM_S_NIGHTMAREGEESE_PALETTES_D[] =
{
    { _T("Nightmare Geese D"), 0x004c700, 0x004c720, indexKOFSprites_02Geese },
    { _T("D - Hidden Super Desperation Move 1"), 0x004c720, 0x004c740, indexKOFSprites_02Geese },
    { _T("D - Desperation Move / Super Desperation Move"), 0x004c740, 0x004c760, indexKOFSprites_02Geese },
    { _T("D - Electric Shock Effect"), 0x004c760, 0x004c780, indexKOFSprites_02Geese },
    { _T("D - Max Flash"), 0x004c780, 0x004c7a0, indexKOFSprites_02Geese },
    { _T("D - Hidden Super Desperation Move 2"), 0x004c7a0, 0x004c7c0, indexKOFSprites_02Geese },
    { _T("D - Soul Palette"), 0x004c7c0, 0x004c7e0, indexKOFSprites_02Geese },
    { _T("D - Hidden Super Desperation Move 3"), 0x004c7e0, 0x004c800, indexKOFSprites_02Geese },
};

const sDescTreeNode KOF02UM_S_NIGHTMAREGEESE_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_NIGHTMAREGEESE_PALETTES_A, ARRAYSIZE(KOF02UM_S_NIGHTMAREGEESE_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_NIGHTMAREGEESE_PALETTES_B, ARRAYSIZE(KOF02UM_S_NIGHTMAREGEESE_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_NIGHTMAREGEESE_PALETTES_C, ARRAYSIZE(KOF02UM_S_NIGHTMAREGEESE_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_NIGHTMAREGEESE_PALETTES_D, ARRAYSIZE(KOF02UM_S_NIGHTMAREGEESE_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_NIGHTMAREGEESE_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_NIGHTMAREGEESE_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_NIGHTMAREGEESE_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_NIGHTMAREGEESE_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_EXROBERT_PALETTES_A[] =
{
    { _T("EX Robert A"), 0x004cc00, 0x004cc20, indexKOFSprites_00Robert },
    { _T("A - Hidden Super Desperation Move 1"), 0x004cc20, 0x004cc40, indexKOFSprites_00Robert },
    { _T("A - Desperation Move / Super Desperation Move"), 0x004cc40, 0x004cc60, indexKOFSprites_00Robert },
    { _T("A - Electric Shock Effect"), 0x004cc60, 0x004cc80, indexKOFSprites_00Robert },
    { _T("A - Max Flash"), 0x004cc80, 0x004cca0, indexKOFSprites_00Robert },
    { _T("A - Hidden Super Desperation Move 2"), 0x004cca0, 0x004ccc0, indexKOFSprites_00Robert },
    { _T("A - Soul Palette"), 0x004ccc0, 0x004cce0, indexKOFSprites_00Robert },
    { _T("A - Hidden Super Desperation Move 3"), 0x004cce0, 0x004cd00, indexKOFSprites_00Robert },
};

const sGame_PaletteDataset KOF02UM_S_EXROBERT_PALETTES_B[] =
{
    { _T("EX Robert B"), 0x004cd00, 0x004cd20, indexKOFSprites_00Robert },
    { _T("B - Hidden Super Desperation Move 1"), 0x004cd20, 0x004cd40, indexKOFSprites_00Robert },
    { _T("B - Desperation Move / Super Desperation Move"), 0x004cd40, 0x004cd60, indexKOFSprites_00Robert },
    { _T("B - Electric Shock Effect"), 0x004cd60, 0x004cd80, indexKOFSprites_00Robert },
    { _T("B - Max Flash"), 0x004cd80, 0x004cda0, indexKOFSprites_00Robert },
    { _T("B - Hidden Super Desperation Move 2"), 0x004cda0, 0x004cdc0, indexKOFSprites_00Robert },
    { _T("B - Soul Palette"), 0x004cdc0, 0x004cde0, indexKOFSprites_00Robert },
    { _T("B - Hidden Super Desperation Move 3"), 0x004cde0, 0x004ce00, indexKOFSprites_00Robert },
};

const sGame_PaletteDataset KOF02UM_S_EXROBERT_PALETTES_C[] =
{
    { _T("EX Robert C"), 0x004ce00, 0x004ce20, indexKOFSprites_00Robert },
    { _T("C - Hidden Super Desperation Move 1"), 0x004ce20, 0x004ce40, indexKOFSprites_00Robert },
    { _T("C - Desperation Move / Super Desperation Move"), 0x004ce40, 0x004ce60, indexKOFSprites_00Robert },
    { _T("C - Electric Shock Effect"), 0x004ce60, 0x004ce80, indexKOFSprites_00Robert },
    { _T("C - Max Flash"), 0x004ce80, 0x004cea0, indexKOFSprites_00Robert },
    { _T("C - Hidden Super Desperation Move 2"), 0x004cea0, 0x004cec0, indexKOFSprites_00Robert },
    { _T("C - Soul Palette"), 0x004cec0, 0x004cee0, indexKOFSprites_00Robert },
    { _T("C - Hidden Super Desperation Move 3"), 0x004cee0, 0x004cf00, indexKOFSprites_00Robert },
};

const sGame_PaletteDataset KOF02UM_S_EXROBERT_PALETTES_D[] =
{
    { _T("EX Robert D"), 0x004cf00, 0x004cf20, indexKOFSprites_00Robert },
    { _T("D - Hidden Super Desperation Move 1"), 0x004cf20, 0x004cf40, indexKOFSprites_00Robert },
    { _T("D - Desperation Move / Super Desperation Move"), 0x004cf40, 0x004cf60, indexKOFSprites_00Robert },
    { _T("D - Electric Shock Effect"), 0x004cf60, 0x004cf80, indexKOFSprites_00Robert },
    { _T("D - Max Flash"), 0x004cf80, 0x004cfa0, indexKOFSprites_00Robert },
    { _T("D - Hidden Super Desperation Move 2"), 0x004cfa0, 0x004cfc0, indexKOFSprites_00Robert },
    { _T("D - Soul Palette"), 0x004cfc0, 0x004cfe0, indexKOFSprites_00Robert },
    { _T("D - Hidden Super Desperation Move 3"), 0x004cfe0, 0x004d000, indexKOFSprites_00Robert },
};

const sDescTreeNode KOF02UM_S_EXROBERT_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXROBERT_PALETTES_A, ARRAYSIZE(KOF02UM_S_EXROBERT_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXROBERT_PALETTES_B, ARRAYSIZE(KOF02UM_S_EXROBERT_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXROBERT_PALETTES_C, ARRAYSIZE(KOF02UM_S_EXROBERT_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXROBERT_PALETTES_D, ARRAYSIZE(KOF02UM_S_EXROBERT_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXROBERT_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_EXROBERT_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXROBERT_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_EXROBERT_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_EXKENSOU_PALETTES_A[] =
{
    { _T("EX Kensou A"), 0x004d400, 0x004d420, indexKOFSprites_98Kensou },
    { _T("A - Super Desperation Move Attack"), 0x004d420, 0x004d440, indexKOFSprites_98Kensou },
    { _T("A - Desperation Move / Super Desperation Move"), 0x004d440, 0x004d460, indexKOFSprites_98Kensou },
    { _T("A - Electric Shock Effect"), 0x004d460, 0x004d480, indexKOFSprites_98Kensou },
    { _T("A - Max Flash"), 0x004d480, 0x004d4a0, indexKOFSprites_98Kensou },
    { _T("A - Hidden Super Desperation Move 2"), 0x004d4a0, 0x004d4c0, indexKOFSprites_98Kensou },
    { _T("A - Soul Palette"), 0x004d4c0, 0x004d4e0, indexKOFSprites_98Kensou },
    { _T("A - Hidden Super Desperation Move 3"), 0x004d4e0, 0x004d500, indexKOFSprites_98Kensou },
};

const sGame_PaletteDataset KOF02UM_S_EXKENSOU_PALETTES_B[] =
{
    { _T("EX Kensou B"), 0x004d500, 0x004d520, indexKOFSprites_98Kensou },
    { _T("B - Super Desperation Move Attack"), 0x004d520, 0x004d540, indexKOFSprites_98Kensou },
    { _T("B - Desperation Move / Super Desperation Move"), 0x004d540, 0x004d560, indexKOFSprites_98Kensou },
    { _T("B - Electric Shock Effect"), 0x004d560, 0x004d580, indexKOFSprites_98Kensou },
    { _T("B - Max Flash"), 0x004d580, 0x004d5a0, indexKOFSprites_98Kensou },
    { _T("B - Hidden Super Desperation Move 2"), 0x004d5a0, 0x004d5c0, indexKOFSprites_98Kensou },
    { _T("B - Soul Palette"), 0x004d5c0, 0x004d5e0, indexKOFSprites_98Kensou },
    { _T("B - Hidden Super Desperation Move 3"), 0x004d5e0, 0x004d600, indexKOFSprites_98Kensou },
};

const sGame_PaletteDataset KOF02UM_S_EXKENSOU_PALETTES_C[] =
{
    { _T("EX Kensou C"), 0x004d600, 0x004d620, indexKOFSprites_98Kensou },
    { _T("C - Super Desperation Move Attack"), 0x004d620, 0x004d640, indexKOFSprites_98Kensou },
    { _T("C - Desperation Move / Super Desperation Move"), 0x004d640, 0x004d660, indexKOFSprites_98Kensou },
    { _T("C - Electric Shock Effect"), 0x004d660, 0x004d680, indexKOFSprites_98Kensou },
    { _T("C - Max Flash"), 0x004d680, 0x004d6a0, indexKOFSprites_98Kensou },
    { _T("C - Hidden Super Desperation Move 2"), 0x004d6a0, 0x004d6c0, indexKOFSprites_98Kensou },
    { _T("C - Soul Palette"), 0x004d6c0, 0x004d6e0, indexKOFSprites_98Kensou },
    { _T("C - Hidden Super Desperation Move 3"), 0x004d6e0, 0x004d700, indexKOFSprites_98Kensou },
};

const sGame_PaletteDataset KOF02UM_S_EXKENSOU_PALETTES_D[] =
{
    { _T("EX Kensou D"), 0x004d700, 0x004d720, indexKOFSprites_98Kensou },
    { _T("D - Super Desperation Move Attack"), 0x004d720, 0x004d740, indexKOFSprites_98Kensou },
    { _T("D - Desperation Move / Super Desperation Move"), 0x004d740, 0x004d760, indexKOFSprites_98Kensou },
    { _T("D - Electric Shock Effect"), 0x004d760, 0x004d780, indexKOFSprites_98Kensou },
    { _T("D - Max Flash"), 0x004d780, 0x004d7a0, indexKOFSprites_98Kensou },
    { _T("D - Hidden Super Desperation Move 2"), 0x004d7a0, 0x004d7c0, indexKOFSprites_98Kensou },
    { _T("D - Soul Palette"), 0x004d7c0, 0x004d7e0, indexKOFSprites_98Kensou },
    { _T("D - Hidden Super Desperation Move 3"), 0x004d7e0, 0x004d800, indexKOFSprites_98Kensou },
};

const sDescTreeNode KOF02UM_S_EXKENSOU_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXKENSOU_PALETTES_A, ARRAYSIZE(KOF02UM_S_EXKENSOU_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXKENSOU_PALETTES_B, ARRAYSIZE(KOF02UM_S_EXKENSOU_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXKENSOU_PALETTES_C, ARRAYSIZE(KOF02UM_S_EXKENSOU_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXKENSOU_PALETTES_D, ARRAYSIZE(KOF02UM_S_EXKENSOU_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXKENSOU_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_EXKENSOU_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXKENSOU_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_EXKENSOU_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_KYO2_PALETTES_A[] =
{
    { _T("Kyo-2 A"), 0x004dc00, 0x004dc20, indexKOFSprites_98Kyo },
    { _T("A - Fire Attack Stuff 1"), 0x004dc20, 0x004dc40, indexKOFSprites_98Kyo },
    { _T("A - Fire Attack Stuff 2"), 0x004dc40, 0x004dc60, indexKOFSprites_98Kyo },
    { _T("A - Electric Shock Effect"), 0x004dc60, 0x004dc80, indexKOFSprites_98Kyo },
    { _T("A - Max Flash"), 0x004dc80, 0x004dca0, indexKOFSprites_98Kyo },
    { _T("A - Hidden Super Desperation Move 2"), 0x004dca0, 0x004dcc0, indexKOFSprites_98Kyo },
    { _T("A - Soul Palette"), 0x004dcc0, 0x004dce0, indexKOFSprites_98Kyo },
    { _T("A - Hidden Super Desperation Move 3"), 0x004dce0, 0x004dd00, indexKOFSprites_98Kyo },
};

const sGame_PaletteDataset KOF02UM_S_KYO2_PALETTES_B[] =
{
    { _T("Kyo-2 B"), 0x004dd00, 0x004dd20, indexKOFSprites_98Kyo },
    { _T("B - Fire Attack Stuff 1"), 0x004dd20, 0x004dd40, indexKOFSprites_98Kyo },
    { _T("B - Fire Attack Stuff 2"), 0x004dd40, 0x004dd60, indexKOFSprites_98Kyo },
    { _T("B - Electric Shock Effect"), 0x004dd60, 0x004dd80, indexKOFSprites_98Kyo },
    { _T("B - Max Flash"), 0x004dd80, 0x004dda0, indexKOFSprites_98Kyo },
    { _T("B - Hidden Super Desperation Move 2"), 0x004dda0, 0x004ddc0, indexKOFSprites_98Kyo },
    { _T("B - Soul Palette"), 0x004ddc0, 0x004dde0, indexKOFSprites_98Kyo },
    { _T("B - Hidden Super Desperation Move 3"), 0x004dde0, 0x004de00, indexKOFSprites_98Kyo },
};

const sGame_PaletteDataset KOF02UM_S_KYO2_PALETTES_C[] =
{
    { _T("Kyo-2 C"), 0x004de00, 0x004de20, indexKOFSprites_98Kyo },
    { _T("C - Fire Attack Stuff 1"), 0x004de20, 0x004de40, indexKOFSprites_98Kyo },
    { _T("C - Fire Attack Stuff 2"), 0x004de40, 0x004de60, indexKOFSprites_98Kyo },
    { _T("C - Electric Shock Effect"), 0x004de60, 0x004de80, indexKOFSprites_98Kyo },
    { _T("C - Max Flash"), 0x004de80, 0x004dea0, indexKOFSprites_98Kyo },
    { _T("C - Hidden Super Desperation Move 2"), 0x004dea0, 0x004dec0, indexKOFSprites_98Kyo },
    { _T("C - Soul Palette"), 0x004dec0, 0x004dee0, indexKOFSprites_98Kyo },
    { _T("C - Hidden Super Desperation Move 3"), 0x004dee0, 0x004df00, indexKOFSprites_98Kyo },
};

const sGame_PaletteDataset KOF02UM_S_KYO2_PALETTES_D[] =
{
    { _T("Kyo-2 D"), 0x004df00, 0x004df20, indexKOFSprites_98Kyo },
    { _T("D - Fire Attack Stuff 1"), 0x004df20, 0x004df40, indexKOFSprites_98Kyo },
    { _T("D - Fire Attack Stuff 2"), 0x004df40, 0x004df60, indexKOFSprites_98Kyo },
    { _T("D - Electric Shock Effect"), 0x004df60, 0x004df80, indexKOFSprites_98Kyo },
    { _T("D - Max Flash"), 0x004df80, 0x004dfa0, indexKOFSprites_98Kyo },
    { _T("D - Hidden Super Desperation Move 2"), 0x004dfa0, 0x004dfc0, indexKOFSprites_98Kyo },
    { _T("D - Soul Palette"), 0x004dfc0, 0x004dfe0, indexKOFSprites_98Kyo },
    { _T("D - Hidden Super Desperation Move 3"), 0x004dfe0, 0x004e000, indexKOFSprites_98Kyo },
};

const sDescTreeNode KOF02UM_S_KYO2_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO2_PALETTES_A, ARRAYSIZE(KOF02UM_S_KYO2_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO2_PALETTES_B, ARRAYSIZE(KOF02UM_S_KYO2_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO2_PALETTES_C, ARRAYSIZE(KOF02UM_S_KYO2_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO2_PALETTES_D, ARRAYSIZE(KOF02UM_S_KYO2_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO2_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_KYO2_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO2_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_KYO2_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_GOENITZ_PALETTES_A[] =
{
    { _T("Goenitz A"), 0x004e400, 0x004e420, indexKOFSprites_02Goenitz },
    { _T("A - Hidden Super Desperation Move 1"), 0x004e420, 0x004e440, indexKOFSprites_02Goenitz },
    { _T("A - Desperation Move / Super Desperation Move"), 0x004e440, 0x004e460, indexKOFSprites_02Goenitz },
    { _T("A - Electric Shock Effect"), 0x004e460, 0x004e480, indexKOFSprites_02Goenitz },
    { _T("A - Max Flash"), 0x004e480, 0x004e4a0, indexKOFSprites_02Goenitz },
    { _T("A - Hidden Super Desperation Move 2"), 0x004e4a0, 0x004e4c0, indexKOFSprites_02Goenitz },
    { _T("A - Soul Palette"), 0x004e4c0, 0x004e4e0, indexKOFSprites_02Goenitz },
    { _T("A - Hidden Super Desperation Move 3"), 0x004e4e0, 0x004e500, indexKOFSprites_02Goenitz },
};

const sGame_PaletteDataset KOF02UM_S_GOENITZ_PALETTES_B[] =
{
    { _T("Goenitz B"), 0x004e500, 0x004e520, indexKOFSprites_02Goenitz },
    { _T("B - Hidden Super Desperation Move 1"), 0x004e520, 0x004e540, indexKOFSprites_02Goenitz },
    { _T("B - Desperation Move / Super Desperation Move"), 0x004e540, 0x004e560, indexKOFSprites_02Goenitz },
    { _T("B - Electric Shock Effect"), 0x004e560, 0x004e580, indexKOFSprites_02Goenitz },
    { _T("B - Max Flash"), 0x004e580, 0x004e5a0, indexKOFSprites_02Goenitz },
    { _T("B - Hidden Super Desperation Move 2"), 0x004e5a0, 0x004e5c0, indexKOFSprites_02Goenitz },
    { _T("B - Soul Palette"), 0x004e5c0, 0x004e5e0, indexKOFSprites_02Goenitz },
    { _T("B - Hidden Super Desperation Move 3"), 0x004e5e0, 0x004e600, indexKOFSprites_02Goenitz },
};

const sGame_PaletteDataset KOF02UM_S_GOENITZ_PALETTES_C[] =
{
    { _T("Goenitz C"), 0x004e600, 0x004e620, indexKOFSprites_02Goenitz },
    { _T("C - Hidden Super Desperation Move 1"), 0x004e620, 0x004e640, indexKOFSprites_02Goenitz },
    { _T("C - Desperation Move / Super Desperation Move"), 0x004e640, 0x004e660, indexKOFSprites_02Goenitz },
    { _T("C - Electric Shock Effect"), 0x004e660, 0x004e680, indexKOFSprites_02Goenitz },
    { _T("C - Max Flash"), 0x004e680, 0x004e6a0, indexKOFSprites_02Goenitz },
    { _T("C - Hidden Super Desperation Move 2"), 0x004e6a0, 0x004e6c0, indexKOFSprites_02Goenitz },
    { _T("C - Soul Palette"), 0x004e6c0, 0x004e6e0, indexKOFSprites_02Goenitz },
    { _T("C - Hidden Super Desperation Move 3"), 0x004e6e0, 0x004e700, indexKOFSprites_02Goenitz },
};

const sGame_PaletteDataset KOF02UM_S_GOENITZ_PALETTES_D[] =
{
    { _T("Goenitz D"), 0x004e700, 0x004e720, indexKOFSprites_02Goenitz },
    { _T("D - Hidden Super Desperation Move 1"), 0x004e720, 0x004e740, indexKOFSprites_02Goenitz },
    { _T("D - Desperation Move / Super Desperation Move"), 0x004e740, 0x004e760, indexKOFSprites_02Goenitz },
    { _T("D - Electric Shock Effect"), 0x004e760, 0x004e780, indexKOFSprites_02Goenitz },
    { _T("D - Max Flash"), 0x004e780, 0x004e7a0, indexKOFSprites_02Goenitz },
    { _T("D - Hidden Super Desperation Move 2"), 0x004e7a0, 0x004e7c0, indexKOFSprites_02Goenitz },
    { _T("D - Soul Palette"), 0x004e7c0, 0x004e7e0, indexKOFSprites_02Goenitz },
    { _T("D - Hidden Super Desperation Move 3"), 0x004e7e0, 0x004e800, indexKOFSprites_02Goenitz },
};

const sDescTreeNode KOF02UM_S_GOENITZ_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_GOENITZ_PALETTES_A, ARRAYSIZE(KOF02UM_S_GOENITZ_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_GOENITZ_PALETTES_B, ARRAYSIZE(KOF02UM_S_GOENITZ_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_GOENITZ_PALETTES_C, ARRAYSIZE(KOF02UM_S_GOENITZ_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_GOENITZ_PALETTES_D, ARRAYSIZE(KOF02UM_S_GOENITZ_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_GOENITZ_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_GOENITZ_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_GOENITZ_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_GOENITZ_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_KRIZALID_PALETTES_A[] =
{
    { _T("Krizalid A"), 0x004ec00, 0x004ec20, indexKOFSprites_99Krizalid },
    { _T("A - Krizalid Intro Stuff"), 0x004ec20, 0x004ec40, indexKOFSprites_99Krizalid },
    { _T("A - SDM/MAX Fire 1"), 0x004ec40, 0x004ec60, indexKOFSprites_99Krizalid },
    { _T("A - Electric Shock Effect"), 0x004ec60, 0x004ec80, indexKOFSprites_99Krizalid },
    { _T("A - Max Flash"), 0x004ec80, 0x004eca0, indexKOFSprites_99Krizalid },
    { _T("A - Hidden Super Desperation Move 2"), 0x004eca0, 0x004ecc0, indexKOFSprites_99Krizalid },
    { _T("A - Soul Palette"), 0x004ecc0, 0x004ece0, indexKOFSprites_99Krizalid },
    { _T("A - Hidden Super Desperation Move 3"), 0x004ece0, 0x004ed00, indexKOFSprites_99Krizalid },
};

const sGame_PaletteDataset KOF02UM_S_KRIZALID_PALETTES_B[] =
{
    { _T("Krizalid B"), 0x004ed00, 0x004ed20, indexKOFSprites_99Krizalid },
    { _T("B - Krizalid Intro Stuff"), 0x004ed20, 0x004ed40, indexKOFSprites_99Krizalid },
    { _T("B - SDM/MAX Fire 1"), 0x004ed40, 0x004ed60, indexKOFSprites_99Krizalid },
    { _T("B - Electric Shock Effect"), 0x004ed60, 0x004ed80, indexKOFSprites_99Krizalid },
    { _T("B - Max Flash"), 0x004ed80, 0x004eda0, indexKOFSprites_99Krizalid },
    { _T("B - Hidden Super Desperation Move 2"), 0x004eda0, 0x004edc0, indexKOFSprites_99Krizalid },
    { _T("B - Soul Palette"), 0x004edc0, 0x004ede0, indexKOFSprites_99Krizalid },
    { _T("B - Hidden Super Desperation Move 3"), 0x004ede0, 0x004ee00, indexKOFSprites_99Krizalid },
};

const sGame_PaletteDataset KOF02UM_S_KRIZALID_PALETTES_C[] =
{
    { _T("Krizalid C"), 0x004ee00, 0x004ee20, indexKOFSprites_99Krizalid },
    { _T("C - Krizalid Intro Stuff"), 0x004ee20, 0x004ee40, indexKOFSprites_99Krizalid },
    { _T("C - SDM/MAX Fire 1"), 0x004ee40, 0x004ee60, indexKOFSprites_99Krizalid },
    { _T("C - Electric Shock Effect"), 0x004ee60, 0x004ee80, indexKOFSprites_99Krizalid },
    { _T("C - Max Flash"), 0x004ee80, 0x004eea0, indexKOFSprites_99Krizalid },
    { _T("C - Hidden Super Desperation Move 2"), 0x004eea0, 0x004eec0, indexKOFSprites_99Krizalid },
    { _T("C - Soul Palette"), 0x004eec0, 0x004eee0, indexKOFSprites_99Krizalid },
    { _T("C - Hidden Super Desperation Move 3"), 0x004eee0, 0x004ef00, indexKOFSprites_99Krizalid },
};

const sGame_PaletteDataset KOF02UM_S_KRIZALID_PALETTES_D[] =
{
    { _T("Krizalid D"), 0x004ef00, 0x004ef20, indexKOFSprites_99Krizalid },
    { _T("D - Krizalid Intro Stuff"), 0x004ef20, 0x004ef40, indexKOFSprites_99Krizalid },
    { _T("D - SDM/MAX Fire 1"), 0x004ef40, 0x004ef60, indexKOFSprites_99Krizalid },
    { _T("D - Electric Shock Effect"), 0x004ef60, 0x004ef80, indexKOFSprites_99Krizalid },
    { _T("D - Max Flash"), 0x004ef80, 0x004efa0, indexKOFSprites_99Krizalid },
    { _T("D - Hidden Super Desperation Move 2"), 0x004efa0, 0x004efc0, indexKOFSprites_99Krizalid },
    { _T("D - Soul Palette"), 0x004efc0, 0x004efe0, indexKOFSprites_99Krizalid },
    { _T("D - Hidden Super Desperation Move 3"), 0x004efe0, 0x004f000, indexKOFSprites_99Krizalid },
};

const sDescTreeNode KOF02UM_S_KRIZALID_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KRIZALID_PALETTES_A, ARRAYSIZE(KOF02UM_S_KRIZALID_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KRIZALID_PALETTES_B, ARRAYSIZE(KOF02UM_S_KRIZALID_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KRIZALID_PALETTES_C, ARRAYSIZE(KOF02UM_S_KRIZALID_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KRIZALID_PALETTES_D, ARRAYSIZE(KOF02UM_S_KRIZALID_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KRIZALID_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_KRIZALID_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KRIZALID_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_KRIZALID_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_CLONEZERO_PALETTES_A[] =
{
    { _T("Clone Zero A"), 0x004f400, 0x004f420, indexKOFSprites_00ZeroClone },
    { _T("A - Hidden Super Desperation Move 1"), 0x004f420, 0x004f440, indexKOFSprites_00ZeroClone },
    { _T("A - Desperation Move / Super Desperation Move"), 0x004f440, 0x004f460, indexKOFSprites_00ZeroClone },
    { _T("A - Electric Shock Effect"), 0x004f460, 0x004f480, indexKOFSprites_00ZeroClone },
    { _T("A - Max Flash"), 0x004f480, 0x004f4a0, indexKOFSprites_00ZeroClone },
    { _T("A - Hidden Super Desperation Move 2"), 0x004f4a0, 0x004f4c0, indexKOFSprites_00ZeroClone },
    { _T("A - Soul Palette"), 0x004f4c0, 0x004f4e0, indexKOFSprites_00ZeroClone },
    { _T("A - Hidden Super Desperation Move 3"), 0x004f4e0, 0x004f500, indexKOFSprites_00ZeroClone },
};

const sGame_PaletteDataset KOF02UM_S_CLONEZERO_PALETTES_B[] =
{
    { _T("Clone Zero B"), 0x004f500, 0x004f520, indexKOFSprites_00ZeroClone },
    { _T("B - Hidden Super Desperation Move 1"), 0x004f520, 0x004f540, indexKOFSprites_00ZeroClone },
    { _T("B - Desperation Move / Super Desperation Move"), 0x004f540, 0x004f560, indexKOFSprites_00ZeroClone },
    { _T("B - Electric Shock Effect"), 0x004f560, 0x004f580, indexKOFSprites_00ZeroClone },
    { _T("B - Max Flash"), 0x004f580, 0x004f5a0, indexKOFSprites_00ZeroClone },
    { _T("B - Hidden Super Desperation Move 2"), 0x004f5a0, 0x004f5c0, indexKOFSprites_00ZeroClone },
    { _T("B - Soul Palette"), 0x004f5c0, 0x004f5e0, indexKOFSprites_00ZeroClone },
    { _T("B - Hidden Super Desperation Move 3"), 0x004f5e0, 0x004f600, indexKOFSprites_00ZeroClone },
};

const sGame_PaletteDataset KOF02UM_S_CLONEZERO_PALETTES_C[] =
{
    { _T("Clone Zero C"), 0x004f600, 0x004f620, indexKOFSprites_00ZeroClone },
    { _T("C - Hidden Super Desperation Move 1"), 0x004f620, 0x004f640, indexKOFSprites_00ZeroClone },
    { _T("C - Desperation Move / Super Desperation Move"), 0x004f640, 0x004f660, indexKOFSprites_00ZeroClone },
    { _T("C - Electric Shock Effect"), 0x004f660, 0x004f680, indexKOFSprites_00ZeroClone },
    { _T("C - Max Flash"), 0x004f680, 0x004f6a0, indexKOFSprites_00ZeroClone },
    { _T("C - Hidden Super Desperation Move 2"), 0x004f6a0, 0x004f6c0, indexKOFSprites_00ZeroClone },
    { _T("C - Soul Palette"), 0x004f6c0, 0x004f6e0, indexKOFSprites_00ZeroClone },
    { _T("C - Hidden Super Desperation Move 3"), 0x004f6e0, 0x004f700, indexKOFSprites_00ZeroClone },
};

const sGame_PaletteDataset KOF02UM_S_CLONEZERO_PALETTES_D[] =
{
    { _T("Clone Zero D"), 0x004f700, 0x004f720, indexKOFSprites_00ZeroClone },
    { _T("D - Hidden Super Desperation Move 1"), 0x004f720, 0x004f740, indexKOFSprites_00ZeroClone },
    { _T("D - Desperation Move / Super Desperation Move"), 0x004f740, 0x004f760, indexKOFSprites_00ZeroClone },
    { _T("D - Electric Shock Effect"), 0x004f760, 0x004f780, indexKOFSprites_00ZeroClone },
    { _T("D - Max Flash"), 0x004f780, 0x004f7a0, indexKOFSprites_00ZeroClone },
    { _T("D - Hidden Super Desperation Move 2"), 0x004f7a0, 0x004f7c0, indexKOFSprites_00ZeroClone },
    { _T("D - Soul Palette"), 0x004f7c0, 0x004f7e0, indexKOFSprites_00ZeroClone },
    { _T("D - Hidden Super Desperation Move 3"), 0x004f7e0, 0x004f800, indexKOFSprites_00ZeroClone },
};

const sDescTreeNode KOF02UM_S_CLONEZERO_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CLONEZERO_PALETTES_A, ARRAYSIZE(KOF02UM_S_CLONEZERO_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CLONEZERO_PALETTES_B, ARRAYSIZE(KOF02UM_S_CLONEZERO_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CLONEZERO_PALETTES_C, ARRAYSIZE(KOF02UM_S_CLONEZERO_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CLONEZERO_PALETTES_D, ARRAYSIZE(KOF02UM_S_CLONEZERO_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CLONEZERO_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_CLONEZERO_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CLONEZERO_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_CLONEZERO_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_ORIGINALZERO_PALETTES_A[] =
{
    { _T("Original Zero A"), 0x004fc00, 0x004fc20, indexKOFSprites_02OZero },
    { _T("A - Striker Glugan"), 0x004fc20, 0x004fc40, indexKOFSprites_02OZero },
    { _T("A - Desperation Move / Super Desperation Move"), 0x004fc40, 0x004fc60, indexKOFSprites_02OZero },
    { _T("A - Electric Shock Effect"), 0x004fc60, 0x004fc80, indexKOFSprites_02OZero },
    { _T("A - Max Flash"), 0x004fc80, 0x004fca0, indexKOFSprites_02OZero },
    { _T("A - Striker Lon"), 0x004fca0, 0x004fcc0, indexKOFSprites_02OZero },
    { _T("A - Soul Palette"), 0x004fcc0, 0x004fce0, indexKOFSprites_02OZero },
    { _T("A - Striker Krizalid"), 0x004fce0, 0x004fd00, indexKOFSprites_02OZero },
};

const sGame_PaletteDataset KOF02UM_S_ORIGINALZERO_PALETTES_B[] =
{
    { _T("Original Zero B"), 0x004fd00, 0x004fd20, indexKOFSprites_02OZero },
    { _T("B - Striker Glugan"), 0x004fd20, 0x004fd40, indexKOFSprites_02OZero },
    { _T("B - Desperation Move / Super Desperation Move"), 0x004fd40, 0x004fd60, indexKOFSprites_02OZero },
    { _T("B - Electric Shock Effect"), 0x004fd60, 0x004fd80, indexKOFSprites_02OZero },
    { _T("B - Max Flash"), 0x004fd80, 0x004fda0, indexKOFSprites_02OZero },
    { _T("B - Striker Lon"), 0x004fda0, 0x004fdc0, indexKOFSprites_02OZero },
    { _T("B - Soul Palette"), 0x004fdc0, 0x004fde0, indexKOFSprites_02OZero },
    { _T("B - Striker Krizalid"), 0x004fde0, 0x004fe00, indexKOFSprites_02OZero },
};

const sGame_PaletteDataset KOF02UM_S_ORIGINALZERO_PALETTES_C[] =
{
    { _T("Original Zero C"), 0x004fe00, 0x004fe20, indexKOFSprites_02OZero },
    { _T("C - Striker Glugan"), 0x004fe20, 0x004fe40, indexKOFSprites_02OZero },
    { _T("C - Desperation Move / Super Desperation Move"), 0x004fe40, 0x004fe60, indexKOFSprites_02OZero },
    { _T("C - Electric Shock Effect"), 0x004fe60, 0x004fe80, indexKOFSprites_02OZero },
    { _T("C - Max Flash"), 0x004fe80, 0x004fea0, indexKOFSprites_02OZero },
    { _T("C - Striker Lon"), 0x004fea0, 0x004fec0, indexKOFSprites_02OZero },
    { _T("C - Soul Palette"), 0x004fec0, 0x004fee0, indexKOFSprites_02OZero },
    { _T("C - Striker Krizalid"), 0x004fee0, 0x004ff00, indexKOFSprites_02OZero },
};

const sGame_PaletteDataset KOF02UM_S_ORIGINALZERO_PALETTES_D[] =
{
    { _T("Original Zero D"), 0x004ff00, 0x004ff20, indexKOFSprites_02OZero },
    { _T("D - Striker Glugan"), 0x004ff20, 0x004ff40, indexKOFSprites_02OZero },
    { _T("D - Desperation Move / Super Desperation Move"), 0x004ff40, 0x004ff60, indexKOFSprites_02OZero },
    { _T("D - Electric Shock Effect"), 0x004ff60, 0x004ff80, indexKOFSprites_02OZero },
    { _T("D - Max Flash"), 0x004ff80, 0x004ffa0, indexKOFSprites_02OZero },
    { _T("D - Striker Lon"), 0x004ffa0, 0x004ffc0, indexKOFSprites_02OZero },
    { _T("D - Soul Palette"), 0x004ffc0, 0x004ffe0, indexKOFSprites_02OZero },
    { _T("D - Striker Krizalid"), 0x004ffe0, 0x0050000, indexKOFSprites_02OZero },
};

const sDescTreeNode KOF02UM_S_ORIGINALZERO_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_ORIGINALZERO_PALETTES_A, ARRAYSIZE(KOF02UM_S_ORIGINALZERO_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_ORIGINALZERO_PALETTES_B, ARRAYSIZE(KOF02UM_S_ORIGINALZERO_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_ORIGINALZERO_PALETTES_C, ARRAYSIZE(KOF02UM_S_ORIGINALZERO_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_ORIGINALZERO_PALETTES_D, ARRAYSIZE(KOF02UM_S_ORIGINALZERO_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_ORIGINALZERO_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_ORIGINALZERO_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_ORIGINALZERO_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_ORIGINALZERO_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_IGNIZ_PALETTES_A[] =
{
    { _T("Igniz A"), 0x0050400, 0x0050420, indexKOFSprites_02Igniz },
    { _T("A - Misty Win Stuff"), 0x0050420, 0x0050440, indexKOFSprites_02Igniz },
    { _T("A - Desperation Move / Super Desperation Move"), 0x0050440, 0x0050460, indexKOFSprites_02Igniz },
    { _T("A - Electric Shock Effect"), 0x0050460, 0x0050480, indexKOFSprites_02Igniz },
    { _T("A - Max Flash"), 0x0050480, 0x00504a0, indexKOFSprites_02Igniz },
    { _T("A - Hidden Super Desperation Move 2"), 0x00504a0, 0x00504c0, indexKOFSprites_02Igniz },
    { _T("A - Soul Palette"), 0x00504c0, 0x00504e0, indexKOFSprites_02Igniz },
    { _T("A - Hidden Super Desperation Move 3"), 0x00504e0, 0x0050500, indexKOFSprites_02Igniz },
};

const sGame_PaletteDataset KOF02UM_S_IGNIZ_PALETTES_B[] =
{
    { _T("Igniz B"), 0x0050500, 0x0050520, indexKOFSprites_02Igniz },
    { _T("B - Misty Win Stuff"), 0x0050520, 0x0050540, indexKOFSprites_02Igniz },
    { _T("B - Desperation Move / Super Desperation Move"), 0x0050540, 0x0050560, indexKOFSprites_02Igniz },
    { _T("B - Electric Shock Effect"), 0x0050560, 0x0050580, indexKOFSprites_02Igniz },
    { _T("B - Max Flash"), 0x0050580, 0x00505a0, indexKOFSprites_02Igniz },
    { _T("B - Hidden Super Desperation Move 2"), 0x00505a0, 0x00505c0, indexKOFSprites_02Igniz },
    { _T("B - Soul Palette"), 0x00505c0, 0x00505e0, indexKOFSprites_02Igniz },
    { _T("B - Hidden Super Desperation Move 3"), 0x00505e0, 0x0050600, indexKOFSprites_02Igniz },
};

const sGame_PaletteDataset KOF02UM_S_IGNIZ_PALETTES_C[] =
{
    { _T("Igniz C"), 0x0050600, 0x0050620, indexKOFSprites_02Igniz },
    { _T("C - Misty Win Stuff"), 0x0050620, 0x0050640, indexKOFSprites_02Igniz },
    { _T("C - Desperation Move / Super Desperation Move"), 0x0050640, 0x0050660, indexKOFSprites_02Igniz },
    { _T("C - Electric Shock Effect"), 0x0050660, 0x0050680, indexKOFSprites_02Igniz },
    { _T("C - Max Flash"), 0x0050680, 0x00506a0, indexKOFSprites_02Igniz },
    { _T("C - Hidden Super Desperation Move 2"), 0x00506a0, 0x00506c0, indexKOFSprites_02Igniz },
    { _T("C - Soul Palette"), 0x00506c0, 0x00506e0, indexKOFSprites_02Igniz },
    { _T("C - Hidden Super Desperation Move 3"), 0x00506e0, 0x0050700, indexKOFSprites_02Igniz },
};

const sGame_PaletteDataset KOF02UM_S_IGNIZ_PALETTES_D[] =
{
    { _T("Igniz D"), 0x0050700, 0x0050720, indexKOFSprites_02Igniz },
    { _T("D - Misty Win Stuff"), 0x0050720, 0x0050740, indexKOFSprites_02Igniz },
    { _T("D - Desperation Move / Super Desperation Move"), 0x0050740, 0x0050760, indexKOFSprites_02Igniz },
    { _T("D - Electric Shock Effect"), 0x0050760, 0x0050780, indexKOFSprites_02Igniz },
    { _T("D - Max Flash"), 0x0050780, 0x00507a0, indexKOFSprites_02Igniz },
    { _T("D - Hidden Super Desperation Move 2"), 0x00507a0, 0x00507c0, indexKOFSprites_02Igniz },
    { _T("D - Soul Palette"), 0x00507c0, 0x00507e0, indexKOFSprites_02Igniz },
    { _T("D - Hidden Super Desperation Move 3"), 0x00507e0, 0x0050800, indexKOFSprites_02Igniz },
};

const sDescTreeNode KOF02UM_S_IGNIZ_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_IGNIZ_PALETTES_A, ARRAYSIZE(KOF02UM_S_IGNIZ_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_IGNIZ_PALETTES_B, ARRAYSIZE(KOF02UM_S_IGNIZ_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_IGNIZ_PALETTES_C, ARRAYSIZE(KOF02UM_S_IGNIZ_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_IGNIZ_PALETTES_D, ARRAYSIZE(KOF02UM_S_IGNIZ_PALETTES_D) },
    { _T("Moves"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_IGNIZ_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_IGNIZ_PALETTES_MOVES) },
    { _T("Portraits"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_IGNIZ_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_IGNIZ_PALETTES_PORTRAITS) },
};

#pragma endregion Character Palettes (Auto-Generated)

const UINT8 KOF02UM_S_UNITSORT[KOF02UM_S_NUMUNIT + 1] // Plus 1 for extras
{
    indexKOF02UM_S_Andy,
    indexKOF02UM_S_Angel,
    indexKOF02UM_S_Athena,
    indexKOF02UM_S_Bao,
    indexKOF02UM_S_Benimaru,
    indexKOF02UM_S_Billy,
    indexKOF02UM_S_BlueMary,
    indexKOF02UM_S_Chang,
    indexKOF02UM_S_Chin,
    indexKOF02UM_S_Choi,
    indexKOF02UM_S_Chris,
    indexKOF02UM_S_Clark,
    indexKOF02UM_S_CloneZero,
    indexKOF02UM_S_Daimon,
    indexKOF02UM_S_EXKensou,
    indexKOF02UM_S_EXRobert,
    indexKOF02UM_S_EXTakuma,
    indexKOF02UM_S_Foxy,
    indexKOF02UM_S_Geese,
    indexKOF02UM_S_Goenitz,
    indexKOF02UM_S_Heidern,
    indexKOF02UM_S_Hinako,
    indexKOF02UM_S_Igniz,
    indexKOF02UM_S_Iori,
    indexKOF02UM_S_Jhun,
    indexKOF02UM_S_Joe,
    indexKOF02UM_S_K,
    indexKOF02UM_S_Kasumi,
    indexKOF02UM_S_Kensou,
    indexKOF02UM_S_Kim,
    indexKOF02UM_S_King,
    indexKOF02UM_S_Krizalid,
    indexKOF02UM_S_Kula,
    indexKOF02UM_S_Kusanagi,
    indexKOF02UM_S_Kyo,
    indexKOF02UM_S_Kyo1,
    indexKOF02UM_S_Kyo2,
    indexKOF02UM_S_Leona,
    indexKOF02UM_S_Lin,
    indexKOF02UM_S_Mai,
    indexKOF02UM_S_Mature,
    indexKOF02UM_S_Maxima,
    indexKOF02UM_S_MayLee,
    indexKOF02UM_S_Nameless,
    indexKOF02UM_S_NGeese,
    indexKOF02UM_S_OChris,
    indexKOF02UM_S_OShermie,
    indexKOF02UM_S_OYashiro,
    indexKOF02UM_S_OmegaRugal,
    indexKOF02UM_S_OZero,
    indexKOF02UM_S_Ralf,
    indexKOF02UM_S_Ramon,
    indexKOF02UM_S_Robert,
    indexKOF02UM_S_Ryo,
    indexKOF02UM_S_Seth,
    indexKOF02UM_S_Shermie,
    indexKOF02UM_S_Shingo,
    indexKOF02UM_S_Takuma,
    indexKOF02UM_S_Terry,
    indexKOF02UM_S_Vanessa,
    indexKOF02UM_S_Vice,
    indexKOF02UM_S_Whip,
    indexKOF02UM_S_Xiangfei,
    indexKOF02UM_S_Yamazaki,
    indexKOF02UM_S_Yashiro,
    indexKOF02UM_S_Yuri,

    KOF02UM_S_EXTRALOC
};

const sDescTreeNode KOF02UM_S_UNITS[KOF02UM_S_NUMUNIT] =
{
    { _T("Andy"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_ANDY_COLLECTION, ARRAYSIZE(KOF02UM_S_ANDY_COLLECTION) },
    { _T("Angel"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_ANGEL_COLLECTION, ARRAYSIZE(KOF02UM_S_ANGEL_COLLECTION) },
    { _T("Athena"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_ATHENA_COLLECTION, ARRAYSIZE(KOF02UM_S_ATHENA_COLLECTION) },
    { _T("Bao"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_BAO_COLLECTION, ARRAYSIZE(KOF02UM_S_BAO_COLLECTION) },
    { _T("Benimaru"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_BENIMARU_COLLECTION, ARRAYSIZE(KOF02UM_S_BENIMARU_COLLECTION) },
    { _T("Billy"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_BILLY_COLLECTION, ARRAYSIZE(KOF02UM_S_BILLY_COLLECTION) },
    { _T("Blue Mary"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_BLUEMARY_COLLECTION, ARRAYSIZE(KOF02UM_S_BLUEMARY_COLLECTION) },
    { _T("Chang"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHANG_COLLECTION, ARRAYSIZE(KOF02UM_S_CHANG_COLLECTION) },
    { _T("Chin"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHIN_COLLECTION, ARRAYSIZE(KOF02UM_S_CHIN_COLLECTION) },
    { _T("Choi"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHOI_COLLECTION, ARRAYSIZE(KOF02UM_S_CHOI_COLLECTION) },
    { _T("Chris"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHRIS_COLLECTION, ARRAYSIZE(KOF02UM_S_CHRIS_COLLECTION) },
    { _T("Clark"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CLARK_COLLECTION, ARRAYSIZE(KOF02UM_S_CLARK_COLLECTION) },
    { _T("Clone Zero"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_CLONEZERO_COLLECTION, ARRAYSIZE(KOF02UM_S_CLONEZERO_COLLECTION) },
    { _T("Daimon"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_DAIMON_COLLECTION, ARRAYSIZE(KOF02UM_S_DAIMON_COLLECTION) },
    { _T("EX Kensou"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXKENSOU_COLLECTION, ARRAYSIZE(KOF02UM_S_EXKENSOU_COLLECTION) },
    { _T("EX Robert"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXROBERT_COLLECTION, ARRAYSIZE(KOF02UM_S_EXROBERT_COLLECTION) },
    { _T("EX Takuma"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXTAKUMA_COLLECTION, ARRAYSIZE(KOF02UM_S_EXTAKUMA_COLLECTION) },
    { _T("Foxy"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_FOXY_COLLECTION, ARRAYSIZE(KOF02UM_S_FOXY_COLLECTION) },
    { _T("Geese"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_GEESE_COLLECTION, ARRAYSIZE(KOF02UM_S_GEESE_COLLECTION) },
    { _T("Goenitz"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_GOENITZ_COLLECTION, ARRAYSIZE(KOF02UM_S_GOENITZ_COLLECTION) },
    { _T("Heidern"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_HEIDERN_COLLECTION, ARRAYSIZE(KOF02UM_S_HEIDERN_COLLECTION) },
    { _T("Hinako"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_HINAKO_COLLECTION, ARRAYSIZE(KOF02UM_S_HINAKO_COLLECTION) },
    { _T("Igniz"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_IGNIZ_COLLECTION, ARRAYSIZE(KOF02UM_S_IGNIZ_COLLECTION) },
    { _T("Iori"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_IORI_COLLECTION, ARRAYSIZE(KOF02UM_S_IORI_COLLECTION) },
    { _T("Jhun Hoon"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_JHUNHOON_COLLECTION, ARRAYSIZE(KOF02UM_S_JHUNHOON_COLLECTION) },
    { _T("Joe"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_JOE_COLLECTION, ARRAYSIZE(KOF02UM_S_JOE_COLLECTION) },
    { _T("K�"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_K_COLLECTION, ARRAYSIZE(KOF02UM_S_K_COLLECTION) },
    { _T("Kasumi"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KASUMI_COLLECTION, ARRAYSIZE(KOF02UM_S_KASUMI_COLLECTION) },
    { _T("Kensou"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KENSOU_COLLECTION, ARRAYSIZE(KOF02UM_S_KENSOU_COLLECTION) },
    { _T("Kim"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KIM_COLLECTION, ARRAYSIZE(KOF02UM_S_KIM_COLLECTION) },
    { _T("King"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KING_COLLECTION, ARRAYSIZE(KOF02UM_S_KING_COLLECTION) },
    { _T("Krizalid"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KRIZALID_COLLECTION, ARRAYSIZE(KOF02UM_S_KRIZALID_COLLECTION) },
    { _T("Kula"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KULA_COLLECTION, ARRAYSIZE(KOF02UM_S_KULA_COLLECTION) },
    { _T("Kusanagi"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KUSANAGI_COLLECTION, ARRAYSIZE(KOF02UM_S_KUSANAGI_COLLECTION) },
    { _T("Kyo"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO_COLLECTION, ARRAYSIZE(KOF02UM_S_KYO_COLLECTION) },
    { _T("Kyo-1"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO1_COLLECTION, ARRAYSIZE(KOF02UM_S_KYO1_COLLECTION) },
    { _T("Kyo-2"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO2_COLLECTION, ARRAYSIZE(KOF02UM_S_KYO2_COLLECTION) },
    { _T("Leona"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_LEONA_COLLECTION, ARRAYSIZE(KOF02UM_S_LEONA_COLLECTION) },
    { _T("Lin"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_LIN_COLLECTION, ARRAYSIZE(KOF02UM_S_LIN_COLLECTION) },
    { _T("Mai"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAI_COLLECTION, ARRAYSIZE(KOF02UM_S_MAI_COLLECTION) },
    { _T("Mature"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_MATURE_COLLECTION, ARRAYSIZE(KOF02UM_S_MATURE_COLLECTION) },
    { _T("Maxima"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAXIMA_COLLECTION, ARRAYSIZE(KOF02UM_S_MAXIMA_COLLECTION) },
    { _T("May Lee"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAYLEE_COLLECTION, ARRAYSIZE(KOF02UM_S_MAYLEE_COLLECTION) },
    { _T("Nameless"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_NAMELESS_COLLECTION, ARRAYSIZE(KOF02UM_S_NAMELESS_COLLECTION) },
    { _T("Nightmare Geese"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_NIGHTMAREGEESE_COLLECTION, ARRAYSIZE(KOF02UM_S_NIGHTMAREGEESE_COLLECTION) },
    { _T("O.Chris"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_OCHRIS_COLLECTION, ARRAYSIZE(KOF02UM_S_OCHRIS_COLLECTION) },
    { _T("O.Shermie"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_OSHERMIE_COLLECTION, ARRAYSIZE(KOF02UM_S_OSHERMIE_COLLECTION) },
    { _T("O.Yashiro"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_OYASHIRO_COLLECTION, ARRAYSIZE(KOF02UM_S_OYASHIRO_COLLECTION) },
    { _T("Omega Rugal"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_OMEGARUGAL_COLLECTION, ARRAYSIZE(KOF02UM_S_OMEGARUGAL_COLLECTION) },
    { _T("Original Zero"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_ORIGINALZERO_COLLECTION, ARRAYSIZE(KOF02UM_S_ORIGINALZERO_COLLECTION) },
    { _T("Ralf"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_RALF_COLLECTION, ARRAYSIZE(KOF02UM_S_RALF_COLLECTION) },
    { _T("Ramon"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_RAMON_COLLECTION, ARRAYSIZE(KOF02UM_S_RAMON_COLLECTION) },
    { _T("Robert"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_ROBERT_COLLECTION, ARRAYSIZE(KOF02UM_S_ROBERT_COLLECTION) },
    { _T("Ryo"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_RYO_COLLECTION, ARRAYSIZE(KOF02UM_S_RYO_COLLECTION) },
    { _T("Seth"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_SETH_COLLECTION, ARRAYSIZE(KOF02UM_S_SETH_COLLECTION) },
    { _T("Shermie"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_SHERMIE_COLLECTION, ARRAYSIZE(KOF02UM_S_SHERMIE_COLLECTION) },
    { _T("Shingo"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_SHINGO_COLLECTION, ARRAYSIZE(KOF02UM_S_SHINGO_COLLECTION) },
    { _T("Takuma"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_TAKUMA_COLLECTION, ARRAYSIZE(KOF02UM_S_TAKUMA_COLLECTION) },
    { _T("Terry"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_TERRY_COLLECTION, ARRAYSIZE(KOF02UM_S_TERRY_COLLECTION) },
    { _T("Vanessa"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_VANESSA_COLLECTION, ARRAYSIZE(KOF02UM_S_VANESSA_COLLECTION) },
    { _T("Vice"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_VICE_COLLECTION, ARRAYSIZE(KOF02UM_S_VICE_COLLECTION) },
    { _T("Whip"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_WHIP_COLLECTION, ARRAYSIZE(KOF02UM_S_WHIP_COLLECTION) },
    { _T("Xiangfei"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_XIANGFEI_COLLECTION, ARRAYSIZE(KOF02UM_S_XIANGFEI_COLLECTION) },
    { _T("Yamazaki"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_YAMAZAKI_COLLECTION, ARRAYSIZE(KOF02UM_S_YAMAZAKI_COLLECTION) },
    { _T("Yashiro"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_YASHIRO_COLLECTION, ARRAYSIZE(KOF02UM_S_YASHIRO_COLLECTION) },
    { _T("Yuri"), DESC_NODETYPE_TREE, (void*)KOF02UM_S_YURI_COLLECTION, ARRAYSIZE(KOF02UM_S_YURI_COLLECTION) },
};

// We extend this array with data groveled from the GarouE.txt extensible extras file, if any.
const stExtraDef KOF02UM_S_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};