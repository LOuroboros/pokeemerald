#include "global.h"
#include "credits.h"
#include "data.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "event_scripts.h"
#include "field_message_box.h"
#include "field_screen_effect.h"
#include "international_string_util.h"
#include "item.h"
#include "item_icon.h"
#include "list_menu.h"
#include "m4a.h"
#include "main.h"
#include "main_menu.h"
#include "malloc.h"
#include "map_name_popup.h"
#include "menu.h"
#include "naming_screen.h"
#include "new_game.h"
#include "overworld.h"
#include "pokedex.h"
#include "pokemon.h"
#include "pokemon_icon.h"
#include "pokemon_storage_system.h"
#include "random.h"
#include "region_map.h"
#include "script.h"
#include "script_pokemon_util.h"
#include "sound.h"
#include "strings.h"
#include "string_util.h"
#include "task.h"
#include "pokemon_summary_screen.h"
#include "constants/abilities.h"
#include "constants/flags.h"
#include "constants/items.h"
#include "constants/maps.h"
#include "constants/map_groups.h"
#include "constants/songs.h"
#include "constants/species.h"
#include "field_specials.h"
#include "money.h"
#include "field_weather.h"
#include "palette.h"
#include "save.h"
#include "coins.h"
#include "daycare.h"
#include "constants/daycare.h"
#include "debug.h"
#include "rtc.h"

#ifdef DEBUG_MENU_ENABLED

// *******************************
// Enums
enum { // Main
    DEBUG_MENU_ITEM_UTILITIES,
    DEBUG_MENU_ITEM_FLAGS,
    DEBUG_MENU_ITEM_VARS,
    DEBUG_MENU_ITEM_GIVE,
    DEBUG_MENU_ITEM_SOUND,
    DEBUG_MENU_ITEM_CANCEL
};
enum { // Util
    DEBUG_UTIL_MENU_ITEM_HEAL_PARTY,
    DEBUG_UTIL_MENU_ITEM_FLY,
    DEBUG_UTIL_MENU_ITEM_WARP,
    DEBUG_UTIL_MENU_ITEM_PRESETWARP,
    DEBUG_UTIL_MENU_ITEM_SAVESPACE,
    DEBUG_UTIL_MENU_ITEM_CHECKWALLCLOCK,
    DEBUG_UTIL_MENU_ITEM_SETWALLCLOCK,
    DEBUG_UTIL_MENU_ITEM_CHECKWEEKDAY,
    DEBUG_UTIL_MENU_ITEM_WATCHCREDITS,
    DEBUG_UTIL_MENU_ITEM_TRAINER_NAME,
    DEBUG_UTIL_MENU_ITEM_RIVAL_NAME,
    DEBUG_UTIL_MENU_ITEM_TRAINER_GENDER,
    DEBUG_UTIL_MENU_ITEM_TRAINER_ID,
    DEBUG_UTIL_MENU_ITEM_CHECKSTATS,
    DEBUG_UTIL_MENU_ITEM_FORCEEGGHATCH,
    DEBUG_UTIL_MENU_ITEM_OPEN_PC,
    DEBUG_UTIL_MENU_ITEM_DO_WONDER_TRADE,
    DEBUG_UTIL_MENU_ITEM_CHANGE_COSTUME,
    DEBUG_UTIL_MENU_ITEM_CATCH_CHAIN_STATUS,
    DEBUG_UTIL_MENU_ITEM_CREATE_DAYCARE_EGG,
    DEBUG_UTIL_MENU_ITEM_CLEAR_BAG,
    DEBUG_UTIL_MENU_ITEM_DELETE_POKEMON,
    DEBUG_UTIL_MENU_ITEM_CLEAR_PARTY,
    DEBUG_UTIL_MENU_ITEM_GIVE_STATUS_AILMENT,
    DEBUG_UTIL_MENU_ITEM_TEST_RAYQUAZA_CUTSCENE,
};
enum { // Flags
    DEBUG_FLAG_MENU_ITEM_FLAGS,
    DEBUG_FLAG_MENU_ITEM_BADGES,
    DEBUG_FLAG_MENU_ITEM_POKEDEXFLAGS,
    DEBUG_FLAG_MENU_ITEM_POKEDEX_ONOFF,
    DEBUG_FLAG_MENU_ITEM_NATDEX_ONOFF,
    DEBUG_FLAG_MENU_ITEM_POKEMON_ONOFF,
    DEBUG_FLAG_MENU_ITEM_POKENAV_ONOFF,
    DEBUG_FLAG_MENU_ITEM_FLYANYWHERE,
    DEBUG_FLAG_MENU_ITEM_COLLISION_ONOFF,
    DEBUG_FLAG_MENU_ITEM_ENCOUNTER_ONOFF,
    DEBUG_FLAG_MENU_ITEM_TRAINER_SEE_ONOFF,
    DEBUG_FLAG_MENU_ITEM_BAG_USE_ONOFF,
    DEBUG_FLAG_MENU_ITEM_CATCHING_ONOFF,
    DEBUG_FLAG_MENU_ITEM_SHINIES_ONOFF,
    DEBUG_FLAG_MENU_ITEM_ESCAPING_ONOFF,
    DEBUG_FLAG_MENU_ITEM_EXPERIENCE_ONOFF,
    DEBUG_FLAG_MENU_ITEM_SHINY_HUE_SHIFT_ONOFF,
    DEBUG_FLAG_MENU_ITEM_RUNNING_SHOES_ONOFF,
    DEBUG_FLAG_MENU_ITEM_MAP_TRANSITION_MUSIC_ONOFF,
};
enum { // Vars
    DEBUG_VARS_MENU_ITEM_VARS,
};
enum { // Give
    DEBUG_GIVE_MENU_GIVE_ITEM,
    DEBUG_GIVE_MENU_GIVE_ALL_TMS,
    DEBUG_GIVE_MENU_GIVE_EGG,
    DEBUG_GIVE_MENU_GIVE_POKEMON_SIMPLE,
    DEBUG_GIVE_MENU_GIVE_POKEMON_COMPLEX,
    DEBUG_GIVE_MENU_GIVE_MAX_MONEY,
    DEBUG_GIVE_MENU_GIVE_MAX_COINS,
    DEBUG_GIVE_MENU_FILL_PC_BOXES,
    DEBUG_GIVE_MENU_FILL_PC_ITEM_STORAGE,
    DEBUG_GIVE_MENU_FILL_ITEMS_POCKET,
    DEBUG_GIVE_MENU_FILL_POKE_BALLS_POCKET,
    DEBUG_GIVE_MENU_FILL_BERRIES_POCKET,
    DEBUG_GIVE_MENU_FILL_KEY_ITEMS_POCKET,
    DEBUG_GIVE_MENU_GIVE_DEBUG_PACK,
};
enum { //Sound
    DEBUG_SOUND_MENU_ITEM_SE,
    DEBUG_SOUND_MENU_ITEM_MUS,
};
enum { // Preset Warps
    DEBUG_UTILITIES_PRESETWARP_LITTLEROOT,
    DEBUG_UTILITIES_PRESETWARP_OLDALE,
    DEBUG_UTILITIES_PRESETWARP_PETALBURG,
    DEBUG_UTILITIES_PRESETWARP_RUSTBORO,
    DEBUG_UTILITIES_PRESETWARP_DEWFORD,
    DEBUG_UTILITIES_PRESETWARP_SLATEPORT,
    DEBUG_UTILITIES_PRESETWARP_MAUVILLE,
    DEBUG_UTILITIES_PRESETWARP_VERDANTURF,
    DEBUG_UTILITIES_PRESETWARP_FALLARBOR,
    DEBUG_UTILITIES_PRESETWARP_LAVARIDGE,
    DEBUG_UTILITIES_PRESETWARP_FORTREE,
    DEBUG_UTILITIES_PRESETWARP_LILYCOVE,
    DEBUG_UTILITIES_PRESETWARP_MOSSDEEP,
    DEBUG_UTILITIES_PRESETWARP_PACIFIDLOG,
    DEBUG_UTILITIES_PRESETWARP_SOOTOPOLIS,
    DEBUG_UTILITIES_PRESETWARP_EVERGRANDE_OUTER,
    DEBUG_UTILITIES_PRESETWARP_EVERGRANDE_INNER,
    DEBUG_UTILITIES_PRESETWARP_PKMN_LEAGUE_SIDNEY,
    DEBUG_UTILITIES_PRESETWARP_PKMN_LEAGUE_PHOEBE,
    DEBUG_UTILITIES_PRESETWARP_PKMN_LEAGUE_GLACIA,
    DEBUG_UTILITIES_PRESETWARP_PKMN_LEAGUE_DRAKE,
    DEBUG_UTILITIES_PRESETWARP_PKMN_LEAGUE_CHAMPION,
    DEBUG_UTILITIES_PRESETWARP_BATTLE_FACTORY,
    DEBUG_UTILITIES_PRESETWARP_BATTLE_ARENA,
    DEBUG_UTILITIES_PRESETWARP_BATTLE_DOME,
    DEBUG_UTILITIES_PRESETWARP_BATTLE_PIKE,
    DEBUG_UTILITIES_PRESETWARP_BATTLE_PALACE,
    DEBUG_UTILITIES_PRESETWARP_BATTLE_PYRAMID,
    DEBUG_UTILITIES_PRESETWARP_BATTLE_TOWER,
};
enum { // Badges
    DEBUG_UTILITIES_BADGES_ALLBADGES,
    DEBUG_UTILITIES_BADGES_FIRST,
    DEBUG_UTILITIES_BADGES_SECOND,
    DEBUG_UTILITIES_BADGES_THIRD,
    DEBUG_UTILITIES_BADGES_FOURTH,
    DEBUG_UTILITIES_BADGES_FIFTH,
    DEBUG_UTILITIES_BADGES_SIXTH,
    DEBUG_UTILITIES_BADGES_SEVENTH,
    DEBUG_UTILITIES_BADGES_EIGHTH,
};

// *******************************
// Constants
#define DEBUG_MAIN_MENU_WIDTH 20
#define DEBUG_MAIN_MENU_HEIGHT 8

#define DEBUG_NUMBER_DISPLAY_WIDTH 10
#define DEBUG_NUMBER_DISPLAY_HEIGHT 4

#define DEBUG_NUMBER_DISPLAY_SOUND_WIDTH 20
#define DEBUG_NUMBER_DISPLAY_SOUND_HEIGHT 6

#define DEBUG_NUMBER_DIGITS_FLAGS 4
#define DEBUG_NUMBER_DIGITS_VARIABLES 5
#define DEBUG_NUMBER_DIGITS_VARIABLE_VALUE 5
#define DEBUG_NUMBER_DIGITS_ITEMS 4
#define DEBUG_NUMBER_DIGITS_ITEM_QUANTITY 2

#define DEBUG_NUMBER_ICON_X 210
#define DEBUG_NUMBER_ICON_Y 50

// EWRAM
static EWRAM_DATA struct DebugMonData *sDebugMonData = NULL;

// *******************************
struct DebugMonData
{
    u16 mon_speciesId;
    u8  mon_level;
    u8  isShiny;
    u16 mon_natureId;
    u16 mon_abilityNum;
    u8  mon_iv_hp;
    u8  mon_iv_atk;
    u8  mon_iv_def;
    u8  mon_iv_speed;
    u8  mon_iv_satk;
    u8  mon_iv_sdef;
    u16 mon_move_0;
    u16 mon_move_1;
    u16 mon_move_2;
    u16 mon_move_3;
};

// *******************************
// Define functions
static void Debug_ShowMenu(void (*HandleInput)(u8), struct ListMenuTemplate LMtemplate);
static void Debug_DestroyMenu(u8);
static void DebugAction_Cancel(u8);
static void DebugAction_DestroyExtraWindow(u8 taskId);

static void DebugAction_OpenUtilitiesMenu(u8);
static void DebugAction_OpenFlagsMenu(u8);
static void DebugAction_OpenVariablesMenu(u8);
static void DebugAction_OpenGiveMenu(u8);
static void DebugAction_OpenSoundMenu(u8);
static void DebugTask_HandleMenuInput_Main(u8);
static void DebugTask_HandleMenuInput_Utilities(u8);
static void DebugTask_HandleMenuInput_Flags(u8);
static void DebugTask_HandleMenuInput_Vars(u8);
static void DebugTask_HandleMenuInput_Give(u8);
static void DebugTask_HandleMenuInput_Sound(u8);
static void DebugTask_HandleMenuInput_PresetWarp(u8);
static void DebugTask_HandleMenuInput_Badges(u8);

static void DebugTask_ChangeCostume_Execute(u8 taskId);
static void DebugTask_ChangeCostume_End(u8 taskId);

static void DebugAction_Util_HealParty(u8 taskId);
static void DebugAction_Util_Fly(u8 taskId);
static void DebugAction_Util_Warp_Warp(u8 taskId);
static void DebugAction_Util_Warp_PresetWarp(u8 taskId);
static void DebugAction_Util_Warp_SelectMapGroup(u8 taskId);
static void DebugAction_Util_Warp_SelectMap(u8 taskId);
static void DebugAction_Util_Warp_SelectWarp(u8 taskId);
static void DebugAction_Util_CheckSaveSpace(u8);
static void DebugAction_Util_CheckWallClock(u8);
static void DebugAction_Util_SetWallClock(u8);
static void DebugAction_Util_CheckWeekDay(u8);
static void DebugAction_Util_WatchCredits(u8);
static void DebugAction_Util_Trainer_Name(u8);
static void DebugAction_Util_Rival_Name(u8);
static void DebugAction_Util_Trainer_Gender(u8);
static void DebugAction_Util_Trainer_Id(u8);
static void DebugAction_Util_CheckStats(u8);
static void DebugAction_Util_ForceEggHatch(u8);
static void DebugAction_Util_OpenPC(u8 taskId);
static void DebugAction_Util_DoWonderTrade(u8 taskId);
static void DebugAction_Util_ChangeCostume(u8 taskId);
static void DebugAction_Util_CatchChainStatus(u8 taskId);
static void DebugAction_Util_CreateDaycareEgg(u8 taskId);
static void DebugAction_Util_ClearBag(u8 taskId);
static void DebugAction_Util_DeletePokemon(u8 taskId);
static void DebugAction_Util_ClearParty(u8 taskId);
static void DebugAction_Util_GiveStatusAilment(u8 taskId);
static void DebugAction_Util_TestRayquazaCutscene(u8 taskId);

static void DebugAction_Flags_Flags(u8 taskId);
static void DebugAction_Flags_FlagsSelect(u8 taskId);

static void DebugAction_Flags_SetPokedexFlags(u8);
static void DebugAction_Flags_Badges(u8 taskId);
static void DebugAction_Flags_DexOnOff(u8);
static void DebugAction_Flags_NatDexOnOff(u8);
static void DebugAction_Flags_PokemonOnOff(u8);
static void DebugAction_Flags_PokeNavOnOff(u8);
static void DebugAction_Flags_ToggleFlyFlags(u8);
static void DebugAction_Flags_CollisionOnOff(u8);
static void DebugAction_Flags_EncounterOnOff(u8);
static void DebugAction_Flags_TrainerSeeOnOff(u8);
static void DebugAction_Flags_BagUseOnOff(u8);
static void DebugAction_Flags_CatchingOnOff(u8);
static void DebugAction_Flags_ShiniesOnOff(u8);
static void DebugAction_Flags_EscapingOnOff(u8);
static void DebugAction_Flags_ExperienceOnOff(u8);
static void DebugAction_Flags_ShinyHueShiftOnOff(u8);
static void DebugAction_Flags_RunningShoesOnOff(u8);
static void DebugAction_Flags_MapTransitionMusicOnOff(u8);

static void DebugAction_Vars_Vars(u8 taskId);
static void DebugAction_Vars_Select(u8 taskId);
static void DebugAction_Vars_SetValue(u8 taskId);

static void DebugAction_Give_Item(u8 taskId);
static void DebugAction_Give_Item_SelectId(u8 taskId);
static void DebugAction_Give_Item_SelectQuantity(u8 taskId);
static void DebugAction_Give_AllTMs(u8 taskId);
static void DebugAction_Give_Egg(u8 taskId);
static void DebugAction_Give_Egg_SelectId(u8 taskId);
static void DebugAction_Give_PokemonSimple(u8 taskId);
static void DebugAction_Give_PokemonComplex(u8 taskId);
static void DebugAction_Give_Pokemon_SelectId(u8 taskId);
static void DebugAction_Give_Pokemon_SelectLevel(u8 taskId);
static void DebugAction_Give_Pokemon_SelectShiny(u8 taskId);
static void DebugAction_Give_Pokemon_SelectNature(u8 taskId);
static void DebugAction_Give_Pokemon_SelectAbility(u8 taskId);
static void DebugAction_Give_Pokemon_SelectIVs(u8 taskId);
static void DebugAction_Give_Pokemon_ComplexCreateMon(u8 taskId);
static void DebugAction_Give_Pokemon_Move(u8 taskId);
static void DebugAction_Give_MaxMoney(u8 taskId);
static void DebugAction_Give_MaxCoins(u8 taskId);
static void DebugAction_Give_FillPCBoxes(u8 taskId);
static void DebugAction_Give_FillPCItemStorage(u8 taskId);
static void DebugAction_Give_FillItemsPocket(u8 taskId);
static void DebugAction_Give_FillPokeBallsPocket(u8 taskId);
static void DebugAction_Give_FillBerriesPocket(u8 taskId);
static void DebugAction_Give_FillKeyItemsPocket(u8 taskId);
static void DebugAction_Give_DebugPack(u8 taskId);

static void DebugAction_Sound_SE(u8 taskId);
static void DebugAction_Sound_SE_SelectId(u8 taskId);
static void DebugAction_Sound_MUS(u8 taskId);
static void DebugAction_Sound_MUS_SelectId(u8 taskId);

static void DebugAction_PresetWarp_LittlerootTown(u8 taskId);
static void DebugAction_PresetWarp_OldaleTown(u8 taskId);
static void DebugAction_PresetWarp_PetalburgCity(u8 taskId);
static void DebugAction_PresetWarp_RustboroCity(u8 taskId);
static void DebugAction_PresetWarp_DewfordTown(u8 taskId);
static void DebugAction_PresetWarp_SlateportCity(u8 taskId);
static void DebugAction_PresetWarp_MauvilleCity(u8 taskId);
static void DebugAction_PresetWarp_VerdanturfTown(u8 taskId);
static void DebugAction_PresetWarp_FallarborTown(u8 taskId);
static void DebugAction_PresetWarp_LavaridgeTown(u8 taskId);
static void DebugAction_PresetWarp_FortreeCity(u8 taskId);
static void DebugAction_PresetWarp_LilycoveCity(u8 taskId);
static void DebugAction_PresetWarp_MossdeepCity(u8 taskId);
static void DebugAction_PresetWarp_PacifidlogTown(u8 taskId);
static void DebugAction_PresetWarp_SootopolisCity(u8 taskId);
static void DebugAction_PresetWarp_EverGrandeCityOuter(u8 taskId);
static void DebugAction_PresetWarp_EverGrandeCityInner(u8 taskId);
static void DebugAction_PresetWarp_PkmnLeagueSidney(u8 taskId);
static void DebugAction_PresetWarp_PkmnLeaguePhoebe(u8 taskId);
static void DebugAction_PresetWarp_PkmnLeagueGlacia(u8 taskId);
static void DebugAction_PresetWarp_PkmnLeagueDrake(u8 taskId);
static void DebugAction_PresetWarp_PkmnLeagueChampion(u8 taskId);
static void DebugAction_PresetWarp_BattleFactory(u8 taskId);
static void DebugAction_PresetWarp_BattleArena(u8 taskId);
static void DebugAction_PresetWarp_BattleDome(u8 taskId);
static void DebugAction_PresetWarp_BattlePike(u8 taskId);
static void DebugAction_PresetWarp_BattlePalace(u8 taskId);
static void DebugAction_PresetWarp_BattlePyramid(u8 taskId);
static void DebugAction_PresetWarp_BattleTower(u8 taskId);

static void DebugAction_Badges_AllBadges(u8);
static void DebugAction_Badges_First(u8 taskId);
static void DebugAction_Badges_Second(u8 taskId);
static void DebugAction_Badges_Third(u8 taskId);
static void DebugAction_Badges_Fourth(u8 taskId);
static void DebugAction_Badges_Fifth(u8 taskId);
static void DebugAction_Badges_Sixth(u8 taskId);
static void DebugAction_Badges_Seventh(u8 taskId);
static void DebugAction_Badges_Eighth(u8 taskId);

static void DebugTask_HandleMenuInput(u8 taskId, void (*HandleInput)(u8));
static void DebugAction_OpenSubMenu(u8 taskId, struct ListMenuTemplate LMtemplate);

extern u8 DebugScript_CheckSavefileSize[];
extern u8 DebugScript_DebugPack[];
extern u8 PlayersHouse_2F_EventScript_SetWallClock[];
extern u8 PlayersHouse_2F_EventScript_CheckWallClock[];
extern u8 Script_PokemonDataInfoBox[];
extern u8 DebugScript_ForceEggHatch[];
extern u8 DebugScript_DoWonderTrade[];
extern u8 DebugScript_CatchingStreak[];
extern u8 DebugScript_DeleteMon[];
extern u8 DebugScript_GiveStatusAilment[];

#define ABILITY_NAME_LENGTH 16
extern const u8 gAbilityNames[][ABILITY_NAME_LENGTH + 1];

// *******************************
//Maps per map group COPY FROM /include/constants/map_groups.h
 static const u8 MAP_GROUP_COUNT[] = {57, 5, 5, 6, 7, 8, 9, 7, 7, 14, 8, 17, 10, 23, 13, 15, 15, 2, 2, 2, 3, 1, 1, 1, 108, 61, 89, 2, 1, 13, 1, 1, 3, 1, 0};

