.set LOCALID_LATIOS, 1
.set LOCALID_LATIAS, 2
.set LOCALID_COURTNEY, 3
.set LOCALID_TABITHA, 4
.set LOCALID_STEVEN, 5

SouthernIsland_Interior_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SouthernIsland_Interior_OnFrame
	.byte 0

SouthernIsland_Interior_OnFrame:
	map_script_2 VAR_SOUTHERN_ISLAND_STATE, 2, SouthernIsland_Interior_MegaEventClimax
	.2byte 0

SouthernIsland_Interior_MegaEventClimax:
	delay 15
	playse SE_PIN
	applymovement LOCALID_STEVEN, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_STEVEN, Common_Movement_FaceDown
	waitmovement 0
	delay 60
	applymovement LOCALID_STEVEN, Common_Movement_FaceUp
	waitmovement 0
	spawnmovecamera SouthernIsland_Interior_Movement_CameraToMagmaGrunts
	msgbox SouthernIsland_Interior_Text_Tabitha1, MSGBOX_DEFAULT
	closemessage
	delay 10
	playmoncry SPECIES_LATIOS, 0
	msgbox Route118_Text_LatiGrowls, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_LATIOS, Route118_Movement_LatiWalkInPlaceFastDown
	waitmovement 0
	waitmoncry
	delay 30
	playmoncry SPECIES_LATIAS, 0
	msgbox Route118_Text_LatiGrowls, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_LATIAS, Route118_Movement_LatiWalkInPlaceFastDown
	waitmovement 0
	waitmoncry
	delay 30
	msgbox SouthernIsland_Interior_Text_Courtney1, MSGBOX_DEFAULT
	closemessage
	delay 15
	playse SE_PIN
	applymovement LOCALID_STEVEN, Common_Movement_ExclamationMark
	applymovement LOCALID_STEVEN, Common_Movement_FaceUp
	waitmovement 0
	delay 15
	applymovement LOCALID_STEVEN, SouthernIsland_Interior_Movement_StevenWalksToGrunts
	waitmovement 0
	msgbox SouthernIsland_Interior_Text_StevenSpeaks, MSGBOX_DEFAULT
	playse SE_PIN
	applymovement LOCALID_COURTNEY, Common_Movement_ExclamationMark
	applymovement LOCALID_TABITHA, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_COURTNEY, Common_Movement_FaceDown
	applymovement LOCALID_TABITHA, Common_Movement_FaceDown
	waitmovement 0
	msgbox SouthernIsland_Interior_Text_Tabitha2, MSGBOX_DEFAULT
	msgbox SouthernIsland_Interior_Text_Courtney2, MSGBOX_DEFAULT
	applymovement LOCALID_COURTNEY, Common_Movement_FaceLeft
	waitmovement 0
	msgbox SouthernIsland_Interior_Text_Courtney3, MSGBOX_DEFAULT
	playse SE_PIN
	applymovement LOCALID_TABITHA, Common_Movement_FaceRight
	waitmovement 0
	applymovement LOCALID_TABITHA, Common_Movement_QuestionMark
	waitmovement 0
	msgbox SouthernIsland_Interior_Text_Courtney4, MSGBOX_DEFAULT
	msgbox SouthernIsland_Interior_Text_StevenSpeaksAgain, MSGBOX_DEFAULT
	applymovement LOCALID_STEVEN, Common_Movement_FaceDown
	waitmovement 0
	msgbox SouthernIsland_Interior_Text_StevenSpeaksOneMoreTime, MSGBOX_DEFAULT
	closemessage
	despawnmovecamera SouthernIsland_Interior_Movement_CameraToPlayer
	applymovement LOCALID_STEVEN, Common_Movement_FaceUp
	waitmovement 0
	applymovement LOCALID_TABITHA, Common_Movement_FaceDown
	waitmovement 0
	applymovement LOCALID_COURTNEY, Common_Movement_FaceDown
	waitmovement 0
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	call_if_var_eq VAR_TEMP_1, 13, SouthernIsland_Interior_EventScript_PlayerWalksToSteven1
	call_if_var_eq VAR_TEMP_1, 14, SouthernIsland_Interior_EventScript_PlayerWalksToSteven2
	fadescreen FADE_TO_BLACK
	special ChooseHalfPartyForBattle
	waitstate
	goto_if_var_ne VAR_RESULT, 0, SouthernIsland_Interior_EventScript_DoStevenMultiBattle
SouthernIsland_Interior_EventScript_NoTurningBack:
	special LoadPlayerParty
	applymovement LOCALID_STEVEN, Common_Movement_FaceRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	msgbox SouthernIsland_Interior_Text_NoTurningBack, MSGBOX_DEFAULT
	applymovement LOCALID_STEVEN, Common_Movement_FaceUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	fadescreen FADE_TO_BLACK
	special ChooseHalfPartyForBattle
	waitstate
	goto_if_var_ne VAR_RESULT, 0, SouthernIsland_Interior_EventScript_DoStevenMultiBattle
	goto SouthernIsland_Interior_EventScript_NoTurningBack

