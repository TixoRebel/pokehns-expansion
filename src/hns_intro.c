#include "global.h"
#include "bg.h"
#include "decompress.h"
#include "palette.h"
#include "sound.h"
#include "sprite.h"
#include "task.h"
#include "gpu_regs.h"
#include "trig.h"
#include "main.h"
#include "intro.h"
#include "m4a.h"
#include "hns_intro.h"
#include "constants/rgb.h"
#include "constants/songs.h"
// start HnS
// #include "intro_credits_graphics.h"
#include "title_screen.h"
#include "libgcnmultiboot.h"
#include "menu.h"
// 
// #include "graphics.h"
#include "window.h"
// #include "scanline_effect.h"
#include "util.h"
// #include "string_util.h"
// #include "text.h"
// 
#include "malloc.h"
// #include "link.h"
// #include "dma3.h"
// #include "blit.h"
// #include "random.h"
// end HnS

#if HNS_INTRO == TRUE

struct IntroSequenceData;
typedef void (*IntroCallback)(struct IntroSequenceData *);
struct IntroSequenceData
{
    IntroCallback callback;
    u8 state;
    u8 taskId;
    bool8 gengarAttackLanded;
    u16 data[6];
    struct Sprite *gameFreakLogoArtSprite;
    struct Sprite *nidorinoAnimSprite;
    struct Sprite *gengarStaticSprite;
    struct Sprite *nidorinoStaticSprite;
    struct Sprite *grassSprite;
    struct Sprite *gengarBackSpriteArray[4];
    u8 filler_0038[0x4];
    u8 gamefreakLogoArtSpriteTiles[0x400];
    u8 gamefreakTextBitmap[0x400];
    u8 filler_083C[0x2080];
}; // size: 0x28BC

void StartBlendTask(u8 eva_start, u8 evb_start, u8 eva_end, u8 evb_end, u8 ev_step, u8 priority);
bool8 IsBlendTaskActive(void);

// static EWRAM_DATA struct GcmbStruct gMultibootProgramStruct = {0};
// static EWRAM_DATA u16 gUnknown_203AB00                      = 0;
// static EWRAM_DATA u16 gUnknown_203AB02                      = 0;
// static EWRAM_DATA u16 gUnknown_203AB04                      = 0;
// static EWRAM_DATA u16 gUnknown_203AB06                      = 0;
// static EWRAM_DATA u16 gUnknown_203AB08                      = 0;
// static EWRAM_DATA u16 gUnknown_203AB0A                      = 0;
// static EWRAM_DATA u16 gUnknown_203AB0C                      = 0;
static EWRAM_DATA u16 sLargeStarXSpeed                      = 0;
static EWRAM_DATA u16 sLargeStarYSpeed                      = 0;
static EWRAM_DATA u16 sTrailingSparklesXmodMask             = 0;
static EWRAM_DATA u16 sUnusedVarRelatedToGameFreakStars     = 0;
static EWRAM_DATA u16 sTrailingSparklesSpawnRate            = 0;
static EWRAM_DATA u16 sTrailingSparklesFlickerStartTime     = 0;
static EWRAM_DATA u16 sTrailingSparklesDestroySpriteTime    = 0;
static EWRAM_DATA u16 sTrailingSparklesGravityShift         = 0;
static EWRAM_DATA u16 sTrailingSparklesXspeed               = 0;
static EWRAM_DATA u16 sTrailingSparklesYspeed               = 0;
static EWRAM_DATA u16 sTrailingSparklesXprecision           = 0;
static EWRAM_DATA u16 sTrailingSparklesYprecision           = 0;