// Text
// Main Menu
static const u8 sDebugText_Utilities[] = _("Utilities");
static const u8 sDebugText_Flags[] =     _("Flags");
static const u8 sDebugText_Vars[] =      _("Variables");
static const u8 sDebugText_Give[] =      _("Give X");
static const u8 sDebugText_Sound[] =     _("Sound");
static const u8 sDebugText_Cancel[] =    _("Cancel");
// Util Menu
static const u8 sDebugText_Util_HealParty[] =                _("Heal Party");
static const u8 sDebugText_Util_Fly[] =                      _("Fly to map");
static const u8 sDebugText_Util_PresetWarp[] =               _("Preset Warp");
static const u8 sDebugText_Util_WarpToMap[] =                _("Warp to map warp");
static const u8 sDebugText_Util_WarpToMap_SelectMapGroup[] = _("Group: {STR_VAR_1}          \n                 \n\n{STR_VAR_3}     ");
static const u8 sDebugText_Util_WarpToMap_SelectMap[] =      _("Map: {STR_VAR_1}            \nMapSec:          \n{STR_VAR_2}                       \n{STR_VAR_3}     ");
static const u8 sDebugText_Util_WarpToMap_SelectWarp[] =     _("Warp:             \n{STR_VAR_1}                \n                                  \n{STR_VAR_3}     ");
static const u8 sDebugText_Util_WarpToMap_SelMax[] =         _("{STR_VAR_1} / {STR_VAR_2}");
static const u8 sDebugText_Util_SaveSpace[] =                _("Savefile Size Data");
static const u8 sDebugText_Util_CheckWallClock[] =           _("Check Wall Clock");
static const u8 sDebugText_Util_SetWallClock[] =             _("Set Wall Clock");
static const u8 sDebugText_Util_CheckWeekDay[] =             _("Check Week Day");
static const u8 sDebugText_Util_WatchCredits[] =             _("Watch Credits");
static const u8 sDebugText_Util_Trainer_Name[] =             _("Trainer name");
static const u8 sDebugText_Util_Rival_Name[] =               _("Rival name");
static const u8 sDebugText_Util_Trainer_Gender[] =           _("Change Gender");
static const u8 sDebugText_Util_Trainer_Id[] =               _("New Trainer Id");
static const u8 sDebugText_Util_CheckStats[] =               _("Check Stats");
static const u8 sDebugText_Util_ForceEggHatch[] =            _("Force Egg Hatch");
static const u8 sDebugText_Util_OpenPC[] =                   _("Open PC");
static const u8 sDebugText_Util_DoWonderTrade[] =            _("Do a Wonder Trade");
static const u8 sDebugText_Util_ChangeCostume[] =            _("Change Costume");
static const u8 sDebugText_Util_CatchChainStatus[] =         _("Catch Chain Status");
static const u8 sDebugText_Util_CreateDaycareEgg[] =         _("Create Daycare Egg");
static const u8 sDebugText_Util_ClearBag[] =                 _("Clear Bag");
static const u8 sDebugText_Util_DeletePokemon[] =            _("Delete Pokémon");
static const u8 sDebugText_Util_ClearParty[] =               _("Clear Party");
static const u8 sDebugText_Util_GiveStatusAilment[] =        _("Give Status Ailment");
static const u8 sDebugText_Util_TestRayquazaCutscene[] =     _("Test Rayquaza Cutscene");
// Flags Menu
static const u8 sDebugText_Flags_Flags[] =                   _("Edit Flags");
static const u8 sDebugText_Flags_Badges[] =                  _("Toggle Badges");
static const u8 sDebugText_Flags_SetPokedexFlags[] =         _("All Pokédex Flags");
static const u8 sDebugText_Flags_DexOnOff[] =                _("Pokédex ON/OFF");
static const u8 sDebugText_Flags_NationalDexOnOff[] =        _("NatDex ON/OFF");
static const u8 sDebugText_Flags_PokemonOnOff[] =            _("Pokémon ON/OFF");
static const u8 sDebugText_Flags_PokeNavOnOff[] =            _("PokéNav ON/OFF");
static const u8 sDebugText_Flags_ToggleFlyFlags[] =          _("Fly Flags ON/OFF");
static const u8 sDebugText_Flags_CollisionOnOff[] =          _("Collision ON/OFF");
static const u8 sDebugText_Flags_EncounterOnOff[] =          _("Encounter ON/OFF");
static const u8 sDebugText_Flags_TrainerSeeOnOff[] =         _("TrainerSee ON/OFF");
static const u8 sDebugText_Flags_BagUseOnOff[] =             _("BagUse ON/OFF");
static const u8 sDebugText_Flags_CatchingOnOff[] =           _("Catching ON/OFF");
static const u8 sDebugText_Flags_ShiniesOnOff[] =            _("Shiny enc. ON/OFF");
static const u8 sDebugText_Flags_EscapingOnOff[] =           _("Escaping ON/OFF");
static const u8 sDebugText_Flags_ExperienceOnOff[] =         _("Experience ON/OFF");
static const u8 sDebugText_Flags_ShinyHueShiftOnOff[] =      _("Shiny Hue Shift ON/OFF");
static const u8 sDebugText_Flags_RunningShoesOnOff[] =       _("Running Shoes ON/OFF");
static const u8 sDebugText_Flags_MapTransitionMusicOnOff[] = _("Map Transition Music ON/OFF");
static const u8 sDebugText_Flag[] =                          _("Flag: {STR_VAR_1}   \n{STR_VAR_2}                   \n{STR_VAR_3}");
static const u8 sDebugText_FlagHex[] =                       _("{STR_VAR_1}           \n0x{STR_VAR_2}             ");
static const u8 sDebugText_FlagSet[] =                       _("TRUE");
static const u8 sDebugText_FlagUnset[] =                     _("FALSE");
// Variables Menu
static const u8 sDebugText_Vars_Vars[] =        _("Edit Vars");
static const u8 sDebugText_VariableHex[] =      _("{STR_VAR_1}           \n0x{STR_VAR_2}             ");
static const u8 sDebugText_Variable[] =         _("Var: {STR_VAR_1}             \nVal: {STR_VAR_3}             \n{STR_VAR_2}");
static const u8 sDebugText_VariableValueSet[] = _("Var: {STR_VAR_1}             \nVal: {STR_VAR_3}             \n{STR_VAR_2}");
// Give Menu
static const u8 sDebugText_Give_GiveItem[] =            _("Give Item");
static const u8 sDebugText_ItemQuantity[] =             _("Quantity:       \n{STR_VAR_1}    \n\n{STR_VAR_2}");
static const u8 sDebugText_ItemID[] =                   _("Item Id: {STR_VAR_3}\n{STR_VAR_1}    \n\n{STR_VAR_2}");
static const u8 sDebugText_Give_AllTMs[] =              _("Give All TMs");
static const u8 sDebugText_Give_Egg[] =                 _("Give Egg");
static const u8 sDebugText_Give_GivePokemonSimple[] =   _("Give Pkmn (Basic)");
static const u8 sDebugText_Give_GivePokemonComplex[] =  _("Give Pkmn (Adv.)");
static const u8 sDebugText_PokemonID[] =                _("Species: {STR_VAR_3}\n{STR_VAR_1}    \n\n{STR_VAR_2}");
static const u8 sDebugText_PokemonLevel[] =             _("Level:                   \n{STR_VAR_1}           \n          \n{STR_VAR_2}");
static const u8 sDebugText_PokemonShiny[] =             _("Shiny:                   \n   {STR_VAR_2}             \n              \n                ");
static const u8 sDebugText_PokemonNature[] =            _("NatureId: {STR_VAR_3}          \n{STR_VAR_1}          \n          \n{STR_VAR_2}");
static const u8 sDebugText_PokemonAbility[] =           _("AbilityNum: {STR_VAR_3}          \n{STR_VAR_1}          \n          \n{STR_VAR_2}");
static const u8 sDebugText_PokemonIVs[] =               _("All IVs:               \n    {STR_VAR_3}            \n             \n{STR_VAR_2}          ");
static const u8 sDebugText_PokemonIV_0[] =              _("IV HP:               \n    {STR_VAR_3}            \n             \n{STR_VAR_2}          ");
static const u8 sDebugText_PokemonIV_1[] =              _("IV Attack:               \n    {STR_VAR_3}            \n             \n{STR_VAR_2}          ");
static const u8 sDebugText_PokemonIV_2[] =              _("IV Defense:               \n    {STR_VAR_3}            \n             \n{STR_VAR_2}          ");
static const u8 sDebugText_PokemonIV_3[] =              _("IV Speed:               \n    {STR_VAR_3}            \n             \n{STR_VAR_2}          ");
static const u8 sDebugText_PokemonIV_4[] =              _("IV Sp. Attack:               \n    {STR_VAR_3}            \n             \n{STR_VAR_2}          ");
static const u8 sDebugText_PokemonIV_5[] =              _("IV Sp. Defense:               \n    {STR_VAR_3}            \n             \n{STR_VAR_2}          ");
static const u8 sDebugText_PokemonMove_0[] =            _("Move 0: {STR_VAR_3}                   \n{STR_VAR_1}           \n          \n{STR_VAR_2}");
static const u8 sDebugText_PokemonMove_1[] =            _("Move 1: {STR_VAR_3}                   \n{STR_VAR_1}           \n          \n{STR_VAR_2}");
static const u8 sDebugText_PokemonMove_2[] =            _("Move 2: {STR_VAR_3}                   \n{STR_VAR_1}           \n          \n{STR_VAR_2}");
static const u8 sDebugText_PokemonMove_3[] =            _("Move 3: {STR_VAR_3}                   \n{STR_VAR_1}           \n          \n{STR_VAR_2}");
static const u8 sDebugText_Give_MaxMoney[] =            _("Give Max. Money");
static const u8 sDebugText_Give_FillPCBoxes[] =         _("Fill PC Boxes");
static const u8 sDebugText_Give_FillPCItemStorage[] =   _("Fill PC Items");
static const u8 sDebugText_Give_FillItemsPocket[] =     _("Fill Items Pocket");
static const u8 sDebugText_Give_FillPokeBallsPocket[] = _("Fill Poké Balls Pocket");
static const u8 sDebugText_Give_FillBerriesPocket[] =   _("Fill Berries Pocket");
static const u8 sDebugText_Give_FillKeyItemsPocket[] =  _("Fill Key Items Pocket");
static const u8 sDebugText_Give_MaxCoins[] =            _("Give Max. Coins");
static const u8 sDebugText_Give_GiveDebugPack[] =       _("Debug Pack");
// Sound Mneu
static const u8 sDebugText_Sound_SE[] =     _("Effects");
static const u8 sDebugText_Sound_SE_ID[] =  _("Sound Id: {STR_VAR_3}\n{STR_VAR_1}    \n{STR_VAR_2}");
static const u8 sDebugText_Sound_MUS[] =    _("Music");
static const u8 sDebugText_Sound_MUS_ID[] = _("Music Id: {STR_VAR_3}\n{STR_VAR_1}    \n{STR_VAR_2}");
static const u8 sDebugText_Sound_Empty[] =  _("");
// Preset Warps
static const u8 sDebugText_Map_LittlerootTown[]      = _("Littleroot Town");
static const u8 sDebugText_Map_OldaleTown[]          = _("Oldale Town");
static const u8 sDebugText_Map_PetalburgCity[]       = _("Petalburg City");
static const u8 sDebugText_Map_RustboroCity[]        = _("Rustboro City");
static const u8 sDebugText_Map_DewfordTown[]         = _("Dewford Town");
static const u8 sDebugText_Map_SlateportCity[]       = _("Slateport City");
static const u8 sDebugText_Map_MauvilleCity[]        = _("Mauville City");
static const u8 sDebugText_Map_VerdanturfTown[]      = _("Verdanturf Town");
static const u8 sDebugText_Map_FallarborTown[]       = _("Fallarbor Town");
static const u8 sDebugText_Map_LavaridgeTown[]       = _("Lavaridge Town");
static const u8 sDebugText_Map_FortreeCity[]         = _("Fortree City");
static const u8 sDebugText_Map_LilycoveCity[]        = _("Lilycove City");
static const u8 sDebugText_Map_MossdeepCity[]        = _("Mossdeep City");
static const u8 sDebugText_Map_PacifidlogTown[]      = _("Pacifidlog Town");
static const u8 sDebugText_Map_SootopolisCity[]      = _("Sootopolis City");
static const u8 sDebugText_Map_EverGrandeCityOuter[] = _("Ever Grande City (Outer)");
static const u8 sDebugText_Map_EverGrandeCityInner[] = _("Ever Grande City (Inner)");
static const u8 sDebugText_Map_PkmnLeagueSidney[]    = _("Pokémon League (Sidney)");
static const u8 sDebugText_Map_PkmnLeaguePhoebe[]    = _("Pokémon League (Phoebe)");
static const u8 sDebugText_Map_PkmnLeagueGlacia[]    = _("Pokémon League (Glacia)");
static const u8 sDebugText_Map_PkmnLeagueDrake[]     = _("Pokémon League (Drake)");
static const u8 sDebugText_Map_PkmnLeagueChampion[]  = _("Pokémon League (Champion)");
static const u8 sDebugText_Map_BattleFactory[]       = _("Battle Factory");
static const u8 sDebugText_Map_BattleArena[]         = _("Battle Arena");
static const u8 sDebugText_Map_BattleDome[]          = _("Battle Dome");
static const u8 sDebugText_Map_BattlePike[]          = _("Battle Pike");
static const u8 sDebugText_Map_BattlePalace[]        = _("Battle Palace");
static const u8 sDebugText_Map_BattlePyramid[]       = _("Battle Pyramid");
static const u8 sDebugText_Map_BattleTower[]         = _("Battle Tower");
// Badges
static const u8 sDebugText_Flags_AllBadges[]    = _("All badges ON/OFF");
static const u8 sDebugText_Flags_FirstBadge[]   = _("First (Rustboro City)");
static const u8 sDebugText_Flags_SecondBadge[]  = _("Second (Dewford Town)");
static const u8 sDebugText_Flags_ThirdBadge[]   = _("Third (Mauville City)");
static const u8 sDebugText_Flags_FourthBadge[]  = _("Fourth (Lavaridge Town)");
static const u8 sDebugText_Flags_FifthBadge[]   = _("Fifth (Petalburg City)");
static const u8 sDebugText_Flags_SixthBadge[]   = _("Sixth (Fortree City)");
static const u8 sDebugText_Flags_SeventhBadge[] = _("Seventh (Mossdeep City)");
static const u8 sDebugText_Flags_EighthBadge[]  = _("Eighth (Sootopolis City)");

static const u8 digitInidicator_1[] =        _("{LEFT_ARROW}+1{RIGHT_ARROW}        ");
static const u8 digitInidicator_10[] =       _("{LEFT_ARROW}+10{RIGHT_ARROW}       ");
static const u8 digitInidicator_100[] =      _("{LEFT_ARROW}+100{RIGHT_ARROW}      ");
static const u8 digitInidicator_1000[] =     _("{LEFT_ARROW}+1000{RIGHT_ARROW}     ");
static const u8 digitInidicator_10000[] =    _("{LEFT_ARROW}+10000{RIGHT_ARROW}    ");
static const u8 digitInidicator_100000[] =   _("{LEFT_ARROW}+100000{RIGHT_ARROW}   ");
static const u8 digitInidicator_1000000[] =  _("{LEFT_ARROW}+1000000{RIGHT_ARROW}  ");
static const u8 digitInidicator_10000000[] = _("{LEFT_ARROW}+10000000{RIGHT_ARROW} ");
const u8 * const gText_DigitIndicator[] =
{
    digitInidicator_1,
    digitInidicator_10,
    digitInidicator_100,
    digitInidicator_1000,
    digitInidicator_10000,
    digitInidicator_100000,
    digitInidicator_1000000,
    digitInidicator_10000000
};
static const s32 sPowersOfTen[] =
{
             1,
            10,
           100,
          1000,
         10000,
        100000,
       1000000,
      10000000,
     100000000,
    1000000000,
};

// *******************************
// List Menu Items
static const struct ListMenuItem sDebugMenu_Items_Main[] =
{
    [DEBUG_MENU_ITEM_UTILITIES] = {sDebugText_Utilities, DEBUG_MENU_ITEM_UTILITIES},
    [DEBUG_MENU_ITEM_FLAGS]     = {sDebugText_Flags,     DEBUG_MENU_ITEM_FLAGS},
    [DEBUG_MENU_ITEM_VARS]      = {sDebugText_Vars,      DEBUG_MENU_ITEM_VARS},
    [DEBUG_MENU_ITEM_GIVE]      = {sDebugText_Give,      DEBUG_MENU_ITEM_GIVE},
    [DEBUG_MENU_ITEM_SOUND]     = {sDebugText_Sound,     DEBUG_MENU_ITEM_SOUND},
    [DEBUG_MENU_ITEM_CANCEL]    = {sDebugText_Cancel,    DEBUG_MENU_ITEM_CANCEL}
};

static const struct ListMenuItem sDebugMenu_Items_Utilities[] =
{
    [DEBUG_UTIL_MENU_ITEM_HEAL_PARTY]             = {sDebugText_Util_HealParty,            DEBUG_UTIL_MENU_ITEM_HEAL_PARTY},
    [DEBUG_UTIL_MENU_ITEM_FLY]                    = {sDebugText_Util_Fly,                  DEBUG_UTIL_MENU_ITEM_FLY},
    [DEBUG_UTIL_MENU_ITEM_WARP]                   = {sDebugText_Util_WarpToMap,            DEBUG_UTIL_MENU_ITEM_WARP},
    [DEBUG_UTIL_MENU_ITEM_PRESETWARP]             = {sDebugText_Util_PresetWarp,           DEBUG_UTIL_MENU_ITEM_PRESETWARP},
    [DEBUG_UTIL_MENU_ITEM_SAVESPACE]              = {sDebugText_Util_SaveSpace,            DEBUG_UTIL_MENU_ITEM_SAVESPACE},
    [DEBUG_UTIL_MENU_ITEM_CHECKWALLCLOCK]         = {sDebugText_Util_CheckWallClock,       DEBUG_UTIL_MENU_ITEM_CHECKWALLCLOCK},
    [DEBUG_UTIL_MENU_ITEM_SETWALLCLOCK]           = {sDebugText_Util_SetWallClock,         DEBUG_UTIL_MENU_ITEM_SETWALLCLOCK},
    [DEBUG_UTIL_MENU_ITEM_CHECKWEEKDAY]           = {sDebugText_Util_CheckWeekDay,         DEBUG_UTIL_MENU_ITEM_CHECKWEEKDAY},
    [DEBUG_UTIL_MENU_ITEM_WATCHCREDITS]           = {sDebugText_Util_WatchCredits,         DEBUG_UTIL_MENU_ITEM_WATCHCREDITS},
    [DEBUG_UTIL_MENU_ITEM_TRAINER_NAME]           = {sDebugText_Util_Trainer_Name,         DEBUG_UTIL_MENU_ITEM_TRAINER_NAME},
    [DEBUG_UTIL_MENU_ITEM_RIVAL_NAME]             = {sDebugText_Util_Rival_Name,           DEBUG_UTIL_MENU_ITEM_RIVAL_NAME},
    [DEBUG_UTIL_MENU_ITEM_TRAINER_GENDER]         = {sDebugText_Util_Trainer_Gender,       DEBUG_UTIL_MENU_ITEM_TRAINER_GENDER},
    [DEBUG_UTIL_MENU_ITEM_TRAINER_ID]             = {sDebugText_Util_Trainer_Id,           DEBUG_UTIL_MENU_ITEM_TRAINER_ID},
    [DEBUG_UTIL_MENU_ITEM_CHECKSTATS]             = {sDebugText_Util_CheckStats,           DEBUG_UTIL_MENU_ITEM_CHECKSTATS},
    [DEBUG_UTIL_MENU_ITEM_FORCEEGGHATCH]          = {sDebugText_Util_ForceEggHatch,        DEBUG_UTIL_MENU_ITEM_FORCEEGGHATCH},
    [DEBUG_UTIL_MENU_ITEM_OPEN_PC]                = {sDebugText_Util_OpenPC,               DEBUG_UTIL_MENU_ITEM_OPEN_PC},
    [DEBUG_UTIL_MENU_ITEM_DO_WONDER_TRADE]        = {sDebugText_Util_DoWonderTrade,        DEBUG_UTIL_MENU_ITEM_DO_WONDER_TRADE},
    [DEBUG_UTIL_MENU_ITEM_CHANGE_COSTUME]         = {sDebugText_Util_ChangeCostume,        DEBUG_UTIL_MENU_ITEM_CHANGE_COSTUME},
    [DEBUG_UTIL_MENU_ITEM_CATCH_CHAIN_STATUS]     = {sDebugText_Util_CatchChainStatus,     DEBUG_UTIL_MENU_ITEM_CATCH_CHAIN_STATUS},
    [DEBUG_UTIL_MENU_ITEM_CREATE_DAYCARE_EGG]     = {sDebugText_Util_CreateDaycareEgg,     DEBUG_UTIL_MENU_ITEM_CREATE_DAYCARE_EGG},
    [DEBUG_UTIL_MENU_ITEM_CLEAR_BAG]              = {sDebugText_Util_ClearBag,             DEBUG_UTIL_MENU_ITEM_CLEAR_BAG},
    [DEBUG_UTIL_MENU_ITEM_DELETE_POKEMON]         = {sDebugText_Util_DeletePokemon,        DEBUG_UTIL_MENU_ITEM_DELETE_POKEMON},
    [DEBUG_UTIL_MENU_ITEM_CLEAR_PARTY]            = {sDebugText_Util_ClearParty,           DEBUG_UTIL_MENU_ITEM_CLEAR_PARTY},
    [DEBUG_UTIL_MENU_ITEM_GIVE_STATUS_AILMENT]    = {sDebugText_Util_GiveStatusAilment,    DEBUG_UTIL_MENU_ITEM_GIVE_STATUS_AILMENT},
    [DEBUG_UTIL_MENU_ITEM_TEST_RAYQUAZA_CUTSCENE] = {sDebugText_Util_TestRayquazaCutscene, DEBUG_UTIL_MENU_ITEM_TEST_RAYQUAZA_CUTSCENE},
};
static const struct ListMenuItem sDebugMenu_Items_Flags[] =
{
    [DEBUG_FLAG_MENU_ITEM_FLAGS]                      = {sDebugText_Flags_Flags,                   DEBUG_FLAG_MENU_ITEM_FLAGS},
    [DEBUG_FLAG_MENU_ITEM_BADGES]                     = {sDebugText_Flags_Badges,                  DEBUG_FLAG_MENU_ITEM_BADGES},
    [DEBUG_FLAG_MENU_ITEM_POKEDEXFLAGS]               = {sDebugText_Flags_SetPokedexFlags,         DEBUG_FLAG_MENU_ITEM_POKEDEXFLAGS},
    [DEBUG_FLAG_MENU_ITEM_POKEDEX_ONOFF]              = {sDebugText_Flags_DexOnOff,                DEBUG_FLAG_MENU_ITEM_POKEDEX_ONOFF},
    [DEBUG_FLAG_MENU_ITEM_NATDEX_ONOFF]               = {sDebugText_Flags_NationalDexOnOff,        DEBUG_FLAG_MENU_ITEM_NATDEX_ONOFF},
    [DEBUG_FLAG_MENU_ITEM_POKEMON_ONOFF]              = {sDebugText_Flags_PokemonOnOff,            DEBUG_FLAG_MENU_ITEM_POKEMON_ONOFF},
    [DEBUG_FLAG_MENU_ITEM_POKENAV_ONOFF]              = {sDebugText_Flags_PokeNavOnOff,            DEBUG_FLAG_MENU_ITEM_POKENAV_ONOFF},
    [DEBUG_FLAG_MENU_ITEM_FLYANYWHERE]                = {sDebugText_Flags_ToggleFlyFlags,          DEBUG_FLAG_MENU_ITEM_FLYANYWHERE},
    [DEBUG_FLAG_MENU_ITEM_COLLISION_ONOFF]            = {sDebugText_Flags_CollisionOnOff,          DEBUG_FLAG_MENU_ITEM_COLLISION_ONOFF},
    [DEBUG_FLAG_MENU_ITEM_ENCOUNTER_ONOFF]            = {sDebugText_Flags_EncounterOnOff,          DEBUG_FLAG_MENU_ITEM_ENCOUNTER_ONOFF},
    [DEBUG_FLAG_MENU_ITEM_TRAINER_SEE_ONOFF]          = {sDebugText_Flags_TrainerSeeOnOff,         DEBUG_FLAG_MENU_ITEM_TRAINER_SEE_ONOFF},
    [DEBUG_FLAG_MENU_ITEM_BAG_USE_ONOFF]              = {sDebugText_Flags_BagUseOnOff,             DEBUG_FLAG_MENU_ITEM_BAG_USE_ONOFF},
    [DEBUG_FLAG_MENU_ITEM_CATCHING_ONOFF]             = {sDebugText_Flags_CatchingOnOff,           DEBUG_FLAG_MENU_ITEM_CATCHING_ONOFF},
    [DEBUG_FLAG_MENU_ITEM_SHINIES_ONOFF]              = {sDebugText_Flags_ShiniesOnOff,            DEBUG_FLAG_MENU_ITEM_SHINIES_ONOFF},
    [DEBUG_FLAG_MENU_ITEM_ESCAPING_ONOFF]             = {sDebugText_Flags_EscapingOnOff,           DEBUG_FLAG_MENU_ITEM_ESCAPING_ONOFF},
    [DEBUG_FLAG_MENU_ITEM_EXPERIENCE_ONOFF]           = {sDebugText_Flags_ExperienceOnOff,         DEBUG_FLAG_MENU_ITEM_EXPERIENCE_ONOFF},
    [DEBUG_FLAG_MENU_ITEM_SHINY_HUE_SHIFT_ONOFF]      = {sDebugText_Flags_ShinyHueShiftOnOff,      DEBUG_FLAG_MENU_ITEM_SHINY_HUE_SHIFT_ONOFF},
    [DEBUG_FLAG_MENU_ITEM_RUNNING_SHOES_ONOFF]        = {sDebugText_Flags_RunningShoesOnOff,       DEBUG_FLAG_MENU_ITEM_RUNNING_SHOES_ONOFF},
    [DEBUG_FLAG_MENU_ITEM_MAP_TRANSITION_MUSIC_ONOFF] = {sDebugText_Flags_MapTransitionMusicOnOff, DEBUG_FLAG_MENU_ITEM_MAP_TRANSITION_MUSIC_ONOFF},
};
static const struct ListMenuItem sDebugMenu_Items_Vars[] =
{
    [DEBUG_VARS_MENU_ITEM_VARS] = {sDebugText_Vars_Vars, DEBUG_FLAG_MENU_ITEM_FLAGS},
};
static const struct ListMenuItem sDebugMenu_Items_Give[] =
{
    [DEBUG_GIVE_MENU_GIVE_ITEM]              = {sDebugText_Give_GiveItem,            DEBUG_GIVE_MENU_GIVE_ITEM},
    [DEBUG_GIVE_MENU_GIVE_ALL_TMS]           = {sDebugText_Give_AllTMs,              DEBUG_GIVE_MENU_GIVE_ALL_TMS},
    [DEBUG_GIVE_MENU_GIVE_EGG]               = {sDebugText_Give_Egg,                 DEBUG_GIVE_MENU_GIVE_EGG},
    [DEBUG_GIVE_MENU_GIVE_POKEMON_SIMPLE]    = {sDebugText_Give_GivePokemonSimple,   DEBUG_GIVE_MENU_GIVE_POKEMON_SIMPLE},
    [DEBUG_GIVE_MENU_GIVE_POKEMON_COMPLEX]   = {sDebugText_Give_GivePokemonComplex,  DEBUG_GIVE_MENU_GIVE_POKEMON_COMPLEX},
    [DEBUG_GIVE_MENU_GIVE_MAX_MONEY]         = {sDebugText_Give_MaxMoney,            DEBUG_GIVE_MENU_GIVE_MAX_MONEY},
    [DEBUG_GIVE_MENU_GIVE_MAX_COINS]         = {sDebugText_Give_MaxCoins,            DEBUG_GIVE_MENU_GIVE_MAX_COINS},
    [DEBUG_GIVE_MENU_FILL_PC_BOXES]          = {sDebugText_Give_FillPCBoxes,         DEBUG_GIVE_MENU_FILL_PC_BOXES},
    [DEBUG_GIVE_MENU_FILL_PC_ITEM_STORAGE]   = {sDebugText_Give_FillPCItemStorage,   DEBUG_GIVE_MENU_FILL_PC_ITEM_STORAGE},
    [DEBUG_GIVE_MENU_FILL_ITEMS_POCKET]      = {sDebugText_Give_FillItemsPocket,     DEBUG_GIVE_MENU_FILL_ITEMS_POCKET},
    [DEBUG_GIVE_MENU_FILL_POKE_BALLS_POCKET] = {sDebugText_Give_FillPokeBallsPocket, DEBUG_GIVE_MENU_FILL_POKE_BALLS_POCKET},
    [DEBUG_GIVE_MENU_FILL_BERRIES_POCKET]    = {sDebugText_Give_FillBerriesPocket,   DEBUG_GIVE_MENU_FILL_BERRIES_POCKET},
    [DEBUG_GIVE_MENU_FILL_KEY_ITEMS_POCKET]  = {sDebugText_Give_FillKeyItemsPocket,  DEBUG_GIVE_MENU_FILL_KEY_ITEMS_POCKET},
    [DEBUG_GIVE_MENU_GIVE_DEBUG_PACK]        = {sDebugText_Give_GiveDebugPack,       DEBUG_GIVE_MENU_GIVE_DEBUG_PACK},
};
static const struct ListMenuItem sDebugMenu_Items_Sound[] =
{
    [DEBUG_SOUND_MENU_ITEM_SE]  = {sDebugText_Sound_SE,  DEBUG_SOUND_MENU_ITEM_SE},
    [DEBUG_SOUND_MENU_ITEM_MUS] = {sDebugText_Sound_MUS, DEBUG_SOUND_MENU_ITEM_MUS},
};
static const struct ListMenuItem sDebugMenu_Items_Utillities_PresetWarp[] =
{
    [DEBUG_UTILITIES_PRESETWARP_LITTLEROOT]           = {sDebugText_Map_LittlerootTown,      DEBUG_UTILITIES_PRESETWARP_LITTLEROOT},
    [DEBUG_UTILITIES_PRESETWARP_OLDALE]               = {sDebugText_Map_OldaleTown,          DEBUG_UTILITIES_PRESETWARP_OLDALE},
    [DEBUG_UTILITIES_PRESETWARP_PETALBURG]            = {sDebugText_Map_PetalburgCity,       DEBUG_UTILITIES_PRESETWARP_PETALBURG},
    [DEBUG_UTILITIES_PRESETWARP_RUSTBORO]             = {sDebugText_Map_RustboroCity,        DEBUG_UTILITIES_PRESETWARP_RUSTBORO},
    [DEBUG_UTILITIES_PRESETWARP_DEWFORD]              = {sDebugText_Map_DewfordTown,         DEBUG_UTILITIES_PRESETWARP_DEWFORD},
    [DEBUG_UTILITIES_PRESETWARP_SLATEPORT]            = {sDebugText_Map_SlateportCity,       DEBUG_UTILITIES_PRESETWARP_SLATEPORT},
    [DEBUG_UTILITIES_PRESETWARP_MAUVILLE]             = {sDebugText_Map_MauvilleCity,        DEBUG_UTILITIES_PRESETWARP_MAUVILLE},
    [DEBUG_UTILITIES_PRESETWARP_VERDANTURF]           = {sDebugText_Map_VerdanturfTown,      DEBUG_UTILITIES_PRESETWARP_VERDANTURF},
    [DEBUG_UTILITIES_PRESETWARP_FALLARBOR]            = {sDebugText_Map_FallarborTown,       DEBUG_UTILITIES_PRESETWARP_FALLARBOR},
    [DEBUG_UTILITIES_PRESETWARP_LAVARIDGE]            = {sDebugText_Map_LavaridgeTown,       DEBUG_UTILITIES_PRESETWARP_LAVARIDGE},
    [DEBUG_UTILITIES_PRESETWARP_FORTREE]              = {sDebugText_Map_FortreeCity,         DEBUG_UTILITIES_PRESETWARP_FORTREE},
    [DEBUG_UTILITIES_PRESETWARP_LILYCOVE]             = {sDebugText_Map_LilycoveCity,        DEBUG_UTILITIES_PRESETWARP_LILYCOVE},
    [DEBUG_UTILITIES_PRESETWARP_MOSSDEEP]             = {sDebugText_Map_MossdeepCity,        DEBUG_UTILITIES_PRESETWARP_MOSSDEEP},
    [DEBUG_UTILITIES_PRESETWARP_PACIFIDLOG]           = {sDebugText_Map_PacifidlogTown,      DEBUG_UTILITIES_PRESETWARP_PACIFIDLOG},
    [DEBUG_UTILITIES_PRESETWARP_SOOTOPOLIS]           = {sDebugText_Map_SootopolisCity,      DEBUG_UTILITIES_PRESETWARP_SOOTOPOLIS},
    [DEBUG_UTILITIES_PRESETWARP_EVERGRANDE_OUTER]     = {sDebugText_Map_EverGrandeCityOuter, DEBUG_UTILITIES_PRESETWARP_EVERGRANDE_OUTER},
    [DEBUG_UTILITIES_PRESETWARP_EVERGRANDE_INNER]     = {sDebugText_Map_EverGrandeCityInner, DEBUG_UTILITIES_PRESETWARP_EVERGRANDE_INNER},
    [DEBUG_UTILITIES_PRESETWARP_PKMN_LEAGUE_SIDNEY]   = {sDebugText_Map_PkmnLeagueSidney,    DEBUG_UTILITIES_PRESETWARP_PKMN_LEAGUE_SIDNEY},
    [DEBUG_UTILITIES_PRESETWARP_PKMN_LEAGUE_PHOEBE]   = {sDebugText_Map_PkmnLeaguePhoebe,    DEBUG_UTILITIES_PRESETWARP_PKMN_LEAGUE_PHOEBE},
    [DEBUG_UTILITIES_PRESETWARP_PKMN_LEAGUE_GLACIA]   = {sDebugText_Map_PkmnLeagueGlacia,    DEBUG_UTILITIES_PRESETWARP_PKMN_LEAGUE_GLACIA},
    [DEBUG_UTILITIES_PRESETWARP_PKMN_LEAGUE_DRAKE]    = {sDebugText_Map_PkmnLeagueDrake,     DEBUG_UTILITIES_PRESETWARP_PKMN_LEAGUE_DRAKE},
    [DEBUG_UTILITIES_PRESETWARP_PKMN_LEAGUE_CHAMPION] = {sDebugText_Map_PkmnLeagueChampion,  DEBUG_UTILITIES_PRESETWARP_PKMN_LEAGUE_CHAMPION},
    [DEBUG_UTILITIES_PRESETWARP_BATTLE_FACTORY]       = {sDebugText_Map_BattleFactory,       DEBUG_UTILITIES_PRESETWARP_BATTLE_FACTORY},
    [DEBUG_UTILITIES_PRESETWARP_BATTLE_ARENA]         = {sDebugText_Map_BattleArena,         DEBUG_UTILITIES_PRESETWARP_BATTLE_ARENA},
    [DEBUG_UTILITIES_PRESETWARP_BATTLE_DOME]          = {sDebugText_Map_BattleDome,          DEBUG_UTILITIES_PRESETWARP_BATTLE_DOME},
    [DEBUG_UTILITIES_PRESETWARP_BATTLE_PIKE]          = {sDebugText_Map_BattlePike,          DEBUG_UTILITIES_PRESETWARP_BATTLE_PIKE},
    [DEBUG_UTILITIES_PRESETWARP_BATTLE_PALACE]        = {sDebugText_Map_BattlePalace,        DEBUG_UTILITIES_PRESETWARP_BATTLE_PALACE},
    [DEBUG_UTILITIES_PRESETWARP_BATTLE_PYRAMID]       = {sDebugText_Map_BattlePyramid,       DEBUG_UTILITIES_PRESETWARP_BATTLE_PYRAMID},
    [DEBUG_UTILITIES_PRESETWARP_BATTLE_TOWER]         = {sDebugText_Map_BattleTower,         DEBUG_UTILITIES_PRESETWARP_BATTLE_TOWER},
};
static const struct ListMenuItem sDebugMenu_Items_Flags_Badges[] =
{
    [DEBUG_UTILITIES_BADGES_ALLBADGES] = {sDebugText_Flags_AllBadges,    DEBUG_UTILITIES_BADGES_ALLBADGES},
    [DEBUG_UTILITIES_BADGES_FIRST]     = {sDebugText_Flags_FirstBadge,   DEBUG_UTILITIES_BADGES_FIRST},
    [DEBUG_UTILITIES_BADGES_SECOND]    = {sDebugText_Flags_SecondBadge,  DEBUG_UTILITIES_BADGES_SECOND},
    [DEBUG_UTILITIES_BADGES_THIRD]     = {sDebugText_Flags_ThirdBadge,   DEBUG_UTILITIES_BADGES_THIRD},
    [DEBUG_UTILITIES_BADGES_FOURTH]    = {sDebugText_Flags_FourthBadge,  DEBUG_UTILITIES_BADGES_FOURTH},
    [DEBUG_UTILITIES_BADGES_FIFTH]     = {sDebugText_Flags_FifthBadge,   DEBUG_UTILITIES_BADGES_FIFTH},
    [DEBUG_UTILITIES_BADGES_SIXTH]     = {sDebugText_Flags_SixthBadge,   DEBUG_UTILITIES_BADGES_SIXTH},
    [DEBUG_UTILITIES_BADGES_SEVENTH]   = {sDebugText_Flags_SeventhBadge, DEBUG_UTILITIES_BADGES_SEVENTH},
    [DEBUG_UTILITIES_BADGES_EIGHTH]    = {sDebugText_Flags_EighthBadge,  DEBUG_UTILITIES_BADGES_EIGHTH},
};

