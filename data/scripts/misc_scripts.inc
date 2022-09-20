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

DebugScript_CheckFishingStreak::
	lockall
	specialvar VAR_RESULT, CheckChainFishingStreak
	buffernumberstring 0, VAR_RESULT
	msgbox DebugScript_CheckFishingStreak_Text_CurrentFishingStreak, MSGBOX_DEFAULT
	releaseall
	end

DebugScript_CheckFishingStreak_Text_CurrentFishingStreak::
	.string "Current chain fishing streak: {STR_VAR_1}.$"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

DebugScript_CheckSavefileSize::
	msgbox DebugScript_Text_CheckSavefileSize
	release
	end

DebugScript_Text_CheckSavefileSize:
	.string "SaveBlock1 size: {STR_VAR_1}/{STR_VAR_4} bytes.\n"
	.string "SaveBlock2 size: {STR_VAR_2}/{STR_VAR_5} bytes.\p"
	.string "{PKMN}Storage size: {STR_VAR_3}/{STR_VAR_6} bytes.\n"
	.string "Box{PKMN} size: {STR_VAR_7} bytes.$"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

DebugScript_CheckEVs::
	lockall
	faceplayer
	getpartysize
	goto_if_eq VAR_RESULT, 0, EventScript_ThereIsNoPokemon
	special ChoosePartyMon
	waitstate
	goto_if_ge VAR_0x8004, PARTY_SIZE, DebugScript_Cancel
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EGG, DebugScript_CheckEVs_Egg
	special CheckMonEVs
	msgbox DebugScript_CheckEVs_Text_Evaluation
	msgbox DebugScript_Text_ComeBackAnytime
	releaseall
	end

DebugScript_CheckEVs_Egg:
	lockall
	faceplayer
	msgbox DebugScript_CheckEVs_Text_Egg
	releaseall
	end

DebugScript_CheckEVs_Text_Evaluation:
	.string "Your POKéMON has: {STR_VAR_1} HP EVs,\n"
	.string "{STR_VAR_2} ATK EVs and {STR_VAR_3} DEF EVs.\p"
	.string "Let's see what else…\p"
	.string "It also has: {STR_VAR_4} SPD EVs,\n"
	.string "{STR_VAR_5} SP. ATK EVs and {STR_VAR_6} SP. DEF EVs.$"

DebugScript_CheckEVs_Text_Egg:
	.string "Sorry, Pokémon Eggs don't\n"
	.string "have EVs.$"

DebugScript_Text_ComeBackAnytime:
	.string "Come back anytime.$"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

DebugScript_CheckIVs::
	lockall
	faceplayer
	getpartysize
	goto_if_eq VAR_RESULT, 0, EventScript_ThereIsNoPokemon
	special ChoosePartyMon
	waitstate
	goto_if_ge VAR_0x8004, PARTY_SIZE, DebugScript_Cancel
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EGG, DebugScript_CheckIVs_Egg
	special CheckMonIVs
	msgbox DebugScript_CheckIVs_Text_Evaluation
	msgbox DebugScript_Text_ComeBackAnytime
	releaseall
	end

DebugScript_CheckIVs_Egg:
	lockall
	faceplayer
	msgbox DebugScript_CheckIVs_Text_Egg
	releaseall
	end

DebugScript_CheckIVs_Text_Evaluation:
	.string "Your POKéMON has: {STR_VAR_1} HP IVs,\n"
	.string "{STR_VAR_2} ATK IVs and {STR_VAR_3} DEF IVs.\p"
	.string "Let's see what else…\p"
	.string "It also has: {STR_VAR_4} SPD IVs,\n"
	.string "{STR_VAR_5} SP. ATK IVs and {STR_VAR_6} SP. DEF IVs.$"

DebugScript_CheckIVs_Text_Egg:
	.string "Sorry, Pokémon Eggs don't\n"
	.string "have IVs.$"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

EventScript_ThereIsNoPokemon::
	msgbox gText_NoPokemon, MSGBOX_DEFAULT
	releaseall
	end

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

DebugScript_ForceEggHatch::
	lockall
	faceplayer
	getpartysize
	goto_if_eq VAR_RESULT, 0, EventScript_ThereIsNoPokemon
	special ChoosePartyMon
	waitstate
	goto_if_ge VAR_0x8004, PARTY_SIZE, DebugScript_Cancel
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_ne VAR_RESULT, SPECIES_EGG, DebugScript_ForceEggHatch_CantForceHatch
	special EggHatch
	waitstate
	releaseall
	end

DebugScript_ForceEggHatch_CantForceHatch:
	msgbox DebugScript_ForcedEggHatch_Text_NotAnEgg
	releaseall
	end

DebugScript_ForcedEggHatch_Text_NotAnEgg:
	.string "That's not a Pokémon Egg.$"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

