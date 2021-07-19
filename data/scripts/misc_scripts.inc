@ For scripts that don't fit thematically in other .inc files

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

EventScript_DisableAutoRun::
	playse SE_BOO
	waitse
	end

EventScript_EnableAutoRun::
	playse SE_PIN
	waitse
	end

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

EventScript_CheckFishingStreak::
	lockall
	specialvar VAR_RESULT, CheckChainFishingStreak
	buffernumberstring 0, VAR_RESULT
	msgbox EventScript_CheckFishingStreak_Text_CurrentFishingStreak, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CheckFishingStreak_Text_CurrentFishingStreak::
	.string "Current chain fishing streak: {STR_VAR_1}.$"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

EventScript_DebugPack::
	lockall
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_SYS_POKEDEX_GET
	setflag FLAG_SYS_B_DASH
	setflag FLAG_RECEIVED_RUNNING_SHOES
	setflag FLAG_RECEIVED_AMULET_COIN
	setflag FLAG_RECEIVED_EXP_SHARE
	setflag FLAG_IS_CHAMPION
	special EnableNationalPokedex
	givecustommon SPECIES_CHARIZARD, 100, ITEM_CHARIZARDITE_Y, ITEM_LUXURY_BALL, NATURE_TIMID, 0, 0, 0, 4, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_FLAMETHROWER, MOVE_FOCUS_BLAST, MOVE_SOLAR_BEAM, MOVE_ROOST, 0
	givecustommon SPECIES_BLASTOISE, 100, ITEM_FOCUS_SASH, ITEM_NET_BALL, NATURE_MODEST, 0, 0, 0, 4, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_SURF, MOVE_ICE_BEAM, MOVE_DARK_PULSE, MOVE_SHELL_SMASH, 0
	givecustommon SPECIES_VENUSAUR, 100, ITEM_FOCUS_SASH, ITEM_FRIEND_BALL, NATURE_IMPISH, 0, 252, 0, 180, 0, 0, 76, 31, 31, 31, 31, 31, 31, MOVE_LEECH_SEED, MOVE_TOXIC, MOVE_SYNTHESIS, MOVE_EARTHQUAKE, 0
	givecustommon SPECIES_SNORLAX, 100, ITEM_IAPAPA_BERRY, ITEM_PREMIER_BALL, NATURE_CAREFUL, 0, 232, 20, 0, 0, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_CURSE, MOVE_RECYCLE, MOVE_BODY_SLAM, MOVE_CRUNCH, 1
	additem ITEM_AMULET_COIN, 1
	additem ITEM_RARE_CANDY, 99
	additem ITEM_MASTER_BALL, 99
	additem ITEM_TM01, 1
	additem ITEM_TM02, 1
	additem ITEM_TM03, 1
	additem ITEM_TM04, 1
	additem ITEM_TM05, 1
	additem ITEM_TM06, 1
	additem ITEM_TM07, 1
	additem ITEM_TM08, 1
	additem ITEM_TM09, 1
	additem ITEM_TM10, 1
	additem ITEM_TM11, 1
	additem ITEM_TM12, 1
	additem ITEM_TM13, 1
	additem ITEM_TM14, 1
	additem ITEM_TM15, 1
	additem ITEM_TM16, 1
	additem ITEM_TM17, 1
	additem ITEM_TM18, 1
	additem ITEM_TM19, 1
	additem ITEM_TM20, 1
	additem ITEM_TM21, 1
	additem ITEM_TM22, 1
	additem ITEM_TM23, 1
	additem ITEM_TM24, 1
	additem ITEM_TM25, 1
	additem ITEM_TM26, 1
	additem ITEM_TM27, 1
	additem ITEM_TM28, 1
	additem ITEM_TM29, 1
	additem ITEM_TM30, 1
	additem ITEM_TM31, 1
	additem ITEM_TM32, 1
	additem ITEM_TM33, 1
	additem ITEM_TM34, 1
	additem ITEM_TM35, 1
	additem ITEM_TM36, 1
	additem ITEM_TM37, 1
	additem ITEM_TM38, 1
	additem ITEM_TM39, 1
	additem ITEM_TM40, 1
	additem ITEM_TM41, 1
	additem ITEM_TM42, 1
	additem ITEM_TM43, 1
	additem ITEM_TM44, 1
	additem ITEM_TM45, 1
	additem ITEM_TM46, 1
	additem ITEM_TM47, 1
	additem ITEM_TM48, 1
	additem ITEM_TM49, 1
	additem ITEM_TM50, 1
	additem ITEM_HM01, 1
	additem ITEM_HM02, 1
	additem ITEM_HM03, 1
	additem ITEM_HM04, 1
	additem ITEM_HM05, 1
	additem ITEM_HM06, 1
	additem ITEM_HM07, 1
	additem ITEM_HM08, 1
	additem ITEM_EXP_SHARE, 1
	additem ITEM_GOOD_ROD, 1
	additem ITEM_MACH_BIKE, 1
	additem ITEM_MEGA_BRACELET, 1
	setflag FLAG_BADGE01_GET
	setflag FLAG_BADGE02_GET
	setflag FLAG_BADGE03_GET
	setflag FLAG_BADGE04_GET
	setflag FLAG_BADGE05_GET
	setflag FLAG_BADGE06_GET
	setflag FLAG_BADGE07_GET
	setflag FLAG_BADGE08_GET
	releaseall
	end

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