// *******************************
// Menu Actions
static void (*const sDebugMenu_Actions_Main[])(u8) =
{
    [DEBUG_MENU_ITEM_UTILITIES] = DebugAction_OpenUtilitiesMenu,
    [DEBUG_MENU_ITEM_FLAGS]     = DebugAction_OpenFlagsMenu,
    [DEBUG_MENU_ITEM_VARS]      = DebugAction_OpenVariablesMenu,
    [DEBUG_MENU_ITEM_GIVE]      = DebugAction_OpenGiveMenu,
    [DEBUG_MENU_ITEM_SOUND]     = DebugAction_OpenSoundMenu,
    [DEBUG_MENU_ITEM_CANCEL]    = DebugAction_Cancel
};
static void (*const sDebugMenu_Actions_Utilities[])(u8) =
{
    [DEBUG_UTIL_MENU_ITEM_HEAL_PARTY]             = DebugAction_Util_HealParty,
    [DEBUG_UTIL_MENU_ITEM_FLY]                    = DebugAction_Util_Fly,
    [DEBUG_UTIL_MENU_ITEM_WARP]                   = DebugAction_Util_Warp_Warp,
    [DEBUG_UTIL_MENU_ITEM_PRESETWARP]             = DebugAction_Util_Warp_PresetWarp,
    [DEBUG_UTIL_MENU_ITEM_SAVESPACE]              = DebugAction_Util_CheckSaveSpace,
    [DEBUG_UTIL_MENU_ITEM_CHECKWALLCLOCK]         = DebugAction_Util_CheckWallClock,
    [DEBUG_UTIL_MENU_ITEM_SETWALLCLOCK]           = DebugAction_Util_SetWallClock,
    [DEBUG_UTIL_MENU_ITEM_CHECKWEEKDAY]           = DebugAction_Util_CheckWeekDay,
    [DEBUG_UTIL_MENU_ITEM_WATCHCREDITS]           = DebugAction_Util_WatchCredits,
    [DEBUG_UTIL_MENU_ITEM_TRAINER_NAME]           = DebugAction_Util_Trainer_Name,
    [DEBUG_UTIL_MENU_ITEM_RIVAL_NAME]             = DebugAction_Util_Rival_Name,
    [DEBUG_UTIL_MENU_ITEM_TRAINER_GENDER]         = DebugAction_Util_Trainer_Gender,
    [DEBUG_UTIL_MENU_ITEM_TRAINER_ID]             = DebugAction_Util_Trainer_Id,
    [DEBUG_UTIL_MENU_ITEM_CHECKSTATS]             = DebugAction_Util_CheckStats,
    [DEBUG_UTIL_MENU_ITEM_FORCEEGGHATCH]          = DebugAction_Util_ForceEggHatch,
    [DEBUG_UTIL_MENU_ITEM_OPEN_PC]                = DebugAction_Util_OpenPC,
    [DEBUG_UTIL_MENU_ITEM_DO_WONDER_TRADE]        = DebugAction_Util_DoWonderTrade,
    [DEBUG_UTIL_MENU_ITEM_CHANGE_COSTUME]         = DebugAction_Util_ChangeCostume,
    [DEBUG_UTIL_MENU_ITEM_CATCH_CHAIN_STATUS]     = DebugAction_Util_CatchChainStatus,
    [DEBUG_UTIL_MENU_ITEM_CREATE_DAYCARE_EGG]     = DebugAction_Util_CreateDaycareEgg,
    [DEBUG_UTIL_MENU_ITEM_CLEAR_BAG]              = DebugAction_Util_ClearBag,
    [DEBUG_UTIL_MENU_ITEM_DELETE_POKEMON]         = DebugAction_Util_DeletePokemon,
    [DEBUG_UTIL_MENU_ITEM_CLEAR_PARTY]            = DebugAction_Util_ClearParty,
    [DEBUG_UTIL_MENU_ITEM_GIVE_STATUS_AILMENT]    = DebugAction_Util_GiveStatusAilment,
    [DEBUG_UTIL_MENU_ITEM_TEST_RAYQUAZA_CUTSCENE] = DebugAction_Util_TestRayquazaCutscene,
};
static void (*const sDebugMenu_Actions_Flags[])(u8) =
{
    [DEBUG_FLAG_MENU_ITEM_FLAGS]                      = DebugAction_Flags_Flags,
    [DEBUG_FLAG_MENU_ITEM_BADGES]                     = DebugAction_Flags_Badges,
    [DEBUG_FLAG_MENU_ITEM_POKEDEXFLAGS]               = DebugAction_Flags_SetPokedexFlags,
    [DEBUG_FLAG_MENU_ITEM_POKEDEX_ONOFF]              = DebugAction_Flags_DexOnOff,
    [DEBUG_FLAG_MENU_ITEM_NATDEX_ONOFF]               = DebugAction_Flags_NatDexOnOff,
    [DEBUG_FLAG_MENU_ITEM_POKEMON_ONOFF]              = DebugAction_Flags_PokemonOnOff,
    [DEBUG_FLAG_MENU_ITEM_POKENAV_ONOFF]              = DebugAction_Flags_PokeNavOnOff,
    [DEBUG_FLAG_MENU_ITEM_FLYANYWHERE]                = DebugAction_Flags_ToggleFlyFlags,
    [DEBUG_FLAG_MENU_ITEM_COLLISION_ONOFF]            = DebugAction_Flags_CollisionOnOff,
    [DEBUG_FLAG_MENU_ITEM_ENCOUNTER_ONOFF]            = DebugAction_Flags_EncounterOnOff,
    [DEBUG_FLAG_MENU_ITEM_TRAINER_SEE_ONOFF]          = DebugAction_Flags_TrainerSeeOnOff,
    [DEBUG_FLAG_MENU_ITEM_BAG_USE_ONOFF]              = DebugAction_Flags_BagUseOnOff,
    [DEBUG_FLAG_MENU_ITEM_CATCHING_ONOFF]             = DebugAction_Flags_CatchingOnOff,
    [DEBUG_FLAG_MENU_ITEM_SHINIES_ONOFF]              = DebugAction_Flags_ShiniesOnOff,
    [DEBUG_FLAG_MENU_ITEM_ESCAPING_ONOFF]             = DebugAction_Flags_EscapingOnOff,
    [DEBUG_FLAG_MENU_ITEM_EXPERIENCE_ONOFF]           = DebugAction_Flags_ExperienceOnOff,
    [DEBUG_FLAG_MENU_ITEM_SHINY_HUE_SHIFT_ONOFF]      = DebugAction_Flags_ShinyHueShiftOnOff,
    [DEBUG_FLAG_MENU_ITEM_RUNNING_SHOES_ONOFF]        = DebugAction_Flags_RunningShoesOnOff,
    [DEBUG_FLAG_MENU_ITEM_MAP_TRANSITION_MUSIC_ONOFF] = DebugAction_Flags_MapTransitionMusicOnOff,
};
static void (*const sDebugMenu_Actions_Vars[])(u8) =
{
    [DEBUG_VARS_MENU_ITEM_VARS]     = DebugAction_Vars_Vars,
};
static void (*const sDebugMenu_Actions_Give[])(u8) =
{
    [DEBUG_GIVE_MENU_GIVE_ITEM]              = DebugAction_Give_Item,
    [DEBUG_GIVE_MENU_GIVE_ALL_TMS]           = DebugAction_Give_AllTMs,
    [DEBUG_GIVE_MENU_GIVE_EGG]               = DebugAction_Give_Egg,
    [DEBUG_GIVE_MENU_GIVE_POKEMON_SIMPLE]    = DebugAction_Give_PokemonSimple,
    [DEBUG_GIVE_MENU_GIVE_POKEMON_COMPLEX]   = DebugAction_Give_PokemonComplex,
    [DEBUG_GIVE_MENU_GIVE_MAX_MONEY]         = DebugAction_Give_MaxMoney,
    [DEBUG_GIVE_MENU_GIVE_MAX_COINS]         = DebugAction_Give_MaxCoins,
    [DEBUG_GIVE_MENU_FILL_PC_BOXES]          = DebugAction_Give_FillPCBoxes,
    [DEBUG_GIVE_MENU_FILL_PC_ITEM_STORAGE]   = DebugAction_Give_FillPCItemStorage,
    [DEBUG_GIVE_MENU_FILL_ITEMS_POCKET]      = DebugAction_Give_FillItemsPocket,
    [DEBUG_GIVE_MENU_FILL_POKE_BALLS_POCKET] = DebugAction_Give_FillPokeBallsPocket,
    [DEBUG_GIVE_MENU_FILL_BERRIES_POCKET]    = DebugAction_Give_FillBerriesPocket,
    [DEBUG_GIVE_MENU_FILL_KEY_ITEMS_POCKET]  = DebugAction_Give_FillKeyItemsPocket,
    [DEBUG_GIVE_MENU_GIVE_DEBUG_PACK]        = DebugAction_Give_DebugPack,
};
static void (*const sDebugMenu_Actions_Sound[])(u8) =
{
    [DEBUG_SOUND_MENU_ITEM_SE]  = DebugAction_Sound_SE,
    [DEBUG_SOUND_MENU_ITEM_MUS] = DebugAction_Sound_MUS,
};
static void (*const sDebugMenu_Actions_PresetWarp[])(u8) =
{
    [DEBUG_UTILITIES_PRESETWARP_LITTLEROOT]           = DebugAction_PresetWarp_LittlerootTown,
    [DEBUG_UTILITIES_PRESETWARP_OLDALE]               = DebugAction_PresetWarp_OldaleTown,
    [DEBUG_UTILITIES_PRESETWARP_PETALBURG]            = DebugAction_PresetWarp_PetalburgCity,
    [DEBUG_UTILITIES_PRESETWARP_RUSTBORO]             = DebugAction_PresetWarp_RustboroCity,
    [DEBUG_UTILITIES_PRESETWARP_DEWFORD]              = DebugAction_PresetWarp_DewfordTown,
    [DEBUG_UTILITIES_PRESETWARP_SLATEPORT]            = DebugAction_PresetWarp_SlateportCity,
    [DEBUG_UTILITIES_PRESETWARP_MAUVILLE]             = DebugAction_PresetWarp_MauvilleCity,
    [DEBUG_UTILITIES_PRESETWARP_VERDANTURF]           = DebugAction_PresetWarp_VerdanturfTown,
    [DEBUG_UTILITIES_PRESETWARP_FALLARBOR]            = DebugAction_PresetWarp_FallarborTown,
    [DEBUG_UTILITIES_PRESETWARP_LAVARIDGE]            = DebugAction_PresetWarp_LavaridgeTown,
    [DEBUG_UTILITIES_PRESETWARP_FORTREE]              = DebugAction_PresetWarp_FortreeCity,
    [DEBUG_UTILITIES_PRESETWARP_LILYCOVE]             = DebugAction_PresetWarp_LilycoveCity,
    [DEBUG_UTILITIES_PRESETWARP_MOSSDEEP]             = DebugAction_PresetWarp_MossdeepCity,
    [DEBUG_UTILITIES_PRESETWARP_PACIFIDLOG]           = DebugAction_PresetWarp_PacifidlogTown,
    [DEBUG_UTILITIES_PRESETWARP_SOOTOPOLIS]           = DebugAction_PresetWarp_SootopolisCity,
    [DEBUG_UTILITIES_PRESETWARP_EVERGRANDE_OUTER]     = DebugAction_PresetWarp_EverGrandeCityOuter,
    [DEBUG_UTILITIES_PRESETWARP_EVERGRANDE_INNER]     = DebugAction_PresetWarp_EverGrandeCityInner,
    [DEBUG_UTILITIES_PRESETWARP_PKMN_LEAGUE_SIDNEY]   = DebugAction_PresetWarp_PkmnLeagueSidney,
    [DEBUG_UTILITIES_PRESETWARP_PKMN_LEAGUE_PHOEBE]   = DebugAction_PresetWarp_PkmnLeaguePhoebe,
    [DEBUG_UTILITIES_PRESETWARP_PKMN_LEAGUE_GLACIA]   = DebugAction_PresetWarp_PkmnLeagueGlacia,
    [DEBUG_UTILITIES_PRESETWARP_PKMN_LEAGUE_DRAKE]    = DebugAction_PresetWarp_PkmnLeagueDrake,
    [DEBUG_UTILITIES_PRESETWARP_PKMN_LEAGUE_CHAMPION] = DebugAction_PresetWarp_PkmnLeagueChampion,
    [DEBUG_UTILITIES_PRESETWARP_BATTLE_FACTORY]       = DebugAction_PresetWarp_BattleFactory,
    [DEBUG_UTILITIES_PRESETWARP_BATTLE_ARENA]         = DebugAction_PresetWarp_BattleArena,
    [DEBUG_UTILITIES_PRESETWARP_BATTLE_DOME]          = DebugAction_PresetWarp_BattleDome,
    [DEBUG_UTILITIES_PRESETWARP_BATTLE_PIKE]          = DebugAction_PresetWarp_BattlePike,
    [DEBUG_UTILITIES_PRESETWARP_BATTLE_PALACE]        = DebugAction_PresetWarp_BattlePalace,
    [DEBUG_UTILITIES_PRESETWARP_BATTLE_PYRAMID]       = DebugAction_PresetWarp_BattlePyramid,
    [DEBUG_UTILITIES_PRESETWARP_BATTLE_TOWER]         = DebugAction_PresetWarp_BattleTower,
};
static void (*const sDebugMenu_Actions_Badges[])(u8) =
{
    [DEBUG_UTILITIES_BADGES_ALLBADGES] = DebugAction_Badges_AllBadges,
    [DEBUG_UTILITIES_BADGES_FIRST]     = DebugAction_Badges_First,
    [DEBUG_UTILITIES_BADGES_SECOND]    = DebugAction_Badges_Second,
    [DEBUG_UTILITIES_BADGES_THIRD]     = DebugAction_Badges_Third,
    [DEBUG_UTILITIES_BADGES_FOURTH]    = DebugAction_Badges_Fourth,
    [DEBUG_UTILITIES_BADGES_FIFTH]     = DebugAction_Badges_Fifth,
    [DEBUG_UTILITIES_BADGES_SIXTH]     = DebugAction_Badges_Sixth,
    [DEBUG_UTILITIES_BADGES_SEVENTH]   = DebugAction_Badges_Seventh,
    [DEBUG_UTILITIES_BADGES_EIGHTH]    = DebugAction_Badges_Eighth,
};

// *******************************
// Windows
static const struct WindowTemplate sDebugMenuWindowTemplate =
{
    .bg = 0,
    .tilemapLeft = 1,
    .tilemapTop = 1,
    .width = DEBUG_MAIN_MENU_WIDTH,
    .height = 2 * DEBUG_MAIN_MENU_HEIGHT,
    .paletteNum = 15,
    .baseBlock = 1,
};
static const struct WindowTemplate sDebugNumberDisplayWindowTemplate =
{
    .bg = 0,
    .tilemapLeft = DEBUG_MAIN_MENU_WIDTH - 1,
    .tilemapTop = 1,
    .width = DEBUG_NUMBER_DISPLAY_WIDTH,
    .height = 2 * DEBUG_NUMBER_DISPLAY_HEIGHT,
    .paletteNum = 15,
    .baseBlock = 1,
};
static const struct WindowTemplate sDebugNumberDisplayLargeWindowTemplate =
{
    .bg = 0,
    .tilemapLeft = 30 - DEBUG_NUMBER_DISPLAY_SOUND_WIDTH -1,
    .tilemapTop = 1,
    .width = DEBUG_NUMBER_DISPLAY_SOUND_WIDTH,
    .height = DEBUG_NUMBER_DISPLAY_SOUND_HEIGHT,
    .paletteNum = 15,
    .baseBlock = 1,
};
static const struct WindowTemplate sPresetWarpWindowTemplate =
{
    .bg = 0,
    .tilemapLeft = 1,
    .tilemapTop = 1,
    .width = DEBUG_MAIN_MENU_WIDTH + 5,
    .height = 2 * DEBUG_MAIN_MENU_HEIGHT,
    .paletteNum = 15,
    .baseBlock = 1,
};

// *******************************
// List Menu Templates
static const struct ListMenuTemplate sDebugMenu_ListTemplate_Main =
{
    .items = sDebugMenu_Items_Main,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .totalItems = ARRAY_COUNT(sDebugMenu_Items_Main),
};
static const struct ListMenuTemplate sDebugMenu_ListTemplate_Utilities =
{
    .items = sDebugMenu_Items_Utilities,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .totalItems = ARRAY_COUNT(sDebugMenu_Items_Utilities),
};
static const struct ListMenuTemplate sDebugMenu_ListTemplate_Flags =
{
    .items = sDebugMenu_Items_Flags,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .totalItems = ARRAY_COUNT(sDebugMenu_Items_Flags),
};
static const struct ListMenuTemplate sDebugMenu_ListTemplate_Vars =
{
    .items = sDebugMenu_Items_Vars,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .totalItems = ARRAY_COUNT(sDebugMenu_Items_Vars),
};
static const struct ListMenuTemplate sDebugMenu_ListTemplate_Give =
{
    .items = sDebugMenu_Items_Give,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .totalItems = ARRAY_COUNT(sDebugMenu_Items_Give),
};
static const struct ListMenuTemplate sDebugMenu_ListTemplate_Sound =
{
    .items = sDebugMenu_Items_Sound,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .totalItems = ARRAY_COUNT(sDebugMenu_Items_Sound),
};
static const struct ListMenuTemplate sDebugMenu_ListTemplate_PresetWarp =
{
    .items = sDebugMenu_Items_Utillities_PresetWarp,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .totalItems = ARRAY_COUNT(sDebugMenu_Items_Utillities_PresetWarp),
};
static const struct ListMenuTemplate sDebugMenu_ListTemplate_Badges =
{
    .items = sDebugMenu_Items_Flags_Badges,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .totalItems = ARRAY_COUNT(sDebugMenu_Items_Flags_Badges),
};

// *******************************
// Functions universal
void Debug_ShowMainMenu(void)
{
    Debug_ShowMenu(DebugTask_HandleMenuInput_Main, sDebugMenu_ListTemplate_Main);
}

static void Debug_ShowMenu(void (*HandleInput)(u8), struct ListMenuTemplate LMtemplate)
{
    struct ListMenuTemplate menuTemplate;
    u8 windowId;
    u8 menuTaskId;
    u8 inputTaskId;

    // create window
    HideMapNamePopUpWindow();
    LoadMessageBoxAndBorderGfx();
    windowId = AddWindow(&sDebugMenuWindowTemplate);
    DrawStdWindowFrame(windowId, FALSE);

    // create list menu
    menuTemplate = LMtemplate;
    menuTemplate.maxShowed = DEBUG_MAIN_MENU_HEIGHT;
    menuTemplate.windowId = windowId;
    menuTemplate.header_X = 0;
    menuTemplate.item_X = 8;
    menuTemplate.cursor_X = 0;
    menuTemplate.upText_Y = 1;
    menuTemplate.cursorPal = 2;
    menuTemplate.fillValue = 1;
    menuTemplate.cursorShadowPal = 3;
    menuTemplate.lettersSpacing = 1;
    menuTemplate.itemVerticalPadding = 0;
    menuTemplate.scrollMultiple = LIST_NO_MULTIPLE_SCROLL;
    menuTemplate.fontId = 1;
    menuTemplate.cursorKind = 0;
    menuTaskId = ListMenuInit(&menuTemplate, 0, 0);

    // draw everything
    CopyWindowToVram(windowId, 3);

    // create input handler task
    inputTaskId = CreateTask(HandleInput, 3);
    gTasks[inputTaskId].data[0] = menuTaskId;
    gTasks[inputTaskId].data[1] = windowId;
}
static void Debug_DestroyMenu(u8 taskId)
{
    DestroyListMenuTask(gTasks[taskId].data[0], NULL, NULL);
    ClearStdWindowAndFrame(gTasks[taskId].data[1], TRUE);
    RemoveWindow(gTasks[taskId].data[1]);
    DestroyTask(taskId);
}
static void DebugAction_Cancel(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    ScriptContext_Enable();
}
static void DebugAction_DestroyExtraWindow(u8 taskId)
{
    ClearStdWindowAndFrame(gTasks[taskId].data[1], TRUE);
    RemoveWindow(gTasks[taskId].data[1]);

    ClearStdWindowAndFrame(gTasks[taskId].data[2], TRUE);
    RemoveWindow(gTasks[taskId].data[2]);

    DestroyTask(taskId);
    ScriptContext_Enable();
}
// *******************************
// Handle Inputs
static void DebugTask_HandleMenuInput_Main(u8 taskId)
{
    void (*func)(u8);
    u32 input = ListMenu_ProcessInput(gTasks[taskId].data[0]);

    if (gMain.newKeys & A_BUTTON)
    {
        PlaySE(SE_SELECT);
        if ((func = sDebugMenu_Actions_Main[input]) != NULL)
            func(taskId);
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Debug_DestroyMenu(taskId);
        ScriptContext_Enable();
    }
}
static void DebugTask_HandleMenuInput_Utilities(u8 taskId)
{
    void (*func)(u8);
    u32 input = ListMenu_ProcessInput(gTasks[taskId].data[0]);

    if (gMain.newKeys & A_BUTTON)
    {
        PlaySE(SE_SELECT);
        if ((func = sDebugMenu_Actions_Utilities[input]) != NULL)
            func(taskId);
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Debug_DestroyMenu(taskId);
        Debug_ShowMainMenu();
    }
}
static void DebugTask_HandleMenuInput_Flags(u8 taskId)
{
    void (*func)(u8);
    u32 input = ListMenu_ProcessInput(gTasks[taskId].data[0]);

    if (gMain.newKeys & A_BUTTON)
    {
        PlaySE(SE_SELECT);
        if ((func = sDebugMenu_Actions_Flags[input]) != NULL)
            func(taskId);
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Debug_DestroyMenu(taskId);
        Debug_ShowMainMenu();
    }
}
static void DebugTask_HandleMenuInput_Vars(u8 taskId)
{
    void (*func)(u8);
    u32 input = ListMenu_ProcessInput(gTasks[taskId].data[0]);

    if (gMain.newKeys & A_BUTTON)
    {
        PlaySE(SE_SELECT);
        if ((func = sDebugMenu_Actions_Vars[input]) != NULL)
            func(taskId);
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Debug_DestroyMenu(taskId);
        Debug_ShowMainMenu();
    }
}
static void DebugTask_HandleMenuInput_Give(u8 taskId)
{
    void (*func)(u8);
    u32 input = ListMenu_ProcessInput(gTasks[taskId].data[0]);

    if (gMain.newKeys & A_BUTTON)
    {
        PlaySE(SE_SELECT);
        if ((func = sDebugMenu_Actions_Give[input]) != NULL)
            func(taskId);
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Debug_DestroyMenu(taskId);
        Debug_ShowMainMenu();
    }
}
static void DebugTask_HandleMenuInput_Sound(u8 taskId)
{
    void (*func)(u8);
    u32 input = ListMenu_ProcessInput(gTasks[taskId].data[0]);

    if (gMain.newKeys & A_BUTTON)
    {
        PlaySE(SE_SELECT);
        if ((func = sDebugMenu_Actions_Sound[input]) != NULL)
            func(taskId);
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Debug_DestroyMenu(taskId);
        Debug_ShowMainMenu();
    }
}