SouthernIsland_Interior_EventScript_DoStevenMultiBattle:
	multi_2_vs_2 TRAINER_COURTNEY_SOUTHERN_ISLAND, SouthernIsland_Interior_Text_CourtneyDefeated, TRAINER_TABITHA_SOUTHERN_ISLAND, SouthernIsland_Interior_Text_TabithaDefeated, TRAINER_STEVEN_MOSSDEEP, TRAINER_BACK_PIC_STEVEN
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_var_eq VAR_RESULT, B_OUTCOME_WON, SouthernIsland_Interior_EventScript_DefeatedCourtneyAndGrunt
	goto_if_var_eq VAR_RESULT, B_OUTCOME_LOST, SouthernIsland_Interior_EventScript_WasDefeatedByCourtneyAndGrunt
	goto SouthernIsland_Interior_EventScript_DefeatedCourtneyAndGrunt

SouthernIsland_Interior_EventScript_PlayerWalksToSteven1:
	applymovement OBJ_EVENT_ID_PLAYER, SouthernIsland_Interior_Movement_PlayerToSteven1
	waitmovement 0
	return

SouthernIsland_Interior_EventScript_PlayerWalksToSteven2:
	applymovement OBJ_EVENT_ID_PLAYER, SouthernIsland_Interior_Movement_PlayerToSteven2
	waitmovement 0
	return

SouthernIsland_Interior_EventScript_DefeatedCourtneyAndGrunt:
	msgbox SouthernIsland_Interior_Text_Courtney5, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement LOCALID_TABITHA, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_TABITHA, Common_Movement_FaceRight
	waitmovement 0
	msgbox SouthernIsland_Interior_Text_Tabitha3, MSGBOX_DEFAULT
	applymovement LOCALID_COURTNEY, Common_Movement_FaceLeft
	waitmovement 0
	msgbox SouthernIsland_Interior_Text_Courtney6, MSGBOX_DEFAULT
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	hideobjectat LOCALID_COURTNEY, MAP_SOUTHERN_ISLAND_INTERIOR
	hideobjectat LOCALID_TABITHA, MAP_SOUTHERN_ISLAND_INTERIOR
	fadescreenswapbuffers FADE_FROM_BLACK
	delay 30
	spawnmovecamera SouthernIsland_Interior_Movement_CameraToLatis
	playmoncry SPECIES_LATIOS, 0
	msgbox Route118_Text_LatiGrowls, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_LATIOS, Route118_Movement_LatiWalkInPlaceFastDown
	waitmovement 0
	waitmoncry
	delay 30
	playmoncry SPECIES_LATIAS, 0
	msgbox Route118_Text_LatiGrowls, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_LATIAS, Route118_Movement_LatiWalkInPlaceFastDown
	waitmovement 0
	waitmoncry
	delay 30
	fadescreenswapbuffers FADE_TO_BLACK
	hideobjectat LOCALID_LATIOS, MAP_SOUTHERN_ISLAND_INTERIOR
	hideobjectat LOCALID_LATIAS, MAP_SOUTHERN_ISLAND_INTERIOR
	msgbox SouthernIsland_Interior_Text_LatiFlewAway, MSGBOX_DEFAULT
	closemessage
	fadescreenswapbuffers FADE_FROM_BLACK
	delay 30
	despawnmovecamera SouthernIsland_Interior_Movement_CameraToPlayer2
	applymovement LOCALID_STEVEN, Common_Movement_FaceRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	msgbox SouthernIsland_Interior_Text_StevenSpeaksYetAgain, MSGBOX_DEFAULT
	closemessage
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	applymovement LOCALID_STEVEN, SouthernIsland_Interior_Movement_StevenStepsForward
	waitmovement 0
	msgbox SouthernIsland_Interior_Text_StevenWontStopSpeaking, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_STEVEN, SouthernIsland_Interior_Movement_StevenStepsBack
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	msgbox SouthernIsland_Interior_Text_StevenSpeaksOneLastTime, MSGBOX_DEFAULT
	closemessage
	setfieldeffectargument 0, SPECIES_SKARMORY
	dofieldeffect FLDEFF_FIELD_MOVE_SHOW_MON
	waitfieldeffect FLDEFF_FIELD_MOVE_SHOW_MON
	setfieldeffectargument 0, LOCALID_STEVEN
	dofieldeffect FLDEFF_NPCFLY_OUT
	delay 15
	removeobject LOCALID_STEVEN
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_SOUTHERN_ISLAND_INTERIOR
	waitfieldeffect FLDEFF_NPCFLY_OUT
	setvar VAR_SOUTHERN_ISLAND_STATE, 3
	setvar VAR_ROUTE118_STATE, 2
	setflag FLAG_SPAWN_INVISIBLE_PLAYER
	setflag FLAG_HIDE_MEGA_EVENT_MAGMA_GRUNTS
	setflag FLAG_HIDE_SOUTHERN_ISLAND_LATIOS
	setflag FLAG_HIDE_SOUTHERN_ISLAND_LATIAS
	clearflag FLAG_FORCE_LOAD_OFFSCREEN_OBJEV
	warp MAP_ROUTE118, 255, 44, 10
	end