/*
    The HnS intro is grouped into the following scenes
    Scene 0. Copyright screen - handled in intro.c, which then calls Task_HandleHnSIntro
    Scene 1. A star shoots across the screen, The GameFreak title fades in, The GameFreak logo fades in
    Scene 2. N/A
    Scene 3. N/A

    After this it progresses to the title screen
*/
static void VBlankCB_HnSIntro(void);
static void HnSIntro_ResetGpuRegs(void);
static void StartHnSIntroSequence(void);
static void Task_CallHnSIntroCallback(u8 taskId);
static void SetHnSIntroCB(struct IntroSequenceData * ptr, IntroCallback cb);
static void HnSIntroCB_Init(struct IntroSequenceData * ptr);
static void HnSIntroCB_CleanUp(struct IntroSequenceData * ptr);
static void HnSIntroCB_OpenWin1ToTheaterDimensions(struct IntroSequenceData * ptr);
static void HnSIntroCB_GameFreakStar(struct IntroSequenceData * ptr);
static void HnSIntroCB_GameFreakScene_RevealGameFreakText(struct IntroSequenceData * ptr);
static void HnSIntroCB_GameFreakScene_CreateGameFreakLogo(struct IntroSequenceData * ptr);
static void GameFreakScene_LoadGfxCreateStar(void);
static void GameFreakScene_StartTrailingSparkleSpawner(void);
static void Task_GameFreakScene_TrailingSparkleSpawner(u8 taskId);
static void GameFreakScene_StartGameFreakTextRevealSparklesSpawner(void);
static void Task_GameFreakTextRevealSparklesSpawner(u8 taskId);
static struct Sprite *CreateGameFreakLogoArtSprite(void);
static void SpriteCB_LargeStar(struct Sprite *sprite);
static void SpriteCB_TrailingSparkles(struct Sprite *sprite);
static void SpriteCB_TrailingSparkles2(struct Sprite *sprite);
static void SpriteCB_GameFreakTextRevealSparkles(struct Sprite *sprite);

#if REVISION >= 1
static void Rev1_GameFreakScene_CreatePresentsText(void);
#else
#define Rev1_GameFreakScene_CreatePresentsText()
#endif

static void Task_SmoothBlendLayers(u8 taskId);

// Scenes

// EXPANSION CREDITS - could be worth putting in and adding HnS devs?
// static const u32 sBgTiles_PoweredBy[] = INCBIN_U32("graphics/expansion_intro/powered_by.4bpp.lz"); // could use
// static const u32 sBgTiles_RhhCredits[] = INCBIN_U32("graphics/expansion_intro/rhh_credits.8bpp.lz");
// static const u32 sBgMap_PoweredBy[] = INCBIN_U32("graphics/expansion_intro/powered_by.bin.lz");
// static const u32 sBgMap_RhhCredits[] = INCBIN_U32("graphics/expansion_intro/rhh_credits.bin.lz");
// static const u16 sBgPal_Credits[] = INCBIN_U16("graphics/expansion_intro/credits.gbapal");

// OG
static const u16 sBg3Pal_GameFreakPresents[]                = INCBIN_U16("graphics/intro/GameFreakPresentsBg.gbapal");
static const u8  sBg3Tiles_GameFreakPresents[]              = INCBIN_U8("graphics/intro/GameFreakPresentsBg.4bpp.lz");
static const u8  sBg3Map_GameFreakPresents[]                = INCBIN_U8("graphics/intro/GameFreakPresentsBg.bin.lz");
static const u16 sSpritePals_GameFreakPresents[]            = INCBIN_U16("graphics/intro/GameFreakText.gbapal"); // GameFreakText.pal might be incorrect...

static const u32 sBlit_GameFreakText[]                      = INCBIN_U32("graphics/intro/GameFreakText.4bpp.lz");
static const u32 sSpriteTiles_GameFreakLogo[]               = INCBIN_U32("graphics/intro/GameFreakLogo.4bpp.lz");
static const u16 sSpritePals_LargeStar[]                    = INCBIN_U16("graphics/intro/LargeStar.gbapal");
static const u32 sSpriteTiles_LargeStar[]                   = INCBIN_U32("graphics/intro/LargeStar.4bpp.lz");
static const u16 sSpritePals_Sparkles[]                     = INCBIN_U16("graphics/intro/TrailingSparkles.gbapal"); // might want to rename .pal to just "sparkles"
static const u32 sSpriteTiles_TrailingSparkles[]            = INCBIN_U32("graphics/intro/TrailingSparkles.4bpp.lz");
static const u32 sSpriteTiles_GameFreakTextRevealSparkles[] = INCBIN_U32("graphics/intro/GameFreakTextRevealSparkles.4bpp.lz");
static const u32 sSpriteTiles_PresentsText[]                = INCBIN_U32("graphics/intro/PresentsText.4bpp.lz");
// OG

// start HnS
static const struct BgTemplate sBgTemplates_GameFreakScene[] = {
    {
        .bg = 3,
        .charBaseIndex = 3,
        .mapBaseIndex = 31,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 3,
        .baseTile = 0x000
    }, {
        .bg = 2,
        .charBaseIndex = 3,
        .mapBaseIndex = 30,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 2,
        .baseTile = 0x010
    }
};