DebugScript_DisableTrainerEncounters::
	lockall
	goto_if_set FLAG_DISABLE_TRAINER_ENCOUNTERS, DebugScript_DisableTrainerEncountersReEnable
	setflag FLAG_DISABLE_TRAINER_ENCOUNTERS
	msgbox DebugScript_DisableTrainerEncounters_Text_Done
DebugScript_DisableTrainerEncountersEnd:
	releaseall
	end

DebugScript_DisableTrainerEncountersReEnable:
	clearflag FLAG_DISABLE_TRAINER_ENCOUNTERS
	msgbox DebugScript_DisableTrainerEncounters_Text_Done2
	goto DebugScript_DisableTrainerEncountersEnd

DebugScript_DisableTrainerEncounters_Text_Done:
	.string "Other trainers will no longer\nbe able to see you.$"

DebugScript_DisableTrainerEncounters_Text_Done2:
	.string "Other trainers will be able\nto see you again.$"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

DebugScript_DisableBallThrows::
	lockall
	goto_if_set FLAG_DISABLE_BALL_THROWS, DebugScript_DisableBallThrowsReEnable
	setflag FLAG_DISABLE_BALL_THROWS
	msgbox DebugScript_DisableBallThrows_Text_Done
DebugScript_DisableBallThrowsEnd:
	releaseall
	end

DebugScript_DisableBallThrowsReEnable:
	clearflag FLAG_DISABLE_BALL_THROWS
	msgbox DebugScript_DisableBallThrows_Text_Done2
	goto DebugScript_DisableBallThrowsEnd

DebugScript_DisableBallThrows_Text_Done:
	.string "You won't be able to catch\nPokémon anymore.$"

DebugScript_DisableBallThrows_Text_Done2:
	.string "You'll be able to catch\nPokémon again.$"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

DebugScript_WalkThroughWalls::
	lockall
	goto_if_set FLAG_DISABLE_COLLISIONS, DebugScript_WalkThroughWallsReEnable
	setflag FLAG_DISABLE_COLLISIONS
	msgbox DebugScript_WalkThroughWalls_Text_Done
DebugScript_WalkThroughWallsEnd:
	releaseall
	end

DebugScript_WalkThroughWallsReEnable:
	clearflag FLAG_DISABLE_COLLISIONS
	msgbox DebugScript_WalkThroughWalls_Text_Done2
	goto DebugScript_WalkThroughWallsEnd

DebugScript_WalkThroughWalls_Text_Done:
	.string "Walk Through Walls enabled.$"

DebugScript_WalkThroughWalls_Text_Done2:
	.string "Walk Through Walls disabled.$"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

DebugScript_DisableBattleBagAccess::
	lockall
	goto_if_set FLAG_DISABLE_BATTLE_BAG_ACCESS, DebugScript_DisableBattleBagAccessReEnable
	setflag FLAG_DISABLE_BATTLE_BAG_ACCESS
	msgbox DebugScript_DisableBattleBagAccess_Text_Done
DebugScript_DisableBattleBagAccessEnd:
	releaseall
	end

DebugScript_DisableBattleBagAccessReEnable:
	clearflag FLAG_DISABLE_BATTLE_BAG_ACCESS
	msgbox DebugScript_DisableBattleBagAccess_Text_Done2
	goto DebugScript_DisableBattleBagAccessEnd

DebugScript_DisableBattleBagAccess_Text_Done:
	.string "You can't use items\nin battle anymore.$"

DebugScript_DisableBattleBagAccess_Text_Done2:
	.string "You can use items\nin battle again.$"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

DebugScript_DisableWildEncounters::
	lockall
	goto_if_set FLAG_DISABLE_WILD_ENCOUNTERS, DebugScript_DisableWildEncountersReEnable
	setflag FLAG_DISABLE_WILD_ENCOUNTERS
	msgbox DebugScript_DisableWildEncounters_Text_Done
DebugScript_DisableWildEncountersEnd:
	releaseall
	end

DebugScript_DisableWildEncountersReEnable:
	clearflag FLAG_DISABLE_WILD_ENCOUNTERS
	msgbox DebugScript_DisableWildEncounters_Text_Done2
	goto DebugScript_DisableWildEncountersEnd

DebugScript_DisableWildEncounters_Text_Done:
	.string "Pokéwhat?$"

DebugScript_DisableWildEncounters_Text_Done2:
	.string "P. O. K. é. M. ON!\nPOKéMON!$"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

DebugScript_CheckDate::
	lockall
	getdate
	buffernumberstring 0, VAR_0x8000
	buffernumberstring 1, VAR_0x8001
	buffernumberstring 2, VAR_0x8002
	msgbox DebugScript_CheckTime_Text_CurrentDate, MSGBOX_DEFAULT
	releaseall
	end

DebugScript_CheckTime_Text_CurrentDate:
	.string "Today is {STR_VAR_1}/{STR_VAR_2}/{STR_VAR_3}.$"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