// *******************************
// Open sub-menus
static void DebugAction_OpenUtilitiesMenu(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    Debug_ShowMenu(DebugTask_HandleMenuInput_Utilities, sDebugMenu_ListTemplate_Utilities);
}
static void DebugAction_OpenFlagsMenu(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    Debug_ShowMenu(DebugTask_HandleMenuInput_Flags, sDebugMenu_ListTemplate_Flags);
}
static void DebugAction_OpenVariablesMenu(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    Debug_ShowMenu(DebugTask_HandleMenuInput_Vars, sDebugMenu_ListTemplate_Vars);
}
static void DebugAction_OpenGiveMenu(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    Debug_ShowMenu(DebugTask_HandleMenuInput_Give, sDebugMenu_ListTemplate_Give);
}
static void DebugAction_OpenSoundMenu(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    Debug_ShowMenu(DebugTask_HandleMenuInput_Sound, sDebugMenu_ListTemplate_Sound);
}

// *******************************
// Actions Utilities
static void DebugAction_Util_HealParty(u8 taskId)
{
    PlaySE(SE_USE_ITEM);
    HealPlayerParty();
    ScriptContext_Enable();
    Debug_DestroyMenu(taskId);
}
static void DebugAction_Util_Fly(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    SetMainCallback2(CB2_OpenFlyMap);
}

static void DebugAction_Util_Warp_PresetWarp(u8 taskId)
{
    struct ListMenuTemplate menuTemplate;
    u8 windowId;
    u8 menuTaskId;
    u8 inputTaskId;

    // erase existing window
    Debug_DestroyMenu(taskId);

    // create window
    HideMapNamePopUpWindow();
    LoadMessageBoxAndBorderGfx();
    windowId = AddWindow(&sPresetWarpWindowTemplate);
    DrawStdWindowFrame(windowId, FALSE);

    // create list menu
    menuTemplate = sDebugMenu_ListTemplate_PresetWarp;
    menuTemplate.maxShowed = DEBUG_MAIN_MENU_HEIGHT;
    menuTemplate.windowId = windowId;
    menuTemplate.header_X = 0;
    menuTemplate.item_X = 8;
    menuTemplate.cursor_X = 0;
    menuTemplate.upText_Y = 1;
    menuTemplate.cursorPal = 2;
    menuTemplate.fillValue = 1;
    menuTemplate.cursorShadowPal = 3;
    menuTemplate.lettersSpacing = 1;
    menuTemplate.itemVerticalPadding = 0;
    menuTemplate.scrollMultiple = LIST_NO_MULTIPLE_SCROLL;
    menuTemplate.fontId = 1;
    menuTemplate.cursorKind = 0;
    menuTaskId = ListMenuInit(&menuTemplate, 0, 0);

    // draw everything
    CopyWindowToVram(windowId, 3);

    // create input handler task
    inputTaskId = CreateTask(DebugTask_HandleMenuInput_PresetWarp, 3);
    gTasks[inputTaskId].data[0] = menuTaskId;
    gTasks[inputTaskId].data[1] = windowId;
}

static void DebugTask_HandleMenuInput_PresetWarp(u8 taskId)
{
    void (*func)(u8);
    u32 input = ListMenu_ProcessInput(gTasks[taskId].data[0]);

    if (gMain.newKeys & A_BUTTON)
    {
        PlaySE(SE_SELECT);
        if ((func = sDebugMenu_Actions_PresetWarp[input]) != NULL)
            func(taskId);
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Debug_DestroyMenu(taskId);
        Debug_ShowMenu(DebugTask_HandleMenuInput_Utilities, sDebugMenu_ListTemplate_Utilities);
    }
}

static void DebugAction_Util_Warp_Warp(u8 taskId)
{
    u8 windowId;

    ClearStdWindowAndFrame(gTasks[taskId].data[1], TRUE);
    RemoveWindow(gTasks[taskId].data[1]);

    HideMapNamePopUpWindow();
    LoadMessageBoxAndBorderGfx();
    windowId = AddWindow(&sDebugNumberDisplayWindowTemplate);
    DrawStdWindowFrame(windowId, FALSE);

    CopyWindowToVram(windowId, 3);


    ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 2);
    ConvertIntToDecimalStringN(gStringVar2, MAP_GROUPS_COUNT-1, STR_CONV_MODE_LEADING_ZEROS, 2);
    StringExpandPlaceholders(gStringVar1, sDebugText_Util_WarpToMap_SelMax);
    StringCopy(gStringVar3, gText_DigitIndicator[0]);
    StringExpandPlaceholders(gStringVar11, sDebugText_Util_WarpToMap_SelectMapGroup);
    AddTextPrinterParameterized(windowId, 1, gStringVar11, 1, 1, 0, NULL);

    gTasks[taskId].func = DebugAction_Util_Warp_SelectMapGroup;
    gTasks[taskId].data[2] = windowId;
    gTasks[taskId].data[3] = 0;            //Current Flag
    gTasks[taskId].data[4] = 0;            //Digit Selected
    gTasks[taskId].data[5] = 0; //Map Group
    gTasks[taskId].data[6] = 0; //Map
    gTasks[taskId].data[7] = 0; //warp
}
static void DebugAction_Util_Warp_SelectMapGroup(u8 taskId)
{
    if (gMain.newKeys & DPAD_ANY)
    {
        PlaySE(SE_SELECT);
        if (gMain.newKeys & DPAD_UP)
        {
            gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] > MAP_GROUPS_COUNT-1)
                gTasks[taskId].data[3] = MAP_GROUPS_COUNT-1;
        }
        if (gMain.newKeys & DPAD_DOWN)
        {
            gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] < 0)
                gTasks[taskId].data[3] = 0;
        }
        if (gMain.newKeys & DPAD_LEFT)
        {
            if (gTasks[taskId].data[4] > 0)
                gTasks[taskId].data[4] -= 1;
        }
        if (gMain.newKeys & DPAD_RIGHT)
        {
            if (gTasks[taskId].data[4] < 2)
                gTasks[taskId].data[4] += 1;
        }

        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 2);
        ConvertIntToDecimalStringN(gStringVar2, MAP_GROUPS_COUNT-1, STR_CONV_MODE_LEADING_ZEROS, 2);
        StringExpandPlaceholders(gStringVar1, sDebugText_Util_WarpToMap_SelMax);
        StringCopy(gStringVar3, gText_DigitIndicator[gTasks[taskId].data[4]]);
        StringExpandPlaceholders(gStringVar11, sDebugText_Util_WarpToMap_SelectMapGroup);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar11, 1, 1, 0, NULL);
    }

    if (gMain.newKeys & A_BUTTON)
    {
        gTasks[taskId].data[5] = gTasks[taskId].data[3];
        gTasks[taskId].data[3] = 0;
        gTasks[taskId].data[4] = 0;

        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 2);
        ConvertIntToDecimalStringN(gStringVar2, MAP_GROUP_COUNT[gTasks[taskId].data[5]]-1, STR_CONV_MODE_LEADING_ZEROS, 2);
        StringExpandPlaceholders(gStringVar1, sDebugText_Util_WarpToMap_SelMax);
        GetMapName(gStringVar2, Overworld_GetMapHeaderByGroupAndId(gTasks[taskId].data[5], gTasks[taskId].data[3])->regionMapSectionId, 0);
        StringCopy(gStringVar3, gText_DigitIndicator[gTasks[taskId].data[4]]);
        StringExpandPlaceholders(gStringVar11, sDebugText_Util_WarpToMap_SelectMap);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar11, 1, 1, 0, NULL);

        gTasks[taskId].func = DebugAction_Util_Warp_SelectMap;
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Debug_DestroyMenu(taskId);
        Debug_ShowMenu(DebugTask_HandleMenuInput_Utilities, sDebugMenu_ListTemplate_Utilities);
    }
}
static void DebugAction_Util_Warp_SelectMap(u8 taskId)
{
    u8 max_value = MAP_GROUP_COUNT[gTasks[taskId].data[5]]; //maps in the selected map group

    if (gMain.newKeys & DPAD_ANY)
    {
        PlaySE(SE_SELECT);
        if (gMain.newKeys & DPAD_UP)
        {
            gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] > max_value-1)
                gTasks[taskId].data[3] = max_value-1;
        }
        if (gMain.newKeys & DPAD_DOWN)
        {
            gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] < 0)
                gTasks[taskId].data[3] = 0;
        }
        if (gMain.newKeys & DPAD_LEFT)
        {
            if (gTasks[taskId].data[4] > 0)
                gTasks[taskId].data[4] -= 1;
        }
        if (gMain.newKeys & DPAD_RIGHT)
        {
            if (gTasks[taskId].data[4] < 2)
                gTasks[taskId].data[4] += 1;
        }

        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 2);
        ConvertIntToDecimalStringN(gStringVar2, MAP_GROUP_COUNT[gTasks[taskId].data[5]]-1, STR_CONV_MODE_LEADING_ZEROS, 2);
        StringExpandPlaceholders(gStringVar1, sDebugText_Util_WarpToMap_SelMax);
        GetMapName(gStringVar2, Overworld_GetMapHeaderByGroupAndId(gTasks[taskId].data[5], gTasks[taskId].data[3])->regionMapSectionId, 0);
        StringCopy(gStringVar3, gText_DigitIndicator[gTasks[taskId].data[4]]);
        StringExpandPlaceholders(gStringVar11, sDebugText_Util_WarpToMap_SelectMap);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar11, 1, 1, 0, NULL);
    }

    if (gMain.newKeys & A_BUTTON)
    {
        gTasks[taskId].data[6] = gTasks[taskId].data[3];
        gTasks[taskId].data[3] = 0;
        gTasks[taskId].data[4] = 0;

        StringCopy(gStringVar3, gText_DigitIndicator[gTasks[taskId].data[4]]);
        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 2);
        StringExpandPlaceholders(gStringVar11, sDebugText_Util_WarpToMap_SelectWarp);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar11, 1, 1, 0, NULL);
        gTasks[taskId].func = DebugAction_Util_Warp_SelectWarp;
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Debug_DestroyMenu(taskId);
        Debug_ShowMenu(DebugTask_HandleMenuInput_Utilities, sDebugMenu_ListTemplate_Utilities);
    }
}
static void DebugAction_Util_Warp_SelectWarp(u8 taskId)
{
    if (gMain.newKeys & DPAD_ANY)
    {
        PlaySE(SE_SELECT);
        if (gMain.newKeys & DPAD_UP || gMain.newKeys & DPAD_RIGHT)
        {
            gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] > 10)
                gTasks[taskId].data[3] = 10;
        }
        if (gMain.newKeys & DPAD_DOWN || gMain.newKeys & DPAD_LEFT)
        {
            gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] < 0)
                gTasks[taskId].data[3] = 0;
        }

        StringCopy(gStringVar3, gText_DigitIndicator[gTasks[taskId].data[4]]);
        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 2);
        StringExpandPlaceholders(gStringVar11, sDebugText_Util_WarpToMap_SelectWarp);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar11, 1, 1, 0, NULL);
    }

    if (gMain.newKeys & A_BUTTON)
    {
        gTasks[taskId].data[7] = gTasks[taskId].data[3];
        //WARP
        SetWarpDestinationToMapWarp(gTasks[taskId].data[5], gTasks[taskId].data[6], gTasks[taskId].data[7]); //If not warp with the number available -> center of map
        DoWarp();
        ResetInitialPlayerAvatarState();
        DebugAction_DestroyExtraWindow(taskId);
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Debug_DestroyMenu(taskId);
        Debug_ShowMenu(DebugTask_HandleMenuInput_Utilities, sDebugMenu_ListTemplate_Utilities);
    }
}

static void DebugAction_Util_CheckSaveSpace(u8 taskId)
{
    u32 currSb1Size = (sizeof(struct SaveBlock1));
    u32 currSb2Size = (sizeof(struct SaveBlock2));
    u32 currPkmnStorageSize = (sizeof(struct PokemonStorage));
    u32 currBoxPkmnSize = (sizeof(struct BoxPokemon));
    u32 maxSb1Size = (SECTOR_DATA_SIZE * 4);
    u32 maxSb2Size = SECTOR_DATA_SIZE;
    u32 maxPkmnStorageSize = (SECTOR_DATA_SIZE * 9);
    ConvertIntToDecimalStringN(gStringVar1, currSb1Size, STR_CONV_MODE_LEFT_ALIGN, 6);
    ConvertIntToDecimalStringN(gStringVar2, currSb2Size, STR_CONV_MODE_LEFT_ALIGN, 6);
    ConvertIntToDecimalStringN(gStringVar3, currPkmnStorageSize, STR_CONV_MODE_LEFT_ALIGN, 6);
    ConvertIntToDecimalStringN(gStringVar4, maxSb1Size, STR_CONV_MODE_LEFT_ALIGN, 6);
    ConvertIntToDecimalStringN(gStringVar5, maxSb2Size, STR_CONV_MODE_LEFT_ALIGN, 6);
    ConvertIntToDecimalStringN(gStringVar6, maxPkmnStorageSize, STR_CONV_MODE_LEFT_ALIGN, 6);
    ConvertIntToDecimalStringN(gStringVar7, currBoxPkmnSize, STR_CONV_MODE_LEFT_ALIGN, 6);
    Debug_DestroyMenu(taskId);
    LockPlayerFieldControls();
    ScriptContext_SetupScript(DebugScript_CheckSavefileSize);
}
static void DebugAction_Util_CheckWallClock(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    LockPlayerFieldControls();
    ScriptContext_SetupScript(PlayersHouse_2F_EventScript_CheckWallClock);
}
static void DebugAction_Util_SetWallClock(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    LockPlayerFieldControls();
    ScriptContext_SetupScript(PlayersHouse_2F_EventScript_SetWallClock);
}
static void DebugAction_Util_CheckWeekDay(u8 taskId)
{
    struct SiiRtcInfo rtc;
    u8 day;
    u8 month;
    u16 year;

    RtcGetDateTime(&rtc);
    day = ConvertBcdToBinary(rtc.day);
    month = ConvertBcdToBinary(rtc.month);
    year = (u16)ConvertBcdToBinary(rtc.year);
    year += 2000;
    StringCopy(gStringVar1, GetCurrentDayString(gLocalTime.dayOfWeek));
    ConvertIntToDecimalStringN(gStringVar2, day, STR_CONV_MODE_LEADING_ZEROS, 2);
    ConvertIntToDecimalStringN(gStringVar3, month, STR_CONV_MODE_LEADING_ZEROS, 2);
    ConvertIntToDecimalStringN(gStringVar4, year, STR_CONV_MODE_LEFT_ALIGN, 4);
    ShowFieldMessage(TEXT_STRING("Today is {STR_VAR_1} {STR_VAR_2}/{STR_VAR_3}/{STR_VAR_4}."));
    Debug_DestroyMenu(taskId);
}
static void DebugAction_Util_WatchCredits(u8 taskId)
{
    struct Task* task = &gTasks[taskId];
    Debug_DestroyMenu(taskId);
    SetMainCallback2(CB2_StartCreditsSequence);
}
static void DebugAction_Util_Trainer_Name(u8 taskId)
{
    NewGameBirchSpeech_SetDefaultPlayerName(Random() % 20);
    DoNamingScreen(0, gSaveBlock2Ptr->playerName, gSaveBlock2Ptr->playerGender, 0, 0, CB2_ReturnToFieldContinueScript);
}
static void DebugAction_Util_Rival_Name(u8 taskId)
{
    DoNamingScreen(NAMING_SCREEN_RIVAL, gSaveBlock2Ptr->rivalName, 0, 0, 0, CB2_ReturnToFieldContinueScript);
}
static void DebugAction_Util_Trainer_Gender(u8 taskId)
{
    if (gSaveBlock2Ptr->playerGender == 0) // 0 Male, 1 Female
        gSaveBlock2Ptr->playerGender = 1;
    else
        gSaveBlock2Ptr->playerGender = 0;
    Debug_DestroyMenu(taskId);
    SetWarpDestination(gSaveBlock1Ptr->location.mapGroup, gSaveBlock1Ptr->location.mapNum, 255, gSaveBlock1Ptr->pos.x, gSaveBlock1Ptr->pos.y);
    DoWarp();
}
static void DebugAction_Util_Trainer_Id(u8 taskId)
{
    u32 trainerId = ((Random() << 16) | Random());
    SetTrainerId(trainerId, gSaveBlock2Ptr->playerTrainerId);
    Debug_DestroyMenu(taskId);
    ScriptContext_Enable();
}
static void DebugAction_Util_CheckStats(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    LockPlayerFieldControls();
    ScriptContext_SetupScript(Script_PokemonDataInfoBox);
}
static void DebugAction_Util_ForceEggHatch(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    LockPlayerFieldControls();
    ScriptContext_SetupScript(DebugScript_ForceEggHatch);
}
static void DebugAction_Util_OpenPC(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    LockPlayerFieldControls();
    ScriptContext_SetupScript(EventScript_PC);
}
static void DebugAction_Util_DoWonderTrade(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    LockPlayerFieldControls();
    ScriptContext_SetupScript(DebugScript_DoWonderTrade);
}
static void DebugAction_Util_ChangeCostume(u8 taskId)
{
    if (gSaveBlock2Ptr->playerCostume == 0)
        VarSet(VAR_TEMP_1, 1);
    else if (gSaveBlock2Ptr->playerCostume == 1)
        VarSet(VAR_TEMP_1, 2);
    else
        VarSet(VAR_TEMP_1, 0);

    FadeScreen(FADE_TO_BLACK, 0);
    gTasks[taskId].func = DebugTask_ChangeCostume_Execute;
}
static void DebugTask_ChangeCostume_Execute(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SwapPlayersCostume();
        gTasks[taskId].func = DebugTask_ChangeCostume_End;
    }
}
static void DebugTask_ChangeCostume_End(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        FadeInFromBlack();
        Debug_DestroyMenu(taskId);
        ScriptContext_Enable();
    }
}
static void DebugAction_Util_CatchChainStatus(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    LockPlayerFieldControls();
    ScriptContext_SetupScript(DebugScript_CatchingStreak);
}
static void DebugAction_Util_CreateDaycareEgg(u8 taskId)
{
    if (CountPokemonInDaycare(&gSaveBlock1Ptr->daycare) == DAYCARE_TWO_MONS)
        TriggerPendingDaycareEgg();
    Debug_DestroyMenu(taskId);
    ScriptContext_Enable();
}
static void DebugAction_Util_ClearBag(u8 taskId)
{
    int i;

    ClearBag();
    for (i = 0; i < BAG_TMHM_COUNT; ++i)
        gSaveBlock1Ptr->bagPocket_TMHMOwnedFlags[i / 8] = 0;
    Debug_DestroyMenu(taskId);
    ScriptContext_Enable();
}
static void DebugAction_Util_DeletePokemon(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    LockPlayerFieldControls();
    ScriptContext_SetupScript(DebugScript_DeleteMon);
}
static void DebugAction_Util_ClearParty(u8 taskId)
{
    ZeroPlayerPartyMons();
    Debug_DestroyMenu(taskId);
    ScriptContext_Enable();
}
static void DebugAction_Util_GiveStatusAilment(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    LockPlayerFieldControls();
    ScriptContext_SetupScript(DebugScript_GiveStatusAilment);
}
static void DebugAction_Util_TestRayquazaCutscene(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    FlagClear(FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON);
    FlagClear(FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE);
    VarSet(VAR_SOOTOPOLIS_CITY_STATE, 5);
    VarSet(VAR_SKY_PILLAR_STATE, 1);
    VarSet(VAR_SKY_PILLAR_RAQUAZA_CRY_DONE, 1);
    SetWarpDestinationToMapWarp(MAP_GROUP(SOOTOPOLIS_CITY), MAP_NUM(SOOTOPOLIS_CITY), 0);
    DoWarp();
}

// *******************************
// Actions Flags
static void DebugAction_Flags_Flags(u8 taskId)
{
    u8 windowId;

    ClearStdWindowAndFrame(gTasks[taskId].data[1], TRUE);
    RemoveWindow(gTasks[taskId].data[1]);

    HideMapNamePopUpWindow();
    LoadMessageBoxAndBorderGfx();
    windowId = AddWindow(&sDebugNumberDisplayWindowTemplate);
    DrawStdWindowFrame(windowId, FALSE);

    CopyWindowToVram(windowId, 3);

    //Display initial Flag
    ConvertIntToDecimalStringN(gStringVar1, 0, STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_FLAGS);
    ConvertIntToHexStringN(gStringVar2, 0, STR_CONV_MODE_LEFT_ALIGN, 3);
    StringExpandPlaceholders(gStringVar1, sDebugText_FlagHex);
    if (FlagGet(0) == TRUE)
        StringCopyPadded(gStringVar2, sDebugText_FlagSet, CHAR_SPACE, 15);
    else
        StringCopyPadded(gStringVar2, sDebugText_FlagUnset, CHAR_SPACE, 15);
    StringCopy(gStringVar3, gText_DigitIndicator[0]);
    StringExpandPlaceholders(gStringVar11, sDebugText_Flag);
    AddTextPrinterParameterized(windowId, 1, gStringVar11, 1, 1, 0, NULL);

    gTasks[taskId].func = DebugAction_Flags_FlagsSelect;
    gTasks[taskId].data[2] = windowId;
    gTasks[taskId].data[3] = 0;            //Current Flag
    gTasks[taskId].data[4] = 0;            //Digit Selected
}
static void DebugAction_Flags_FlagsSelect(u8 taskId)
{
    if (gMain.newKeys & A_BUTTON)
        FlagToggle(gTasks[taskId].data[3]);
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Debug_DestroyMenu(taskId);
        Debug_ShowMenu(DebugTask_HandleMenuInput_Flags, sDebugMenu_ListTemplate_Flags);
        return;
    }

    if (gMain.newKeys & DPAD_UP)
    {
        PlaySE(SE_SELECT);
        gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
        if (gTasks[taskId].data[3] >= FLAGS_COUNT){
            gTasks[taskId].data[3] = FLAGS_COUNT - 1;
        }
    }
    if (gMain.newKeys & DPAD_DOWN)
    {
        PlaySE(SE_SELECT);
        gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
        if (gTasks[taskId].data[3] < 0){
            gTasks[taskId].data[3] = 0;
        }
    }
    if (gMain.newKeys & DPAD_LEFT)
    {
        PlaySE(SE_SELECT);
        gTasks[taskId].data[4] -= 1;
        if (gTasks[taskId].data[4] < 0)
        {
            gTasks[taskId].data[4] = 0;
        }
    }
    if (gMain.newKeys & DPAD_RIGHT)
    {
        PlaySE(SE_SELECT);
        gTasks[taskId].data[4] += 1;
        if (gTasks[taskId].data[4] > DEBUG_NUMBER_DIGITS_FLAGS-1)
        {
            gTasks[taskId].data[4] = DEBUG_NUMBER_DIGITS_FLAGS-1;
        }
    }

    if (gMain.newKeys & DPAD_ANY || gMain.newKeys & A_BUTTON)
    {
        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_FLAGS);
        ConvertIntToHexStringN(gStringVar2, gTasks[taskId].data[3], STR_CONV_MODE_LEFT_ALIGN, 3);
        StringExpandPlaceholders(gStringVar1, sDebugText_FlagHex);
        if (FlagGet(gTasks[taskId].data[3]) == TRUE)
            StringCopyPadded(gStringVar2, sDebugText_FlagSet, CHAR_SPACE, 15);
        else
            StringCopyPadded(gStringVar2, sDebugText_FlagUnset, CHAR_SPACE, 15);
        StringCopy(gStringVar3, gText_DigitIndicator[gTasks[taskId].data[4]]);
        StringExpandPlaceholders(gStringVar11, sDebugText_Flag);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar11, 1, 1, 0, NULL);
    }
}

static void DebugAction_Flags_Badges(u8 taskId)
{
    struct ListMenuTemplate menuTemplate;
    u8 windowId;
    u8 menuTaskId;
    u8 inputTaskId;

    // erase existing window
    Debug_DestroyMenu(taskId);

    // create window
    HideMapNamePopUpWindow();
    LoadMessageBoxAndBorderGfx();
    windowId = AddWindow(&sPresetWarpWindowTemplate);
    DrawStdWindowFrame(windowId, FALSE);

    // create list menu
    menuTemplate = sDebugMenu_ListTemplate_Badges;
    menuTemplate.maxShowed = DEBUG_MAIN_MENU_HEIGHT;
    menuTemplate.windowId = windowId;
    menuTemplate.header_X = 0;
    menuTemplate.item_X = 8;
    menuTemplate.cursor_X = 0;
    menuTemplate.upText_Y = 1;
    menuTemplate.cursorPal = 2;
    menuTemplate.fillValue = 1;
    menuTemplate.cursorShadowPal = 3;
    menuTemplate.lettersSpacing = 1;
    menuTemplate.itemVerticalPadding = 0;
    menuTemplate.scrollMultiple = LIST_NO_MULTIPLE_SCROLL;
    menuTemplate.fontId = 1;
    menuTemplate.cursorKind = 0;
    menuTaskId = ListMenuInit(&menuTemplate, 0, 0);

    // draw everything
    CopyWindowToVram(windowId, 3);

    // create input handler task
    inputTaskId = CreateTask(DebugTask_HandleMenuInput_Badges, 3);
    gTasks[inputTaskId].data[0] = menuTaskId;
    gTasks[inputTaskId].data[1] = windowId;
}