static const struct WindowTemplate sWindowTemplate[] = {
    {
        .bg = 2,
        .tilemapLeft = 6,
        .tilemapTop = 4,
        .width = 18,
        .height = 9,
        .paletteNum = 0xD,
        .baseBlock = 0x000
    }, DUMMY_WIN_TEMPLATE
};

static const struct CompressedSpriteSheet sSpriteSheets_GameFreakScene[] = {
    {sSpriteTiles_LargeStar, 0x0080, 0},
    {sSpriteTiles_TrailingSparkles, 0x0080, 1},
    {sSpriteTiles_GameFreakTextRevealSparkles, 0x0800, 2},
    {sSpriteTiles_GameFreakLogo, 0x0400, 3},
    {sSpriteTiles_PresentsText, 0x0100, 4}
};

static const struct SpritePalette sSpritePalettes_GameFreakScene[] = {
    {sSpritePals_LargeStar, 0},
    {sSpritePals_Sparkles, 1},
    {sSpritePals_GameFreakPresents, 3},
    {0}
};

static const struct Coords16 sTrailingSparkleCoords[] = {
    {0x0048, 0x0050},
    {0x0088, 0x004a},
    {0x00a8, 0x0050},
    {0x0078, 0x0050},
    {0x0068, 0x0056},
    {0x0058, 0x004a},
    {0x00b8, 0x004a},
    {0x0038, 0x0056},
    {0x0098, 0x0056}
};

static const struct OamData gOamData_LargeStar = {
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = ST_OAM_SQUARE,
    .matrixNum = 0,
    .size = ST_OAM_SIZE_1,
    .tileNum = 0x000,
    .priority = 2,
    .paletteNum = 0
};

static const struct OamData gOamData_TrailingSparkles = {
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = ST_OAM_SQUARE,
    .matrixNum = 0,
    .size = ST_OAM_SIZE_0,
    .tileNum = 0x000,
    .priority = 2,
    .paletteNum = 0
};

static const union AnimCmd gAnimCmd_TrailingSparkles1[] = {
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_FRAME(3, 4),
    ANIMCMD_JUMP(0)
};

static const union AnimCmd gAnimCmd_TrailingSparkles2[] = {
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_FRAME(3, 4),
    ANIMCMD_END
};

static const union AnimCmd *const gAnimCmdTable_TrailingSparkles[] = {
    gAnimCmd_TrailingSparkles1,
    gAnimCmd_TrailingSparkles2
};

static const struct SpriteTemplate sSpriteTemplate_LargeStar = {
    .tileTag = 0,
    .paletteTag = 0,
    .oam = &gOamData_LargeStar,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_LargeStar
};

static const struct SpriteTemplate sSpriteTemplate_TrailingSparkles = {
    .tileTag = 1,
    .paletteTag = 1,
    .oam = &gOamData_TrailingSparkles,
    .anims = gAnimCmdTable_TrailingSparkles,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_TrailingSparkles
};

static const struct OamData gOamData_GameFreakTextRevealSparkles = {
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = ST_OAM_SQUARE,
    .matrixNum = 0,
    .size = ST_OAM_SIZE_2,
    .tileNum = 0x000,
    .priority = 2,
    .paletteNum = 0
};

static const union AnimCmd gAnimCmd_GameFreakTextRevealSparkles[] = {
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(16, 8),
    ANIMCMD_FRAME(32, 8),
    ANIMCMD_FRAME(48, 8),
    ANIMCMD_END
};

static const union AnimCmd *const gAnimCmdTable_GameFreakTextRevealSparkles[] = {
    gAnimCmd_GameFreakTextRevealSparkles
};

static const struct SpriteTemplate sSpriteTemplate_GameFreakTextRevealSparkles = {
    .tileTag = 2,
    .paletteTag = 1,
    .oam = &gOamData_GameFreakTextRevealSparkles,
    .anims = gAnimCmdTable_GameFreakTextRevealSparkles,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_GameFreakTextRevealSparkles
};

static const struct OamData gOamData_GameFreakLogo = {
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_BLEND,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = ST_OAM_V_RECTANGLE,
    .matrixNum = 0,
    .size = ST_OAM_SIZE_3,
    .tileNum = 0x000,
    .priority = 3,
    .paletteNum = 0
};

static const struct SpriteTemplate sSpriteTemplate_GameFreakLogo = {
    .tileTag = 3,
    .paletteTag = 3,
    .oam = &gOamData_GameFreakLogo,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};

static const struct OamData gOamData_PresentsText = {
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_BLEND,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = ST_OAM_H_RECTANGLE,
    .matrixNum = 0,
    .size = ST_OAM_SIZE_1,
    .tileNum = 0x000,
    .priority = 3,
    .paletteNum = 0
};

