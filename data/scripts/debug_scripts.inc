
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
	givemon SPECIES_CHARIZARD, 100, 0
	givemon SPECIES_BLASTOISE, 100, 0
	givemon SPECIES_VENUSAUR, 100, 0
	givemon SPECIES_SNORLAX, 100, 0
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
	goto_if_eq EventScript_NoPokemon
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge EventScript_Cancel
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq EventScript_CheckEVs_Egg
	special CheckMonOffensiveEVs
	msgbox EventScript_CheckEVs_Text_Evaluation
	special CheckMonDefensiveEVs
	msgbox EventScript_CheckEVs_Text_Evaluation2
	releaseall
	end

EventScript_Cancel:
	lockall
	faceplayer
	releaseall
	end

EventScript_CheckEVs_Egg:
	lockall
	faceplayer
	msgbox EventScript_CheckEVs_Text_Egg
	releaseall
	end

EventScript_NoPokemon:
	msgbox EventScript_Text_NoPokemon
	releaseall
	end

EventScript_CheckEVs_Text_Evaluation:
	.string "Your POKéMON has: {STR_VAR_1} ATK EVs,\n"
	.string "{STR_VAR_2} SPD EVs and {STR_VAR_3} SP. ATK. EVs.$"

EventScript_CheckEVs_Text_Evaluation2:
	.string "It also has: {STR_VAR_1} HP EVs,\n"
	.string "{STR_VAR_2} DEF EVs and {STR_VAR_3} SP. DEF. EVs.$"

EventScript_CheckEVs_Text_Egg:
	.string "Sorry, Pokémon Eggs don't\n"
	.string "have EVs.$"

EventScript_Text_NoPokemon:
	.string "You don't have a Pokémon!$"

EventScript_Text_ComeBackAnytime:
	.string "Come back anytime.$"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

EventScript_CheckIVs::
	lockall
	faceplayer
	getpartysize
	compare VAR_RESULT, 0
	goto_if_eq EventScript_NoPokemon
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge EventScript_Cancel
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq EventScript_CheckIVs_Egg
	special CheckMonOffensiveIVs
	msgbox EventScript_CheckIVs_Text_Evaluation
	special CheckMonDefensiveIVs
	msgbox EventScript_CheckIVs_Text_Evaluation2
	releaseall
	end

EventScript_CheckIVs_Egg:
	lockall
	faceplayer
	msgbox EventScript_CheckIVs_Text_Egg
	releaseall
	end

EventScript_CheckIVs_Text_Evaluation:
	.string "Your POKéMON has: {STR_VAR_1} ATK IVs,\n"
	.string "{STR_VAR_2} SPD IVs and {STR_VAR_3} SP. ATK. IVs.$"

EventScript_CheckIVs_Text_Evaluation2:
	.string "It also has: {STR_VAR_1} HP IVs,\n"
	.string "{STR_VAR_2} DEF IVs and {STR_VAR_3} SP. DEF. IVs.$"

EventScript_CheckIVs_Text_Egg:
	.string "Sorry, Pokémon Eggs don't\n"
	.string "have IVs.$"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

EventScript_ForceEggHatch::
	lockall
	getpartysize
	compare VAR_RESULT, 0
	goto_if_eq EventScript_NoPokemon
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge EventScript_Cancel
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_EGG
	goto_if_ne EventScript_Cancel
	special EggHatch
	waitstate
	releaseall
	end

EventScript_ForcedEggHatch_Text_NotAnEgg:
	.string "That's not a Pokémon Egg.$"

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