static void DebugTask_HandleMenuInput_Badges(u8 taskId)
{
    void (*func)(u8);
    u32 input = ListMenu_ProcessInput(gTasks[taskId].data[0]);

    if (gMain.newKeys & A_BUTTON)
    {
        if ((func = sDebugMenu_Actions_Badges[input]) != NULL)
            func(taskId);
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        Debug_DestroyMenu(taskId);
        Debug_ShowMenu(DebugTask_HandleMenuInput_Flags, sDebugMenu_ListTemplate_Flags);
    }
}

static void DebugAction_Flags_SetPokedexFlags(u8 taskId)
{
    u16 i;
    for (i = 0; i < NATIONAL_DEX_COUNT; i++)
    {
        GetSetPokedexFlag(i + 1, FLAG_SET_CAUGHT);
        GetSetPokedexFlag(i + 1, FLAG_SET_SEEN);
    }
    Debug_DestroyMenu(taskId);
    ScriptContext_Enable();
}
static void DebugAction_Flags_DexOnOff(u8 taskId)
{
    if (FlagGet(FLAG_SYS_POKEDEX_GET))
    {
        FlagClear(FLAG_SYS_POKEDEX_GET);
        PlaySE(SE_PC_OFF);
    }
    else
    {
        FlagSet(FLAG_SYS_POKEDEX_GET);
        PlaySE(SE_PC_LOGIN);
    }
}
static void DebugAction_Flags_NatDexOnOff(u8 taskId)
{
    if (IsNationalPokedexEnabled())
    {
        DisableNationalPokedex();
        PlaySE(SE_PC_OFF);
    }
    else
    {
        EnableNationalPokedex();
        PlaySE(SE_PC_LOGIN);
    }
}
static void DebugAction_Flags_PokemonOnOff(u8 taskId)
{
    if (FlagGet(FLAG_SYS_POKEMON_GET))
    {
        FlagClear(FLAG_SYS_POKEMON_GET);
        PlaySE(SE_PC_OFF);
    }
    else
    {
        FlagSet(FLAG_SYS_POKEMON_GET);
        PlaySE(SE_PC_LOGIN);
    }
}
static void DebugAction_Flags_PokeNavOnOff(u8 taskId)
{
    if (FlagGet(FLAG_SYS_POKENAV_GET))
    {
        FlagClear(FLAG_SYS_POKENAV_GET);
        FlagClear(FLAG_SYS_DEXNAV_GET);
        FlagClear(FLAG_SYS_RIBBON_GET);
        PlaySE(SE_PC_OFF);
    }
    else
    {
        FlagSet(FLAG_SYS_POKENAV_GET);
        FlagSet(FLAG_SYS_DEXNAV_GET);
        FlagSet(FLAG_SYS_RIBBON_GET);
        PlaySE(SE_PC_LOGIN);
    }
}
static void DebugAction_Flags_ToggleFlyFlags(u8 taskId)
{
    // Sound effect
    if (FlagGet(FLAG_LANDMARK_BATTLE_FRONTIER))
        PlaySE(SE_PC_OFF);
    else
        PlaySE(SE_PC_LOGIN);
    FlagToggle(FLAG_VISITED_LITTLEROOT_TOWN);
    FlagToggle(FLAG_VISITED_OLDALE_TOWN);
    FlagToggle(FLAG_VISITED_DEWFORD_TOWN);
    FlagToggle(FLAG_VISITED_LAVARIDGE_TOWN);
    FlagToggle(FLAG_VISITED_FALLARBOR_TOWN);
    FlagToggle(FLAG_VISITED_VERDANTURF_TOWN);
    FlagToggle(FLAG_VISITED_PACIFIDLOG_TOWN);
    FlagToggle(FLAG_VISITED_PETALBURG_CITY);
    FlagToggle(FLAG_VISITED_SLATEPORT_CITY);
    FlagToggle(FLAG_VISITED_MAUVILLE_CITY);
    FlagToggle(FLAG_VISITED_RUSTBORO_CITY);
    FlagToggle(FLAG_VISITED_FORTREE_CITY);
    FlagToggle(FLAG_VISITED_LILYCOVE_CITY);
    FlagToggle(FLAG_VISITED_MOSSDEEP_CITY);
    FlagToggle(FLAG_VISITED_SOOTOPOLIS_CITY);
    FlagToggle(FLAG_VISITED_EVER_GRANDE_CITY);
    FlagToggle(FLAG_LANDMARK_POKEMON_LEAGUE);
    FlagToggle(FLAG_LANDMARK_BATTLE_FRONTIER);
}
static void DebugAction_Flags_CollisionOnOff(u8 taskId)
{
    if (FlagGet(FLAG_DISABLE_COLLISIONS))
    {
        FlagClear(FLAG_DISABLE_COLLISIONS);
        PlaySE(SE_PC_OFF);
    }
    else
    {
        FlagSet(FLAG_DISABLE_COLLISIONS);
        PlaySE(SE_PC_LOGIN);
    }
}
static void DebugAction_Flags_EncounterOnOff(u8 taskId)
{
    if (FlagGet(FLAG_DISABLE_WILD_ENCOUNTERS))
    {
        FlagClear(FLAG_DISABLE_WILD_ENCOUNTERS);
        PlaySE(SE_PC_OFF);
    }
    else
    {
        FlagSet(FLAG_DISABLE_WILD_ENCOUNTERS);
        PlaySE(SE_PC_LOGIN);
    }
}
static void DebugAction_Flags_TrainerSeeOnOff(u8 taskId)
{
    if (FlagGet(FLAG_DISABLE_TRAINER_ENCOUNTERS))
    {
        FlagClear(FLAG_DISABLE_TRAINER_ENCOUNTERS);
        PlaySE(SE_PC_OFF);
    }
    else
    {
        FlagSet(FLAG_DISABLE_TRAINER_ENCOUNTERS);
        PlaySE(SE_PC_LOGIN);
    }
}
static void DebugAction_Flags_BagUseOnOff(u8 taskId)
{
    if (FlagGet(FLAG_DISABLE_BATTLE_BAG_ACCESS))
    {
        FlagClear(FLAG_DISABLE_BATTLE_BAG_ACCESS);
        PlaySE(SE_PC_OFF);
    }
    else
    {
        FlagSet(FLAG_DISABLE_BATTLE_BAG_ACCESS);
        PlaySE(SE_PC_LOGIN);
    }
}
static void DebugAction_Flags_CatchingOnOff(u8 taskId)
{
    if (FlagGet(FLAG_DISABLE_BALL_THROWS))
    {
        FlagClear(FLAG_DISABLE_BALL_THROWS);
        PlaySE(SE_PC_OFF);
    }
    else
    {
        FlagSet(FLAG_DISABLE_BALL_THROWS);
        PlaySE(SE_PC_LOGIN);
    }
}
static void DebugAction_Flags_ShiniesOnOff(u8 taskId)
{
    if (FlagGet(FLAG_FORCE_SHINIES))
    {
        FlagClear(FLAG_FORCE_SHINIES);
        PlaySE(SE_PC_OFF);
    }
    else
    {
        FlagSet(FLAG_FORCE_SHINIES);
        PlaySE(SE_PC_LOGIN);
    }
}
static void DebugAction_Flags_EscapingOnOff(u8 taskId)
{
    if (FlagGet(FLAG_DISABLE_ESCAPING_FROM_BATTLE))
    {
        FlagClear(FLAG_DISABLE_ESCAPING_FROM_BATTLE);
        PlaySE(SE_PC_OFF);
    }
    else
    {
        FlagSet(FLAG_DISABLE_ESCAPING_FROM_BATTLE);
        PlaySE(SE_PC_LOGIN);
    }
}
static void DebugAction_Flags_ExperienceOnOff(u8 taskId)
{
    if (FlagGet(FLAG_DISABLE_EXPERIENCE))
    {
        FlagClear(FLAG_DISABLE_EXPERIENCE);
        PlaySE(SE_PC_OFF);
    }
    else
    {
        FlagSet(FLAG_DISABLE_EXPERIENCE);
        PlaySE(SE_PC_LOGIN);
    }
}
static void DebugAction_Flags_ShinyHueShiftOnOff(u8 taskId)
{
    if (FlagGet(FLAG_DISABLE_SHINY_HUE_SHIFT))
    {
        FlagClear(FLAG_DISABLE_SHINY_HUE_SHIFT);
        PlaySE(SE_PC_OFF);
    }
    else
    {
        FlagSet(FLAG_DISABLE_SHINY_HUE_SHIFT);
        PlaySE(SE_PC_LOGIN);
    }
}
static void DebugAction_Flags_RunningShoesOnOff(u8 taskId)
{
    if (FlagGet(FLAG_SYS_B_DASH))
    {
        FlagClear(FLAG_SYS_B_DASH);
        PlaySE(SE_PC_OFF);
    }
    else
    {
        FlagSet(FLAG_SYS_B_DASH);
        PlaySE(SE_PC_LOGIN);
    }
}
static void DebugAction_Flags_MapTransitionMusicOnOff(u8 taskId)
{
    if (FlagGet(FLAG_DONT_TRANSITION_MUSIC))
    {
        FlagClear(FLAG_DONT_TRANSITION_MUSIC);
        PlaySE(SE_PC_OFF);
    }
    else
    {
        FlagSet(FLAG_DONT_TRANSITION_MUSIC);
        PlaySE(SE_PC_LOGIN);
    }
}
// *******************************
// Actions Variables
static void DebugAction_Vars_Vars(u8 taskId)
{
    u8 windowId;

    ClearStdWindowAndFrame(gTasks[taskId].data[1], TRUE);
    RemoveWindow(gTasks[taskId].data[1]);

    HideMapNamePopUpWindow();
    LoadMessageBoxAndBorderGfx();
    windowId = AddWindow(&sDebugNumberDisplayWindowTemplate);
    DrawStdWindowFrame(windowId, FALSE);

    CopyWindowToVram(windowId, 3);

    //Display initial Variable
    ConvertIntToDecimalStringN(gStringVar1, VARS_START, STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_VARIABLES);
    ConvertIntToHexStringN(gStringVar2, VARS_START, STR_CONV_MODE_LEFT_ALIGN, 4);
    StringExpandPlaceholders(gStringVar1, sDebugText_VariableHex);
    ConvertIntToDecimalStringN(gStringVar3, 0, STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_VARIABLES);
    StringCopyPadded(gStringVar3, gStringVar3, CHAR_SPACE, 15);
    StringCopy(gStringVar2, gText_DigitIndicator[0]);
    StringExpandPlaceholders(gStringVar11, sDebugText_Variable);
    AddTextPrinterParameterized(windowId, 1, gStringVar11, 1, 1, 0, NULL);

    gTasks[taskId].func = DebugAction_Vars_Select;
    gTasks[taskId].data[2] = windowId;
    gTasks[taskId].data[3] = VARS_START;            //Current Variable
    gTasks[taskId].data[4] = 0;            //Digit Selected
    gTasks[taskId].data[5] = 0;            //Current Variable VALUE
}

static void DebugAction_Vars_Select(u8 taskId)
{
    if (gMain.newKeys & DPAD_UP)
    {
        gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
        if (gTasks[taskId].data[3] > VARS_END){
            gTasks[taskId].data[3] = VARS_END;
        }
    }
    if (gMain.newKeys & DPAD_DOWN)
    {
        gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
        if (gTasks[taskId].data[3] < VARS_START){
            gTasks[taskId].data[3] = VARS_START;
        }
    }
    if (gMain.newKeys & DPAD_LEFT)
    {
        gTasks[taskId].data[4] -= 1;
        if (gTasks[taskId].data[4] < 0)
        {
            gTasks[taskId].data[4] = 0;
        }
    }
    if (gMain.newKeys & DPAD_RIGHT)
    {
        gTasks[taskId].data[4] += 1;
        if (gTasks[taskId].data[4] > DEBUG_NUMBER_DIGITS_VARIABLES-1)
        {
            gTasks[taskId].data[4] = DEBUG_NUMBER_DIGITS_VARIABLES-1;
        }
    }

    if (gMain.newKeys & DPAD_ANY)
    {
        PlaySE(SE_SELECT);

        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_VARIABLES);
        ConvertIntToHexStringN(gStringVar2, gTasks[taskId].data[3], STR_CONV_MODE_LEFT_ALIGN, 4);
        StringExpandPlaceholders(gStringVar1, sDebugText_VariableHex);
        if (VarGetIfExist(gTasks[taskId].data[3]) == 65535) //Current value, if 65535 the value hasnt been set
            gTasks[taskId].data[5] = 0;
        else
            gTasks[taskId].data[5] = VarGet(gTasks[taskId].data[3]);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[5], STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_VARIABLES);
        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]); //Current digit

        //Combine str's to full window string
        StringExpandPlaceholders(gStringVar11, sDebugText_Variable);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar11, 1, 1, 0, NULL);
    }

    if (gMain.newKeys & A_BUTTON)
    {
        gTasks[taskId].data[4] = 0;

        PlaySE(SE_SELECT);

        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_VARIABLES);
        ConvertIntToHexStringN(gStringVar2, gTasks[taskId].data[3], STR_CONV_MODE_LEFT_ALIGN, 4);
        StringExpandPlaceholders(gStringVar1, sDebugText_VariableHex);
        if (VarGetIfExist(gTasks[taskId].data[3]) == 65535) //Current value if 65535 the value hasnt been set
            gTasks[taskId].data[5] = 0;
        else
            gTasks[taskId].data[5] = VarGet(gTasks[taskId].data[3]);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[5], STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_VARIABLES);
        StringCopyPadded(gStringVar3, gStringVar3, CHAR_SPACE, 15);
        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]); //Current digit
        StringExpandPlaceholders(gStringVar11, sDebugText_VariableValueSet);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar11, 1, 1, 0, NULL);

        gTasks[taskId].data[6] = gTasks[taskId].data[5]; //New value selector
        gTasks[taskId].func = DebugAction_Vars_SetValue;
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Debug_DestroyMenu(taskId);
        Debug_ShowMenu(DebugTask_HandleMenuInput_Vars, sDebugMenu_ListTemplate_Vars);
        return;
    }
}
static void DebugAction_Vars_SetValue(u8 taskId)
{
    if (gMain.newKeys & DPAD_UP)
    {
        if (gTasks[taskId].data[6] + sPowersOfTen[gTasks[taskId].data[4]] <= 32000)
            gTasks[taskId].data[6] += sPowersOfTen[gTasks[taskId].data[4]];
        else
            gTasks[taskId].data[6] = 32000-1;
        if (gTasks[taskId].data[6] >= 32000){
            gTasks[taskId].data[6] = 32000-1;
        }
    }
    if (gMain.newKeys & DPAD_DOWN)
    {
        gTasks[taskId].data[6] -= sPowersOfTen[gTasks[taskId].data[4]];
        if (gTasks[taskId].data[6] < 0){
            gTasks[taskId].data[6] = 0;
        }
    }
    if (gMain.newKeys & DPAD_LEFT)
    {
        gTasks[taskId].data[4] -= 1;
        if (gTasks[taskId].data[4] < 0)
        {
            gTasks[taskId].data[4] = 0;
        }
    }
    if (gMain.newKeys & DPAD_RIGHT)
    {
        gTasks[taskId].data[4] += 1;
        if (gTasks[taskId].data[4] > 4)
        {
            gTasks[taskId].data[4] = 4;
        }
    }

    if (gMain.newKeys & A_BUTTON)
    {
        PlaySE(SE_SELECT);
        VarSet(gTasks[taskId].data[3], gTasks[taskId].data[6]);
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Debug_DestroyMenu(taskId);
        Debug_ShowMenu(DebugTask_HandleMenuInput_Vars, sDebugMenu_ListTemplate_Vars);
        return;
    }

    if (gMain.newKeys & DPAD_ANY || gMain.newKeys & A_BUTTON)
    {
        PlaySE(SE_SELECT);

        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_VARIABLES);
        ConvertIntToHexStringN(gStringVar2, gTasks[taskId].data[3], STR_CONV_MODE_LEFT_ALIGN, 4);
        StringExpandPlaceholders(gStringVar1, sDebugText_VariableHex);
        StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[6], STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_VARIABLES);
        StringCopyPadded(gStringVar3, gStringVar3, CHAR_SPACE, 15);
        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]); //Current digit
        StringExpandPlaceholders(gStringVar11, sDebugText_VariableValueSet);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar11, 1, 1, 0, NULL);
    }
}

// *******************************
// Actions Give
#define ITEM_TAG 0xFDF3
static void DebugAction_Give_Item(u8 taskId)
{
    u8 windowId;

    ClearStdWindowAndFrame(gTasks[taskId].data[1], TRUE);
    RemoveWindow(gTasks[taskId].data[1]);

    HideMapNamePopUpWindow();
    LoadMessageBoxAndBorderGfx();
    windowId = AddWindow(&sDebugNumberDisplayWindowTemplate);
    DrawStdWindowFrame(windowId, FALSE);

    CopyWindowToVram(windowId, 3);

    //Display initial ID
    StringCopy(gStringVar2, gText_DigitIndicator[0]);
    ConvertIntToDecimalStringN(gStringVar3, 1, STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_ITEMS);
    CopyItemName(1, gStringVar1);
    StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
    StringExpandPlaceholders(gStringVar11, sDebugText_ItemID);
    AddTextPrinterParameterized(windowId, 1, gStringVar11, 1, 1, 0, NULL);

    gTasks[taskId].func = DebugAction_Give_Item_SelectId;
    gTasks[taskId].data[2] = windowId;
    gTasks[taskId].data[3] = 1;                         //Current ID
    gTasks[taskId].data[4] = 0;                         //Digit Selected
    gTasks[taskId].data[5] = gTasks[taskId].data[3];    //Last song played (for stopping)
    gTasks[taskId].data[6] = AddItemIconSprite(ITEM_TAG, ITEM_TAG, gTasks[taskId].data[3]);
    gSprites[gTasks[taskId].data[6]].x2 = DEBUG_NUMBER_ICON_X+10;
    gSprites[gTasks[taskId].data[6]].y2 = DEBUG_NUMBER_ICON_Y+10;
    gSprites[gTasks[taskId].data[6]].oam.priority = 0;
}
static void DebugAction_Give_Item_SelectId(u8 taskId)
{
    if (gMain.newKeys & DPAD_ANY)
    {
        PlaySE(SE_SELECT);

        if (gMain.newKeys & DPAD_UP)
        {
            gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] >= ITEMS_COUNT)
                gTasks[taskId].data[3] = ITEMS_COUNT - 1;
        }
        if (gMain.newKeys & DPAD_DOWN)
        {
            gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] < 1)
                gTasks[taskId].data[3] = 1;
        }
        if (gMain.newKeys & DPAD_LEFT)
        {
            if (gTasks[taskId].data[4] > 0)
                gTasks[taskId].data[4] -= 1;
        }
        if (gMain.newKeys & DPAD_RIGHT)
        {
            if (gTasks[taskId].data[4] < DEBUG_NUMBER_DIGITS_ITEMS-1)
                gTasks[taskId].data[4] += 1;
        }

        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
        CopyItemName(gTasks[taskId].data[3], gStringVar1);
        StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_ITEMS);
        StringExpandPlaceholders(gStringVar11, sDebugText_ItemID);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar11, 1, 1, 0, NULL);

        FreeSpriteTilesByTag(ITEM_TAG);                         //Destroy item icon
        FreeSpritePaletteByTag(ITEM_TAG);                       //Destroy item icon
        FreeSpriteOamMatrix(&gSprites[gTasks[taskId].data[6]]); //Destroy item icon
        DestroySprite(&gSprites[gTasks[taskId].data[6]]);       //Destroy item icon
        gTasks[taskId].data[6] = AddItemIconSprite(ITEM_TAG, ITEM_TAG, gTasks[taskId].data[3]);
        gSprites[gTasks[taskId].data[6]].x2 = DEBUG_NUMBER_ICON_X+10;
        gSprites[gTasks[taskId].data[6]].y2 = DEBUG_NUMBER_ICON_Y+10;
        gSprites[gTasks[taskId].data[6]].oam.priority = 0;
    }

    if (gMain.newKeys & A_BUTTON)
    {
        gTasks[taskId].data[5] = gTasks[taskId].data[3];
        gTasks[taskId].data[3] = 1;
        gTasks[taskId].data[4] = 0;

        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_ITEM_QUANTITY);
        StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
        StringExpandPlaceholders(gStringVar11, sDebugText_ItemQuantity);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar11, 1, 1, 0, NULL);

        gTasks[taskId].func = DebugAction_Give_Item_SelectQuantity;
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        FreeSpriteTilesByTag(ITEM_TAG);                         //Destroy item icon
        FreeSpritePaletteByTag(ITEM_TAG);                       //Destroy item icon
        FreeSpriteOamMatrix(&gSprites[gTasks[taskId].data[6]]); //Destroy item icon
        DestroySprite(&gSprites[gTasks[taskId].data[6]]);       //Destroy item icon

        PlaySE(SE_SELECT);
        Debug_DestroyMenu(taskId);
        Debug_ShowMenu(DebugTask_HandleMenuInput_Give, sDebugMenu_ListTemplate_Give);
    }
}
static void DebugAction_Give_Item_SelectQuantity(u8 taskId)
{
    if (gMain.newKeys & DPAD_ANY)
    {
        PlaySE(SE_SELECT);

        if (gMain.newKeys & DPAD_UP)
        {
            gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] >= 100)
                gTasks[taskId].data[3] = 99;
        }
        if (gMain.newKeys & DPAD_DOWN)
        {
            gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] < 1)
                gTasks[taskId].data[3] = 1;
        }
        if (gMain.newKeys & DPAD_LEFT)
        {
            if (gTasks[taskId].data[4] > 0)
                gTasks[taskId].data[4] -= 1;
        }
        if (gMain.newKeys & DPAD_RIGHT)
        {
            if (gTasks[taskId].data[4] < 2)
                gTasks[taskId].data[4] += 1;
        }

        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_ITEM_QUANTITY);
        StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
        StringExpandPlaceholders(gStringVar11, sDebugText_ItemQuantity);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar11, 1, 1, 0, NULL);
    }

    if (gMain.newKeys & A_BUTTON)
    {
        FreeSpriteTilesByTag(ITEM_TAG);                         //Destroy item icon
        FreeSpritePaletteByTag(ITEM_TAG);                       //Destroy item icon
        FreeSpriteOamMatrix(&gSprites[gTasks[taskId].data[6]]); //Destroy item icon
        DestroySprite(&gSprites[gTasks[taskId].data[6]]);       //Destroy item icon

        PlaySE(MUS_OBTAIN_ITEM);
        AddBagItem(gTasks[taskId].data[5], gTasks[taskId].data[3]);
        DebugAction_DestroyExtraWindow(taskId);
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        FreeSpriteTilesByTag(ITEM_TAG);                         //Destroy item icon
        FreeSpritePaletteByTag(ITEM_TAG);                       //Destroy item icon
        FreeSpriteOamMatrix(&gSprites[gTasks[taskId].data[6]]); //Destroy item icon
        DestroySprite(&gSprites[gTasks[taskId].data[6]]);       //Destroy item icon

        PlaySE(SE_SELECT);
        Debug_DestroyMenu(taskId);
        Debug_ShowMenu(DebugTask_HandleMenuInput_Give, sDebugMenu_ListTemplate_Give);
    }
}

//TMs
static void DebugAction_Give_AllTMs(u8 taskId)
{
    u16 i;
    PlayFanfare(MUS_OBTAIN_TMHM);
    for (i = ITEM_TM01; i <= ITEM_HM08; i++)
        if (!CheckBagHasItem(i, 1))
            AddBagItem(i, 1);
    Debug_DestroyMenu(taskId);
    ScriptContext_Enable();
}

//Pokemon
static void ResetMonDataStruct(struct DebugMonData *sDebugMonData)
{
    sDebugMonData->mon_speciesId    = 1;
    sDebugMonData->mon_level        = 1;
    sDebugMonData->isShiny          = 0;
    sDebugMonData->mon_natureId     = 0;
    sDebugMonData->mon_abilityNum   = 0;
    sDebugMonData->mon_iv_hp        = 0;
    sDebugMonData->mon_iv_atk       = 0;
    sDebugMonData->mon_iv_def       = 0;
    sDebugMonData->mon_iv_speed     = 0;
    sDebugMonData->mon_iv_satk      = 0;
    sDebugMonData->mon_iv_sdef      = 0;
}