static const struct SpriteTemplate sSpriteTemplate_PresentsText = {
    .tileTag = 4,
    .paletteTag = 3,
    .oam = &gOamData_PresentsText,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};


// #define tState gMain.state
#define tState gTasks[taskId].data[0]
void Task_HandleHnSIntro(u8 taskId)
{
    switch (tState)
    {
    // default:
    //     tState = 0;
    //     // fallthrough
    case 0:
        SetVBlankCallback(VBlankCB_HnSIntro);
        SetGpuReg(REG_OFFSET_DISPCNT, 0);
        InitHeap(gHeap, HEAP_SIZE);
        // ResetTasks();
        ResetSpriteData();
        ResetPaletteFade();
        ResetTempTileDataBuffers();
        HnSIntro_ResetGpuRegs();
        DmaFill16(3, 0, VRAM, VRAM_SIZE);
        DmaFill32(3, 0, OAM, OAM_SIZE);
        DmaFill16(3, 0, PLTT, PLTT_SIZE);
        FillPalette(RGB_BLACK, 0, 0x400);
        ResetBgsAndClearDma3BusyFlags(FALSE);
        InitBgsFromTemplates(0, sBgTemplates_GameFreakScene, ARRAY_COUNT(sBgTemplates_GameFreakScene));
        break;
    case 1:
        LoadPalette(sBg3Pal_GameFreakPresents, 0x00, 0x20);
        DecompressAndCopyTileDataToVram(3, sBg3Tiles_GameFreakPresents, 0, 0, 0);
        DecompressAndCopyTileDataToVram(3, sBg3Map_GameFreakPresents, 0, 0, 1);
        LoadPalette(sSpritePals_GameFreakPresents, 0xD0, 0x20);
        break;
    case 2:
        if (!FreeTempTileDataBuffersIfPossible())
        {
            ResetTasks();
            StartHnSIntroSequence();
            BlendPalettes(PALETTES_ALL, 16, RGB_BLACK);
            SetMainCallback2(CB2_HnSIntro);
            SetVBlankCallback(VBlankCB_HnSIntro);
        }
        return;
    }
    tState++;
}
#undef tState

void CB2_HnSIntro(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    UpdatePaletteFade();
}