EventScript_CheckSavefileSize::
	special CheckSavefileSize
	msgbox EventScript_Text_CheckSavefileSize
	release
	end

EventScript_Text_CheckSavefileSize:
	.string "SaveBlock1 size: {STR_VAR_1}/15752 bytes.\nSaveBlock2 size: {STR_VAR_2}/3884 bytes.\p{PKMN}Storage size: {STR_VAR_3}/33744 bytes.$"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

EventScript_CheckEVs::
	lockall
	faceplayer
	getpartysize
	compare VAR_RESULT, 0
	goto_if_eq EventScript_ThereIsNoPokemon
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge EventScript_Cancel
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq EventScript_CheckEVs_Egg
	special CheckMonEVs
	msgbox EventScript_CheckEVs_Text_Evaluation
	msgbox EventScript_Text_ComeBackAnytime
	releaseall
	end

EventScript_Cancel:
	end

EventScript_CheckEVs_Egg:
	lockall
	faceplayer
	msgbox EventScript_CheckEVs_Text_Egg
	releaseall
	end

EventScript_CheckEVs_Text_Evaluation:
	.string "Your POKéMON has: {STR_VAR_1} HP EVs,\n"
	.string "{STR_VAR_2} ATK EVs and {STR_VAR_3} DEF EVs.\p"
	.string "Let's see what else…\p"
	.string "It also has: {STR_VAR_4} SPD EVs,\n"
	.string "{STR_VAR_5} SP. ATK EVs and {STR_VAR_6} SP. DEF EVs.$"

EventScript_CheckEVs_Text_Egg:
	.string "Sorry, Pokémon Eggs don't\n"
	.string "have EVs.$"

EventScript_Text_ComeBackAnytime:
	.string "Come back anytime.$"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

EventScript_CheckIVs::
	lockall
	faceplayer
	getpartysize
	compare VAR_RESULT, 0
	goto_if_eq EventScript_ThereIsNoPokemon
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge EventScript_Cancel
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq EventScript_CheckIVs_Egg
	special CheckMonIVs
	msgbox EventScript_CheckIVs_Text_Evaluation
	msgbox EventScript_Text_ComeBackAnytime
	releaseall
	end

EventScript_CheckIVs_Egg:
	lockall
	faceplayer
	msgbox EventScript_CheckIVs_Text_Egg
	releaseall
	end

EventScript_CheckIVs_Text_Evaluation:
	.string "Your POKéMON has: {STR_VAR_1} HP IVs,\n"
	.string "{STR_VAR_2} ATK IVs and {STR_VAR_3} DEF IVs.\p"
	.string "Let's see what else…\p"
	.string "It also has: {STR_VAR_4} SPD IVs,\n"
	.string "{STR_VAR_5} SP. ATK IVs and {STR_VAR_6} SP. DEF IVs.$"

EventScript_CheckIVs_Text_Egg:
	.string "Sorry, Pokémon Eggs don't\n"
	.string "have IVs.$"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

EventScript_ThereIsNoPokemon::
	msgbox gText_NoPokemon, MSGBOX_DEFAULT
	releaseall
	end

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

