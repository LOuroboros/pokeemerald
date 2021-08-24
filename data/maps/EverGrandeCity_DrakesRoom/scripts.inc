EverGrandeCity_DrakesRoom_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_DrakesRoom_OnFrame
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_DrakesRoom_OnLoad
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_SidneysRoom_OnWarp
	.byte 0

@ Unused, Drake uses Sidneys identical OnWarp for some reason
EverGrandeCity_DrakesRoom_OnWarp:
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_DrakesRoom_EventScript_PlayerTurnNorth
	.2byte 0

EverGrandeCity_DrakesRoom_EventScript_PlayerTurnNorth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

EverGrandeCity_DrakesRoom_OnFrame:
	map_script_2 VAR_ELITE_4_STATE, 3, EverGrandeCity_DrakesRoom_EventScript_WalkInCloseDoor
	.2byte 0

EverGrandeCity_DrakesRoom_EventScript_WalkInCloseDoor::
	lockall
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
	setvar VAR_ELITE_4_STATE, 4
	releaseall
	end

EverGrandeCity_DrakesRoom_OnLoad:
	call_if_set FLAG_DEFEATED_ELITE_4_DRAKE, EverGrandeCity_DrakesRoom_EventScript_ResetAdvanceToNextRoom
	compare VAR_ELITE_4_STATE, 4
	call_if_eq EverGrandeCity_DrakesRoom_EventScript_CloseDoor
	end

EverGrandeCity_DrakesRoom_EventScript_ResetAdvanceToNextRoom::
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
	return

EverGrandeCity_DrakesRoom_EventScript_CloseDoor::
	call PokemonLeague_EliteFour_EventScript_CloseDoor
	return

EverGrandeCity_DrakesRoom_EventScript_Drake::
	lock
	faceplayer
	goto_if_var_ge VAR_POKEMON_LEAGUE_RUNS_COUNTER, 1, EverGrandeCity_DrakesRoom_EventScript_DrakeRematch
	goto_if_set FLAG_DEFEATED_ELITE_4_DRAKE, EverGrandeCity_DrakesRoom_EventScript_PostBattleSpeech
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	msgbox EverGrandeCity_DrakesRoom_Text_IntroSpeech, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_DRAKE, EverGrandeCity_DrakesRoom_Text_Defeat
	goto EverGrandeCity_DrakesRoom_EventScript_Defeated
	end

EverGrandeCity_DrakesRoom_EventScript_PostBattleSpeech::
	msgbox EverGrandeCity_DrakesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_DrakesRoom_EventScript_Defeated::
	setvar VAR_0x8004, FANCOUNTER_DEFEATED_DRAKE
	special Script_TryGainNewFanFromCounter
	setflag FLAG_DEFEATED_ELITE_4_DRAKE
	setflag FLAG_REMATCH_DRAKE
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	msgbox EverGrandeCity_DrakesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_DrakesRoom_EventScript_DrakeRematch:
	goto_if_set FLAG_DEFEATED_ELITE_4_DRAKE, EverGrandeCity_DrakesRoom_EventScript_PostRematchSpeech
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	call_if_var_ge VAR_POKEMON_LEAGUE_RUNS_COUNTER, 2, EverGrandeCity_DrakesRoom_EventScript_DrakeRematchIntro2
	call_if_var_eq VAR_POKEMON_LEAGUE_RUNS_COUNTER, 1, EverGrandeCity_DrakesRoom_EventScript_DrakeRematchIntro1
	trainerbattle_no_intro TRAINER_DRAKE_REMATCH, EverGrandeCity_DrakesRoom_Text_DefeatRematch
	goto EverGrandeCity_DrakesRoom_EventScript_DefeatedRematch
	end

EverGrandeCity_DrakesRoom_EventScript_DrakeRematchIntro2:
	msgbox EverGrandeCity_DrakesRoom_Text_RematchIntroSpeech2, MSGBOX_DEFAULT
	return

EverGrandeCity_DrakesRoom_EventScript_DrakeRematchIntro1:
	msgbox EverGrandeCity_DrakesRoom_Text_RematchIntroSpeech, MSGBOX_DEFAULT
	return

EverGrandeCity_DrakesRoom_EventScript_PostRematchSpeech::
	msgbox EverGrandeCity_DrakesRoom_Text_PostRematchSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_DrakesRoom_EventScript_DefeatedRematch:
	setflag FLAG_DEFEATED_ELITE_4_DRAKE
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	msgbox EverGrandeCity_DrakesRoom_Text_PostRematchSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_DrakesRoom_Text_IntroSpeech:
	.string "I am the last of the POKéMON LEAGUE\n"
	.string "ELITE FOUR, DRAKE the DRAGON master!\p"
	.string "In their natural state, POKéMON are\n"
	.string "wild living things. They are free.\p"
	.string "At times, they hinder us.\n"
	.string "At times, they help us.\p"
	.string "For us to battle with POKéMON as\n"
	.string "partners, do you know what it takes?\p"
	.string "Do you know what is needed?\p"
	.string "If you don't, then you will never\n"
	.string "prevail over me!$"

EverGrandeCity_DrakesRoom_Text_Defeat:
	.string "Superb, it should be said.$"

EverGrandeCity_DrakesRoom_Text_PostBattleSpeech:
	.string "You deserve every credit for coming\n"
	.string "this far as a TRAINER of POKéMON.\p"
	.string "You do seem to know what is needed.\p"
	.string "Yes, what a TRAINER needs is a\n"
	.string "virtuous heart.\p"
	.string "POKéMON touch the good hearts of\n"
	.string "TRAINERS and learn good from wrong.\p"
	.string "They touch the good hearts of\n"
	.string "TRAINERS and grow strong.\p"
	.string "Go! Go onwards!\n"
	.string "The CHAMPION is waiting!$"

EverGrandeCity_DrakesRoom_Text_RematchIntroSpeech:
	.string "I've been waiting for you!\p"
	.string "Challengers like you who pour\n"
	.string "everything they have into their\l"
	.string "battles are the ones who get us\l"
	.string "fired up the most!\p"
	.string "My SALAMENCE and I can't wait\n"
	.string "any longer! Get ready!$"

EverGrandeCity_DrakesRoom_Text_RematchIntroSpeech2:
	.string "Oh! I've been waiting for you!\p"
	.string "My POKéMON and I are ready to\n"
	.string "show you everything we've got!\p"
	.string "Well then, let's see if you can\n"
	.string "overcome my challenge!$"

EverGrandeCity_DrakesRoom_Text_DefeatRematch:
	.string "Spectacular!$"

EverGrandeCity_DrakesRoom_Text_PostRematchSpeech:
	.string "That was a mighty-fine battle!\n"
	.string "Me and my POKéMON are satisfied.\p"
	.string "Press onward, {PLAYER}!\n"
	.string "The current champion awaits!$"