static void VBlankCB_HnSIntro(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void HnSIntro_ResetGpuRegs(void)
{
    SetGpuReg(REG_OFFSET_DISPCNT, 0);
    SetGpuReg(REG_OFFSET_BLDCNT, 0);
    SetGpuReg(REG_OFFSET_BLDALPHA, 0);
    SetGpuReg(REG_OFFSET_BLDY, 0);
    SetGpuReg(REG_OFFSET_BG0HOFS, 0);
    SetGpuReg(REG_OFFSET_BG0VOFS, 0);
    SetGpuReg(REG_OFFSET_BG1HOFS, 0);
    SetGpuReg(REG_OFFSET_BG1VOFS, 0);
    SetGpuReg(REG_OFFSET_BG2HOFS, 0);
    SetGpuReg(REG_OFFSET_BG2VOFS, 0);
    SetGpuReg(REG_OFFSET_BG3HOFS, 0);
    SetGpuReg(REG_OFFSET_BG3VOFS, 0);
    SetGpuRegBits(REG_OFFSET_DISPCNT, DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON);
}

static void StartHnSIntroSequence(void)
{
    struct IntroSequenceData * ptr = Alloc(sizeof(struct IntroSequenceData));
    SetHnSIntroCB(ptr, HnSIntroCB_Init);
    ptr->taskId = CreateTask(Task_CallHnSIntroCallback, 3);
    SetWordTaskArg(ptr->taskId, 0, (uintptr_t)ptr);
}

static void SetHnSIntroCB(struct IntroSequenceData * ptr, IntroCallback cb)
{
    ptr->callback = cb;
    ptr->state = 0;
}

static void Task_CallHnSIntroCallback(u8 taskId)
{
    struct IntroSequenceData * ptr = (void *)GetWordTaskArg(taskId, 0);
    if (JOY_NEW(A_BUTTON | START_BUTTON | SELECT_BUTTON) && ptr->callback != HnSIntroCB_CleanUp)
        SetHnSIntroCB(ptr, HnSIntroCB_CleanUp);
    ptr->callback(ptr);
}

static void HnSIntroCB_Init(struct IntroSequenceData * this)
{
    switch (this->state)
    {
    case 0:
        InitWindows(sWindowTemplate);
        LZ77UnCompWram(sBlit_GameFreakText, this->gamefreakTextBitmap);
        LZ77UnCompWram(sSpriteTiles_GameFreakLogo, this->gamefreakLogoArtSpriteTiles);
        FillBgTilemapBufferRect(2, 0x000, 0, 0, 32, 32, 0x11);
        FillWindowPixelBuffer(0, PIXEL_FILL(0));
        BlitBitmapToWindow(0, this->gamefreakTextBitmap, 0, 40, 144, 16);
        PutWindowTilemap(0);
        CopyWindowToVram(0, COPYWIN_FULL);
        this->state++;
        break;
    case 1:
        if (!IsDma3ManagerBusyWithBgCopy())
            SetHnSIntroCB(this, HnSIntroCB_OpenWin1ToTheaterDimensions);
        break;
    }
}

static void HnSIntroCB_OpenWin1ToTheaterDimensions(struct IntroSequenceData * this)
{
    switch (this->state)
    {
    case 0:
        SetGpuRegBits(REG_OFFSET_DISPCNT, DISPCNT_WIN1_ON);
        SetGpuReg(REG_OFFSET_WININ, 0x3F00);
        SetGpuReg(REG_OFFSET_WINOUT, 0x0000);
        SetGpuReg(REG_OFFSET_WIN1H, 0x00F0);
        SetGpuReg(REG_OFFSET_WIN1V, 0x0000);
        this->data[5] = 0;
        this->state++;
        break;
    case 1:
        ShowBg(3);
        BlendPalettes(PALETTES_ALL, 0x00, RGB_BLACK);
        this->state++;
        break;
    case 2:
        this->data[5] += 8;
        if (this->data[5] >= 0x30)
            this->data[5] = 0x30;
        SetGpuReg(REG_OFFSET_WIN1V, ((0x50 - this->data[5]) << 8) | (0x50 + this->data[5]));
        if (this->data[5] == 0x30)
            SetHnSIntroCB(this, HnSIntroCB_GameFreakStar);
        break;
    }
}

static void HnSIntroCB_GameFreakStar(struct IntroSequenceData * this)
{
    switch (this->state)
    {
    case 0:
        GameFreakScene_LoadGfxCreateStar();
        this->data[5] = 0;
        this->state++;
        break;
    case 1:
        this->data[5]++;
        if (this->data[5] == 30)
        {
            GameFreakScene_StartTrailingSparkleSpawner();
            this->data[5] = 0;
            this->state++;
        }
        break;
    case 2:
        this->data[5]++;
        if (this->data[5] == 90)
            SetHnSIntroCB(this, HnSIntroCB_GameFreakScene_RevealGameFreakText);
        break;
    }
}

static void HnSIntroCB_GameFreakScene_RevealGameFreakText(struct IntroSequenceData * this)
{
    switch (this->state)
    {
    case 0:
        GameFreakScene_StartGameFreakTextRevealSparklesSpawner();
        this->data[5] = 0;
        this->state++;
        break;
    case 1:
        this->data[5]++;
        if (this->data[5] >= 40)
            this->state++;
        break;
    case 2:
        SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT1_BG2 | BLDCNT_EFFECT_BLEND | BLDCNT_TGT2_BG0 | BLDCNT_TGT2_BG1 | BLDCNT_TGT2_BG2 | BLDCNT_TGT2_BG3 | BLDCNT_TGT2_OBJ | BLDCNT_TGT2_BD);
        StartBlendTask(0, 16, 16, 0, 48, 0);
        this->state++;
        break;
    case 3:
        ShowBg(2);
        this->state++;
        break;
    case 4:
        if (!IsBlendTaskActive())
        {
            SetGpuReg(REG_OFFSET_BLDCNT, 0);
            this->data[5] = 0;
            this->state++;
        }
        break;
    case 5:
        this->data[5]++;
        if (this->data[5] > 50)
            SetHnSIntroCB(this, HnSIntroCB_GameFreakScene_CreateGameFreakLogo);
        break;
    }
}