//Egg
static void DebugAction_Give_Egg(u8 taskId)
{
    u8 windowId;

    //Mon data struct
    sDebugMonData = AllocZeroed(sizeof(struct DebugMonData));
    ResetMonDataStruct(sDebugMonData);

    //Window initialization
    ClearStdWindowAndFrame(gTasks[taskId].data[1], TRUE);
    RemoveWindow(gTasks[taskId].data[1]);

    HideMapNamePopUpWindow();
    LoadMessageBoxAndBorderGfx();
    windowId = AddWindow(&sDebugNumberDisplayWindowTemplate);
    DrawStdWindowFrame(windowId, FALSE);

    CopyWindowToVram(windowId, 3);

    //Display initial ID
    StringCopy(gStringVar2, gText_DigitIndicator[0]);
    ConvertIntToDecimalStringN(gStringVar3, 1, STR_CONV_MODE_LEADING_ZEROS, 3);
    StringCopy(gStringVar1, gSpeciesNames[1]);
    StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
    StringExpandPlaceholders(gStringVar11, sDebugText_PokemonID);
    AddTextPrinterParameterized(windowId, 1, gStringVar11, 1, 1, 0, NULL);

    //Set task data
    gTasks[taskId].func = DebugAction_Give_Egg_SelectId;
    gTasks[taskId].data[2] = windowId;
    gTasks[taskId].data[3] = 1;            //Current ID
    gTasks[taskId].data[4] = 0;            //Digit Selected
    gTasks[taskId].data[5] = 0;            //Complex?
    FreeMonIconPalettes();                 //Free space for new pallete
    LoadMonIconPalette(gTasks[taskId].data[3]); //Loads pallete for current mon
    #ifndef POKEMON_EXPANSION
        gTasks[taskId].data[6] = CreateMonIcon(gTasks[taskId].data[3], SpriteCB_MonIcon, DEBUG_NUMBER_ICON_X, DEBUG_NUMBER_ICON_Y, 4, 0, TRUE); //Create pokemon sprite
    #endif
    #ifdef POKEMON_EXPANSION
        gTasks[taskId].data[6] = CreateMonIcon(gTasks[taskId].data[3], SpriteCB_MonIcon, DEBUG_NUMBER_ICON_X, DEBUG_NUMBER_ICON_Y, 4, 0); //Create pokemon sprite
    #endif
    gSprites[gTasks[taskId].data[6]].oam.priority = 0; //Mon Icon ID
}
static void DebugAction_Give_Egg_SelectId(u8 taskId)
{
    if (gMain.newKeys & DPAD_ANY)
    {
        PlaySE(SE_SELECT);

        if (gMain.newKeys & DPAD_UP)
        {
            gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] > SPECIES_CELEBI && gTasks[taskId].data[3] < SPECIES_TREECKO)
                gTasks[taskId].data[3] = SPECIES_TREECKO;
            if (gTasks[taskId].data[3] >= NUM_SPECIES)
                gTasks[taskId].data[3] = NUM_SPECIES - 1;
        }
        if (gMain.newKeys & DPAD_DOWN)
        {
            gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] < SPECIES_TREECKO && gTasks[taskId].data[3] > SPECIES_CELEBI)
                gTasks[taskId].data[3] = SPECIES_CELEBI;
            if (gTasks[taskId].data[3] < 1)
                gTasks[taskId].data[3] = 1;
        }
        if (gMain.newKeys & DPAD_LEFT)
        {
            if (gTasks[taskId].data[4] > 0)
                gTasks[taskId].data[4] -= 1;
        }
        if (gMain.newKeys & DPAD_RIGHT)
        {
            if (gTasks[taskId].data[4] < DEBUG_NUMBER_DIGITS_ITEMS-1)
                gTasks[taskId].data[4] += 1;
        }

        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
        StringCopy(gStringVar1, gSpeciesNames[gTasks[taskId].data[3]]); //CopyItemName(gTasks[taskId].data[3], gStringVar1);
        StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 4);
        StringExpandPlaceholders(gStringVar11, sDebugText_PokemonID);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar11, 1, 1, 0, NULL);

        FreeAndDestroyMonIconSprite(&gSprites[gTasks[taskId].data[6]]);
        FreeMonIconPalettes(); //Free space for new pallete
        LoadMonIconPalette(gTasks[taskId].data[3]); //Loads pallete for current mon
        #ifndef POKEMON_EXPANSION
            gTasks[taskId].data[6] = CreateMonIcon(gTasks[taskId].data[3], SpriteCB_MonIcon, DEBUG_NUMBER_ICON_X, DEBUG_NUMBER_ICON_Y, 4, 0, TRUE); //Create pokemon sprite
        #endif
        #ifdef POKEMON_EXPANSION
            gTasks[taskId].data[6] = CreateMonIcon(gTasks[taskId].data[3], SpriteCB_MonIcon, DEBUG_NUMBER_ICON_X, DEBUG_NUMBER_ICON_Y, 4, 0); //Create pokemon sprite
        #endif
        gSprites[gTasks[taskId].data[6]].oam.priority = 0;
    }

    if (gMain.newKeys & A_BUTTON)
    {
        sDebugMonData->mon_speciesId = gTasks[taskId].data[3]; //Species ID
        gTasks[taskId].data[3] = 1;
        gTasks[taskId].data[4] = 0;

        FreeMonIconPalettes();
        FreeAndDestroyMonIconSprite(&gSprites[gTasks[taskId].data[6]]); //Destroy pokemon sprite
        if (gTasks[taskId].data[5] == 0)
        {
            PlaySE(MUS_LEVEL_UP);
            ScriptGiveEgg(sDebugMonData->mon_speciesId);
            Free(sDebugMonData); //Frees EWRAM of MonData Struct
            DebugAction_DestroyExtraWindow(taskId);
        }
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Free(sDebugMonData); //Frees EWRAM of MonData Struct
        FreeMonIconPalettes();
        FreeAndDestroyMonIconSprite(&gSprites[gTasks[taskId].data[6]]); //Destroy pokemon sprite
        Debug_DestroyMenu(taskId);
        Debug_ShowMenu(DebugTask_HandleMenuInput_Give, sDebugMenu_ListTemplate_Give);
    }
}
static void DebugAction_Give_PokemonSimple(u8 taskId)
{
    u8 windowId;

    //Mon data struct
    sDebugMonData = AllocZeroed(sizeof(struct DebugMonData));
    ResetMonDataStruct(sDebugMonData);

    //Window initialization
    ClearStdWindowAndFrame(gTasks[taskId].data[1], TRUE);
    RemoveWindow(gTasks[taskId].data[1]);

    HideMapNamePopUpWindow();
    LoadMessageBoxAndBorderGfx();
    windowId = AddWindow(&sDebugNumberDisplayWindowTemplate);
    DrawStdWindowFrame(windowId, FALSE);

    CopyWindowToVram(windowId, 3);

    //Display initial ID
    StringCopy(gStringVar2, gText_DigitIndicator[0]);
    ConvertIntToDecimalStringN(gStringVar3, 1, STR_CONV_MODE_LEADING_ZEROS, 3);
    StringCopy(gStringVar1, gSpeciesNames[1]);
    StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
    StringExpandPlaceholders(gStringVar11, sDebugText_PokemonID);
    AddTextPrinterParameterized(windowId, 1, gStringVar11, 1, 1, 0, NULL);

    //Set task data
    gTasks[taskId].func = DebugAction_Give_Pokemon_SelectId;
    gTasks[taskId].data[2] = windowId;
    gTasks[taskId].data[3] = 1;            //Current ID
    gTasks[taskId].data[4] = 0;            //Digit Selected
    gTasks[taskId].data[5] = 0;            //Complex?
    FreeMonIconPalettes();                 //Free space for new pallete
    LoadMonIconPalette(gTasks[taskId].data[3]); //Loads pallete for current mon
    #ifndef POKEMON_EXPANSION
        gTasks[taskId].data[6] = CreateMonIcon(gTasks[taskId].data[3], SpriteCB_MonIcon, DEBUG_NUMBER_ICON_X, DEBUG_NUMBER_ICON_Y, 4, 0, TRUE); //Create pokemon sprite
    #endif
    #ifdef POKEMON_EXPANSION
        gTasks[taskId].data[6] = CreateMonIcon(gTasks[taskId].data[3], SpriteCB_MonIcon, DEBUG_NUMBER_ICON_X, DEBUG_NUMBER_ICON_Y, 4, 0); //Create pokemon sprite
    #endif
    gSprites[gTasks[taskId].data[6]].oam.priority = 0; //Mon Icon ID
}
static void DebugAction_Give_PokemonComplex(u8 taskId)
{
    u8 windowId;

    //Mon data struct
    sDebugMonData = AllocZeroed(sizeof(struct DebugMonData));
    ResetMonDataStruct(sDebugMonData);

    //Window initialization
    ClearStdWindowAndFrame(gTasks[taskId].data[1], TRUE);
    RemoveWindow(gTasks[taskId].data[1]);

    HideMapNamePopUpWindow();
    LoadMessageBoxAndBorderGfx();
    windowId = AddWindow(&sDebugNumberDisplayWindowTemplate);
    DrawStdWindowFrame(windowId, FALSE);

    CopyWindowToVram(windowId, 3);

    //Display initial ID
    StringCopy(gStringVar2, gText_DigitIndicator[0]);
    ConvertIntToDecimalStringN(gStringVar3, 1, STR_CONV_MODE_LEADING_ZEROS, 4);
    StringCopy(gStringVar1, gSpeciesNames[1]);
    StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
    StringExpandPlaceholders(gStringVar11, sDebugText_PokemonID);
    AddTextPrinterParameterized(windowId, 1, gStringVar11, 1, 1, 0, NULL);


    gTasks[taskId].func = DebugAction_Give_Pokemon_SelectId;
    gTasks[taskId].data[2] = windowId;
    gTasks[taskId].data[3] = 1;            //Current ID
    gTasks[taskId].data[4] = 0;            //Digit Selected
    gTasks[taskId].data[5] = 1;            //Complex?
    FreeMonIconPalettes();                 //Free space for new palletes
    LoadMonIconPalette(gTasks[taskId].data[3]); //Loads pallete for current mon
    #ifndef POKEMON_EXPANSION
        gTasks[taskId].data[6] = CreateMonIcon(gTasks[taskId].data[3], SpriteCB_MonIcon, DEBUG_NUMBER_ICON_X, DEBUG_NUMBER_ICON_Y, 4, 0, TRUE); //Create pokemon sprite
    #endif
    #ifdef POKEMON_EXPANSION
        gTasks[taskId].data[6] = CreateMonIcon(gTasks[taskId].data[3], SpriteCB_MonIcon, DEBUG_NUMBER_ICON_X, DEBUG_NUMBER_ICON_Y, 4, 0); //Create pokemon sprite
    #endif
    gSprites[gTasks[taskId].data[6]].oam.priority = 0; //Mon Icon ID
    gTasks[taskId].data[7] = 0;             //iterator
}

static void DebugAction_Give_Pokemon_SelectId(u8 taskId)
{
    if (gMain.newKeys & DPAD_ANY)
    {
        PlaySE(SE_SELECT);

        if (gMain.newKeys & DPAD_UP)
        {
            gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] > SPECIES_CELEBI && gTasks[taskId].data[3] < SPECIES_TREECKO)
                gTasks[taskId].data[3] = SPECIES_TREECKO;
            if (gTasks[taskId].data[3] >= NUM_SPECIES)
                gTasks[taskId].data[3] = NUM_SPECIES - 1;
        }
        if (gMain.newKeys & DPAD_DOWN)
        {
            gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] < SPECIES_TREECKO && gTasks[taskId].data[3] > SPECIES_CELEBI)
                gTasks[taskId].data[3] = SPECIES_CELEBI;
            if (gTasks[taskId].data[3] < 1)
                gTasks[taskId].data[3] = 1;
        }
        if (gMain.newKeys & DPAD_LEFT)
        {
            if (gTasks[taskId].data[4] > 0)
                gTasks[taskId].data[4] -= 1;
        }
        if (gMain.newKeys & DPAD_RIGHT)
        {
            if (gTasks[taskId].data[4] < DEBUG_NUMBER_DIGITS_ITEMS-1)
                gTasks[taskId].data[4] += 1;
        }

        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
        StringCopy(gStringVar1, gSpeciesNames[gTasks[taskId].data[3]]); //CopyItemName(gTasks[taskId].data[3], gStringVar1);
        StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 4);
        StringExpandPlaceholders(gStringVar11, sDebugText_PokemonID);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar11, 1, 1, 0, NULL);

        FreeAndDestroyMonIconSprite(&gSprites[gTasks[taskId].data[6]]);
        FreeMonIconPalettes(); //Free space for new pallete
        LoadMonIconPalette(gTasks[taskId].data[3]); //Loads pallete for current mon
        #ifndef POKEMON_EXPANSION
            gTasks[taskId].data[6] = CreateMonIcon(gTasks[taskId].data[3], SpriteCB_MonIcon, DEBUG_NUMBER_ICON_X, DEBUG_NUMBER_ICON_Y, 4, 0, TRUE); //Create pokemon sprite
        #endif
        #ifdef POKEMON_EXPANSION
            gTasks[taskId].data[6] = CreateMonIcon(gTasks[taskId].data[3], SpriteCB_MonIcon, DEBUG_NUMBER_ICON_X, DEBUG_NUMBER_ICON_Y, 4, 0); //Create pokemon sprite
        #endif
        gSprites[gTasks[taskId].data[6]].oam.priority = 0;
    }

    if (gMain.newKeys & A_BUTTON)
    {
        sDebugMonData->mon_speciesId = gTasks[taskId].data[3]; //Species ID
        gTasks[taskId].data[3] = 1;
        gTasks[taskId].data[4] = 0;

        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 3);
        StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
        StringExpandPlaceholders(gStringVar11, sDebugText_PokemonLevel);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar11, 1, 1, 0, NULL);

        gTasks[taskId].func = DebugAction_Give_Pokemon_SelectLevel;
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Free(sDebugMonData); //Frees EWRAM of MonData Struct
        FreeMonIconPalettes();
        FreeAndDestroyMonIconSprite(&gSprites[gTasks[taskId].data[6]]); //Destroy pokemon sprite
        Debug_DestroyMenu(taskId);
        Debug_ShowMenu(DebugTask_HandleMenuInput_Give, sDebugMenu_ListTemplate_Give);
    }
}
static void DebugAction_Give_Pokemon_SelectLevel(u8 taskId)
{
    if (gMain.newKeys & DPAD_ANY)
    {
        PlaySE(SE_SELECT);

        if (gMain.newKeys & DPAD_UP)
        {
            gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] > MAX_LEVEL)
                gTasks[taskId].data[3] = MAX_LEVEL;
        }
        if (gMain.newKeys & DPAD_DOWN)
        {
            gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] < MIN_LEVEL)
                gTasks[taskId].data[3] = MIN_LEVEL;
        }
        if (gMain.newKeys & DPAD_LEFT)
        {
            if (gTasks[taskId].data[4] > 0)
                gTasks[taskId].data[4] -= 1;
        }
        if (gMain.newKeys & DPAD_RIGHT)
        {
            if (gTasks[taskId].data[4] < 2)
                gTasks[taskId].data[4] += 1;
        }

        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 3);
        StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
        StringExpandPlaceholders(gStringVar11, sDebugText_PokemonLevel);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar11, 1, 1, 0, NULL);
    }

    if (gMain.newKeys & A_BUTTON)
    {
        FreeMonIconPalettes();
        FreeAndDestroyMonIconSprite(&gSprites[gTasks[taskId].data[6]]); //Destroy pokemon sprite
        if (gTasks[taskId].data[5] == 0)
        {
            PlaySE(MUS_LEVEL_UP);
            ScriptGiveMon(sDebugMonData->mon_speciesId, gTasks[taskId].data[3], ITEM_NONE, 0,0,0);
            Free(sDebugMonData); //Frees EWRAM of MonData Struct
            DebugAction_DestroyExtraWindow(taskId);
        }
        else
        {
            sDebugMonData->mon_level = gTasks[taskId].data[3]; //Level
            gTasks[taskId].data[3] = 0;
            gTasks[taskId].data[4] = 0;

            ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 0);
            StringCopyPadded(gStringVar3, gStringVar3, CHAR_SPACE, 15);
            StringCopyPadded(gStringVar2, sDebugText_FlagUnset, CHAR_SPACE, 15);
            StringExpandPlaceholders(gStringVar11, sDebugText_PokemonShiny);
            AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar11, 1, 1, 0, NULL);

            gTasks[taskId].func = DebugAction_Give_Pokemon_SelectShiny;
        }
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Free(sDebugMonData); //Frees EWRAM of MonData Struct
        FreeMonIconPalettes();
        FreeAndDestroyMonIconSprite(&gSprites[gTasks[taskId].data[6]]); //Destroy pokemon sprite
        Debug_DestroyMenu(taskId);
        Debug_ShowMenu(DebugTask_HandleMenuInput_Give, sDebugMenu_ListTemplate_Give);
    }
}
//If complex
static void DebugAction_Give_Pokemon_SelectShiny(u8 taskId)
{
    if (gMain.newKeys & DPAD_ANY)
    {
        PlaySE(SE_SELECT);

        if (gMain.newKeys & DPAD_UP || gMain.newKeys & DPAD_RIGHT)
        {
            gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] > 1)
                gTasks[taskId].data[3] = 1;
        }
        if (gMain.newKeys & DPAD_DOWN || gMain.newKeys & DPAD_LEFT)
        {
            gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] < 0)
                gTasks[taskId].data[3] = 0;
        }

        if (gTasks[taskId].data[3] == 1)
            StringCopyPadded(gStringVar2, sDebugText_FlagSet, CHAR_SPACE, 15);
        else
            StringCopyPadded(gStringVar2, sDebugText_FlagUnset, CHAR_SPACE, 15);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 0);
        StringCopyPadded(gStringVar3, gStringVar3, CHAR_SPACE, 15);
        StringExpandPlaceholders(gStringVar11, sDebugText_PokemonShiny);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar11, 1, 1, 0, NULL);
    }

    if (gMain.newKeys & A_BUTTON)
    {
        sDebugMonData->isShiny = gTasks[taskId].data[3]; //isShiny
        gTasks[taskId].data[3] = 0;
        gTasks[taskId].data[4] = 0;

        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 2);
        StringCopyPadded(gStringVar3, gStringVar3, CHAR_SPACE, 15);
        StringCopy(gStringVar1, gNatureNamePointers[0]);
        StringExpandPlaceholders(gStringVar11, sDebugText_PokemonNature);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar11, 1, 1, 0, NULL);

        gTasks[taskId].func = DebugAction_Give_Pokemon_SelectNature;
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Free(sDebugMonData); //Frees EWRAM of MonData Struct
        Debug_DestroyMenu(taskId);
        Debug_ShowMenu(DebugTask_HandleMenuInput_Give, sDebugMenu_ListTemplate_Give);
    }
}
static void DebugAction_Give_Pokemon_SelectNature(u8 taskId)
{
    if (gMain.newKeys & DPAD_ANY)
    {
        PlaySE(SE_SELECT);

        if (gMain.newKeys & DPAD_UP || gMain.newKeys & DPAD_RIGHT)
        {
            gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] > NUM_NATURES-1)
                gTasks[taskId].data[3] = NUM_NATURES-1;
        }
        if (gMain.newKeys & DPAD_DOWN || gMain.newKeys & DPAD_LEFT)
        {
            gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] < 0)
                gTasks[taskId].data[3] = 0;
        }

        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 2);
        StringCopyPadded(gStringVar3, gStringVar3, CHAR_SPACE, 15);
        StringCopy(gStringVar1, gNatureNamePointers[gTasks[taskId].data[3]]);
        StringExpandPlaceholders(gStringVar11, sDebugText_PokemonNature);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar11, 1, 1, 0, NULL);
    }

    if (gMain.newKeys & A_BUTTON)
    {
        u8 abilityId;
        sDebugMonData->mon_natureId = gTasks[taskId].data[3]; //NatureId
        gTasks[taskId].data[3] = 0;
        gTasks[taskId].data[4] = 0;

        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 2);
        StringCopyPadded(gStringVar3, gStringVar3, CHAR_SPACE, 15);
        abilityId = GetAbilityBySpecies(sDebugMonData->mon_speciesId, 0);
        StringCopy(gStringVar1, gAbilityNames[abilityId]);
        StringExpandPlaceholders(gStringVar11, sDebugText_PokemonAbility);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar11, 1, 1, 0, NULL);

        gTasks[taskId].func = DebugAction_Give_Pokemon_SelectAbility;
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Free(sDebugMonData); //Frees EWRAM of MonData Struct
        Debug_DestroyMenu(taskId);
        Debug_ShowMenu(DebugTask_HandleMenuInput_Give, sDebugMenu_ListTemplate_Give);
    }
}
static void DebugAction_Give_Pokemon_SelectAbility(u8 taskId)
{
    u8 abilityId;
    u8 abilityCount = 0;

    if (gBaseStats[sDebugMonData->mon_speciesId].abilities[1] != ABILITY_NONE)
        abilityCount++;
#ifdef POKEMON_EXPANSION
    if (gBaseStats[sDebugMonData->mon_speciesId].abilities[2] != ABILITY_NONE)
        abilityCount++;
#endif
    if (gMain.newKeys & DPAD_ANY)
    {
        PlaySE(SE_SELECT);

        if (gMain.newKeys & DPAD_UP || gMain.newKeys & DPAD_RIGHT)
        {
            gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] > abilityCount)
                gTasks[taskId].data[3] = abilityCount;
        }
        if (gMain.newKeys & DPAD_DOWN || gMain.newKeys & DPAD_LEFT)
        {
            gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] < 0)
                gTasks[taskId].data[3] = 0;
        }

        abilityId = GetAbilityBySpecies(sDebugMonData->mon_speciesId, gTasks[taskId].data[3]);
        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 2);
        StringCopyPadded(gStringVar3, gStringVar3, CHAR_SPACE, 15);
        StringCopy(gStringVar1, gAbilityNames[abilityId]);
        StringExpandPlaceholders(gStringVar11, sDebugText_PokemonAbility);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar11, 1, 1, 0, NULL);
    }

    if (gMain.newKeys & A_BUTTON)
    {
        sDebugMonData->mon_abilityNum = gTasks[taskId].data[3]; //AbilityNum
        gTasks[taskId].data[3] = 0;
        gTasks[taskId].data[4] = 0;

        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 2);
        StringCopyPadded(gStringVar3, gStringVar3, CHAR_SPACE, 15);
        StringExpandPlaceholders(gStringVar11, sDebugText_PokemonIV_0);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar11, 1, 1, 0, NULL);

        gTasks[taskId].func = DebugAction_Give_Pokemon_SelectIVs;
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Free(sDebugMonData); //Frees EWRAM of MonData Struct
        Debug_DestroyMenu(taskId);
        Debug_ShowMenu(DebugTask_HandleMenuInput_Give, sDebugMenu_ListTemplate_Give);
    }
}
static void DebugAction_Give_Pokemon_SelectIVs(u8 taskId)
{
    if (gMain.newKeys & DPAD_ANY)
    {
        PlaySE(SE_SELECT);

        if (gMain.newKeys & DPAD_UP)
        {
            gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] > 31)
                gTasks[taskId].data[3] = 31;
        }
        if (gMain.newKeys & DPAD_DOWN)
        {
            gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] < 0)
                gTasks[taskId].data[3] = 0;
        }
        if (gMain.newKeys & DPAD_LEFT)
        {
            if (gTasks[taskId].data[4] > 0)
                gTasks[taskId].data[4] -= 1;
        }
        if (gMain.newKeys & DPAD_RIGHT)
        {
            if (gTasks[taskId].data[4] < 2)
                gTasks[taskId].data[4] += 1;
        }

        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 2);
        StringCopyPadded(gStringVar3, gStringVar3, CHAR_SPACE, 15);
        switch (gTasks[taskId].data[7])
        {
        case 0:
            StringExpandPlaceholders(gStringVar11, sDebugText_PokemonIV_0);
            break;
        case 1:
            StringExpandPlaceholders(gStringVar11, sDebugText_PokemonIV_1);
            break;
        case 2:
            StringExpandPlaceholders(gStringVar11, sDebugText_PokemonIV_2);
            break;
        case 3:
            StringExpandPlaceholders(gStringVar11, sDebugText_PokemonIV_3);
            break;
        case 4:
            StringExpandPlaceholders(gStringVar11, sDebugText_PokemonIV_4);
            break;
        case 5:
            StringExpandPlaceholders(gStringVar11, sDebugText_PokemonIV_5);
            break;
        }
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar11, 1, 1, 0, NULL);
    }

    //If A or B button
    if (gMain.newKeys & A_BUTTON)
    {
        switch (gTasks[taskId].data[7])
        {
        case 0:
            sDebugMonData->mon_iv_hp = gTasks[taskId].data[3];
            break;
        case 1:
            sDebugMonData->mon_iv_atk = gTasks[taskId].data[3];
            break;
        case 2:
            sDebugMonData->mon_iv_def = gTasks[taskId].data[3];
            break;
        case 3:
            sDebugMonData->mon_iv_speed = gTasks[taskId].data[3];
            break;
        case 4:
            sDebugMonData->mon_iv_satk = gTasks[taskId].data[3];
            break;
        case 5:
            sDebugMonData->mon_iv_sdef = gTasks[taskId].data[3];
            break;
        }

        //Check if all IVs set
        if (gTasks[taskId].data[7] != 5)
        {
            gTasks[taskId].data[7] += 1;
            gTasks[taskId].data[3] = 0;
            gTasks[taskId].data[4] = 0;

            StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
            ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 2);
            StringCopyPadded(gStringVar3, gStringVar3, CHAR_SPACE, 15);
            switch (gTasks[taskId].data[7])
            {
            case 0:
                StringExpandPlaceholders(gStringVar11, sDebugText_PokemonIV_0);
                break;
            case 1:
                StringExpandPlaceholders(gStringVar11, sDebugText_PokemonIV_1);
                break;
            case 2:
                StringExpandPlaceholders(gStringVar11, sDebugText_PokemonIV_2);
                break;
            case 3:
                StringExpandPlaceholders(gStringVar11, sDebugText_PokemonIV_3);
                break;
            case 4:
                StringExpandPlaceholders(gStringVar11, sDebugText_PokemonIV_4);
                break;
            case 5:
                StringExpandPlaceholders(gStringVar11, sDebugText_PokemonIV_5);
                break;
            }
            AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar11, 1, 1, 0, NULL);

            gTasks[taskId].func = DebugAction_Give_Pokemon_SelectIVs;
        }
        else
        {
            gTasks[taskId].data[3] = 0;
            gTasks[taskId].data[4] = 0;
            gTasks[taskId].data[7] = 0; //Reset iterator

            StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
            StringCopy(gStringVar1, gMoveNames[gTasks[taskId].data[3]]);
            StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
            ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 3);
            StringExpandPlaceholders(gStringVar11, sDebugText_PokemonMove_0);
            AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar11, 1, 1, 0, NULL);

            gTasks[taskId].func = DebugAction_Give_Pokemon_Move;
        }
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Free(sDebugMonData); //Frees EWRAM of MonData Struct
        Debug_DestroyMenu(taskId);
        Debug_ShowMenu(DebugTask_HandleMenuInput_Give, sDebugMenu_ListTemplate_Give);
    }
}
static void DebugAction_Give_Pokemon_Move(u8 taskId)
{
    if (gMain.newKeys & DPAD_ANY)
    {
        PlaySE(SE_SELECT);

        if (gMain.newKeys & DPAD_UP)
        {
            gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] > MOVES_COUNT)
                gTasks[taskId].data[3] = MOVES_COUNT;
        }
        if (gMain.newKeys & DPAD_DOWN)
        {
            gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] < 0)
                gTasks[taskId].data[3] = 0;
        }
        if (gMain.newKeys & DPAD_LEFT)
        {
            if (gTasks[taskId].data[4] > 0)
                gTasks[taskId].data[4] -= 1;
        }
        if (gMain.newKeys & DPAD_RIGHT)
        {
            if (gTasks[taskId].data[4] < 3)
                gTasks[taskId].data[4] += 1;
        }

        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
        StringCopy(gStringVar1, gMoveNames[gTasks[taskId].data[3]]);
        StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 3);
        switch (gTasks[taskId].data[7])
        {
        case 0:
            StringExpandPlaceholders(gStringVar11, sDebugText_PokemonMove_0);
            break;
        case 1:
            StringExpandPlaceholders(gStringVar11, sDebugText_PokemonMove_1);
            break;
        case 2:
            StringExpandPlaceholders(gStringVar11, sDebugText_PokemonMove_2);
            break;
        case 3:
            StringExpandPlaceholders(gStringVar11, sDebugText_PokemonMove_3);
            break;
        }
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar11, 1, 1, 0, NULL);
    }

    if (gMain.newKeys & A_BUTTON)
    {
        //If MOVE_NONE selected, stop asking for additional moves
        if (gTasks[taskId].data[3] == 0)
            gTasks[taskId].data[7] = 4;

        //Set current value
        switch (gTasks[taskId].data[7])
        {
        case 0:
            sDebugMonData->mon_move_0 = gTasks[taskId].data[3];
            break;
        case 1:
            sDebugMonData->mon_move_1 = gTasks[taskId].data[3];
            break;
        case 2:
            sDebugMonData->mon_move_2 = gTasks[taskId].data[3];
            break;
        case 3:
            sDebugMonData->mon_move_3 = gTasks[taskId].data[3];
            break;
        }

        //If NOT last move or selected MOVE_NONE ask for next move, else make mon
        if (gTasks[taskId].data[7] < 3)
        {
            gTasks[taskId].data[7] += 1;
            gTasks[taskId].data[3] = 0;
            gTasks[taskId].data[4] = 0;

            StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
            StringCopy(gStringVar1, gMoveNames[gTasks[taskId].data[3]]);
            StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
            ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 3);
            switch (gTasks[taskId].data[7])
            {
            case 0:
                StringExpandPlaceholders(gStringVar11, sDebugText_PokemonMove_0);
                break;
            case 1:
                StringExpandPlaceholders(gStringVar11, sDebugText_PokemonMove_1);
                break;
            case 2:
                StringExpandPlaceholders(gStringVar11, sDebugText_PokemonMove_2);
                break;
            case 3:
                StringExpandPlaceholders(gStringVar11, sDebugText_PokemonMove_3);
                break;
            }
            AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar11, 1, 1, 0, NULL);

            gTasks[taskId].func = DebugAction_Give_Pokemon_Move;
        }
        else
        {
            gTasks[taskId].data[3] = 0;
            gTasks[taskId].data[4] = 0;

            PlaySE(MUS_LEVEL_UP);
            gTasks[taskId].func = DebugAction_Give_Pokemon_ComplexCreateMon;
        }
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Free(sDebugMonData); //Frees EWRAM of MonData Struct
        Debug_DestroyMenu(taskId);
        Debug_ShowMenu(DebugTask_HandleMenuInput_Give, sDebugMenu_ListTemplate_Give);
    }
}
static void DebugAction_Give_Pokemon_ComplexCreateMon(u8 taskId) //https://github.com/ghoulslash/pokeemerald/tree/custom-givemon
{
    u16 nationalDexNum;
    int sentToPc;
    struct Pokemon mon;
    u8 i;
    u16 moves[4];
    u8 IVs[6];
    u8 iv_val;
    u16 species     = sDebugMonData->mon_speciesId;
    u8 level        = sDebugMonData->mon_level;
    u8 isShiny      = sDebugMonData->isShiny; //Shiny: no 0, yes 1
    u8 nature       = sDebugMonData->mon_natureId;
    u8 abilityNum   = sDebugMonData->mon_abilityNum;
    moves[0]        = sDebugMonData->mon_move_0;
    moves[1]        = sDebugMonData->mon_move_1;
    moves[2]        = sDebugMonData->mon_move_2;
    moves[3]        = sDebugMonData->mon_move_3;
    IVs[0]          = sDebugMonData->mon_iv_hp;
    IVs[1]          = sDebugMonData->mon_iv_atk;
    IVs[2]          = sDebugMonData->mon_iv_def;
    IVs[3]          = sDebugMonData->mon_iv_speed;
    IVs[4]          = sDebugMonData->mon_iv_satk;
    IVs[5]          = sDebugMonData->mon_iv_sdef;


    //Nature
    if (nature == NUM_NATURES || nature == 0xFF)
        nature = Random() % NUM_NATURES;

    //Shinyness
    if (isShiny == 1)
    {
        u32 personality;
        u32 otid = gSaveBlock2Ptr->playerTrainerId[0]
            | (gSaveBlock2Ptr->playerTrainerId[1] << 8)
            | (gSaveBlock2Ptr->playerTrainerId[2] << 16)
            | (gSaveBlock2Ptr->playerTrainerId[3] << 24);

        do
        {
            personality = Random32();
            personality = ((((Random() % 8) ^ (HIHALF(otid) ^ LOHALF(otid))) ^ LOHALF(personality)) << 16) | LOHALF(personality);
        } while (nature != GetNatureFromPersonality(personality));

        CreateMon(&mon, species, level, 32, 1, personality, OT_ID_PRESET, otid);
    }
    else
        CreateMonWithNature(&mon, species, level, 32, nature);

    //EVs/IVs
    for (i = 0; i < NUM_STATS; i++)
    {
        // ev
        // if (evs[i] != 0xFF && evTotal < 510)
        // {
        //     // only up to 510 evs
        //     if ((evTotal + evs[i]) > 510)
        //         evs[i] = (510 - evTotal);

        //     evTotal += evs[i];
        //     SetMonData(&mon, MON_DATA_HP_EV + i, &evs[i]);
        // }

        // iv
        iv_val = IVs[i];
        if (iv_val != 32 && iv_val != 0xFF)
            SetMonData(&mon, MON_DATA_HP_IV + i, &iv_val);
    }
    CalculateMonStats(&mon);

    //Moves
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] == 0 || moves[i] == 0xFF || moves[i] > MOVES_COUNT)
            continue;

        SetMonMoveSlot(&mon, moves[i], i);
    }

    //Ability
    if (abilityNum == 0xFF || GetAbilityBySpecies(species, abilityNum) == 0)
    {
        do {
            abilityNum = Random() % 3;  // includes hidden abilities
        } while (GetAbilityBySpecies(species, abilityNum) == 0);
    }

    SetMonData(&mon, MON_DATA_ABILITY_NUM, &abilityNum);

    //ball
    // if (ball <= POKEBALL_COUNT)
    //     SetMonData(&mon, MON_DATA_POKEBALL, &ball);

    //item
    // heldItem[0] = item;
    // heldItem[1] = item >> 8;
    // SetMonData(&mon, MON_DATA_HELD_ITEM, heldItem);

    // give player the mon
    //sentToPc = GiveMonToPlayer(&mon);
    SetMonData(&mon, MON_DATA_OT_NAME, gSaveBlock2Ptr->playerName);
    SetMonData(&mon, MON_DATA_OT_GENDER, &gSaveBlock2Ptr->playerGender);
    for (i = 0; i < PARTY_SIZE; i++)
    {
        if (GetMonData(&gPlayerParty[i], MON_DATA_SPECIES, NULL) == SPECIES_NONE)
            break;
    }

    if (i >= PARTY_SIZE)
        sentToPc = SendMonToPC(&mon);
    else
    {
        sentToPc = MON_GIVEN_TO_PARTY;
        CopyMon(&gPlayerParty[i], &mon, sizeof(mon));
        gPlayerPartyCount = i + 1;
    }

    //Pokedex entry
    nationalDexNum = SpeciesToNationalPokedexNum(species);
    switch(sentToPc)
    {
    case MON_GIVEN_TO_PARTY:
    case MON_GIVEN_TO_PC:
        GetSetPokedexFlag(nationalDexNum, FLAG_SET_SEEN);
        GetSetPokedexFlag(nationalDexNum, FLAG_SET_CAUGHT);
        break;
    case MON_CANT_GIVE:
        break;
    }

    Free(sDebugMonData); //Frees EWRAM of MonData Struct
    DebugAction_DestroyExtraWindow(taskId); //return sentToPc;
}