EventScript_ForceEggHatch::
	lockall
	faceplayer
	getpartysize
	compare VAR_RESULT, 0
	goto_if_eq EventScript_ThereIsNoPokemon
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_SIZE
	goto_if_eq EventScript_Cancel
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_EGG
	goto_if_ne EventScript_ForceEggHatch_CantForceHatch
	special EggHatch
	waitstate
	releaseall
	end
EventScript_ForceEggHatch_CantForceHatch:
	lock
	msgbox EventScript_ForcedEggHatch_Text_NotAnEgg
	release
	end

EventScript_ForcedEggHatch_Text_NotAnEgg:
	.string "That's not a Pokémon Egg.$"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

EventScript_DisableTrainerEncounters::
	lockall
	goto_if_set FLAG_DISABLE_TRAINER_ENCOUNTERS, EventScript_DisableTrainerEncountersReEnable
	setflag FLAG_DISABLE_TRAINER_ENCOUNTERS
	msgbox EventScript_DisableTrainerEncounters_Text_Done
EventScript_DisableTrainerEncountersEnd:
	releaseall
	end

EventScript_DisableTrainerEncountersReEnable:
	clearflag FLAG_DISABLE_TRAINER_ENCOUNTERS
	msgbox EventScript_DisableTrainerEncounters_Text_Done2
	goto EventScript_DisableTrainerEncountersEnd

EventScript_DisableTrainerEncounters_Text_Done:
	.string "Other trainers will no longer\nbe able to see you.$"

EventScript_DisableTrainerEncounters_Text_Done2:
	.string "Other trainers will be able\nto see you again.$"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

EventScript_DisableBallThrows::
	lockall
	goto_if_set FLAG_DISABLE_BALL_THROWS, EventScript_DisableBallThrowsReEnable
	setflag FLAG_DISABLE_BALL_THROWS
	msgbox EventScript_DisableBallThrows_Text_Done
EventScript_DisableBallThrowsEnd:
	releaseall
	end

EventScript_DisableBallThrowsReEnable:
	clearflag FLAG_DISABLE_BALL_THROWS
	msgbox EventScript_DisableBallThrows_Text_Done2
	goto EventScript_DisableBallThrowsEnd

EventScript_DisableBallThrows_Text_Done:
	.string "You won't be able to catch\nPokémon anymore.$"

EventScript_DisableBallThrows_Text_Done2:
	.string "You'll be able to catch\nPokémon again.$"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

EventScript_WalkThroughWalls::
	lockall
	goto_if_set FLAG_DISABLE_COLLISIONS, EventScript_WalkThroughWallsReEnable
	setflag FLAG_DISABLE_COLLISIONS
	msgbox EventScript_WalkThroughWalls_Text_Done
EventScript_WalkThroughWallsEnd:
	releaseall
	end

EventScript_WalkThroughWallsReEnable:
	clearflag FLAG_DISABLE_COLLISIONS
	msgbox EventScript_WalkThroughWalls_Text_Done2
	goto EventScript_WalkThroughWallsEnd

EventScript_WalkThroughWalls_Text_Done:
	.string "Walk Through Walls enabled.$"

EventScript_WalkThroughWalls_Text_Done2:
	.string "Walk Through Walls disabled.$"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

EventScript_DisableBattleBagAccess::
	lockall
	goto_if_set FLAG_DISABLE_BATTLE_BAG_ACCESS, EventScript_DisableBattleBagAccessReEnable
	setflag FLAG_DISABLE_BATTLE_BAG_ACCESS
	msgbox EventScript_DisableBattleBagAccess_Text_Done
EventScript_DisableBattleBagAccessEnd:
	releaseall
	end

EventScript_DisableBattleBagAccessReEnable:
	clearflag FLAG_DISABLE_BATTLE_BAG_ACCESS
	msgbox EventScript_DisableBattleBagAccess_Text_Done2
	goto EventScript_DisableBattleBagAccessEnd

EventScript_DisableBattleBagAccess_Text_Done:
	.string "You can't use items\nin battle anymore.$"

EventScript_DisableBattleBagAccess_Text_Done2:
	.string "You can use items\nin battle again.$"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