static void HnSIntroCB_GameFreakScene_CreateGameFreakLogo(struct IntroSequenceData * this)
{
    switch (this->state)
    {
    case 0:
        SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT1_OBJ | BLDCNT_EFFECT_BLEND | BLDCNT_TGT2_BG0 | BLDCNT_TGT2_BG1 | BLDCNT_TGT2_BG2 | BLDCNT_TGT2_BG3 | BLDCNT_TGT2_OBJ | BLDCNT_TGT2_BD);
        StartBlendTask(0, 16, 16, 0, 16, 0);
        this->data[0] = 0;
        this->data[1] = 16;
        this->data[5] = 0;
        this->state++;
        break;
    case 1:
        this->gameFreakLogoArtSprite = CreateGameFreakLogoArtSprite();
        this->state++;
        break;
    case 2:
        if (!IsBlendTaskActive())
        {
            BlitBitmapToWindow(0, this->gamefreakLogoArtSpriteTiles, 0x38, 0x06, 0x20, 0x40);
            BlitBitmapToWindow(0, this->gamefreakTextBitmap, 0x00, 0x28, 0x90, 0x10);
            CopyWindowToVram(0, COPYWIN_GFX);
            this->state++;
        }
        break;
    case 3:
        if (!IsDma3ManagerBusyWithBgCopy())
        {
            DestroySprite(this->gameFreakLogoArtSprite);
            Rev1_GameFreakScene_CreatePresentsText();
            this->data[5] = 0;
            this->state++;
        }
        break;
    case 4:
        this->data[5]++;
        if (this->data[5] > 90)
        {
            SetGpuRegBits(REG_OFFSET_BLDCNT, BLDCNT_TGT1_BG2);
            StartBlendTask(16, 0, 0, 16, 20, 0);
            this->state++;
        }
        break;
    case 5:
        if (!IsBlendTaskActive())
        {
            HideBg(2);
            this->state++;
        }
        break;
    case 6:
        ResetSpriteData();
        FreeAllSpritePalettes();
        this->data[5] = 0;
        this->state++;
        break;
    case 7:
        this->data[5]++;
        if (this->data[5] > 20)
        {
            SetGpuReg(REG_OFFSET_BLDCNT, 0);
            SetMainCallback2(CB2_InitTitleScreen);
        }
        break;
    }
}

static void HnSIntroCB_CleanUp(struct IntroSequenceData * this)
{
    switch (this->state)
    {
    case 0:
        FillPalette(RGB_BLACK, 0, 0x400);
        this->state++;
        break;
    case 1:
        if (!FreeTempTileDataBuffersIfPossible())
        {
            DestroyTask(this->taskId);
            Free(this);
            DisableInterrupts(INTR_FLAG_HBLANK);
            SetHBlankCallback(NULL);
            SetMainCallback2(CB2_InitTitleScreen);
        }
        break;
    }
}

static void GameFreakScene_LoadGfxCreateStar(void)
{
    int i;
    u8 spriteId;
    static EWRAM_DATA u32 sTrailingSparklesRngSeed = 0;

    for (i = 0; i < ARRAY_COUNT(sSpriteSheets_GameFreakScene); i++)
    {
        LoadCompressedSpriteSheet(&sSpriteSheets_GameFreakScene[i]);
    }
    LoadSpritePalettes(sSpritePalettes_GameFreakScene);
    sLargeStarXSpeed = 0x60;
    sLargeStarYSpeed = 0x10;
    sTrailingSparklesXmodMask = 0x07;
    sUnusedVarRelatedToGameFreakStars = 5;
    sTrailingSparklesSpawnRate = 8;
    sTrailingSparklesFlickerStartTime = 90;
    sTrailingSparklesDestroySpriteTime = 120;
    sTrailingSparklesXspeed = 1;
    sTrailingSparklesYspeed = 1;
    sTrailingSparklesXprecision = 5;
    sTrailingSparklesYprecision = 5;
    if (sTrailingSparklesRngSeed == 0)
        sTrailingSparklesRngSeed = 354128453;
    spriteId = CreateSprite(&sSpriteTemplate_LargeStar, 0xF8, 0x37, 0);
    if (spriteId != MAX_SPRITES)
    {
        gSprites[spriteId].data[0] = 0xF80;
        gSprites[spriteId].data[1] = 0x370;
        gSprites[spriteId].data[2] = sLargeStarXSpeed;
        gSprites[spriteId].data[3] = sLargeStarYSpeed;
        StoreWordInTwoHalfwords((u16 *)&gSprites[spriteId].data[6], sTrailingSparklesRngSeed);
    }
}

