#include "constants/event_objects.h"
#include "constants/global.h"

const u8 gCostumeFrontPics[COSTUME_COUNT][GENDER_COUNT] = 
{
    [DEFAULT_COSTUME] = {TRAINER_PIC_BRENDAN, TRAINER_PIC_MAY},
    [COSTUME_1] = {TRAINER_PIC_RS_BRENDAN, TRAINER_PIC_RS_MAY},
};

const u8 gCostumeBackPics[COSTUME_COUNT][GENDER_COUNT] = 
{
    [DEFAULT_COSTUME] = {TRAINER_BACK_PIC_BRENDAN, TRAINER_BACK_PIC_MAY},
    [COSTUME_1] = {TRAINER_BACK_PIC_RUBY_SAPPHIRE_BRENDAN, TRAINER_BACK_PIC_RUBY_SAPPHIRE_MAY},
};

const u8 gPlayerAvatarGfxIds[COSTUME_COUNT][PLAYER_AVATAR_STATE_COUNT][GENDER_COUNT] =
{
    [DEFAULT_COSTUME] =
    {
        {OBJ_EVENT_GFX_BRENDAN_NORMAL,     OBJ_EVENT_GFX_MAY_NORMAL},
        {OBJ_EVENT_GFX_BRENDAN_MACH_BIKE,  OBJ_EVENT_GFX_MAY_MACH_BIKE},
        {OBJ_EVENT_GFX_BRENDAN_ACRO_BIKE,  OBJ_EVENT_GFX_MAY_ACRO_BIKE},
        {OBJ_EVENT_GFX_BRENDAN_SURFING,    OBJ_EVENT_GFX_MAY_SURFING},
        {OBJ_EVENT_GFX_BRENDAN_UNDERWATER, OBJ_EVENT_GFX_MAY_UNDERWATER},
        {OBJ_EVENT_GFX_BRENDAN_FIELD_MOVE, OBJ_EVENT_GFX_MAY_FIELD_MOVE},
        {OBJ_EVENT_GFX_BRENDAN_FISHING,    OBJ_EVENT_GFX_MAY_FISHING},
        {OBJ_EVENT_GFX_BRENDAN_WATERING,   OBJ_EVENT_GFX_MAY_WATERING},
    },
    [COSTUME_1] =
    {
        {OBJ_EVENT_GFX_LINK_BRENDAN,       OBJ_EVENT_GFX_LINK_MAY},
        {OBJ_EVENT_GFX_BRENDAN_MACH_BIKE,  OBJ_EVENT_GFX_MAY_MACH_BIKE},
        {OBJ_EVENT_GFX_BRENDAN_ACRO_BIKE,  OBJ_EVENT_GFX_MAY_ACRO_BIKE},
        {OBJ_EVENT_GFX_BRENDAN_SURFING,    OBJ_EVENT_GFX_MAY_SURFING},
        {OBJ_EVENT_GFX_BRENDAN_UNDERWATER, OBJ_EVENT_GFX_MAY_UNDERWATER},
        {OBJ_EVENT_GFX_BRENDAN_FIELD_MOVE, OBJ_EVENT_GFX_MAY_FIELD_MOVE},
        {OBJ_EVENT_GFX_BRENDAN_FISHING,    OBJ_EVENT_GFX_MAY_FISHING},
        {OBJ_EVENT_GFX_BRENDAN_WATERING,   OBJ_EVENT_GFX_MAY_WATERING},
    },
};

