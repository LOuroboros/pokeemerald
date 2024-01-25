#include "battle_dynamax.h"
#include "constants/battle.h"
#include "constants/battle_move_effects.h"
#include "constants/battle_script_commands.h"
#include "constants/battle_z_move_effects.h"
#include "constants/hold_effects.h"
#include "constants/moves.h"

const u8 gNotDoneYetDescription[] = _(
    "This move can't be used. Its\n"
    "effect is in development.");

const struct BattleMove gBattleMoves[MOVES_COUNT_DYNAMAX] =
{
    [MOVE_NONE] =
    {
        .name = { .moveName = _("-") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .metronomeBanned = TRUE,
        .mirrorMoveBanned = TRUE,
        .sketchBanned = TRUE,
    },

    [MOVE_POUND] =
    {
        .name = { .moveName = _("Pound") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 35,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresKingsRock = B_UPDATED_MOVE_FLAGS == GEN_4,
    },

    [MOVE_KARATE_CHOP] =
    {
        .name = { .moveName = _("Karate Chop") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .criticalHitStage = 1,
        .pp = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_DOUBLE_SLAP] =
    {
        .name = { .moveName = _("Double Slap") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MULTI_HIT,
        .power = 15,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_COMET_PUNCH] =
    {
        .name = { .moveName = _("Comet Punch") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MULTI_HIT,
        .power = 18,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
    },

    [MOVE_MEGA_PUNCH] =
    {
        .name = { .moveName = _("Mega Punch") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
    },

    [MOVE_PAY_DAY] =
    {
        .name = { .moveName = _("Pay Day") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PAYDAY,
        }),
    },

    [MOVE_FIRE_PUNCH] =
    {
        .name = { .moveName = _("Fire Punch") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 75,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 10,
        }),
    },

    [MOVE_ICE_PUNCH] =
    {
        .name = { .moveName = _("Ice Punch") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 75,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FREEZE_OR_FROSTBITE,
            .chance = 10,
        }),
    },

    [MOVE_THUNDER_PUNCH] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Thunder Punch") },
        #else
            .name = { .moveName = _("ThunderPunch") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 75,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 10,
        }),
    },

    [MOVE_SCRATCH] =
    {
        .name = { .moveName = _("Scratch") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 35,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_VISE_GRIP] =
    {
        .name = { .moveName = _("Vise Grip") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 55,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_GUILLOTINE] =
    {
        .name = { .moveName = _("Guillotine") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_OHKO,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 30,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_RAZOR_WIND] =
    {
        .name = { .moveName = _("Razor Wind") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TWO_TURNS_ATTACK,
        .power = 80,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .criticalHitStage = 1,
        .pp = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .twoTurnMove = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .windMove = B_EXTRAPOLATED_MOVE_FLAGS,
    },

    [MOVE_SWORDS_DANCE] =
    {
        .name = { .moveName = _("Swords Dance") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ATTACK_UP_2,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = B_UPDATED_MOVE_DATA >= GEN_6 ? 20 : 30,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .danceMove = TRUE,
        .snatchAffected = TRUE,
    },

    [MOVE_CUT] =
    {
        .name = { .moveName = _("Cut") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_NORMAL,
        .accuracy = 95,
        .pp = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_GUST] =
    {
        .name = { .moveName = _("Gust") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_GUST,
        .power = 40,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 35,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresKingsRock = (B_UPDATED_MOVE_FLAGS == GEN_4) || (B_UPDATED_MOVE_FLAGS < GEN_3),
        .damagesAirborneDoubleDamage = TRUE,
        .windMove = TRUE,
    },

    [MOVE_WING_ATTACK] =
    {
        .name = { .moveName = _("Wing Attack") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 35,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_WHIRLWIND] =
    {
        .name = { .moveName = _("Whirlwind") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ROAR,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_6 ? 0 : 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = -6,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .windMove = TRUE,
        .ignoresProtect = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .ignoresSubstitute = TRUE,
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_FLY] =
    {
        .name = { .moveName = _("Fly") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SEMI_INVULNERABLE,
        .power = B_UPDATED_MOVE_DATA >= GEN_4 ? 90 : 70,
        .type = TYPE_FLYING,
        .accuracy = 95,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .twoTurnMove = TRUE,
        .makesContact = TRUE,
        .gravityBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_BIND] =
    {
        .name = { .moveName = _("Bind") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 15,
        .type = TYPE_NORMAL,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_5 ? 85 : 75,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresKingsRock = B_UPDATED_MOVE_FLAGS < GEN_3,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_WRAP,
        }),
    },

    [MOVE_SLAM] =
    {
        .name = { .moveName = _("Slam") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_NORMAL,
        .accuracy = 75,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_VINE_WHIP] =
    {
        .name = { .moveName = _("Vine Whip") },
        .description = COMPOUND_STRING("Dummy2 description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .pp = 25,
        #elif B_UPDATED_MOVE_DATA >= GEN_4
            .pp = 15,
        #else
            .pp = 10,
        #endif
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 45 : 35,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_STOMP] =
    {
        .name = { .moveName = _("Stomp") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .minimizeDoubleDamage = TRUE,
        .skyBattleBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 30,
        }),
    },

    [MOVE_DOUBLE_KICK] =
    {
        .name = { .moveName = _("Double Kick") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 30,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .strikeCount = 2,
    },

    [MOVE_MEGA_KICK] =
    {
        .name = { .moveName = _("Mega Kick") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_NORMAL,
        .accuracy = 75,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_JUMP_KICK] =
    {
        .name = { .moveName = _("Jump Kick") },
        .description = COMPOUND_STRING("Dummy2 description."),
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .power = 100,
        #elif B_UPDATED_MOVE_DATA >= GEN_4
            .power = 85,
        #else
            .power = 70,
        #endif
        .effect = EFFECT_RECOIL_IF_MISS,
        .type = TYPE_FIGHTING,
        .accuracy = 95,
        .pp = B_UPDATED_MOVE_DATA >= GEN_5 ? 10 : 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .gravityBanned = TRUE,
    },

    [MOVE_ROLLING_KICK] =
    {
        .name = { .moveName = _("Rolling Kick") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_FIGHTING,
        .accuracy = 85,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresKingsRock = B_UPDATED_MOVE_FLAGS < GEN_3,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 30,
        }),
    },

    [MOVE_SAND_ATTACK] =
    {
        .name = { .moveName = _("Sand Attack") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ACCURACY_DOWN,
        .power = 0,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_EVSN_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_HEADBUTT] =
    {
        .name = { .moveName = _("Headbutt") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 30,
        }),
    },

    [MOVE_HORN_ATTACK] =
    {
        .name = { .moveName = _("Horn Attack") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_FURY_ATTACK] =
    {
        .name = { .moveName = _("Fury Attack") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MULTI_HIT,
        .power = 15,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_HORN_DRILL] =
    {
        .name = { .moveName = _("Horn Drill") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_OHKO,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 30,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_TACKLE] =
    {
        .name = { .moveName = _("Tackle") },
        .description = COMPOUND_STRING("Dummy2 description."),
        #if B_UPDATED_MOVE_DATA >= GEN_7
            .power = 40,
        #elif B_UPDATED_MOVE_DATA >= GEN_5
            .power = 50,
        #else
            .power = 35,
        #endif
        .effect = EFFECT_HIT,
        .type = TYPE_NORMAL,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_5 ? 100 : 95,
        .pp = 35,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_BODY_SLAM] =
    {
        .name = { .moveName = _("Body Slam") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 85,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .minimizeDoubleDamage = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .skyBattleBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 30,
        }),
    },

    [MOVE_WRAP] =
    {
        .name = { .moveName = _("Wrap") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 15,
        .type = TYPE_NORMAL,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_5 ? 90 : 85,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_WRAP,
        }),
    },

    [MOVE_TAKE_DOWN] =
    {
        .name = { .moveName = _("Take Down") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .recoil = 25,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_THRASH] =
    {
        .name = { .moveName = _("Thrash") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_5 ? 120 : 90,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_5 ? 10 : 20,
        .target = MOVE_TARGET_RANDOM,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .instructBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_THRASH,
            .self = TRUE,
        }),
    },

    [MOVE_DOUBLE_EDGE] =
    {
        .name = { .moveName = _("Double-Edge") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .recoil = 33,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_TAIL_WHIP] =
    {
        .name = { .moveName = _("Tail Whip") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DEFENSE_DOWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_POISON_STING] =
    {
        .name = { .moveName = _("Poison Sting") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 15,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 35,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_POISON,
            .chance = 30,
        }),
    },

    [MOVE_TWINEEDLE] =
    {
        .name = { .moveName = _("Twineedle") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 25,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .ignoresKingsRock = (B_UPDATED_MOVE_FLAGS == GEN_3 || B_UPDATED_MOVE_FLAGS == GEN_4),
        .strikeCount = 2,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_POISON,
            .chance = 20,
        }),
    },

    [MOVE_PIN_MISSILE] =
    {
        .name = { .moveName = _("Pin Missile") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MULTI_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 25 : 14,
        .type = TYPE_BUG,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_6 ? 95 : 85,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_LEER] =
    {
        .name = { .moveName = _("Leer") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DEFENSE_DOWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_BITE] =
    {
        .name = { .moveName = _("Bite") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .bitingMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 30,
        }),
    },

    [MOVE_GROWL] =
    {
        .name = { .moveName = _("Growl") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ATTACK_DOWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 40,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .magicCoatAffected = TRUE,
        .soundMove = TRUE,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
    },

    [MOVE_ROAR] =
    {
        .name = { .moveName = _("Roar") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ROAR,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_6 ? 0 : 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = -6,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .ignoresProtect = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .soundMove = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_SING] =
    {
        .name = { .moveName = _("Sing") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SLEEP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 55,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .magicCoatAffected = TRUE,
        .soundMove = TRUE,
    },

    [MOVE_SUPERSONIC] =
    {
        .name = { .moveName = _("Supersonic") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_CONFUSE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 55,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .magicCoatAffected = TRUE,
        .soundMove = TRUE,
    },

    [MOVE_SONIC_BOOM] =
    {
        .name = { .moveName = _("Sonic Boom") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FIXED_DAMAGE_ARG,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .argument = 20,
    },

    [MOVE_DISABLE] =
    {
        .name = { .moveName = _("Disable") },
        .description = COMPOUND_STRING("Dummy2 description."),
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .accuracy = 100,
        #elif B_UPDATED_MOVE_DATA == GEN_4
            .accuracy = 80,
        #else
            .accuracy = 55,
        #endif
        .effect = EFFECT_DISABLE,
        .power = 0,
        .type = TYPE_NORMAL,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .ignoresSubstitute = TRUE,
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
    },

    [MOVE_ACID] =
    {
        .name = { .moveName = _("Acid") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
            .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = B_UPDATED_MOVE_DATA >= GEN_4 ? MOVE_EFFECT_SP_DEF_MINUS_1 : MOVE_EFFECT_DEF_MINUS_1,
            .chance = 10,
        }),
    },

    [MOVE_EMBER] =
    {
        .name = { .moveName = _("Ember") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 10,
        }),
    },

    [MOVE_FLAMETHROWER] =
    {
        .name = { .moveName = _("Flamethrower") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 90 : 95,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 10,
        }),
    },

    [MOVE_MIST] =
    {
        .name = { .moveName = _("Mist") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MIST,
        .power = 0,
        .type = TYPE_ICE,
        .accuracy = 0,
        .pp = 30,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RECOVER_HP },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .snatchAffected = TRUE,
    },

    [MOVE_WATER_GUN] =
    {
        .name = { .moveName = _("Water Gun") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_HYDRO_PUMP] =
    {
        .name = { .moveName = _("Hydro Pump") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 110 : 120,
        .type = TYPE_WATER,
        .accuracy = 80,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_SURF] =
    {
        .name = { .moveName = _("Surf") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 90 : 95,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 15,
        .target = B_UPDATED_MOVE_DATA >= GEN_4 ? MOVE_TARGET_FOES_AND_ALLY : MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .damagesUnderwater = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_ICE_BEAM] =
    {
        .name = { .moveName = _("Ice Beam") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 90 : 95,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            // The following effect is also relevant in battle_pike.c
            // If you cherry-pick this to use something other than the config, make sure to update it there too
            .moveEffect = MOVE_EFFECT_FREEZE_OR_FROSTBITE,
            .chance = 10,
        }),
    },

    [MOVE_BLIZZARD] =
    {
        .name = { .moveName = _("Blizzard") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = B_BLIZZARD_HAIL >= GEN_4 ? EFFECT_BLIZZARD : EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 110 : 120,
        .type = TYPE_ICE,
        .accuracy = 70,
        .pp = 5,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .windMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FREEZE_OR_FROSTBITE,
            .chance = 10,
        }),
    },

    [MOVE_PSYBEAM] =
    {
        .name = { .moveName = _("Psybeam") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_CONFUSION,
            .chance = 10,
        }),
    },

    [MOVE_BUBBLE_BEAM] =
    {
        .name = { .moveName = _("Bubble Beam") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_MINUS_1,
            .chance = 10,
        }),
    },

    [MOVE_AURORA_BEAM] =
    {
        .name = { .moveName = _("Aurora Beam") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ATK_MINUS_1,
            .chance = 10,
        }),
    },

    [MOVE_HYPER_BEAM] =
    {
        .name = { .moveName = _("Hyper Beam") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 150,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresKingsRock = B_UPDATED_MOVE_FLAGS < GEN_3,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_RECHARGE,
            .self = TRUE,
        }),
    },

    [MOVE_PECK] =
    {
        .name = { .moveName = _("Peck") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 35,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 35,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_DRILL_PECK] =
    {
        .name = { .moveName = _("Drill Peck") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_SUBMISSION] =
    {
        .name = { .moveName = _("Submission") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_FIGHTING,
        .accuracy = 80,
        .pp = B_UPDATED_MOVE_DATA >= GEN_6 ? 20 : 25,
        .recoil = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_LOW_KICK] =
    {
        .name = { .moveName = _("Low Kick") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_LOW_KICK,
        .power = 1,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_COUNTER] =
    {
        .name = { .moveName = _("Counter") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_COUNTER,
        .power = 1,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_DEPENDS,
        .priority = -5,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresKingsRock = (B_UPDATED_MOVE_FLAGS == GEN_3 || B_UPDATED_MOVE_FLAGS == GEN_4),
        .meFirstBanned = TRUE,
        .metronomeBanned = B_UPDATED_MOVE_FLAGS >= GEN_2,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_SEISMIC_TOSS] =
    {
        .name = { .moveName = _("Seismic Toss") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_LEVEL_DAMAGE,
        .power = 1,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_STRENGTH] =
    {
        .name = { .moveName = _("Strength") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_ABSORB] =
    {
        .name = { .moveName = _("Absorb") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ABSORB,
        .power = 20,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_4 ? 25 : 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresKingsRock = (B_UPDATED_MOVE_FLAGS == GEN_3 || B_UPDATED_MOVE_FLAGS == GEN_4),
        .healingMove = B_HEAL_BLOCKING >= GEN_6,
    },

    [MOVE_MEGA_DRAIN] =
    {
        .name = { .moveName = _("Mega Drain") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ABSORB,
        .power = 40,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_4 ? 15 : 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresKingsRock = (B_UPDATED_MOVE_FLAGS == GEN_3 || B_UPDATED_MOVE_FLAGS == GEN_4),
        .healingMove = B_HEAL_BLOCKING >= GEN_6,
    },

    [MOVE_LEECH_SEED] =
    {
        .name = { .moveName = _("Leech Seed") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_LEECH_SEED,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .magicCoatAffected = TRUE,
    },

    [MOVE_GROWTH] =
    {
        .name = { .moveName = _("Growth") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = B_GROWTH_STAT_RAISE >= GEN_5 ? EFFECT_GROWTH : EFFECT_SPECIAL_ATTACK_UP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = B_UPDATED_MOVE_DATA >= GEN_6 ? 20 : 40,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .snatchAffected = TRUE,
    },

    [MOVE_RAZOR_LEAF] =
    {
        .name = { .moveName = _("Razor Leaf") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 55,
        .type = TYPE_GRASS,
        .accuracy = 95,
        .criticalHitStage = 1,
        .pp = 25,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .slicingMove = TRUE,
    },

    [MOVE_SOLAR_BEAM] =
    {
        .name = { .moveName = _("Solar Beam") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SOLAR_BEAM,
        .power = 120,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .twoTurnMove = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
    },

    [MOVE_POISON_POWDER] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Poison Powder") },
        #else
            .name = { .moveName = _("PoisonPowder") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_POISON,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 75,
        .pp = 35,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .magicCoatAffected = TRUE,
        .powderMove = TRUE,
    },

    [MOVE_STUN_SPORE] =
    {
        .name = { .moveName = _("Stun Spore") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PARALYZE,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 75,
        .pp = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .magicCoatAffected = TRUE,
        .powderMove = TRUE,
    },

    [MOVE_SLEEP_POWDER] =
    {
        .name = { .moveName = _("Sleep Powder") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SLEEP,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 75,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .magicCoatAffected = TRUE,
        .powderMove = TRUE,
    },

    [MOVE_PETAL_DANCE] =
    {
        .name = { .moveName = _("Petal Dance") },
        .description = COMPOUND_STRING("Dummy2 description."),
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .power = 120,
        #elif B_UPDATED_MOVE_DATA == GEN_4
            .power = 90,
        #else
            .power = 70,
        #endif
        .effect = EFFECT_HIT,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_5 ? 10 : 20,
        .target = MOVE_TARGET_RANDOM,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .makesContact = TRUE,
        .danceMove = TRUE,
        .instructBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_THRASH,
            .self = TRUE,
        }),
    },

    [MOVE_STRING_SHOT] =
    {
        .name = { .moveName = _("String Shot") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = B_UPDATED_MOVE_DATA >= GEN_6 ? EFFECT_SPEED_DOWN_2 : EFFECT_SPEED_DOWN,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 95,
        .pp = 40,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_DRAGON_RAGE] =
    {
        .name = { .moveName = _("Dragon Rage") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FIXED_DAMAGE_ARG,
        .power = 1,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresKingsRock = (B_UPDATED_MOVE_FLAGS == GEN_4) || (B_UPDATED_MOVE_FLAGS < GEN_3),
        .argument = 40,
    },

    [MOVE_FIRE_SPIN] =
    {
        .name = { .moveName = _("Fire Spin") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_5 ? 35 : 15,
        .type = TYPE_FIRE,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_5 ? 85 : 70,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresKingsRock = B_UPDATED_MOVE_FLAGS < GEN_3,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_WRAP,
        }),
    },

    [MOVE_THUNDER_SHOCK] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Thunder Shock") },
        #else
            .name = { .moveName = _("ThunderShock") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 10,
        }),
    },

    [MOVE_THUNDERBOLT] =
    {
        .name = { .moveName = _("Thunderbolt") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 90 : 95,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 10,
        }),
    },

    [MOVE_THUNDER_WAVE] =
    {
        .name = { .moveName = _("Thunder Wave") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PARALYZE,
        .power = 0,
        .type = TYPE_ELECTRIC,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_7 ? 90 : 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_THUNDER] =
    {
        .name = { .moveName = _("Thunder") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_THUNDER,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 110 : 120,
        .type = TYPE_ELECTRIC,
        .accuracy = 70,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .damagesAirborne = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 30,
        }),
    },

    [MOVE_ROCK_THROW] =
    {
        .name = { .moveName = _("Rock Throw") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_ROCK,
        .accuracy = 90,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_EARTHQUAKE] =
    {
        .name = { .moveName = _("Earthquake") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_EARTHQUAKE,
        .power = 100,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .ignoresKingsRock = B_UPDATED_MOVE_FLAGS < GEN_3,
        .damagesUnderground = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_FISSURE] =
    {
        .name = { .moveName = _("Fissure") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_OHKO,
        .power = 1,
        .type = TYPE_GROUND,
        .accuracy = 30,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .damagesUnderground = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_DIG] =
    {
        .name = { .moveName = _("Dig") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SEMI_INVULNERABLE,
        .power = B_UPDATED_MOVE_DATA >= GEN_4 ? 80 : 60,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .twoTurnMove = TRUE,
        .makesContact = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .assistBanned = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_TOXIC] =
    {
        .name = { .moveName = _("Toxic") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TOXIC,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_5 ? 90 : 85,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_CONFUSION] =
    {
        .name = { .moveName = _("Confusion") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_CONFUSION,
            .chance = 10,
        }),
    },

    [MOVE_PSYCHIC] =
    {
        .name = { .moveName = _("Psychic") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_DEF_MINUS_1,
            .chance = 10,
        }),
    },

    [MOVE_HYPNOSIS] =
    {
        .name = { .moveName = _("Hypnosis") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SLEEP,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 60,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_MEDITATE] =
    {
        .name = { .moveName = _("Meditate") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ATTACK_UP,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 40,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .snatchAffected = TRUE,
    },

    [MOVE_AGILITY] =
    {
        .name = { .moveName = _("Agility") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SPEED_UP_2,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 30,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .snatchAffected = TRUE,
    },

    [MOVE_QUICK_ATTACK] =
    {
        .name = { .moveName = _("Quick Attack") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_RAGE] =
    {
        .name = { .moveName = _("Rage") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_RAGE,
        .power = 20,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_TELEPORT] =
    {
        .name = { .moveName = _("Teleport") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TELEPORT,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = -6,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RECOVER_HP },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_NIGHT_SHADE] =
    {
        .name = { .moveName = _("Night Shade") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_LEVEL_DAMAGE,
        .power = 1,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_MIMIC] =
    {
        .name = { .moveName = _("Mimic") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MIMIC,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ACC_UP_1 },
        .ignoresSubstitute = TRUE,
        .mimicBanned = TRUE,
        .metronomeBanned = B_UPDATED_MOVE_FLAGS >= GEN_2,
        .copycatBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .encoreBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_SCREECH] =
    {
        .name = { .moveName = _("Screech") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DEFENSE_DOWN_2,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 40,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_1 },
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .magicCoatAffected = TRUE,
        .soundMove = TRUE,
    },

    [MOVE_DOUBLE_TEAM] =
    {
        .name = { .moveName = _("Double Team") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_EVASION_UP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .snatchAffected = TRUE,
    },

    [MOVE_RECOVER] =
    {
        .name = { .moveName = _("Recover") },
        .description = COMPOUND_STRING("Dummy2 description."),
        #if B_UPDATED_MOVE_DATA >= GEN_9
            .pp = 5,
        #elif B_UPDATED_MOVE_DATA >= GEN_4
            .pp = 10,
        #else
            .pp = 20,
        #endif
        .effect = EFFECT_RESTORE_HP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .healingMove = TRUE,
        .snatchAffected = TRUE,
    },

    [MOVE_HARDEN] =
    {
        .name = { .moveName = _("Harden") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DEFENSE_UP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .snatchAffected = TRUE,
    },

    [MOVE_MINIMIZE] =
    {
        .name = { .moveName = _("Minimize") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MINIMIZE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = B_UPDATED_MOVE_DATA >= GEN_6 ? 10 : 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .snatchAffected = TRUE,
    },

    [MOVE_SMOKESCREEN] =
    {
        .name = { .moveName = _("Smokescreen") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ACCURACY_DOWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_EVSN_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_CONFUSE_RAY] =
    {
        .name = { .moveName = _("Confuse Ray") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_CONFUSE,
        .power = 0,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_WITHDRAW] =
    {
        .name = { .moveName = _("Withdraw") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DEFENSE_UP,
        .power = 0,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 40,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .snatchAffected = TRUE,
    },

    [MOVE_DEFENSE_CURL] =
    {
        .name = { .moveName = _("Defense Curl") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DEFENSE_CURL,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 40,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ACC_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .snatchAffected = TRUE,
    },

    [MOVE_BARRIER] =
    {
        .name = { .moveName = _("Barrier") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DEFENSE_UP_2,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = B_UPDATED_MOVE_DATA >= GEN_6 ? 20 : 30,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .snatchAffected = TRUE,
    },

    [MOVE_LIGHT_SCREEN] =
    {
        .name = { .moveName = _("Light Screen") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_LIGHT_SCREEN,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 30,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .snatchAffected = TRUE,
    },

    [MOVE_HAZE] =
    {
        .name = { .moveName = _("Haze") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HAZE,
        .power = 0,
        .type = TYPE_ICE,
        .accuracy = 0,
        .pp = 30,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RECOVER_HP },
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_REFLECT] =
    {
        .name = { .moveName = _("Reflect") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_REFLECT,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .snatchAffected = TRUE,
    },

    [MOVE_FOCUS_ENERGY] =
    {
        .name = { .moveName = _("Focus Energy") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FOCUS_ENERGY,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ACC_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .snatchAffected = TRUE,
    },

    [MOVE_BIDE] =
    {
        .name = { .moveName = _("Bide") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_BIDE,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_4 ? 0 : 100,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = B_UPDATED_MOVE_DATA >= GEN_4 ? 1 : 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_METRONOME] =
    {
        .name = { .moveName = _("Metronome") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_METRONOME,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .mimicBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .sleepTalkBanned = B_UPDATED_MOVE_FLAGS >= GEN_3,
        .instructBanned = TRUE,
        .encoreBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_MIRROR_MOVE] =
    {
        .name = { .moveName = _("Mirror Move") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MIRROR_MOVE,
        .power = 0,
        .type = TYPE_FLYING,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_2 },
        .mimicBanned = TRUE,
        .metronomeBanned = B_UPDATED_MOVE_FLAGS >= GEN_4,
        .copycatBanned = TRUE,
        .sleepTalkBanned = B_UPDATED_MOVE_FLAGS >= GEN_3,
        .instructBanned = TRUE,
        .encoreBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_SELF_DESTRUCT] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Self-Destruct") },
        #else
            .name = { .moveName = _("SelfDestruct") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_EXPLOSION,
        .power = 200,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .parentalBondBanned = TRUE,
    },

    [MOVE_EGG_BOMB] =
    {
        .name = { .moveName = _("Egg Bomb") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_NORMAL,
        .accuracy = 75,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .ballisticMove = TRUE,
    },

    [MOVE_LICK] =
    {
        .name = { .moveName = _("Lick") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 30 : 20,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 30,
        }),
    },

    [MOVE_SMOG] =
    {
        .name = { .moveName = _("Smog") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 30 : 20,
        .type = TYPE_POISON,
        .accuracy = 70,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_POISON,
            .chance = 40,
        }),
    },

    [MOVE_SLUDGE] =
    {
        .name = { .moveName = _("Sludge") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_POISON,
            .chance = 30,
        }),
    },

    [MOVE_BONE_CLUB] =
    {
        .name = { .moveName = _("Bone Club") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_GROUND,
        .accuracy = 85,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 10,
        }),
    },

    [MOVE_FIRE_BLAST] =
    {
        .name = { .moveName = _("Fire Blast") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 110 : 120,
        .type = TYPE_FIRE,
        .accuracy = 85,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 10,
        }),
    },

    [MOVE_WATERFALL] =
    {
        .name = { .moveName = _("Waterfall") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .sheerForceBoost = TRUE,
            .additionalEffects = ADDITIONAL_EFFECTS({
                .moveEffect = MOVE_EFFECT_FLINCH,
                .chance = 20,
            }),
        #endif
    },

    [MOVE_CLAMP] =
    {
        .name = { .moveName = _("Clamp") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 35,
        .type = TYPE_WATER,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_5 ? 85 : 75,
        .pp = B_UPDATED_MOVE_DATA >= GEN_5 ? 15 : 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresKingsRock = B_UPDATED_MOVE_FLAGS < GEN_3,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_WRAP,
        }),
    },

    [MOVE_SWIFT] =
    {
        .name = { .moveName = _("Swift") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_SKULL_BASH] =
    {
        .name = { .moveName = _("Skull Bash") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SKULL_BASH,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 130 : 100,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_6 ? 10 : 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .twoTurnMove = TRUE,
        .makesContact = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
    },

    [MOVE_SPIKE_CANNON] =
    {
        .name = { .moveName = _("Spike Cannon") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MULTI_HIT,
        .power = 20,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_CONSTRICT] =
    {
        .name = { .moveName = _("Constrict") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 10,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 35,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_MINUS_1,
            .chance = 10,
        }),
    },

    [MOVE_AMNESIA] =
    {
        .name = { .moveName = _("Amnesia") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SPECIAL_DEFENSE_UP_2,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .snatchAffected = TRUE,
    },

    [MOVE_KINESIS] =
    {
        .name = { .moveName = _("Kinesis") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ACCURACY_DOWN,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 80,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_EVSN_UP_1 },
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
    },

    [MOVE_SOFT_BOILED] =
    {
        .name = { .moveName = _("Soft-Boiled") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SOFTBOILED,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_9 ? 5 : 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .healingMove = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .snatchAffected = TRUE,
    },

    [MOVE_HIGH_JUMP_KICK] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("High Jump Kick") },
        #else
            .name = { .moveName = _("HighJumpKick") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .power = 130,
        #elif B_UPDATED_MOVE_DATA == GEN_4
            .power = 100,
        #else
            .power = 85,
        #endif
        .effect = EFFECT_RECOIL_IF_MISS,
        .type = TYPE_FIGHTING,
        .accuracy = 90,
        .pp = B_UPDATED_MOVE_DATA >= GEN_5 ? 10 : 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .gravityBanned = TRUE,
    },

    [MOVE_GLARE] =
    {
        .name = { .moveName = _("Glare") },
        .description = COMPOUND_STRING("Dummy2 description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .accuracy = 100,
        #elif B_UPDATED_MOVE_DATA == GEN_5
            .accuracy = 90,
        #else
            .accuracy = 75,
        #endif
        .effect = EFFECT_PARALYZE,
        .power = 0,
        .type = TYPE_NORMAL,
        .pp = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_DREAM_EATER] =
    {
        .name = { .moveName = _("Dream Eater") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DREAM_EATER,
        .power = 100,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .healingMove = B_HEAL_BLOCKING >= GEN_6,
    },

    [MOVE_POISON_GAS] =
    {
        .name = { .moveName = _("Poison Gas") },
        .description = COMPOUND_STRING("Dummy2 description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .accuracy = 90,
        #elif B_UPDATED_MOVE_DATA >= GEN_5
            .accuracy = 80,
        #else
            .accuracy = 55,
        #endif
        .effect = EFFECT_POISON,
        .power = 0,
        .type = TYPE_POISON,
        .pp = 40,
        .target = B_UPDATED_MOVE_DATA >= GEN_5 ? MOVE_TARGET_BOTH : MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_BARRAGE] =
    {
        .name = { .moveName = _("Barrage") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MULTI_HIT,
        .power = 15,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .ballisticMove = TRUE,
    },

    [MOVE_LEECH_LIFE] =
    {
        .name = { .moveName = _("Leech Life") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ABSORB,
        .power = B_UPDATED_MOVE_DATA >= GEN_7 ? 80 : 20,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_7 ? 10 : 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresKingsRock = (B_UPDATED_MOVE_FLAGS == GEN_3 || B_UPDATED_MOVE_FLAGS == GEN_4),
        .healingMove = B_HEAL_BLOCKING >= GEN_6,
    },

    [MOVE_LOVELY_KISS] =
    {
        .name = { .moveName = _("Lovely Kiss") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SLEEP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 75,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_SKY_ATTACK] =
    {
        .name = { .moveName = _("Sky Attack") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TWO_TURNS_ATTACK,
        .power = 140,
        .type = TYPE_FLYING,
        .accuracy = 90,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .criticalHitStage = B_UPDATED_MOVE_DATA >= GEN_3 ? 1 : 0,
        .twoTurnMove = TRUE,
        .sheerForceBoost = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
    #if B_UPDATED_MOVE_DATA >= GEN_3
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 30,
        }),
    #endif
    },

    [MOVE_TRANSFORM] =
    {
        .name = { .moveName = _("Transform") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TRANSFORM,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RECOVER_HP },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .mimicBanned = TRUE,
        .metronomeBanned = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .copycatBanned = TRUE,
        .instructBanned = TRUE,
        .encoreBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_BUBBLE] =
    {
        .name = { .moveName = _("Bubble") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 40 : 20,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_MINUS_1,
            .chance = 10,
        }),
    },

    [MOVE_DIZZY_PUNCH] =
    {
        .name = { .moveName = _("Dizzy Punch") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_CONFUSION,
            .chance = 20,
        }),
    },

    [MOVE_SPORE] =
    {
        .name = { .moveName = _("Spore") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SLEEP,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .magicCoatAffected = TRUE,
        .powderMove = TRUE,
    },

    [MOVE_FLASH] =
    {
        .name = { .moveName = _("Flash") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ACCURACY_DOWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_4 ? 100 : 70,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_EVSN_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_PSYWAVE] =
    {
        .name = { .moveName = _("Psywave") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PSYWAVE,
        .power = 1,
        .type = TYPE_PSYCHIC,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_6 ? 100 : 80,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_SPLASH] =
    {
        .name = { .moveName = _("Splash") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DO_NOTHING,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 40,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_3 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .gravityBanned = TRUE,
    },

    [MOVE_ACID_ARMOR] =
    {
        .name = { .moveName = _("Acid Armor") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DEFENSE_UP_2,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 0,
        .pp = B_UPDATED_MOVE_DATA >= GEN_6 ? 20 : 40,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_CRABHAMMER] =
    {
        .name = { .moveName = _("Crabhammer") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 100 : 90,
        .type = TYPE_WATER,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_5 ? 90 : 85,
        .criticalHitStage = 1,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_EXPLOSION] =
    {
        .name = { .moveName = _("Explosion") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_EXPLOSION,
        .power = 250,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .parentalBondBanned = TRUE,
    },

    [MOVE_FURY_SWIPES] =
    {
        .name = { .moveName = _("Fury Swipes") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MULTI_HIT,
        .power = 18,
        .type = TYPE_NORMAL,
        .accuracy = 80,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_BONEMERANG] =
    {
        .name = { .moveName = _("Bonemerang") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_GROUND,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .strikeCount = 2,
    },

    [MOVE_REST] =
    {
        .name = { .moveName = _("Rest") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_REST,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = B_UPDATED_MOVE_DATA >= GEN_9 ? 5 : 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .healingMove = TRUE,
    },

    [MOVE_ROCK_SLIDE] =
    {
        .name = { .moveName = _("Rock Slide") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 75,
        .type = TYPE_ROCK,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 30,
        }),
    },

    [MOVE_HYPER_FANG] =
    {
        .name = { .moveName = _("Hyper Fang") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .bitingMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 10,
        }),
    },

    [MOVE_SHARPEN] =
    {
        .name = { .moveName = _("Sharpen") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ATTACK_UP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_1 },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_CONVERSION] =
    {
        .name = { .moveName = _("Conversion") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_CONVERSION,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ALL_STATS_UP_1 },
        .snatchAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_TRI_ATTACK] =
    {
        .name = { .moveName = _("Tri Attack") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_TRI_ATTACK,
            .chance = 20,
        }),
    },

    [MOVE_SUPER_FANG] =
    {
        .name = { .moveName = _("Super Fang") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SUPER_FANG,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresKingsRock = (B_UPDATED_MOVE_FLAGS == GEN_3 || B_UPDATED_MOVE_FLAGS == GEN_4),
    },

    [MOVE_SLASH] =
    {
        .name = { .moveName = _("Slash") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .criticalHitStage = 1,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_SUBSTITUTE] =
    {
        .name = { .moveName = _("Substitute") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SUBSTITUTE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_STRUGGLE] =
    {
        .name = { .moveName = _("Struggle") },
        .description = COMPOUND_STRING("Dummy2 description."),
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .effect = EFFECT_RECOIL_HP_25,
            .accuracy = 0,
            .mirrorMoveBanned = TRUE,
            .additionalEffects = ADDITIONAL_EFFECTS({
                .moveEffect = MOVE_EFFECT_RECOIL_HP_25,
                .self = TRUE,
            }),
        #else
            .effect = EFFECT_HIT,
            .accuracy = 100,
            .recoil = 25,
        #endif
        .power = 50,
        .type = TYPE_NORMAL,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .meFirstBanned = TRUE,
        .mimicBanned = TRUE,
        .metronomeBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .copycatBanned = TRUE,
        .instructBanned = TRUE,
        .encoreBanned = TRUE,
        .assistBanned = TRUE,
        .sketchBanned = TRUE,
    },

    [MOVE_SKETCH] =
    {
        .name = { .moveName = _("Sketch") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SKETCH,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ALL_STATS_UP_1 },
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
        .mimicBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .sleepTalkBanned = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .instructBanned = TRUE,
        .encoreBanned = TRUE,
        .assistBanned = TRUE,
        .sketchBanned = TRUE,
    },

    [MOVE_TRIPLE_KICK] =
    {
        .name = { .moveName = _("Triple Kick") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TRIPLE_KICK,
        .power = 10,
        .type = TYPE_FIGHTING,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .strikeCount = 3,
    },

    [MOVE_THIEF] =
    {
        .name = { .moveName = _("Thief") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 60 : 40,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_6 ? 25 : 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresKingsRock = (B_UPDATED_MOVE_FLAGS == GEN_3 || B_UPDATED_MOVE_FLAGS == GEN_4),
        .meFirstBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_STEAL_ITEM,
        }),
    },

    [MOVE_SPIDER_WEB] =
    {
        .name = { .moveName = _("Spider Web") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MEAN_LOOK,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .ignoresProtect = (B_UPDATED_MOVE_FLAGS >= GEN_6) || (B_UPDATED_MOVE_FLAGS <= GEN_3),
        .magicCoatAffected = TRUE,
    },

    [MOVE_MIND_READER] =
    {
        .name = { .moveName = _("Mind Reader") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_LOCK_ON,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_4 ? 0 : 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
    },

    [MOVE_NIGHTMARE] =
    {
        .name = { .moveName = _("Nightmare") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_NIGHTMARE,
        .power = 0,
        .type = TYPE_GHOST,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_4 ? 100 : 0,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .ignoresProtect = B_UPDATED_MOVE_FLAGS <= GEN_3,
    },

    [MOVE_FLAME_WHEEL] =
    {
        .name = { .moveName = _("Flame Wheel") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .thawsUser = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 10,
        }),
    },

    [MOVE_SNORE] =
    {
        .name = { .moveName = _("Snore") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SNORE,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 50 : 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .sheerForceBoost = TRUE,
        .soundMove = TRUE,
        .metronomeBanned = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 30,
        }),
    },

    [MOVE_CURSE] =
    {
        .name = { .moveName = _("Curse") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_CURSE,
        .power = 0,
        .type = B_UPDATED_MOVE_TYPES >= GEN_5 ? TYPE_GHOST : TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_CURSE },
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_FLAIL] =
    {
        .name = { .moveName = _("Flail") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FLAIL,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_CONVERSION_2] =
    {
        .name = { .moveName = _("Conversion 2") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_CONVERSION_2,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RECOVER_HP },
        .ignoresProtect = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_AEROBLAST] =
    {
        .name = { .moveName = _("Aeroblast") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_FLYING,
        .accuracy = 95,
        .criticalHitStage = 1,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .windMove = TRUE,
    },

    [MOVE_COTTON_SPORE] =
    {
        .name = { .moveName = _("Cotton Spore") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SPEED_DOWN_2,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_5 ? 100 : 85,
        .pp = 40,
        .target = B_UPDATED_MOVE_DATA >= GEN_6 ? MOVE_TARGET_BOTH : MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .magicCoatAffected = TRUE,
        .powderMove = TRUE,
    },

    [MOVE_REVERSAL] =
    {
        .name = { .moveName = _("Reversal") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FLAIL,
        .power = 1,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_SPITE] =
    {
        .name = { .moveName = _("Spite") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SPITE,
        .power = 0,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RECOVER_HP },
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .ignoresSubstitute = TRUE,
    },

    [MOVE_POWDER_SNOW] =
    {
        .name = { .moveName = _("Powder Snow") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 25,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FREEZE_OR_FROSTBITE,
            .chance = 10,
        }),
    },

    [MOVE_PROTECT] =
    {
        .name = { .moveName = _("Protect") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = B_UPDATED_MOVE_DATA >= GEN_5 ? 4 : 3,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .protectionMove = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_MACH_PUNCH] =
    {
        .name = { .moveName = _("Mach Punch") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
    },

    [MOVE_SCARY_FACE] =
    {
        .name = { .moveName = _("Scary Face") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SPEED_DOWN_2,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_5 ? 100 : 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_FEINT_ATTACK] =
    {
        .name = { .moveName = _("Feint Attack") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = B_UPDATED_MOVE_DATA >= GEN_4,
    },

    [MOVE_SWEET_KISS] =
    {
        .name = { .moveName = _("Sweet Kiss") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_CONFUSE,
        .power = 0,
        .type = B_UPDATED_MOVE_TYPES >= GEN_6 ? TYPE_FAIRY : TYPE_NORMAL,
        .accuracy = 75,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_BELLY_DRUM] =
    {
        .name = { .moveName = _("Belly Drum") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_BELLY_DRUM,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RECOVER_HP },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_SLUDGE_BOMB] =
    {
        .name = { .moveName = _("Sludge Bomb") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .ballisticMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_POISON,
            .chance = 30,
        }),
    },

    [MOVE_MUD_SLAP] =
    {
        .name = { .moveName = _("Mud-Slap") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 20,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ACC_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_OCTAZOOKA] =
    {
        .name = { .moveName = _("Octazooka") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_WATER,
        .accuracy = 85,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .ballisticMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ACC_MINUS_1,
            .chance = 50,
        }),
    },

    [MOVE_SPIKES] =
    {
        .name = { .moveName = _("Spikes") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SPIKES,
        .power = 0,
        .type = TYPE_GROUND,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_OPPONENTS_FIELD,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .forcePressure = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_ZAP_CANNON] =
    {
        .name = { .moveName = _("Zap Cannon") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_4 ? 120 : 100,
        .type = TYPE_ELECTRIC,
        .accuracy = 50,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .ballisticMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 100,
        }),
    },

    [MOVE_FORESIGHT] =
    {
        .name = { .moveName = _("Foresight") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FORESIGHT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_5 ? 0 : 100,
        .pp = 40,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_BOOST_CRITS },
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .ignoresSubstitute = TRUE,
    },

    [MOVE_DESTINY_BOND] =
    {
        .name = { .moveName = _("Destiny Bond") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DESTINY_BOND,
        .power = 0,
        .type = TYPE_GHOST,
        .accuracy = 0,
        .pp = 5,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_FOLLOW_ME },
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_PERISH_SONG] =
    {
        .name = { .moveName = _("Perish Song") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PERISH_SONG,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 5,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .ignoresProtect = TRUE,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .mirrorMoveBanned = TRUE,
        .soundMove = TRUE,
    },

    [MOVE_ICY_WIND] =
    {
        .name = { .moveName = _("Icy Wind") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 55,
        .type = TYPE_ICE,
        .accuracy = 95,
        .pp = 15,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .windMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_DETECT] =
    {
        .name = { .moveName = _("Detect") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 5,
        .target = MOVE_TARGET_USER,
        .priority = B_UPDATED_MOVE_DATA >= GEN_5 ? 4 : 3,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_EVSN_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .protectionMove = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_BONE_RUSH] =
    {
        .name = { .moveName = _("Bone Rush") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MULTI_HIT,
        .power = 25,
        .type = TYPE_GROUND,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_5 ? 90 : 80,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_LOCK_ON] =
    {
        .name = { .moveName = _("Lock-On") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_LOCK_ON,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_4 ? 0 : 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
    },

    [MOVE_OUTRAGE] =
    {
        .name = { .moveName = _("Outrage") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_4 ? 120 : 90,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_5 ? 10 : 15,
        .target = MOVE_TARGET_RANDOM,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .instructBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_THRASH,
            .self = TRUE,
        }),
    },

    [MOVE_SANDSTORM] =
    {
        .name = { .moveName = _("Sandstorm") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SANDSTORM,
        .power = 0,
        .type = TYPE_ROCK,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .windMove = TRUE,
    },

    [MOVE_GIGA_DRAIN] =
    {
        .name = { .moveName = _("Giga Drain") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ABSORB,
        .power = B_UPDATED_MOVE_DATA >= GEN_5 ? 75 : 60,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_4 ? 10 : 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresKingsRock = (B_UPDATED_MOVE_FLAGS == GEN_3 || B_UPDATED_MOVE_FLAGS == GEN_4),
        .healingMove = B_HEAL_BLOCKING >= GEN_6,
    },

    [MOVE_ENDURE] =
    {
        .name = { .moveName = _("Endure") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ENDURE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = B_UPDATED_MOVE_DATA >= GEN_5 ? 4 : 3,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .protectionMove = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_CHARM] =
    {
        .name = { .moveName = _("Charm") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ATTACK_DOWN_2,
        .power = 0,
        .type = B_UPDATED_MOVE_TYPES >= GEN_6 ? TYPE_FAIRY : TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_ROLLOUT] =
    {
        .name = { .moveName = _("Rollout") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ROLLOUT,
        .power = 30,
        .type = TYPE_ROCK,
        .accuracy = 90,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .instructBanned = TRUE,
        .parentalBondBanned = TRUE,
    },

    [MOVE_FALSE_SWIPE] =
    {
        .name = { .moveName = _("False Swipe") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FALSE_SWIPE,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 40,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_SWAGGER] =
    {
        .name = { .moveName = _("Swagger") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SWAGGER,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_7 ? 85 : 90,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .magicCoatAffected = TRUE,
    },

    [MOVE_MILK_DRINK] =
    {
        .name = { .moveName = _("Milk Drink") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SOFTBOILED,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = B_UPDATED_MOVE_DATA >= GEN_9 ? 5 : 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .healingMove = TRUE,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_SPARK] =
    {
        .name = { .moveName = _("Spark") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 30,
        }),
    },

    [MOVE_FURY_CUTTER] =
    {
        .name = { .moveName = _("Fury Cutter") },
        .description = COMPOUND_STRING("Dummy2 description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 40,
        #elif B_UPDATED_MOVE_DATA >= GEN_5
            .power = 20,
        #else
            .power = 10,
        #endif
        .effect = EFFECT_FURY_CUTTER,
        .type = TYPE_BUG,
        .accuracy = 95,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_STEEL_WING] =
    {
        .name = { .moveName = _("Steel Wing") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_STEEL,
        .accuracy = 90,
        .pp = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_DEF_PLUS_1,
            .self = TRUE,
            .chance = 10,
        }),
    },

    [MOVE_MEAN_LOOK] =
    {
        .name = { .moveName = _("Mean Look") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MEAN_LOOK,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .ignoresProtect = (B_UPDATED_MOVE_FLAGS >= GEN_6) || (B_UPDATED_MOVE_FLAGS <= GEN_3),
        .magicCoatAffected = TRUE,
    },

    [MOVE_ATTRACT] =
    {
        .name = { .moveName = _("Attract") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ATTRACT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .magicCoatAffected = TRUE,
        .ignoresSubstitute = TRUE,
    },

    [MOVE_SLEEP_TALK] =
    {
        .name = { .moveName = _("Sleep Talk") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SLEEP_TALK,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_BOOST_CRITS },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .mimicBanned = TRUE,
        .encoreBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_HEAL_BELL] =
    {
        .name = { .moveName = _("Heal Bell") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HEAL_BELL,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 5,
        .target = MOVE_TARGET_USER | MOVE_TARGET_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RECOVER_HP },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
        .soundMove = B_UPDATED_MOVE_FLAGS != GEN_5,
    },

    [MOVE_RETURN] =
    {
        .name = { .moveName = _("Return") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_RETURN,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_PRESENT] =
    {
        .name = { .moveName = _("Present") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PRESENT,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .ignoresKingsRock = (B_UPDATED_MOVE_FLAGS == GEN_3 || B_UPDATED_MOVE_FLAGS == GEN_4),
    },

    [MOVE_FRUSTRATION] =
    {
        .name = { .moveName = _("Frustration") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FRUSTRATION,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_SAFEGUARD] =
    {
        .name = { .moveName = _("Safeguard") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SAFEGUARD,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 25,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_PAIN_SPLIT] =
    {
        .name = { .moveName = _("Pain Split") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PAIN_SPLIT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
    },

    [MOVE_SACRED_FIRE] =
    {
        .name = { .moveName = _("Sacred Fire") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_FIRE,
        .accuracy = 95,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .thawsUser = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 50,
        }),
    },

    [MOVE_MAGNITUDE] =
    {
        .name = { .moveName = _("Magnitude") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAGNITUDE,
        .power = 1,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .damagesUnderground = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_DYNAMIC_PUNCH] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Dynamic Punch") },
        #else
            .name = { .moveName = _("DynamicPunch") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_FIGHTING,
        .accuracy = 50,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_CONFUSION,
            .chance = 100,
        }),
    },

    [MOVE_MEGAHORN] =
    {
        .name = { .moveName = _("Megahorn") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_BUG,
        .accuracy = 85,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_DRAGON_BREATH] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Dragon Breath") },
        #else
            .name = { .moveName = _("DragonBreath") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .ignoresKingsRock = B_UPDATED_MOVE_FLAGS < GEN_3,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 30,
        }),
    },

    [MOVE_BATON_PASS] =
    {
        .name = { .moveName = _("Baton Pass") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_BATON_PASS,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 40,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_ENCORE] =
    {
        .name = { .moveName = _("Encore") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ENCORE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .encoreBanned = TRUE,
        .ignoresSubstitute = TRUE,
    },

    [MOVE_PURSUIT] =
    {
        .name = { .moveName = _("Pursuit") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PURSUIT,
        .power = 40,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresKingsRock = (B_UPDATED_MOVE_FLAGS == GEN_3 || B_UPDATED_MOVE_FLAGS == GEN_4),
    },

    [MOVE_RAPID_SPIN] =
    {
        .name = { .moveName = _("Rapid Spin") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_8 ? 50 : 20,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 40,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_RAPIDSPIN,
            .self = TRUE,
        }
        #if B_SPEED_BUFFING_RAPID_SPIN >= GEN_8
            ,{
                .moveEffect = MOVE_EFFECT_SPD_PLUS_1,
                .self = TRUE,
                .chance = 100,
            }
        #endif
        ),
    },

    [MOVE_SWEET_SCENT] =
    {
        .name = { .moveName = _("Sweet Scent") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = B_UPDATED_MOVE_DATA >= GEN_6 ? EFFECT_EVASION_DOWN_2 : EFFECT_EVASION_DOWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ACC_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_IRON_TAIL] =
    {
        .name = { .moveName = _("Iron Tail") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_STEEL,
        .accuracy = 75,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_DEF_MINUS_1,
            .chance = 30,
        }),
    },

    [MOVE_METAL_CLAW] =
    {
        .name = { .moveName = _("Metal Claw") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_STEEL,
        .accuracy = 95,
        .pp = 35,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ATK_PLUS_1,
            .self = TRUE,
            .chance = 10,
        }),
    },

    [MOVE_VITAL_THROW] =
    {
        .name = { .moveName = _("Vital Throw") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = -1,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_MORNING_SUN] =
    {
        .name = { .moveName = _("Morning Sun") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MORNING_SUN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 5,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .healingMove = TRUE,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_SYNTHESIS] =
    {
        .name = { .moveName = _("Synthesis") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SYNTHESIS,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 5,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .healingMove = TRUE,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_MOONLIGHT] =
    {
        .name = { .moveName = _("Moonlight") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MOONLIGHT,
        .power = 0,
        .type = B_UPDATED_MOVE_TYPES >= GEN_6 ? TYPE_FAIRY : TYPE_NORMAL,
        .accuracy = 0,
        .pp = 5,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .healingMove = TRUE,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_HIDDEN_POWER] =
    {
        .name = { .moveName = _("Hidden Power") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .power = B_HIDDEN_POWER_DMG >= GEN_6 ? 60 : 1,
        .effect = EFFECT_HIDDEN_POWER,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_CROSS_CHOP] =
    {
        .name = { .moveName = _("Cross Chop") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_FIGHTING,
        .accuracy = 80,
        .criticalHitStage = 1,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_TWISTER] =
    {
        .name = { .moveName = _("Twister") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .damagesAirborneDoubleDamage = TRUE,
        .windMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 20,
        }),
    },

    [MOVE_RAIN_DANCE] =
    {
        .name = { .moveName = _("Rain Dance") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_RAIN_DANCE,
        .power = 0,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 5,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_SUNNY_DAY] =
    {
        .name = { .moveName = _("Sunny Day") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SUNNY_DAY,
        .power = 0,
        .type = TYPE_FIRE,
        .accuracy = 0,
        .pp = 5,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_CRUNCH] =
    {
        .name = { .moveName = _("Crunch") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .bitingMove = TRUE,
            .additionalEffects = ADDITIONAL_EFFECTS({
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .moveEffect = MOVE_EFFECT_DEF_MINUS_1,
        #else
            .moveEffect = MOVE_EFFECT_SP_DEF_MINUS_1,
        #endif
            .chance = 20,
        }),
    },

    [MOVE_MIRROR_COAT] =
    {
        .name = { .moveName = _("Mirror Coat") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MIRROR_COAT,
        .power = 1,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_DEPENDS,
        .priority = -5,
        .category = BATTLE_CATEGORY_SPECIAL,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS >= GEN_4,
        .meFirstBanned = TRUE,
        .metronomeBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_PSYCH_UP] =
    {
        .name = { .moveName = _("Psych Up") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PSYCH_UP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RECOVER_HP },
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
        .snatchAffected = B_UPDATED_MOVE_FLAGS < GEN_5,
    },

    [MOVE_EXTREME_SPEED] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Extreme Speed") },
        #else
            .name = { .moveName = _("ExtremeSpeed") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = B_UPDATED_MOVE_DATA >= GEN_5 ? 2 : 1,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_ANCIENT_POWER] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Ancient Power") },
        #else
            .name = { .moveName = _("AncientPower") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_ROCK,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .makesContact = B_UPDATED_MOVE_DATA < GEN_4,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ALL_STATS_UP,
            .self = TRUE,
            .chance = 10,
        }),
    },

    [MOVE_SHADOW_BALL] =
    {
        .name = { .moveName = _("Shadow Ball") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .ballisticMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_DEF_MINUS_1,
            .chance = 20,
        }),
    },

    [MOVE_FUTURE_SIGHT] =
    {
        .name = { .moveName = _("Future Sight") },
        .description = COMPOUND_STRING("Dummy2 description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 120,
        #elif B_UPDATED_MOVE_DATA >= GEN_5
            .power = 100,
        #else
            .power = 80,
        #endif
        .effect = EFFECT_FUTURE_SIGHT,
        .type = TYPE_PSYCHIC,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_5 ? 100 : 90,
        .pp = B_UPDATED_MOVE_DATA >= GEN_5 ? 10 : 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_ROCK_SMASH] =
    {
        .name = { .moveName = _("Rock Smash") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_4 ? 40 : 20,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_DEF_MINUS_1,
            .chance = 50,
        }),
    },

    [MOVE_WHIRLPOOL] =
    {
        .name = { .moveName = _("Whirlpool") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_5 ? 35 : 15,
        .type = TYPE_WATER,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_5 ? 85 : 70,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .damagesUnderwater = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_WRAP,
        }),
    },

    [MOVE_BEAT_UP] =
    {
        .name = { .moveName = _("Beat Up") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_BEAT_UP,
        .power = B_UPDATED_MOVE_DATA >= GEN_5 ? 1 : 10,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_FAKE_OUT] =
    {
        .name = { .moveName = _("Fake Out") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .priority = B_UPDATED_MOVE_DATA >= GEN_5 ? 3 : 1,
        .makesContact = B_UPDATED_MOVE_DATA >= GEN_4,
        .effect = EFFECT_FAKE_OUT,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 100,
        }),
    },

    [MOVE_UPROAR] =
    {
        .name = { .moveName = _("Uproar") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_UPROAR,
        .power = B_UPDATED_MOVE_DATA >= GEN_5 ? 90 : 50,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_RANDOM,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .soundMove = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_UPROAR,
            .self = TRUE,
        }),
    },

    [MOVE_STOCKPILE] =
    {
        .name = { .moveName = _("Stockpile") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_STOCKPILE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = B_UPDATED_MOVE_DATA >= GEN_4 ? 20 : 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RECOVER_HP },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_SPIT_UP] =
    {
        .name = { .moveName = _("Spit Up") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SPIT_UP,
        .power = B_UPDATED_MOVE_DATA >= GEN_4 ? 1 : 100,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_SWALLOW] =
    {
        .name = { .moveName = _("Swallow") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SWALLOW,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .healingMove = TRUE,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_HEAT_WAVE] =
    {
        .name = { .moveName = _("Heat Wave") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 95 : 100,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .windMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 10,
        }),
    },

    [MOVE_HAIL] =
    {
        .name = { .moveName = _("Hail") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HAIL,
        .power = 0,
        .type = TYPE_ICE,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_TORMENT] =
    {
        .name = { .moveName = _("Torment") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TORMENT,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
    },

    [MOVE_FLATTER] =
    {
        .name = { .moveName = _("Flatter") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FLATTER,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_WILL_O_WISP] =
    {
        .name = { .moveName = _("Will-o-Wisp") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_WILL_O_WISP,
        .power = 0,
        .type = TYPE_FIRE,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_6 ? 85 : 75,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_MEMENTO] =
    {
        .name = { .moveName = _("Memento") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MEMENTO,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESTORE_REPLACEMENT_HP },
    },

    [MOVE_FACADE] =
    {
        .name = { .moveName = _("Facade") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FACADE,
        .power = 70,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_FOCUS_PUNCH] =
    {
        .name = { .moveName = _("Focus Punch") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FOCUS_PUNCH,
        .power = 150,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = -3,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .mirrorMoveBanned = TRUE,
        .punchingMove = TRUE,
        .meFirstBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .instructBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_SMELLING_SALTS] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Smelling Salts") },
        #else
            .name = { .moveName = _("SmellngSalts") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DOUBLE_POWER_ON_ARG_STATUS,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 70 : 60,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = STATUS1_PARALYSIS,
        .makesContact = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_REMOVE_STATUS,
        }),
    },

    [MOVE_FOLLOW_ME] =
    {
        .name = { .moveName = _("Follow Me") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FOLLOW_ME,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = B_UPDATED_MOVE_DATA >= GEN_6 ? 2 : 3,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_NATURE_POWER] =
    {
        .name = { .moveName = _("Nature Power") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_NATURE_POWER,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .metronomeBanned = B_UPDATED_MOVE_FLAGS >= GEN_4,
        .copycatBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .encoreBanned = TRUE,
        .assistBanned = TRUE,
        .mimicBanned = TRUE,
    },

    [MOVE_CHARGE] =
    {
        .name = { .moveName = _("Charge") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_CHARGE,
        .power = 0,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_TAUNT] =
    {
        .name = { .moveName = _("Taunt") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TAUNT,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_1 },
        .ignoresSubstitute = TRUE,
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
    },

    [MOVE_HELPING_HAND] =
    {
        .name = { .moveName = _("Helping Hand") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HELPING_HAND,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .target = B_UPDATED_MOVE_DATA >= GEN_4 ? MOVE_TARGET_ALLY : MOVE_TARGET_USER,
        .priority = 5,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_TRICK] =
    {
        .name = { .moveName = _("Trick") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TRICK,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_2 },
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_ROLE_PLAY] =
    {
        .name = { .moveName = _("Role Play") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ROLE_PLAY,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_WISH] =
    {
        .name = { .moveName = _("Wish") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_WISH,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .healingMove = TRUE,
        .snatchAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_ASSIST] =
    {
        .name = { .moveName = _("Assist") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ASSIST,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = B_UPDATED_MOVE_FLAGS >= GEN_4,
        .copycatBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .encoreBanned = TRUE,
        .assistBanned = TRUE,
        .mimicBanned = TRUE,
    },

    [MOVE_INGRAIN] =
    {
        .name = { .moveName = _("Ingrain") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_INGRAIN,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_SUPERPOWER] =
    {
        .name = { .moveName = _("Superpower") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ATK_DEF_DOWN,
            .self = TRUE,
        }),
    },

    [MOVE_MAGIC_COAT] =
    {
        .name = { .moveName = _("Magic Coat") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAGIC_COAT,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 4,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_2 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_RECYCLE] =
    {
        .name = { .moveName = _("Recycle") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_RECYCLE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_2 },
        .snatchAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_REVENGE] =
    {
        .name = { .moveName = _("Revenge") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_REVENGE,
        .power = 60,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = -4,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_BRICK_BREAK] =
    {
        .name = { .moveName = _("Brick Break") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_BRICK_BREAK,
        .power = 75,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_YAWN] =
    {
        .name = { .moveName = _("Yawn") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_YAWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_KNOCK_OFF] =
    {
        .name = { .moveName = _("Knock Off") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_KNOCK_OFF,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 65 : 20,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_KNOCK_OFF,
        }),
    },

    [MOVE_ENDEAVOR] =
    {
        .name = { .moveName = _("Endeavor") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ENDEAVOR,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .parentalBondBanned = TRUE,
    },

    [MOVE_ERUPTION] =
    {
        .name = { .moveName = _("Eruption") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ERUPTION,
        .power = 150,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_SKILL_SWAP] =
    {
        .name = { .moveName = _("Skill Swap") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SKILL_SWAP,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresSubstitute = TRUE,
    },

    [MOVE_IMPRISON] =
    {
        .name = { .moveName = _("Imprison") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_IMPRISON,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_2 },
        .snatchAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
        .forcePressure = TRUE,
    },

    [MOVE_REFRESH] =
    {
        .name = { .moveName = _("Refresh") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_REFRESH,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RECOVER_HP },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_GRUDGE] =
    {
        .name = { .moveName = _("Grudge") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_GRUDGE,
        .power = 0,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_FOLLOW_ME },
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_SNATCH] =
    {
        .name = { .moveName = _("Snatch") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SNATCH,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 4,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_2 },
        .ignoresSubstitute = TRUE,
        .forcePressure = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_SECRET_POWER] =
    {
        .name = { .moveName = _("Secret Power") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SECRET_POWER,
            .chance = 30,
        }),
    },

    [MOVE_DIVE] =
    {
        .name = { .moveName = _("Dive") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SEMI_INVULNERABLE,
        .power = B_UPDATED_MOVE_DATA >= GEN_4 ? 80 : 60,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .twoTurnMove = TRUE,
        .makesContact = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .assistBanned = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_ARM_THRUST] =
    {
        .name = { .moveName = _("Arm Thrust") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MULTI_HIT,
        .power = 15,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_CAMOUFLAGE] =
    {
        .name = { .moveName = _("Camouflage") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_CAMOUFLAGE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_EVSN_UP_1 },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_TAIL_GLOW] =
    {
        .name = { .moveName = _("Tail Glow") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = B_UPDATED_MOVE_DATA >= GEN_5 ? EFFECT_SPECIAL_ATTACK_UP_3 : EFFECT_SPECIAL_ATTACK_UP_2,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_LUSTER_PURGE] =
    {
        .name = { .moveName = _("Luster Purge") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = (B_UPDATED_MOVE_DATA >= GEN_9) ? 95 : 70,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_DEF_MINUS_1,
            .chance = 50,
        }),
    },

    [MOVE_MIST_BALL] =
    {
        .name = { .moveName = _("Mist Ball") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = (B_UPDATED_MOVE_DATA >= GEN_9) ? 95 : 70,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .ballisticMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_ATK_MINUS_1,
            .chance = 50,
        }),
    },

    [MOVE_FEATHER_DANCE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Feather Dance") },
        #else
            .name = { .moveName = _("FeatherDance") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ATTACK_DOWN_2,
        .power = 0,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .magicCoatAffected = TRUE,
        .danceMove = TRUE,
    },

    [MOVE_TEETER_DANCE] =
    {
        .name = { .moveName = _("Teeter Dance") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TEETER_DANCE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .danceMove = TRUE,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_4,
    },

    [MOVE_BLAZE_KICK] =
    {
        .name = { .moveName = _("Blaze Kick") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 85,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .criticalHitStage = 1,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 10,
        }),
    },

    [MOVE_MUD_SPORT] =
    {
        .name = { .moveName = _("Mud Sport") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MUD_SPORT,
        .power = 0,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_ICE_BALL] =
    {
        .name = { .moveName = _("Ice Ball") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ROLLOUT,
        .power = 30,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ballisticMove = TRUE,
        .instructBanned = TRUE,
        .parentalBondBanned = TRUE,
    },

    [MOVE_NEEDLE_ARM] =
    {
        .name = { .moveName = _("Needle Arm") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .minimizeDoubleDamage = B_UPDATED_MOVE_FLAGS < GEN_4,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 30,
        }),
    },

    [MOVE_SLACK_OFF] =
    {
        .name = { .moveName = _("Slack Off") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_RESTORE_HP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_9 ? 5 : 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .healingMove = TRUE,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_HYPER_VOICE] =
    {
        .name = { .moveName = _("Hyper Voice") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .soundMove = TRUE,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
    },

    [MOVE_POISON_FANG] =
    {
        .name = { .moveName = _("Poison Fang") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .bitingMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_TOXIC,
            .chance = B_UPDATED_MOVE_DATA >= GEN_6 ? 50 : 30,
        }),
    },

    [MOVE_CRUSH_CLAW] =
    {
        .name = { .moveName = _("Crush Claw") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 75,
        .type = TYPE_NORMAL,
        .accuracy = 95,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_DEF_MINUS_1,
            .chance = 50,
        }),
    },

    [MOVE_BLAST_BURN] =
    {
        .name = { .moveName = _("Blast Burn") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 150,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_RECHARGE,
            .self = TRUE,
        }),
    },

    [MOVE_HYDRO_CANNON] =
    {
        .name = { .moveName = _("Hydro Cannon") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 150,
        .type = TYPE_WATER,
        .accuracy = 90,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_RECHARGE,
            .self = TRUE,
        }),
    },

    [MOVE_METEOR_MASH] =
    {
        .name = { .moveName = _("Meteor Mash") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 90 : 100,
        .type = TYPE_STEEL,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_6 ? 90 : 85,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ATK_PLUS_1,
            .self = TRUE,
            .chance = 20,
        }),
    },

    [MOVE_ASTONISH] =
    {
        .name = { .moveName = _("Astonish") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 30,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .minimizeDoubleDamage = B_UPDATED_MOVE_FLAGS < GEN_4,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 30,
        }),
    },

    [MOVE_WEATHER_BALL] =
    {
        .name = { .moveName = _("Weather Ball") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_WEATHER_BALL,
        .power = 50,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ballisticMove = TRUE,
    },

    [MOVE_AROMATHERAPY] =
    {
        .name = { .moveName = _("Aromatherapy") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HEAL_BELL,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 5,
        .target = MOVE_TARGET_USER | MOVE_TARGET_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RECOVER_HP },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_FAKE_TEARS] =
    {
        .name = { .moveName = _("Fake Tears") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_2,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_AIR_CUTTER] =
    {
        .name = { .moveName = _("Air Cutter") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 60 : 55,
        .type = TYPE_FLYING,
        .accuracy = 95,
        .criticalHitStage = 1,
        .pp = 25,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .windMove = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_OVERHEAT] =
    {
        .name = { .moveName = _("Overheat") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 130 : 140,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .makesContact = B_UPDATED_MOVE_DATA < GEN_4,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_ATK_TWO_DOWN,
            .self = TRUE,
        }),
    },

    [MOVE_ODOR_SLEUTH] =
    {
        .name = { .moveName = _("Odor Sleuth") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FORESIGHT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_4 ? 0 : 100,
        .pp = 40,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_1 },
        .ignoresSubstitute = TRUE,
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
    },

    [MOVE_ROCK_TOMB] =
    {
        .name = { .moveName = _("Rock Tomb") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 60 : 50,
        .type = TYPE_ROCK,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_6 ? 95 : 80,
        .pp = B_UPDATED_MOVE_DATA >= GEN_6 ? 15 : 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_SILVER_WIND] =
    {
        .name = { .moveName = _("Silver Wind") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .windMove = B_EXTRAPOLATED_MOVE_FLAGS,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ALL_STATS_UP,
            .self = TRUE,
            .chance = 10,
        }),
    },

    [MOVE_METAL_SOUND] =
    {
        .name = { .moveName = _("Metal Sound") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_2,
        .power = 0,
        .type = TYPE_STEEL,
        .accuracy = 85,
        .pp = 40,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .magicCoatAffected = TRUE,
        .soundMove = TRUE,
    },

    [MOVE_GRASS_WHISTLE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Grass Whistle") },
        #else
            .name = { .moveName = _("GrassWhistle") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SLEEP,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 55,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .magicCoatAffected = TRUE,
        .soundMove = TRUE,
    },

    [MOVE_TICKLE] =
    {
        .name = { .moveName = _("Tickle") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TICKLE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_COSMIC_POWER] =
    {
        .name = { .moveName = _("Cosmic Power") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_COSMIC_POWER,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_WATER_SPOUT] =
    {
        .name = { .moveName = _("Water Spout") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ERUPTION,
        .power = 150,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_SIGNAL_BEAM] =
    {
        .name = { .moveName = _("Signal Beam") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 75,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_CONFUSION,
            .chance = 10,
        }),
    },

    [MOVE_SHADOW_PUNCH] =
    {
        .name = { .moveName = _("Shadow Punch") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_GHOST,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
    },

    [MOVE_EXTRASENSORY] =
    {
        .name = { .moveName = _("Extrasensory") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_6 ? 20 : 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .minimizeDoubleDamage = B_UPDATED_MOVE_FLAGS < GEN_4,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 10,
        }),
    },

    [MOVE_SKY_UPPERCUT] =
    {
        .name = { .moveName = _("Sky Uppercut") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SKY_UPPERCUT,
        .power = 85,
        .type = TYPE_FIGHTING,
        .accuracy = 90,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .damagesAirborne = TRUE,
    },

    [MOVE_SAND_TOMB] =
    {
        .name = { .moveName = _("Sand Tomb") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_5 ? 35 : 15,
        .type = TYPE_GROUND,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_5 ? 85 : 70,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_WRAP,
        }),
    },

    [MOVE_SHEER_COLD] =
    {
        .name = { .moveName = _("Sheer Cold") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_OHKO,
        .power = 1,
        .type = TYPE_ICE,
        .accuracy = 30,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_MUDDY_WATER] =
    {
        .name = { .moveName = _("Muddy Water") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 90 : 95,
        .type = TYPE_WATER,
        .accuracy = 85,
        .pp = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .skyBattleBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ACC_MINUS_1,
            .chance = 30,
        }),
    },

    [MOVE_BULLET_SEED] =
    {
        .name = { .moveName = _("Bullet Seed") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MULTI_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_5 ? 25 : 10,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .ballisticMove = TRUE,
    },

    [MOVE_AERIAL_ACE] =
    {
        .name = { .moveName = _("Aerial Ace") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_FLYING,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_ICICLE_SPEAR] =
    {
        .name = { .moveName = _("Icicle Spear") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MULTI_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_5 ? 25 : 10,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_IRON_DEFENSE] =
    {
        .name = { .moveName = _("Iron Defense") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DEFENSE_UP_2,
        .power = 0,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_BLOCK] =
    {
        .name = { .moveName = _("Block") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MEAN_LOOK,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .ignoresProtect = (B_UPDATED_MOVE_FLAGS >= GEN_6) || (B_UPDATED_MOVE_FLAGS <= GEN_3),
        .magicCoatAffected = TRUE,
    },

    [MOVE_HOWL] =
    {
        .name = { .moveName = _("Howl") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .power = 0,
        .effect = B_UPDATED_MOVE_DATA >= GEN_8 ? EFFECT_ATTACK_UP_USER_ALLY : EFFECT_ATTACK_UP,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 40,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_1 },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .soundMove = B_UPDATED_MOVE_FLAGS >= GEN_8,
    },

    [MOVE_DRAGON_CLAW] =
    {
        .name = { .moveName = _("Dragon Claw") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_FRENZY_PLANT] =
    {
        .name = { .moveName = _("Frenzy Plant") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 150,
        .type = TYPE_GRASS,
        .accuracy = 90,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .skyBattleBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_RECHARGE,
            .self = TRUE,
        }),
    },

    [MOVE_BULK_UP] =
    {
        .name = { .moveName = _("Bulk Up") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_BULK_UP,
        .power = 0,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_1 },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_BOUNCE] =
    {
        .name = { .moveName = _("Bounce") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SEMI_INVULNERABLE,
        .power = 85,
        .type = TYPE_FLYING,
        .accuracy = 85,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .twoTurnMove = TRUE,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .gravityBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .assistBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 30,
        }),
    },

    [MOVE_MUD_SHOT] =
    {
        .name = { .moveName = _("Mud Shot") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 55,
        .type = TYPE_GROUND,
        .accuracy = 95,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_POISON_TAIL] =
    {
        .name = { .moveName = _("Poison Tail") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_POISON,
        .accuracy = 100,
        .criticalHitStage = 1,
        .pp = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_POISON,
            .chance = 10,
        }),
    },

    [MOVE_COVET] =
    {
        .name = { .moveName = _("Covet") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_5 ? 60 : 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_6 ? 25 : 40,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = B_UPDATED_MOVE_DATA >= GEN_4,
        .meFirstBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_STEAL_ITEM,
        }),
    },

    [MOVE_VOLT_TACKLE] =
    {
        .name = { .moveName = _("Volt Tackle") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .recoil = 33,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .sheerForceBoost = TRUE,
            .additionalEffects = ADDITIONAL_EFFECTS({
                .moveEffect = MOVE_EFFECT_PARALYSIS,
                .chance = 10,
            }),
        #endif
    },

    [MOVE_MAGICAL_LEAF] =
    {
        .name = { .moveName = _("Magical Leaf") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_WATER_SPORT] =
    {
        .name = { .moveName = _("Water Sport") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_WATER_SPORT,
        .power = 0,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_CALM_MIND] =
    {
        .name = { .moveName = _("Calm Mind") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_CALM_MIND,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_LEAF_BLADE] =
    {
        .name = { .moveName = _("Leaf Blade") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_4 ? 90 : 70,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .criticalHitStage = 1,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_DRAGON_DANCE] =
    {
        .name = { .moveName = _("Dragon Dance") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DRAGON_DANCE,
        .power = 0,
        .type = TYPE_DRAGON,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .danceMove = TRUE,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_ROCK_BLAST] =
    {
        .name = { .moveName = _("Rock Blast") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MULTI_HIT,
        .power = 25,
        .type = TYPE_ROCK,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_5 ? 90 : 80,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .ballisticMove = B_UPDATED_MOVE_FLAGS >= GEN_6,
    },

    [MOVE_SHOCK_WAVE] =
    {
        .name = { .moveName = _("Shock Wave") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_WATER_PULSE] =
    {
        .name = { .moveName = _("Water Pulse") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .pulseMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_CONFUSION,
            .chance = 20,
        }),
    },

    [MOVE_DOOM_DESIRE] =
    {
        .name = { .moveName = _("Doom Desire") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FUTURE_SIGHT,
        .power = B_UPDATED_MOVE_DATA >= GEN_5 ? 140 : 120,
        .type = TYPE_STEEL,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_5 ? 100 : 85,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_PSYCHO_BOOST] =
    {
        .name = { .moveName = _("Psycho Boost") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 140,
        .type = TYPE_PSYCHIC,
        .accuracy = 90,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_ATK_TWO_DOWN,
            .self = TRUE,
        }),
    },

    [MOVE_ROOST] =
    {
        .name = { .moveName = _("Roost") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ROOST,
        .power = 0,
        .type = TYPE_FLYING,
        .accuracy = 0,
        .pp = B_UPDATED_MOVE_DATA >= GEN_9 ? 5 : 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .healingMove = TRUE,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_GRAVITY] =
    {
        .name = { .moveName = _("Gravity") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_GRAVITY,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 5,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_MIRACLE_EYE] =
    {
        .name = { .moveName = _("Miracle Eye") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MIRACLE_EYE,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 40,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .ignoresSubstitute = TRUE,
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
    },

    [MOVE_WAKE_UP_SLAP] =
    {
        .name = { .moveName = _("Wake-Up Slap") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DOUBLE_POWER_ON_ARG_STATUS,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 70 : 60,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = STATUS1_SLEEP,
        .makesContact = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_REMOVE_STATUS,
        }),
    },

    [MOVE_HAMMER_ARM] =
    {
        .name = { .moveName = _("Hammer Arm") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_FIGHTING,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_MINUS_1,
            .self = TRUE,
        }),
    },

    [MOVE_GYRO_BALL] =
    {
        .name = { .moveName = _("Gyro Ball") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_GYRO_BALL,
        .power = 1,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ballisticMove = TRUE,
    },

    [MOVE_HEALING_WISH] =
    {
        .name = { .moveName = _("Healing Wish") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HEALING_WISH,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .healingMove = TRUE,
        .snatchAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_BRINE] =
    {
        .name = { .moveName = _("Brine") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_BRINE,
        .power = 65,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_NATURAL_GIFT] =
    {
        .name = { .moveName = _("Natural Gift") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_NATURAL_GIFT,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_FEINT] =
    {
        .name = { .moveName = _("Feint") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_5 ? 30 : 50,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 2,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_6,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FEINT,
        }),
    },

    [MOVE_PLUCK] =
    {
        .name = { .moveName = _("Pluck") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BUG_BITE,
        }),
    },

    [MOVE_TAILWIND] =
    {
        .name = { .moveName = _("Tailwind") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TAILWIND,
        .power = 0,
        .type = TYPE_FLYING,
        .accuracy = 0,
        .pp = B_UPDATED_MOVE_DATA >= GEN_6 ? 15 : 30,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_BOOST_CRITS },
        .snatchAffected = TRUE,
        .windMove = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_ACUPRESSURE] =
    {
        .name = { .moveName = _("Acupressure") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ACUPRESSURE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .target = MOVE_TARGET_USER | MOVE_TARGET_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_BOOST_CRITS },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .snatchAffected = B_UPDATED_MOVE_FLAGS < GEN_5,
    },

    [MOVE_METAL_BURST] =
    {
        .name = { .moveName = _("Metal Burst") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_METAL_BURST,
        .power = 1,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .meFirstBanned = TRUE,
    },

    [MOVE_U_TURN] =
    {
        .name = { .moveName = _("U-turn") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT_ESCAPE,
        .power = 70,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_CLOSE_COMBAT] =
    {
        .name = { .moveName = _("Close Combat") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_DEF_SPDEF_DOWN,
            .self = TRUE,
        }),
    },

    [MOVE_PAYBACK] =
    {
        .name = { .moveName = _("Payback") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PAYBACK,
        .power = 50,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_ASSURANCE] =
    {
        .name = { .moveName = _("Assurance") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ASSURANCE,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 60 : 50,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_EMBARGO] =
    {
        .name = { .moveName = _("Embargo") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_EMBARGO,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
    },

    [MOVE_FLING] =
    {
        .name = { .moveName = _("Fling") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FLING,
        .power = 1,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .parentalBondBanned = TRUE,
    },

    [MOVE_PSYCHO_SHIFT] =
    {
        .name = { .moveName = _("Psycho Shift") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PSYCHO_SHIFT,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_6 ? 100 : 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_2 },
    },

    [MOVE_TRUMP_CARD] =
    {
        .name = { .moveName = _("Trump Card") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TRUMP_CARD,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .makesContact = TRUE,
    },

    [MOVE_HEAL_BLOCK] =
    {
        .name = { .moveName = _("Heal Block") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HEAL_BLOCK,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_2 },
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
    },

    [MOVE_WRING_OUT] =
    {
        .name = { .moveName = _("Wring Out") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_WRING_OUT,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .makesContact = TRUE,
    },

    [MOVE_POWER_TRICK] =
    {
        .name = { .moveName = _("Power Trick") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_POWER_TRICK,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_1 },
        .snatchAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_GASTRO_ACID] =
    {
        .name = { .moveName = _("Gastro Acid") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_GASTRO_ACID,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_LUCKY_CHANT] =
    {
        .name = { .moveName = _("Lucky Chant") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_LUCKY_CHANT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_EVSN_UP_1 },
        .snatchAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_ME_FIRST] =
    {
        .name = { .moveName = _("Me First") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ME_FIRST,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_2 },
        .ignoresSubstitute = TRUE,
        .metronomeBanned = TRUE,
        .mirrorMoveBanned = TRUE,
        .meFirstBanned = TRUE,
        .copycatBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .encoreBanned = TRUE,
        .assistBanned = TRUE,
        .mimicBanned = TRUE,
    },

    [MOVE_COPYCAT] =
    {
        .name = { .moveName = _("Copycat") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_COPYCAT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ACC_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .encoreBanned = TRUE,
        .assistBanned = TRUE,
        .mimicBanned = TRUE,
    },

    [MOVE_POWER_SWAP] =
    {
        .name = { .moveName = _("Power Swap") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_POWER_SWAP,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresSubstitute = TRUE,
    },

    [MOVE_GUARD_SWAP] =
    {
        .name = { .moveName = _("Guard Swap") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_GUARD_SWAP,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresSubstitute = TRUE,
    },

    [MOVE_PUNISHMENT] =
    {
        .name = { .moveName = _("Punishment") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PUNISHMENT,
        .power = 60,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_LAST_RESORT] =
    {
        .name = { .moveName = _("Last Resort") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_LAST_RESORT,
        .power = B_UPDATED_MOVE_DATA >= GEN_5 ? 140 : 130,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_WORRY_SEED] =
    {
        .name = { .moveName = _("Worry Seed") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_WORRY_SEED,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_SUCKER_PUNCH] =
    {
        .name = { .moveName = _("Sucker Punch") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SUCKER_PUNCH,
        .power = B_UPDATED_MOVE_DATA >= GEN_7 ? 70 : 80,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_TOXIC_SPIKES] =
    {
        .name = { .moveName = _("Toxic Spikes") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TOXIC_SPIKES,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_OPPONENTS_FIELD,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .forcePressure = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_HEART_SWAP] =
    {
        .name = { .moveName = _("Heart Swap") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HEART_SWAP,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_BOOST_CRITS },
        .ignoresSubstitute = TRUE,
    },

    [MOVE_AQUA_RING] =
    {
        .name = { .moveName = _("Aqua Ring") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_AQUA_RING,
        .power = 0,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .snatchAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_MAGNET_RISE] =
    {
        .name = { .moveName = _("Magnet Rise") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAGNET_RISE,
        .power = 0,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_EVSN_UP_1 },
        .snatchAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .gravityBanned = TRUE,
    },

    [MOVE_FLARE_BLITZ] =
    {
        .name = { .moveName = _("Flare Blitz") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .recoil = 33,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = STATUS1_BURN,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .thawsUser = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 10,
        }),
    },

    [MOVE_FORCE_PALM] =
    {
        .name = { .moveName = _("Force Palm") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 30,
        }),
    },

    [MOVE_AURA_SPHERE] =
    {
        .name = { .moveName = _("Aura Sphere") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 80 : 90,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .pulseMove = TRUE,
        .ballisticMove = TRUE,
    },

    [MOVE_ROCK_POLISH] =
    {
        .name = { .moveName = _("Rock Polish") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SPEED_UP_2,
        .power = 0,
        .type = TYPE_ROCK,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_POISON_JAB] =
    {
        .name = { .moveName = _("Poison Jab") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_POISON,
            .chance = 30,
        }),
    },

    [MOVE_DARK_PULSE] =
    {
        .name = { .moveName = _("Dark Pulse") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .pulseMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 20,
        }),
    },

    [MOVE_NIGHT_SLASH] =
    {
        .name = { .moveName = _("Night Slash") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_DARK,
        .accuracy = 100,
        .criticalHitStage = 1,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_AQUA_TAIL] =
    {
        .name = { .moveName = _("Aqua Tail") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_WATER,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_SEED_BOMB] =
    {
        .name = { .moveName = _("Seed Bomb") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .ballisticMove = TRUE,
    },

    [MOVE_AIR_SLASH] =
    {
        .name = { .moveName = _("Air Slash") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 75,
        .type = TYPE_FLYING,
        .accuracy = 95,
        .pp = B_UPDATED_MOVE_DATA >= GEN_6 ? 15 : 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .slicingMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 30,
        }),
    },

    [MOVE_X_SCISSOR] =
    {
        .name = { .moveName = _("X-Scissor") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_BUG_BUZZ] =
    {
        .name = { .moveName = _("Bug Buzz") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .soundMove = TRUE,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_DEF_MINUS_1,
            .chance = 10,
        }),
    },

    [MOVE_DRAGON_PULSE] =
    {
        .name = { .moveName = _("Dragon Pulse") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 85 : 90,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .pulseMove = TRUE,
    },

    [MOVE_DRAGON_RUSH] =
    {
        .name = { .moveName = _("Dragon Rush") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_DRAGON,
        .accuracy = 75,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .minimizeDoubleDamage = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 20,
        }),
    },

    [MOVE_POWER_GEM] =
    {
        .name = { .moveName = _("Power Gem") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 80 : 70,
        .type = TYPE_ROCK,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_DRAIN_PUNCH] =
    {
        .name = { .moveName = _("Drain Punch") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ABSORB,
        .power = B_UPDATED_MOVE_DATA >= GEN_5 ? 75 : 60,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_5 ? 10 : 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .healingMove = B_HEAL_BLOCKING >= GEN_6,
    },

    [MOVE_VACUUM_WAVE] =
    {
        .name = { .moveName = _("Vacuum Wave") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_FOCUS_BLAST] =
    {
        .name = { .moveName = _("Focus Blast") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_FIGHTING,
        .accuracy = 70,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .ballisticMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_DEF_MINUS_1,
            .chance = 10,
        }),
    },

    [MOVE_ENERGY_BALL] =
    {
        .name = { .moveName = _("Energy Ball") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 90 : 80,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .ballisticMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_DEF_MINUS_1,
            .chance = 10,
        }),
    },

    [MOVE_BRAVE_BIRD] =
    {
        .name = { .moveName = _("Brave Bird") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .recoil = 33,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_EARTH_POWER] =
    {
        .name = { .moveName = _("Earth Power") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .skyBattleBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_DEF_MINUS_1,
            .chance = 10,
        }),
    },

    [MOVE_SWITCHEROO] =
    {
        .name = { .moveName = _("Switcheroo") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TRICK,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_2 },
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_GIGA_IMPACT] =
    {
        .name = { .moveName = _("Giga Impact") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 150,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_RECHARGE,
            .self = TRUE,
        }),
    },

    [MOVE_NASTY_PLOT] =
    {
        .name = { .moveName = _("Nasty Plot") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SPECIAL_ATTACK_UP_2,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_BULLET_PUNCH] =
    {
        .name = { .moveName = _("Bullet Punch") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
    },

    [MOVE_AVALANCHE] =
    {
        .name = { .moveName = _("Avalanche") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_REVENGE,
        .power = 60,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = -4,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_ICE_SHARD] =
    {
        .name = { .moveName = _("Ice Shard") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_SHADOW_CLAW] =
    {
        .name = { .moveName = _("Shadow Claw") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .criticalHitStage = 1,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_THUNDER_FANG] =
    {
        .name = { .moveName = _("Thunder Fang") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_ELECTRIC,
        .accuracy = 95,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = STATUS1_PARALYSIS,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .bitingMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 10,
        },
        {
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 10,
        }),
    },

    [MOVE_ICE_FANG] =
    {
        .name = { .moveName = _("Ice Fang") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_ICE,
        .accuracy = 95,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .bitingMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FREEZE_OR_FROSTBITE,
            .chance = 10,
        },
        {
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 10,
        }),
    },

    [MOVE_FIRE_FANG] =
    {
        .name = { .moveName = _("Fire Fang") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_FIRE,
        .accuracy = 95,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = STATUS1_BURN,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .bitingMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 10,
        },
        {
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 10,
        }),
    },

    [MOVE_SHADOW_SNEAK] =
    {
        .name = { .moveName = _("Shadow Sneak") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_MUD_BOMB] =
    {
        .name = { .moveName = _("Mud Bomb") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_GROUND,
        .accuracy = 85,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .ballisticMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ACC_MINUS_1,
            .chance = 30,
        }),
    },

    [MOVE_PSYCHO_CUT] =
    {
        .name = { .moveName = _("Psycho Cut") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .criticalHitStage = 1,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .slicingMove = TRUE,
    },

    [MOVE_ZEN_HEADBUTT] =
    {
        .name = { .moveName = _("Zen Headbutt") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_PSYCHIC,
        .accuracy = 90,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 20,
        }),
    },

    [MOVE_MIRROR_SHOT] =
    {
        .name = { .moveName = _("Mirror Shot") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_STEEL,
        .accuracy = 85,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ACC_MINUS_1,
            .chance = 30,
        }),
    },

    [MOVE_FLASH_CANNON] =
    {
        .name = { .moveName = _("Flash Cannon") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_DEF_MINUS_1,
            .chance = 10,
        }),
    },

    [MOVE_ROCK_CLIMB] =
    {
        .name = { .moveName = _("Rock Climb") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_CONFUSION,
            .chance = 20,
        }),
    },

    [MOVE_DEFOG] =
    {
        .name = { .moveName = _("Defog") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DEFOG,
        .power = 0,
        .type = TYPE_FLYING,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ACC_UP_1 },
        //.ignoresSubstitute = TRUE,
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
    },

    [MOVE_TRICK_ROOM] =
    {
        .name = { .moveName = _("Trick Room") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TRICK_ROOM,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 5,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = -7,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ACC_UP_1 },
        .ignoresProtect = TRUE,
    },

    [MOVE_DRACO_METEOR] =
    {
        .name = { .moveName = _("Draco Meteor") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 130 : 140,
        .type = TYPE_DRAGON,
        .accuracy = 90,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_ATK_TWO_DOWN,
            .self = TRUE,
        }),
    },

    [MOVE_DISCHARGE] =
    {
        .name = { .moveName = _("Discharge") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 30,
        }),
    },

    [MOVE_LAVA_PLUME] =
    {
        .name = { .moveName = _("Lava Plume") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 30,
        }),
    },

    [MOVE_LEAF_STORM] =
    {
        .name = { .moveName = _("Leaf Storm") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 130 : 140,
        .type = TYPE_GRASS,
        .accuracy = 90,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_ATK_TWO_DOWN,
            .self = TRUE,
        }),
    },

    [MOVE_POWER_WHIP] =
    {
        .name = { .moveName = _("Power Whip") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_GRASS,
        .accuracy = 85,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_ROCK_WRECKER] =
    {
        .name = { .moveName = _("Rock Wrecker") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 150,
        .type = TYPE_ROCK,
        .accuracy = 90,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .ballisticMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_RECHARGE,
            .self = TRUE,
        }),
    },

    [MOVE_CROSS_POISON] =
    {
        .name = { .moveName = _("Cross Poison") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_POISON,
        .accuracy = 100,
        .criticalHitStage = 1,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .slicingMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_POISON,
            .chance = 10,
        }),
    },

    [MOVE_GUNK_SHOT] =
    {
        .name = { .moveName = _("Gunk Shot") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_POISON,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_6 ? 80 : 70,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_POISON,
            .chance = 30,
        }),
    },

    [MOVE_IRON_HEAD] =
    {
        .name = { .moveName = _("Iron Head") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 30,
        }),
    },

    [MOVE_MAGNET_BOMB] =
    {
        .name = { .moveName = _("Magnet Bomb") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .ballisticMove = TRUE,
    },

    [MOVE_STONE_EDGE] =
    {
        .name = { .moveName = _("Stone Edge") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_ROCK,
        .accuracy = 80,
        .criticalHitStage = 1,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_CAPTIVATE] =
    {
        .name = { .moveName = _("Captivate") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_CAPTIVATE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_2 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_STEALTH_ROCK] =
    {
        .name = { .moveName = _("Stealth Rock") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_STEALTH_ROCK,
        .power = 0,
        .type = TYPE_ROCK,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_OPPONENTS_FIELD,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .forcePressure = TRUE,
    },

    [MOVE_GRASS_KNOT] =
    {
        .name = { .moveName = _("Grass Knot") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_LOW_KICK,
        .power = 1,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .makesContact = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_CHATTER] =
    {
        .name = { .moveName = _("Chatter") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 65 : 60,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .soundMove = TRUE,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_6,
        .mimicBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .assistBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_CONFUSION,
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .chance = 100,
        #elif B_UPDATED_MOVE_DATA >= GEN_5
            .chance = 10,
        #else
            .chance = 31,
        #endif
        }),
    },

    [MOVE_JUDGMENT] =
    {
        .name = { .moveName = _("Judgment") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_CHANGE_TYPE_ON_ITEM,
        .power = 100,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .argument = HOLD_EFFECT_PLATE,
    },

    [MOVE_BUG_BITE] =
    {
        .name = { .moveName = _("Bug Bite") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BUG_BITE,
        }),
    },

    [MOVE_CHARGE_BEAM] =
    {
        .name = { .moveName = _("Charge Beam") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_ELECTRIC,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_ATK_PLUS_1,
            .self = TRUE,
            .chance = 70,
        }),
    },

    [MOVE_WOOD_HAMMER] =
    {
        .name = { .moveName = _("Wood Hammer") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .recoil = 33,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_AQUA_JET] =
    {
        .name = { .moveName = _("Aqua Jet") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_ATTACK_ORDER] =
    {
        .name = { .moveName = _("Attack Order") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_BUG,
        .accuracy = 100,
        .criticalHitStage = 1,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_DEFEND_ORDER] =
    {
        .name = { .moveName = _("Defend Order") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_COSMIC_POWER,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_HEAL_ORDER] =
    {
        .name = { .moveName = _("Heal Order") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_RESTORE_HP,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .healingMove = TRUE,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_HEAD_SMASH] =
    {
        .name = { .moveName = _("Head Smash") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 150,
        .type = TYPE_ROCK,
        .accuracy = 80,
        .recoil = 50,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_DOUBLE_HIT] =
    {
        .name = { .moveName = _("Double Hit") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 35,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .strikeCount = 2,
    },

    [MOVE_ROAR_OF_TIME] =
    {
        .name = { .moveName = _("Roar of Time") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 150,
        .type = TYPE_DRAGON,
        .accuracy = 90,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_RECHARGE,
            .self = TRUE,
        }),
    },

    [MOVE_SPACIAL_REND] =
    {
        .name = { .moveName = _("Spacial Rend") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_DRAGON,
        .accuracy = 95,
        .criticalHitStage = 1,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_LUNAR_DANCE] =
    {
        .name = { .moveName = _("Lunar Dance") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HEALING_WISH,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .snatchAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .healingMove = TRUE,
        .danceMove = TRUE,
    },

    [MOVE_CRUSH_GRIP] =
    {
        .name = { .moveName = _("Crush Grip") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_WRING_OUT,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_MAGMA_STORM] =
    {
        .name = { .moveName = _("Magma Storm") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 100 : 120,
        .type = TYPE_FIRE,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_5 ? 75 : 70,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_WRAP,
        }),
    },

    [MOVE_DARK_VOID] =
    {
        .name = { .moveName = _("Dark Void") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DARK_VOID,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_7 ? 50 : 80,
        .pp = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .magicCoatAffected = TRUE,
        .sketchBanned = (B_SKETCH_BANS >= GEN_9),
    },

    [MOVE_SEED_FLARE] =
    {
        .name = { .moveName = _("Seed Flare") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_GRASS,
        .accuracy = 85,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_DEF_MINUS_2,
            .chance = 40,
        }),
    },

    [MOVE_OMINOUS_WIND] =
    {
        .name = { .moveName = _("Ominous Wind") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .windMove = B_EXTRAPOLATED_MOVE_FLAGS,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ALL_STATS_UP,
            .self = TRUE,
            .chance = 10,
        }),
    },

    [MOVE_SHADOW_FORCE] =
    {
        .name = { .moveName = _("Shadow Force") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SEMI_INVULNERABLE,
        .power = 120,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .twoTurnMove = TRUE,
        .ignoresProtect = TRUE,
        .minimizeDoubleDamage = B_UPDATED_MOVE_FLAGS == GEN_6,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .assistBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FEINT,
        }),
    },

    [MOVE_HONE_CLAWS] =
    {
        .name = { .moveName = _("Hone Claws") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ATTACK_ACCURACY_UP,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_1 },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_WIDE_GUARD] =
    {
        .name = { .moveName = _("Wide Guard") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_ROCK,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 3,
        .category = BATTLE_CATEGORY_STATUS,
        .argument = TRUE, // Protects the whole side.
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .protectionMove = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_GUARD_SPLIT] =
    {
        .name = { .moveName = _("Guard Split") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_GUARD_SPLIT,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_POWER_SPLIT] =
    {
        .name = { .moveName = _("Power Split") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_POWER_SPLIT,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_WONDER_ROOM] =
    {
        .name = { .moveName = _("Wonder Room") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_WONDER_ROOM,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = B_UPDATED_MOVE_DATA >= GEN_6 ? 0 : -7,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .ignoresProtect = TRUE,
    },

    [MOVE_PSYSHOCK] =
    {
        .name = { .moveName = _("Psyshock") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PSYSHOCK,
        .power = 80,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_VENOSHOCK] =
    {
        .name = { .moveName = _("Venoshock") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DOUBLE_POWER_ON_ARG_STATUS,
        .power = 65,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .argument = STATUS1_PSN_ANY,
    },

    [MOVE_AUTOTOMIZE] =
    {
        .name = { .moveName = _("Autotomize") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_AUTOTOMIZE,
        .power = 0,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_RAGE_POWDER] =
    {
        .name = { .moveName = _("Rage Powder") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FOLLOW_ME,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = B_UPDATED_MOVE_DATA >= GEN_6 ? 2 : 3,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .powderMove = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_TELEKINESIS] =
    {
        .name = { .moveName = _("Telekinesis") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TELEKINESIS,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .magicCoatAffected = TRUE,
        .gravityBanned = TRUE,
    },

    [MOVE_MAGIC_ROOM] =
    {
        .name = { .moveName = _("Magic Room") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAGIC_ROOM,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = B_UPDATED_MOVE_DATA >= GEN_6 ? 0 : -7,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .ignoresProtect = TRUE,
    },

    [MOVE_SMACK_DOWN] =
    {
        .name = { .moveName = _("Smack Down") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_ROCK,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .damagesAirborne = TRUE,
        .skyBattleBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SMACK_DOWN,
        }),
    },

    [MOVE_STORM_THROW] =
    {
        .name = { .moveName = _("Storm Throw") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 60 : 40,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .alwaysCriticalHit = TRUE,
    },

    [MOVE_FLAME_BURST] =
    {
        .name = { .moveName = _("Flame Burst") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLAME_BURST,
            .self = TRUE,
        }),
    },

    [MOVE_SLUDGE_WAVE] =
    {
        .name = { .moveName = _("Sludge Wave") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 95,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_POISON,
            .chance = 10,
        }),
    },

    [MOVE_QUIVER_DANCE] =
    {
        .name = { .moveName = _("Quiver Dance") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_QUIVER_DANCE,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .danceMove = TRUE,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_HEAVY_SLAM] =
    {
        .name = { .moveName = _("Heavy Slam") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HEAT_CRASH,
        .power = 1,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .minimizeDoubleDamage = B_UPDATED_MOVE_FLAGS >= GEN_7,
        .skyBattleBanned = TRUE,
    },

    [MOVE_SYNCHRONOISE] =
    {
        .name = { .moveName = _("Synchronoise") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SYNCHRONOISE,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 120 : 70,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_6 ? 10 : 15,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_ELECTRO_BALL] =
    {
        .name = { .moveName = _("Electro Ball") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ELECTRO_BALL,
        .power = 1,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ballisticMove = TRUE,
    },

    [MOVE_SOAK] =
    {
        .name = { .moveName = _("Soak") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SOAK,
        .power = 0,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_FLAME_CHARGE] =
    {
        .name = { .moveName = _("Flame Charge") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_PLUS_1,
            .self = TRUE,
            .chance = 100,
        }),
    },

    [MOVE_COIL] =
    {
        .name = { .moveName = _("Coil") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_COIL,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_LOW_SWEEP] =
    {
        .name = { .moveName = _("Low Sweep") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 65 : 60,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_ACID_SPRAY] =
    {
        .name = { .moveName = _("Acid Spray") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .ballisticMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_DEF_MINUS_2,
            .chance = 100,
        }),
    },

    [MOVE_FOUL_PLAY] =
    {
        .name = { .moveName = _("Foul Play") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FOUL_PLAY,
        .power = 95,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_SIMPLE_BEAM] =
    {
        .name = { .moveName = _("Simple Beam") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SIMPLE_BEAM,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_ENTRAINMENT] =
    {
        .name = { .moveName = _("Entrainment") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ENTRAINMENT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_AFTER_YOU] =
    {
        .name = { .moveName = _("After You") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_AFTER_YOU,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_ROUND] =
    {
        .name = { .moveName = _("Round") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ROUND,
        .power = 60,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .soundMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ROUND,
        }),
    },

    [MOVE_ECHOED_VOICE] =
    {
        .name = { .moveName = _("Echoed Voice") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ECHOED_VOICE,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .soundMove = TRUE,
    },

    [MOVE_CHIP_AWAY] =
    {
        .name = { .moveName = _("Chip Away") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresTargetDefenseEvasionStages = TRUE,
    },

    [MOVE_CLEAR_SMOG] =
    {
        .name = { .moveName = _("Clear Smog") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_POISON,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_CLEAR_SMOG,
        }),
    },

    [MOVE_STORED_POWER] =
    {
        .name = { .moveName = _("Stored Power") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_STORED_POWER,
        .power = 20,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_QUICK_GUARD] =
    {
        .name = { .moveName = _("Quick Guard") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_USER,
        .priority = 3,
        .category = BATTLE_CATEGORY_STATUS,
        .argument = TRUE, // Protects the whole side.
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .protectionMove = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_ALLY_SWITCH] =
    {
        .name = { .moveName = _("Ally Switch") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ALLY_SWITCH,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_USER,
        .priority = B_UPDATED_MOVE_DATA >= GEN_7 ? 2 : 1,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_2 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_SCALD] =
    {
        .name = { .moveName = _("Scald") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .thawsUser = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 30,
        }),
    },

    [MOVE_SHELL_SMASH] =
    {
        .name = { .moveName = _("Shell Smash") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SHELL_SMASH,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_HEAL_PULSE] =
    {
        .name = { .moveName = _("Heal Pulse") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HEAL_PULSE,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .magicCoatAffected = TRUE,
        .mirrorMoveBanned = TRUE,
        .healingMove = TRUE,
        .pulseMove = TRUE,
    },

    [MOVE_HEX] =
    {
        .name = { .moveName = _("Hex") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DOUBLE_POWER_ON_ARG_STATUS,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 65 : 50,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .argument = STATUS1_ANY,
    },

    [MOVE_SKY_DROP] =
    {
        .name = { .moveName = _("Sky Drop") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SKY_DROP,
        .power = 60,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .twoTurnMove = TRUE,
        .makesContact = TRUE,
        .gravityBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_SHIFT_GEAR] =
    {
        .name = { .moveName = _("Shift Gear") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SHIFT_GEAR,
        .power = 0,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_CIRCLE_THROW] =
    {
        .name = { .moveName = _("Circle Throw") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT_SWITCH_TARGET,
        .power = 60,
        .type = TYPE_FIGHTING,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = -6,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_INCINERATE] =
    {
        .name = { .moveName = _("Incinerate") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 60 : 30,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_INCINERATE,
        }),
    },

    [MOVE_QUASH] =
    {
        .name = { .moveName = _("Quash") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_QUASH,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .metronomeBanned = TRUE,
    },

    [MOVE_ACROBATICS] =
    {
        .name = { .moveName = _("Acrobatics") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ACROBATICS,
        .power = 55,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_REFLECT_TYPE] =
    {
        .name = { .moveName = _("Reflect Type") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_REFLECT_TYPE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_RETALIATE] =
    {
        .name = { .moveName = _("Retaliate") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_RETALIATE,
        .power = 70,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_FINAL_GAMBIT] =
    {
        .name = { .moveName = _("Final Gambit") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FINAL_GAMBIT,
        .power = 1,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .mirrorMoveBanned = TRUE,
        .parentalBondBanned = TRUE,
    },

    [MOVE_BESTOW] =
    {
        .name = { .moveName = _("Bestow") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_BESTOW,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_2 },
        .ignoresProtect = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .ignoresSubstitute = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_INFERNO] =
    {
        .name = { .moveName = _("Inferno") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_FIRE,
        .accuracy = 50,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 100,
        }),
    },

    [MOVE_WATER_PLEDGE] =
    {
        .name = { .moveName = _("Water Pledge") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PLEDGE,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 80 : 50,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .skyBattleBanned = TRUE,
    },

    [MOVE_FIRE_PLEDGE] =
    {
        .name = { .moveName = _("Fire Pledge") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PLEDGE,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 80 : 50,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .skyBattleBanned = TRUE,
    },

    [MOVE_GRASS_PLEDGE] =
    {
        .name = { .moveName = _("Grass Pledge") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PLEDGE,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 80 : 50,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .skyBattleBanned = TRUE,
    },

    [MOVE_VOLT_SWITCH] =
    {
        .name = { .moveName = _("Volt Switch") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT_ESCAPE,
        .power = 70,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_STRUGGLE_BUG] =
    {
        .name = { .moveName = _("Struggle Bug") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 50 : 30,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_ATK_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_BULLDOZE] =
    {
        .name = { .moveName = _("Bulldoze") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_BULLDOZE,
        .power = 60,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .skyBattleBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_FROST_BREATH] =
    {
        .name = { .moveName = _("Frost Breath") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 60 : 40,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .alwaysCriticalHit = TRUE,
    },

    [MOVE_DRAGON_TAIL] =
    {
        .name = { .moveName = _("Dragon Tail") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT_SWITCH_TARGET,
        .power = 60,
        .type = TYPE_DRAGON,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = -6,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_WORK_UP] =
    {
        .name = { .moveName = _("Work Up") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ATTACK_SPATK_UP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_1 },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE
    },

    [MOVE_ELECTROWEB] =
    {
        .name = { .moveName = _("Electroweb") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 55,
        .type = TYPE_ELECTRIC,
        .accuracy = 95,
        .pp = 15,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_WILD_CHARGE] =
    {
        .name = { .moveName = _("Wild Charge") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .recoil = 25,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_DRILL_RUN] =
    {
        .name = { .moveName = _("Drill Run") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_GROUND,
        .accuracy = 95,
        .criticalHitStage = 1,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_DUAL_CHOP] =
    {
        .name = { .moveName = _("Dual Chop") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_DRAGON,
        .accuracy = 90,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .strikeCount = 2,
    },

    [MOVE_HEART_STAMP] =
    {
        .name = { .moveName = _("Heart Stamp") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 30,
        }),
    },

    [MOVE_HORN_LEECH] =
    {
        .name = { .moveName = _("Horn Leech") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ABSORB,
        .power = 75,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .healingMove = B_HEAL_BLOCKING >= GEN_6,
    },

    [MOVE_SACRED_SWORD] =
    {
        .name = { .moveName = _("Sacred Sword") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_6 ? 15 : 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresTargetDefenseEvasionStages = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_RAZOR_SHELL] =
    {
        .name = { .moveName = _("Razor Shell") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 75,
        .type = TYPE_WATER,
        .accuracy = 95,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .slicingMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_DEF_MINUS_1,
            .chance = 50,
        }),
    },

    [MOVE_HEAT_CRASH] =
    {
        .name = { .moveName = _("Heat Crash") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HEAT_CRASH,
        .power = 1,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .minimizeDoubleDamage = B_UPDATED_MOVE_FLAGS >= GEN_6,
    },

    [MOVE_LEAF_TORNADO] =
    {
        .name = { .moveName = _("Leaf Tornado") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_GRASS,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        //.windMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ACC_MINUS_1,
            .chance = 50,
        }),
    },

    [MOVE_STEAMROLLER] =
    {
        .name = { .moveName = _("Steamroller") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .minimizeDoubleDamage = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 30,
        }),
    },

    [MOVE_COTTON_GUARD] =
    {
        .name = { .moveName = _("Cotton Guard") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DEFENSE_UP_3,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_NIGHT_DAZE] =
    {
        .name = { .moveName = _("Night Daze") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 85,
        .type = TYPE_DARK,
        .accuracy = 95,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ACC_MINUS_1,
            .chance = 40,
        }),
    },

    [MOVE_PSYSTRIKE] =
    {
        .name = { .moveName = _("Psystrike") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PSYSHOCK,
        .power = 100,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_TAIL_SLAP] =
    {
        .name = { .moveName = _("Tail Slap") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MULTI_HIT,
        .power = 25,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_HURRICANE] =
    {
        .name = { .moveName = _("Hurricane") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_THUNDER,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 110 : 120,
        .type = TYPE_FLYING,
        .accuracy = 70,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .windMove = TRUE,
        .damagesAirborne = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_CONFUSION,
            .chance = 30,
        }),
    },

    [MOVE_HEAD_CHARGE] =
    {
        .name = { .moveName = _("Head Charge") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .recoil = 25,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_GEAR_GRIND] =
    {
        .name = { .moveName = _("Gear Grind") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_STEEL,
        .accuracy = 85,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .strikeCount = 2,
    },

    [MOVE_SEARING_SHOT] =
    {
        .name = { .moveName = _("Searing Shot") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .ballisticMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 30,
        }),
    },

    [MOVE_TECHNO_BLAST] =
    {
        .name = { .moveName = _("Techno Blast") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_CHANGE_TYPE_ON_ITEM,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 120 : 85,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .argument = HOLD_EFFECT_DRIVE,
        .metronomeBanned = TRUE,
    },

    [MOVE_RELIC_SONG] =
    {
        .name = { .moveName = _("Relic Song") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_RELIC_SONG,
        .power = 75,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .argument = STATUS1_SLEEP,
        .sheerForceBoost = TRUE,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .soundMove = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SLEEP,
            .chance = 10,
        }),
    },

    [MOVE_SECRET_SWORD] =
    {
        .name = { .moveName = _("Secret Sword") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PSYSHOCK,
        .power = 85,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .slicingMove = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_GLACIATE] =
    {
        .name = { .moveName = _("Glaciate") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_ICE,
        .accuracy = 95,
        .pp = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_BOLT_STRIKE] =
    {
        .name = { .moveName = _("Bolt Strike") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 130,
        .type = TYPE_ELECTRIC,
        .accuracy = 85,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 20,
        }),
    },

    [MOVE_BLUE_FLARE] =
    {
        .name = { .moveName = _("Blue Flare") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 130,
        .type = TYPE_FIRE,
        .accuracy = 85,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 20,
        }),
    },

    [MOVE_FIERY_DANCE] =
    {
        .name = { .moveName = _("Fiery Dance") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .danceMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_ATK_PLUS_1,
            .self = TRUE,
            .chance = 50,
        }),
    },

    [MOVE_FREEZE_SHOCK] =
    {
        .name = { .moveName = _("Freeze Shock") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TWO_TURNS_ATTACK,
        .power = 140,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .twoTurnMove = TRUE,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 30,
        }),
    },

    [MOVE_ICE_BURN] =
    {
        .name = { .moveName = _("Ice Burn") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TWO_TURNS_ATTACK,
        .power = 140,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .twoTurnMove = TRUE,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 30,
        }),
    },

    [MOVE_SNARL] =
    {
        .name = { .moveName = _("Snarl") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 55,
        .type = TYPE_DARK,
        .accuracy = 95,
        .pp = 15,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .soundMove = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_ATK_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_ICICLE_CRASH] =
    {
        .name = { .moveName = _("Icicle Crash") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 85,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 30,
        }),
    },

    [MOVE_V_CREATE] =
    {
        .name = { .moveName = _("V-create") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 180,
        .type = TYPE_FIRE,
        .accuracy = 95,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_V_CREATE,
            .self = TRUE,
        }),
    },

    [MOVE_FUSION_FLARE] =
    {
        .name = { .moveName = _("Fusion Flare") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FUSION_COMBO,
        .power = 100,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .thawsUser = TRUE,
    },

    [MOVE_FUSION_BOLT] =
    {
        .name = { .moveName = _("Fusion Bolt") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FUSION_COMBO,
        .power = 100,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_FLYING_PRESS] =
    {
        .name = { .moveName = _("Flying Press") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TWO_TYPED_MOVE,
        .power = B_UPDATED_MOVE_DATA >= GEN_7 ? 100 : 80,
        .type = TYPE_FIGHTING,
        .accuracy = 95,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = TYPE_FLYING,
        .makesContact = TRUE,
        .minimizeDoubleDamage = TRUE,
        .gravityBanned = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_MAT_BLOCK] =
    {
        .name = { .moveName = _("Mat Block") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAT_BLOCK,
        .power = 0,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .argument = TRUE, // Protects the whole side.
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_BELCH] =
    {
        .name = { .moveName = _("Belch") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_BELCH,
        .power = 120,
        .type = TYPE_POISON,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .mirrorMoveBanned = TRUE,
        .meFirstBanned = TRUE,
        .metronomeBanned = TRUE,
        .mimicBanned = TRUE,
        .copycatBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_ROTOTILLER] =
    {
        .name = { .moveName = _("Rototiller") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ROTOTILLER,
        .power = 0,
        .type = TYPE_GROUND,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_STICKY_WEB] =
    {
        .name = { .moveName = _("Sticky Web") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_STICKY_WEB,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_OPPONENTS_FIELD,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .magicCoatAffected = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_FELL_STINGER] =
    {
        .name = { .moveName = _("Fell Stinger") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FELL_STINGER,
        .power = B_UPDATED_MOVE_DATA >= GEN_7 ? 50 : 30,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_PHANTOM_FORCE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Phantom Force") },
        #else
            .name = { .moveName = _("PhantomForce") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SEMI_INVULNERABLE,
        .power = 90,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .twoTurnMove = TRUE,
        .ignoresProtect = TRUE,
        .makesContact = TRUE,
        .minimizeDoubleDamage = B_UPDATED_MOVE_FLAGS == GEN_6,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .assistBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FEINT,
        }),
    },

    [MOVE_TRICK_OR_TREAT] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Trick-Or-Treat") },
        #else
            .name = { .moveName = _("TrickOrTreat") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_THIRD_TYPE,
        .power = 0,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .argument = TYPE_GHOST,
        .zMove = { .effect = Z_EFFECT_ALL_STATS_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_NOBLE_ROAR] =
    {
        .name = { .moveName = _("Noble Roar") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_NOBLE_ROAR,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .magicCoatAffected = TRUE,
        .soundMove = TRUE,
    },

    [MOVE_ION_DELUGE] =
    {
        .name = { .moveName = _("Ion Deluge") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ION_DELUGE,
        .power = 0,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 25,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 1,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_PARABOLIC_CHARGE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Parabolic Charge") },
        #else
            .name = { .moveName = _("ParabolcChrg") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ABSORB,
        .power = B_UPDATED_MOVE_DATA >= GEN_7 ? 65 : 50,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .healingMove = B_HEAL_BLOCKING >= GEN_6,
    },

    [MOVE_FORESTS_CURSE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Forest's Curse") },
        #else
            .name = { .moveName = _("Forest'sCurs") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_THIRD_TYPE,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .argument = TYPE_GRASS,
        .zMove = { .effect = Z_EFFECT_ALL_STATS_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_PETAL_BLIZZARD] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Petal Blizzard") },
        #else
            .name = { .moveName = _("PetalBlizzrd") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .windMove = TRUE,
    },

    [MOVE_FREEZE_DRY] =
    {
        .name = { .moveName = _("Freeze-Dry") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FREEZE_DRY,
        .power = 70,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FREEZE_OR_FROSTBITE,
            .chance = 10,
        }),
    },

    [MOVE_DISARMING_VOICE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Disarming Voice") },
        #else
            .name = { .moveName = _("DisrmngVoice") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .soundMove = TRUE,
    },

    [MOVE_PARTING_SHOT] =
    {
        .name = { .moveName = _("Parting Shot") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PARTING_SHOT,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESTORE_REPLACEMENT_HP },
        .magicCoatAffected = TRUE,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .soundMove = TRUE,
    },

    [MOVE_TOPSY_TURVY] =
    {
        .name = { .moveName = _("Topsy-Turvy") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TOPSY_TURVY,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_7 ? 0 : 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_DRAINING_KISS] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Draining Kiss") },
        #else
            .name = { .moveName = _("DrainingKiss") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ABSORB,
        .power = 50,
        .type = TYPE_FAIRY,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .argument = 75, // restores 75% HP instead of 50% HP
        .makesContact = TRUE,
        .healingMove = B_HEAL_BLOCKING >= GEN_6,
    },

    [MOVE_CRAFTY_SHIELD] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Crafty Shield") },
        #else
            .name = { .moveName = _("CraftyShield") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 3,
        .category = BATTLE_CATEGORY_STATUS,
        .argument = TRUE, // Protects the whole side.
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_FLOWER_SHIELD] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Flower Shield") },
        #else
            .name = { .moveName = _("FlowerShield") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FLOWER_SHIELD,
        .power = 0,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_GRASSY_TERRAIN] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Grassy Terrain") },
        #else
            .name = { .moveName = _("GrssyTerrain") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_GRASSY_TERRAIN,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_MISTY_TERRAIN] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Misty Terrain") },
        #else
            .name = { .moveName = _("MistyTerrain") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MISTY_TERRAIN,
        .power = 0,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_ELECTRIFY] =
    {
        .name = { .moveName = _("Electrify") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ELECTRIFY,
        .power = 0,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
    },

    [MOVE_PLAY_ROUGH] =
    {
        .name = { .moveName = _("Play Rough") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_FAIRY,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ATK_MINUS_1,
            .chance = 10,
        }),
    },

    [MOVE_FAIRY_WIND] =
    {
        .name = { .moveName = _("Fairy Wind") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_FAIRY,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .windMove = TRUE,
    },

    [MOVE_MOONBLAST] =
    {
        .name = { .moveName = _("Moonblast") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 95,
        .type = TYPE_FAIRY,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_ATK_MINUS_1,
            .chance = 30,
        }),
    },

    [MOVE_BOOMBURST] =
    {
        .name = { .moveName = _("Boomburst") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 140,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .soundMove = TRUE,
    },

    [MOVE_FAIRY_LOCK] =
    {
        .name = { .moveName = _("Fairy Lock") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FAIRY_LOCK,
        .power = 0,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
    },

    [MOVE_KINGS_SHIELD] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("King's Shield") },
        #else
            .name = { .moveName = _("King'sShield") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 4,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .protectionMove = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .instructBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_PLAY_NICE] =
    {
        .name = { .moveName = _("Play Nice") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ATTACK_DOWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .magicCoatAffected = TRUE,
    },

    [MOVE_CONFIDE] =
    {
        .name = { .moveName = _("Confide") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SPECIAL_ATTACK_DOWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .ignoresProtect = TRUE,
        .magicCoatAffected = TRUE,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .soundMove = TRUE,
    },

    [MOVE_DIAMOND_STORM] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Diamond Storm") },
        #else
            .name = { .moveName = _("DiamondStorm") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .power = 100,
        .type = TYPE_ROCK,
        .accuracy = 95,
        .pp = 5,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = B_UPDATED_MOVE_DATA >= GEN_7 ? MOVE_EFFECT_DEF_PLUS_2:  MOVE_EFFECT_DEF_PLUS_1,
            .chance = 50,
        }),
    },

    [MOVE_STEAM_ERUPTION] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Steam Eruption") },
        #else
            .name = { .moveName = _("SteamErption") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 110,
        .type = TYPE_WATER,
        .accuracy = 95,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .thawsUser = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 30,
        }),
    },

    [MOVE_HYPERSPACE_HOLE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Hyprspace Hole") },
        #else
            .name = { .moveName = _("HyprspceHole") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FEINT,
        }),
    },

    [MOVE_WATER_SHURIKEN] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Water Shuriken") },
        #else
            .name = { .moveName = _("WatrShuriken") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MULTI_HIT,
        .power = 15,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = B_UPDATED_MOVE_DATA >= GEN_7 ? BATTLE_CATEGORY_SPECIAL : BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_MYSTICAL_FIRE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Mystical Fire") },
        #else
            .name = { .moveName = _("MysticalFire") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_7 ? 75 : 65,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_ATK_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_SPIKY_SHIELD] =
    {
        .name = { .moveName = _("Spiky Shield") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 4,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .protectionMove = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_AROMATIC_MIST] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Aromatic Mist") },
        #else
            .name = { .moveName = _("AromaticMist") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_AROMATIC_MIST,
        .power = 0,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_2 },
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_EERIE_IMPULSE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Eerie Impulse") },
        #else
            .name = { .moveName = _("EerieImpulse") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SPECIAL_ATTACK_DOWN_2,
        .power = 0,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_VENOM_DRENCH] =
    {
        .name = { .moveName = _("Venom Drench") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_VENOM_DRENCH,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_POWDER] =
    {
        .name = { .moveName = _("Powder") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_POWDER,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_2 },
        .powderMove = TRUE,
        .magicCoatAffected = TRUE,
    },

    [MOVE_GEOMANCY] =
    {
        .name = { .moveName = _("Geomancy") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_GEOMANCY,
        .power = 0,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ALL_STATS_UP_1 },
        .twoTurnMove = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_MAGNETIC_FLUX] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Magnetic Flux") },
        #else
            .name = { .moveName = _("MagneticFlux") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAGNETIC_FLUX,
        .power = 0,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_HAPPY_HOUR] =
    {
        .name = { .moveName = _("Happy Hour") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DO_NOTHING,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ALL_STATS_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_ELECTRIC_TERRAIN] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Electric Terrain") },
        #else
            .name = { .moveName = _("ElctrcTrrain") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ELECTRIC_TERRAIN,
        .power = 0,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_DAZZLING_GLEAM] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Dazzling Gleam") },
        #else
            .name = { .moveName = _("DazzlngGleam") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_FAIRY,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_CELEBRATE] =
    {
        .name = { .moveName = _("Celebrate") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DO_NOTHING,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 40,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ALL_STATS_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
        .mimicBanned = TRUE,
        .copycatBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_HOLD_HANDS] =
    {
        .name = { .moveName = _("Hold Hands") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DO_NOTHING,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 40,
        .target = MOVE_TARGET_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ALL_STATS_UP_1 },
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .metronomeBanned = TRUE,
        .mimicBanned = TRUE,
        .copycatBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_BABY_DOLL_EYES] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Baby-Doll Eyes") },
        #else
            .name = { .moveName = _("BabyDollEyes") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ATTACK_DOWN,
        .power = 0,
        .type = TYPE_FAIRY,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_NUZZLE] =
    {
        .name = { .moveName = _("Nuzzle") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 20,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 100,
        }),
    },

    [MOVE_HOLD_BACK] =
    {
        .name = { .moveName = _("Hold Back") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FALSE_SWIPE,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 40,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_INFESTATION] =
    {
        .name = { .moveName = _("Infestation") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 20,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .makesContact = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_WRAP,
        }),
    },

    [MOVE_POWER_UP_PUNCH] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Power-Up Punch") },
        #else
            .name = { .moveName = _("PowerUpPunch") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ATK_PLUS_1,
            .self = TRUE,
            .chance = 100,
        }),
    },

    [MOVE_OBLIVION_WING] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Oblivion Wing") },
        #else
            .name = { .moveName = _("OblivionWing") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ABSORB,
        .power = 80,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .argument = 75, // restores 75% HP instead of 50% HP
        .healingMove = B_HEAL_BLOCKING >= GEN_6,
    },

    [MOVE_THOUSAND_ARROWS] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Thousand Arrows") },
        #else
            .name = { .moveName = _("ThousndArrws") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .damagesAirborne = TRUE,
        .ignoreTypeIfFlyingAndUngrounded = TRUE,
        .metronomeBanned = TRUE,
        .skyBattleBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SMACK_DOWN,
        }),
    },

    [MOVE_THOUSAND_WAVES] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Thousand Waves") },
        #else
            .name = { .moveName = _("ThousndWaves") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .metronomeBanned = TRUE,
        .skyBattleBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PREVENT_ESCAPE,
        }),
    },

    [MOVE_LANDS_WRATH] =
    {
        .name = { .moveName = _("Land's Wrath") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .skyBattleBanned = TRUE,
    },

    [MOVE_LIGHT_OF_RUIN] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Light Of Ruin") },
        #else
            .name = { .moveName = _("LightOfRuin") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 140,
        .type = TYPE_FAIRY,
        .accuracy = 90,
        .recoil = 50,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE,
    },

    [MOVE_ORIGIN_PULSE] =
    {
        .name = { .moveName = _("Origin Pulse") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 110,
        .type = TYPE_WATER,
        .accuracy = 85,
        .pp = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .pulseMove = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_PRECIPICE_BLADES] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Precipice Blades") },
        #else
            .name = { .moveName = _("PrcipceBldes") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_GROUND,
        .accuracy = 85,
        .pp = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .metronomeBanned = TRUE,
    },

    [MOVE_DRAGON_ASCENT] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Dragon Ascent") },
        #else
            .name = { .moveName = _("DragonAscent") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_DEF_SPDEF_DOWN,
            .self = TRUE,
        }),
    },

    [MOVE_HYPERSPACE_FURY] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Hyperspace Fury") },
        #else
            .name = { .moveName = _("HyprspceFury") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HYPERSPACE_FURY,
        .power = 100,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .metronomeBanned = TRUE,
        .sketchBanned = (B_SKETCH_BANS >= GEN_9),
        .additionalEffects = ADDITIONAL_EFFECTS(
            // Feint move effect handled in script as it goes before animation
        {
            .moveEffect = MOVE_EFFECT_DEF_MINUS_1,
            .self = TRUE,
        }),
    },

    [MOVE_SHORE_UP] =
    {
        .name = { .moveName = _("Shore Up") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SHORE_UP,
        .power = 0,
        .type = TYPE_GROUND,
        .accuracy = 0,
        .pp = B_UPDATED_MOVE_DATA >= GEN_9 ? 5 : 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .healingMove = TRUE,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_FIRST_IMPRESSION] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("First Impression") },
        #else
            .name = { .moveName = _("FrstImpressn") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FAKE_OUT,
        .power = 90,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 2,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_BANEFUL_BUNKER] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Baneful Bunker") },
        #else
            .name = { .moveName = _("BanefulBunkr") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 4,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .protectionMove = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_SPIRIT_SHACKLE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Spirit Shackle") },
        #else
            .name = { .moveName = _("SpiritShackl") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PREVENT_ESCAPE,
            .chance = 100,
        }),
    },

    [MOVE_DARKEST_LARIAT] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Darkest Lariat") },
        #else
            .name = { .moveName = _("DarkstLariat") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 85,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresTargetDefenseEvasionStages = TRUE,
    },

    [MOVE_SPARKLING_ARIA] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Sparkling Aria") },
        #else
            .name = { .moveName = _("SparklngAria") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .argument = STATUS1_BURN,
        .sheerForceBoost = TRUE,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .soundMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_REMOVE_STATUS,
            .chance = 100,
        }),
    },

    [MOVE_ICE_HAMMER] =
    {
        .name = { .moveName = _("Ice Hammer") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_MINUS_1,
            .self = TRUE,
        }),
    },

    [MOVE_FLORAL_HEALING] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Floral Healng") },
        #else
            .name = { .moveName = _("FloralHealng") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HEAL_PULSE,
        .power = 0,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .argument = MOVE_EFFECT_FLORAL_HEALING,
        .mirrorMoveBanned = TRUE,
        .healingMove = TRUE,
        .magicCoatAffected = TRUE,
    },

    [MOVE_HIGH_HORSEPOWER] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("High Horsepower") },
        #else
            .name = { .moveName = _("HighHorsepwr") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 95,
        .type = TYPE_GROUND,
        .accuracy = 95,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_STRENGTH_SAP] =
    {
        .name = { .moveName = _("Strength Sap") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_STRENGTH_SAP,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .magicCoatAffected = TRUE,
        .healingMove = B_HEAL_BLOCKING >= GEN_6,
    },

    [MOVE_SOLAR_BLADE] =
    {
        .name = { .moveName = _("Solar Blade") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SOLAR_BEAM,
        .power = 125,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .twoTurnMove = TRUE,
        .makesContact = TRUE,
        .slicingMove = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
    },

    [MOVE_LEAFAGE] =
    {
        .name = { .moveName = _("Leafage") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 40,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_SPOTLIGHT] =
    {
        .name = { .moveName = _("Spotlight") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FOLLOW_ME,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 3,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .magicCoatAffected = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_TOXIC_THREAD] =
    {
        .name = { .moveName = _("Toxic Thread") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TOXIC_THREAD,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_LASER_FOCUS] =
    {
        .name = { .moveName = _("Laser Focus") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_LASER_FOCUS,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_1 },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_GEAR_UP] =
    {
        .name = { .moveName = _("Gear Up") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_GEAR_UP,
        .power = 0,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_THROAT_CHOP] =
    {
        .name = { .moveName = _("Throat Chop") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_THROAT_CHOP,
            .chance = 100,
        }),
    },

    [MOVE_POLLEN_PUFF] =
    {
        .name = { .moveName = _("Pollen Puff") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT_ENEMY_HEAL_ALLY,
        .power = 90,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ballisticMove = TRUE,
    },

    [MOVE_ANCHOR_SHOT] =
    {
        .name = { .moveName = _("Anchor Shot") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PREVENT_ESCAPE,
            .chance = 100,
        }),
    },

    [MOVE_PSYCHIC_TERRAIN] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Psychic Terrain") },
        #else
            .name = { .moveName = _("PsychcTrrain") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PSYCHIC_TERRAIN,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_LUNGE] =
    {
        .name = { .moveName = _("Lunge") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ATK_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_FIRE_LASH] =
    {
        .name = { .moveName = _("Fire Lash") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_DEF_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_POWER_TRIP] =
    {
        .name = { .moveName = _("Power Trip") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_STORED_POWER,
        .power = 20,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_BURN_UP] =
    {
        .name = { .moveName = _("Burn Up") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FAIL_IF_NOT_ARG_TYPE,
        .power = 130,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .thawsUser = TRUE,
        .argument = TYPE_FIRE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_REMOVE_ARG_TYPE,
            .self = TRUE,
        }),
    },

    [MOVE_SPEED_SWAP] =
    {
        .name = { .moveName = _("Speed Swap") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SPEED_SWAP,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresSubstitute = TRUE,
    },

    [MOVE_SMART_STRIKE] =
    {
        .name = { .moveName = _("Smart Strike") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_PURIFY] =
    {
        .name = { .moveName = _("Purify") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PURIFY,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ALL_STATS_UP_1 },
        .mirrorMoveBanned = TRUE,
        .healingMove = TRUE,
        .magicCoatAffected = TRUE,
    },

    [MOVE_REVELATION_DANCE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Revelation Dance") },
        #else
            .name = { .moveName = _("RvlationDnce") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_REVELATION_DANCE,
        .power = 90,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .danceMove = TRUE,
    },

    [MOVE_CORE_ENFORCER] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Core Enforcer") },
        #else
            .name = { .moveName = _("CoreEnforcer") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .zMove = { .powerOverride = 140 },
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_CORE_ENFORCER,
        }),
    },

    [MOVE_TROP_KICK] =
    {
        .name = { .moveName = _("Trop Kick") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ATK_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_INSTRUCT] =
    {
        .name = { .moveName = _("Instruct") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_INSTRUCT,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
        .instructBanned = TRUE,
    },

    [MOVE_BEAK_BLAST] =
    {
        .name = { .moveName = _("Beak Blast") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_BEAK_BLAST,
        .power = 100,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = -3,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .mirrorMoveBanned = TRUE,
        .ballisticMove = TRUE,
        .meFirstBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_CLANGING_SCALES] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Clanging Scales") },
        #else
            .name = { .moveName = _("ClngngScales") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 110,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .soundMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_DEF_MINUS_1,
            .self = TRUE,
        }),
    },

    [MOVE_DRAGON_HAMMER] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Dragon Hammer") },
        #else
            .name = { .moveName = _("DragonHammer") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_BRUTAL_SWING] =
    {
        .name = { .moveName = _("Brutal Swing") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_AURORA_VEIL] =
    {
        .name = { .moveName = _("Aurora Veil") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_AURORA_VEIL,
        .power = 0,
        .type = TYPE_ICE,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_SHELL_TRAP] =
    {
        .name = { .moveName = _("Shell Trap") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SHELL_TRAP,
        .power = 150,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_BOTH,
        .priority = -3,
        .category = BATTLE_CATEGORY_SPECIAL,
        .mirrorMoveBanned = TRUE,
        .meFirstBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_FLEUR_CANNON] =
    {
        .name = { .moveName = _("Fleur Cannon") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 130,
        .type = TYPE_FAIRY,
        .accuracy = 90,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_ATK_TWO_DOWN,
            .self = TRUE,
        }),
    },

    [MOVE_PSYCHIC_FANGS] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Psychic Fangs") },
        #else
            .name = { .moveName = _("PsychicFangs") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_BRICK_BREAK,
        .power = 85,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .bitingMove = TRUE,
    },

    [MOVE_STOMPING_TANTRUM] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Stomping Tantrum") },
        #else
            .name = { .moveName = _("StmpngTantrm") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_STOMPING_TANTRUM,
        .power = 75,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .skyBattleBanned = B_EXTRAPOLATED_MOVE_FLAGS,
    },

    [MOVE_SHADOW_BONE] =
    {
        .name = { .moveName = _("Shadow Bone") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 85,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_DEF_MINUS_1,
            .chance = 20,
        }),
    },

    [MOVE_ACCELEROCK] =
    {
        .name = { .moveName = _("Accelerock") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_ROCK,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_LIQUIDATION] =
    {
        .name = { .moveName = _("Liquidation") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 85,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_DEF_MINUS_1,
            .chance = 20,
        }),
    },

    [MOVE_PRISMATIC_LASER] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Prismatic Laser") },
        #else
            .name = { .moveName = _("PrsmaticLasr") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 160,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_RECHARGE,
            .self = TRUE,
        }),
    },

    [MOVE_SPECTRAL_THIEF] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Spectral Thief") },
        #else
            .name = { .moveName = _("SpectrlThief") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .ignoresSubstitute = TRUE,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPECTRAL_THIEF,
        }),
    },

    [MOVE_SUNSTEEL_STRIKE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Sunsteel Strike") },
        #else
            .name = { .moveName = _("SnsteelStrke") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresTargetAbility = TRUE,
        .metronomeBanned = B_UPDATED_MOVE_FLAGS >= GEN_8,
    },

    [MOVE_MOONGEIST_BEAM] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Moongeist Beam") },
        #else
            .name = { .moveName = _("MoongestBeam") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresTargetAbility = TRUE,
        .metronomeBanned = B_UPDATED_MOVE_FLAGS >= GEN_8,
    },

    [MOVE_TEARFUL_LOOK] =
    {
        .name = { .moveName = _("Tearful Look") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_NOBLE_ROAR,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .ignoresProtect = TRUE,
        .magicCoatAffected = TRUE,
    },

    [MOVE_ZING_ZAP] =
    {
        .name = { .moveName = _("Zing Zap") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 30,
        }),
    },

    [MOVE_NATURES_MADNESS] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Nature's Madness") },
        #else
            .name = { .moveName = _("Natur'sMadns") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SUPER_FANG,
        .power = 1,
        .type = TYPE_FAIRY,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = B_UPDATED_MOVE_FLAGS >= GEN_8,
    },

    [MOVE_MULTI_ATTACK] =
    {
        .name = { .moveName = _("Multi-Attack") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_CHANGE_TYPE_ON_ITEM,
        .power = B_UPDATED_MOVE_DATA >= GEN_8 ? 120 : 90,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = HOLD_EFFECT_MEMORY,
        .makesContact = TRUE,
    },

    [MOVE_MIND_BLOWN] =
    {
        .name = { .moveName = _("Mind Blown") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MIND_BLOWN,
        .power = 150,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE,
    },

    [MOVE_PLASMA_FISTS] =
    {
        .name = { .moveName = _("Plasma Fists") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PLASMA_FISTS,
        .power = 100,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_PHOTON_GEYSER] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Photon Geyser") },
        #else
            .name = { .moveName = _("PhotonGeyser") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PHOTON_GEYSER,
        .power = 100,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresTargetAbility = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_ZIPPY_ZAP] =
    {
        .name = { .moveName = _("Zippy Zap") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_8 ? 80 : 50,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_8 ? 10 : 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 2,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_8,
        .sheerForceBoost = B_UPDATED_MOVE_DATA >= GEN_8,
        .alwaysCriticalHit = TRUE,
        .metronomeBanned = TRUE,
        #if B_UPDATED_MOVE_DATA >= GEN_8
            .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_EVS_PLUS_1,
            .chance = 100,
        }),
        #endif
    },

    [MOVE_SPLISHY_SPLASH] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Splishy Splash") },
        #else
            .name = { .moveName = _("SplishySplsh") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_8,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 30,
        }),
    },

    [MOVE_FLOATY_FALL] =
    {
        .name = { .moveName = _("Floaty Fall") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_FLYING,
        .accuracy = 95,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_8,
        .gravityBanned = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 30,
        }),
    },

    [MOVE_PIKA_PAPOW] =
    {
        .name = { .moveName = _("Pika Papow") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_RETURN,
        .power = 1,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_8,
        .metronomeBanned = TRUE,
    },

    [MOVE_BOUNCY_BUBBLE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Bouncy Bubble") },
        #else
            .name = { .moveName = _("BouncyBubble") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ABSORB,
        .power = B_UPDATED_MOVE_DATA >= GEN_8 ? 60 : 90,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_8 ? 20 : 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .argument = B_UPDATED_MOVE_DATA >= GEN_8 ? 100 : 50, // restores 100% HP instead of 50% HP
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_8,
        .metronomeBanned = TRUE,
        .healingMove = B_HEAL_BLOCKING >= GEN_6,
    },

    [MOVE_BUZZY_BUZZ] =
    {
        .name = { .moveName = _("Buzzy Buzz") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_8 ? 60 : 90,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_8 ? 20 : 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_8,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 100,
        }),
    },

    [MOVE_SIZZLY_SLIDE] =
    {
        .name = { .moveName = _("Sizzly Slide") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_8 ? 60 : 90,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_8 ? 20 : 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_8,
        .thawsUser = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 100,
        }),
    },

    [MOVE_GLITZY_GLOW] =
    {
        .name = { .moveName = _("Glitzy Glow") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_GLITZY_GLOW,
        .power = B_UPDATED_MOVE_DATA >= GEN_8 ? 80 : 90,
        .type = TYPE_PSYCHIC,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_8 ? 95 : 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_8,
        .metronomeBanned = TRUE,
    },

    [MOVE_BADDY_BAD] =
    {
        .name = { .moveName = _("Baddy Bad") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_BADDY_BAD,
        .power = B_UPDATED_MOVE_DATA >= GEN_8 ? 80 : 90,
        .type = TYPE_DARK,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_8 ? 95 : 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_8,
        .metronomeBanned = TRUE,
    },

    [MOVE_SAPPY_SEED] =
    {
        .name = { .moveName = _("Sappy Seed") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SAPPY_SEED,
        .power = B_UPDATED_MOVE_DATA >= GEN_8 ? 100 : 90,
        .type = TYPE_GRASS,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_8 ? 90 : 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_8 ? 10 : 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_8,
        .magicCoatAffected = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_FREEZY_FROST] =
    {
        .name = { .moveName = _("Freezy Frost") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FREEZY_FROST,
        .power = B_UPDATED_MOVE_DATA >= GEN_8 ? 100 : 90,
        .type = TYPE_ICE,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_8 ? 90 : 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_8 ? 10 : 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_8,
        .metronomeBanned = TRUE,
    },

    [MOVE_SPARKLY_SWIRL] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Sparkly Swirl") },
        #else
            .name = { .moveName = _("SparklySwirl") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SPARKLY_SWIRL,
        .power = B_UPDATED_MOVE_DATA >= GEN_8 ? 120 : 90,
        .type = TYPE_FAIRY,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_8 ? 85 : 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_8 ? 5 : 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_8,
        .metronomeBanned = TRUE,
    },

    [MOVE_VEEVEE_VOLLEY] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Veevee Volley") },
        #else
            .name = { .moveName = _("VeeveeVolley") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_RETURN,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_8,
        .metronomeBanned = TRUE,
    },

    [MOVE_DOUBLE_IRON_BASH] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Double Iron Bash") },
        #else
            .name = { .moveName = _("DublIronBash") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .sheerForceBoost = TRUE,
        .strikeCount = 2,
        .minimizeDoubleDamage = B_UPDATED_MOVE_FLAGS < GEN_8,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 30,
        }),
    },

    [MOVE_DYNAMAX_CANNON] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Dynamax Cannon") },
        #else
            .name = { .moveName = _("DynamxCannon") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DYNAMAX_DOUBLE_DMG,
        .power = 100,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .mimicBanned = TRUE,
        .encoreBanned = TRUE,
        .assistBanned = B_EXTRAPOLATED_MOVE_FLAGS,
        .parentalBondBanned = TRUE,
    },

    [MOVE_SNIPE_SHOT] =
    {
        .name = { .moveName = _("Snipe Shot") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SNIPE_SHOT,
        .power = 80,
        .type = TYPE_WATER,
        .accuracy = 100,
        .criticalHitStage = 1,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_JAW_LOCK] =
    {
        .name = { .moveName = _("Jaw Lock") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .bitingMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_TRAP_BOTH,
        }),
    },

    [MOVE_STUFF_CHEEKS] =
    {
        .name = { .moveName = _("Stuff Cheeks") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_STUFF_CHEEKS,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_NO_RETREAT] =
    {
        .name = { .moveName = _("No Retreat") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_NO_RETREAT,
        .power = 0,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 5,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_TAR_SHOT] =
    {
        .name = { .moveName = _("Tar Shot") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TAR_SHOT,
        .power = 0,
        .type = TYPE_ROCK,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .magicCoatAffected = TRUE,
    },

    [MOVE_MAGIC_POWDER] =
    {
        .name = { .moveName = _("Magic Powder") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SOAK,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .argument = TYPE_PSYCHIC,
        .magicCoatAffected = TRUE,
        .powderMove = TRUE,
    },

    [MOVE_DRAGON_DARTS] =
    {
        .name = { .moveName = _("Dragon Darts") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT, // TODO: EFFECT_DRAGON_DARTS
        .power = 50,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .strikeCount = 2,
        .parentalBondBanned = TRUE,
    },

    [MOVE_TEATIME] =
    {
        .name = { .moveName = _("Teatime") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TEATIME,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_OCTOLOCK] =
    {
        .name = { .moveName = _("Octolock") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_OCTOLOCK,
        .power = 0,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
    },

    [MOVE_BOLT_BEAK] =
    {
        .name = { .moveName = _("Bolt Beak") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_BOLT_BEAK,
        .power = 85,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_FISHIOUS_REND] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Fishious Rend") },
        #else
            .name = { .moveName = _("FishiousRend") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_BOLT_BEAK,
        .power = 85,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .bitingMove = TRUE,
    },

    [MOVE_COURT_CHANGE] =
    {
        .name = { .moveName = _("Court Change") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_COURT_CHANGE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .ignoresProtect = TRUE,
    },

    [MOVE_CLANGOROUS_SOUL] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Clangorous Soul") },
        #else
            .name = { .moveName = _("ClngrousSoul") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_CLANGOROUS_SOUL,
        .power = 0,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .soundMove = TRUE,
        .danceMove = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_BODY_PRESS] =
    {
        .name = { .moveName = _("Body Press") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_BODY_PRESS,
        .power = 80,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
        .skyBattleBanned = B_EXTRAPOLATED_MOVE_FLAGS,
    },

    [MOVE_DECORATE] =
    {
        .name = { .moveName = _("Decorate") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DECORATE,
        .power = 0,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_DRUM_BEATING] =
    {
        .name = { .moveName = _("Drum Beating") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_SNAP_TRAP] =
    {
        .name = { .moveName = _("Snap Trap") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 35,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
        .skyBattleBanned = B_EXTRAPOLATED_MOVE_FLAGS,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_WRAP,
        }),
    },

    [MOVE_PYRO_BALL] =
    {
        .name = { .moveName = _("Pyro Ball") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .thawsUser = TRUE,
        .ballisticMove = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 10,
        }),
    },

    [MOVE_BEHEMOTH_BLADE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Behemoth Blade") },
        #else
            .name = { .moveName = _("BehemthBlade") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DYNAMAX_DOUBLE_DMG,
        .power = 100,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .slicingMove = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .mimicBanned = TRUE,
        .assistBanned = B_EXTRAPOLATED_MOVE_FLAGS,
    },

    [MOVE_BEHEMOTH_BASH] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Behemoth Bash") },
        #else
            .name = { .moveName = _("BehemothBash") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DYNAMAX_DOUBLE_DMG,
        .power = 100,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .mimicBanned = TRUE,
        .assistBanned = B_EXTRAPOLATED_MOVE_FLAGS,
    },

    [MOVE_AURA_WHEEL] =
    {
        .name = { .moveName = _("Aura Wheel") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_AURA_WHEEL,
        .power = 110,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_PLUS_1,
            .self = TRUE,
            .chance = 100,
        }),
    },

    [MOVE_BREAKING_SWIPE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Breaking Swipe") },
        #else
            .name = { .moveName = _("BreakngSwipe") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ATK_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_BRANCH_POKE] =
    {
        .name = { .moveName = _("Branch Poke") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 40,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_OVERDRIVE] =
    {
        .name = { .moveName = _("Overdrive") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .soundMove = TRUE,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .metronomeBanned = TRUE,
    },

    [MOVE_APPLE_ACID] =
    {
        .name = { .moveName = _("Apple Acid") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_DEF_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_GRAV_APPLE] =
    {
        .name = { .moveName = _("Grav Apple") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_GRAV_APPLE,
        .power = 80,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_DEF_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_SPIRIT_BREAK] =
    {
        .name = { .moveName = _("Spirit Break") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 75,
        .type = TYPE_FAIRY,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_ATK_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_STRANGE_STEAM] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Strange Steam") },
        #else
            .name = { .moveName = _("StrangeSteam") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_FAIRY,
        .accuracy = 95,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_CONFUSION,
            .chance = 20,
        }),
    },

    [MOVE_LIFE_DEW] =
    {
        .name = { .moveName = _("Life Dew") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_JUNGLE_HEALING,
        .power = 0,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
        .healingMove = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_OBSTRUCT] =
    {
        .name = { .moveName = _("Obstruct") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 4,
        .category = BATTLE_CATEGORY_STATUS,
        .protectionMove = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
        .instructBanned = TRUE,
    },

    [MOVE_FALSE_SURRENDER] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("False Surrender") },
        #else
            .name = { .moveName = _("FalsSurrendr") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_METEOR_ASSAULT] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Meteor Assault") },
        #else
            .name = { .moveName = _("MeteorAssalt") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 150,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .metronomeBanned = TRUE,
        .instructBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_RECHARGE,
            .self = TRUE,
        }),
    },

    [MOVE_ETERNABEAM] =
    {
        .name = { .moveName = _("Eternabeam") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 160,
        .type = TYPE_DRAGON,
        .accuracy = 90,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_RECHARGE,
            .self = TRUE,
        }),
    },

    [MOVE_STEEL_BEAM] =
    {
        .name = { .moveName = _("Steel Beam") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_HP_50_RECOIL,
        .power = 140,
        .type = TYPE_STEEL,
        .accuracy = 95,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE,
    },

    [MOVE_EXPANDING_FORCE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Expanding Force") },
        #else
            .name = { .moveName = _("ExpandngForc") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_EXPANDING_FORCE,
        .power = 80,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_STEEL_ROLLER] =
    {
        .name = { .moveName = _("Steel Roller") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT_SET_REMOVE_TERRAIN,
        .power = 130,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .argument = ARG_TRY_REMOVE_TERRAIN_FAIL, // Remove a field terrain if there is one and hit, otherwise fail.
        .skyBattleBanned = TRUE,
    },

    [MOVE_SCALE_SHOT] =
    {
        .name = { .moveName = _("Scale Shot") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MULTI_HIT,
        .power = 25,
        .type = TYPE_DRAGON,
        .accuracy = 90,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MOVE_EFFECT_SCALE_SHOT,
    },

    [MOVE_METEOR_BEAM] =
    {
        .name = { .moveName = _("Meteor Beam") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_METEOR_BEAM,
        .power = 120,
        .type = TYPE_ROCK,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .twoTurnMove = TRUE,
        .instructBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_ATK_PLUS_1,
            .self = TRUE,
            .onChargeTurnOnly = TRUE,
        }),
    },

    [MOVE_SHELL_SIDE_ARM] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Shell Side Arm") },
        #else
            .name = { .moveName = _("ShellSideArm") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SHELL_SIDE_ARM,
        .power = 90,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_POISON,
            .chance = 20,
        }),
    },

    [MOVE_MISTY_EXPLOSION] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Misty Explosion") },
        #else
            .name = { .moveName = _("MstyExplsion") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_EXPLOSION,
        .power = 100,
        .type = TYPE_FAIRY,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_GRASSY_GLIDE] =
    {
        .name = { .moveName = _("Grassy Glide") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_GRASSY_GLIDE,
        .power = B_UPDATED_MOVE_DATA >= GEN_9 ? 55 : 70,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .skyBattleBanned = B_EXTRAPOLATED_MOVE_FLAGS,
    },

    [MOVE_RISING_VOLTAGE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Rising Voltage") },
        #else
            .name = { .moveName = _("RisngVoltage") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_RISING_VOLTAGE,
        .power = 70,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_TERRAIN_PULSE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Terrain Pulse") },
        #else
            .name = { .moveName = _("TerrainPulse") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TERRAIN_PULSE,
        .power = 50,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .pulseMove = TRUE,
    },

    [MOVE_SKITTER_SMACK] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Skitter Smack") },
        #else
            .name = { .moveName = _("SkitterSmack") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_BUG,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_ATK_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_BURNING_JEALOUSY] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Burning Jealousy") },
        #else
            .name = { .moveName = _("BrningJelosy") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .onlyIfTargetRaisedStats = TRUE,
            .chance = 100,
        }),
    },

    [MOVE_LASH_OUT] =
    {
        .name = { .moveName = _("Lash Out") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_LASH_OUT,
        .power = 75,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_POLTERGEIST] =
    {
        .name = { .moveName = _("Poltergeist") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_POLTERGEIST,
        .power = 110,
        .type = TYPE_GHOST,
        .accuracy = 90,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_CORROSIVE_GAS] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Corrosive Gas") },
        #else
            .name = { .moveName = _("CorrosiveGas") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_CORROSIVE_GAS,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 40,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .magicCoatAffected = TRUE,
    },

    [MOVE_COACHING] =
    {
        .name = { .moveName = _("Coaching") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_COACHING,
        .power = 0,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_FLIP_TURN] =
    {
        .name = { .moveName = _("Flip Turn") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT_ESCAPE,
        .power = 60,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_TRIPLE_AXEL] =
    {
        .name = { .moveName = _("Triple Axel") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TRIPLE_KICK,
        .power = 20,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .strikeCount = 3,
    },

    [MOVE_DUAL_WINGBEAT] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Dual Wingbeat") },
        #else
            .name = { .moveName = _("DualWingbeat") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_FLYING,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .strikeCount = 2,
    },

    [MOVE_SCORCHING_SANDS] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Scorching Sands") },
        #else
            .name = { .moveName = _("ScorchngSnds") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .thawsUser = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 30,
        }),
    },

    [MOVE_JUNGLE_HEALING] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Jungle Healng") },
        #else
            .name = { .moveName = _("JungleHealng") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_JUNGLE_HEALING,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
        .healingMove = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_WICKED_BLOW] =
    {
        .name = { .moveName = _("Wicked Blow") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_9 ? 75 : 80,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .alwaysCriticalHit = TRUE,
        .punchingMove = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_SURGING_STRIKES] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Surging Strikes") },
        #else
            .name = { .moveName = _("SurgngStrkes") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 25,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .alwaysCriticalHit = TRUE,
        .punchingMove = TRUE,
        .strikeCount = 3,
        .metronomeBanned = TRUE,
    },

    [MOVE_THUNDER_CAGE] =
    {
        .name = { .moveName = _("Thunder Cage") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_ELECTRIC,
        .accuracy = 90,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_WRAP,
        }),
    },

    [MOVE_DRAGON_ENERGY] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Dragon Energy") },
        #else
            .name = { .moveName = _("DragonEnergy") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ERUPTION,
        .power = 150,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE,
    },

    [MOVE_FREEZING_GLARE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Freezing Glare") },
        #else
            .name = { .moveName = _("FreezngGlare") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .power = 90,
        .effect = EFFECT_HIT,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FREEZE_OR_FROSTBITE,
            .chance = 10,
        }),
    },

    [MOVE_FIERY_WRATH] =
    {
        .name = { .moveName = _("Fiery Wrath") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 20,
        }),
    },

    [MOVE_THUNDEROUS_KICK] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Thunderous Kick") },
        #else
            .name = { .moveName = _("ThnderusKick") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_DEF_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_GLACIAL_LANCE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Glacial Lance") },
        #else
            .name = { .moveName = _("GlacialLance") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_9 ? 120 : 130,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .metronomeBanned = TRUE,
    },

    [MOVE_ASTRAL_BARRAGE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Astral Barrage") },
        #else
            .name = { .moveName = _("AstrlBarrage") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE,
    },

    [MOVE_EERIE_SPELL] =
    {
        .name = { .moveName = _("Eerie Spell") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_EERIE_SPELL,
        .power = 80,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .soundMove = TRUE,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
    },

    [MOVE_DIRE_CLAW] =
    {
        .name = { .moveName = _("Dire Claw") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_9 ? 80 : 60,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_DIRE_CLAW,
            .chance = 50,
        }),
    },

    [MOVE_PSYSHIELD_BASH] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Psyshield Bash") },
        #else
            .name = { .moveName = _("PsyshieldBsh") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_PSYCHIC,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_DEF_PLUS_1,
            .self = TRUE,
            .chance = 100,
        }),
    },

    [MOVE_POWER_SHIFT] =
    {
        .name = { .moveName = _("Power Shift") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_POWER_TRICK,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
},

    [MOVE_STONE_AXE] =
    {
        .name = { .moveName = _("Stone Axe") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_ROCK,
        .accuracy = 90,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .slicingMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_STEALTH_ROCK,
            .chance = 100,
        }),
    },

    [MOVE_SPRINGTIDE_STORM] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Springtide Storm") },
        #else
            .name = { .moveName = _("SprngtdeStrm") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_9 ? 100 : 95,
        .type = TYPE_FAIRY,
        .accuracy = 80,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .windMove = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ATK_MINUS_1,
            .chance = 30,
        }),
    },

    [MOVE_MYSTICAL_POWER] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Mystical Power") },
        #else
            .name = { .moveName = _("MystcalPower") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_PSYCHIC,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_ATK_PLUS_1,
            .self = TRUE,
            .chance = 100,
        }),
    },

    [MOVE_RAGING_FURY] =
    {
        .name = { .moveName = _("Raging Fury") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_9 ? 120 : 90,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_RANDOM,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_THRASH,
            .self = TRUE,
        }),
    },

    [MOVE_WAVE_CRASH] =
    {
        .name = { .moveName = _("Wave Crash") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_9 ? 120 : 75,
        .type = TYPE_WATER,
        .accuracy = 100,
        .recoil = 33,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .skyBattleBanned = B_EXTRAPOLATED_MOVE_FLAGS,
    },

    [MOVE_CHLOROBLAST] =
    {
        .name = { .moveName = _("Chloroblast") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_HP_50_RECOIL,
        .power = B_UPDATED_MOVE_DATA >= GEN_9 ? 150 : 120,
        .type = TYPE_GRASS,
        .accuracy = 95,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_MOUNTAIN_GALE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Mountain Gale") },
        #else
            .name = { .moveName = _("MountainGale") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_ICE,
        .accuracy = 85,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 30,
        }),
    },

    [MOVE_VICTORY_DANCE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Victory Dance") },
        #else
            .name = { .moveName = _("VictoryDance") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_VICTORY_DANCE,
        .power = 0,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .danceMove = TRUE,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_HEADLONG_RUSH] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Headlong Rush") },
        #else
            .name = { .moveName = _("HeadlongRush") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_9 ? 120 : 100,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_DEF_SPDEF_DOWN,
            .self = TRUE,
        }),
    },

    [MOVE_BARB_BARRAGE] =
    {
        .name = { .moveName = _("Barb Barrage") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DOUBLE_POWER_ON_ARG_STATUS,
        .power = 60,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_9 ? 10 : 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .argument = STATUS1_PSN_ANY,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_POISON,
            .chance = 50,
        }),
    },

    [MOVE_ESPER_WING] =
    {
        .name = { .moveName = _("Esper Wing") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_9 ? 80 : 75,
        .type = TYPE_PSYCHIC,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_9 ? 100 : 90,
        .criticalHitStage = 1,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_PLUS_1,
            .self = TRUE,
            .chance = 100,
        }),
    },

    [MOVE_BITTER_MALICE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Bitter Malice") },
        #else
            .name = { .moveName = _("BitterMalice") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_9 ? 75 : 60,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ATK_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_SHELTER] =
    {
        .name = { .moveName = _("Shelter") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DEFENSE_UP_2,
        .power = 0,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_TRIPLE_ARROWS] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Triple Arrows") },
        #else
            .name = { .moveName = _("TripleArrows") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_9 ? 90 : 50,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_9 ? 10 : 15,
        .criticalHitStage = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_DEF_MINUS_1,
            .chance = 50,
        },
        {
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 30,
        }),
    },

    [MOVE_INFERNAL_PARADE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Infernal Parade") },
        #else
            .name = { .moveName = _("InfrnlParade") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DOUBLE_POWER_ON_ARG_STATUS,
        .power = 60,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .argument = STATUS1_ANY,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 30,
        }),
    },

    [MOVE_CEASELESS_EDGE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Ceaseless Edge") },
        #else
            .name = { .moveName = _("CeaslessEdge") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_DARK,
        .accuracy = 90,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .slicingMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPIKES,
            .chance = 100,
        }),
    },

    [MOVE_BLEAKWIND_STORM] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Bleakwind Storm") },
        #else
            .name = { .moveName = _("BlekwndStorm") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_RAIN_ALWAYS_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_9 ? 100 : 95,
        .type = TYPE_FLYING,
        .accuracy = 80,
        .pp = B_UPDATED_MOVE_DATA >= GEN_9 ? 10 : 5,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .windMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_MINUS_1,
            .chance = 30,
        }),
    },

    [MOVE_WILDBOLT_STORM] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Wildbolt Storm") },
        #else
            .name = { .moveName = _("WildbltStorm") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_RAIN_ALWAYS_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_9 ? 100 : 95,
        .type = TYPE_ELECTRIC,
        .accuracy = 80,
        .pp = B_UPDATED_MOVE_DATA >= GEN_9 ? 10 : 5,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .windMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 20,
        }),
    },

    [MOVE_SANDSEAR_STORM] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Sandsear Storm") },
        #else
            .name = { .moveName = _("SndsearStorm") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_RAIN_ALWAYS_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_9 ? 100 : 95,
        .type = TYPE_GROUND,
        .accuracy = 80,
        .pp = B_UPDATED_MOVE_DATA >= GEN_9 ? 10 : 5,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .windMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 20,
        }),
    },

    [MOVE_LUNAR_BLESSING] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Lunar Blessing") },
        #else
            .name = { .moveName = _("LunarBlessng") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_JUNGLE_HEALING,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .healingMove = TRUE,
    },

    [MOVE_TAKE_HEART] =
    {
        .name = { .moveName = _("Take Heart") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TAKE_HEART,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_TERA_BLAST] =
    {
        .name = { .moveName = _("Tera Blast") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PLACEHOLDER, // EFFECT_TERA_BLAST,
        .power = 80,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE, // Only since it isn't implemented yet
        .forcePressure = TRUE,
    },

    [MOVE_SILK_TRAP] =
    {
        .name = { .moveName = _("Silk Trap") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 4,
        .category = BATTLE_CATEGORY_STATUS,
        .protectionMove = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_AXE_KICK] =
    {
        .name = { .moveName = _("Axe Kick") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_RECOIL_IF_MISS,
        .power = 120,
        .type = TYPE_FIGHTING,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_CONFUSION,
            .chance = 30,
        }),
    },

    [MOVE_LAST_RESPECTS] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Last Respects") },
        #else
            .name = { .moveName = _("LastRespects") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PLACEHOLDER, // EFFECT_LAST_RESPECTS
        .power = 50,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .metronomeBanned = TRUE, // Only since it isn't implemented yet
    },

    [MOVE_LUMINA_CRASH] =
    {
        .name = { .moveName = _("Lumina Crash") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_DEF_MINUS_2,
            .chance = 100,
        }),
    },

    [MOVE_ORDER_UP] =
    {
        .name = { .moveName = _("Order Up") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PLACEHOLDER, // EFFECT_ORDER_UP
        .power = 80,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_JET_PUNCH] =
    {
        .name = { .moveName = _("Jet Punch") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_SPICY_EXTRACT] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Spicy Extract") },
        #else
            .name = { .moveName = _("SpicyExtract") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PLACEHOLDER, // EFFECT_SPICY_EXTRACT
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .magicCoatAffected = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_SPIN_OUT] =
    {
        .name = { .moveName = _("Spin Out") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .skyBattleBanned = B_EXTRAPOLATED_MOVE_FLAGS,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_MINUS_2,
            .self = TRUE,
        }),
    },

    [MOVE_POPULATION_BOMB] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Population Bomb") },
        #else
            .name = { .moveName = _("PoplatinBomb") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_POPULATION_BOMB,
        .power = 20,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .slicingMove = TRUE,
        .metronomeBanned = TRUE,
        .strikeCount = 10,
    },

    [MOVE_ICE_SPINNER] =
    {
        .name = { .moveName = _("Ice Spinner") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT_SET_REMOVE_TERRAIN,
        .power = 80,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .argument = ARG_TRY_REMOVE_TERRAIN_HIT, // Remove the active field terrain if there is one.
        .skyBattleBanned = B_EXTRAPOLATED_MOVE_FLAGS,
    },

    [MOVE_GLAIVE_RUSH] =
    {
        .name = { .moveName = _("Glaive Rush") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_GLAIVE_RUSH,
        .power = 120,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .metronomeBanned = TRUE, // Only since it isn't implemented yet
    },

    [MOVE_REVIVAL_BLESSING] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Revival Blessing") },
        #else
            .name = { .moveName = _("RevivlBlesng") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_REVIVAL_BLESSING,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
        .healingMove = TRUE,
        .sketchBanned = (B_SKETCH_BANS >= GEN_9),
    },

    [MOVE_SALT_CURE] =
    {
        .name = { .moveName = _("Salt Cure") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SALT_CURE,
        .power = 40,
        .type = TYPE_ROCK,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_TRIPLE_DIVE] =
    {
        .name = { .moveName = _("Triple Dive") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 30,
        .type = TYPE_WATER,
        .accuracy = 95,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .strikeCount = 3,
    },

    [MOVE_MORTAL_SPIN] =
    {
        .name = { .moveName = _("Mortal Spin") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 30,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .makesContact = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_RAPIDSPIN,
            .self = TRUE,
        },
        {
            .moveEffect = MOVE_EFFECT_POISON,
            .chance = 100,
        }),
    },

    [MOVE_DOODLE] =
    {
        .name = { .moveName = _("Doodle") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DOODLE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_FILLET_AWAY] =
    {
        .name = { .moveName = _("Fillet Away") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FILLET_AWAY,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RECOVER_HP },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_KOWTOW_CLEAVE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Kowtow Cleave") },
        #else
            .name = { .moveName = _("KowtowCleave") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 85,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_FLOWER_TRICK] =
    {
        .name = { .moveName = _("Flower Trick") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .alwaysCriticalHit = TRUE,
    },

    [MOVE_TORCH_SONG] =
    {
        .name = { .moveName = _("Torch Song") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .soundMove = TRUE,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_ATK_PLUS_1,
            .self = TRUE,
            .chance = 100,
        }),
    },

    [MOVE_AQUA_STEP] =
    {
        .name = { .moveName = _("Aqua Step") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .danceMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_PLUS_1,
            .self = TRUE,
            .chance = 100,
        }),
    },

    [MOVE_RAGING_BULL] =
    {
        .name = { .moveName = _("Raging Bull") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_RAGING_BULL,
        .power = 90,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_MAKE_IT_RAIN] =
    {
        .name = { .moveName = _("Make It Rain") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PAYDAY,
        },
        {
            .moveEffect = MOVE_EFFECT_SP_ATK_MINUS_1,
            .self = TRUE,
        }),
    },

    [MOVE_RUINATION] =
    {
        .name = { .moveName = _("Ruination") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SUPER_FANG,
        .power = 1,
        .type = TYPE_DARK,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE,
    },

    [MOVE_COLLISION_COURSE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Collision Course") },
        #else
            .name = { .moveName = _("ColisinCours") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_COLLISION_COURSE,
        .power = 100,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_ELECTRO_DRIFT] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Electro Drift") },
        #else
            .name = { .moveName = _("ElectroDrift") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_COLLISION_COURSE,
        .power = 100,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_SHED_TAIL] =
    {
        .name = { .moveName = _("Shed Tail") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SHED_TAIL,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_CHILLY_RECEPTION] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Chilly Reception") },
        #else
            .name = { .moveName = _("ChilReceptin") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_CHILLY_RECEPTION,
        .power = 0,
        .type = TYPE_ICE,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_TIDY_UP] =
    {
        .name = { .moveName = _("Tidy Up") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PLACEHOLDER, // EFFECT_TIDY_UP
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_SNOWSCAPE] =
    {
        .name = { .moveName = _("Snowscape") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SNOWSCAPE,
        .power = 0,
        .type = TYPE_ICE,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_POUNCE] =
    {
        .name = { .moveName = _("Pounce") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_TRAILBLAZE] =
    {
        .name = { .moveName = _("Trailblaze") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_PLUS_1,
            .self = TRUE,
            .chance = 100,
        }),
    },

    [MOVE_CHILLING_WATER] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Chilling Water") },
        #else
            .name = { .moveName = _("ChillingWatr") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ATK_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_HYPER_DRILL] =
    {
        .name = { .moveName = _("Hyper Drill") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresProtect = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_TWIN_BEAM] =
    {
        .name = { .moveName = _("Twin Beam") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .strikeCount = 2,
        .metronomeBanned = TRUE,
    },

    [MOVE_RAGE_FIST] =
    {
        .name = { .moveName = _("Rage Fist") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_RAGE_FIST,
        .power = 50,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_ARMOR_CANNON] =
    {
        .name = { .moveName = _("Armor Cannon") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_DEF_SPDEF_DOWN,
            .self = TRUE,
        }),
    },

    [MOVE_BITTER_BLADE] =
    {
        .name = { .moveName = _("Bitter Blade") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ABSORB,
        .power = 90,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .slicingMove = TRUE,
        .healingMove = TRUE,
    },

    [MOVE_DOUBLE_SHOCK] =
    {
        .name = { .moveName = _("Double Shock") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FAIL_IF_NOT_ARG_TYPE,
        .power = 120,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
        .argument = TYPE_ELECTRIC,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_REMOVE_ARG_TYPE,
            .self = TRUE,
        }),
    },

    [MOVE_GIGATON_HAMMER] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Gigaton Hammer") },
        #else
            .name = { .moveName = _("GigatonHammr") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 160,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .cantUseTwice = TRUE,
    },

    [MOVE_COMEUPPANCE] =
    {
        .name = { .moveName = _("Comeuppance") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_METAL_BURST,
        .power = 1,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .meFirstBanned = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_AQUA_CUTTER] =
    {
        .name = { .moveName = _("Aqua Cutter") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_WATER,
        .accuracy = 100,
        .criticalHitStage = 1,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .slicingMove = TRUE,
    },

    [MOVE_BLAZING_TORQUE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Blazing Torque") },
        #else
            .name = { .moveName = _("BlazngTorque") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .mirrorMoveBanned = TRUE,
        .meFirstBanned = TRUE,
        .mimicBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .encoreBanned = TRUE,
        .assistBanned = TRUE,
        .sketchBanned = (B_SKETCH_BANS >= GEN_9),
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 30,
        }),
    },

    [MOVE_WICKED_TORQUE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Wicked Torque") },
        #else
            .name = { .moveName = _("WickedTorque") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .mirrorMoveBanned = TRUE,
        .meFirstBanned = TRUE,
        .mimicBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .encoreBanned = TRUE,
        .assistBanned = TRUE,
        .sketchBanned = (B_SKETCH_BANS >= GEN_9),
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SLEEP,
            .chance = 10,
        }),
    },

    [MOVE_NOXIOUS_TORQUE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Noxious Torque") },
        #else
            .name = { .moveName = _("NoxiusTorque") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .mirrorMoveBanned = TRUE,
        .meFirstBanned = TRUE,
        .mimicBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .encoreBanned = TRUE,
        .assistBanned = TRUE,
        .sketchBanned = (B_SKETCH_BANS >= GEN_9),
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_POISON,
            .chance = 30,
        }),
    },

    [MOVE_COMBAT_TORQUE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Combat Torque") },
        #else
            .name = { .moveName = _("CombatTorque") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .mirrorMoveBanned = TRUE,
        .meFirstBanned = TRUE,
        .mimicBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .encoreBanned = TRUE,
        .assistBanned = TRUE,
        .sketchBanned = (B_SKETCH_BANS >= GEN_9),
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 30,
        }),
    },

    [MOVE_MAGICAL_TORQUE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Magical Torque") },
        #else
            .name = { .moveName = _("MagiclTorque") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_FAIRY,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .mirrorMoveBanned = TRUE,
        .meFirstBanned = TRUE,
        .mimicBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .encoreBanned = TRUE,
        .assistBanned = TRUE,
        .sketchBanned = (B_SKETCH_BANS >= GEN_9),
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_CONFUSION,
            .chance = 30,
        }),
    },

    [MOVE_PSYBLADE] =
    {
        .name = { .moveName = _("Psyblade") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PSYBLADE,
        .power = 80,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_HYDRO_STEAM] =
    {
        .name = { .moveName = _("Hydro Steam") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HYDRO_STEAM,
        .power = 80,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .thawsUser = TRUE,
    },

    [MOVE_BLOOD_MOON] =
    {
        .name = { .moveName = _("Blood Moon") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 140,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .cantUseTwice = TRUE,
    },

    [MOVE_MATCHA_GOTCHA] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Matcha Gotcha") },
        #else
            .name = { .moveName = _("MatchaGotcha") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ABSORB,
        .power = 80,
        .type = TYPE_GRASS,
        .accuracy = 90,
        .pp = 15,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .thawsUser = TRUE,
        .metronomeBanned = TRUE,
        .healingMove = B_EXTRAPOLATED_MOVE_FLAGS,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 20,
        }),
    },

    [MOVE_SYRUP_BOMB] =
    {
        .name = { .moveName = _("Syrup Bomb") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_GRASS,
        .accuracy = 85,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ballisticMove = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SYRUP_BOMB,
            .chance = 100,
        }),
    },

    [MOVE_IVY_CUDGEL] =
    {
        .name = { .moveName = _("Ivy Cudgel") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_IVY_CUDGEL,
        .power = 100,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 10,
        .criticalHitStage = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .metronomeBanned = TRUE,
    },

    [MOVE_ELECTRO_SHOT] =
    {
        .name = { .moveName = _("Electro Shot") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_METEOR_BEAM,
        .power = 130,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_ATK_PLUS_1,
            .self = TRUE,
            .onChargeTurnOnly = TRUE,
        }),
    },

    [MOVE_TERA_STARSTORM] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Tera Starstorm") },
        #else
            .name = { .moveName = _("TeraStarstrm") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PLACEHOLDER, //EFFECT_TERA_STARSTORM
        .power = 120,
        .type = TYPE_NORMAL, // Stellar type if used by Terapagos-Stellar
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED, // MOVE_TARGET_BOTH if used by Terapagos-Stellar
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .assistBanned = TRUE,
        .copycatBanned = TRUE,
        .mimicBanned = TRUE,
        .sketchBanned = (B_SKETCH_BANS >= GEN_9),
    },

    [MOVE_FICKLE_BEAM] =
    {
        .name = { .moveName = _("Fickle Beam") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FICKLE_BEAM,
        .power = 80,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_BURNING_BULWARK] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Burning Bulwark") },
        #else
            .name = { .moveName = _("BurnngBulwrk") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_FIRE,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 4,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .protectionMove = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_THUNDERCLAP] =
    {
        .name = { .moveName = _("Thunderclap") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SUCKER_PUNCH,
        .power = 70,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_MIGHTY_CLEAVE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Mighty Cleave") },
        #else
            .name = { .moveName = _("MightyCleave") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 95,
        .type = TYPE_ROCK,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresProtect = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_TACHYON_CUTTER] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Tachyon Cutter") },
        #else
            .name = { .moveName = _("TachyonCuttr") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .strikeCount = 2,
        .slicingMove = TRUE,
    },

    [MOVE_HARD_PRESS] =
    {
        .name = { .moveName = _("Hard Press") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_WRING_OUT,
        .power = 1,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_DRAGON_CHEER] =
    {
        .name = { .moveName = _("Dragon Cheer") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PLACEHOLDER, //EFFECT_DRAGON_CHEER
        .power = 0,
        .type = TYPE_DRAGON,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .ignoresSubstitute = TRUE,
    },

    [MOVE_ALLURING_VOICE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Alluring Voice") },
        #else
            .name = { .moveName = _("AllurngVoice") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_FAIRY,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .soundMove = TRUE,
        .sheerForceBoost = TRUE,
        .ignoresSubstitute = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_CONFUSION,
            .onlyIfTargetRaisedStats = TRUE,
            .chance = 100,
        }),
    },

    [MOVE_TEMPER_FLARE] =
    {
        .name = { .moveName = _("Temper Flare") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_STOMPING_TANTRUM,
        .power = 75,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_SUPERCELL_SLAM] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Supercell Slam") },
        #else
            .name = { .moveName = _("SuprcellSlam") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_RECOIL_IF_MISS,
        .power = 100,
        .type = TYPE_ELECTRIC,
        .accuracy = 95,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_PSYCHIC_NOISE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Psychic Noise") },
        #else
            .name = { .moveName = _("PsychicNoise") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 75,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .soundMove = TRUE,
        .ignoresSubstitute = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PSYCHIC_NOISE,
            .chance = 100,
        }),
    },

    [MOVE_UPPER_HAND] =
    {
        .name = { .moveName = _("Upper Hand") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PLACEHOLDER, //EFFECT_UPPER_HAND
        .power = 65,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 3,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_MALIGNANT_CHAIN] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = { .moveName = _("Malignant Chain") },
        #else
            .name = { .moveName = _("MalignntChan") },
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_TOXIC,
            .chance = 50,
        }),
    },

    // Z-Moves
    [MOVE_BREAKNECK_BLITZ] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Breakneck Blitz") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,    //determined from move type
    },
    [MOVE_ALL_OUT_PUMMELING] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("All Out Pummeling") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_SUPERSONIC_SKYSTRIKE] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Supersonic Skystrike") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_FLYING,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_ACID_DOWNPOUR] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Acid Downpour") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_POISON,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_TECTONIC_RAGE] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Tectonic Rage") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_GROUND,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .skyBattleBanned = B_EXTRAPOLATED_MOVE_FLAGS,
    },
    [MOVE_CONTINENTAL_CRUSH] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Continental Crush") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_ROCK,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_SAVAGE_SPIN_OUT] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Savage Spin Out") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_NEVER_ENDING_NIGHTMARE] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Never Ending Nightmare") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_GHOST,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_CORKSCREW_CRASH] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Corkscrew Crash") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_INFERNO_OVERDRIVE] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Inferno Overdrive") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_FIRE,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_HYDRO_VORTEX] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Hydro Vortex") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_BLOOM_DOOM] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Bloom Doom") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_GIGAVOLT_HAVOC] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Gigavolt Havoc") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_SHATTERED_PSYCHE] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Shattered Psyche") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_SUBZERO_SLAMMER] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Subzero Slammer") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_ICE,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_DEVASTATING_DRAKE] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Devastating Drake") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_DRAGON,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_BLACK_HOLE_ECLIPSE] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Black Hole Eclipse") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_TWINKLE_TACKLE] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Twinkle Tackle") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_CATASTROPIKA] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Catastropika") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 210,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_10000000_VOLT_THUNDERBOLT] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("10000000 Volt Thunderbolt") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 195,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .criticalHitStage = 2,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },
    [MOVE_STOKED_SPARKSURFER] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Stoked Sparksurfer") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 175,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 100,
        }),
    },
    [MOVE_EXTREME_EVOBOOST] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Extreme Evoboost") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_EXTREME_EVOBOOST,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
    },
    [MOVE_PULVERIZING_PANCAKE] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Pulverizing Pancake") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 210,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_GENESIS_SUPERNOVA] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Genesis Supernova") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT_SET_REMOVE_TERRAIN,
        .power = 185,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .argument = ARG_SET_PSYCHIC_TERRAIN, // Set Psychic Terrain. If there's a different field terrain active, overwrite it.
    },
    [MOVE_SINISTER_ARROW_RAID] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Sinister Arrow Raid") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 180,
        .type = TYPE_GHOST,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_MALICIOUS_MOONSAULT] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Malicious Moonsault") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 180,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_OCEANIC_OPERETTA] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Oceaning Operetta") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 195,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },
    [MOVE_SPLINTERED_STORMSHARDS] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Splintered Stormshards") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT_SET_REMOVE_TERRAIN,
        .power = 190,
        .type = TYPE_ROCK,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = ARG_TRY_REMOVE_TERRAIN_HIT,  // Remove the active field terrain if there is one.
    },
    [MOVE_LETS_SNUGGLE_FOREVER] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Let's Snuggle Forever") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 190,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_CLANGOROUS_SOULBLAZE] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Clangorous Soulblaze") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 185,
        .type = TYPE_DRAGON,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .soundMove = TRUE,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ALL_STATS_UP,
            .self = TRUE,
            .chance = 100,
        }),
    },
    [MOVE_GUARDIAN_OF_ALOLA] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Guardian Of Alola") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SUPER_FANG,
        .power = 1,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },
    [MOVE_SEARING_SUNRAZE_SMASH] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Searing Sunraze Smash") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 200,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_MENACING_MOONRAZE_MAELSTROM] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Menacing Moonraze Maelstrom") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 200,
        .type = TYPE_GHOST,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },
    [MOVE_LIGHT_THAT_BURNS_THE_SKY] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Light That Burns The Sky") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 200,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },
    [MOVE_SOUL_STEALING_7_STAR_STRIKE] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Soul Stealing 7 Star Strike") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 195,
        .type = TYPE_GHOST,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_MAX_GUARD] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Max Guard") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 4,
        .category = BATTLE_CATEGORY_STATUS,
        .protectionMove = TRUE,
    },

    [MOVE_MAX_FLARE] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Max Flare") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_FIRE,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_SUN,
    },

    [MOVE_MAX_FLUTTERBY] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Max Flutterby") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_LOWER_SP_ATK,
    },

    [MOVE_MAX_LIGHTNING] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Max Lightning") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_ELECTRIC_TERRAIN,
    },

    [MOVE_MAX_STRIKE] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Max Strike") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_LOWER_SPEED,
    },

    [MOVE_MAX_KNUCKLE] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Max Knuckle") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_RAISE_TEAM_ATTACK,
    },

    [MOVE_MAX_PHANTASM] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Max Phantasm") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_GHOST,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_LOWER_DEFENSE,
    },

    [MOVE_MAX_HAILSTORM] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Max Hailstorm") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_ICE,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_HAIL,
    },

    [MOVE_MAX_OOZE] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Max Ooze") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_POISON,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_RAISE_TEAM_SP_ATK,
    },

    [MOVE_MAX_GEYSER] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Max Geyser") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_RAIN,
    },

    [MOVE_MAX_AIRSTREAM] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Max Airstream") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_FLYING,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_RAISE_TEAM_SPEED,
    },

    [MOVE_MAX_STARFALL] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Max Starfall") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_MISTY_TERRAIN,
    },

    [MOVE_MAX_WYRMWIND] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Max Wyrmwind") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_DRAGON,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_LOWER_ATTACK,
    },

    [MOVE_MAX_MINDSTORM] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Max Mindstorm") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_PSYCHIC_TERRAIN,
    },

    [MOVE_MAX_ROCKFALL] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Max Rockfall") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_ROCK,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_SANDSTORM,
    },

    [MOVE_MAX_QUAKE] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Max Quake") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_GROUND,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_RAISE_TEAM_SP_DEF,
        .skyBattleBanned = B_EXTRAPOLATED_MOVE_FLAGS,
    },

    [MOVE_MAX_DARKNESS] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Max Darkness") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_LOWER_SP_DEF,
    },

    [MOVE_MAX_OVERGROWTH] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Max Overgrowth") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_GRASSY_TERRAIN,
    },

    [MOVE_MAX_STEELSPIKE] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("Max Steelspike") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_RAISE_TEAM_DEFENSE,
    },

    [MOVE_G_MAX_VINE_LASH] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("G-Max Vine Lash") },
        .description = COMPOUND_STRING("Dummy2 description."),    //ANIM TODO
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_VINE_LASH,
    },

    [MOVE_G_MAX_WILDFIRE] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("G-Max Wildfire") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_FIRE,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_WILDFIRE,
    },

    [MOVE_G_MAX_CANNONADE] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("G-Max Canonade") },
        .description = COMPOUND_STRING("Dummy2 description."),    //ANIM TODO
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_CANNONADE,
    },

    [MOVE_G_MAX_BEFUDDLE] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("G-Max Befuddle") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_EFFECT_SPORE_FOES,
    },

    [MOVE_G_MAX_VOLT_CRASH] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("G-Max Volt Crash") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_PARALYZE_FOES,
    },

    [MOVE_G_MAX_GOLD_RUSH] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("G-Max Gold Rush") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_CONFUSE_FOES_PAY_DAY,
    },

    [MOVE_G_MAX_CHI_STRIKE] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("G-Max Chi Strike") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_CRIT_PLUS,
    },

    [MOVE_G_MAX_TERROR] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("G-Max Terror") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_GHOST,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_MEAN_LOOK,
    },

    [MOVE_G_MAX_FOAM_BURST] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("G-Max Foam Burst") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_LOWER_SPEED_2_FOES,
    },

    [MOVE_G_MAX_RESONANCE] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("G-Max Resonance") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_ICE,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_AURORA_VEIL,
    },

    [MOVE_G_MAX_CUDDLE] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("G-Max Cuddle") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_INFATUATE_FOES,
    },

    [MOVE_G_MAX_REPLENISH] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("G-Max Replenish") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_RECYCLE_BERRIES,
    },

    [MOVE_G_MAX_MALODOR] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("G-Max Malodor") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_POISON,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_POISON_FOES,
    },

    [MOVE_G_MAX_MELTDOWN] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("G-Max Meltdown") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_TORMENT_FOES,
    },

    [MOVE_G_MAX_DRUM_SOLO] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("G-Max Drum Solo") },
        .description = COMPOUND_STRING("Dummy2 description."),    //ANIM TODO
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_FIXED_POWER, //EFFECT TODO
        .ignoresTargetAbility = TRUE,
    },

    [MOVE_G_MAX_FIREBALL] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("G-Max Fireball") },
        .description = COMPOUND_STRING("Dummy2 description."),    //ANIM TODO
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_FIRE,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_FIXED_POWER, //EFFECT TODO
        .ignoresTargetAbility = TRUE,
    },

    [MOVE_G_MAX_HYDROSNIPE] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("G-Max Hydrosnipe") },
        .description = COMPOUND_STRING("Dummy2 description."),    //ANIM TODO
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_FIXED_POWER, //EFFECT TODO
        .ignoresTargetAbility = TRUE,
    },

    [MOVE_G_MAX_WIND_RAGE] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("G-Max Wind Rage") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_FLYING,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_DEFOG,
    },

    [MOVE_G_MAX_GRAVITAS] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("G-Max Gravitas") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_GRAVITY,
    },

    [MOVE_G_MAX_STONESURGE] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("G-Max Stonesurge") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_STEALTH_ROCK,
    },

    [MOVE_G_MAX_VOLCALITH] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("G-Max Volcalith") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_ROCK,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_VOLCALITH,
    },

    [MOVE_G_MAX_TARTNESS] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("G-Max Tartness") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_LOWER_EVASIVENESS_FOES,
    },

    [MOVE_G_MAX_SWEETNESS] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("G-Max Sweetness") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_AROMATHERAPY,
    },

    [MOVE_G_MAX_SANDBLAST] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("G-Max Sandblast") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_GROUND,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_SANDBLAST_FOES,
    },

    [MOVE_G_MAX_STUN_SHOCK] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("G-Max Stun Shock") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_POISON_PARALYZE_FOES,
    },

    [MOVE_G_MAX_CENTIFERNO] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("G-Max Centiferno") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_FIRE,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_FIRE_SPIN_FOES,
    },

    [MOVE_G_MAX_SMITE] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("G-Max Smite") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_CONFUSE_FOES,
    },


    [MOVE_G_MAX_SNOOZE] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("G-Max Snooze") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_YAWN_FOE,
    },

    [MOVE_G_MAX_FINALE] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("G-Max Finale") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_HEAL_TEAM,
    },

    [MOVE_G_MAX_STEELSURGE] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("G-Max Steelsurge") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_STEELSURGE,
    },

    [MOVE_G_MAX_DEPLETION] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("G-Max Depletion") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_DRAGON,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_SPITE,
    },

    [MOVE_G_MAX_ONE_BLOW] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("G-Max One Blow") },
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_BYPASS_PROTECT, //EFFECT TODO
    },

    [MOVE_G_MAX_RAPID_FLOW] =
    {
        .name = { .bigMoveName = COMPOUND_STRING("G-Max Rapid Flow") },
        .description = COMPOUND_STRING("Dummy2 description."),    //ANIM TODO
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_BYPASS_PROTECT, //EFFECT TODO
    },

};