static void GameFreakScene_TrailingSparklesGen(s16 x, s16 y, u16 a2)
{
    static EWRAM_DATA s16 sYmod = 0;

    u8 spriteId;
    s16 xMod = (a2 & sTrailingSparklesXmodMask) + 2;
    s16 yMod = sYmod;
    sYmod++;
    if (sYmod > 3)
        sYmod = -3;
    x += xMod;
    y += yMod;
    if (x >= 1 && x <= 0xEF)
    {
        spriteId = CreateSprite(&sSpriteTemplate_TrailingSparkles, x, y, 1);
        if (spriteId != MAX_SPRITES)
        {
            gSprites[spriteId].data[0] = x << sTrailingSparklesXprecision;
            gSprites[spriteId].data[1] = y << sTrailingSparklesYprecision;
            gSprites[spriteId].data[2] = sTrailingSparklesXspeed * xMod;
            gSprites[spriteId].data[3] = sTrailingSparklesYspeed * yMod;
        }
    }
}

static void GameFreakScene_StartTrailingSparkleSpawner(void)
{
    CreateTask(Task_GameFreakScene_TrailingSparkleSpawner, 1);
}

static void Task_GameFreakScene_TrailingSparkleSpawner(u8 taskId)
{
    s16 * data = gTasks[taskId].data;
    u8 r6;
    u8 spriteId;

    data[2]++, data[3]++;
    if (data[2] > 6)
    {
        data[2] = 0;
        r6 = data[0];
        spriteId = CreateSprite(&sSpriteTemplate_TrailingSparkles, sTrailingSparkleCoords[r6].x, sTrailingSparkleCoords[r6].y, 2);
        StartSpriteAnim(&gSprites[spriteId], 1);
        gSprites[spriteId].callback = SpriteCB_TrailingSparkles2;
        gSprites[spriteId].data[1] = sTrailingSparkleCoords[r6].y << 4;
        gSprites[spriteId].data[2] = 120;
        gSprites[spriteId].data[3] = data[1];
        if (gSprites[spriteId].data[3] < 0)
            gSprites[spriteId].data[3] = 1;
        data[0]++;
        if (data[0] >= ARRAY_COUNT(sTrailingSparkleCoords))
        {
            data[1]++;
            if (data[1] > 1)
                DestroyTask(taskId);
            else
                data[0] = 0;
        }
    }
}

static void GameFreakScene_StartGameFreakTextRevealSparklesSpawner(void)
{
    CreateTask(Task_GameFreakTextRevealSparklesSpawner, 2);
}

static void Task_GameFreakTextRevealSparklesSpawner(u8 taskId)
{
    s16 * data = gTasks[taskId].data;
    u8 r2;

    if (data[0] == 0)
    {
        r2 = data[1];
        data[1] += 4;
        if (data[1] >= ARRAY_COUNT(sTrailingSparkleCoords))
            data[1] -= ARRAY_COUNT(sTrailingSparkleCoords);
        CreateSprite(&sSpriteTemplate_GameFreakTextRevealSparkles, sTrailingSparkleCoords[r2].x, sTrailingSparkleCoords[r2].y, 3);
        data[2]++;
        if (data[2] > 8)
            DestroyTask(taskId);
    }
    data[0]++;
    if (data[0] > 9)
        data[0] = 0;
}

static struct Sprite *CreateGameFreakLogoArtSprite(void)
{
    u8 spriteId = CreateSprite(&sSpriteTemplate_GameFreakLogo, 120, 70, 4);
    return &gSprites[spriteId];
}

#if REVISION >= 1
static void Rev1_GameFreakScene_CreatePresentsText(void)
{
    int i;
    for (i = 0; i < 2; i++)
    {
        gSprites[CreateSprite(&sSpriteTemplate_PresentsText, 0x68 + 32 * i, 0x6c, 5)].oam.tileNum += i * 4;
    }
}
#endif

static void SpriteCB_LargeStar(struct Sprite *sprite)
{
    uint32_t v;
    sprite->data[0] -= sprite->data[2];
    sprite->data[1] += sprite->data[3];
    sprite->data[4] += 48;
    sprite->x = sprite->data[0] >> 4;
    sprite->y = sprite->data[1] >> 4;
    sprite->y2 = gSineTable[(sprite->data[4] >> 4) + 0x40] >> 5;
    sprite->data[5]++;
    if (sprite->data[5] % sTrailingSparklesSpawnRate)
    {
        LoadWordFromTwoHalfwords((u16*)&sprite->data[6], &v); //
        v = v * 1103515245 + 24691;
        StoreWordInTwoHalfwords((u16*)&sprite->data[6], v);   //
        v >>= 16;
        GameFreakScene_TrailingSparklesGen(sprite->x, sprite->y + sprite->y2, v);
    }
    if (sprite->x < -8)
        DestroySprite(sprite);
}