DebugScript_DeleteMon::
	special ChoosePartyMon
	waitstate
	goto_if_ge VAR_0x8004, PARTY_SIZE, DebugScript_DeleteMonEnd
	bufferpartymonnick 0, VAR_0x8004
	special DeleteChosenPartyMon
	msgbox DebugScript_DeleteMon_Text_Poof, MSGBOX_SIGN
DebugScript_DeleteMonEnd:
	end

DebugScript_DeleteMon_Text_Poof:
	.string "Your {STR_VAR_1} has been deleted.$"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

DebugScript_GetCurrentDay::
	getcurrentday 0
	msgbox DebugScript_GetCurrentDay_Text_TodayIs
	closemessage
	end

DebugScript_GetCurrentDay_Text_TodayIs:
	.string "Today is {STR_VAR_1}.$"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

DebugScript_DoWonderTrade::
	lockall
	getpartysize
	goto_if_eq VAR_RESULT, 0, EventScript_ThereIsNoPokemon
	special ChoosePartyMon
	waitstate
	goto_if_ge VAR_0x8004, PARTY_SIZE, DebugScript_Cancel
	copyvar VAR_0x8005, VAR_0x8004
	callnative CreateWonderTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox DebugScript_DoWonderTrade_Text_WannaDoAnotherWonderTrade, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, DebugScript_DoWonderTrade
	msgbox DebugScript_DoWonderTrade_Text_Done, MSGBOX_DEFAULT
	releaseall
	end

DebugScript_DoWonderTrade_Text_WannaDoAnotherWonderTrade:
	.string "Do you want to do\nanother Wonder Trade?$"

DebugScript_DoWonderTrade_Text_Done:
	.string "Enjoy your new Pokémon.$"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

Script_PokemonDataInfoBox::
	special ChoosePartyMon
	waitstate
	goto_if_ge VAR_0x8004, PARTY_SIZE, DebugScript_Cancel
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EGG, DebugScript_Cancel
	special BufferChosenMonStats
	drawinfobox INFOBOX_POKEMON_DATA
	msgbox PokemonDataInfoBox_Text_ChosenMonStats
	removeinfobox
	release
	end

PokemonDataInfoBox_Text_ChosenMonStats:
	.string "Stats of {CHOSEN_MON_NICKNAME}!$"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

DebugScript_CatchingStreak::
	goto_if_eq VAR_WILD_POKEMON_CHAIN_COUNT, 0, Script_NoStreak
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

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

EventScript_RoamerCue::
	lockall
	fadeoutbgm 2
	playse SE_SHINY
	delay 60
	playse SE_SHINY
	fadeinbgm 2
	delay 90
	releaseall
	end

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

DebugScript_Cancel:
	end

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

DebugScript_GiveStatusAilment::
	lockall
	getpartysize
	goto_if_eq VAR_RESULT, 0, EventScript_ThereIsNoPokemon
	special ChoosePartyMon
	waitstate
	goto_if_ge VAR_0x8004, PARTY_SIZE, DebugScript_Cancel
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EGG, DebugScript_GiveStatusAilment_Egg
	bufferdynamicmulti GiveStatusAilment_Text_Poison, GiveStatusAilment_Text_Paralysis, GiveStatusAilment_Text_Sleep, GiveStatusAilment_Text_Freeze, GiveStatusAilment_Text_Burn
    multichoice 0, 0, MULTI_DYNAMIC_5, TRUE
	switch VAR_RESULT
	case 0, DebugScript_GiveStatusAilment_Poison
	case 1, DebugScript_GiveStatusAilment_Paralysis
	case 2, DebugScript_GiveStatusAilment_Sleep
	case 3, DebugScript_GiveStatusAilment_Freeze
	case 4, DebugScript_GiveStatusAilment_Burn
DebugScript_GiveStatusAilment_Poison:
	changemonstatus STATUS1_POISON, FALSE
	releaseall
	end
DebugScript_GiveStatusAilment_Paralysis:
	changemonstatus STATUS1_PARALYSIS, FALSE
	releaseall
	end
DebugScript_GiveStatusAilment_Sleep:
	changemonstatus STATUS1_SLEEP, FALSE
	releaseall
	end
DebugScript_GiveStatusAilment_Freeze:
	changemonstatus STATUS1_FREEZE, FALSE
	releaseall
	end
DebugScript_GiveStatusAilment_Burn:
	changemonstatus STATUS1_BURN, FALSE
	releaseall
	end

DebugScript_GiveStatusAilment_Egg:
	msgbox GiveStatusAilment_Text_Egg
	releaseall
	end

GiveStatusAilment_Text_Egg:
	.string "You can't give status ailments\nto a POKéMON EGG.$"

GiveStatusAilment_Text_Poison:
	.string "Poison$"

GiveStatusAilment_Text_Paralysis:
	.string "Paralysis$"

GiveStatusAilment_Text_Sleep:
	.string "Sleep$"

GiveStatusAilment_Text_Freeze:
	.string "Freeze$"

GiveStatusAilment_Text_Burn:
	.string "Burn$"
