#include "constants/battle_config.h"
#include "constants/expansion_branches.h"
#include "constants/items.h"

struct PickupTable
{
    u16 itemId;
    u8 chanceLv10;  // Lv1 to Lv10
    u8 chanceLv20;  // Lv11 to Lv20
    u8 chanceLv30;  // Lv21 to Lv30
    u8 chanceLv40;  // Lv31 to Lv40
    u8 chanceLv50;  // Lv41 to Lv50
    u8 chanceLv60;  // Lv51 to Lv60
    u8 chanceLv70;  // Lv61 to Lv70
    u8 chanceLv80;  // Lv71 to Lv80
    u8 chanceLv90;  // Lv81 to Lv90
    u8 chanceLv100; // Lv91 to Lv100
};

#ifdef ITEM_EXPANSION
static const struct PickupTable sPickupItems[] = {
    #if B_PICKUP_TABLE <= GEN_3
        {ITEM_POTION, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {ITEM_ANTIDOTE, 30, 10, 0, 0, 0, 0, 0, 0, 0, 0},
        {ITEM_SUPER_POTION, 10, 10, 30, 0, 0, 0, 0, 0, 0, 0},
        {ITEM_GREAT_BALL, 10, 10, 10, 30, 0, 0, 0, 0, 0, 0},
        {ITEM_REPEL, 10, 10, 10, 10, 30, 0, 0, 0, 0, 0},
        {ITEM_ESCAPE_ROPE, 10, 10, 10, 10, 10, 30, 0, 0, 0, 0},
        {ITEM_X_ATTACK, 10, 10, 10, 10, 10, 10, 30, 0, 0, 0},
        {ITEM_FULL_HEAL, 4, 10, 10, 10, 10, 10, 10, 30, 0, 0},
        {ITEM_ULTRA_BALL, 4, 4, 10, 10, 10, 10, 10, 10, 30, 0},
        {ITEM_HYPER_POTION, 1, 4, 4, 10, 10, 10, 10, 10, 10, 30},
        {ITEM_NUGGET, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
        {ITEM_KINGS_ROCK, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0},
        {ITEM_FULL_RESTORE, 0, 0, 1, 1, 0, 0, 4, 4, 10, 10},
        {ITEM_ETHER, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0},
        {ITEM_PROTEIN, 0, 0, 0, 4, 4, 10, 10, 10, 10, 10},
        {ITEM_REVIVE, 0, 0, 0, 0, 4, 4, 10, 10, 10, 10},
        {ITEM_WHITE_HERB, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0},
        {ITEM_TM44, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0},
        {ITEM_HP_UP, 0, 0, 0, 0, 0, 4, 4, 10, 10, 10},
        {ITEM_ELIXIR, 0, 0, 0, 0, 0, 0, 1, 1, 10, 10},
        {ITEM_TM01, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0},
        {ITEM_MAX_REVIVE, 0, 0, 0, 0, 0, 0, 0, 4, 4, 10},
        {ITEM_LEFTOVERS, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1},
        {ITEM_PP_UP, 0, 0, 0, 0, 0, 0, 0, 0, 4, 4},
        {ITEM_TM26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {ITEM_MAX_ELIXIR, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
    #elif B_PICKUP_TABLE == GEN_7
        {ITEM_POTION, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {ITEM_ANTIDOTE, 10, 25, 0, 0, 0, 0, 0, 0, 0, 0},
        {ITEM_SUPER_POTION, 10, 10, 25, 0, 0, 0, 0, 0, 0, 0},
        {ITEM_GREAT_BALL, 10, 10, 10, 25, 0, 0, 0, 0, 0, 0},
        {ITEM_REPEL, 10, 10, 10, 10, 20, 0, 0, 0, 0, 0},
        {ITEM_ESCAPE_ROPE, 10, 10, 10, 10, 10, 20, 0, 0, 0, 0},
        {ITEM_FULL_HEAL, 10, 10, 10, 10, 10, 10, 20, 0, 0, 0},
        {ITEM_HYPER_POTION, 5, 5, 5, 10, 10, 10, 10, 20, 0, 0},
        {ITEM_NUGGET, 5, 3, 0, 0, 0, 0, 0, 0, 0, 0},
        {ITEM_ULTRA_BALL, 3, 3, 5, 5, 10, 10, 10, 10, 20, 0},
        {ITEM_DESTINY_KNOT, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {ITEM_LEFTOVERS, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {ITEM_SUN_STONE, 0, 3, 5, 5, 10, 10, 10, 10, 10, 10},
        {ITEM_MOON_STONE, 0, 3, 5, 5, 10, 10, 10, 10, 10, 10},
        {ITEM_PRISM_SCALE, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
        {ITEM_REVIVE, 0, 2, 2, 5, 5, 7, 10, 10, 10, 20},
        {ITEM_BALM_MUSHROOM, 0, 1, 3, 0, 0, 0, 0, 0, 0, 0},
        {ITEM_RARE_CANDY, 0, 0, 3, 3, 3, 8, 8, 8, 8, 8},
        {ITEM_PEARL_STRING, 0, 0, 1, 4, 0, 0, 0, 0, 0, 0},
        {ITEM_FULL_RESTORE, 0, 0, 1, 1, 2, 3, 5, 5, 10, 15},
        {ITEM_BIG_NUGGET, 0, 0, 0, 1, 4, 5, 5, 5, 5, 5},
        {ITEM_ETHER, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0},
        {ITEM_HEART_SCALE, 0, 0, 0, 0, 0, 1, 4, 10, 10, 10},
        {ITEM_ELIXIR, 0, 0, 0, 0, 0, 0, 3, 5, 0, 0},
        {ITEM_MAX_REVIVE, 0, 0, 0, 0, 0, 0, 0, 2, 10, 10},
        {ITEM_PP_UP, 0, 0, 0, 0, 0, 0, 0, 0, 1, 4},
        {ITEM_MAX_ELIXIR, 0, 0, 0, 0, 0, 0, 0, 0, 1, 3},
    #endif
};
#endif

//Different layout experimentation
//#if B_PICKUP_TABLE <= GEN_3
//static const u16 sLv10PickupItems[] =
//{
//    ITEM_POTION, 30,
//    ITEM_ANTIDOTE, 40,
//    ITEM_SUPER_POTION, 50,
//    ITEM_GREAT_BALL, 60,
//    ITEM_REPEL, 70,
//    ITEM_ESCAPE_ROPE, 80,
//    ITEM_X_ATTACK, 90,
//    ITEM_FULL_HEAL, 4,
//    ITEM_ULTRA_BALL, 4,
//    ITEM_HYPER_POTION, 1,
//    ITEM_NUGGET, 1,
//};
//static const u16 sLv20PickupItems[] =
//{
//    ITEM_POTION, 30,
//    ITEM_ANTIDOTE, 40,
//    ITEM_SUPER_POTION, 50,
//    ITEM_GREAT_BALL, 60,
//    ITEM_REPEL, 70,
//    ITEM_ESCAPE_ROPE, 80,
//    ITEM_X_ATTACK, 90,
//    ITEM_FULL_HEAL, 4,
//    ITEM_ULTRA_BALL, 4,
//    ITEM_HYPER_POTION, 1,
//    ITEM_NUGGET, 1,
//};
//#elif defined ITEM_EXPANSION && B_PICKUP_TABLE == GEN_4
//#elif defined ITEM_EXPANSION && B_PICKUP_TABLE == GEN_5_BW
//#elif defined ITEM_EXPANSION && (B_PICKUP_TABLE == GEN_5_BW2 || B_PICKUP_TABLE == GEN_6_XY)
//#elif defined ITEM_EXPANSION && B_PICKUP_TABLE == GEN_6_ORAS
//#elif defined ITEM_EXPANSION && B_PICKUP_TABLE == GEN_7
//#elif defined ITEM_EXPANSION && B_PICKUP_TABLE == GEN_8_SWSH
//#elif defined ITEM_EXPANSION && B_PICKUP_TABLE == GEN_8_BDSP
//#endif