static void SpriteCB_TrailingSparkles(struct Sprite *sprite)
{
    sprite->data[0] += sprite->data[2];
    sprite->data[1] += sprite->data[3];
    sprite->data[4]++;
    sprite->data[5] += sprite->data[4];
    sprite->data[7]++;
    sprite->x = (u16)sprite->data[0] >> sTrailingSparklesXprecision;
    sprite->y = sprite->data[1] >> sTrailingSparklesYprecision;
    if (sTrailingSparklesGravityShift && sprite->data[3] < 0)
        sprite->y2 = sprite->data[5] >> sTrailingSparklesGravityShift;
    if (sprite->data[7] > sTrailingSparklesFlickerStartTime)
    {
        sprite->invisible = !sprite->invisible;
        if (sprite->data[7] > sTrailingSparklesDestroySpriteTime)
            DestroySprite(sprite);
    }
    if (sprite->y + sprite->y2 < 0 || sprite->y + sprite->y2 > 160)
        DestroySprite(sprite);
}

static void SpriteCB_TrailingSparkles2(struct Sprite *sprite)
{
    if (sprite->data[2])
    {
        sprite->data[2]--;
        sprite->data[1]++;
        sprite->y = sprite->data[1] >> 4;
        if (sprite->y > 0x56)
        {
            sprite->y = 0x4A;
            sprite->data[1] = 0x4A0;
        }
        if (sprite->animEnded)
        {
            if (sprite->data[0] == 0)
            {
                sprite->x += 26;
                if (sprite->x > 188)
                {
                    sprite->x = 376 - sprite->x;
                    sprite->data[0] = 1;
                }
            }
            else
            {
                sprite->x -= 26;
                if (sprite->x < 52)
                {
                    sprite->x = 104 - sprite->x;
                    sprite->data[0] = 0;
                }
            }
            StartSpriteAnim(sprite, 1);
        }
    }
    else
    {
        if (sprite->data[3])
            DestroySprite(sprite);
        if (sprite->animEnded)
            StartSpriteAnim(sprite, 0);
        sprite->data[1] += 4;
        sprite->y = sprite->data[1] >> 4;
        sprite->data[4]++;
        if (sprite->data[4] > 50)
            DestroySprite(sprite);
    }
}

static void SpriteCB_GameFreakTextRevealSparkles(struct Sprite *sprite)
{
    if (sprite->animEnded)
        DestroySprite(sprite);
}

#define tEvA data[0]
#define tEvB data[1]
#define tEvAEnd data[2]
#define tEvBEnd data[3]
#define tEvADelta data[4]
#define tEvBDelta data[5]
#define tEvWhich data[6]
#define tEvStepCount data[8]

void StartBlendTask(u8 eva_start, u8 evb_start, u8 eva_end, u8 evb_end, u8 ev_step, u8 priority)
{
    u8 taskId = CreateTask(Task_SmoothBlendLayers, priority);
    gTasks[taskId].tEvA = eva_start << 8;
    gTasks[taskId].tEvB = evb_start << 8;
    gTasks[taskId].tEvAEnd = eva_end;
    gTasks[taskId].tEvBEnd = evb_end;
    gTasks[taskId].tEvADelta = (eva_end - eva_start) * 256 / ev_step;
    gTasks[taskId].tEvBDelta = (evb_end - evb_start) * 256 / ev_step;
    gTasks[taskId].tEvStepCount = ev_step;
    SetGpuReg(REG_OFFSET_BLDALPHA, (evb_start << 8) | eva_start);
}

bool8 IsBlendTaskActive(void)
{
    return FuncIsActiveTask(Task_SmoothBlendLayers);
}

static void Task_SmoothBlendLayers(u8 taskId)
{
    s16 * data = gTasks[taskId].data;

    if (tEvStepCount != 0)
    {
        if (tEvWhich == 0)
        {
            tEvA += tEvADelta;
            tEvWhich = 1;
        }
        else
        {
            if (--tEvStepCount != 0)
            {
                tEvB += tEvBDelta;
            }
            else
            {
                tEvA = tEvAEnd << 8;
                tEvB = tEvBEnd << 8;
            }
            tEvWhich = 0;
        }
        SetGpuReg(REG_OFFSET_BLDALPHA, (tEvB & ~0xFF) | ((u16)tEvA >> 8));
        if (tEvStepCount == 0)
            DestroyTask(taskId);
    }
}

#endif //HNS_INTRO