EventScript_DisableWildEncounters::
	lockall
	goto_if_set FLAG_DISABLE_WILD_ENCOUNTERS, EventScript_DisableWildEncountersReEnable
	setflag FLAG_DISABLE_WILD_ENCOUNTERS
	msgbox EventScript_DisableWildEncounters_Text_Done
EventScript_DisableWildEncountersEnd:
	releaseall
	end

EventScript_DisableWildEncountersReEnable:
	clearflag FLAG_DISABLE_WILD_ENCOUNTERS
	msgbox EventScript_DisableWildEncounters_Text_Done2
	goto EventScript_DisableWildEncountersEnd

EventScript_DisableWildEncounters_Text_Done:
	.string "Pokéwhat?$"

EventScript_DisableWildEncounters_Text_Done2:
	.string "P. O. K. é. M. ON!\nPOKéMON!$"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

EventScript_CheckTime::
	lockall
	gettime
	buffernumberstring 0, VAR_0x8000
	buffernumberstring 1, VAR_0x8001
	buffernumberstring 2, VAR_0x8002
	msgbox EventScript_CheckTime_Text_CurrentTime, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CheckTime_Text_CurrentTime:
	.string "The current time is {STR_VAR_1}:{STR_VAR_2}:{STR_VAR_3}.$"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

EventScript_CheckDate::
	lockall
	getdate
	buffernumberstring 0, VAR_0x8000
	buffernumberstring 1, VAR_0x8001
	buffernumberstring 2, VAR_0x8002
	msgbox EventScript_CheckTime_Text_CurrentDate, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CheckTime_Text_CurrentDate:
	.string "Today is {STR_VAR_1}/{STR_VAR_2}/{STR_VAR_3}.$"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

EventScript_DeleteMon::
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge EventScript_DeleteMonEnd
	bufferpartymonnick 0, VAR_0x8004
	special DeleteChosenPartyMon
	msgbox EventScript_DeleteMon_Text_Poof, MSGBOX_SIGN
EventScript_DeleteMonEnd:
	end

EventScript_DeleteMon_Text_Poof:
	.string "Your {STR_VAR_1} has been deleted.$"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

EventScript_GetCurrentDay::
	getcurrentday 0
	msgbox EventScript_GetCurrentDay_Text_TodayIs
	closemessage
	end

EventScript_GetCurrentDay_Text_TodayIs:
	.string "Today is {STR_VAR_1}.$"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

EventScript_DoWonderTrade::
	lockall
	getpartysize
	compare VAR_RESULT, 0
	goto_if_eq EventScript_ThereIsNoPokemon
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge EventScript_Cancel
	copyvar VAR_0x8005, VAR_0x8004
	special CreateWonderTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox EventScript_DoWonderTrade_Text_WannaDoAnotherWonderTrade, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_DoWonderTrade
	msgbox EventScript_DoWonderTrade_Text_Done, MSGBOX_DEFAULT
	releaseall
	end

EventScript_DoWonderTrade_Text_WannaDoAnotherWonderTrade:
	.string "Do you want to do\nanother Wonder Trade?$"

EventScript_DoWonderTrade_Text_Done:
	.string "Enjoy your new Pokémon.$"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

PokemonDataInfoBox::
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge EventScript_Cancel
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq EventScript_Cancel
	special BufferChosenMonStats
	drawinfobox INFOBOX_POKEMON_DATA
	bufferpartymonnick 0, VAR_0x8004
	msgbox EventScript_PokemonDataInfoBox_Text_ChosenMonStats
	removeinfobox
	release
	end

EventScript_PokemonDataInfoBox_Text_ChosenMonStats:
	.string "Stats of {STR_VAR_1}$"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

Script_CatchingStreak::
	compare VAR_WILD_POKEMON_CHAIN_COUNT, 0
	goto_if_eq Script_NoStreak
	buffernumberstring 4, VAR_WILD_POKEMON_CHAIN_COUNT
	msgbox Script_CatchingStreak_Text_Status, MSGBOX_NPC
	end

Script_NoStreak:
	msgbox Script_Text_NoStreak, MSGBOX_NPC
	end

Script_Text_NoStreak:
	.string "Current chain: EMPTY.$"

Script_CatchingStreak_Text_Status:
	.string "Current chain: {STR_VAR_5} {STR_VAR_4}.$"