SouthernIsland_Interior_EventScript_WasDefeatedByCourtneyAndGrunt:
	fadescreen FADE_TO_BLACK
	setvar VAR_ROUTE118_STATE, 0
	setvar VAR_SOUTHERN_ISLAND_STATE, 0
	setflag FLAG_HIDE_MEGA_EVENT_LATIAS
	clearflag FLAG_HIDE_MEGA_EVENT_STEVEN
	clearflag FLAG_HIDE_MEGA_EVENT_MAGMA_GRUNTS
	clearflag FLAG_FORCE_LOAD_OFFSCREEN_OBJEV
	special SetCB2WhiteOut
	waitstate

SouthernIsland_Interior_Movement_CameraToMagmaGrunts:
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	step_end

SouthernIsland_Interior_Movement_StevenWalksToGrunts:
	walk_up
	walk_up
	step_end

SouthernIsland_Interior_Movement_CameraToPlayer:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

SouthernIsland_Interior_Movement_PlayerToSteven1:
	walk_up
	walk_up
	walk_right
	walk_up
	walk_up
	step_end

SouthernIsland_Interior_Movement_PlayerToSteven2:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

SouthernIsland_Interior_Movement_CameraToLatis:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

SouthernIsland_Interior_Movement_CameraToPlayer2:
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

SouthernIsland_Interior_Movement_StevenStepsForward:
	walk_up
	walk_up
	walk_up
	step_end

SouthernIsland_Interior_Movement_StevenStepsBack:
	walk_down
	walk_down
	walk_down
	face_right
	step_end

SouthernIsland_Interior_Text_Tabitha1:
	.string "TABITHA: Playtime is over!\n"
	.string "You two are coming with us!$"

SouthernIsland_Interior_Text_Courtney1:
	.string "COURTNEY: Resistance is futile.\n"
	.string "POKéMON can't oppose a MASTER BALL.\p"
	.string "Give us your Mega Stones and we'll\n"
	.string "be gentle, LATIOS and LATIAS.$"

SouthernIsland_Interior_Text_StevenSpeaks:
	.string "STEVEN: Who are you, and what are\n"
	.string "you two doing to those POKéMON?!$"

SouthernIsland_Interior_Text_Tabitha2:
	.string "TABITHA: Hey! Who are YOU?$"

SouthernIsland_Interior_Text_Courtney2:
	.string "COURTNEY: That's…$"

SouthernIsland_Interior_Text_Courtney3:
	.string "COURTNEY: I know him.\n"
	.string "This is bad.$"

SouthernIsland_Interior_Text_Courtney4:
	.string "Quick! Catch them now, TABITHA!$"

SouthernIsland_Interior_Text_StevenSpeaksAgain:
	.string "STEVEN: I won't allow it!$"

SouthernIsland_Interior_Text_StevenSpeaksOneMoreTime:
	.string "{PLAYER}, this must be the reason\n"
	.string "why LATIAS brought us here!\p"
	.string "Let's give them a hand!$"

SouthernIsland_Interior_Text_NoTurningBack:
	.string "STEVEN: There's no time to waste.\n"
	.string "Choose your POKéMON, {PLAYER}.$"

SouthernIsland_Interior_Text_CourtneyDefeated:
	.string "I accept my defeat.\n"
	.string "We're leaving.$"

SouthernIsland_Interior_Text_TabithaDefeated:
	.string "Darn it!\n"
	.string "First MT. CHIMNEY, and now this?!$"

SouthernIsland_Interior_Text_Courtney5:
	.string "COURTNEY: Perhaps you won today,\n"
	.string "but I assure you this means naught.\p"
	.string "TEAM MAGMA has far greater plans\n"
	.string "and not even you can stop us,\l"
	.string "former champion STEVEN.$"

SouthernIsland_Interior_Text_Tabitha3:
	.string "TABITHA: Wait, what?!$"

SouthernIsland_Interior_Text_Courtney6:
	.string "Let's go, TABITHA.\n"
	.string "We have places to go.$"

SouthernIsland_Interior_Text_LatiFlewAway:
	.string "The two POKéMON flew away!$"

SouthernIsland_Interior_Text_StevenSpeaksYetAgain:
	.string "STEVEN: It looks like we managed\n"
	.string "to fend them off.\p"
	.string "Do you know them, {PLAYER}?\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "They're criminals from a gang\n"
	.string "called TEAM MAGMA?\p"
	.string "Hmm… that sounds very troublesome.$"

SouthernIsland_Interior_Text_StevenWontStopSpeaking:
	.string "I wonder what are they after{PAUSE 30}…{PAUSE 30}…{PAUSE 30}…$"

SouthernIsland_Interior_Text_StevenSpeaksOneLastTime:
	.string "Whatever the case, we can't\n"
	.string "stay here forever.\p"
	.string "SKARMORY! Come out!$"
