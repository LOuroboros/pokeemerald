.set LOCALID_STEVEN, 1
.set LOCALID_LATIAS, 2
.set LOCALID_COURTNEY, 3
.set LOCALID_TABITHA, 4

SouthernIsland_Exterior_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SouthernIsland_Exterior_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SouthernIsland_Exterior_OnWarp
	.byte 0

SouthernIsland_Exterior_OnTransition:
	setflag FLAG_LANDMARK_SOUTHERN_ISLAND
	end

	@ State descriptions for VAR_SOUTHERN_ISLAND_STATE
	@ 1: Reached Southern Island for the first time.
	@ 2: Saw Steven and some Magma Grunts go deeper into the island.
	@ 3: End of the "Mega Event".

SouthernIsland_Exterior_OnWarp:
	map_script_2 VAR_SOUTHERN_ISLAND_STATE, 0, SouthernIsland_Exterior_Arrival
	.2byte 0

SouthernIsland_Exterior_Arrival::
	delay 15
	msgbox SouthernIsland_Exterior_Text_Arrival, MSGBOX_DEFAULT
	closemessage
	playmoncry SPECIES_LATIAS, 0
	applymovement LOCALID_LATIAS, Route118_Movement_LatiWalkInPlaceFastDown
	waitmovement 0
	msgbox Route118_Text_LatiGrowlsAgain, MSGBOX_DEFAULT
	waitmoncry
	closemessage
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	turnobject LOCALID_STEVEN, DIR_NORTH
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	applymovement LOCALID_STEVEN, Common_Movement_ExclamationMark
	waitmovement 0
	delay 30
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_LATIAS
	fadescreen FADE_FROM_BLACK
	msgbox SouthernIsland_Exterior_Text_StevenThanksLatias, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, SouthernIsland_Exterior_Movement_PlayerCheckingAround
	applymovement LOCALID_STEVEN, SouthernIsland_Exterior_Movement_StevenCheckingAround
	waitmovement 0
	msgbox SouthernIsland_Exterior_Text_StevenSpeaks, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_STEVEN, Common_Movement_FaceUp
	waitmovement 0
	delay 30
	applymovement LOCALID_STEVEN, Common_Movement_FaceLeft
	waitmovement 0
	msgbox SouthernIsland_Exterior_Text_StevenSpeaksAgain, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, SouthernIsland_Exterior_Movement_PlayerWatchesStevenWalkAway
	applymovement LOCALID_STEVEN, SouthernIsland_Exterior_Movement_StevenGoesDeepIntoSouthernIsland
	waitmovement 0
	delay 30
	setobjectxy LOCALID_STEVEN, 21, 8
	applymovement LOCALID_STEVEN, Common_Movement_FaceLeft
	waitmovement 0
	setvar VAR_SOUTHERN_ISLAND_STATE, 1
	end

SouthernIsland_Exterior_EventScript_TroublesAhead::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	spawnmovecamera SouthernIsland_Exterior_Movement_CameraBeyondSteven
	playse SE_PIN
	applymovement LOCALID_STEVEN, Common_Movement_ExclamationMark
	delay 30
	applymovement LOCALID_COURTNEY, SouthernIsland_Exterior_Movement_MagmaGruntsWalksForward
	applymovement LOCALID_TABITHA, SouthernIsland_Exterior_Movement_MagmaGruntsWalksForward
	waitmovement 0
	playse SE_EXIT
	removeobject LOCALID_COURTNEY
	removeobject LOCALID_TABITHA
	waitse
	applymovement LOCALID_STEVEN, SouthernIsland_Exterior_Movement_StevenFollowsMagmaGrunts
	waitmovement 0
	playse SE_EXIT
	removeobject LOCALID_STEVEN
	waitse
	delay 30
	despawnmovecamera SouthernIsland_Exterior_Movement_CameraToPlayer
	setvar VAR_SOUTHERN_ISLAND_STATE, 2
	end

SouthernIsland_Exterior_EventScript_ClimaxPreparation::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	playse SE_EXIT
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_SOUTHERN_ISLAND_EXTERIOR
	waitse
	msgbox SouthernIsland_Exterior_Text_Memories, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_FORCE_LOAD_OFFSCREEN_OBJEV
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	call_if_var_eq VAR_TEMP_1, 14, SouthernIsland_Exterior_EventScript_ClimaxWarp1
	call_if_var_eq VAR_TEMP_1, 15, SouthernIsland_Exterior_EventScript_ClimaxWarp2
	end

SouthernIsland_Exterior_EventScript_ClimaxWarp1:
	warpsilent MAP_SOUTHERN_ISLAND_INTERIOR, 0, 0, 0
	return

SouthernIsland_Exterior_EventScript_ClimaxWarp2:
	warpsilent MAP_SOUTHERN_ISLAND_INTERIOR, 1, 0, 0
	return

SouthernIsland_Exterior_Movement_PlayerCheckingAround:
	face_down
	delay_16
	delay_16
	delay_16
	face_left
	delay_16
	delay_16
	delay_16
	face_up
	delay_16
	delay_16
	delay_16
	face_right
	step_end

SouthernIsland_Exterior_Movement_StevenCheckingAround:
	face_down
	delay_16
	delay_16
	delay_16
	face_right
	delay_16
	delay_16
	delay_16
	face_up
	delay_16
	delay_16
	delay_16
	face_left
	step_end

SouthernIsland_Exterior_Movement_StevenGoesDeepIntoSouthernIsland:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_up
	step_end

SouthernIsland_Exterior_Movement_PlayerWatchesStevenWalkAway:
	delay_16
	delay_16
	face_up
	step_end

SouthernIsland_Exterior_Movement_CameraBeyondSteven:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

SouthernIsland_Exterior_Movement_MagmaGruntsWalksForward:
	walk_up
	walk_up
	walk_up
	step_end

SouthernIsland_Exterior_Movement_StevenFollowsMagmaGrunts:
	walk_left
	walk_left
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

SouthernIsland_Exterior_Movement_CameraToPlayer:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

SouthernIsland_Exterior_Text_Arrival:
	.string "STEVEN: This seems to be\n"
	.string "the end of the trip.$"

SouthernIsland_Exterior_Text_StevenThanksLatias:
	.string "STEVEN: Thank you LATIAS!$"

SouthernIsland_Exterior_Text_StevenSpeaks:
	.string "STEVEN: Do you know about\n"
	.string "this place, {PLAYER}?\p"
	.string "I heard an interesting tale once.\p"
	.string "The tale said that two POKéMON,\n"
	.string "LATIOS and LATIAS, live here.\p"
	.string "Supposedly, there's a secret hidden\n"
	.string "somewhere in this island.\p"
	.string "The tale goes on, mentioning an\n"
	.string "ancient type of Evolution that\l"
	.string "is called “Mega Evolution.”\p"
	.string "I wonder if the tale is related\n"
	.string "to LATIAS bringing us here…$"

SouthernIsland_Exterior_Text_StevenSpeaksAgain:
	.string "I'll go on ahead.$"