const u8 gPlayerAvatarGfxToStateFlag[COSTUME_COUNT][2][5][2] =
{
    [DEFAULT_COSTUME] =
    {
        [MALE] =
        {
            {OBJ_EVENT_GFX_BRENDAN_NORMAL,     PLAYER_AVATAR_FLAG_ON_FOOT},
            {OBJ_EVENT_GFX_BRENDAN_MACH_BIKE,  PLAYER_AVATAR_FLAG_MACH_BIKE},
            {OBJ_EVENT_GFX_BRENDAN_ACRO_BIKE,  PLAYER_AVATAR_FLAG_ACRO_BIKE},
            {OBJ_EVENT_GFX_BRENDAN_SURFING,    PLAYER_AVATAR_FLAG_SURFING},
            {OBJ_EVENT_GFX_BRENDAN_UNDERWATER, PLAYER_AVATAR_FLAG_UNDERWATER},
        },
        [FEMALE] =
        {
            {OBJ_EVENT_GFX_MAY_NORMAL,         PLAYER_AVATAR_FLAG_ON_FOOT},
            {OBJ_EVENT_GFX_MAY_MACH_BIKE,      PLAYER_AVATAR_FLAG_MACH_BIKE},
            {OBJ_EVENT_GFX_MAY_ACRO_BIKE,      PLAYER_AVATAR_FLAG_ACRO_BIKE},
            {OBJ_EVENT_GFX_MAY_SURFING,        PLAYER_AVATAR_FLAG_SURFING},
            {OBJ_EVENT_GFX_MAY_UNDERWATER,     PLAYER_AVATAR_FLAG_UNDERWATER},
        },
    },
    [COSTUME_1] =
    {
        [MALE] =
        {
            {OBJ_EVENT_GFX_LINK_BRENDAN,       PLAYER_AVATAR_FLAG_ON_FOOT},
            {OBJ_EVENT_GFX_BRENDAN_MACH_BIKE,  PLAYER_AVATAR_FLAG_MACH_BIKE},
            {OBJ_EVENT_GFX_BRENDAN_ACRO_BIKE,  PLAYER_AVATAR_FLAG_ACRO_BIKE},
            {OBJ_EVENT_GFX_BRENDAN_SURFING,    PLAYER_AVATAR_FLAG_SURFING},
            {OBJ_EVENT_GFX_BRENDAN_UNDERWATER, PLAYER_AVATAR_FLAG_UNDERWATER},
        },
        [FEMALE] =
        {
            {OBJ_EVENT_GFX_LINK_MAY,           PLAYER_AVATAR_FLAG_ON_FOOT},
            {OBJ_EVENT_GFX_MAY_MACH_BIKE,      PLAYER_AVATAR_FLAG_MACH_BIKE},
            {OBJ_EVENT_GFX_MAY_ACRO_BIKE,      PLAYER_AVATAR_FLAG_ACRO_BIKE},
            {OBJ_EVENT_GFX_MAY_SURFING,        PLAYER_AVATAR_FLAG_SURFING},
            {OBJ_EVENT_GFX_MAY_UNDERWATER,     PLAYER_AVATAR_FLAG_UNDERWATER},
        },
    },
};

static const u8 sRegionMapPlayerIcon_BrendanGfx[] = INCBIN_U8("graphics/pokenav/region_map/brendan_icon.4bpp");
static const u16 sRegionMapPlayerIcon_BrendanPal[] = INCBIN_U16("graphics/pokenav/region_map/brendan_icon.gbapal");

static const u8 sRegionMapPlayerIcon_MayGfx[] = INCBIN_U8("graphics/pokenav/region_map/may_icon.4bpp");
static const u16 sRegionMapPlayerIcon_MayPal[] = INCBIN_U16("graphics/pokenav/region_map/may_icon.gbapal");

static const u8 sRegionMapPlayerIcon_RSBrendanGfx[] = INCBIN_U8("graphics/pokenav/region_map/rs_brendan_icon.4bpp");
static const u16 sRegionMapPlayerIcon_RSBrendanPal[] = INCBIN_U16("graphics/pokenav/region_map/rs_brendan_icon.gbapal");

static const u8 sRegionMapPlayerIcon_RSMayGfx[] = INCBIN_U8("graphics/pokenav/region_map/rs_may_icon.4bpp");
static const u16 sRegionMapPlayerIcon_RSMayPal[] = INCBIN_U16("graphics/pokenav/region_map/rs_may_icon.gbapal");

const struct RegionMapIcon gPlayerRegionMapIcon[COSTUME_COUNT * GENDER_COUNT] =
{
    {DEFAULT_COSTUME, MALE, sRegionMapPlayerIcon_BrendanGfx, sRegionMapPlayerIcon_BrendanPal},
    {DEFAULT_COSTUME, FEMALE, sRegionMapPlayerIcon_MayGfx, sRegionMapPlayerIcon_MayPal},
    {COSTUME_1, MALE, sRegionMapPlayerIcon_RSBrendanGfx, sRegionMapPlayerIcon_RSBrendanPal},
    {COSTUME_1, FEMALE, sRegionMapPlayerIcon_RSMayGfx, sRegionMapPlayerIcon_RSMayPal},
};