static void DebugAction_Give_MaxMoney(u8 taskId)
{
    AddMoney(&gSaveBlock1Ptr->money, 999999);
    PlaySE(SE_SHOP);
}

static void DebugAction_Give_MaxCoins(u8 taskId)
{
    SetCoins(9999);
    PlaySE(SE_SHOP);
}
static void DebugAction_Give_FillPCBoxes(u8 taskId)
{
    int boxId, boxPosition;
    u32 personality;
    struct BoxPokemon boxMon;

    personality = Random32();

    CreateBoxMon(&boxMon, SPECIES_MAGIKARP, 100, 32, personality, 0, OT_ID_PLAYER_ID, 0);
    for (boxId = 0; boxId < TOTAL_BOXES_COUNT; boxId++)
    {
        for (boxPosition = 0; boxPosition < IN_BOX_COUNT; boxPosition++)
        {
            if (!GetBoxMonData(&gPokemonStoragePtr->boxes[boxId][boxPosition], MON_DATA_SANITY_HAS_SPECIES))
                gPokemonStoragePtr->boxes[boxId][boxPosition] = boxMon;
        }
    }
    Debug_DestroyMenu(taskId);
    Debug_ShowMenu(DebugTask_HandleMenuInput_Give, sDebugMenu_ListTemplate_Give);
}

static void DebugAction_Give_FillPCItemStorage(u8 taskId)
{
    u16 itemId;

    for (itemId = 1; itemId < ITEMS_COUNT; itemId++)
    {
        if (!CheckPCHasItem(itemId, MAX_PC_ITEM_CAPACITY))
            AddPCItem(itemId, MAX_PC_ITEM_CAPACITY);
    }
    Debug_DestroyMenu(taskId);
    Debug_ShowMenu(DebugTask_HandleMenuInput_Give, sDebugMenu_ListTemplate_Give);
}

static void DebugAction_Give_FillItemsPocket(u8 taskId)
{
    u16 itemId;

    for (itemId = 1; itemId < ITEMS_COUNT; itemId++)
    {
        if (ItemId_GetPocket(itemId) == POCKET_ITEMS && CheckBagHasSpace(itemId, MAX_BAG_ITEM_CAPACITY))
            AddBagItem(itemId, MAX_BAG_ITEM_CAPACITY);
    }
    Debug_DestroyMenu(taskId);
    Debug_ShowMenu(DebugTask_HandleMenuInput_Give, sDebugMenu_ListTemplate_Give);
}

static void DebugAction_Give_FillPokeBallsPocket(u8 taskId)
{
    u16 itemId;

    for (itemId = FIRST_BALL; itemId < LAST_BALL; itemId++)
    {
        if (CheckBagHasSpace(itemId, MAX_BAG_ITEM_CAPACITY))
            AddBagItem(itemId, MAX_BAG_ITEM_CAPACITY);
    }
    Debug_DestroyMenu(taskId);
    Debug_ShowMenu(DebugTask_HandleMenuInput_Give, sDebugMenu_ListTemplate_Give);
}

static void DebugAction_Give_FillBerriesPocket(u8 taskId)
{
    u16 itemId;

    for (itemId = FIRST_BERRY_INDEX; itemId < LAST_BERRY_INDEX; itemId++)
    {
        if (CheckBagHasSpace(itemId, MAX_BERRY_CAPACITY))
            AddBagItem(itemId, MAX_BERRY_CAPACITY);
    }
    Debug_DestroyMenu(taskId);
    Debug_ShowMenu(DebugTask_HandleMenuInput_Give, sDebugMenu_ListTemplate_Give);
}

static void DebugAction_Give_FillKeyItemsPocket(u8 taskId)
{
    u16 itemId;

    for (itemId = 1; itemId < ITEMS_COUNT; itemId++)
    {
        if (ItemId_GetPocket(itemId) == POCKET_KEY_ITEMS && CheckBagHasSpace(itemId, 1))
            AddBagItem(itemId, 1);
    }
    Debug_DestroyMenu(taskId);
    Debug_ShowMenu(DebugTask_HandleMenuInput_Give, sDebugMenu_ListTemplate_Give);
}

static void DebugAction_Give_DebugPack(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    LockPlayerFieldControls();
    ScriptContext_SetupScript(DebugScript_DebugPack);
}

// *******************************
// Sound Scripts
static const u8 *const sBGMNames[];
static const u8 *const sSENames[];
static void DebugAction_Sound_SE(u8 taskId)
{
    u8 windowId;

    ClearStdWindowAndFrame(gTasks[taskId].data[1], TRUE);
    RemoveWindow(gTasks[taskId].data[1]);

    HideMapNamePopUpWindow();
    LoadMessageBoxAndBorderGfx();
    windowId = AddWindow(&sDebugNumberDisplayLargeWindowTemplate);
    DrawStdWindowFrame(windowId, FALSE);

    CopyWindowToVram(windowId, 3);

    //Display initial ID
    StringCopy(gStringVar2, gText_DigitIndicator[0]);
    ConvertIntToDecimalStringN(gStringVar3, 1, STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_ITEMS);
    StringCopyPadded(gStringVar1, sSENames[0], CHAR_SPACE, 35);
    StringExpandPlaceholders(gStringVar11, sDebugText_Sound_SE_ID);
    AddTextPrinterParameterized(windowId, 1, gStringVar11, 1, 1, 0, NULL);

    StopMapMusic(); //Stop map music to better hear sounds

    gTasks[taskId].func = DebugAction_Sound_SE_SelectId;
    gTasks[taskId].data[2] = windowId;
    gTasks[taskId].data[3] = 1;            //Current ID
    gTasks[taskId].data[4] = 0;                    //Digit Selected
}
static void DebugAction_Sound_SE_SelectId(u8 taskId)
{
    if (gMain.newKeys & DPAD_ANY)
    {
        if (gMain.newKeys & DPAD_UP)
        {
            gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] > END_SE)
                gTasks[taskId].data[3] = END_SE;
        }
        if (gMain.newKeys & DPAD_DOWN)
        {
            gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] < 1)
                gTasks[taskId].data[3] = 1;
        }
        if (gMain.newKeys & DPAD_LEFT)
        {
            if (gTasks[taskId].data[4] > 0)
                gTasks[taskId].data[4] -= 1;
        }
        if (gMain.newKeys & DPAD_RIGHT)
        {
            if (gTasks[taskId].data[4] < DEBUG_NUMBER_DIGITS_ITEMS-1)
                gTasks[taskId].data[4] += 1;
        }

        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
        StringCopyPadded(gStringVar1, sSENames[gTasks[taskId].data[3]-1], CHAR_SPACE, 35);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_ITEMS);
        StringExpandPlaceholders(gStringVar11, sDebugText_Sound_SE_ID);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar11, 1, 1, 0, NULL);
    }

    if (gMain.newKeys & A_BUTTON)
    {
        m4aSongNumStop(gTasks[taskId].data[5]);
        gTasks[taskId].data[5] = gTasks[taskId].data[3];
        m4aSongNumStart(gTasks[taskId].data[3]);
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        m4aSongNumStop(gTasks[taskId].data[5]);
        Debug_DestroyMenu(taskId);
        Debug_ShowMenu(DebugTask_HandleMenuInput_Sound, sDebugMenu_ListTemplate_Sound);
    }
}

static void DebugAction_Sound_MUS(u8 taskId)
{
    u8 windowId;

    ClearStdWindowAndFrame(gTasks[taskId].data[1], TRUE);
    RemoveWindow(gTasks[taskId].data[1]);

    HideMapNamePopUpWindow();
    LoadMessageBoxAndBorderGfx();
    windowId = AddWindow(&sDebugNumberDisplayLargeWindowTemplate);
    DrawStdWindowFrame(windowId, FALSE);

    CopyWindowToVram(windowId, 3);

    //Display initial ID
    StringCopy(gStringVar2, gText_DigitIndicator[0]);
    ConvertIntToDecimalStringN(gStringVar3, START_MUS, STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_ITEMS);
    StringCopyPadded(gStringVar1, sBGMNames[0], CHAR_SPACE, 35);
    StringExpandPlaceholders(gStringVar11, sDebugText_Sound_MUS_ID);
    AddTextPrinterParameterized(windowId, 1, gStringVar11, 1, 1, 0, NULL);

    StopMapMusic(); //Stop map music to better hear new music

    gTasks[taskId].func = DebugAction_Sound_MUS_SelectId;
    gTasks[taskId].data[2] = windowId;
    gTasks[taskId].data[3] = START_MUS;                 //Current ID
    gTasks[taskId].data[4] = 0;                         //Digit Selected
    gTasks[taskId].data[5] = gTasks[taskId].data[3];    //Last song played (for stopping)
}
static void DebugAction_Sound_MUS_SelectId(u8 taskId)
{
    if (gMain.newKeys & DPAD_ANY)
    {
        if (gMain.newKeys & DPAD_UP)
        {
            gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] > END_MUS)
                gTasks[taskId].data[3] = END_MUS;
        }
        if (gMain.newKeys & DPAD_DOWN)
        {
            gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] < START_MUS)
                gTasks[taskId].data[3] = START_MUS;
        }
        if (gMain.newKeys & DPAD_LEFT)
        {
            if (gTasks[taskId].data[4] > 0)
                gTasks[taskId].data[4] -= 1;
        }
        if (gMain.newKeys & DPAD_RIGHT)
        {
            if (gTasks[taskId].data[4] < DEBUG_NUMBER_DIGITS_ITEMS-1)
                gTasks[taskId].data[4] += 1;
        }

        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
        StringCopyPadded(gStringVar1, sBGMNames[gTasks[taskId].data[3]-START_MUS], CHAR_SPACE, 35);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_ITEMS);
        StringExpandPlaceholders(gStringVar11, sDebugText_Sound_MUS_ID);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar11, 1, 1, 0, NULL);
    }

    if (gMain.newKeys & A_BUTTON)
    {
        m4aSongNumStop(gTasks[taskId].data[5]);
        gTasks[taskId].data[5] = gTasks[taskId].data[3];
        m4aSongNumStart(gTasks[taskId].data[3]);
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        // m4aSongNumStop(gTasks[taskId].data[5]);   //Uncomment if music should stop after leaving menu
        Debug_DestroyMenu(taskId);
        Debug_ShowMenu(DebugTask_HandleMenuInput_Sound, sDebugMenu_ListTemplate_Sound);
    }
}

#define SOUND_LIST_BGM \
    X(MUS_LITTLEROOT_TEST) \
    X(MUS_GSC_ROUTE38) \
    X(MUS_CAUGHT) \
    X(MUS_VICTORY_WILD) \
    X(MUS_VICTORY_GYM_LEADER) \
    X(MUS_VICTORY_LEAGUE) \
    X(MUS_C_COMM_CENTER) \
    X(MUS_GSC_PEWTER) \
    X(MUS_C_VS_LEGEND_BEAST) \
    X(MUS_ROUTE101) \
    X(MUS_ROUTE110) \
    X(MUS_ROUTE120) \
    X(MUS_PETALBURG) \
    X(MUS_OLDALE) \
    X(MUS_GYM) \
    X(MUS_SURF) \
    X(MUS_PETALBURG_WOODS) \
    X(MUS_LEVEL_UP) \
    X(MUS_HEAL) \
    X(MUS_OBTAIN_BADGE) \
    X(MUS_OBTAIN_ITEM) \
    X(MUS_EVOLVED) \
    X(MUS_OBTAIN_TMHM) \
    X(MUS_LILYCOVE_MUSEUM) \
    X(MUS_ROUTE122) \
    X(MUS_OCEANIC_MUSEUM) \
    X(MUS_EVOLUTION_INTRO) \
    X(MUS_EVOLUTION) \
    X(MUS_MOVE_DELETED) \
    X(MUS_ENCOUNTER_GIRL) \
    X(MUS_ENCOUNTER_MALE) \
    X(MUS_ABANDONED_SHIP) \
    X(MUS_FORTREE) \
    X(MUS_BIRCH_LAB) \
    X(MUS_B_TOWER_RS) \
    X(MUS_ENCOUNTER_SWIMMER) \
    X(MUS_CAVE_OF_ORIGIN) \
    X(MUS_OBTAIN_BERRY) \
    X(MUS_AWAKEN_LEGEND) \
    X(MUS_SLOTS_JACKPOT) \
    X(MUS_SLOTS_WIN) \
    X(MUS_TOO_BAD) \
    X(MUS_ROULETTE) \
    X(MUS_LINK_CONTEST_P1) \
    X(MUS_LINK_CONTEST_P2) \
    X(MUS_LINK_CONTEST_P3) \
    X(MUS_LINK_CONTEST_P4) \
    X(MUS_ENCOUNTER_RICH) \
    X(MUS_VERDANTURF) \
    X(MUS_RUSTBORO) \
    X(MUS_POKE_CENTER) \
    X(MUS_ROUTE104) \
    X(MUS_ROUTE119) \
    X(MUS_CYCLING) \
    X(MUS_POKE_MART) \
    X(MUS_LITTLEROOT) \
    X(MUS_MT_CHIMNEY) \
    X(MUS_ENCOUNTER_FEMALE) \
    X(MUS_LILYCOVE) \
    X(MUS_ROUTE111) \
    X(MUS_HELP) \
    X(MUS_UNDERWATER) \
    X(MUS_VICTORY_TRAINER) \
    X(MUS_TITLE) \
    X(MUS_INTRO) \
    X(MUS_ENCOUNTER_MAY) \
    X(MUS_ENCOUNTER_INTENSE) \
    X(MUS_ENCOUNTER_COOL) \
    X(MUS_ROUTE113) \
    X(MUS_ENCOUNTER_AQUA) \
    X(MUS_FOLLOW_ME) \
    X(MUS_ENCOUNTER_BRENDAN) \
    X(MUS_EVER_GRANDE) \
    X(MUS_ENCOUNTER_SUSPICIOUS) \
    X(MUS_VICTORY_AQUA_MAGMA) \
    X(MUS_CABLE_CAR) \
    X(MUS_GAME_CORNER) \
    X(MUS_DEWFORD) \
    X(MUS_SAFARI_ZONE) \
    X(MUS_VICTORY_ROAD) \
    X(MUS_AQUA_MAGMA_HIDEOUT) \
    X(MUS_SAILING) \
    X(MUS_MT_PYRE) \
    X(MUS_SLATEPORT) \
    X(MUS_MT_PYRE_EXTERIOR) \
    X(MUS_SCHOOL) \
    X(MUS_HALL_OF_FAME) \
    X(MUS_FALLARBOR) \
    X(MUS_SEALED_CHAMBER) \
    X(MUS_CONTEST_WINNER) \
    X(MUS_CONTEST) \
    X(MUS_ENCOUNTER_MAGMA) \
    X(MUS_INTRO_BATTLE) \
    X(MUS_WEATHER_KYOGRE) \
    X(MUS_WEATHER_GROUDON) \
    X(MUS_SOOTOPOLIS) \
    X(MUS_CONTEST_RESULTS) \
    X(MUS_HALL_OF_FAME_ROOM) \
    X(MUS_TRICK_HOUSE) \
    X(MUS_ENCOUNTER_TWINS) \
    X(MUS_ENCOUNTER_ELITE_FOUR) \
    X(MUS_ENCOUNTER_HIKER) \
    X(MUS_CONTEST_LOBBY) \
    X(MUS_ENCOUNTER_INTERVIEWER) \
    X(MUS_ENCOUNTER_CHAMPION) \
    X(MUS_CREDITS) \
    X(MUS_END) \
    X(MUS_B_FRONTIER) \
    X(MUS_B_ARENA) \
    X(MUS_OBTAIN_B_POINTS) \
    X(MUS_REGISTER_MATCH_CALL) \
    X(MUS_B_PYRAMID) \
    X(MUS_B_PYRAMID_TOP) \
    X(MUS_B_PALACE) \
    X(MUS_RAYQUAZA_APPEARS) \
    X(MUS_B_TOWER) \
    X(MUS_OBTAIN_SYMBOL) \
    X(MUS_B_DOME) \
    X(MUS_B_PIKE) \
    X(MUS_B_FACTORY) \
    X(MUS_VS_RAYQUAZA) \
    X(MUS_VS_FRONTIER_BRAIN) \
    X(MUS_VS_MEW) \
    X(MUS_B_DOME_LOBBY) \
    X(MUS_VS_WILD) \
    X(MUS_VS_AQUA_MAGMA) \
    X(MUS_VS_TRAINER) \
    X(MUS_VS_GYM_LEADER) \
    X(MUS_VS_CHAMPION) \
    X(MUS_VS_REGI) \
    X(MUS_VS_KYOGRE_GROUDON) \
    X(MUS_VS_RIVAL) \
    X(MUS_VS_ELITE_FOUR) \
    X(MUS_VS_AQUA_MAGMA_LEADER) \
    X(MUS_RG_FOLLOW_ME) \
    X(MUS_RG_GAME_CORNER) \
    X(MUS_RG_ROCKET_HIDEOUT) \
    X(MUS_RG_GYM) \
    X(MUS_RG_JIGGLYPUFF) \
    X(MUS_RG_INTRO_FIGHT) \
    X(MUS_RG_TITLE) \
    X(MUS_RG_CINNABAR) \
    X(MUS_RG_LAVENDER) \
    X(MUS_RG_HEAL) \
    X(MUS_RG_CYCLING) \
    X(MUS_RG_ENCOUNTER_ROCKET) \
    X(MUS_RG_ENCOUNTER_GIRL) \
    X(MUS_RG_ENCOUNTER_BOY) \
    X(MUS_RG_HALL_OF_FAME) \
    X(MUS_RG_VIRIDIAN_FOREST) \
    X(MUS_RG_MT_MOON) \
    X(MUS_RG_POKE_MANSION) \
    X(MUS_RG_CREDITS) \
    X(MUS_RG_ROUTE1) \
    X(MUS_RG_ROUTE24) \
    X(MUS_RG_ROUTE3) \
    X(MUS_RG_ROUTE11) \
    X(MUS_RG_VICTORY_ROAD) \
    X(MUS_RG_VS_GYM_LEADER) \
    X(MUS_RG_VS_TRAINER) \
    X(MUS_RG_VS_WILD) \
    X(MUS_RG_VS_CHAMPION) \
    X(MUS_RG_PALLET) \
    X(MUS_RG_OAK_LAB) \
    X(MUS_RG_OAK) \
    X(MUS_RG_POKE_CENTER) \
    X(MUS_RG_SS_ANNE) \
    X(MUS_RG_SURF) \
    X(MUS_RG_POKE_TOWER) \
    X(MUS_RG_SILPH) \
    X(MUS_RG_FUCHSIA) \
    X(MUS_RG_CELADON) \
    X(MUS_RG_VICTORY_TRAINER) \
    X(MUS_RG_VICTORY_WILD) \
    X(MUS_RG_VICTORY_GYM_LEADER) \
    X(MUS_RG_VERMILLION) \
    X(MUS_RG_PEWTER) \
    X(MUS_RG_ENCOUNTER_RIVAL) \
    X(MUS_RG_RIVAL_EXIT) \
    X(MUS_RG_DEX_RATING) \
    X(MUS_RG_OBTAIN_KEY_ITEM) \
    X(MUS_RG_CAUGHT_INTRO) \
    X(MUS_RG_PHOTO) \
    X(MUS_RG_GAME_FREAK) \
    X(MUS_RG_CAUGHT) \
    X(MUS_RG_NEW_GAME_INSTRUCT) \
    X(MUS_RG_NEW_GAME_INTRO) \
    X(MUS_RG_NEW_GAME_EXIT) \
    X(MUS_RG_POKE_JUMP) \
    X(MUS_RG_UNION_ROOM) \
    X(MUS_RG_NET_CENTER) \
    X(MUS_RG_MYSTERY_GIFT) \
    X(MUS_RG_BERRY_PICK) \
    X(MUS_RG_SEVII_CAVE) \
    X(MUS_RG_TEACHY_TV_SHOW) \
    X(MUS_RG_SEVII_ROUTE) \
    X(MUS_RG_SEVII_DUNGEON) \
    X(MUS_RG_SEVII_123) \
    X(MUS_RG_SEVII_45) \
    X(MUS_RG_SEVII_67) \
    X(MUS_RG_POKE_FLUTE) \
    X(MUS_RG_VS_DEOXYS) \
    X(MUS_RG_VS_MEWTWO) \
    X(MUS_RG_VS_LEGEND) \
    X(MUS_RG_ENCOUNTER_GYM_LEADER) \
    X(MUS_RG_ENCOUNTER_DEOXYS) \
    X(MUS_RG_TRAINER_TOWER) \
    X(MUS_RG_SLOW_PALLET) \
    X(MUS_RG_TEACHY_TV_MENU) \
    X(PH_TRAP_BLEND) \
    X(PH_TRAP_HELD) \
    X(PH_TRAP_SOLO) \
    X(PH_FACE_BLEND) \
    X(PH_FACE_HELD) \
    X(PH_FACE_SOLO) \
    X(PH_CLOTH_BLEND) \
    X(PH_CLOTH_HELD) \
    X(PH_CLOTH_SOLO) \
    X(PH_DRESS_BLEND) \
    X(PH_DRESS_HELD) \
    X(PH_DRESS_SOLO) \
    X(PH_FLEECE_BLEND) \
    X(PH_FLEECE_HELD) \
    X(PH_FLEECE_SOLO) \
    X(PH_KIT_BLEND) \
    X(PH_KIT_HELD) \
    X(PH_KIT_SOLO) \
    X(PH_PRICE_BLEND) \
    X(PH_PRICE_HELD) \
    X(PH_PRICE_SOLO) \
    X(PH_LOT_BLEND) \
    X(PH_LOT_HELD) \
    X(PH_LOT_SOLO) \
    X(PH_GOAT_BLEND) \
    X(PH_GOAT_HELD) \
    X(PH_GOAT_SOLO) \
    X(PH_THOUGHT_BLEND) \
    X(PH_THOUGHT_HELD) \
    X(PH_THOUGHT_SOLO) \
    X(PH_CHOICE_BLEND) \
    X(PH_CHOICE_HELD) \
    X(PH_CHOICE_SOLO) \
    X(PH_MOUTH_BLEND) \
    X(PH_MOUTH_HELD) \
    X(PH_MOUTH_SOLO) \
    X(PH_FOOT_BLEND) \
    X(PH_FOOT_HELD) \
    X(PH_FOOT_SOLO) \
    X(PH_GOOSE_BLEND) \
    X(PH_GOOSE_HELD) \
    X(PH_GOOSE_SOLO) \
    X(PH_STRUT_BLEND) \
    X(PH_STRUT_HELD) \
    X(PH_STRUT_SOLO) \
    X(PH_CURE_BLEND) \
    X(PH_CURE_HELD) \
    X(PH_CURE_SOLO) \
    X(PH_NURSE_BLEND) \
    X(PH_NURSE_HELD) \
    X(PH_NURSE_SOLO) \

