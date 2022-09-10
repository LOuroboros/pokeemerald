#include "global.h"
#include "event_data.h"
#include "menu.h"
#include "script.h"
#include "palette.h"
#include "field_message_box.h"
#include "rtc.h"
#include "window.h"
#include "string_util.h"
#include "strings.h"
#include "constants/infobox.h"
#include "international_string_util.h"

EWRAM_DATA static u8 sPrintWindowId = 0;

#define BOXLIST(name) {name, ARRAY_COUNT(name)}

struct InfoBox
{
    const u8 *text;
};

struct InfoBoxListStruct
{
    const struct InfoBox *list;
    u8 count;
};

// Strings for infoboxes
static const u8 sText_DisplayHpStat[]    = _("{STR_VAR_1}");
static const u8 sText_DisplayAtkStat[]   = _("{STR_VAR_2}");
static const u8 sText_DisplayDefStat[]   = _("{STR_VAR_3}");
static const u8 sText_DisplaySpAtkStat[] = _("{STR_VAR_4}");
static const u8 sText_DisplaySpDefStat[] = _("{STR_VAR_5}");
static const u8 sText_DisplaySpeedStat[] = _("{STR_VAR_6}");

// Groups of strings for infoboxes
static const struct InfoBox sInfoBoxListPokemonData[] = 
{
    {sText_DisplayHpStat},
    {sText_DisplayAtkStat},
    {sText_DisplayDefStat},
    {sText_DisplaySpAtkStat},
    {sText_DisplaySpDefStat},
    {sText_DisplaySpeedStat},
};

// Infoboxes and their respective groups of strings
static const struct InfoBoxListStruct sInfoBoxes[] =
{
    [INFOBOX_POKEMON_DATA] = BOXLIST(sInfoBoxListPokemonData),
};

// This file's functions
void PrintInfoTable(u8 windowId, u8 itemCount, const struct InfoBox *strs)
{
    u32 i;

    for (i = 0; i < itemCount; i++)
    {
        StringExpandPlaceholders(gStringVar11, strs[i].text);
        AddTextPrinterParameterized(windowId, FONT_NORMAL, gStringVar11, GetStringCenterAlignXOffset(FONT_NORMAL, gStringVar11, 224), (i * 16) + 1, TEXT_SKIP_DRAW, NULL);
    }

    CopyWindowToVram(windowId, 2);
}

void PrintInfoBox(u16 number)
{
    u8 i = 0;
    u16 y = 0;
    u8 count = sInfoBoxes[number].count;
    struct WindowTemplate template;
    const struct InfoBox *list = sInfoBoxes[number].list;

    SetWindowTemplateFields(&template, 0, 1, 1, 28, 12, 15, 4);
    sPrintWindowId = AddWindow(&template);
    FillWindowPixelBuffer(sPrintWindowId, 0);
    PutWindowTilemap(sPrintWindowId);
    DrawStdFrameWithCustomTileAndPalette(sPrintWindowId, FALSE, 0x214, 14);
    PrintInfoTable(sPrintWindowId, count, list);
}

void RemoveInfoBox(void)
{
    ClearStdWindowAndFrameToTransparent(sPrintWindowId, FALSE);
    CopyWindowToVram(sPrintWindowId, 2);
    RemoveWindow(sPrintWindowId);
}
