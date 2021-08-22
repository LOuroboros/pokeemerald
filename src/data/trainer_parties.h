/*
Quick example on how to set up fully customized trainerbattles.

static const struct TrainerMon sParty_Calvin1[] = {
    {
        .nickname = _("Bahamut"),
        .ivs = BEST_IV_SPREAD,
        .lvl = 5,
        .species = SPECIES_CHARMANDER,
        .heldItem = ITEM_CHARCOAL,
        .moves = {MOVE_FLAMETHROWER, MOVE_FIRE_SPIN, MOVE_DRAGON_CLAW, MOVE_SUNNY_DAY},
        .gender = MON_MALE,
        .nature = NATURE_HARDY,
        .ability = FIRST_ABILITY, // Blaze
        .evs = {4, 0, 0, 252, 252, 0},
        .ball = ITEM_LUXURY_BALL,
        .shiny = TRUE,
        .friendship = 0,
    }
};
*/

static const struct TrainerMon sParty_Sawyer1[] = {
    {
        .lvl = 21,
        .species = SPECIES_GEODUDE,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout1[] = {
    {
        .lvl = 32,
        .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout2[] = {
    {
        .lvl = 31,
        .species = SPECIES_ZUBAT,
    },
    {
        .lvl = 31,
        .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout3[] = {
    {
        .lvl = 32,
        .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout4[] = {
    {
        .lvl = 32,
        .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern1[] = {
    {
        .lvl = 36,
        .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern2[] = {
    {
        .lvl = 36,
        .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern3[] = {
    {
        .lvl = 36,
        .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_Gabrielle1[] = {
    {
        .lvl = 26,
        .species = SPECIES_SKITTY,
    },
    {
        .lvl = 26,
        .species = SPECIES_POOCHYENA,
    },
    {
        .lvl = 26,
        .species = SPECIES_ZIGZAGOON,
    },
    {
        .lvl = 26,
        .species = SPECIES_LOTAD,
    },
    {
        .lvl = 26,
        .species = SPECIES_SEEDOT,
    },
    {
        .lvl = 26,
        .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMon sParty_GruntPetalburgWoods[] = {
    {
        .lvl = 9,
        .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_Marcel[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 29,
        .species = SPECIES_MANECTRIC,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 29,
        .species = SPECIES_SHIFTRY,
    }
};

static const struct TrainerMon sParty_Alberto[] = {
    {
        .lvl = 30,
        .species = SPECIES_PELIPPER,
    },
    {
        .lvl = 30,
        .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Ed[] = {
    {
        .lvl = 30,
        .species = SPECIES_ZANGOOSE,
    },
    {
        .lvl = 30,
        .species = SPECIES_SEVIPER,
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern4[] = {
    {
        .lvl = 36,
        .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Declan[] = {
    {
        .lvl = 34,
        .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_GruntRusturfTunnel[] = {
    {
        .lvl = 11,
        .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntWeatherInst1[] = {
    {
        .lvl = 27,
        .species = SPECIES_ZUBAT,
    },
    {
        .lvl = 27,
        .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntWeatherInst2[] = {
    {
        .lvl = 27,
        .species = SPECIES_POOCHYENA,
    },
    {
        .lvl = 27,
        .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntWeatherInst3[] = {
    {
        .lvl = 26,
        .species = SPECIES_POOCHYENA,
    },
    {
        .lvl = 26,
        .species = SPECIES_ZUBAT,
    },
    {
        .lvl = 26,
        .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntMuseum1[] = {
    {
        .lvl = 15,
        .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntMuseum2[] = {
    {
        .lvl = 14,
        .species = SPECIES_ZUBAT,
    },
    {
        .lvl = 14,
        .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter1[] = {
    {
        .lvl = 32,
        .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_GruntMtPyre1[] = {
    {
        .lvl = 32,
        .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMtPyre2[] = {
    {
        .lvl = 32,
        .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntMtPyre3[] = {
    {
        .lvl = 30,
        .species = SPECIES_POOCHYENA,
    },
    {
        .lvl = 30,
        .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntWeatherInst4[] = {
    {
        .lvl = 28,
        .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout5[] = {
    {
        .lvl = 32,
        .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout6[] = {
    {
        .lvl = 32,
        .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_Fredrick[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 30,
        .species = SPECIES_MAKUHITA,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 30,
        .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Matt[] = {
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 34,
        .species = SPECIES_MIGHTYENA,
    },
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 34,
        .species = SPECIES_GOLBAT,
    }
};

static const struct TrainerMon sParty_Zander[] = {
    {
        .lvl = 31,
        .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_ShellyWeatherInstitute[] = {
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 28,
        .species = SPECIES_CARVANHA,
    },
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 28,
        .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_ShellySeafloorCavern[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 37,
        .species = SPECIES_SHARPEDO,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 37,
        .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_Archie[] = {
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 41,
        .species = SPECIES_MIGHTYENA,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 41,
        .species = SPECIES_CROBAT,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 43,
        .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Leah[] = {
    {
        .lvl = 31,
        .species = SPECIES_SPOINK,
    }
};

static const struct TrainerMon sParty_Daisy[] = {
    {
        .lvl = 14,
        .species = SPECIES_SHROOMISH,
    },
    {
        .lvl = 14,
        .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Rose1[] = {
    {
        .lvl = 14,
        .species = SPECIES_ROSELIA,
    },
    {
        .lvl = 14,
        .species = SPECIES_SHROOMISH,
    },
    {
        .lvl = 14,
        .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Felix[] = {
    {
        .lvl = 43,
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_PSYCHIC, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
        .lvl = 43,
        .species = SPECIES_CLAYDOL,
        .moves = {MOVE_SKILL_SWAP, MOVE_EARTHQUAKE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Violet[] = {
    {
        .lvl = 26,
        .species = SPECIES_ROSELIA,
    },
    {
        .lvl = 26,
        .species = SPECIES_GLOOM,
    }
};

static const struct TrainerMon sParty_Rose2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 26,
        .species = SPECIES_SHROOMISH,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 26,
        .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Rose3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 28,
        .species = SPECIES_SHROOMISH,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 28,
        .species = SPECIES_GLOOM,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 28,
        .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Rose4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 31,
        .species = SPECIES_SHROOMISH,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 31,
        .species = SPECIES_GLOOM,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 31,
        .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Rose5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 34,
        .species = SPECIES_BRELOOM,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 34,
        .species = SPECIES_GLOOM,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 34,
        .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Dusty1[] = {
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 23,
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Chip[] = {
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 27,
        .species = SPECIES_BALTOY,
        .moves = {MOVE_PSYBEAM, MOVE_SELF_DESTRUCT, MOVE_SANDSTORM, MOVE_ANCIENT_POWER}
    },
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 27,
        .species = SPECIES_SANDSHREW,
        .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    },
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 27,
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Foster[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 25,
        .species = SPECIES_SANDSHREW,
        .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 25,
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Dusty2[] = {
    {
        .ivs = {7, 7, 7, 7, 7, 7},
        .lvl = 27,
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Dusty3[] = {
    {
        .ivs = {8, 8, 8, 8, 8, 8},
        .lvl = 30,
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Dusty4[] = {
    {
        .ivs = {9, 9, 9, 9, 9, 9},
        .lvl = 33,
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Dusty5[] = {
    {
        .ivs = {10, 10, 10, 10, 10, 10},
        .lvl = 36,
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_GabbyAndTy1[] = {
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 17,
        .species = SPECIES_MAGNEMITE,
    },
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 17,
        .species = SPECIES_WHISMUR,
    }
};

static const struct TrainerMon sParty_GabbyAndTy2[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 27,
        .species = SPECIES_MAGNEMITE,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 27,
        .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_GabbyAndTy3[] = {
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 30,
        .species = SPECIES_MAGNETON,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 30,
        .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_GabbyAndTy4[] = {
    {
        .ivs = {24, 24, 24, 24, 24, 24},
        .lvl = 33,
        .species = SPECIES_MAGNETON,
    },
    {
        .ivs = {24, 24, 24, 24, 24, 24},
        .lvl = 33,
        .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_GabbyAndTy5[] = {
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 36,
        .species = SPECIES_MAGNETON,
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 36,
        .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_GabbyAndTy6[] = {
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 39,
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_SONIC_BOOM, MOVE_THUNDER_WAVE, MOVE_METAL_SOUND, MOVE_THUNDERBOLT}
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 39,
        .species = SPECIES_EXPLOUD,
        .moves = {MOVE_ASTONISH, MOVE_STOMP, MOVE_SUPERSONIC, MOVE_HYPER_VOICE}
    }
};

static const struct TrainerMon sParty_Lola1[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 12,
        .species = SPECIES_AZURILL,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 12,
        .species = SPECIES_AZURILL,
    }
};

static const struct TrainerMon sParty_Austina[] = {
    {
        .lvl = 26,
        .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Gwen[] = {
    {
        .lvl = 26,
        .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Lola2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 26,
        .species = SPECIES_MARILL,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 26,
        .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Lola3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 29,
        .species = SPECIES_MARILL,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 29,
        .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Lola4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 32,
        .species = SPECIES_MARILL,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 32,
        .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Lola5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 35,
        .species = SPECIES_AZUMARILL,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 35,
        .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Ricky1[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 13,
        .species = SPECIES_ZIGZAGOON,
        .moves = {MOVE_SAND_ATTACK, MOVE_HEADBUTT, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMon sParty_Simon[] = {
    {
        .lvl = 12,
        .species = SPECIES_AZURILL,
    },
    {
        .lvl = 12,
        .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Charlie[] = {
    {
        .lvl = 26,
        .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Ricky2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 27,
        .species = SPECIES_LINOONE,
        .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMon sParty_Ricky3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 30,
        .species = SPECIES_LINOONE,
        .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMon sParty_Ricky4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 33,
        .species = SPECIES_LINOONE,
        .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMon sParty_Ricky5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 36,
        .species = SPECIES_LINOONE,
        .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMon sParty_Randall[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 26,
        .species = SPECIES_SWELLOW,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_QUICK_ATTACK, MOVE_AGILITY, MOVE_WING_ATTACK, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Parker[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 26,
        .species = SPECIES_SPINDA,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_TEETER_DANCE, MOVE_DIZZY_PUNCH, MOVE_FOCUS_PUNCH, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_George[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 26,
        .species = SPECIES_SLAKOTH,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_SLACK_OFF, MOVE_COUNTER, MOVE_SHADOW_BALL, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Berke[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 26,
        .species = SPECIES_VIGOROTH,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_FOCUS_ENERGY, MOVE_SLASH, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Braxton[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 28,
        .species = SPECIES_SWELLOW,
        .moves = {MOVE_FOCUS_ENERGY, MOVE_QUICK_ATTACK, MOVE_WING_ATTACK, MOVE_ENDEAVOR}
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 28,
        .species = SPECIES_TRAPINCH,
        .moves = {MOVE_BITE, MOVE_DIG, MOVE_FEINT_ATTACK, MOVE_SAND_TOMB}
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 28,
        .species = SPECIES_WAILMER,
        .moves = {MOVE_ROLLOUT, MOVE_WHIRLPOOL, MOVE_ASTONISH, MOVE_WATER_PULSE}
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 28,
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_THUNDERBOLT, MOVE_SUPERSONIC, MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM}
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 28,
        .species = SPECIES_SHIFTRY,
        .moves = {MOVE_GIGA_DRAIN, MOVE_FEINT_ATTACK, MOVE_DOUBLE_TEAM, MOVE_SWAGGER}
    }
};

static const struct TrainerMon sParty_Vincent[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 44,
        .species = SPECIES_SABLEYE,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 44,
        .species = SPECIES_MEDICHAM,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 44,
        .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Leroy[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 46,
        .species = SPECIES_MAWILE,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 46,
        .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Wilton1[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 17,
        .species = SPECIES_ELECTRIKE,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 17,
        .species = SPECIES_WAILMER,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 17,
        .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Edgar[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 43,
        .species = SPECIES_CACTURNE,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 43,
        .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Albert[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 43,
        .species = SPECIES_MAGNETON,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 43,
        .species = SPECIES_MUK,
    }
};

static const struct TrainerMon sParty_Samuel[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 42,
        .species = SPECIES_SWELLOW,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 42,
        .species = SPECIES_MAWILE,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 42,
        .species = SPECIES_KADABRA,
    }
};

static const struct TrainerMon sParty_Vito[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 42,
        .species = SPECIES_DODRIO,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 42,
        .species = SPECIES_KADABRA,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 42,
        .species = SPECIES_ELECTRODE,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 42,
        .species = SPECIES_SHIFTRY,
    }
};

static const struct TrainerMon sParty_Owen[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 42,
        .species = SPECIES_KECLEON,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 42,
        .species = SPECIES_GRAVELER,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 42,
        .species = SPECIES_WAILORD,
    }
};

static const struct TrainerMon sParty_Wilton2[] = {
    {
        .ivs = {13, 13, 13, 13, 13, 13},
        .lvl = 26,
        .species = SPECIES_ELECTRIKE,
    },
    {
        .ivs = {13, 13, 13, 13, 13, 13},
        .lvl = 26,
        .species = SPECIES_WAILMER,
    },
    {
        .ivs = {13, 13, 13, 13, 13, 13},
        .lvl = 26,
        .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Wilton3[] = {
    {
        .ivs = {14, 14, 14, 14, 14, 14},
        .lvl = 29,
        .species = SPECIES_MANECTRIC,
    },
    {
        .ivs = {14, 14, 14, 14, 14, 14},
        .lvl = 29,
        .species = SPECIES_WAILMER,
    },
    {
        .ivs = {14, 14, 14, 14, 14, 14},
        .lvl = 29,
        .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Wilton4[] = {
    {
        .ivs = {15, 15, 15, 15, 15, 15},
        .lvl = 32,
        .species = SPECIES_MANECTRIC,
    },
    {
        .ivs = {15, 15, 15, 15, 15, 15},
        .lvl = 32,
        .species = SPECIES_WAILMER,
    },
    {
        .ivs = {15, 15, 15, 15, 15, 15},
        .lvl = 32,
        .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Wilton5[] = {
    {
        .ivs = {17, 17, 17, 17, 17, 17},
        .lvl = 35,
        .species = SPECIES_MANECTRIC,
    },
    {
        .ivs = {17, 17, 17, 17, 17, 17},
        .lvl = 35,
        .species = SPECIES_WAILMER,
    },
    {
        .ivs = {17, 17, 17, 17, 17, 17},
        .lvl = 35,
        .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Warren[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 33,
        .species = SPECIES_GRAVELER,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 33,
        .species = SPECIES_LUDICOLO,
    }
};

static const struct TrainerMon sParty_Mary[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 26,
        .species = SPECIES_DELCATTY,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_FEINT_ATTACK, MOVE_SHOCK_WAVE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Alexia[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 26,
        .species = SPECIES_WIGGLYTUFF,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_DEFENSE_CURL, MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Jody[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 26,
        .species = SPECIES_ZANGOOSE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SWORDS_DANCE, MOVE_SLASH, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Wendy[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 29,
        .species = SPECIES_MAWILE,
        .moves = {MOVE_BATON_PASS, MOVE_FEINT_ATTACK, MOVE_FAKE_TEARS, MOVE_BITE}
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 29,
        .species = SPECIES_ROSELIA,
        .moves = {MOVE_MEGA_DRAIN, MOVE_MAGICAL_LEAF, MOVE_GRASS_WHISTLE, MOVE_LEECH_SEED}
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 29,
        .species = SPECIES_PELIPPER,
        .moves = {MOVE_FLY, MOVE_WATER_GUN, MOVE_MIST, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Keira[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 45,
        .species = SPECIES_LAIRON,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 45,
        .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Brooke1[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 17,
        .species = SPECIES_WINGULL,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 17,
        .species = SPECIES_NUMEL,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 17,
        .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Jennifer[] = {
    {
        .ivs = {24, 24, 24, 24, 24, 24},
        .lvl = 30,
        .species = SPECIES_SABLEYE,
    }
};

static const struct TrainerMon sParty_Hope[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 45,
        .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Shannon[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 45,
        .species = SPECIES_CLAYDOL,
    }
};

static const struct TrainerMon sParty_Michelle[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 42,
        .species = SPECIES_TORKOAL,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 42,
        .species = SPECIES_MEDICHAM,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 42,
        .species = SPECIES_LUDICOLO,
    }
};

static const struct TrainerMon sParty_Caroline[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 43,
        .species = SPECIES_SKARMORY,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 43,
        .species = SPECIES_SABLEYE,
    }
};

static const struct TrainerMon sParty_Julie[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 42,
        .species = SPECIES_SANDSLASH,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 42,
        .species = SPECIES_NINETALES,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 42,
        .species = SPECIES_TROPIUS,
    }
};

static const struct TrainerMon sParty_Brooke2[] = {
    {
        .ivs = {13, 13, 13, 13, 13, 13},
        .lvl = 26,
        .species = SPECIES_WINGULL,
    },
    {
        .ivs = {13, 13, 13, 13, 13, 13},
        .lvl = 26,
        .species = SPECIES_NUMEL,
    },
    {
        .ivs = {13, 13, 13, 13, 13, 13},
        .lvl = 26,
        .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Brooke3[] = {
    {
        .ivs = {14, 14, 14, 14, 14, 14},
        .lvl = 29,
        .species = SPECIES_PELIPPER,
    },
    {
        .ivs = {14, 14, 14, 14, 14, 14},
        .lvl = 29,
        .species = SPECIES_NUMEL,
    },
    {
        .ivs = {14, 14, 14, 14, 14, 14},
        .lvl = 29,
        .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Brooke4[] = {
    {
        .ivs = {15, 15, 15, 15, 15, 15},
        .lvl = 32,
        .species = SPECIES_PELIPPER,
    },
    {
        .ivs = {15, 15, 15, 15, 15, 15},
        .lvl = 32,
        .species = SPECIES_NUMEL,
    },
    {
        .ivs = {15, 15, 15, 15, 15, 15},
        .lvl = 32,
        .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Brooke5[] = {
    {
        .ivs = {17, 17, 17, 17, 17, 17},
        .lvl = 34,
        .species = SPECIES_PELIPPER,
    },
    {
        .ivs = {17, 17, 17, 17, 17, 17},
        .lvl = 34,
        .species = SPECIES_CAMERUPT,
    },
    {
        .ivs = {17, 17, 17, 17, 17, 17},
        .lvl = 34,
        .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Patricia[] = {
    {
        .lvl = 41,
        .species = SPECIES_BANETTE,
    },
    {
        .lvl = 41,
        .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMon sParty_Kindra[] = {
    {
        .lvl = 30,
        .species = SPECIES_DUSKULL,
    },
    {
        .lvl = 30,
        .species = SPECIES_SHUPPET,
    }
};

static const struct TrainerMon sParty_Tammy[] = {
    {
        .lvl = 29,
        .species = SPECIES_DUSKULL,
    },
    {
        .lvl = 29,
        .species = SPECIES_SHUPPET,
    }
};

static const struct TrainerMon sParty_Valerie1[] = {
    {
        .lvl = 32,
        .species = SPECIES_SABLEYE,
    }
};

static const struct TrainerMon sParty_Tasha[] = {
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 32,
        .species = SPECIES_SHUPPET,
    }
};

static const struct TrainerMon sParty_Valerie2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 31,
        .species = SPECIES_SABLEYE,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 31,
        .species = SPECIES_SPOINK,
    }
};

static const struct TrainerMon sParty_Valerie3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 35,
        .species = SPECIES_SPOINK,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 35,
        .species = SPECIES_SABLEYE,
    }
};

static const struct TrainerMon sParty_Valerie4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 40,
        .species = SPECIES_SPOINK,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 40,
        .species = SPECIES_SABLEYE,
    }
};

static const struct TrainerMon sParty_Valerie5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 42,
        .species = SPECIES_DUSKULL,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 42,
        .species = SPECIES_SABLEYE,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 42,
        .species = SPECIES_GRUMPIG,
    }
};

static const struct TrainerMon sParty_Cindy1[] = {
    {
        .lvl = 7,
        .species = SPECIES_ZIGZAGOON,
        .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Daphne[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 39,
        .species = SPECIES_LUVDISC,
        .heldItem = ITEM_NUGGET,
        .moves = {MOVE_ATTRACT, MOVE_SWEET_KISS, MOVE_FLAIL, MOVE_WATER_PULSE}
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 39,
        .species = SPECIES_LUVDISC,
        .heldItem = ITEM_NUGGET,
        .moves = {MOVE_ATTRACT, MOVE_SAFEGUARD, MOVE_TAKE_DOWN, MOVE_WATER_PULSE}
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter2[] = {
    {
        .lvl = 26,
        .species = SPECIES_MIGHTYENA,
    },
    {
        .lvl = 28,
        .species = SPECIES_MIGHTYENA,
    },
    {
        .lvl = 30,
        .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Cindy2[] = {
    {
        .lvl = 11,
        .species = SPECIES_ZIGZAGOON,
        .heldItem = ITEM_NUGGET,
        .moves = {MOVE_TACKLE, MOVE_TAIL_WHIP, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Brianna[] = {
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 40,
        .species = SPECIES_SEAKING,
        .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Naomi[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 45,
        .species = SPECIES_ROSELIA,
        .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Cindy3[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 27,
        .species = SPECIES_LINOONE,
        .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Cindy4[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 30,
        .species = SPECIES_LINOONE,
        .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Cindy5[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 33,
        .species = SPECIES_LINOONE,
        .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Cindy6[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 36,
        .species = SPECIES_LINOONE,
        .heldItem = ITEM_NUGGET,
        .moves = {MOVE_FURY_SWIPES, MOVE_MUD_SPORT, MOVE_ODOR_SLEUTH, MOVE_SAND_ATTACK}
    }
};

static const struct TrainerMon sParty_Melissa[] = {
    {
        .lvl = 21,
        .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Sheila[] = {
    {
        .lvl = 21,
        .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sParty_Shirley[] = {
    {
        .lvl = 21,
        .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Jessica1[] = {
    {
        .lvl = 29,
        .species = SPECIES_KECLEON,
        .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
        .lvl = 29,
        .species = SPECIES_SEVIPER,
        .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Connie[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 40,
        .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Bridget[] = {
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 40,
        .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Olivia[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 35,
        .species = SPECIES_CLAMPERL,
        .moves = {MOVE_IRON_DEFENSE, MOVE_WHIRLPOOL, MOVE_RAIN_DANCE, MOVE_WATER_PULSE}
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 37,
        .species = SPECIES_CORPHISH,
        .moves = {MOVE_TAUNT, MOVE_CRABHAMMER, MOVE_WATER_PULSE, MOVE_NONE}
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 39,
        .species = SPECIES_LOMBRE,
        .moves = {MOVE_UPROAR, MOVE_FURY_SWIPES, MOVE_FAKE_OUT, MOVE_WATER_PULSE}
    }
};

static const struct TrainerMon sParty_Tiffany[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 39,
        .species = SPECIES_CARVANHA,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 39,
        .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Jessica2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 35,
        .species = SPECIES_KECLEON,
        .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 35,
        .species = SPECIES_SEVIPER,
        .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Jessica3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 38,
        .species = SPECIES_KECLEON,
        .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 38,
        .species = SPECIES_SEVIPER,
        .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Jessica4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 41,
        .species = SPECIES_KECLEON,
        .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 41,
        .species = SPECIES_SEVIPER,
        .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Jessica5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 44,
        .species = SPECIES_KECLEON,
        .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 44,
        .species = SPECIES_SEVIPER,
        .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Winston1[] = {
    {
        .lvl = 7,
        .species = SPECIES_ZIGZAGOON,
        .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Mollie[] = {
    {
        .lvl = 33,
        .species = SPECIES_WHISCASH,
    },
    {
        .ivs = {24, 24, 24, 24, 24, 24},
        .lvl = 33,
        .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Garret[] = {
    {
        .lvl = 45,
        .species = SPECIES_AZUMARILL,
        .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Winston2[] = {
    {
        .lvl = 27,
        .species = SPECIES_LINOONE,
        .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Winston3[] = {
    {
        .lvl = 30,
        .species = SPECIES_LINOONE,
        .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Winston4[] = {
    {
        .lvl = 33,
        .species = SPECIES_LINOONE,
        .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Winston5[] = {
    {
        .lvl = 36,
        .species = SPECIES_LINOONE,
        .heldItem = ITEM_NUGGET,
        .moves = {MOVE_FURY_SWIPES, MOVE_MUD_SPORT, MOVE_ODOR_SLEUTH, MOVE_SAND_ATTACK}
    }
};

static const struct TrainerMon sParty_Steve1[] = {
    {
        .lvl = 19,
        .species = SPECIES_ARON,
    }
};

static const struct TrainerMon sParty_Thalia1[] = {
    {
        .lvl = 25,
        .species = SPECIES_WAILMER,
    },
    {
        .lvl = 25,
        .species = SPECIES_HORSEA,
    }
};

static const struct TrainerMon sParty_Mark[] = {
    {
        .lvl = 31,
        .species = SPECIES_RHYHORN,
    }
};

static const struct TrainerMon sParty_GruntMtChimney1[] = {
    {
        .lvl = 20,
        .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Steve2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 27,
        .species = SPECIES_LAIRON,
    }
};

static const struct TrainerMon sParty_Steve3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 29,
        .species = SPECIES_LAIRON,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 29,
        .species = SPECIES_RHYHORN,
    }
};

static const struct TrainerMon sParty_Steve4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 32,
        .species = SPECIES_LAIRON,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 32,
        .species = SPECIES_RHYHORN,
    }
};

static const struct TrainerMon sParty_Steve5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 35,
        .species = SPECIES_AGGRON,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 35,
        .species = SPECIES_RHYDON,
    }
};

static const struct TrainerMon sParty_Luis[] = {
    {
        .lvl = 26,
        .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Dominik[] = {
    {
        .lvl = 26,
        .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Douglas[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 24,
        .species = SPECIES_TENTACOOL,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 24,
        .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Darrin[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 24,
        .species = SPECIES_TENTACOOL,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 24,
        .species = SPECIES_WINGULL,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 24,
        .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Tony1[] = {
    {
        .lvl = 26,
        .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Jerome[] = {
    {
        .lvl = 26,
        .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Matthew[] = {
    {
        .lvl = 26,
        .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_David[] = {
    {
        .lvl = 25,
        .species = SPECIES_TENTACOOL,
    },
    {
        .lvl = 25,
        .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Spencer[] = {
    {
        .lvl = 33,
        .species = SPECIES_TENTACOOL,
    },
    {
        .lvl = 33,
        .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Roland[] = {
    {
        .lvl = 34,
        .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Nolen[] = {
    {
        .lvl = 34,
        .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Stan[] = {
    {
        .lvl = 34,
        .species = SPECIES_HORSEA,
    }
};

static const struct TrainerMon sParty_Barry[] = {
    {
        .lvl = 34,
        .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Dean[] = {
    {
        .lvl = 31,
        .species = SPECIES_CARVANHA,
    },
    {
        .lvl = 31,
        .species = SPECIES_WINGULL,
    },
    {
        .lvl = 31,
        .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Rodney[] = {
    {
        .lvl = 34,
        .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Richard[] = {
    {
        .lvl = 34,
        .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Herman[] = {
    {
        .lvl = 33,
        .species = SPECIES_WINGULL,
    },
    {
        .lvl = 33,
        .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Santiago[] = {
    {
        .lvl = 33,
        .species = SPECIES_TENTACRUEL,
    },
    {
        .lvl = 33,
        .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Gilbert[] = {
    {
        .lvl = 34,
        .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Franklin[] = {
    {
        .lvl = 34,
        .species = SPECIES_SEALEO,
    }
};

static const struct TrainerMon sParty_Kevin[] = {
    {
        .lvl = 34,
        .species = SPECIES_SPHEAL,
    }
};

static const struct TrainerMon sParty_Jack[] = {
    {
        .lvl = 34,
        .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Dudley[] = {
    {
        .lvl = 33,
        .species = SPECIES_TENTACOOL,
    },
    {
        .lvl = 33,
        .species = SPECIES_WINGULL,
    },
    {
        .lvl = 33,
        .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Chad[] = {
    {
        .lvl = 33,
        .species = SPECIES_TENTACOOL,
    },
    {
        .lvl = 33,
        .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Tony2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 30,
        .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Tony3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 33,
        .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Tony4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 34,
        .species = SPECIES_STARYU,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 36,
        .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Tony5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 37,
        .species = SPECIES_STARMIE,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 39,
        .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Takao[] = {
    {
        .ivs = {15, 15, 15, 15, 15, 15},
        .lvl = 13,
        .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Hitoshi[] = {
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 32,
        .species = SPECIES_MACHOP,
    },
    {
        .ivs = {24, 24, 24, 24, 24, 24},
        .lvl = 32,
        .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Kiyo[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 34,
        .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Koichi[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 24,
        .species = SPECIES_MACHOP,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 28,
        .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Nob1[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 19,
        .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Nob2[] = {
    {
        .ivs = {13, 13, 13, 13, 13, 13},
        .lvl = 27,
        .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Nob3[] = {
    {
        .ivs = {14, 14, 14, 14, 14, 14},
        .lvl = 29,
        .species = SPECIES_MACHOP,
    },
    {
        .ivs = {14, 14, 14, 14, 14, 14},
        .lvl = 29,
        .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Nob4[] = {
    {
        .ivs = {15, 15, 15, 15, 15, 15},
        .lvl = 31,
        .species = SPECIES_MACHOP,
    },
    {
        .ivs = {15, 15, 15, 15, 15, 15},
        .lvl = 31,
        .species = SPECIES_MACHOKE,
    },
    {
        .ivs = {15, 15, 15, 15, 15, 15},
        .lvl = 31,
        .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Nob5[] = {
    {
        .ivs = {17, 17, 17, 17, 17, 17},
        .lvl = 33,
        .species = SPECIES_MACHOP,
        .heldItem = ITEM_NONE
    },
    {
        .ivs = {17, 17, 17, 17, 17, 17},
        .lvl = 33,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_NONE
    },
    {
        .ivs = {17, 17, 17, 17, 17, 17},
        .lvl = 33,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_NONE
    },
    {
        .ivs = {17, 17, 17, 17, 17, 17},
        .lvl = 33,
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_BLACK_BELT
    }
};

static const struct TrainerMon sParty_Yuji[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 26,
        .species = SPECIES_MAKUHITA,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 26,
        .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Daisuke[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 19,
        .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Atsushi[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 32,
        .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Kirk[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 17,
        .species = SPECIES_ELECTRIKE,
        .moves = {MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_SPARK, MOVE_LEER}
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 17,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_CHARGE, MOVE_SHOCK_WAVE, MOVE_SCREECH, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_GruntAquaHideout7[] = {
    {
        .lvl = 31,
        .species = SPECIES_POOCHYENA,
    },
    {
        .lvl = 31,
        .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout8[] = {
    {
        .lvl = 32,
        .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Shawn[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 17,
        .species = SPECIES_VOLTORB,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 17,
        .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Fernando1[] = {
    {
        .lvl = 30,
        .species = SPECIES_ELECTRIKE,
    },
    {
        .lvl = 30,
        .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Dalton1[] = {
    {
        .lvl = 15,
        .species = SPECIES_MAGNEMITE,
    },
    {
        .lvl = 15,
        .species = SPECIES_WHISMUR,
    }
};

static const struct TrainerMon sParty_Dalton2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 25,
        .species = SPECIES_MAGNEMITE,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 25,
        .species = SPECIES_WHISMUR,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 25,
        .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Dalton3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 28,
        .species = SPECIES_MAGNEMITE,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 28,
        .species = SPECIES_LOUDRED,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 28,
        .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Dalton4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 31,
        .species = SPECIES_MAGNETON,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 31,
        .species = SPECIES_LOUDRED,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 31,
        .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Dalton5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 34,
        .species = SPECIES_MAGNETON,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 34,
        .species = SPECIES_EXPLOUD,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 34,
        .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Cole[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 23,
        .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Jeff[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 22,
        .species = SPECIES_SLUGMA,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 22,
        .species = SPECIES_SLUGMA,
    }
};

static const struct TrainerMon sParty_Axle[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 23,
        .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Jace[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 23,
        .species = SPECIES_SLUGMA,
    }
};

static const struct TrainerMon sParty_Keegan[] = {
    {
        .ivs = {14, 14, 14, 14, 14, 14},
        .lvl = 23,
        .species = SPECIES_SLUGMA,
    }
};

static const struct TrainerMon sParty_Bernie1[] = {
    {
        .lvl = 18,
        .species = SPECIES_SLUGMA,
    },
    {
        .lvl = 18,
        .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Bernie2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 26,
        .species = SPECIES_SLUGMA,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 26,
        .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Bernie3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 29,
        .species = SPECIES_SLUGMA,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 29,
        .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Bernie4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 32,
        .species = SPECIES_SLUGMA,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 32,
        .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Bernie5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 35,
        .species = SPECIES_MAGCARGO,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 35,
        .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Drew[] = {
    {
        .lvl = 23,
        .species = SPECIES_SANDSHREW,
        .moves = {MOVE_DIG, MOVE_SAND_ATTACK, MOVE_POISON_STING, MOVE_SLASH}
    }
};

static const struct TrainerMon sParty_Beau[] = {
    {
        .lvl = 21,
        .species = SPECIES_BALTOY,
        .moves = {MOVE_RAPID_SPIN, MOVE_MUD_SLAP, MOVE_PSYBEAM, MOVE_ROCK_TOMB}
    },
    {
        .lvl = 21,
        .species = SPECIES_SANDSHREW,
        .moves = {MOVE_POISON_STING, MOVE_SAND_ATTACK, MOVE_SCRATCH, MOVE_DIG}
    },
    {
        .lvl = 21,
        .species = SPECIES_BALTOY,
        .moves = {MOVE_RAPID_SPIN, MOVE_MUD_SLAP, MOVE_PSYBEAM, MOVE_ROCK_TOMB}
    }
};

static const struct TrainerMon sParty_Larry[] = {
    {
        .lvl = 18,
        .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Shane[] = {
    {
        .lvl = 18,
        .species = SPECIES_SANDSHREW,
    },
    {
        .lvl = 18,
        .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Justin[] = {
    {
        .lvl = 24,
        .species = SPECIES_KECLEON,
    }
};

static const struct TrainerMon sParty_Ethan1[] = {
    {
        .lvl = 20,
        .species = SPECIES_ZIGZAGOON,
    },
    {
        .lvl = 20,
        .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMon sParty_Autumn[] = {
    {
        .lvl = 21,
        .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sParty_Travis[] = {
    {
        .lvl = 18,
        .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Ethan2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 26,
        .species = SPECIES_ZIGZAGOON,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 26,
        .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMon sParty_Ethan3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 29,
        .species = SPECIES_LINOONE,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 29,
        .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Ethan4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 31,
        .species = SPECIES_SANDSHREW,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 31,
        .species = SPECIES_SWELLOW,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 31,
        .species = SPECIES_LINOONE,
    }
};

static const struct TrainerMon sParty_Ethan5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 34,
        .species = SPECIES_SWELLOW,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 34,
        .species = SPECIES_SANDSLASH,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 34,
        .species = SPECIES_LINOONE,
    }
};

static const struct TrainerMon sParty_Brent[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 26,
        .species = SPECIES_SURSKIT,
    }
};

static const struct TrainerMon sParty_Donald[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 24,
        .species = SPECIES_WURMPLE,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 24,
        .species = SPECIES_SILCOON,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 24,
        .species = SPECIES_BEAUTIFLY,
    }
};

static const struct TrainerMon sParty_Taylor[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 27,
        .species = SPECIES_WURMPLE,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 27,
        .species = SPECIES_CASCOON,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 27,
        .species = SPECIES_DUSTOX,
    }
};

static const struct TrainerMon sParty_Jeffrey1[] = {
    {
        .lvl = 27,
        .species = SPECIES_SURSKIT,
    },
    {
        .lvl = 27,
        .species = SPECIES_SURSKIT,
    },
    {
        .lvl = 27,
        .species = SPECIES_SURSKIT,
    }
};

static const struct TrainerMon sParty_Derek[] = {
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 16,
        .species = SPECIES_DUSTOX,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 16,
        .species = SPECIES_BEAUTIFLY,
    }
};

static const struct TrainerMon sParty_Jeffrey2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 31,
        .species = SPECIES_SURSKIT,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 31,
        .species = SPECIES_SURSKIT,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 31,
        .species = SPECIES_SURSKIT,
    }
};

static const struct TrainerMon sParty_Jeffrey3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 34,
        .species = SPECIES_SURSKIT,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 34,
        .species = SPECIES_SURSKIT,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 34,
        .species = SPECIES_MASQUERAIN,
    }
};

static const struct TrainerMon sParty_Jeffrey4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 36,
        .species = SPECIES_SURSKIT,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 36,
        .species = SPECIES_WURMPLE,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 36,
        .species = SPECIES_SURSKIT,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 36,
        .species = SPECIES_MASQUERAIN,
    }
};

static const struct TrainerMon sParty_Jeffrey5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 38,
        .species = SPECIES_SURSKIT,
        .heldItem = ITEM_NONE
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 38,
        .species = SPECIES_DUSTOX,
        .heldItem = ITEM_NONE
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 38,
        .species = SPECIES_SURSKIT,
        .heldItem = ITEM_NONE
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 38,
        .species = SPECIES_MASQUERAIN,
        .heldItem = ITEM_SILVER_POWDER
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 38,
        .species = SPECIES_BEAUTIFLY,
        .heldItem = ITEM_NONE
    }
};

static const struct TrainerMon sParty_Edward[] = {
    {
        .lvl = 15,
        .species = SPECIES_ABRA,
        .moves = {MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Preston[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 36,
        .species = SPECIES_KIRLIA,
    }
};

static const struct TrainerMon sParty_Virgil[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 36,
        .species = SPECIES_RALTS,
    }
};

static const struct TrainerMon sParty_Blake[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 36,
        .species = SPECIES_GIRAFARIG,
    }
};

static const struct TrainerMon sParty_William[] = {
    {
        .lvl = 26,
        .species = SPECIES_RALTS,
    },
    {
        .lvl = 26,
        .species = SPECIES_RALTS,
    },
    {
        .lvl = 26,
        .species = SPECIES_KIRLIA,
    }
};

static const struct TrainerMon sParty_Joshua[] = {
    {
        .lvl = 41,
        .species = SPECIES_KADABRA,
    },
    {
        .lvl = 41,
        .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMon sParty_Cameron1[] = {
    {
        .lvl = 31,
        .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMon sParty_Cameron2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 33,
        .species = SPECIES_KADABRA,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 33,
        .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMon sParty_Cameron3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 38,
        .species = SPECIES_KADABRA,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 38,
        .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMon sParty_Cameron4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 41,
        .species = SPECIES_KADABRA,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 41,
        .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMon sParty_Cameron5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 45,
        .species = SPECIES_SOLROCK,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 45,
        .species = SPECIES_ALAKAZAM,
    }
};

static const struct TrainerMon sParty_Jaclyn[] = {
    {
        .lvl = 16,
        .species = SPECIES_ABRA,
        .moves = {MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Hannah[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 36,
        .species = SPECIES_KIRLIA,
    }
};

static const struct TrainerMon sParty_Samantha[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 36,
        .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Maura[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 36,
        .species = SPECIES_KADABRA,
    }
};

static const struct TrainerMon sParty_Kayla[] = {
    {
        .lvl = 26,
        .species = SPECIES_WOBBUFFET,
    },
    {
        .lvl = 26,
        .species = SPECIES_NATU,
    },
    {
        .lvl = 26,
        .species = SPECIES_KADABRA,
    }
};

static const struct TrainerMon sParty_Alexis[] = {
    {
        .lvl = 41,
        .species = SPECIES_KIRLIA,
    },
    {
        .lvl = 41,
        .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Jacki1[] = {
    {
        .lvl = 30,
        .species = SPECIES_KADABRA,
    },
    {
        .lvl = 30,
        .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMon sParty_Jacki2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 34,
        .species = SPECIES_KADABRA,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 34,
        .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMon sParty_Jacki3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 37,
        .species = SPECIES_KADABRA,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 37,
        .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMon sParty_Jacki4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 40,
        .species = SPECIES_KADABRA,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 40,
        .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMon sParty_Jacki5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 43,
        .species = SPECIES_LUNATONE,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 43,
        .species = SPECIES_ALAKAZAM,
    }
};

static const struct TrainerMon sParty_Walter1[] = {
    {
        .lvl = 29,
        .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Micah[] = {
    {
        .lvl = 44,
        .species = SPECIES_MANECTRIC,
    },
    {
        .lvl = 44,
        .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Thomas[] = {
    {
        .lvl = 45,
        .species = SPECIES_ZANGOOSE,
    }
};

static const struct TrainerMon sParty_Walter2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 34,
        .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Walter3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 36,
        .species = SPECIES_LINOONE,
        .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES}
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 36,
        .species = SPECIES_MANECTRIC,
        .moves = {MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_ROAR}
    }
};

static const struct TrainerMon sParty_Walter4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 39,
        .species = SPECIES_LINOONE,
        .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES}
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 39,
        .species = SPECIES_MANECTRIC,
        .moves = {MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Walter5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 41,
        .species = SPECIES_LINOONE,
        .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES}
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 41,
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_FURY_SWIPES, MOVE_DISABLE, MOVE_CONFUSION, MOVE_PSYCH_UP}
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 41,
        .species = SPECIES_MANECTRIC,
        .moves = {MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_ROAR}
    }
};

static const struct TrainerMon sParty_Sidney[] = {
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 46,
        .species = SPECIES_MIGHTYENA,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_ROAR, MOVE_DOUBLE_EDGE, MOVE_SAND_ATTACK, MOVE_CRUNCH}
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 48,
        .species = SPECIES_SHIFTRY,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_TORMENT, MOVE_DOUBLE_TEAM, MOVE_SWAGGER, MOVE_EXTRASENSORY}
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 46,
        .species = SPECIES_CACTURNE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_LEECH_SEED, MOVE_FEINT_ATTACK, MOVE_NEEDLE_ARM, MOVE_COTTON_SPORE}
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 48,
        .species = SPECIES_CRAWDAUNT,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SURF, MOVE_SWORDS_DANCE, MOVE_STRENGTH, MOVE_FACADE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 49,
        .species = SPECIES_ABSOL,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_SLASH}
    }
};

static const struct TrainerMon sParty_Phoebe[] = {
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 48,
        .species = SPECIES_DUSCLOPS,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SHADOW_PUNCH, MOVE_CONFUSE_RAY, MOVE_CURSE, MOVE_PROTECT}
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 49,
        .species = SPECIES_BANETTE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SHADOW_BALL, MOVE_GRUDGE, MOVE_WILL_O_WISP, MOVE_FEINT_ATTACK}
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 50,
        .species = SPECIES_SABLEYE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SHADOW_BALL, MOVE_DOUBLE_TEAM, MOVE_NIGHT_SHADE, MOVE_FEINT_ATTACK}
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 49,
        .species = SPECIES_BANETTE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_FACADE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 51,
        .species = SPECIES_DUSCLOPS,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_SHADOW_BALL, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Glacia[] = {
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 50,
        .species = SPECIES_SEALEO,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_ENCORE, MOVE_BODY_SLAM, MOVE_HAIL, MOVE_ICE_BALL}
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 50,
        .species = SPECIES_GLALIE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_LIGHT_SCREEN, MOVE_CRUNCH, MOVE_ICY_WIND, MOVE_ICE_BEAM}
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 52,
        .species = SPECIES_SEALEO,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_ATTRACT, MOVE_DOUBLE_EDGE, MOVE_HAIL, MOVE_BLIZZARD}
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 52,
        .species = SPECIES_GLALIE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SHADOW_BALL, MOVE_EXPLOSION, MOVE_HAIL, MOVE_ICE_BEAM}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 53,
        .species = SPECIES_WALREIN,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_SURF, MOVE_BODY_SLAM, MOVE_ICE_BEAM, MOVE_SHEER_COLD}
    }
};

static const struct TrainerMon sParty_Drake[] = {
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 52,
        .species = SPECIES_SHELGON,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_ROCK_TOMB, MOVE_DRAGON_CLAW, MOVE_PROTECT, MOVE_DOUBLE_EDGE}
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 54,
        .species = SPECIES_ALTARIA,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE, MOVE_AERIAL_ACE}
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 53,
        .species = SPECIES_KINGDRA,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SMOKESCREEN, MOVE_DRAGON_DANCE, MOVE_SURF, MOVE_BODY_SLAM}
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 53,
        .species = SPECIES_FLYGON,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_FLAMETHROWER, MOVE_CRUNCH, MOVE_DRAGON_BREATH, MOVE_EARTHQUAKE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 55,
        .species = SPECIES_SALAMENCE,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_FLAMETHROWER, MOVE_DRAGON_CLAW, MOVE_ROCK_SLIDE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Roxanne1[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 12,
        .species = SPECIES_GEODUDE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_TACKLE, MOVE_DEFENSE_CURL, MOVE_ROCK_THROW, MOVE_ROCK_TOMB}
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 12,
        .species = SPECIES_GEODUDE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_TACKLE, MOVE_DEFENSE_CURL, MOVE_ROCK_THROW, MOVE_ROCK_TOMB}
    },
    {
        .ivs = {24, 24, 24, 24, 24, 24},
        .lvl = 15,
        .species = SPECIES_NOSEPASS,
        .heldItem = ITEM_ORAN_BERRY,
        .moves = {MOVE_BLOCK, MOVE_HARDEN, MOVE_TACKLE, MOVE_ROCK_TOMB}
    }
};

static const struct TrainerMon sParty_Brawly1[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 16,
        .species = SPECIES_MACHOP,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_KARATE_CHOP, MOVE_LOW_KICK, MOVE_SEISMIC_TOSS, MOVE_BULK_UP}
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 16,
        .species = SPECIES_MEDITITE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_BULK_UP}
    },
    {
        .ivs = {24, 24, 24, 24, 24, 24},
        .lvl = 19,
        .species = SPECIES_MAKUHITA,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_ARM_THRUST, MOVE_VITAL_THROW, MOVE_REVERSAL, MOVE_BULK_UP}
    }
};

static const struct TrainerMon sParty_Wattson1[] = {
    {
        .ivs = {24, 24, 24, 24, 24, 24},
        .lvl = 20,
        .species = SPECIES_VOLTORB,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_ROLLOUT, MOVE_SPARK, MOVE_SELF_DESTRUCT, MOVE_SHOCK_WAVE}
    },
    {
        .ivs = {24, 24, 24, 24, 24, 24},
        .lvl = 20,
        .species = SPECIES_ELECTRIKE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SHOCK_WAVE, MOVE_LEER, MOVE_QUICK_ATTACK, MOVE_HOWL}
    },
    {
        .ivs = {26, 26, 26, 26, 26, 26},
        .lvl = 22,
        .species = SPECIES_MAGNETON,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SUPERSONIC, MOVE_SHOCK_WAVE, MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM}
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 24,
        .species = SPECIES_MANECTRIC,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_SHOCK_WAVE, MOVE_HOWL}
    }
};

static const struct TrainerMon sParty_Flannery1[] = {
    {
        .ivs = {24, 24, 24, 24, 24, 24},
        .lvl = 24,
        .species = SPECIES_NUMEL,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_OVERHEAT, MOVE_TAKE_DOWN, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    },
    {
        .ivs = {24, 24, 24, 24, 24, 24},
        .lvl = 24,
        .species = SPECIES_SLUGMA,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_OVERHEAT, MOVE_SMOG, MOVE_LIGHT_SCREEN, MOVE_SUNNY_DAY}
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 26,
        .species = SPECIES_CAMERUPT,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_OVERHEAT, MOVE_TACKLE, MOVE_SUNNY_DAY, MOVE_ATTRACT}
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 29,
        .species = SPECIES_TORKOAL,
        .heldItem = ITEM_WHITE_HERB,
        .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_BODY_SLAM, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Norman1[] = {
    {
        .ivs = {24, 24, 24, 24, 24, 24},
        .lvl = 27,
        .species = SPECIES_SPINDA,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_TEETER_DANCE, MOVE_PSYBEAM, MOVE_FACADE, MOVE_ENCORE}
    },
    {
        .ivs = {24, 24, 24, 24, 24, 24},
        .lvl = 27,
        .species = SPECIES_VIGOROTH,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SLASH, MOVE_FACADE, MOVE_ENCORE, MOVE_FEINT_ATTACK}
    },
    {
        .ivs = {24, 24, 24, 24, 24, 24},
        .lvl = 29,
        .species = SPECIES_LINOONE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SLASH, MOVE_BELLY_DRUM, MOVE_FACADE, MOVE_HEADBUTT}
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 31,
        .species = SPECIES_SLAKING,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_COUNTER, MOVE_YAWN, MOVE_FACADE, MOVE_FEINT_ATTACK}
    }
};

static const struct TrainerMon sParty_Winona1[] = {
    {
        .ivs = {25, 25, 25, 25, 25, 25},
        .lvl = 29,
        .species = SPECIES_SWABLU,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PERISH_SONG, MOVE_MIRROR_MOVE, MOVE_SAFEGUARD, MOVE_AERIAL_ACE}
    },
    {
        .ivs = {25, 25, 25, 25, 25, 25},
        .lvl = 29,
        .species = SPECIES_TROPIUS,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_SYNTHESIS}
    },
    {
        .ivs = {25, 25, 25, 25, 25, 25},
        .lvl = 30,
        .species = SPECIES_PELIPPER,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_WATER_GUN, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
        .ivs = {26, 26, 26, 26, 26, 26},
        .lvl = 31,
        .species = SPECIES_SKARMORY,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SAND_ATTACK, MOVE_FURY_ATTACK, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 33,
        .species = SPECIES_ALTARIA,
        .heldItem = ITEM_ORAN_BERRY,
        .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE, MOVE_AERIAL_ACE}
    }
};

static const struct TrainerMon sParty_TateAndLiza1[] = {
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 41,
        .species = SPECIES_CLAYDOL,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 41,
        .species = SPECIES_XATU,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PSYCHIC, MOVE_SUNNY_DAY, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 42,
        .species = SPECIES_LUNATONE,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_LIGHT_SCREEN, MOVE_PSYCHIC, MOVE_HYPNOSIS, MOVE_CALM_MIND}
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 42,
        .species = SPECIES_SOLROCK,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_Juan1[] = {
    {
        .ivs = {24, 24, 24, 24, 24, 24},
        .lvl = 41,
        .species = SPECIES_LUVDISC,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_WATER_PULSE, MOVE_ATTRACT, MOVE_SWEET_KISS, MOVE_FLAIL}
    },
    {
        .ivs = {24, 24, 24, 24, 24, 24},
        .lvl = 41,
        .species = SPECIES_WHISCASH,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_AMNESIA, MOVE_EARTHQUAKE}
    },
    {
        .ivs = {24, 24, 24, 24, 24, 24},
        .lvl = 43,
        .species = SPECIES_SEALEO,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_ENCORE, MOVE_BODY_SLAM, MOVE_AURORA_BEAM, MOVE_WATER_PULSE}
    },
    {
        .ivs = {24, 24, 24, 24, 24, 24},
        .lvl = 43,
        .species = SPECIES_CRAWDAUNT,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_WATER_PULSE, MOVE_CRABHAMMER, MOVE_TAUNT, MOVE_LEER}
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 46,
        .species = SPECIES_KINGDRA,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Jerry1[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 9,
        .species = SPECIES_RALTS,
    }
};

static const struct TrainerMon sParty_Ted[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 17,
        .species = SPECIES_RALTS,
    }
};

static const struct TrainerMon sParty_Paul[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 15,
        .species = SPECIES_NUMEL,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 15,
        .species = SPECIES_ODDISH,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 15,
        .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Jerry2[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 26,
        .species = SPECIES_RALTS,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 26,
        .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Jerry3[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 29,
        .species = SPECIES_KIRLIA,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 29,
        .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Jerry4[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 32,
        .species = SPECIES_KIRLIA,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 32,
        .species = SPECIES_MEDICHAM,
    }
};

static const struct TrainerMon sParty_Jerry5[] = {
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 34,
        .species = SPECIES_KIRLIA,
    },
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 34,
        .species = SPECIES_BANETTE,
    },
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 34,
        .species = SPECIES_MEDICHAM,
    }
};

static const struct TrainerMon sParty_Karen1[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 9,
        .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sParty_Georgia[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 16,
        .species = SPECIES_SHROOMISH,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 16,
        .species = SPECIES_BEAUTIFLY,
    }
};

static const struct TrainerMon sParty_Karen2[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 26,
        .species = SPECIES_SHROOMISH,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 26,
        .species = SPECIES_WHISMUR,
    }
};

static const struct TrainerMon sParty_Karen3[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 29,
        .species = SPECIES_SHROOMISH,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 29,
        .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Karen4[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 32,
        .species = SPECIES_BRELOOM,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 32,
        .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Karen5[] = {
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 35,
        .species = SPECIES_BRELOOM,
    },
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 35,
        .species = SPECIES_EXPLOUD,
    }
};

static const struct TrainerMon sParty_KateAndJoy[] = {
    {
        .lvl = 30,
        .species = SPECIES_SPINDA,
        .moves = {MOVE_HYPNOSIS, MOVE_PSYBEAM, MOVE_DIZZY_PUNCH, MOVE_TEETER_DANCE}
    },
    {
        .lvl = 32,
        .species = SPECIES_SLAKING,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_YAWN, MOVE_SLACK_OFF, MOVE_FEINT_ATTACK}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg1[] = {
    {
        .lvl = 15,
        .species = SPECIES_ZIGZAGOON,
        .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
        .lvl = 17,
        .species = SPECIES_MAKUHITA,
        .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 28,
        .species = SPECIES_ZIGZAGOON,
        .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 30,
        .species = SPECIES_MAKUHITA,
        .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 31,
        .species = SPECIES_ZIGZAGOON,
        .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 33,
        .species = SPECIES_MAKUHITA,
        .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 34,
        .species = SPECIES_LINOONE,
        .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 36,
        .species = SPECIES_MAKUHITA,
        .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 36,
        .species = SPECIES_LINOONE,
        .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 38,
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Victor[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 16,
        .species = SPECIES_TAILLOW,
        .heldItem = ITEM_ORAN_BERRY
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 16,
        .species = SPECIES_ZIGZAGOON,
        .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Miguel1[] = {
    {
        .lvl = 15,
        .species = SPECIES_SKITTY,
        .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Colton[] = {
    {
        .lvl = 22,
        .species = SPECIES_SKITTY,
        .heldItem = ITEM_ORAN_BERRY,
        .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
        .lvl = 36,
        .species = SPECIES_SKITTY,
        .heldItem = ITEM_ORAN_BERRY,
        .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
        .lvl = 40,
        .species = SPECIES_SKITTY,
        .heldItem = ITEM_ORAN_BERRY,
        .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
        .lvl = 12,
        .species = SPECIES_SKITTY,
        .heldItem = ITEM_ORAN_BERRY,
        .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
        .lvl = 30,
        .species = SPECIES_SKITTY,
        .heldItem = ITEM_ORAN_BERRY,
        .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
        .lvl = 42,
        .species = SPECIES_DELCATTY,
        .heldItem = ITEM_ORAN_BERRY,
        .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    }
};

static const struct TrainerMon sParty_Miguel2[] = {
    {
        .lvl = 29,
        .species = SPECIES_SKITTY,
        .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Miguel3[] = {
    {
        .lvl = 32,
        .species = SPECIES_SKITTY,
        .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Miguel4[] = {
    {
        .lvl = 35,
        .species = SPECIES_DELCATTY,
        .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Miguel5[] = {
    {
        .lvl = 38,
        .species = SPECIES_DELCATTY,
        .heldItem = ITEM_SITRUS_BERRY
    }
};

static const struct TrainerMon sParty_Victoria[] = {
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 17,
        .species = SPECIES_ROSELIA,
        .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Vanessa[] = {
    {
        .lvl = 30,
        .species = SPECIES_PIKACHU,
        .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Bethany[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 35,
        .species = SPECIES_AZURILL,
        .heldItem = ITEM_ORAN_BERRY
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 37,
        .species = SPECIES_MARILL,
        .heldItem = ITEM_ORAN_BERRY
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 39,
        .species = SPECIES_AZUMARILL,
        .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Isabel1[] = {
    {
        .lvl = 14,
        .species = SPECIES_PLUSLE,
        .heldItem = ITEM_ORAN_BERRY
    },
    {
        .lvl = 14,
        .species = SPECIES_MINUN,
        .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Isabel2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 26,
        .species = SPECIES_PLUSLE,
        .heldItem = ITEM_ORAN_BERRY
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 26,
        .species = SPECIES_MINUN,
        .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Isabel3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 29,
        .species = SPECIES_PLUSLE,
        .heldItem = ITEM_ORAN_BERRY
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 29,
        .species = SPECIES_MINUN,
        .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Isabel4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 32,
        .species = SPECIES_PLUSLE,
        .heldItem = ITEM_ORAN_BERRY
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 32,
        .species = SPECIES_MINUN,
        .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Isabel5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 35,
        .species = SPECIES_PLUSLE,
        .heldItem = ITEM_SITRUS_BERRY
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 35,
        .species = SPECIES_MINUN,
        .heldItem = ITEM_SITRUS_BERRY
    }
};

static const struct TrainerMon sParty_Timothy1[] = {
    {
        .ivs = {24, 24, 24, 24, 24, 24},
        .lvl = 27,
        .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Timothy2[] = {
    {
        .ivs = {25, 25, 25, 25, 25, 25},
        .lvl = 33,
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_ARM_THRUST, MOVE_KNOCK_OFF, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMon sParty_Timothy3[] = {
    {
        .ivs = {26, 26, 26, 26, 26, 26},
        .lvl = 36,
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_ARM_THRUST, MOVE_KNOCK_OFF, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMon sParty_Timothy4[] = {
    {
        .ivs = {27, 27, 27, 27, 27, 27},
        .lvl = 39,
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_ARM_THRUST, MOVE_BELLY_DRUM, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMon sParty_Timothy5[] = {
    {
        .ivs = {29, 29, 29, 29, 29, 29},
        .lvl = 42,
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_ARM_THRUST, MOVE_BELLY_DRUM, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMon sParty_Vicky[] = {
    {
        .ivs = {24, 24, 24, 24, 24, 24},
        .lvl = 18,
        .species = SPECIES_MEDITITE,
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_MEDITATE, MOVE_CONFUSION, MOVE_DETECT}
    }
};

static const struct TrainerMon sParty_Shelby1[] = {
    {
        .ivs = {24, 24, 24, 24, 24, 24},
        .lvl = 21,
        .species = SPECIES_MEDITITE,
    },
    {
        .ivs = {24, 24, 24, 24, 24, 24},
        .lvl = 21,
        .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Shelby2[] = {
    {
        .ivs = {25, 25, 25, 25, 25, 25},
        .lvl = 30,
        .species = SPECIES_MEDITITE,
    },
    {
        .ivs = {25, 25, 25, 25, 25, 25},
        .lvl = 30,
        .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Shelby3[] = {
    {
        .ivs = {26, 26, 26, 26, 26, 26},
        .lvl = 33,
        .species = SPECIES_MEDICHAM,
    },
    {
        .ivs = {26, 26, 26, 26, 26, 26},
        .lvl = 33,
        .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Shelby4[] = {
    {
        .ivs = {27, 27, 27, 27, 27, 27},
        .lvl = 36,
        .species = SPECIES_MEDICHAM,
    },
    {
        .ivs = {27, 27, 27, 27, 27, 27},
        .lvl = 36,
        .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Shelby5[] = {
    {
        .ivs = {29, 29, 29, 29, 29, 29},
        .lvl = 39,
        .species = SPECIES_MEDICHAM,
    },
    {
        .ivs = {29, 29, 29, 29, 29, 29},
        .lvl = 39,
        .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Calvin1[] = {
    {
        .lvl = 5,
        .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_Billy[] = {
    {
        .lvl = 5,
        .species = SPECIES_ZIGZAGOON,
    },
    {
        .lvl = 7,
        .species = SPECIES_SEEDOT,
    }
};

static const struct TrainerMon sParty_Josh[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 10,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_TACKLE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Tommy[] = {
    {
        .ivs = {13, 13, 13, 13, 13, 13},
        .lvl = 8,
        .species = SPECIES_GEODUDE,
    },
    {
        .ivs = {14, 14, 14, 14, 14, 14},
        .lvl = 8,
        .species = SPECIES_GEODUDE,
    }
};

static const struct TrainerMon sParty_Joey[] = {
    {
        .lvl = 9,
        .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Ben[] = {
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 17,
        .species = SPECIES_ZIGZAGOON,
        .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_GROWL, MOVE_THUNDERBOLT}
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 17,
        .species = SPECIES_GULPIN,
        .moves = {MOVE_AMNESIA, MOVE_SLUDGE, MOVE_YAWN, MOVE_POUND}
    }
};

static const struct TrainerMon sParty_Quincy[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 43,
        .species = SPECIES_SLAKING,
        .moves = {MOVE_ATTRACT, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_FLAMETHROWER}
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 43,
        .species = SPECIES_DUSCLOPS,
        .moves = {MOVE_SKILL_SWAP, MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_TOXIC}
    }
};

static const struct TrainerMon sParty_Katelynn[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 43,
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_SKILL_SWAP, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_CALM_MIND}
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 43,
        .species = SPECIES_SLAKING,
        .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_AERIAL_ACE, MOVE_BRICK_BREAK}
    }
};

static const struct TrainerMon sParty_Jaylen[] = {
    {
        .lvl = 19,
        .species = SPECIES_TRAPINCH,
    }
};

static const struct TrainerMon sParty_Dillon[] = {
    {
        .lvl = 19,
        .species = SPECIES_ARON,
    }
};

static const struct TrainerMon sParty_Calvin2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 27,
        .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_Calvin3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 28,
        .species = SPECIES_SWELLOW,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 30,
        .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_Calvin4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 31,
        .species = SPECIES_SWELLOW,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 29,
        .species = SPECIES_LINOONE,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 33,
        .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_Calvin5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 34,
        .species = SPECIES_SWELLOW,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 32,
        .species = SPECIES_LINOONE,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 36,
        .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_Eddie[] = {
    {
        .lvl = 14,
        .species = SPECIES_ZIGZAGOON,
    },
    {
        .lvl = 16,
        .species = SPECIES_ZIGZAGOON,
    }
};

static const struct TrainerMon sParty_Allen[] = {
    {
        .lvl = 4,
        .species = SPECIES_ZIGZAGOON,
    },
    {
        .lvl = 3,
        .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMon sParty_Timmy[] = {
    {
        .lvl = 15,
        .species = SPECIES_ARON,
    },
    {
        .lvl = 13,
        .species = SPECIES_ELECTRIKE,
    }
};

static const struct TrainerMon sParty_Wallace[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 57,
        .species = SPECIES_WAILORD,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_RAIN_DANCE, MOVE_WATER_SPOUT, MOVE_DOUBLE_EDGE, MOVE_BLIZZARD}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 55,
        .species = SPECIES_TENTACRUEL,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_TOXIC, MOVE_HYDRO_PUMP, MOVE_SLUDGE_BOMB, MOVE_ICE_BEAM}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 56,
        .species = SPECIES_LUDICOLO,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SURF, MOVE_LEECH_SEED, MOVE_DOUBLE_TEAM}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 56,
        .species = SPECIES_WHISCASH,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_EARTHQUAKE, MOVE_SURF, MOVE_AMNESIA, MOVE_HYPER_BEAM}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 56,
        .species = SPECIES_GYARADOS,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_HYPER_BEAM, MOVE_SURF}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 58,
        .species = SPECIES_MILOTIC,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_RECOVER, MOVE_SURF, MOVE_ICE_BEAM, MOVE_TOXIC}
    }
};

static const struct TrainerMon sParty_Andrew[] = {
    {
        .lvl = 5,
        .species = SPECIES_MAGIKARP,
    },
    {
        .lvl = 10,
        .species = SPECIES_TENTACOOL,
    },
    {
        .lvl = 15,
        .species = SPECIES_MAGIKARP,
    }
};

static const struct TrainerMon sParty_Ivan[] = {
    {
        .lvl = 5,
        .species = SPECIES_MAGIKARP,
    },
    {
        .lvl = 6,
        .species = SPECIES_MAGIKARP,
    },
    {
        .lvl = 7,
        .species = SPECIES_MAGIKARP,
    }
};

static const struct TrainerMon sParty_Claude[] = {
    {
        .lvl = 16,
        .species = SPECIES_MAGIKARP,
    },
    {
        .lvl = 17,
        .species = SPECIES_GOLDEEN,
    },
    {
        .lvl = 18,
        .species = SPECIES_BARBOACH,
    }
};

static const struct TrainerMon sParty_Elliot1[] = {
    {
        .lvl = 10,
        .species = SPECIES_MAGIKARP,
    },
    {
        .lvl = 7,
        .species = SPECIES_TENTACOOL,
    },
    {
        .lvl = 10,
        .species = SPECIES_MAGIKARP,
    }
};

static const struct TrainerMon sParty_Ned[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 11,
        .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Dale[] = {
    {
        .lvl = 11,
        .species = SPECIES_TENTACOOL,
    },
    {
        .lvl = 14,
        .species = SPECIES_WAILMER,
    },
    {
        .lvl = 11,
        .species = SPECIES_TENTACOOL,
    },
    {
        .lvl = 14,
        .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Nolan[] = {
    {
        .lvl = 19,
        .species = SPECIES_BARBOACH,
    }
};

static const struct TrainerMon sParty_Barny[] = {
    {
        .lvl = 25,
        .species = SPECIES_TENTACOOL,
    },
    {
        .lvl = 25,
        .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Wade[] = {
    {
        .lvl = 16,
        .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Carter[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 25,
        .species = SPECIES_WAILMER,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 25,
        .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Elliot2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 24,
        .species = SPECIES_TENTACOOL,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 27,
        .species = SPECIES_GYARADOS,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 27,
        .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Elliot3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 29,
        .species = SPECIES_GYARADOS,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 26,
        .species = SPECIES_CARVANHA,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 26,
        .species = SPECIES_TENTACOOL,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 29,
        .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Elliot4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 31,
        .species = SPECIES_GYARADOS,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 30,
        .species = SPECIES_CARVANHA,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 30,
        .species = SPECIES_TENTACRUEL,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 31,
        .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Elliot5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 33,
        .species = SPECIES_GYARADOS,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 33,
        .species = SPECIES_SHARPEDO,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 33,
        .species = SPECIES_GYARADOS,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 35,
        .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Ronald[] = {
    {
        .lvl = 19,
        .species = SPECIES_MAGIKARP,
    },
    {
        .lvl = 21,
        .species = SPECIES_GYARADOS,
    },
    {
        .lvl = 23,
        .species = SPECIES_GYARADOS,
    },
    {
        .lvl = 26,
        .species = SPECIES_GYARADOS,
    },
    {
        .lvl = 30,
        .species = SPECIES_GYARADOS,
    },
    {
        .lvl = 35,
        .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Jacob[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 6,
        .species = SPECIES_VOLTORB,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 6,
        .species = SPECIES_VOLTORB,
    },
    {
        .ivs = {24, 24, 24, 24, 24, 24},
        .lvl = 14,
        .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Anthony[] = {
    {
        .lvl = 14,
        .species = SPECIES_MAGNEMITE,
    },
    {
        .lvl = 14,
        .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Benjamin1[] = {
    {
        .lvl = 16,
        .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Benjamin2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 30,
        .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Benjamin3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 33,
        .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Benjamin4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 36,
        .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Benjamin5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 39,
        .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Abigail1[] = {
    {
        .lvl = 16,
        .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Jasmine[] = {
    {
        .ivs = {9, 9, 9, 9, 9, 9},
        .lvl = 14,
        .species = SPECIES_MAGNEMITE,
    },
    {
        .ivs = {9, 9, 9, 9, 9, 9},
        .lvl = 14,
        .species = SPECIES_MAGNEMITE,
    },
    {
        .lvl = 6,
        .species = SPECIES_VOLTORB,
    }
};

static const struct TrainerMon sParty_Abigail2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 28,
        .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Abigail3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 31,
        .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Abigail4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 34,
        .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Abigail5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 37,
        .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Dylan1[] = {
    {
        .lvl = 17,
        .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Dylan2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 28,
        .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Dylan3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 31,
        .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Dylan4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 34,
        .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Dylan5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 37,
        .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Maria1[] = {
    {
        .lvl = 17,
        .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Maria2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 28,
        .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Maria3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 31,
        .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Maria4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 34,
        .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Maria5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 37,
        .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Camden[] = {
    {
        .lvl = 33,
        .species = SPECIES_STARYU,
    },
    {
        .lvl = 33,
        .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Demetrius[] = {
    {
        .lvl = 25,
        .species = SPECIES_ZIGZAGOON,
    },
    {
        .lvl = 25,
        .species = SPECIES_ELECTRIKE,
    }
};

static const struct TrainerMon sParty_Isaiah1[] = {
    {
        .lvl = 35,
        .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Pablo1[] = {
    {
        .lvl = 33,
        .species = SPECIES_STARYU,
    },
    {
        .lvl = 33,
        .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Chase[] = {
    {
        .lvl = 26,
        .species = SPECIES_WINGULL,
    },
    {
        .ivs = {9, 9, 9, 9, 9, 9},
        .lvl = 34,
        .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Isaiah2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 39,
        .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Isaiah3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 42,
        .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Isaiah4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 45,
        .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Isaiah5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 48,
        .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Isobel[] = {
    {
        .lvl = 34,
        .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Donny[] = {
    {
        .lvl = 26,
        .species = SPECIES_WINGULL,
    },
    {
        .ivs = {19, 19, 19, 19, 19, 19},
        .lvl = 34,
        .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Talia[] = {
    {
        .lvl = 34,
        .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Katelyn1[] = {
    {
        .lvl = 35,
        .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Allison[] = {
    {
        .lvl = 27,
        .species = SPECIES_WINGULL,
    },
    {
        .ivs = {29, 29, 29, 29, 29, 29},
        .lvl = 33,
        .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Katelyn2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 39,
        .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Katelyn3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 42,
        .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Katelyn4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 45,
        .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Katelyn5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 48,
        .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Nicolas1[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 37,
        .species = SPECIES_ALTARIA,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 37,
        .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas2[] = {
    {
        .ivs = {13, 13, 13, 13, 13, 13},
        .lvl = 41,
        .species = SPECIES_ALTARIA,
    },
    {
        .ivs = {13, 13, 13, 13, 13, 13},
        .lvl = 41,
        .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas3[] = {
    {
        .ivs = {14, 14, 14, 14, 14, 14},
        .lvl = 44,
        .species = SPECIES_ALTARIA,
    },
    {
        .ivs = {14, 14, 14, 14, 14, 14},
        .lvl = 44,
        .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas4[] = {
    {
        .ivs = {15, 15, 15, 15, 15, 15},
        .lvl = 46,
        .species = SPECIES_BAGON,
    },
    {
        .ivs = {15, 15, 15, 15, 15, 15},
        .lvl = 46,
        .species = SPECIES_ALTARIA,
    },
    {
        .ivs = {15, 15, 15, 15, 15, 15},
        .lvl = 46,
        .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas5[] = {
    {
        .ivs = {17, 17, 17, 17, 17, 17},
        .lvl = 49,
        .species = SPECIES_ALTARIA,
        .heldItem = ITEM_NONE
    },
    {
        .ivs = {17, 17, 17, 17, 17, 17},
        .lvl = 49,
        .species = SPECIES_ALTARIA,
        .heldItem = ITEM_NONE
    },
    {
        .ivs = {17, 17, 17, 17, 17, 17},
        .lvl = 49,
        .species = SPECIES_SHELGON,
        .heldItem = ITEM_DRAGON_FANG
    }
};

static const struct TrainerMon sParty_Aaron[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 34,
        .species = SPECIES_BAGON,
        .moves = {MOVE_DRAGON_BREATH, MOVE_HEADBUTT, MOVE_FOCUS_ENERGY, MOVE_EMBER}
    }
};

static const struct TrainerMon sParty_Perry[] = {
    {
        .lvl = 26,
        .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Hugh[] = {
    {
        .lvl = 25,
        .species = SPECIES_WINGULL,
    },
    {
        .lvl = 25,
        .species = SPECIES_TROPIUS,
    }
};

static const struct TrainerMon sParty_Phil[] = {
    {
        .lvl = 26,
        .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Jared[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 27,
        .species = SPECIES_DODUO,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 27,
        .species = SPECIES_SKARMORY,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 27,
        .species = SPECIES_TROPIUS,
    }
};

static const struct TrainerMon sParty_Humberto[] = {
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 30,
        .species = SPECIES_SKARMORY,
    }
};

static const struct TrainerMon sParty_Presley[] = {
    {
        .lvl = 33,
        .species = SPECIES_TROPIUS,
    },
    {
        .lvl = 33,
        .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Edwardo[] = {
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 29,
        .species = SPECIES_DODUO,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 29,
        .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Colin[] = {
    {
        .lvl = 28,
        .species = SPECIES_WINGULL,
    },
    {
        .lvl = 28,
        .species = SPECIES_NATU,
    }
};

static const struct TrainerMon sParty_Robert1[] = {
    {
        .lvl = 29,
        .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Benny[] = {
    {
        .lvl = 36,
        .species = SPECIES_SWELLOW,
    },
    {
        .lvl = 36,
        .species = SPECIES_PELIPPER,
    },
    {
        .lvl = 36,
        .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Chester[] = {
    {
        .lvl = 25,
        .species = SPECIES_TAILLOW,
    },
    {
        .lvl = 25,
        .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Robert2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 32,
        .species = SPECIES_NATU,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 32,
        .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Robert3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 35,
        .species = SPECIES_NATU,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 35,
        .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Robert4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 38,
        .species = SPECIES_NATU,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 38,
        .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Robert5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 41,
        .species = SPECIES_ALTARIA,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 41,
        .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Alex[] = {
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 33,
        .species = SPECIES_NATU,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 33,
        .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Beck[] = {
    {
        .lvl = 34,
        .species = SPECIES_TROPIUS,
    }
};

static const struct TrainerMon sParty_Yasu[] = {
    {
        .lvl = 26,
        .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_Takashi[] = {
    {
        .lvl = 25,
        .species = SPECIES_NINJASK,
    },
    {
        .lvl = 25,
        .species = SPECIES_KOFFING,
    }
};

static const struct TrainerMon sParty_Dianne[] = {
    {
        .lvl = 43,
        .species = SPECIES_CLAYDOL,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SKILL_SWAP, MOVE_EARTHQUAKE, MOVE_NONE, MOVE_NONE}
    },
    {
        .lvl = 43,
        .species = SPECIES_LANTURN,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_THUNDERBOLT, MOVE_EARTHQUAKE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Jani[] = {
    {
        .lvl = 26,
        .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Lao1[] = {
    {
        .lvl = 17,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SMOG, MOVE_SELF_DESTRUCT}
    },
    {
        .lvl = 17,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SMOG, MOVE_SELF_DESTRUCT}
    },
    {
        .lvl = 17,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    }
};

static const struct TrainerMon sParty_Lung[] = {
    {
        .lvl = 18,
        .species = SPECIES_KOFFING,
    },
    {
        .lvl = 18,
        .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_Lao2[] = {
    {
        .lvl = 24,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
        .lvl = 24,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
        .lvl = 24,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
        .lvl = 26,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Lao3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 27,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 27,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 27,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 29,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Lao4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 30,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 30,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 30,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 32,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Lao5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 33,
        .species = SPECIES_KOFFING,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 33,
        .species = SPECIES_KOFFING,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 33,
        .species = SPECIES_KOFFING,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 35,
        .species = SPECIES_WEEZING,
        .heldItem = ITEM_SMOKE_BALL,
        .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Jocelyn[] = {
    {
        .ivs = {15, 15, 15, 15, 15, 15},
        .lvl = 13,
        .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Laura[] = {
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 13,
        .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Cyndy1[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 18,
        .species = SPECIES_MEDITITE,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 18,
        .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Cora[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 27,
        .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Paula[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 27,
        .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Cyndy2[] = {
    {
        .ivs = {13, 13, 13, 13, 13, 13},
        .lvl = 26,
        .species = SPECIES_MEDITITE,
    },
    {
        .ivs = {13, 13, 13, 13, 13, 13},
        .lvl = 26,
        .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Cyndy3[] = {
    {
        .ivs = {14, 14, 14, 14, 14, 14},
        .lvl = 29,
        .species = SPECIES_MEDITITE,
    },
    {
        .ivs = {14, 14, 14, 14, 14, 14},
        .lvl = 29,
        .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Cyndy4[] = {
    {
        .ivs = {15, 15, 15, 15, 15, 15},
        .lvl = 32,
        .species = SPECIES_MEDICHAM,
    },
    {
        .ivs = {15, 15, 15, 15, 15, 15},
        .lvl = 32,
        .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Cyndy5[] = {
    {
        .ivs = {17, 17, 17, 17, 17, 17},
        .lvl = 35,
        .species = SPECIES_MEDICHAM,
    },
    {
        .ivs = {17, 17, 17, 17, 17, 17},
        .lvl = 35,
        .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Madeline1[] = {
    {
        .lvl = 19,
        .species = SPECIES_NUMEL,
        .moves = {MOVE_EMBER, MOVE_TACKLE, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Clarissa[] = {
    {
        .lvl = 28,
        .species = SPECIES_ROSELIA,
    },
    {
        .lvl = 28,
        .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Angelica[] = {
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 30,
        .species = SPECIES_CASTFORM,
        .moves = {MOVE_RAIN_DANCE, MOVE_WEATHER_BALL, MOVE_THUNDER, MOVE_WATER_PULSE}
    }
};

static const struct TrainerMon sParty_Madeline2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 29,
        .species = SPECIES_NUMEL,
        .moves = {MOVE_EMBER, MOVE_TACKLE, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Madeline3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 32,
        .species = SPECIES_NUMEL,
        .moves = {MOVE_EMBER, MOVE_TAKE_DOWN, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Madeline4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 34,
        .species = SPECIES_ROSELIA,
        .moves = {MOVE_LEECH_SEED, MOVE_MEGA_DRAIN, MOVE_GRASS_WHISTLE, MOVE_SUNNY_DAY}
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 34,
        .species = SPECIES_NUMEL,
        .moves = {MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Madeline5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 37,
        .species = SPECIES_ROSELIA,
        .moves = {MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY}
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 37,
        .species = SPECIES_CAMERUPT,
        .moves = {MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_EARTHQUAKE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Beverly[] = {
    {
        .lvl = 25,
        .species = SPECIES_WINGULL,
    },
    {
        .lvl = 25,
        .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Imani[] = {
    {
        .lvl = 26,
        .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Kyla[] = {
    {
        .lvl = 26,
        .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Denise[] = {
    {
        .lvl = 25,
        .species = SPECIES_WINGULL,
    },
    {
        .lvl = 25,
        .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Beth[] = {
    {
        .lvl = 26,
        .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Tara[] = {
    {
        .lvl = 25,
        .species = SPECIES_HORSEA,
    },
    {
        .lvl = 25,
        .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Missy[] = {
    {
        .lvl = 26,
        .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Alice[] = {
    {
        .lvl = 24,
        .species = SPECIES_GOLDEEN,
    },
    {
        .lvl = 24,
        .species = SPECIES_WINGULL,
    },
    {
        .lvl = 24,
        .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Jenny1[] = {
    {
        .lvl = 34,
        .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Grace[] = {
    {
        .lvl = 34,
        .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Tanya[] = {
    {
        .lvl = 34,
        .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Sharon[] = {
    {
        .lvl = 34,
        .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Nikki[] = {
    {
        .lvl = 33,
        .species = SPECIES_MARILL,
    },
    {
        .lvl = 33,
        .species = SPECIES_SPHEAL,
    }
};

static const struct TrainerMon sParty_Brenda[] = {
    {
        .lvl = 34,
        .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Katie[] = {
    {
        .lvl = 33,
        .species = SPECIES_GOLDEEN,
    },
    {
        .lvl = 33,
        .species = SPECIES_SPHEAL,
    }
};

static const struct TrainerMon sParty_Susie[] = {
    {
        .lvl = 34,
        .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Kara[] = {
    {
        .lvl = 34,
        .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Dana[] = {
    {
        .lvl = 34,
        .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Sienna[] = {
    {
        .lvl = 33,
        .species = SPECIES_LUVDISC,
    },
    {
        .lvl = 33,
        .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Debra[] = {
    {
        .lvl = 34,
        .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Linda[] = {
    {
        .lvl = 33,
        .species = SPECIES_HORSEA,
    },
    {
        .lvl = 33,
        .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sParty_Kaylee[] = {
    {
        .lvl = 34,
        .species = SPECIES_LANTURN,
    },
    {
        .lvl = 34,
        .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Laurel[] = {
    {
        .lvl = 33,
        .species = SPECIES_LUVDISC,
    },
    {
        .lvl = 33,
        .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Carlee[] = {
    {
        .lvl = 35,
        .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Jenny2[] = {
    {
        .lvl = 38,
        .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Jenny3[] = {
    {
        .lvl = 41,
        .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Jenny4[] = {
    {
        .lvl = 43,
        .species = SPECIES_STARYU,
    },
    {
        .lvl = 43,
        .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Jenny5[] = {
    {
        .lvl = 45,
        .species = SPECIES_LUVDISC,
    },
    {
        .lvl = 45,
        .species = SPECIES_WAILMER,
    },
    {
        .lvl = 45,
        .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Heidi[] = {
    {
        .lvl = 22,
        .species = SPECIES_SANDSHREW,
        .moves = {MOVE_DIG, MOVE_SAND_ATTACK, MOVE_POISON_STING, MOVE_SLASH}
    },
    {
        .lvl = 22,
        .species = SPECIES_BALTOY,
        .moves = {MOVE_RAPID_SPIN, MOVE_MUD_SLAP, MOVE_PSYBEAM, MOVE_ROCK_TOMB}
    }
};

static const struct TrainerMon sParty_Becky[] = {
    {
        .lvl = 22,
        .species = SPECIES_SANDSHREW,
        .moves = {MOVE_SAND_ATTACK, MOVE_POISON_STING, MOVE_SLASH, MOVE_DIG}
    },
    {
        .lvl = 22,
        .species = SPECIES_MARILL,
        .moves = {MOVE_ROLLOUT, MOVE_BUBBLE_BEAM, MOVE_TAIL_WHIP, MOVE_DEFENSE_CURL}
    }
};

static const struct TrainerMon sParty_Carol[] = {
    {
        .lvl = 17,
        .species = SPECIES_TAILLOW,
    },
    {
        .lvl = 17,
        .species = SPECIES_LOMBRE,
    }
};

static const struct TrainerMon sParty_Nancy[] = {
    {
        .lvl = 18,
        .species = SPECIES_MARILL,
    },
    {
        .lvl = 18,
        .species = SPECIES_LOMBRE,
    }
};

static const struct TrainerMon sParty_Martha[] = {
    {
        .lvl = 23,
        .species = SPECIES_SKITTY,
    },
    {
        .lvl = 23,
        .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Diana1[] = {
    {
        .lvl = 19,
        .species = SPECIES_SHROOMISH,
    },
    {
        .lvl = 19,
        .species = SPECIES_ODDISH,
    },
    {
        .lvl = 19,
        .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Cedric[] = {
    {
        .lvl = 32,
        .species = SPECIES_WOBBUFFET,
        .moves = {MOVE_DESTINY_BOND, MOVE_SAFEGUARD, MOVE_COUNTER, MOVE_MIRROR_COAT}
    }
};

static const struct TrainerMon sParty_Irene[] = {
    {
        .lvl = 17,
        .species = SPECIES_SHROOMISH,
    },
    {
        .lvl = 17,
        .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Diana2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 25,
        .species = SPECIES_SHROOMISH,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 25,
        .species = SPECIES_GLOOM,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 25,
        .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Diana3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 28,
        .species = SPECIES_BRELOOM,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 28,
        .species = SPECIES_GLOOM,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 28,
        .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Diana4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 31,
        .species = SPECIES_BRELOOM,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 31,
        .species = SPECIES_GLOOM,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 31,
        .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Diana5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 40,
        .species = SPECIES_BRELOOM,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 40,
        .species = SPECIES_VILEPLUME,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 40,
        .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_AmyAndLiv1[] = {
    {
        .lvl = 15,
        .species = SPECIES_PLUSLE,
    },
    {
        .lvl = 15,
        .species = SPECIES_MINUN,
    }
};

static const struct TrainerMon sParty_AmyAndLiv2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 27,
        .species = SPECIES_PLUSLE,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 27,
        .species = SPECIES_MINUN,
    }
};

static const struct TrainerMon sParty_GinaAndMia1[] = {
    {
        .lvl = 6,
        .species = SPECIES_SEEDOT,
    },
    {
        .lvl = 6,
        .species = SPECIES_LOTAD,
    }
};

static const struct TrainerMon sParty_MiuAndYuki[] = {
    {
        .lvl = 26,
        .species = SPECIES_BEAUTIFLY,
    },
    {
        .lvl = 26,
        .species = SPECIES_DUSTOX,
    }
};

static const struct TrainerMon sParty_AmyAndLiv3[] = {
    {
        .lvl = 9,
        .species = SPECIES_PLUSLE,
    },
    {
        .lvl = 9,
        .species = SPECIES_MINUN,
    }
};

static const struct TrainerMon sParty_GinaAndMia2[] = {
    {
        .lvl = 10,
        .species = SPECIES_DUSKULL,
        .moves = {MOVE_NIGHT_SHADE, MOVE_DISABLE, MOVE_NONE, MOVE_NONE}
    },
    {
        .lvl = 10,
        .species = SPECIES_SHROOMISH,
        .moves = {MOVE_ABSORB, MOVE_LEECH_SEED, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AmyAndLiv4[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 30,
        .species = SPECIES_PLUSLE,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 30,
        .species = SPECIES_MINUN,
    }
};

static const struct TrainerMon sParty_AmyAndLiv5[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 33,
        .species = SPECIES_PLUSLE,
        .moves = {MOVE_SPARK, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND}
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 33,
        .species = SPECIES_MINUN,
        .moves = {MOVE_SPARK, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND}
    }
};

static const struct TrainerMon sParty_AmyAndLiv6[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 36,
        .species = SPECIES_PLUSLE,
        .moves = {MOVE_THUNDER, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND}
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 36,
        .species = SPECIES_MINUN,
        .moves = {MOVE_THUNDER, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND}
    }
};

static const struct TrainerMon sParty_Huey[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 12,
        .species = SPECIES_WINGULL,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 12,
        .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Edmond[] = {
    {
        .lvl = 13,
        .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Ernest1[] = {
    {
        .lvl = 33,
        .species = SPECIES_WINGULL,
    },
    {
        .lvl = 33,
        .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Dwayne[] = {
    {
        .lvl = 11,
        .species = SPECIES_WINGULL,
    },
    {
        .lvl = 11,
        .species = SPECIES_MACHOP,
    },
    {
        .lvl = 11,
        .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Phillip[] = {
    {
        .lvl = 44,
        .species = SPECIES_TENTACRUEL,
    },
    {
        .lvl = 44,
        .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Leonard[] = {
    {
        .lvl = 43,
        .species = SPECIES_MACHOP,
    },
    {
        .lvl = 43,
        .species = SPECIES_PELIPPER,
    },
    {
        .lvl = 43,
        .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Duncan[] = {
    {
        .lvl = 25,
        .species = SPECIES_SPHEAL,
    },
    {
        .lvl = 25,
        .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Ernest2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 36,
        .species = SPECIES_WINGULL,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 36,
        .species = SPECIES_TENTACOOL,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 36,
        .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Ernest3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 39,
        .species = SPECIES_PELIPPER,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 39,
        .species = SPECIES_TENTACOOL,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 39,
        .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Ernest4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 42,
        .species = SPECIES_PELIPPER,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 42,
        .species = SPECIES_TENTACOOL,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 42,
        .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Ernest5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 45,
        .species = SPECIES_PELIPPER,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 45,
        .species = SPECIES_MACHOKE,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 45,
        .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Eli[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 23,
        .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Annika[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 39,
        .species = SPECIES_FEEBAS,
        .heldItem = ITEM_ORAN_BERRY,
        .moves = {MOVE_FLAIL, MOVE_WATER_PULSE, MOVE_RETURN, MOVE_ATTRACT}
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 39,
        .species = SPECIES_FEEBAS,
        .heldItem = ITEM_ORAN_BERRY,
        .moves = {MOVE_FLAIL, MOVE_WATER_PULSE, MOVE_RETURN, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Jazmyn[] = {
    {
        .lvl = 27,
        .species = SPECIES_ABSOL,
    }
};

static const struct TrainerMon sParty_Jonas[] = {
    {
        .lvl = 31,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_TOXIC, MOVE_THUNDER, MOVE_SELF_DESTRUCT, MOVE_SLUDGE_BOMB}
    }
};

static const struct TrainerMon sParty_Kayley[] = {
    {
        .lvl = 31,
        .species = SPECIES_CASTFORM,
        .moves = {MOVE_SUNNY_DAY, MOVE_WEATHER_BALL, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM}
    }
};

static const struct TrainerMon sParty_Auron[] = {
    {
        .lvl = 33,
        .species = SPECIES_MANECTRIC,
    },
    {
        .lvl = 33,
        .species = SPECIES_MACHAMP,
    }
};

static const struct TrainerMon sParty_Kelvin[] = {
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 33,
        .species = SPECIES_MACHOKE,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 33,
        .species = SPECIES_SPHEAL,
    }
};

static const struct TrainerMon sParty_Marley[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 34,
        .species = SPECIES_MANECTRIC,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_BITE, MOVE_ROAR, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT}
    }
};

static const struct TrainerMon sParty_Reyna[] = {
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 33,
        .species = SPECIES_MEDITITE,
    },
    {
        .ivs = {24, 24, 24, 24, 24, 24},
        .lvl = 33,
        .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Hudson[] = {
    {
        .lvl = 34,
        .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Conor[] = {
    {
        .lvl = 33,
        .species = SPECIES_CHINCHOU,
    },
    {
        .ivs = {24, 24, 24, 24, 24, 24},
        .lvl = 33,
        .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Edwin1[] = {
    {
        .lvl = 14,
        .species = SPECIES_LOMBRE,
    },
    {
        .lvl = 14,
        .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Hector[] = {
    {
        .lvl = 18,
        .species = SPECIES_ZANGOOSE,
    },
    {
        .lvl = 18,
        .species = SPECIES_SEVIPER,
    }
};

static const struct TrainerMon sParty_TabithaMossdeep[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 36,
        .species = SPECIES_CAMERUPT,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 38,
        .species = SPECIES_MIGHTYENA,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 40,
        .species = SPECIES_GOLBAT,
    }
};

static const struct TrainerMon sParty_Edwin2[] = {
    {
        .lvl = 26,
        .species = SPECIES_LOMBRE,
    },
    {
        .lvl = 26,
        .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Edwin3[] = {
    {
        .lvl = 29,
        .species = SPECIES_LOMBRE,
    },
    {
        .lvl = 29,
        .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Edwin4[] = {
    {
        .lvl = 32,
        .species = SPECIES_LOMBRE,
    },
    {
        .lvl = 32,
        .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Edwin5[] = {
    {
        .lvl = 35,
        .species = SPECIES_LUDICOLO,
    },
    {
        .lvl = 35,
        .species = SPECIES_SHIFTRY,
    }
};

static const struct TrainerMon sParty_WallyVR1[] = {
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 44,
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 43,
        .species = SPECIES_DELCATTY,
        .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 44,
        .species = SPECIES_ROSELIA,
        .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 41,
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 45,
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_BrendanRoute103Mudkip[] = {
    {
        .lvl = 5,
        .species = SPECIES_TREECKO,
    }
};

static const struct TrainerMon sParty_BrendanRoute110Mudkip[] = {
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 18,
        .species = SPECIES_SLUGMA,
    },
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 18,
        .species = SPECIES_WINGULL,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 20,
        .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_BrendanRoute119Mudkip[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 29,
        .species = SPECIES_SLUGMA,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 29,
        .species = SPECIES_PELIPPER,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 31,
        .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_BrendanRoute103Treecko[] = {
    {
        .lvl = 5,
        .species = SPECIES_TORCHIC,
    }
};

static const struct TrainerMon sParty_BrendanRoute110Treecko[] = {
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 18,
        .species = SPECIES_WINGULL,
    },
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 18,
        .species = SPECIES_LOMBRE,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 20,
        .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_BrendanRoute119Treecko[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 29,
        .species = SPECIES_PELIPPER,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 29,
        .species = SPECIES_LOMBRE,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 31,
        .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_BrendanRoute103Torchic[] = {
    {
        .lvl = 5,
        .species = SPECIES_MUDKIP,
    }
};

static const struct TrainerMon sParty_BrendanRoute110Torchic[] = {
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 18,
        .species = SPECIES_LOMBRE,
    },
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 18,
        .species = SPECIES_SLUGMA,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 20,
        .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_BrendanRoute119Torchic[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 29,
        .species = SPECIES_LOMBRE,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 29,
        .species = SPECIES_SLUGMA,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 31,
        .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_MayRoute103Mudkip[] = {
    {
        .lvl = 5,
        .species = SPECIES_TREECKO,
    }
};

static const struct TrainerMon sParty_MayRoute110Mudkip[] = {
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 18,
        .species = SPECIES_WINGULL,
    },
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 18,
        .species = SPECIES_SLUGMA,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 20,
        .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_MayRoute119Mudkip[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 29,
        .species = SPECIES_SLUGMA,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 29,
        .species = SPECIES_LOMBRE,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 31,
        .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_MayRoute103Treecko[] = {
    {
        .lvl = 5,
        .species = SPECIES_TORCHIC,
    }
};

static const struct TrainerMon sParty_MayRoute110Treecko[] = {
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 18,
        .species = SPECIES_WINGULL,
    },
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 18,
        .species = SPECIES_LOMBRE,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 20,
        .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_MayRoute119Treecko[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 29,
        .species = SPECIES_PELIPPER,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 29,
        .species = SPECIES_LOMBRE,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 31,
        .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_MayRoute103Torchic[] = {
    {
        .lvl = 5,
        .species = SPECIES_MUDKIP,
    }
};

static const struct TrainerMon sParty_MayRoute110Torchic[] = {
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 18,
        .species = SPECIES_LOMBRE,
    },
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 18,
        .species = SPECIES_SLUGMA,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 20,
        .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_MayRoute119Torchic[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 29,
        .species = SPECIES_LOMBRE,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 29,
        .species = SPECIES_SLUGMA,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 31,
        .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_Isaac1[] = {
    {
        .lvl = 11,
        .species = SPECIES_WHISMUR,
    },
    {
        .lvl = 11,
        .species = SPECIES_ZIGZAGOON,
    },
    {
        .lvl = 11,
        .species = SPECIES_ARON,
    },
    {
        .lvl = 11,
        .species = SPECIES_POOCHYENA,
    },
    {
        .lvl = 11,
        .species = SPECIES_TAILLOW,
    },
    {
        .lvl = 11,
        .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Davis[] = {
    {
        .lvl = 27,
        .species = SPECIES_PINSIR,
    }
};

static const struct TrainerMon sParty_Mitchell[] = {
    {
        .lvl = 43,
        .species = SPECIES_LUNATONE,
        .moves = {MOVE_EXPLOSION, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_PSYCHIC}
    },
    {
        .lvl = 43,
        .species = SPECIES_SOLROCK,
        .moves = {MOVE_EXPLOSION, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Isaac2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 22,
        .species = SPECIES_LOUDRED,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 22,
        .species = SPECIES_LINOONE,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 22,
        .species = SPECIES_ARON,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 22,
        .species = SPECIES_MIGHTYENA,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 22,
        .species = SPECIES_SWELLOW,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 22,
        .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Isaac3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 25,
        .species = SPECIES_LOUDRED,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 25,
        .species = SPECIES_LINOONE,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 25,
        .species = SPECIES_ARON,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 25,
        .species = SPECIES_MIGHTYENA,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 25,
        .species = SPECIES_SWELLOW,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 25,
        .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Isaac4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 28,
        .species = SPECIES_LOUDRED,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 28,
        .species = SPECIES_LINOONE,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 28,
        .species = SPECIES_ARON,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 28,
        .species = SPECIES_MIGHTYENA,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 28,
        .species = SPECIES_SWELLOW,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 28,
        .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Isaac5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 31,
        .species = SPECIES_LOUDRED,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 31,
        .species = SPECIES_LINOONE,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 31,
        .species = SPECIES_LAIRON,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 31,
        .species = SPECIES_MIGHTYENA,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 31,
        .species = SPECIES_SWELLOW,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 31,
        .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Lydia1[] = {
    {
        .lvl = 11,
        .species = SPECIES_WINGULL,
    },
    {
        .lvl = 11,
        .species = SPECIES_SHROOMISH,
    },
    {
        .lvl = 11,
        .species = SPECIES_MARILL,
    },
    {
        .lvl = 11,
        .species = SPECIES_ROSELIA,
    },
    {
        .lvl = 11,
        .species = SPECIES_SKITTY,
    },
    {
        .lvl = 11,
        .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Halle[] = {
    {
        .lvl = 43,
        .species = SPECIES_SABLEYE,
    },
    {
        .lvl = 43,
        .species = SPECIES_ABSOL,
    }
};

static const struct TrainerMon sParty_Garrison[] = {
    {
        .lvl = 26,
        .species = SPECIES_SANDSLASH,
    }
};

static const struct TrainerMon sParty_Lydia2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 22,
        .species = SPECIES_WINGULL,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 22,
        .species = SPECIES_SHROOMISH,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 22,
        .species = SPECIES_MARILL,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 22,
        .species = SPECIES_ROSELIA,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 22,
        .species = SPECIES_SKITTY,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 22,
        .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Lydia3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 25,
        .species = SPECIES_PELIPPER,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 25,
        .species = SPECIES_BRELOOM,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 25,
        .species = SPECIES_MARILL,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 25,
        .species = SPECIES_ROSELIA,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 25,
        .species = SPECIES_DELCATTY,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 25,
        .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Lydia4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 28,
        .species = SPECIES_PELIPPER,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 28,
        .species = SPECIES_BRELOOM,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 28,
        .species = SPECIES_MARILL,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 28,
        .species = SPECIES_ROSELIA,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 28,
        .species = SPECIES_DELCATTY,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 28,
        .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Lydia5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 31,
        .species = SPECIES_PELIPPER,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 31,
        .species = SPECIES_BRELOOM,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 31,
        .species = SPECIES_AZUMARILL,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 31,
        .species = SPECIES_ROSELIA,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 31,
        .species = SPECIES_DELCATTY,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 31,
        .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Jackson1[] = {
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 27,
        .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Lorenzo[] = {
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 28,
        .species = SPECIES_SEEDOT,
    },
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 28,
        .species = SPECIES_NUZLEAF,
    },
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 28,
        .species = SPECIES_LOMBRE,
    }
};

static const struct TrainerMon sParty_Sebastian[] = {
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 39,
        .species = SPECIES_CACTURNE,
    }
};

static const struct TrainerMon sParty_Jackson2[] = {
    {
        .ivs = {7, 7, 7, 7, 7, 7},
        .lvl = 31,
        .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Jackson3[] = {
    {
        .ivs = {8, 8, 8, 8, 8, 8},
        .lvl = 34,
        .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Jackson4[] = {
    {
        .ivs = {9, 9, 9, 9, 9, 9},
        .lvl = 37,
        .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Jackson5[] = {
    {
        .ivs = {10, 10, 10, 10, 10, 10},
        .lvl = 39,
        .species = SPECIES_KECLEON,
    },
    {
        .ivs = {10, 10, 10, 10, 10, 10},
        .lvl = 39,
        .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Catherine1[] = {
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 26,
        .species = SPECIES_GLOOM,
    },
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 26,
        .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Jenna[] = {
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 28,
        .species = SPECIES_LOTAD,
    },
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 28,
        .species = SPECIES_LOMBRE,
    },
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 28,
        .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Sophia[] = {
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 38,
        .species = SPECIES_SWABLU,
    },
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 38,
        .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Catherine2[] = {
    {
        .ivs = {7, 7, 7, 7, 7, 7},
        .lvl = 30,
        .species = SPECIES_GLOOM,
    },
    {
        .ivs = {7, 7, 7, 7, 7, 7},
        .lvl = 30,
        .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Catherine3[] = {
    {
        .ivs = {8, 8, 8, 8, 8, 8},
        .lvl = 33,
        .species = SPECIES_GLOOM,
    },
    {
        .ivs = {8, 8, 8, 8, 8, 8},
        .lvl = 33,
        .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Catherine4[] = {
    {
        .ivs = {9, 9, 9, 9, 9, 9},
        .lvl = 36,
        .species = SPECIES_GLOOM,
    },
    {
        .ivs = {9, 9, 9, 9, 9, 9},
        .lvl = 36,
        .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Catherine5[] = {
    {
        .ivs = {10, 10, 10, 10, 10, 10},
        .lvl = 39,
        .species = SPECIES_BELLOSSOM,
    },
    {
        .ivs = {10, 10, 10, 10, 10, 10},
        .lvl = 39,
        .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Julio[] = {
    {
        .lvl = 21,
        .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern5[] = {
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 35,
        .species = SPECIES_MIGHTYENA,
    },
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 35,
        .species = SPECIES_GOLBAT,
    }
};

static const struct TrainerMon sParty_GruntMtPyre4[] = {
    {
        .lvl = 30,
        .species = SPECIES_WAILMER,
    },
    {
        .lvl = 30,
        .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntJaggedPass[] = {
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 22,
        .species = SPECIES_POOCHYENA,
    },
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 22,
        .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Marc[] = {
    {
        .ivs = {14, 14, 14, 14, 14, 14},
        .lvl = 8,
        .species = SPECIES_GEODUDE,
    },
    {
        .ivs = {15, 15, 15, 15, 15, 15},
        .lvl = 8,
        .species = SPECIES_GEODUDE,
    }
};

static const struct TrainerMon sParty_Brenden[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 13,
        .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Lilith[] = {
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 13,
        .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Cristian[] = {
    {
        .ivs = {24, 24, 24, 24, 24, 24},
        .lvl = 13,
        .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Sylvia[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 36,
        .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Leonardo[] = {
    {
        .lvl = 34,
        .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Athena[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 32,
        .species = SPECIES_MANECTRIC,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_THUNDER, MOVE_THUNDER_WAVE, MOVE_QUICK_ATTACK, MOVE_NONE}
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 32,
        .species = SPECIES_LINOONE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SURF, MOVE_THIEF, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Harrison[] = {
    {
        .lvl = 35,
        .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_GruntMtChimney2[] = {
    {
        .lvl = 20,
        .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_Clarence[] = {
    {
        .lvl = 34,
        .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Terry[] = {
    {
        .lvl = 37,
        .species = SPECIES_GIRAFARIG,
    }
};

static const struct TrainerMon sParty_Nate[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 36,
        .species = SPECIES_SPOINK,
    }
};

static const struct TrainerMon sParty_Kathleen[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 36,
        .species = SPECIES_KADABRA,
    }
};

static const struct TrainerMon sParty_Clifford[] = {
    {
        .lvl = 36,
        .species = SPECIES_GIRAFARIG,
    }
};

static const struct TrainerMon sParty_Nicholas[] = {
    {
        .lvl = 36,
        .species = SPECIES_WOBBUFFET,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter3[] = {
    {
        .lvl = 31,
        .species = SPECIES_ZUBAT,
    },
    {
        .lvl = 31,
        .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter4[] = {
    {
        .lvl = 32,
        .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter5[] = {
    {
        .lvl = 32,
        .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter6[] = {
    {
        .lvl = 32,
        .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter7[] = {
    {
        .lvl = 32,
        .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sParty_Macey[] = {
    {
        .lvl = 36,
        .species = SPECIES_NATU,
    }
};

static const struct TrainerMon sParty_BrendanRustboroTreecko[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 13,
        .species = SPECIES_LOTAD,
    },
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 15,
        .species = SPECIES_TORCHIC,
    }
};

static const struct TrainerMon sParty_BrendanRustboroMudkip[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 13,
        .species = SPECIES_WINGULL,
    },
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 15,
        .species = SPECIES_TREECKO,
    }
};

static const struct TrainerMon sParty_Paxton[] = {
    {
        .lvl = 33,
        .species = SPECIES_SWELLOW,
    },
    {
        .lvl = 33,
        .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Isabella[] = {
    {
        .lvl = 34,
        .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_GruntWeatherInst5[] = {
    {
        .lvl = 27,
        .species = SPECIES_ZUBAT,
    },
    {
        .lvl = 27,
        .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_TabithaMtChimney[] = {
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 18,
        .species = SPECIES_NUMEL,
    },
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 20,
        .species = SPECIES_POOCHYENA,
    },
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 22,
        .species = SPECIES_NUMEL,
    },
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 22,
        .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_Jonathan[] = {
    {
        .lvl = 33,
        .species = SPECIES_KECLEON,
    },
    {
        .lvl = 33,
        .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_BrendanRustboroTorchic[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 13,
        .species = SPECIES_SLUGMA,
    },
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 15,
        .species = SPECIES_MUDKIP,
    }
};

static const struct TrainerMon sParty_MayRustboroMudkip[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 13,
        .species = SPECIES_WINGULL,
    },
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 15,
        .species = SPECIES_TREECKO,
    }
};

static const struct TrainerMon sParty_MaxieMagmaHideout[] = {
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 37,
        .species = SPECIES_MIGHTYENA,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 38,
        .species = SPECIES_CROBAT,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 39,
        .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_MaxieMtChimney[] = {
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 24,
        .species = SPECIES_MIGHTYENA,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 24,
        .species = SPECIES_ZUBAT,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 25,
        .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_Tiana[] = {
    {
        .lvl = 4,
        .species = SPECIES_ZIGZAGOON,
    },
    {
        .lvl = 4,
        .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sParty_Haley1[] = {
    {
        .lvl = 6,
        .species = SPECIES_LOTAD,
    },
    {
        .lvl = 6,
        .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sParty_Janice[] = {
    {
        .lvl = 9,
        .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Vivi[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 15,
        .species = SPECIES_MARILL,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 15,
        .species = SPECIES_SHROOMISH,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 15,
        .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Haley2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 26,
        .species = SPECIES_LOMBRE,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 26,
        .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sParty_Haley3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 29,
        .species = SPECIES_LOMBRE,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 29,
        .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Haley4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 32,
        .species = SPECIES_LOMBRE,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 32,
        .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Haley5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 34,
        .species = SPECIES_SWELLOW,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 34,
        .species = SPECIES_LOMBRE,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 34,
        .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Sally[] = {
    {
        .lvl = 16,
        .species = SPECIES_ODDISH,
    }
};

static const struct TrainerMon sParty_Robin[] = {
    {
        .lvl = 14,
        .species = SPECIES_SKITTY,
    },
    {
        .lvl = 14,
        .species = SPECIES_SHROOMISH,
    },
    {
        .lvl = 14,
        .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Andrea[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 40,
        .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Crissy[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 39,
        .species = SPECIES_GOLDEEN,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 39,
        .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Rick[] = {
    {
        .lvl = 4,
        .species = SPECIES_WURMPLE,
    },
    {
        .lvl = 4,
        .species = SPECIES_WURMPLE,
    }
};

static const struct TrainerMon sParty_Lyle[] = {
    {
        .lvl = 3,
        .species = SPECIES_WURMPLE,
    },
    {
        .lvl = 3,
        .species = SPECIES_WURMPLE,
    },
    {
        .lvl = 3,
        .species = SPECIES_WURMPLE,
    },
    {
        .lvl = 3,
        .species = SPECIES_WURMPLE,
    }
};

static const struct TrainerMon sParty_Jose[] = {
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 8,
        .species = SPECIES_WURMPLE,
    },
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 8,
        .species = SPECIES_NINCADA,
    }
};

static const struct TrainerMon sParty_Doug[] = {
    {
        .lvl = 28,
        .species = SPECIES_NINCADA,
    },
    {
        .lvl = 28,
        .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_Greg[] = {
    {
        .lvl = 25,
        .species = SPECIES_VOLBEAT,
    },
    {
        .lvl = 25,
        .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_Kent[] = {
    {
        .lvl = 25,
        .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_James1[] = {
    {
        .lvl = 6,
        .species = SPECIES_NINCADA,
    },
    {
        .lvl = 6,
        .species = SPECIES_NINCADA,
    }
};

static const struct TrainerMon sParty_James2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 27,
        .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_James3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 29,
        .species = SPECIES_DUSTOX,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 29,
        .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_James4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 31,
        .species = SPECIES_SURSKIT,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 31,
        .species = SPECIES_DUSTOX,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 31,
        .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_James5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 33,
        .species = SPECIES_SURSKIT,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 33,
        .species = SPECIES_NINJASK,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 33,
        .species = SPECIES_DUSTOX,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 33,
        .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_Brice[] = {
    {
        .lvl = 17,
        .species = SPECIES_NUMEL,
    },
    {
        .lvl = 17,
        .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Trent1[] = {
    {
        .lvl = 16,
        .species = SPECIES_GEODUDE,
    },
    {
        .lvl = 17,
        .species = SPECIES_GEODUDE,
    },
    {
        .lvl = 16,
        .species = SPECIES_GEODUDE,
    }
};

static const struct TrainerMon sParty_Lenny[] = {
    {
        .lvl = 18,
        .species = SPECIES_GEODUDE,
    },
    {
        .lvl = 18,
        .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Lucas1[] = {
    {
        .lvl = 18,
        .species = SPECIES_GEODUDE,
    },
    {
        .lvl = 18,
        .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Alan[] = {
    {
        .lvl = 22,
        .species = SPECIES_GEODUDE,
    },
    {
        .lvl = 22,
        .species = SPECIES_NOSEPASS,
    },
    {
        .lvl = 22,
        .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Clark[] = {
    {
        .lvl = 8,
        .species = SPECIES_GEODUDE,
    }
};

static const struct TrainerMon sParty_Eric[] = {
    {
        .lvl = 20,
        .species = SPECIES_GEODUDE,
    },
    {
        .lvl = 20,
        .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sParty_Lucas2[] = {
    {
        .lvl = 9,
        .species = SPECIES_WAILMER,
        .moves = {MOVE_SPLASH, MOVE_WATER_GUN, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Mike1[] = {
    {
        .lvl = 10,
        .species = SPECIES_PELIPPER,
        .moves = {MOVE_GUST, MOVE_GROWL, MOVE_NONE, MOVE_NONE}
    },
    {
        .lvl = 10,
        .species = SPECIES_POOCHYENA,
        .moves = {MOVE_BITE, MOVE_SCARY_FACE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Mike2[] = {
    {
        .lvl = 16,
        .species = SPECIES_GEODUDE,
    },
    {
        .lvl = 16,
        .species = SPECIES_GEODUDE,
    },
    {
        .lvl = 16,
        .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Trent2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 24,
        .species = SPECIES_GEODUDE,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 24,
        .species = SPECIES_GEODUDE,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 24,
        .species = SPECIES_GEODUDE,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 24,
        .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Trent3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 27,
        .species = SPECIES_GEODUDE,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 27,
        .species = SPECIES_GEODUDE,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 27,
        .species = SPECIES_GRAVELER,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 27,
        .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Trent4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 30,
        .species = SPECIES_GEODUDE,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 30,
        .species = SPECIES_GRAVELER,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 30,
        .species = SPECIES_GRAVELER,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 30,
        .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Trent5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 33,
        .species = SPECIES_GRAVELER,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 33,
        .species = SPECIES_GRAVELER,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 33,
        .species = SPECIES_GRAVELER,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 33,
        .species = SPECIES_GOLEM,
    }
};

static const struct TrainerMon sParty_DezAndLuke[] = {
    {
        .lvl = 31,
        .species = SPECIES_DELCATTY,
    },
    {
        .lvl = 31,
        .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_LeaAndJed[] = {
    {
        .lvl = 45,
        .species = SPECIES_LUVDISC,
    },
    {
        .lvl = 45,
        .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_KiraAndDan1[] = {
    {
        .lvl = 25,
        .species = SPECIES_VOLBEAT,
    },
    {
        .lvl = 25,
        .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_KiraAndDan2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 30,
        .species = SPECIES_VOLBEAT,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 30,
        .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_KiraAndDan3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 33,
        .species = SPECIES_VOLBEAT,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 33,
        .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_KiraAndDan4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 36,
        .species = SPECIES_VOLBEAT,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 36,
        .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_KiraAndDan5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 39,
        .species = SPECIES_VOLBEAT,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 39,
        .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_Johanna[] = {
    {
        .lvl = 13,
        .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Gerald[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 23,
        .species = SPECIES_KECLEON,
        .moves = {MOVE_FLAMETHROWER, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK, MOVE_BIND}
    }
};

static const struct TrainerMon sParty_Vivian[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 17,
        .species = SPECIES_MEDITITE,
        .moves = {MOVE_BIDE, MOVE_DETECT, MOVE_CONFUSION, MOVE_THUNDER_PUNCH}
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 17,
        .species = SPECIES_MEDITITE,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_DETECT, MOVE_CONFUSION, MOVE_MEDITATE}
    }
};

static const struct TrainerMon sParty_Danielle[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 23,
        .species = SPECIES_MEDITITE,
        .moves = {MOVE_BIDE, MOVE_DETECT, MOVE_CONFUSION, MOVE_FIRE_PUNCH}
    }
};

static const struct TrainerMon sParty_Hideo[] = {
    {
        .lvl = 25,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_TACKLE, MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN}
    },
    {
        .lvl = 25,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_TACKLE, MOVE_POISON_GAS, MOVE_SLUDGE, MOVE_SMOKESCREEN}
    }
};

static const struct TrainerMon sParty_Keigo[] = {
    {
        .lvl = 28,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_POISON_GAS, MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN}
    },
    {
        .lvl = 28,
        .species = SPECIES_NINJASK,
        .moves = {MOVE_SAND_ATTACK, MOVE_DOUBLE_TEAM, MOVE_FURY_CUTTER, MOVE_SWORDS_DANCE}
    }
};

static const struct TrainerMon sParty_Riley[] = {
    {
        .lvl = 28,
        .species = SPECIES_NINCADA,
        .moves = {MOVE_LEECH_LIFE, MOVE_FURY_SWIPES, MOVE_MIND_READER, MOVE_DIG}
    },
    {
        .lvl = 28,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_TACKLE, MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN}
    }
};

static const struct TrainerMon sParty_Flint[] = {
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 29,
        .species = SPECIES_SWELLOW,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 29,
        .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Ashley[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 27,
        .species = SPECIES_SWABLU,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 27,
        .species = SPECIES_SWABLU,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 27,
        .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_WallyMauville[] = {
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 15,
        .species = SPECIES_BUDEW,
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 18,
        .species = SPECIES_RALTS,
    }
};

static const struct TrainerMon sParty_WallyVR2[] = {
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 47,
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 46,
        .species = SPECIES_DELCATTY,
        .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 47,
        .species = SPECIES_ROSELIA,
        .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 44,
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 48,
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_WallyVR3[] = {
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 65,
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 64,
        .species = SPECIES_DELCATTY,
        .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 65,
        .species = SPECIES_ROSERADE,
        .heldItem = ITEM_BRIGHT_POWDER,
        .moves = {MOVE_PETAL_BLIZZARD, MOVE_LEECH_SEED, MOVE_POISON_JAB, MOVE_TOXIC}
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 62,
        .species = SPECIES_MAGNEZONE,
        .heldItem = ITEM_AIR_BALLOON,
        .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_SCREECH}
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 66,
        .species = SPECIES_GARDEVOIR,
        .heldItem = ITEM_GARDEVOIRITE,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_BrendanLilycoveMudkip[] = {
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 28,
        .species = SPECIES_RHYHORN,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 31,
        .species = SPECIES_TROPIUS,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 32,
        .species = SPECIES_SLUGMA,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 32,
        .species = SPECIES_PELIPPER,
    },
    {
        .ivs = {24, 24, 24, 24, 24, 24},
        .lvl = 34,
        .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_BrendanLilycoveTreecko[] = {
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 28,
        .species = SPECIES_RHYHORN,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 31,
        .species = SPECIES_TROPIUS,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 32,
        .species = SPECIES_PELIPPER,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 32,
        .species = SPECIES_LUDICOLO,
    },
    {
        .ivs = {24, 24, 24, 24, 24, 24},
        .lvl = 34,
        .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_BrendanLilycoveTorchic[] = {
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 28,
        .species = SPECIES_RHYHORN,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 31,
        .species = SPECIES_TROPIUS,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 32,
        .species = SPECIES_LUDICOLO,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 32,
        .species = SPECIES_SLUGMA,
    },
    {
        .ivs = {24, 24, 24, 24, 24, 24},
        .lvl = 34,
        .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_MayLilycoveMudkip[] = {
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 26,
        .species = SPECIES_PIKACHU,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 31,
        .species = SPECIES_TROPIUS,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 32,
        .species = SPECIES_SLUGMA,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 32,
        .species = SPECIES_PELIPPER,
    },
    {
        .ivs = {24, 24, 24, 24, 24, 24},
        .lvl = 34,
        .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_MayLilycoveTreecko[] = {
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 26,
        .species = SPECIES_PIKACHU,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 31,
        .species = SPECIES_TROPIUS,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 32,
        .species = SPECIES_PELIPPER,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 32,
        .species = SPECIES_LUDICOLO,
    },
    {
        .ivs = {24, 24, 24, 24, 24, 24},
        .lvl = 34,
        .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_MayLilycoveTorchic[] = {
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 26,
        .species = SPECIES_PIKACHU,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 31,
        .species = SPECIES_TROPIUS,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 32,
        .species = SPECIES_LUDICOLO,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 32,
        .species = SPECIES_SLUGMA,
    },
    {
        .ivs = {24, 24, 24, 24, 24, 24},
        .lvl = 34,
        .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_Jonah[] = {
    {
        .lvl = 30,
        .species = SPECIES_WAILMER,
    },
    {
        .lvl = 31,
        .species = SPECIES_TENTACOOL,
    },
    {
        .lvl = 32,
        .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Henry[] = {
    {
        .lvl = 31,
        .species = SPECIES_CARVANHA,
    },
    {
        .lvl = 34,
        .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Roger[] = {
    {
        .lvl = 15,
        .species = SPECIES_MAGIKARP,
    },
    {
        .lvl = 25,
        .species = SPECIES_MAGIKARP,
    },
    {
        .lvl = 35,
        .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Alexa[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 34,
        .species = SPECIES_GLOOM,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 34,
        .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Ruben[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 34,
        .species = SPECIES_SHIFTRY,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 34,
        .species = SPECIES_NOSEPASS,
    }
};

static const struct TrainerMon sParty_Koji1[] = {
    {
        .lvl = 34,
        .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Wayne[] = {
    {
        .lvl = 31,
        .species = SPECIES_TENTACOOL,
    },
    {
        .lvl = 31,
        .species = SPECIES_TENTACOOL,
    },
    {
        .lvl = 36,
        .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Aidan[] = {
    {
        .lvl = 32,
        .species = SPECIES_SWELLOW,
    },
    {
        .lvl = 32,
        .species = SPECIES_SKARMORY,
    }
};

static const struct TrainerMon sParty_Reed[] = {
    {
        .lvl = 33,
        .species = SPECIES_SPHEAL,
    },
    {
        .lvl = 33,
        .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Tisha[] = {
    {
        .lvl = 34,
        .species = SPECIES_CHINCHOU,
    }
};

static const struct TrainerMon sParty_ToriAndTia[] = {
    {
        .lvl = 19,
        .species = SPECIES_SPINDA,
    },
    {
        .lvl = 19,
        .species = SPECIES_SPINDA,
    }
};

static const struct TrainerMon sParty_KimAndIris[] = {
    {
        .lvl = 32,
        .species = SPECIES_SWABLU,
        .moves = {MOVE_SING, MOVE_FURY_ATTACK, MOVE_SAFEGUARD, MOVE_AERIAL_ACE}
    },
    {
        .lvl = 35,
        .species = SPECIES_NUMEL,
        .moves = {MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_REST, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_TyraAndIvy[] = {
    {
        .lvl = 18,
        .species = SPECIES_ROSELIA,
        .moves = {MOVE_GROWTH, MOVE_STUN_SPORE, MOVE_MEGA_DRAIN, MOVE_LEECH_SEED}
    },
    {
        .lvl = 20,
        .species = SPECIES_GRAVELER,
        .moves = {MOVE_DEFENSE_CURL, MOVE_ROLLOUT, MOVE_MUD_SPORT, MOVE_ROCK_THROW}
    }
};

static const struct TrainerMon sParty_MelAndPaul[] = {
    {
        .lvl = 27,
        .species = SPECIES_DUSTOX,
        .moves = {MOVE_GUST, MOVE_PSYBEAM, MOVE_TOXIC, MOVE_PROTECT}
    },
    {
        .lvl = 27,
        .species = SPECIES_BEAUTIFLY,
        .moves = {MOVE_GUST, MOVE_MEGA_DRAIN, MOVE_ATTRACT, MOVE_STUN_SPORE}
    }
};

static const struct TrainerMon sParty_JohnAndJay1[] = {
    {
        .ivs = {24, 24, 24, 24, 24, 24},
        .lvl = 39,
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
        .ivs = {24, 24, 24, 24, 24, 24},
        .lvl = 39,
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay2[] = {
    {
        .ivs = {25, 25, 25, 25, 25, 25},
        .lvl = 43,
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
        .ivs = {25, 25, 25, 25, 25, 25},
        .lvl = 43,
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay3[] = {
    {
        .ivs = {26, 26, 26, 26, 26, 26},
        .lvl = 46,
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
        .ivs = {26, 26, 26, 26, 26, 26},
        .lvl = 46,
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay4[] = {
    {
        .ivs = {27, 27, 27, 27, 27, 27},
        .lvl = 49,
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
        .ivs = {27, 27, 27, 27, 27, 27},
        .lvl = 49,
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay5[] = {
    {
        .ivs = {29, 29, 29, 29, 29, 29},
        .lvl = 52,
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
        .ivs = {29, 29, 29, 29, 29, 29},
        .lvl = 52,
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_ReliAndIan[] = {
    {
        .lvl = 35,
        .species = SPECIES_AZUMARILL,
    },
    {
        .lvl = 33,
        .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_LilaAndRoy1[] = {
    {
        .lvl = 34,
        .species = SPECIES_CHINCHOU,
    },
    {
        .lvl = 33,
        .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_LilaAndRoy2[] = {
    {
        .lvl = 42,
        .species = SPECIES_CHINCHOU,
    },
    {
        .lvl = 40,
        .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_LilaAndRoy3[] = {
    {
        .lvl = 45,
        .species = SPECIES_LANTURN,
    },
    {
        .lvl = 43,
        .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_LilaAndRoy4[] = {
    {
        .lvl = 48,
        .species = SPECIES_LANTURN,
    },
    {
        .lvl = 46,
        .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_LilaAndRoy5[] = {
    {
        .lvl = 51,
        .species = SPECIES_LANTURN,
    },
    {
        .lvl = 49,
        .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_LisaAndRay[] = {
    {
        .lvl = 27,
        .species = SPECIES_GOLDEEN,
    },
    {
        .lvl = 25,
        .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Chris[] = {
    {
        .lvl = 29,
        .species = SPECIES_MAGIKARP,
    },
    {
        .lvl = 20,
        .species = SPECIES_TENTACOOL,
    },
    {
        .lvl = 26,
        .species = SPECIES_FEEBAS,
    },
    {
        .lvl = 23,
        .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Dawson[] = {
    {
        .lvl = 8,
        .species = SPECIES_ZIGZAGOON,
        .heldItem = ITEM_NUGGET
    },
    {
        .lvl = 8,
        .species = SPECIES_POOCHYENA,
        .heldItem = ITEM_NONE
    }
};

static const struct TrainerMon sParty_Sarah[] = {
    {
        .lvl = 8,
        .species = SPECIES_LOTAD,
        .heldItem = ITEM_NONE
    },
    {
        .lvl = 8,
        .species = SPECIES_ZIGZAGOON,
        .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Darian[] = {
    {
        .lvl = 9,
        .species = SPECIES_MAGIKARP,
    }
};

static const struct TrainerMon sParty_Hailey[] = {
    {
        .lvl = 13,
        .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Chandler[] = {
    {
        .lvl = 12,
        .species = SPECIES_TENTACOOL,
    },
    {
        .lvl = 12,
        .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Kaleb[] = {
    {
        .lvl = 14,
        .species = SPECIES_MINUN,
        .heldItem = ITEM_ORAN_BERRY
    },
    {
        .lvl = 14,
        .species = SPECIES_PLUSLE,
        .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Joseph[] = {
    {
        .lvl = 14,
        .species = SPECIES_ELECTRIKE,
    },
    {
        .lvl = 14,
        .species = SPECIES_VOLTORB,
    }
};

static const struct TrainerMon sParty_Alyssa[] = {
    {
        .lvl = 15,
        .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Marcos[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 15,
        .species = SPECIES_VOLTORB,
    }
};

static const struct TrainerMon sParty_Rhett[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 15,
        .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Tyron[] = {
    {
        .lvl = 19,
        .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Celina[] = {
    {
        .lvl = 18,
        .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Bianca[] = {
    {
        .lvl = 18,
        .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sParty_Hayden[] = {
    {
        .lvl = 18,
        .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Sophie[] = {
    {
        .lvl = 17,
        .species = SPECIES_MARILL,
    },
    {
        .lvl = 19,
        .species = SPECIES_LOMBRE,
    }
};

static const struct TrainerMon sParty_Coby[] = {
    {
        .lvl = 17,
        .species = SPECIES_SKARMORY,
    },
    {
        .lvl = 19,
        .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Lawrence[] = {
    {
        .lvl = 18,
        .species = SPECIES_BALTOY,
    },
    {
        .lvl = 18,
        .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Wyatt[] = {
    {
        .lvl = 18,
        .species = SPECIES_ARON,
    },
    {
        .lvl = 18,
        .species = SPECIES_ARON,
    }
};

static const struct TrainerMon sParty_Angelina[] = {
    {
        .lvl = 18,
        .species = SPECIES_LOMBRE,
    },
    {
        .lvl = 18,
        .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Kai[] = {
    {
        .lvl = 19,
        .species = SPECIES_BARBOACH,
    }
};

static const struct TrainerMon sParty_Charlotte[] = {
    {
        .lvl = 19,
        .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Deandre[] = {
    {
        .lvl = 14,
        .species = SPECIES_ZIGZAGOON,
    },
    {
        .lvl = 14,
        .species = SPECIES_ARON,
    },
    {
        .lvl = 14,
        .species = SPECIES_ELECTRIKE,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout1[] = {
    {
        .lvl = 29,
        .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout2[] = {
    {
        .lvl = 29,
        .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout3[] = {
    {
        .lvl = 29,
        .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout4[] = {
    {
        .lvl = 28,
        .species = SPECIES_BALTOY,
    },
    {
        .lvl = 28,
        .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout5[] = {
    {
        .lvl = 28,
        .species = SPECIES_BALTOY,
    },
    {
        .lvl = 28,
        .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout6[] = {
    {
        .lvl = 29,
        .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout7[] = {
    {
        .lvl = 29,
        .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout8[] = {
    {
        .lvl = 29,
        .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout9[] = {
    {
        .lvl = 29,
        .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout10[] = {
    {
        .lvl = 29,
        .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout11[] = {
    {
        .lvl = 29,
        .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout12[] = {
    {
        .lvl = 29,
        .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout13[] = {
    {
        .lvl = 29,
        .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout14[] = {
    {
        .lvl = 29,
        .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout15[] = {
    {
        .lvl = 29,
        .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout16[] = {
    {
        .lvl = 29,
        .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sParty_TabithaMagmaHideout[] = {
    {
        .ivs = {9, 9, 9, 9, 9, 9},
        .lvl = 26,
        .species = SPECIES_NUMEL,
    },
    {
        .ivs = {9, 9, 9, 9, 9, 9},
        .lvl = 28,
        .species = SPECIES_MIGHTYENA,
    },
    {
        .ivs = {9, 9, 9, 9, 9, 9},
        .lvl = 30,
        .species = SPECIES_ZUBAT,
    },
    {
        .ivs = {9, 9, 9, 9, 9, 9},
        .lvl = 33,
        .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_Darcy[] = {
    {
        .lvl = 33,
        .species = SPECIES_PELIPPER,
    },
    {
        .lvl = 33,
        .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_MaxieMossdeep[] = {
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 42,
        .species = SPECIES_MIGHTYENA,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 43,
        .species = SPECIES_CROBAT,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 44,
        .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_Pete[] = {
    {
        .lvl = 15,
        .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Isabelle[] = {
    {
        .lvl = 15,
        .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Andres1[] = {
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 25,
        .species = SPECIES_SANDSHREW,
    },
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 25,
        .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Josue[] = {
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 25,
        .species = SPECIES_TAILLOW,
    },
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 25,
        .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Camron[] = {
    {
        .lvl = 26,
        .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Cory1[] = {
    {
        .lvl = 24,
        .species = SPECIES_WINGULL,
    },
    {
        .lvl = 24,
        .species = SPECIES_MACHOP,
    },
    {
        .lvl = 24,
        .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Carolina[] = {
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 24,
        .species = SPECIES_MANECTRIC,
    },
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 24,
        .species = SPECIES_SWELLOW,
    },
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 24,
        .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Elijah[] = {
    {
        .lvl = 25,
        .species = SPECIES_SKARMORY,
    },
    {
        .lvl = 25,
        .species = SPECIES_SKARMORY,
    }
};

static const struct TrainerMon sParty_Celia[] = {
    {
        .lvl = 22,
        .species = SPECIES_MARILL,
    },
    {
        .lvl = 22,
        .species = SPECIES_LOMBRE,
    }
};

static const struct TrainerMon sParty_Bryan[] = {
    {
        .lvl = 22,
        .species = SPECIES_SANDSHREW,
    },
    {
        .lvl = 22,
        .species = SPECIES_SANDSLASH,
    }
};

static const struct TrainerMon sParty_Branden[] = {
    {
        .lvl = 22,
        .species = SPECIES_TAILLOW,
    },
    {
        .lvl = 22,
        .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Bryant[] = {
    {
        .lvl = 18,
        .species = SPECIES_NUMEL,
    },
    {
        .lvl = 18,
        .species = SPECIES_SLUGMA,
    }
};

static const struct TrainerMon sParty_Shayla[] = {
    {
        .lvl = 18,
        .species = SPECIES_SHROOMISH,
    },
    {
        .lvl = 18,
        .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Kyra[] = {
    {
        .lvl = 26,
        .species = SPECIES_DODUO,
    },
    {
        .lvl = 26,
        .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Jaiden[] = {
    {
        .lvl = 26,
        .species = SPECIES_NINJASK,
    },
    {
        .lvl = 26,
        .species = SPECIES_GULPIN,
    }
};

static const struct TrainerMon sParty_Alix[] = {
    {
        .lvl = 26,
        .species = SPECIES_KADABRA,
    },
    {
        .lvl = 26,
        .species = SPECIES_KIRLIA,
    }
};

static const struct TrainerMon sParty_Helene[] = {
    {
        .lvl = 26,
        .species = SPECIES_MEDITITE,
    },
    {
        .lvl = 26,
        .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Marlene[] = {
    {
        .lvl = 18,
        .species = SPECIES_MEDITITE,
    },
    {
        .lvl = 18,
        .species = SPECIES_SPOINK,
    }
};

static const struct TrainerMon sParty_Devan[] = {
    {
        .lvl = 8,
        .species = SPECIES_GEODUDE,
    },
    {
        .lvl = 8,
        .species = SPECIES_GEODUDE,
    }
};

static const struct TrainerMon sParty_Johnson[] = {
    {
        .lvl = 8,
        .species = SPECIES_SHROOMISH,
    },
    {
        .lvl = 8,
        .species = SPECIES_LOTAD,
    }
};

static const struct TrainerMon sParty_Melina[] = {
    {
        .lvl = 17,
        .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Brandi[] = {
    {
        .lvl = 17,
        .species = SPECIES_RALTS,
    }
};

static const struct TrainerMon sParty_Aisha[] = {
    {
        .lvl = 17,
        .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Makayla[] = {
    {
        .lvl = 33,
        .species = SPECIES_ROSELIA,
    },
    {
        .lvl = 33,
        .species = SPECIES_MEDICHAM,
    }
};

static const struct TrainerMon sParty_Fabian[] = {
    {
        .lvl = 26,
        .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Dayton[] = {
    {
        .lvl = 25,
        .species = SPECIES_SLUGMA,
    },
    {
        .lvl = 25,
        .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Rachel[] = {
    {
        .lvl = 26,
        .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Leonel[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 30,
        .species = SPECIES_MANECTRIC,
        .moves = {MOVE_THUNDER, MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Callie[] = {
    {
        .lvl = 28,
        .species = SPECIES_MEDITITE,
    },
    {
        .lvl = 28,
        .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Cale[] = {
    {
        .lvl = 29,
        .species = SPECIES_DUSTOX,
    },
    {
        .lvl = 29,
        .species = SPECIES_BEAUTIFLY,
    }
};

static const struct TrainerMon sParty_Myles[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 25,
        .species = SPECIES_MAKUHITA,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 25,
        .species = SPECIES_WINGULL,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 25,
        .species = SPECIES_TROPIUS,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 25,
        .species = SPECIES_ZIGZAGOON,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 25,
        .species = SPECIES_ELECTRIKE,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 25,
        .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Pat[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 25,
        .species = SPECIES_POOCHYENA,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 25,
        .species = SPECIES_SHROOMISH,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 25,
        .species = SPECIES_ELECTRIKE,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 25,
        .species = SPECIES_MARILL,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 25,
        .species = SPECIES_SANDSHREW,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 25,
        .species = SPECIES_GULPIN,
    }
};

static const struct TrainerMon sParty_Cristin1[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 29,
        .species = SPECIES_LOUDRED,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 29,
        .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMon sParty_MayRustboroTreecko[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 13,
        .species = SPECIES_LOTAD,
    },
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 15,
        .species = SPECIES_TORCHIC,
    }
};

static const struct TrainerMon sParty_MayRustboroTorchic[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 13,
        .species = SPECIES_TORKOAL,
    },
    {
        .ivs = {6, 6, 6, 6, 6, 6},
        .lvl = 15,
        .species = SPECIES_MUDKIP,
    }
};

static const struct TrainerMon sParty_Roxanne2[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 32,
        .species = SPECIES_GOLEM,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PROTECT, MOVE_ROLLOUT, MOVE_MAGNITUDE, MOVE_EXPLOSION}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 35,
        .species = SPECIES_KABUTO,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 35,
        .species = SPECIES_ONIX,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 37,
        .species = SPECIES_NOSEPASS,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Roxanne3[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 37,
        .species = SPECIES_OMANYTE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_SURF}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 37,
        .species = SPECIES_GOLEM,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PROTECT, MOVE_ROLLOUT, MOVE_MAGNITUDE, MOVE_EXPLOSION}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 40,
        .species = SPECIES_KABUTOPS,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 40,
        .species = SPECIES_ONIX,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 42,
        .species = SPECIES_NOSEPASS,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Roxanne4[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 42,
        .species = SPECIES_OMASTAR,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_SURF}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 42,
        .species = SPECIES_GOLEM,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PROTECT, MOVE_ROLLOUT, MOVE_EARTHQUAKE, MOVE_EXPLOSION}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 45,
        .species = SPECIES_KABUTOPS,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 45,
        .species = SPECIES_ONIX,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 47,
        .species = SPECIES_NOSEPASS,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Roxanne5[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 47,
        .species = SPECIES_AERODACTYL,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_ROCK_SLIDE, MOVE_HYPER_BEAM, MOVE_SUPERSONIC, MOVE_PROTECT}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 47,
        .species = SPECIES_GOLEM,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_ROLLOUT, MOVE_EARTHQUAKE, MOVE_EXPLOSION}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 47,
        .species = SPECIES_OMASTAR,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_SURF}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 50,
        .species = SPECIES_KABUTOPS,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 50,
        .species = SPECIES_STEELIX,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 52,
        .species = SPECIES_NOSEPASS,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Brawly2[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 33,
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 33,
        .species = SPECIES_MEDITITE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PSYCHIC, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_FOCUS_PUNCH}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 35,
        .species = SPECIES_HITMONTOP,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 37,
        .species = SPECIES_HARIYAMA,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Brawly3[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 38,
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 38,
        .species = SPECIES_MEDICHAM,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PSYCHIC, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_FOCUS_PUNCH}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 40,
        .species = SPECIES_HITMONTOP,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 42,
        .species = SPECIES_HARIYAMA,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Brawly4[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 40,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SKY_UPPERCUT, MOVE_PROTECT, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 43,
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 43,
        .species = SPECIES_MEDICHAM,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_PSYCHIC}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 45,
        .species = SPECIES_HITMONTOP,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 47,
        .species = SPECIES_HARIYAMA,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Brawly5[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 46,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_MEGA_KICK, MOVE_FOCUS_PUNCH, MOVE_EARTHQUAKE, MOVE_BULK_UP}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 46,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SKY_UPPERCUT, MOVE_PROTECT, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 48,
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 48,
        .species = SPECIES_MEDICHAM,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_PSYCHIC}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 50,
        .species = SPECIES_HITMONTOP,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 52,
        .species = SPECIES_HARIYAMA,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Wattson2[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 36,
        .species = SPECIES_MAREEP,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 36,
        .species = SPECIES_ELECTRODE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 38,
        .species = SPECIES_MAGNETON,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 40,
        .species = SPECIES_MANECTRIC,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Wattson3[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 39,
        .species = SPECIES_PIKACHU,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_THUNDER, MOVE_SLAM, MOVE_RAIN_DANCE, MOVE_SHOCK_WAVE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 41,
        .species = SPECIES_FLAAFFY,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 41,
        .species = SPECIES_ELECTRODE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 43,
        .species = SPECIES_MAGNETON,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 45,
        .species = SPECIES_MANECTRIC,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Wattson4[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 44,
        .species = SPECIES_RAICHU,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_THUNDER, MOVE_SLAM, MOVE_RAIN_DANCE, MOVE_PROTECT}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 46,
        .species = SPECIES_AMPHAROS,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 46,
        .species = SPECIES_ELECTRODE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 48,
        .species = SPECIES_MAGNETON,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 50,
        .species = SPECIES_MANECTRIC,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Wattson5[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 50,
        .species = SPECIES_ELECTABUZZ,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SWIFT, MOVE_FOCUS_PUNCH, MOVE_THUNDER_PUNCH, MOVE_LIGHT_SCREEN}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 51,
        .species = SPECIES_RAICHU,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_THUNDER, MOVE_SLAM, MOVE_RAIN_DANCE, MOVE_PROTECT}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 51,
        .species = SPECIES_AMPHAROS,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 53,
        .species = SPECIES_ELECTRODE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 53,
        .species = SPECIES_MAGNETON,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 55,
        .species = SPECIES_MANECTRIC,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Flannery2[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 38,
        .species = SPECIES_MAGCARGO,
        .heldItem = ITEM_WHITE_HERB,
        .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 36,
        .species = SPECIES_PONYTA,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 38,
        .species = SPECIES_CAMERUPT,
        .heldItem = ITEM_WHITE_HERB,
        .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 40,
        .species = SPECIES_TORKOAL,
        .heldItem = ITEM_WHITE_HERB,
        .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Flannery3[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 41,
        .species = SPECIES_GROWLITHE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_ROAR, MOVE_SUNNY_DAY}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 43,
        .species = SPECIES_MAGCARGO,
        .heldItem = ITEM_WHITE_HERB,
        .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 41,
        .species = SPECIES_PONYTA,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 43,
        .species = SPECIES_CAMERUPT,
        .heldItem = ITEM_WHITE_HERB,
        .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 45,
        .species = SPECIES_TORKOAL,
        .heldItem = ITEM_WHITE_HERB,
        .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Flannery4[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 46,
        .species = SPECIES_HOUNDOUR,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_ROAR, MOVE_SOLAR_BEAM, MOVE_TAUNT, MOVE_SUNNY_DAY}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 46,
        .species = SPECIES_GROWLITHE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_ROAR}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 48,
        .species = SPECIES_MAGCARGO,
        .heldItem = ITEM_WHITE_HERB,
        .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 46,
        .species = SPECIES_RAPIDASH,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 48,
        .species = SPECIES_CAMERUPT,
        .heldItem = ITEM_WHITE_HERB,
        .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 50,
        .species = SPECIES_TORKOAL,
        .heldItem = ITEM_WHITE_HERB,
        .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Flannery5[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 51,
        .species = SPECIES_ARCANINE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_ROAR}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 53,
        .species = SPECIES_MAGCARGO,
        .heldItem = ITEM_WHITE_HERB,
        .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 51,
        .species = SPECIES_HOUNDOOM,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_ROAR, MOVE_SOLAR_BEAM, MOVE_TAUNT, MOVE_SUNNY_DAY}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 51,
        .species = SPECIES_RAPIDASH,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 53,
        .species = SPECIES_CAMERUPT,
        .heldItem = ITEM_WHITE_HERB,
        .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 55,
        .species = SPECIES_TORKOAL,
        .heldItem = ITEM_WHITE_HERB,
        .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Norman2[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 42,
        .species = SPECIES_CHANSEY,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 42,
        .species = SPECIES_SLAKING,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 43,
        .species = SPECIES_SPINDA,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 45,
        .species = SPECIES_SLAKING,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Norman3[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 47,
        .species = SPECIES_SLAKING,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 47,
        .species = SPECIES_CHANSEY,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 45,
        .species = SPECIES_KANGASKHAN,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 48,
        .species = SPECIES_SPINDA,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 50,
        .species = SPECIES_SLAKING,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Norman4[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 52,
        .species = SPECIES_SLAKING,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 52,
        .species = SPECIES_BLISSEY,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 50,
        .species = SPECIES_KANGASKHAN,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 53,
        .species = SPECIES_SPINDA,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 55,
        .species = SPECIES_SLAKING,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Norman5[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 57,
        .species = SPECIES_SLAKING,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 57,
        .species = SPECIES_BLISSEY,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PROTECT, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 55,
        .species = SPECIES_KANGASKHAN,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 57,
        .species = SPECIES_TAUROS,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_TAKE_DOWN, MOVE_PROTECT, MOVE_FIRE_BLAST, MOVE_EARTHQUAKE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 58,
        .species = SPECIES_SPINDA,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 60,
        .species = SPECIES_SLAKING,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Winona2[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 40,
        .species = SPECIES_DRATINI,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 38,
        .species = SPECIES_TROPIUS,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 41,
        .species = SPECIES_PELIPPER,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 43,
        .species = SPECIES_SKARMORY,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 45,
        .species = SPECIES_ALTARIA,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Winona3[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 43,
        .species = SPECIES_HOOTHOOT,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 43,
        .species = SPECIES_TROPIUS,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 45,
        .species = SPECIES_DRAGONAIR,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 46,
        .species = SPECIES_PELIPPER,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 48,
        .species = SPECIES_SKARMORY,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 50,
        .species = SPECIES_ALTARIA,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Winona4[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 48,
        .species = SPECIES_NOCTOWL,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 49,
        .species = SPECIES_TROPIUS,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 50,
        .species = SPECIES_DRAGONAIR,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 51,
        .species = SPECIES_PELIPPER,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 53,
        .species = SPECIES_SKARMORY,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 55,
        .species = SPECIES_ALTARIA,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Winona5[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 53,
        .species = SPECIES_NOCTOWL,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 54,
        .species = SPECIES_TROPIUS,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 55,
        .species = SPECIES_PELIPPER,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 55,
        .species = SPECIES_DRAGONITE,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_HYPER_BEAM, MOVE_THUNDERBOLT, MOVE_EARTHQUAKE, MOVE_ICE_BEAM}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 58,
        .species = SPECIES_SKARMORY,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 60,
        .species = SPECIES_ALTARIA,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_SKY_ATTACK, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_TateAndLiza2[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 48,
        .species = SPECIES_SLOWPOKE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 49,
        .species = SPECIES_CLAYDOL,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 49,
        .species = SPECIES_XATU,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 50,
        .species = SPECIES_LUNATONE,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 50,
        .species = SPECIES_SOLROCK,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_TateAndLiza3[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 53,
        .species = SPECIES_DROWZEE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 53,
        .species = SPECIES_SLOWPOKE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 54,
        .species = SPECIES_CLAYDOL,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 54,
        .species = SPECIES_XATU,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 55,
        .species = SPECIES_LUNATONE,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 55,
        .species = SPECIES_SOLROCK,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_TateAndLiza4[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 58,
        .species = SPECIES_HYPNO,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 59,
        .species = SPECIES_CLAYDOL,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 58,
        .species = SPECIES_SLOWPOKE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 59,
        .species = SPECIES_XATU,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 60,
        .species = SPECIES_LUNATONE,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 60,
        .species = SPECIES_SOLROCK,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_TateAndLiza5[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 63,
        .species = SPECIES_HYPNO,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 64,
        .species = SPECIES_CLAYDOL,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 63,
        .species = SPECIES_SLOWKING,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 64,
        .species = SPECIES_XATU,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 65,
        .species = SPECIES_LUNATONE,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 65,
        .species = SPECIES_SOLROCK,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_Juan2[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 46,
        .species = SPECIES_POLIWAG,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_HYDRO_PUMP}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 46,
        .species = SPECIES_WHISCASH,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 48,
        .species = SPECIES_WALREIN,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 48,
        .species = SPECIES_CRAWDAUNT,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_REST, MOVE_CRABHAMMER, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 51,
        .species = SPECIES_KINGDRA,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Juan3[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 50,
        .species = SPECIES_POLIWHIRL,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_HYDRO_PUMP}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 51,
        .species = SPECIES_WHISCASH,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 53,
        .species = SPECIES_WALREIN,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 53,
        .species = SPECIES_CRAWDAUNT,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 56,
        .species = SPECIES_KINGDRA,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Juan4[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 56,
        .species = SPECIES_LAPRAS,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_PERISH_SONG, MOVE_ICE_BEAM, MOVE_CONFUSE_RAY}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 58,
        .species = SPECIES_WHISCASH,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 56,
        .species = SPECIES_POLIWHIRL,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_HYDRO_PUMP}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 58,
        .species = SPECIES_WALREIN,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 58,
        .species = SPECIES_CRAWDAUNT,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 61,
        .species = SPECIES_KINGDRA,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Juan5[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 61,
        .species = SPECIES_LAPRAS,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_PERISH_SONG, MOVE_ICE_BEAM, MOVE_CONFUSE_RAY}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 63,
        .species = SPECIES_WHISCASH,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 61,
        .species = SPECIES_POLITOED,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_HYDRO_PUMP, MOVE_PERISH_SONG}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 63,
        .species = SPECIES_WALREIN,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_SHEER_COLD}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 63,
        .species = SPECIES_CRAWDAUNT,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 66,
        .species = SPECIES_KINGDRA,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Angelo[] = {
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 17,
        .species = SPECIES_ILLUMISE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SHOCK_WAVE, MOVE_QUICK_ATTACK, MOVE_CHARM, MOVE_NONE}
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 17,
        .species = SPECIES_VOLBEAT,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SHOCK_WAVE, MOVE_QUICK_ATTACK, MOVE_CONFUSE_RAY, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Darius[] = {
    {
        .ivs = {24, 24, 24, 24, 24, 24},
        .lvl = 30,
        .species = SPECIES_TROPIUS,
    }
};

static const struct TrainerMon sParty_Steven[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 77,
        .species = SPECIES_SKARMORY,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_TOXIC, MOVE_AERIAL_ACE, MOVE_SPIKES, MOVE_STEEL_WING}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 75,
        .species = SPECIES_CLAYDOL,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_ANCIENT_POWER, MOVE_EARTHQUAKE}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 76,
        .species = SPECIES_AGGRON,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_THUNDER, MOVE_EARTHQUAKE, MOVE_SOLAR_BEAM, MOVE_DRAGON_CLAW}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 76,
        .species = SPECIES_CRADILY,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_INGRAIN, MOVE_CONFUSE_RAY}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 76,
        .species = SPECIES_ARMALDO,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_WATER_PULSE, MOVE_ANCIENT_POWER, MOVE_AERIAL_ACE, MOVE_SLASH}
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 78,
        .species = SPECIES_METAGROSS,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_METEOR_MASH, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Anabel[] = {
    {
        .lvl = 5,
        .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Tucker[] = {
    {
        .lvl = 5,
        .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Spenser[] = {
    {
        .lvl = 5,
        .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Greta[] = {
    {
        .lvl = 5,
        .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Noland[] = {
    {
        .lvl = 5,
        .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Lucy[] = {
    {
        .lvl = 5,
        .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Brandon[] = {
    {
        .lvl = 5,
        .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Andres2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 31,
        .species = SPECIES_SANDSHREW,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 31,
        .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Andres3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 33,
        .species = SPECIES_NOSEPASS,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 33,
        .species = SPECIES_SANDSHREW,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 33,
        .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Andres4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 35,
        .species = SPECIES_NOSEPASS,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 35,
        .species = SPECIES_SANDSHREW,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 35,
        .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Andres5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 37,
        .species = SPECIES_NOSEPASS,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 37,
        .species = SPECIES_SANDSLASH,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 37,
        .species = SPECIES_SANDSLASH,
    }
};

static const struct TrainerMon sParty_Cory2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 30,
        .species = SPECIES_WINGULL,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 30,
        .species = SPECIES_MACHOP,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 30,
        .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Cory3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 32,
        .species = SPECIES_PELIPPER,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 32,
        .species = SPECIES_MACHOP,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 32,
        .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Cory4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 34,
        .species = SPECIES_PELIPPER,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 34,
        .species = SPECIES_MACHOP,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 34,
        .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Cory5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 36,
        .species = SPECIES_PELIPPER,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 36,
        .species = SPECIES_MACHOKE,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 36,
        .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Pablo2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 37,
        .species = SPECIES_STARYU,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 37,
        .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Pablo3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 39,
        .species = SPECIES_WINGULL,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 39,
        .species = SPECIES_STARYU,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 39,
        .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Pablo4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 41,
        .species = SPECIES_PELIPPER,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 41,
        .species = SPECIES_STARYU,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 41,
        .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Pablo5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 43,
        .species = SPECIES_PELIPPER,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 43,
        .species = SPECIES_STARMIE,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 43,
        .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Koji2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 37,
        .species = SPECIES_MACHOKE,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 37,
        .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Koji3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 39,
        .species = SPECIES_MAKUHITA,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 39,
        .species = SPECIES_MACHOKE,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 39,
        .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Koji4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 41,
        .species = SPECIES_HARIYAMA,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 41,
        .species = SPECIES_MACHOKE,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 41,
        .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Koji5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 43,
        .species = SPECIES_HARIYAMA,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 43,
        .species = SPECIES_MACHAMP,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 43,
        .species = SPECIES_MACHAMP,
    }
};

static const struct TrainerMon sParty_Cristin2[] = {
    {
        .ivs = {13, 13, 13, 13, 13, 13},
        .lvl = 35,
        .species = SPECIES_LOUDRED,
    },
    {
        .ivs = {13, 13, 13, 13, 13, 13},
        .lvl = 35,
        .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMon sParty_Cristin3[] = {
    {
        .ivs = {14, 14, 14, 14, 14, 14},
        .lvl = 37,
        .species = SPECIES_SPINDA,
    },
    {
        .ivs = {14, 14, 14, 14, 14, 14},
        .lvl = 37,
        .species = SPECIES_LOUDRED,
    },
    {
        .ivs = {14, 14, 14, 14, 14, 14},
        .lvl = 37,
        .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMon sParty_Cristin4[] = {
    {
        .ivs = {15, 15, 15, 15, 15, 15},
        .lvl = 39,
        .species = SPECIES_SPINDA,
    },
    {
        .ivs = {15, 15, 15, 15, 15, 15},
        .lvl = 39,
        .species = SPECIES_LOUDRED,
    },
    {
        .ivs = {12, 12, 12, 12, 12, 12},
        .lvl = 39,
        .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMon sParty_Cristin5[] = {
    {
        .ivs = {17, 17, 17, 17, 17, 17},
        .lvl = 41,
        .species = SPECIES_SPINDA,
    },
    {
        .ivs = {17, 17, 17, 17, 17, 17},
        .lvl = 41,
        .species = SPECIES_EXPLOUD,
    },
    {
        .ivs = {17, 17, 17, 17, 17, 17},
        .lvl = 41,
        .species = SPECIES_SLAKING,
    }
};

static const struct TrainerMon sParty_Fernando2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 35,
        .species = SPECIES_ELECTRIKE,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 35,
        .species = SPECIES_ELECTRIKE,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 35,
        .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Fernando3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 37,
        .species = SPECIES_ELECTRIKE,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 37,
        .species = SPECIES_MANECTRIC,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 37,
        .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Fernando4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 39,
        .species = SPECIES_MANECTRIC,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 39,
        .species = SPECIES_MANECTRIC,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 39,
        .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Fernando5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 41,
        .species = SPECIES_MANECTRIC,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 41,
        .species = SPECIES_MANECTRIC,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 41,
        .species = SPECIES_EXPLOUD,
    }
};

static const struct TrainerMon sParty_Sawyer2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 26,
        .species = SPECIES_GEODUDE,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 26,
        .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Sawyer3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 28,
        .species = SPECIES_MACHOP,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 28,
        .species = SPECIES_NUMEL,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 28,
        .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Sawyer4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 30,
        .species = SPECIES_MACHOP,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 30,
        .species = SPECIES_NUMEL,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 30,
        .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Sawyer5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 33,
        .species = SPECIES_MACHOKE,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 33,
        .species = SPECIES_CAMERUPT,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 33,
        .species = SPECIES_GOLEM,
    }
};

static const struct TrainerMon sParty_Gabrielle2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 31,
        .species = SPECIES_SKITTY,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 31,
        .species = SPECIES_MIGHTYENA,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 31,
        .species = SPECIES_ZIGZAGOON,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 31,
        .species = SPECIES_LOTAD,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 31,
        .species = SPECIES_SEEDOT,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 31,
        .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMon sParty_Gabrielle3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 33,
        .species = SPECIES_SKITTY,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 33,
        .species = SPECIES_MIGHTYENA,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 33,
        .species = SPECIES_LINOONE,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 33,
        .species = SPECIES_LOMBRE,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 33,
        .species = SPECIES_NUZLEAF,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 33,
        .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMon sParty_Gabrielle4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 35,
        .species = SPECIES_DELCATTY,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 35,
        .species = SPECIES_MIGHTYENA,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 35,
        .species = SPECIES_LINOONE,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 35,
        .species = SPECIES_LOMBRE,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 35,
        .species = SPECIES_NUZLEAF,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 35,
        .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Gabrielle5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 37,
        .species = SPECIES_DELCATTY,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 37,
        .species = SPECIES_MIGHTYENA,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 37,
        .species = SPECIES_LINOONE,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 37,
        .species = SPECIES_LUDICOLO,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 37,
        .species = SPECIES_SHIFTRY,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 37,
        .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Thalia2[] = {
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 34,
        .species = SPECIES_WAILMER,
    },
    {
        .ivs = {1, 1, 1, 1, 1, 1},
        .lvl = 34,
        .species = SPECIES_HORSEA,
    }
};

static const struct TrainerMon sParty_Thalia3[] = {
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 36,
        .species = SPECIES_LUVDISC,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 36,
        .species = SPECIES_WAILMER,
    },
    {
        .ivs = {2, 2, 2, 2, 2, 2},
        .lvl = 36,
        .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sParty_Thalia4[] = {
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 38,
        .species = SPECIES_LUVDISC,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 38,
        .species = SPECIES_WAILMER,
    },
    {
        .ivs = {3, 3, 3, 3, 3, 3},
        .lvl = 38,
        .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sParty_Thalia5[] = {
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 40,
        .species = SPECIES_LUVDISC,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 40,
        .species = SPECIES_WAILORD,
    },
    {
        .ivs = {4, 4, 4, 4, 4, 4},
        .lvl = 40,
        .species = SPECIES_KINGDRA,
    }
};

static const struct TrainerMon sParty_Mariela[] = {
    {
        .lvl = 41,
        .species = SPECIES_CHIMECHO,
    }
};

static const struct TrainerMon sParty_Alvaro[] = {
    {
        .lvl = 41,
        .species = SPECIES_BANETTE,
    },
    {
        .lvl = 41,
        .species = SPECIES_KADABRA,
    }
};

static const struct TrainerMon sParty_Everett[] = {
    {
        .lvl = 41,
        .species = SPECIES_WOBBUFFET,
    }
};

static const struct TrainerMon sParty_BrendanPostgameMudkip[] = {
    {
        .lvl = 65,
        .species = SPECIES_EXPLOUD,
        .heldItem = ITEM_CHOICE_SCARF,
    },
    {
        .lvl = 66,
        .species = SPECIES_SWELLOW,
        .heldItem = ITEM_SILK_SCARF,
        .moves = {MOVE_BOOMBURST, MOVE_BRAVE_BIRD, MOVE_FOCUS_ENERGY, MOVE_AGILITY},
    },
    {
        .lvl = 66,
        .species = SPECIES_RHYPERIOR,
        .heldItem = ITEM_ASSAULT_VEST,
    },
    {
        .lvl = 67,
        .species = SPECIES_MAGCARGO,
        .heldItem = ITEM_FOCUS_SASH,
    },
    {
        .lvl = 67,
        .species = SPECIES_SHARPEDO,
        .heldItem = ITEM_BLACK_GLASSES,
    },
    {
        .lvl = 69,
        .species = SPECIES_SCEPTILE,
        .heldItem = ITEM_SCEPTILITE,
        .ability = HIDDEN_ABILITY, // Overgrow
    },
};

static const struct TrainerMon sParty_BrendanPostgameTreecko[] = {
    {
        .lvl = 65,
        .species = SPECIES_EXPLOUD,
        .heldItem = ITEM_CHOICE_SCARF,
    },
    {
        .lvl = 66,
        .species = SPECIES_SWELLOW,
        .heldItem = ITEM_SILK_SCARF,
        .moves = {MOVE_BOOMBURST, MOVE_BRAVE_BIRD, MOVE_FOCUS_ENERGY, MOVE_AGILITY},
    },
    {
        .lvl = 66,
        .species = SPECIES_RHYPERIOR,
        .heldItem = ITEM_ASSAULT_VEST,
    },
    {
        .lvl = 67,
        .species = SPECIES_SHARPEDO,
        .heldItem = ITEM_BLACK_GLASSES,
    },
    {
        .lvl = 67,
        .species = SPECIES_BRELOOM,
        .heldItem = ITEM_TOXIC_ORB,
        .ability = SECOND_ABILITY, // Poison Heal
    },
    {
        .lvl = 69,
        .species = SPECIES_BLAZIKEN,
        .heldItem = ITEM_BLAZIKENITE,
        .ability = FIRST_ABILITY, // Blaze / Speed Boost
    },
};

static const struct TrainerMon sParty_BrendanPostgameTorchic[] = {
    {
        .lvl = 65,
        .species = SPECIES_EXPLOUD,
        .heldItem = ITEM_CHOICE_SCARF,
    },
    {
        .lvl = 66,
        .species = SPECIES_SWELLOW,
        .heldItem = ITEM_SILK_SCARF,
        .moves = {MOVE_BOOMBURST, MOVE_BRAVE_BIRD, MOVE_FOCUS_ENERGY, MOVE_AGILITY},
    },
    {
        .lvl = 66,
        .species = SPECIES_RHYPERIOR,
        .heldItem = ITEM_ASSAULT_VEST,
    },
    {
        .lvl = 67,
        .species = SPECIES_MAGCARGO,
        .heldItem = ITEM_FOCUS_SASH,
    },
    {
        .lvl = 67,
        .species = SPECIES_BRELOOM,
        .heldItem = ITEM_TOXIC_ORB,
        .ability = SECOND_ABILITY, // Poison Heal
    },
    {
        .lvl = 69,
        .species = SPECIES_SWAMPERT,
        .heldItem = ITEM_SWAMPERTITE,
        .moves = {MOVE_HAMMER_ARM, MOVE_RAIN_DANCE, MOVE_EARTHQUAKE, MOVE_MUDDY_WATER},
        .ability = FIRST_ABILITY, // Torrent / Swift Swim
    },
};

static const struct TrainerMon sParty_MayPostgameMudkip[] = {
    {
        .lvl = 65,
        .species = SPECIES_CLAYDOL,
        .heldItem = ITEM_LIGHT_CLAY,
    },
    {
        .lvl = 66,
        .species = SPECIES_SWELLOW,
        .heldItem = ITEM_SHARP_BEAK,
        .moves = {MOVE_BOOMBURST, MOVE_BRAVE_BIRD, MOVE_FOCUS_ENERGY, MOVE_AGILITY},
        .gender = MON_MALE,
    },
    {
        .lvl = 66,
        .species = SPECIES_RAICHU,
        .heldItem = ITEM_LIGHT_BALL,
    },
    {
        .lvl = 67,
        .species = SPECIES_MAGCARGO,
        .heldItem = ITEM_LEFTOVERS,
    },
    {
        .lvl = 67,
        .species = SPECIES_SHARPEDO,
        .heldItem = ITEM_RAZOR_FANG,
        .gender = MON_MALE,
    },
    {
        .lvl = 69,
        .species = SPECIES_SCEPTILE,
        .heldItem = ITEM_SCEPTILITE,
    },
};

static const struct TrainerMon sParty_MayPostgameTreecko[] = {
    {
        .lvl = 65,
        .species = SPECIES_CLAYDOL,
        .heldItem = ITEM_LIGHT_CLAY,
    },
    {
        .lvl = 66,
        .species = SPECIES_SWELLOW,
        .heldItem = ITEM_SHARP_BEAK,
        .moves = {MOVE_BOOMBURST, MOVE_BRAVE_BIRD, MOVE_FOCUS_ENERGY, MOVE_AGILITY},
        .gender = MON_MALE,
    },
    {
        .lvl = 66,
        .species = SPECIES_RAICHU,
        .heldItem = ITEM_LIGHT_BALL,
    },
    {
        .lvl = 67,
        .species = SPECIES_SHARPEDO,
        .heldItem = ITEM_RAZOR_FANG,
        .gender = MON_MALE,
    },
    {
        .lvl = 67,
        .species = SPECIES_BRELOOM,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = HIDDEN_ABILITY, // Technician
    },
    {
        .lvl = 69,
        .species = SPECIES_BLAZIKEN,
        .heldItem = ITEM_BLAZIKENITE,
    },
};

static const struct TrainerMon sParty_MayPostgameTorchic[] = {
    {
        .lvl = 65,
        .species = SPECIES_CLAYDOL,
        .heldItem = ITEM_LIGHT_CLAY,
    },
    {
        .lvl = 66,
        .species = SPECIES_SWELLOW,
        .heldItem = ITEM_SHARP_BEAK,
        .moves = {MOVE_BOOMBURST, MOVE_BRAVE_BIRD, MOVE_FOCUS_ENERGY, MOVE_AGILITY},
        .gender = MON_MALE,
    },
    {
        .lvl = 66,
        .species = SPECIES_RAICHU,
        .heldItem = ITEM_LIGHT_BALL,
    },
    {
        .lvl = 67,
        .species = SPECIES_MAGCARGO,
        .heldItem = ITEM_LEFTOVERS,
    },
    {
        .lvl = 67,
        .species = SPECIES_BRELOOM,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = HIDDEN_ABILITY, // Technician
    },
    {
        .lvl = 69,
        .species = SPECIES_SWAMPERT,
        .heldItem = ITEM_SWAMPERTITE,
        .moves = {MOVE_HAMMER_ARM, MOVE_RAIN_DANCE, MOVE_EARTHQUAKE, MOVE_MUDDY_WATER},
        .ability = FIRST_ABILITY, // Torrent / Swift Swim
    },
};

static const struct TrainerMon sParty_ArchiePostgame[] = {
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 65,
        .species = SPECIES_WALREIN,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 65,
        .species = SPECIES_TENTACRUEL,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 65,
        .species = SPECIES_MUK,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 65,
        .species = SPECIES_MIGHTYENA,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 65,
        .species = SPECIES_CROBAT,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 67,
        .species = SPECIES_SHARPEDO,
        .heldItem = ITEM_SHARPEDONITE,
    }
};

static const struct TrainerMon sParty_MaxiePostgame[] = {
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 62,
        .species = SPECIES_SWELLOW,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 63,
        .species = SPECIES_HOUNDOOM,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 64,
        .species = SPECIES_WEEZING,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 65,
        .species = SPECIES_MIGHTYENA,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 66,
        .species = SPECIES_CROBAT,
    },
    {
        .ivs = {18, 18, 18, 18, 18, 18},
        .lvl = 67,
        .species = SPECIES_CAMERUPT,
        .heldItem = ITEM_CAMERUPTITE,
    }
};

static const struct TrainerMon sParty_StevenMossdeep[] = {
    {
        .species = SPECIES_METANG,
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 42,
        .nature = NATURE_BRAVE,
        .moves = {MOVE_LIGHT_SCREEN, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_METAL_CLAW},
        .evs = {0, 252, 252, 0, 6, 0},
    },
    {
        .species = SPECIES_SKARMORY,
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 43,
        .nature = NATURE_IMPISH,
        .moves = {MOVE_TOXIC, MOVE_AERIAL_ACE, MOVE_PROTECT, MOVE_STEEL_WING},
        .evs = {252, 0, 0, 0, 6, 252},
    },
    {
        .species = SPECIES_AGGRON,
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 44,
        .nature = NATURE_ADAMANT,
        .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_SOLAR_BEAM, MOVE_DRAGON_CLAW},
        .evs = {0, 252, 0, 0, 252, 6},
    }
};

static const struct TrainerMon sParty_SidneyRematch[] = {
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 70,
        .species = SPECIES_DRAPION,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_TOXIC_SPIKES, MOVE_POISON_JAB, MOVE_PURSUIT, MOVE_NIGHT_SLASH},
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 70,
        .species = SPECIES_MIGHTYENA,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SWAGGER, MOVE_FIRE_FANG, MOVE_SUCKER_PUNCH, MOVE_CRUNCH},
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 70,
        .species = SPECIES_SHIFTRY,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_FAKE_OUT, MOVE_EXTRASENSORY, MOVE_FEINT_ATTACK, MOVE_LEAF_BLADE},
        .nature = NATURE_HASTY,
        .evs = {0, 128, 0, 252, 128, 0},
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 70,
        .species = SPECIES_CACTURNE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_LEECH_SEED, MOVE_SPIKES, MOVE_ENERGY_BALL, MOVE_SPIKY_SHIELD},
        .nature = NATURE_MILD,
        .evs = {4, 0, 0, 252, 252, 0},
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 70,
        .species = SPECIES_CRAWDAUNT,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_CRABHAMMER, MOVE_SWORDS_DANCE, MOVE_CRUNCH, MOVE_KNOCK_OFF},
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 72,
        .species = SPECIES_ABSOL,
        .heldItem = ITEM_ABSOLITE,
        .moves = {MOVE_AERIAL_ACE, MOVE_NIGHT_SLASH, MOVE_PSYCHO_CUT, MOVE_SUPERPOWER},
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 4, 252, 0, 0},
    },
};

static const struct TrainerMon sParty_PhoebeRematch[] = {
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 71,
        .species = SPECIES_WEAVILE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_KNOCK_OFF, MOVE_SHADOW_CLAW, MOVE_ICICLE_CRASH, MOVE_PURSUIT},
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 71,
        .species = SPECIES_NINETALES,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_NASTY_PLOT, MOVE_FIRE_BLAST, MOVE_HYPNOSIS, MOVE_HOWL},
        .nature = NATURE_NAIVE,
        .evs = {0, 0, 0, 252, 252, 4},
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 71,
        .species = SPECIES_DUSCLOPS,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SHADOW_PUNCH, MOVE_CONFUSE_RAY, MOVE_CURSE, MOVE_FUTURE_SIGHT},
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 71,
        .species = SPECIES_BANETTE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SHADOW_BALL, MOVE_GRUDGE, MOVE_TOXIC, MOVE_PSYCHIC},
        .nature = NATURE_MODEST,
        .evs = {0, 0, 0, 252, 252, 4},
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 71,
        .species = SPECIES_DUSKNOIR,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_HEX, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH},
        .nature = NATURE_ADAMANT,
        .evs = {212, 252, 0, 44, 0, 0},
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 73,
        .species = SPECIES_SABLEYE,
        .heldItem = ITEM_SABLENITE,
        .moves = {MOVE_KNOCK_OFF, MOVE_RECOVER, MOVE_PROTECT, MOVE_WILL_O_WISP},
        .nature = NATURE_CAREFUL,
        .evs = {248, 0, 8, 0, 0, 252},
    }
};

static const struct TrainerMon sParty_GlaciaRematch[] = {
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 72,
        .species = SPECIES_CLOYSTER,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SPIKES, MOVE_ICICLE_SPEAR, MOVE_SHELL_SMASH, MOVE_RAZOR_SHELL},
        .nature = NATURE_JOLLY,
        .ability = SECOND_ABILITY, // Skill Link
        .evs = {0, 252, 0, 252, 0, 4},
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 72,
        .species = SPECIES_GLACEON,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SHADOW_BALL, MOVE_ICE_BEAM, MOVE_MIRROR_COAT, MOVE_AVALANCHE},
        .nature = NATURE_MODEST,
        .evs = {0, 0, 0, 252, 252, 4},
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 72,
        .species = SPECIES_ABOMASNOW,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_BLIZZARD, MOVE_WOOD_HAMMER, MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE},
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 72,
        .species = SPECIES_FROSLASS,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_DRAINING_KISS, MOVE_BLIZZARD, MOVE_HAIL, MOVE_ICY_WIND},
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
    },
    {
        .ivs = BEST_IV_SPREAD_HIDDEN_POWER_FIRE,
        .lvl = 72,
        .species = SPECIES_WALREIN,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SUPER_FANG, MOVE_BODY_SLAM, MOVE_HIDDEN_POWER, MOVE_SHEER_COLD},
        .nature = NATURE_MODEST,
        .evs = {116, 0, 0, 140, 252, 0},
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 74,
        .species = SPECIES_GLALIE,
        .heldItem = ITEM_GLALITITE,
        .moves = {MOVE_PROTECT, MOVE_EXPLOSION, MOVE_AVALANCHE, MOVE_HAIL},
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
    },
};

static const struct TrainerMon sParty_DrakeRematch[] = {
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 74,
        .species = SPECIES_SHELGON,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_ROCK_TOMB, MOVE_DRAGON_CLAW, MOVE_PROTECT, MOVE_DOUBLE_EDGE},
        .nature = NATURE_RELAXED,
        .evs = {252, 0, 252, 0, 0, 4},
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 73,
        .species = SPECIES_CHARIZARD,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_DRAGON_CLAW, MOVE_AIR_SLASH, MOVE_FLAMETHROWER, MOVE_HYPER_BEAM},
        .nature = NATURE_HASTY,
        .evs = {4, 126, 0, 252, 126, 0},
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 73,
        .species = SPECIES_KINGDRA,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_DRAGON_PULSE, MOVE_YAWN, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM},
        .nature = NATURE_MODEST,
        .evs = {4, 0, 0, 252, 252, 0},
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 73,
        .species = SPECIES_ALTARIA,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SKY_ATTACK, MOVE_COTTON_GUARD, MOVE_DRAGON_RUSH, MOVE_MOONBLAST},
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
    },
    {
        .ivs = {30, 30, 30, 30, 30, 30},
        .lvl = 73,
        .species = SPECIES_FLYGON,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_FLAMETHROWER, MOVE_U_TURN, MOVE_EARTH_POWER, MOVE_DRAGON_TAIL},
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 75,
        .species = SPECIES_SALAMENCE,
        .heldItem = ITEM_SALAMENCITE,
        .moves = {MOVE_OUTRAGE, MOVE_DRAGON_DANCE, MOVE_CRUNCH, MOVE_FLY},
        .nature = NATURE_ADAMANT,
        .evs = {44, 252, 0, 212, 0, 0},
    }
};

static const struct TrainerMon sParty_ChampionSteven[] = {
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 77,
        .species = SPECIES_SKARMORY,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_TOXIC, MOVE_AERIAL_ACE, MOVE_SPIKES, MOVE_STEEL_WING},
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 77,
        .species = SPECIES_CLAYDOL,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_EXTRASENSORY, MOVE_EARTH_POWER},
        .nature = NATURE_BOLD,
        .evs = {252, 0, 120, 136, 0, 0},
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 77,
        .species = SPECIES_AGGRON,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_HEAVY_SLAM},
        .nature = NATURE_BOLD,
        .evs = {0, 252, 4, 252, 0, 0},
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 77,
        .species = SPECIES_CRADILY,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_TOXIC, MOVE_CONFUSE_RAY},
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 77,
        .species = SPECIES_ARMALDO,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_X_SCISSOR, MOVE_ANCIENT_POWER, MOVE_METAL_CLAW, MOVE_CRUSH_CLAW},
        .nature = NATURE_ADAMANT,
        .evs = {252, 92, 0, 164, 0, 0},
    },
    {
        .ivs = {31, 31, 31, 31, 31, 31},
        .lvl = 79,
        .species = SPECIES_METAGROSS,
        .heldItem = ITEM_METAGROSSITE,
        .moves = {MOVE_BULLET_PUNCH, MOVE_ZEN_HEADBUTT, MOVE_METEOR_MASH, MOVE_GIGA_IMPACT},
        .nature = NATURE_JOLLY,
        .evs = {232, 60, 0, 176, 0, 40},
    }
};
