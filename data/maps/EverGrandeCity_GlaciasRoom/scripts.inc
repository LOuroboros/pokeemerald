EverGrandeCity_GlaciasRoom_MapScripts:: @ 8228412
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_GlaciasRoom_OnFrame
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_GlaciasRoom_OnLoad
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_GlaciasRoom_OnWarp
	.byte 0

EverGrandeCity_GlaciasRoom_OnWarp: @ 8228422
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_GlaciasRoom_EventScript_PlayerTurnNorth
	.2byte 0

EverGrandeCity_GlaciasRoom_EventScript_PlayerTurnNorth:: @ 822842C
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

EverGrandeCity_GlaciasRoom_OnFrame: @ 8228431
	map_script_2 VAR_ELITE_4_STATE, 2, EverGrandeCity_GlaciasRoom_EventScript_WalkInCloseDoor
	.2byte 0

EverGrandeCity_GlaciasRoom_EventScript_WalkInCloseDoor:: @ 822843B
	lockall
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
	setvar VAR_ELITE_4_STATE, 3
	releaseall
	end

EverGrandeCity_GlaciasRoom_OnLoad: @ 8228448
	call_if_set FLAG_DEFEATED_ELITE_4_GLACIA, EverGrandeCity_GlaciasRoom_EventScript_ResetAdvanceToNextRoom
	compare VAR_ELITE_4_STATE, 3
	call_if_eq EverGrandeCity_GlaciasRoom_EventScript_CloseDoor
	end

EverGrandeCity_GlaciasRoom_EventScript_ResetAdvanceToNextRoom:: @ 822845D
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
	return

EverGrandeCity_GlaciasRoom_EventScript_CloseDoor:: @ 8228463
	call PokemonLeague_EliteFour_EventScript_CloseDoor
	return

EverGrandeCity_GlaciasRoom_EventScript_Glacia:: @ 8228469
	lock
	faceplayer
	goto_if_var_ge VAR_POKEMON_LEAGUE_RUNS_COUNTER, 1, EverGrandeCity_GlaciasRoom_EventScript_GlaciaRematch
	goto_if_set FLAG_DEFEATED_ELITE_4_GLACIA, EverGrandeCity_GlaciasRoom_EventScript_PostBattleSpeech
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	msgbox EverGrandeCity_GlaciasRoom_Text_IntroSpeech, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GLACIA, EverGrandeCity_GlaciasRoom_Text_Defeat
	goto EverGrandeCity_GlaciasRoom_EventScript_Defeated
	end

EverGrandeCity_GlaciasRoom_EventScript_PostBattleSpeech:: @ 8228490
	msgbox EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_GlaciasRoom_EventScript_Defeated:: @ 822849A
	setflag FLAG_DEFEATED_ELITE_4_GLACIA
	setflag FLAG_REMATCH_GLACIA
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	msgbox EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_GlaciasRoom_EventScript_GlaciaRematch:
	goto_if_set FLAG_DEFEATED_ELITE_4_GLACIA, EverGrandeCity_GlaciasRoom_EventScript_PostRematchSpeech
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	call_if_var_ge VAR_POKEMON_LEAGUE_RUNS_COUNTER, 2, EverGrandeCity_GlaciasRoom_EventScript_GlaciaRematchIntro2
	call_if_var_eq VAR_POKEMON_LEAGUE_RUNS_COUNTER, 1, EverGrandeCity_GlaciasRoom_EventScript_GlaciaRematchIntro1
	trainerbattle_no_intro TRAINER_GLACIA_REMATCH, EverGrandeCity_GlaciasRoom_Text_DefeatRematch
	goto EverGrandeCity_GlaciasRoom_EventScript_DefeatedRematch
	end

EverGrandeCity_GlaciasRoom_EventScript_GlaciaRematchIntro2:
	msgbox EverGrandeCity_GlaciasRoom_Text_RematchIntroSpeech2, MSGBOX_DEFAULT
	return

EverGrandeCity_GlaciasRoom_EventScript_GlaciaRematchIntro1:
	msgbox EverGrandeCity_GlaciasRoom_Text_RematchIntroSpeech, MSGBOX_DEFAULT
	return

EverGrandeCity_GlaciasRoom_EventScript_PostRematchSpeech::
	msgbox EverGrandeCity_GlaciasRoom_Text_PostRematchSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_GlaciasRoom_EventScript_DefeatedRematch:
	setflag FLAG_DEFEATED_ELITE_4_GLACIA
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	msgbox EverGrandeCity_GlaciasRoom_Text_PostRematchSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_GlaciasRoom_Text_IntroSpeech: @ 82284AC
	.string "Welcome, my name is GLACIA\n"
	.string "of the ELITE FOUR.\p"
	.string "I've traveled from afar to HOENN\n"
	.string "so that I may hone my ice skills.\p"
	.string "But all I have seen are challenges by\n"
	.string "weak TRAINERS and their POKéMON.\p"
	.string "What about you?\p"
	.string "It would please me to no end if I could\n"
	.string "go all out against you!$"

EverGrandeCity_GlaciasRoom_Text_Defeat: @ 82285B4
	.string "You and your POKéMON…\n"
	.string "How hot your spirits burn!\p"
	.string "The all-consuming heat overwhelms.\p"
	.string "It's no surprise that my icy skills\n"
	.string "failed to harm you.$"

EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech: @ 8228640
	.string "Advance to the next room.\p"
	.string "And there, confirm the truly fearsome\n"
	.string "side of the POKéMON LEAGUE.$"

EverGrandeCity_GlaciasRoom_Text_RematchIntroSpeech:
	.string "Yes! At last you're back!\p"
	.string "Your burning-hot soul will be the\n"
	.string "perfect test for our Mega Evolution\l"
	.string "that can freeze everything!$"

EverGrandeCity_GlaciasRoom_Text_RematchIntroSpeech2:
	.string "Welcome back, {PLAYER}!\n"
	.string "It is good to see you again!\p"
	.string "I wonder what is it that you\n"
	.string "will show me today.\p"
	.string "Since it is you, I can go all out\n"
	.string "without holding anything back!$"

EverGrandeCity_GlaciasRoom_Text_DefeatRematch:
	.string "Your will burns so strongly…$"

EverGrandeCity_GlaciasRoom_Text_PostRematchSpeech:
	.string "What a hot and passionate spirit!\n"
	.string "Well done!\p"
	.string "Continue onward!\n"
	.string "DRAKE is also eager to fight you!$"