#define SOUND_LIST_SE \
    X(SE_USE_ITEM) \
    X(SE_PC_LOGIN) \
    X(SE_PC_OFF) \
    X(SE_PC_ON) \
    X(SE_SELECT) \
    X(SE_WIN_OPEN) \
    X(SE_WALL_HIT) \
    X(SE_DOOR) \
    X(SE_EXIT) \
    X(SE_LEDGE) \
    X(SE_BIKE_BELL) \
    X(SE_NOT_EFFECTIVE) \
    X(SE_EFFECTIVE) \
    X(SE_SUPER_EFFECTIVE) \
    X(SE_BALL_OPEN) \
    X(SE_FAINT) \
    X(SE_FLEE) \
    X(SE_SLIDING_DOOR) \
    X(SE_SHIP) \
    X(SE_BANG) \
    X(SE_PIN) \
    X(SE_BOO) \
    X(SE_BALL) \
    X(SE_CONTEST_PLACE) \
    X(SE_A) \
    X(SE_I) \
    X(SE_U) \
    X(SE_E) \
    X(SE_O) \
    X(SE_N) \
    X(SE_SUCCESS) \
    X(SE_FAILURE) \
    X(SE_EXP) \
    X(SE_BIKE_HOP) \
    X(SE_SWITCH) \
    X(SE_CLICK) \
    X(SE_FU_ZAKU) \
    X(SE_CONTEST_CONDITION_LOSE) \
    X(SE_LAVARIDGE_FALL_WARP) \
    X(SE_ICE_STAIRS) \
    X(SE_ICE_BREAK) \
    X(SE_ICE_CRACK) \
    X(SE_FALL) \
    X(SE_UNLOCK) \
    X(SE_WARP_IN) \
    X(SE_WARP_OUT) \
    X(SE_REPEL) \
    X(SE_ROTATING_GATE) \
    X(SE_TRUCK_MOVE) \
    X(SE_TRUCK_STOP) \
    X(SE_TRUCK_UNLOAD) \
    X(SE_TRUCK_DOOR) \
    X(SE_BERRY_BLENDER) \
    X(SE_CARD) \
    X(SE_SAVE) \
    X(SE_BALL_BOUNCE_1) \
    X(SE_BALL_BOUNCE_2) \
    X(SE_BALL_BOUNCE_3) \
    X(SE_BALL_BOUNCE_4) \
    X(SE_BALL_TRADE) \
    X(SE_BALL_THROW) \
    X(SE_NOTE_C) \
    X(SE_NOTE_D) \
    X(SE_NOTE_E) \
    X(SE_NOTE_F) \
    X(SE_NOTE_G) \
    X(SE_NOTE_A) \
    X(SE_NOTE_B) \
    X(SE_NOTE_C_HIGH) \
    X(SE_PUDDLE) \
    X(SE_BRIDGE_WALK) \
    X(SE_ITEMFINDER) \
    X(SE_DING_DONG) \
    X(SE_BALLOON_RED) \
    X(SE_BALLOON_BLUE) \
    X(SE_BALLOON_YELLOW) \
    X(SE_BREAKABLE_DOOR) \
    X(SE_MUD_BALL) \
    X(SE_FIELD_POISON) \
    X(SE_ESCALATOR) \
    X(SE_THUNDERSTORM) \
    X(SE_THUNDERSTORM_STOP) \
    X(SE_DOWNPOUR) \
    X(SE_DOWNPOUR_STOP) \
    X(SE_RAIN) \
    X(SE_RAIN_STOP) \
    X(SE_THUNDER) \
    X(SE_THUNDER2) \
    X(SE_ELEVATOR) \
    X(SE_LOW_HEALTH) \
    X(SE_EXP_MAX) \
    X(SE_ROULETTE_BALL) \
    X(SE_ROULETTE_BALL2) \
    X(SE_TAILLOW_WING_FLAP) \
    X(SE_SHOP) \
    X(SE_CONTEST_HEART) \
    X(SE_CONTEST_CURTAIN_RISE) \
    X(SE_CONTEST_CURTAIN_FALL) \
    X(SE_CONTEST_ICON_CHANGE) \
    X(SE_CONTEST_ICON_CLEAR) \
    X(SE_CONTEST_MONS_TURN) \
    X(SE_SHINY) \
    X(SE_INTRO_BLAST) \
    X(SE_MUGSHOT) \
    X(SE_APPLAUSE) \
    X(SE_VEND) \
    X(SE_ORB) \
    X(SE_DEX_SCROLL) \
    X(SE_DEX_PAGE) \
    X(SE_POKENAV_ON) \
    X(SE_POKENAV_OFF) \
    X(SE_DEX_SEARCH) \
    X(SE_EGG_HATCH) \
    X(SE_BALL_TRAY_ENTER) \
    X(SE_BALL_TRAY_BALL) \
    X(SE_BALL_TRAY_EXIT) \
    X(SE_GLASS_FLUTE) \
    X(SE_M_THUNDERBOLT) \
    X(SE_M_THUNDERBOLT2) \
    X(SE_M_HARDEN) \
    X(SE_M_NIGHTMARE) \
    X(SE_M_VITAL_THROW) \
    X(SE_M_VITAL_THROW2) \
    X(SE_M_BUBBLE) \
    X(SE_M_BUBBLE2) \
    X(SE_M_BUBBLE3) \
    X(SE_M_RAIN_DANCE) \
    X(SE_M_CUT) \
    X(SE_M_STRING_SHOT) \
    X(SE_M_STRING_SHOT2) \
    X(SE_M_ROCK_THROW) \
    X(SE_M_GUST) \
    X(SE_M_GUST2) \
    X(SE_M_DOUBLE_SLAP) \
    X(SE_M_DOUBLE_TEAM) \
    X(SE_M_RAZOR_WIND) \
    X(SE_M_ICY_WIND) \
    X(SE_M_THUNDER_WAVE) \
    X(SE_M_COMET_PUNCH) \
    X(SE_M_MEGA_KICK) \
    X(SE_M_MEGA_KICK2) \
    X(SE_M_CRABHAMMER) \
    X(SE_M_JUMP_KICK) \
    X(SE_M_FLAME_WHEEL) \
    X(SE_M_FLAME_WHEEL2) \
    X(SE_M_FLAMETHROWER) \
    X(SE_M_FIRE_PUNCH) \
    X(SE_M_TOXIC) \
    X(SE_M_SACRED_FIRE) \
    X(SE_M_SACRED_FIRE2) \
    X(SE_M_EMBER) \
    X(SE_M_TAKE_DOWN) \
    X(SE_M_BLIZZARD) \
    X(SE_M_BLIZZARD2) \
    X(SE_M_SCRATCH) \
    X(SE_M_VICEGRIP) \
    X(SE_M_WING_ATTACK) \
    X(SE_M_FLY) \
    X(SE_M_SAND_ATTACK) \
    X(SE_M_RAZOR_WIND2) \
    X(SE_M_BITE) \
    X(SE_M_HEADBUTT) \
    X(SE_M_SURF) \
    X(SE_M_HYDRO_PUMP) \
    X(SE_M_WHIRLPOOL) \
    X(SE_M_HORN_ATTACK) \
    X(SE_M_TAIL_WHIP) \
    X(SE_M_MIST) \
    X(SE_M_POISON_POWDER) \
    X(SE_M_BIND) \
    X(SE_M_DRAGON_RAGE) \
    X(SE_M_SING) \
    X(SE_M_PERISH_SONG) \
    X(SE_M_PAY_DAY) \
    X(SE_M_DIG) \
    X(SE_M_DIZZY_PUNCH) \
    X(SE_M_SELF_DESTRUCT) \
    X(SE_M_EXPLOSION) \
    X(SE_M_ABSORB_2) \
    X(SE_M_ABSORB) \
    X(SE_M_SCREECH) \
    X(SE_M_BUBBLE_BEAM) \
    X(SE_M_BUBBLE_BEAM2) \
    X(SE_M_SUPERSONIC) \
    X(SE_M_BELLY_DRUM) \
    X(SE_M_METRONOME) \
    X(SE_M_BONEMERANG) \
    X(SE_M_LICK) \
    X(SE_M_PSYBEAM) \
    X(SE_M_FAINT_ATTACK) \
    X(SE_M_SWORDS_DANCE) \
    X(SE_M_LEER) \
    X(SE_M_SWAGGER) \
    X(SE_M_SWAGGER2) \
    X(SE_M_HEAL_BELL) \
    X(SE_M_CONFUSE_RAY) \
    X(SE_M_SNORE) \
    X(SE_M_BRICK_BREAK) \
    X(SE_M_GIGA_DRAIN) \
    X(SE_M_PSYBEAM2) \
    X(SE_M_SOLAR_BEAM) \
    X(SE_M_PETAL_DANCE) \
    X(SE_M_TELEPORT) \
    X(SE_M_MINIMIZE) \
    X(SE_M_SKETCH) \
    X(SE_M_SWIFT) \
    X(SE_M_REFLECT) \
    X(SE_M_BARRIER) \
    X(SE_M_DETECT) \
    X(SE_M_LOCK_ON) \
    X(SE_M_MOONLIGHT) \
    X(SE_M_CHARM) \
    X(SE_M_CHARGE) \
    X(SE_M_STRENGTH) \
    X(SE_M_HYPER_BEAM) \
    X(SE_M_WATERFALL) \
    X(SE_M_REVERSAL) \
    X(SE_M_ACID_ARMOR) \
    X(SE_M_SANDSTORM) \
    X(SE_M_TRI_ATTACK) \
    X(SE_M_TRI_ATTACK2) \
    X(SE_M_ENCORE) \
    X(SE_M_ENCORE2) \
    X(SE_M_BATON_PASS) \
    X(SE_M_MILK_DRINK) \
    X(SE_M_ATTRACT) \
    X(SE_M_ATTRACT2) \
    X(SE_M_MORNING_SUN) \
    X(SE_M_FLATTER) \
    X(SE_M_SAND_TOMB) \
    X(SE_M_GRASSWHISTLE) \
    X(SE_M_SPIT_UP) \
    X(SE_M_DIVE) \
    X(SE_M_EARTHQUAKE) \
    X(SE_M_TWISTER) \
    X(SE_M_SWEET_SCENT) \
    X(SE_M_YAWN) \
    X(SE_M_SKY_UPPERCUT) \
    X(SE_M_STAT_INCREASE) \
    X(SE_M_HEAT_WAVE) \
    X(SE_M_UPROAR) \
    X(SE_M_HAIL) \
    X(SE_M_COSMIC_POWER) \
    X(SE_M_TEETER_DANCE) \
    X(SE_M_STAT_DECREASE) \
    X(SE_M_HAZE) \
    X(SE_M_HYPER_BEAM2) \
    X(SE_RG_DOOR) \
    X(SE_RG_CARD_FLIP) \
    X(SE_RG_CARD_FLIPPING) \
    X(SE_RG_CARD_OPEN) \
    X(SE_RG_BAG_CURSOR) \
    X(SE_RG_BAG_POCKET) \
    X(SE_RG_BALL_CLICK) \
    X(SE_RG_SHOP) \
    X(SE_RG_SS_ANNE_HORN) \
    X(SE_RG_HELP_OPEN) \
    X(SE_RG_HELP_CLOSE) \
    X(SE_RG_HELP_ERROR) \
    X(SE_RG_DEOXYS_MOVE) \
    X(SE_RG_POKE_JUMP_SUCCESS) \
    X(SE_RG_POKE_JUMP_FAILURE) \
    X(SE_PHONE_CALL) \
    X(SE_PHONE_CLICK) \
    X(SE_ARENA_TIMEUP1) \
    X(SE_ARENA_TIMEUP2) \
    X(SE_PIKE_CURTAIN_CLOSE) \
    X(SE_PIKE_CURTAIN_OPEN) \
    X(SE_SUDOWOODO_SHAKE) \

// Create BGM list
#define X(songId) static const u8 sBGMName_##songId[] = _(#songId);
SOUND_LIST_BGM
#undef X

#define X(songId) sBGMName_##songId,
static const u8 *const sBGMNames[] =
{
SOUND_LIST_BGM
};
#undef X

// Create SE list
#define X(songId) static const u8 sSEName_##songId[] = _(#songId);
SOUND_LIST_SE
#undef X

#define X(songId) sSEName_##songId,
static const u8 *const sSENames[] =
{
SOUND_LIST_SE
};
#undef X

static void DebugAction_PresetWarp_LittlerootTown(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    SetWarpDestinationToMapWarp(MAP_GROUP(LITTLEROOT_TOWN), MAP_NUM(LITTLEROOT_TOWN), 2);
    DoWarp();
}
static void DebugAction_PresetWarp_OldaleTown(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    SetWarpDestinationToMapWarp(MAP_GROUP(OLDALE_TOWN), MAP_NUM(OLDALE_TOWN), 2);
    DoWarp();
}
static void DebugAction_PresetWarp_PetalburgCity(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    SetWarpDestinationToMapWarp(MAP_GROUP(PETALBURG_CITY), MAP_NUM(PETALBURG_CITY), 3);
    DoWarp();
}
static void DebugAction_PresetWarp_RustboroCity(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    SetWarpDestinationToMapWarp(MAP_GROUP(RUSTBORO_CITY), MAP_NUM(RUSTBORO_CITY), 3);
    DoWarp();
}
static void DebugAction_PresetWarp_DewfordTown(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    SetWarpDestinationToMapWarp(MAP_GROUP(DEWFORD_TOWN), MAP_NUM(DEWFORD_TOWN), 1);
    DoWarp();
}
static void DebugAction_PresetWarp_SlateportCity(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    SetWarpDestinationToMapWarp(MAP_GROUP(SLATEPORT_CITY), MAP_NUM(SLATEPORT_CITY), 0);
    DoWarp();
}
static void DebugAction_PresetWarp_MauvilleCity(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    SetWarpDestinationToMapWarp(MAP_GROUP(MAUVILLE_CITY), MAP_NUM(MAUVILLE_CITY), 1);
    DoWarp();
}
static void DebugAction_PresetWarp_VerdanturfTown(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    SetWarpDestinationToMapWarp(MAP_GROUP(VERDANTURF_TOWN), MAP_NUM(VERDANTURF_TOWN), 2);
    DoWarp();
}
static void DebugAction_PresetWarp_FallarborTown(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    SetWarpDestinationToMapWarp(MAP_GROUP(FALLARBOR_TOWN), MAP_NUM(FALLARBOR_TOWN), 2);
    DoWarp();
}
static void DebugAction_PresetWarp_LavaridgeTown(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    SetWarpDestinationToMapWarp(MAP_GROUP(LAVARIDGE_TOWN), MAP_NUM(LAVARIDGE_TOWN), 3);
    DoWarp();
}
static void DebugAction_PresetWarp_FortreeCity(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    SetWarpDestinationToMapWarp(MAP_GROUP(FORTREE_CITY), MAP_NUM(FORTREE_CITY), 0);
    DoWarp();
}
static void DebugAction_PresetWarp_LilycoveCity(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    SetWarpDestinationToMapWarp(MAP_GROUP(LILYCOVE_CITY), MAP_NUM(LILYCOVE_CITY), 2);
    DoWarp();
}
static void DebugAction_PresetWarp_MossdeepCity(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    SetWarpDestinationToMapWarp(MAP_GROUP(MOSSDEEP_CITY), MAP_NUM(MOSSDEEP_CITY), 2);
    DoWarp();
}
static void DebugAction_PresetWarp_PacifidlogTown(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    SetWarpDestinationToMapWarp(MAP_GROUP(PACIFIDLOG_TOWN), MAP_NUM(PACIFIDLOG_TOWN), 0);
    DoWarp();
}
static void DebugAction_PresetWarp_SootopolisCity(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    SetWarpDestinationToMapWarp(MAP_GROUP(SOOTOPOLIS_CITY), MAP_NUM(SOOTOPOLIS_CITY), 0);
    DoWarp();
}
static void DebugAction_PresetWarp_EverGrandeCityOuter(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    SetWarpDestinationToMapWarp(MAP_GROUP(EVER_GRANDE_CITY), MAP_NUM(EVER_GRANDE_CITY), 1);
    DoWarp();
}
static void DebugAction_PresetWarp_EverGrandeCityInner(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    SetWarpDestinationToMapWarp(MAP_GROUP(EVER_GRANDE_CITY), MAP_NUM(EVER_GRANDE_CITY), 0);
    DoWarp();
}
static void DebugAction_PresetWarp_PkmnLeagueSidney(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    SetWarpDestination(MAP_GROUP(EVER_GRANDE_CITY_SIDNEYS_ROOM), MAP_NUM(EVER_GRANDE_CITY_SIDNEYS_ROOM), 255, 6, 7);
    DoWarp();
}
static void DebugAction_PresetWarp_PkmnLeaguePhoebe(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    SetWarpDestination(MAP_GROUP(EVER_GRANDE_CITY_PHOEBES_ROOM), MAP_NUM(EVER_GRANDE_CITY_PHOEBES_ROOM), 255, 6, 7);
    DoWarp();
}
static void DebugAction_PresetWarp_PkmnLeagueGlacia(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    SetWarpDestination(MAP_GROUP(EVER_GRANDE_CITY_GLACIAS_ROOM), MAP_NUM(EVER_GRANDE_CITY_GLACIAS_ROOM), 255, 6, 7);
    DoWarp();
}
static void DebugAction_PresetWarp_PkmnLeagueDrake(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    SetWarpDestination(MAP_GROUP(EVER_GRANDE_CITY_DRAKES_ROOM), MAP_NUM(EVER_GRANDE_CITY_DRAKES_ROOM), 255, 6, 7);
    DoWarp();
}
static void DebugAction_PresetWarp_PkmnLeagueChampion(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    SetWarpDestination(MAP_GROUP(EVER_GRANDE_CITY_HALL4), MAP_NUM(EVER_GRANDE_CITY_HALL4), 255, 5, 4);
    DoWarp();
}
static void DebugAction_PresetWarp_BattleFactory(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    SetWarpDestination(MAP_GROUP(BATTLE_FRONTIER_OUTSIDE_WEST), MAP_NUM(BATTLE_FRONTIER_OUTSIDE_WEST), 255, 11, 39);
    DoWarp();
}
static void DebugAction_PresetWarp_BattleArena(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    SetWarpDestination(MAP_GROUP(BATTLE_FRONTIER_OUTSIDE_EAST), MAP_NUM(BATTLE_FRONTIER_OUTSIDE_EAST), 255, 39, 30);
    DoWarp();
}
static void DebugAction_PresetWarp_BattleDome(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    SetWarpDestination(MAP_GROUP(BATTLE_FRONTIER_OUTSIDE_WEST), MAP_NUM(BATTLE_FRONTIER_OUTSIDE_WEST), 255, 19, 18);
    DoWarp();
}
static void DebugAction_PresetWarp_BattlePike(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    SetWarpDestination(MAP_GROUP(BATTLE_FRONTIER_OUTSIDE_WEST), MAP_NUM(BATTLE_FRONTIER_OUTSIDE_WEST), 255, 42, 30);
    DoWarp();
}
static void DebugAction_PresetWarp_BattlePalace(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    SetWarpDestination(MAP_GROUP(BATTLE_FRONTIER_OUTSIDE_EAST), MAP_NUM(BATTLE_FRONTIER_OUTSIDE_EAST), 255, 45, 57);
    DoWarp();
}
static void DebugAction_PresetWarp_BattlePyramid(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    SetWarpDestination(MAP_GROUP(BATTLE_FRONTIER_OUTSIDE_EAST), MAP_NUM(BATTLE_FRONTIER_OUTSIDE_EAST), 255, 58, 15);
    DoWarp();
}
static void DebugAction_PresetWarp_BattleTower(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    SetWarpDestination(MAP_GROUP(BATTLE_FRONTIER_OUTSIDE_EAST), MAP_NUM(BATTLE_FRONTIER_OUTSIDE_EAST), 255, 16, 15);
    DoWarp();
}

static void DebugAction_Badges_AllBadges(u8 taskId)
{
    // Sound effect
    if (FlagGet(FLAG_BADGE08_GET))
        PlaySE(SE_PC_OFF);
    else
        PlaySE(MUS_LEVEL_UP);
    FlagToggle(FLAG_BADGE01_GET);
    FlagToggle(FLAG_BADGE02_GET);
    FlagToggle(FLAG_BADGE03_GET);
    FlagToggle(FLAG_BADGE04_GET);
    FlagToggle(FLAG_BADGE05_GET);
    FlagToggle(FLAG_BADGE06_GET);
    FlagToggle(FLAG_BADGE07_GET);
    FlagToggle(FLAG_BADGE08_GET);
}
static void DebugAction_Badges_First(u8 taskId)
{
    if (FlagGet(FLAG_BADGE01_GET))
    {
        FlagClear(FLAG_BADGE01_GET);
        PlaySE(SE_PC_OFF);
    }
    else
    {
        FlagSet(FLAG_BADGE01_GET);
        PlaySE(MUS_LEVEL_UP);
    }
}
static void DebugAction_Badges_Second(u8 taskId)
{
    if (FlagGet(FLAG_BADGE02_GET))
    {
        FlagClear(FLAG_BADGE02_GET);
        PlaySE(SE_PC_OFF);
    }
    else
    {
        FlagSet(FLAG_BADGE02_GET);
        PlaySE(MUS_LEVEL_UP);
    }
}
static void DebugAction_Badges_Third(u8 taskId)
{
    if (FlagGet(FLAG_BADGE03_GET))
    {
        FlagClear(FLAG_BADGE03_GET);
        PlaySE(SE_PC_OFF);
    }
    else
    {
        FlagSet(FLAG_BADGE03_GET);
        PlaySE(MUS_LEVEL_UP);
    }
}
static void DebugAction_Badges_Fourth(u8 taskId)
{
    if (FlagGet(FLAG_BADGE04_GET))
    {
        FlagClear(FLAG_BADGE04_GET);
        PlaySE(SE_PC_OFF);
    }
    else
    {
        FlagSet(FLAG_BADGE04_GET);
        PlaySE(MUS_LEVEL_UP);
    }
}
static void DebugAction_Badges_Fifth(u8 taskId)
{
    if (FlagGet(FLAG_BADGE05_GET))
    {
        FlagClear(FLAG_BADGE05_GET);
        PlaySE(SE_PC_OFF);
    }
    else
    {
        FlagSet(FLAG_BADGE05_GET);
        PlaySE(MUS_LEVEL_UP);
    }
}
static void DebugAction_Badges_Sixth(u8 taskId)
{
    if (FlagGet(FLAG_BADGE06_GET))
    {
        FlagClear(FLAG_BADGE06_GET);
        PlaySE(SE_PC_OFF);
    }
    else
    {
        FlagSet(FLAG_BADGE06_GET);
        PlaySE(MUS_LEVEL_UP);
    }
}
static void DebugAction_Badges_Seventh(u8 taskId)
{
    if (FlagGet(FLAG_BADGE07_GET))
    {
        FlagClear(FLAG_BADGE07_GET);
        PlaySE(SE_PC_OFF);
    }
    else
    {
        FlagSet(FLAG_BADGE07_GET);
        PlaySE(MUS_LEVEL_UP);
    }
}
static void DebugAction_Badges_Eighth(u8 taskId)
{
    if (FlagGet(FLAG_BADGE08_GET))
    {
        FlagClear(FLAG_BADGE08_GET);
        PlaySE(SE_PC_OFF);
    }
    else
    {
        FlagSet(FLAG_BADGE08_GET);
        PlaySE(MUS_LEVEL_UP);
    }
}
#endif
