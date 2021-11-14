#include "global.h"
#include "decompress.h"
#include "field_name_box.h"
#include "international_string_util.h"
#include "palette.h"
#include "string_util.h"
#include "task.h"
#include "text.h"
#include "window.h"

#define NAMEBOX_TAG 0x2722

static void LoadNameboxWindow(const struct WindowTemplate *window);
static void CreateTask_DisplayNamebox(void);
static void Task_DisplayNamebox(u8 taskId);
static void LoadNameboxSprite(void);
static void AddTextPrinterForName(void);
static void ClearNameboxTiles(void);

static EWRAM_DATA u8 sNameboxWindowId = 0;
static EWRAM_DATA u8 sNameboxGfxId = 0;

static const u32 sNamebox_Gfx[] = INCBIN_U32("graphics/text_window/name_box.4bpp.lz");
static const u16 sNamebox_Pal[] = INCBIN_U16("graphics/text_window/name_box.gbapal");

static const struct OamData sOam_Namebox = {
    .x = 0,
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(64x32),
    .size = SPRITE_SIZE(64x32),
    .tileNum = 0,
    .priority = 1,
    .paletteNum = 0,
};

static const struct CompressedSpriteSheet sSpriteSheet_Namebox = {
    .data = sNamebox_Gfx,
    .size = 1024,
    .tag = NAMEBOX_TAG,
};

static const union AnimCmd sSpriteAnim_Namebox[] = {
    ANIMCMD_FRAME(0, 0),
    ANIMCMD_END
};

static const union AnimCmd *const sSpriteAnimTable_Namebox[] = {
    sSpriteAnim_Namebox,
};

static const struct SpriteTemplate sSpriteTemplate_Namebox = {
    .tileTag = NAMEBOX_TAG,
    .paletteTag = NAMEBOX_TAG,
    .oam = &sOam_Namebox,
    .anims = sSpriteAnimTable_Namebox,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};

static const struct SpritePalette sSpritePalette_Namebox = {
    .data = sNamebox_Pal, 
    .tag = NAMEBOX_TAG,
};

static const struct WindowTemplate sNamebox_WindowTemplate = {
    .bg = 0,
    .tilemapLeft = 2,
    .tilemapTop = 12,
    .width = 8,
    .height = 2,
    .paletteNum = 15,
    .baseBlock = 0x184
};

void ShowFieldName(const u8 *str) {
    if(IsNameboxDisplayed())
            ClearNamebox();

    LoadNameboxWindow(&sNamebox_WindowTemplate);
    StringExpandPlaceholders(gStringVar3, str);
    AddTextPrinterForName();
    CreateTask_DisplayNamebox();
}

bool8 IsNameboxDisplayed(void) {
    if(sNameboxWindowId == 0)
        return FALSE;
    return TRUE;
}

void ClearNamebox(void) {
    ClearNameboxTiles();
    RemoveWindow(sNameboxWindowId);
    sNameboxWindowId = 0;
    DestroySpriteAndFreeResources(&gSprites[sNameboxGfxId]);
}

static void LoadNameboxTiles(void) {
    PutWindowTilemap(sNameboxWindowId);
}

#define tTimer data[0]

static void CreateTask_DisplayNamebox(void) {
    u8 taskId = CreateTask(Task_DisplayNamebox, 0x50);
    gTasks[taskId].tTimer = 0x1;
}

static void Task_DisplayNamebox(u8 taskId) {
    struct Task *task = &gTasks[taskId];

    if (gTasks[taskId].tTimer) {
        gTasks[taskId].tTimer--;
    }
    else {
        LoadNameboxTiles();
        LoadNameboxSprite();
        DestroyTask(taskId);
    }
}

#undef tTimer

static void LoadNameboxWindow(const struct WindowTemplate *window) {
    sNameboxWindowId = AddWindow(window);

    CopyWindowToVram(sNameboxWindowId, 3);
}

static void LoadNameboxSprite(void) {
    u8 spriteId;

    LoadCompressedSpriteSheet(&sSpriteSheet_Namebox);
    LoadSpritePalette(&sSpritePalette_Namebox);
    spriteId = CreateSprite(&sSpriteTemplate_Namebox, 48, 99, 0);
    if (sNameboxGfxId == MAX_SPRITES)
        return;
    else
        sNameboxGfxId = spriteId;
}

void AddTextPrinterForName(void) {
    struct TextPrinterTemplate printer;
	u8 x;

    x = GetStringCenterAlignXOffset(0, gStringVar3, 8 * 8);

    printer.currentChar = gStringVar3;
    printer.windowId = sNameboxWindowId;
    printer.fontId = 0;
    printer.x = x;
    printer.y = 4;
    printer.currentX = printer.x;
    printer.currentY = printer.y;
    printer.fgColor = 1;
    printer.bgColor = TEXT_COLOR_TRANSPARENT;
    printer.shadowColor = 11;
    printer.unk = GetFontAttribute(1, FONTATTR_UNKNOWN);
    printer.letterSpacing = 0;
    printer.lineSpacing = 0;

    AddTextPrinter(&printer, TEXT_SPEED_FF, NULL);
}

static void ClearNameboxTiles(void) {
    ClearWindowTilemap(sNameboxWindowId);
    FillWindowPixelBuffer(sNameboxWindowId, PIXEL_FILL(0));
    CopyWindowToVram(sNameboxWindowId, 3);
}
