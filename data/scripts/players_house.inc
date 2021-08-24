@ Local IDs are the same for both players houses
.set LOCALID_MOM, 1
.set LOCALID_DAD, 5
.set LOCALID_MOM_2F, 14

PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet:: 
	setvar VAR_LITTLEROOT_INTRO_STATE, 5
	return

PlayersHouse_1F_EventScript_EnterHouseMovingIn:: 
	msgbox PlayersHouse_1F_Text_IsntItNiceInHere, MSGBOX_DEFAULT
	applymovement VAR_0x8004, Common_Movement_FacePlayer
	waitmovement 0
	compare VAR_0x8005, MALE
	call_if_eq PlayersHouse_1F_EventScript_MomFacePlayerMovingInMale
	compare VAR_0x8005, FEMALE
	call_if_eq PlayersHouse_1F_EventScript_MomFacePlayerMovingInFemale
	msgbox PlayersHouse_1F_Text_MoversPokemonGoSetClock, MSGBOX_DEFAULT
	closemessage
	setvar VAR_LITTLEROOT_INTRO_STATE, 4
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerWalkIn
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFastestUp
	waitmovement 0
	releaseall
	end

PlayersHouse_1F_EventScript_MomFacePlayerMovingInMale:: 
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestRight
	waitmovement 0
	return

PlayersHouse_1F_EventScript_MomFacePlayerMovingInFemale:: 
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestLeft
	waitmovement 0
	return

PlayersHouse_1F_Movement_PlayerWalkIn: 
	walk_up
	step_end

PlayersHouse_1F_EventScript_MomGoSeeRoom:: 
	msgbox PlayersHouse_1F_Text_ArentYouInterestedInRoom, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFastestUp
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_MovePlayerAwayFromDoor
	waitmovement 0
	releaseall
	end

LittlerootTown_BrendansHouse_2F_EventScript_WallClock:: 
	lockall
	setvar VAR_0x8004, MALE
	goto PlayersHouse_2F_EventScript_WallClock
	end

LittlerootTown_MaysHouse_2F_EventScript_WallClock:: 
	lockall
	setvar VAR_0x8004, FEMALE
	goto PlayersHouse_2F_EventScript_WallClock
	end

PlayersHouse_2F_EventScript_WallClock:: 
	goto_if_set FLAG_SET_WALL_CLOCK, PlayersHouse_2F_EventScript_CheckWallClock
	msgbox PlayersHouse_2F_Text_ClockIsStopped, MSGBOX_DEFAULT
	call PlayersHouse_2F_EventScript_SetWallClock
	delay 30
	setvar VAR_LITTLEROOT_INTRO_STATE, 6
	setflag FLAG_SET_WALL_CLOCK
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_1
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_2
	checkplayergender
	compare VAR_RESULT, MALE
	call_if_eq PlayersHouse_2F_EventScript_MomComesUpstairsMale
	compare VAR_RESULT, FEMALE
	call_if_eq PlayersHouse_2F_EventScript_MomComesUpstairsFemale
	playse SE_EXIT
	removeobject VAR_0x8008
	releaseall
	end

PlayersHouse_2F_EventScript_MomComesUpstairsMale:: 
	setvar VAR_0x8008, LOCALID_MOM_2F
	addobject VAR_0x8008
	applymovement VAR_0x8008, PlayersHouse_2F_Movement_MomEntersMale
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestRight
	waitmovement 0
	msgbox PlayersHouse_2F_Text_HowDoYouLikeYourRoom, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_0x8008, PlayersHouse_2F_Movement_MomExitsMale
	waitmovement 0
	return

PlayersHouse_2F_EventScript_MomComesUpstairsFemale:: 
	setvar VAR_0x8008, LOCALID_MOM_2F
	addobject VAR_0x8008
	applymovement VAR_0x8008, PlayersHouse_2F_Movement_MomEntersFemale
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestLeft
	waitmovement 0
	msgbox PlayersHouse_2F_Text_HowDoYouLikeYourRoom, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_0x8008, PlayersHouse_2F_Movement_MomExitsFemale
	waitmovement 0
	return

PlayersHouse_2F_EventScript_CheckWallClock:: 
	incrementgamestat GAME_STAT_CHECKED_CLOCK
	fadescreen FADE_TO_BLACK
	special Special_ViewWallClock
	waitstate
	releaseall
	end

PlayersHouse_2F_EventScript_SetWallClock:: 
	fadescreen FADE_TO_BLACK
	special StartWallClock
	waitstate
	gettime @ Calls RtcCalcLocalTime which updates the RTC
	return

PlayersHouse_2F_Movement_MomEntersMale: 
	delay_8
	walk_down
	walk_in_place_fastest_left
	delay_16
	delay_8
	walk_left
	step_end

PlayersHouse_2F_Movement_MomExitsMale: 
	walk_right
	walk_up
	delay_8
	step_end

PlayersHouse_2F_Movement_MomEntersFemale: 
	delay_8
	walk_down
	walk_in_place_fastest_right
	delay_16
	delay_8
	walk_right
	step_end

PlayersHouse_2F_Movement_MomExitsFemale: 
	walk_left
	walk_up
	delay_8
	step_end

PlayersHouse_1F_EventScript_SetWatchedBroadcast:: 
	setvar VAR_LITTLEROOT_INTRO_STATE, 7
	releaseall
	end

PlayersHouse_1F_EventScript_PetalburgGymReportMale:: 
	applymovement VAR_0x8005, Common_Movement_WalkInPlaceFastestRight
	waitmovement 0
	call PlayersHouse_1F_EventScript_MomNoticeGymBroadcast
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerApproachTVForGymMale
	waitmovement 0
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
	msgbox PlayersHouse_1F_Text_MaybeDadWillBeOn, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_0x8005, PlayersHouse_1F_Movement_MomMakeRoomToSeeTVMale
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerMoveToTVMale
	waitmovement 0
	call PlayersHouse_1F_EventScript_WatchGymBroadcast
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestLeft
	waitmovement 0
	msgbox PlayersHouse_1F_Text_ItsOverWeMissedHim, MSGBOX_DEFAULT
	closemessage
	delay 30
	msgbox PlayersHouse_1F_Text_RunningShoes, MSGBOX_DEFAULT
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
	msgbox PlayersHouse_1F_Text_ReceivedRunningShoes, MSGBOX_DEFAULT
	waitfanfare
	delay 30
	setflag FLAG_SYS_B_DASH
	msgbox PlayersHouse_1F_Text_RunningShoesExplanation, MSGBOX_DEFAULT
	closemessage
	delay 30
	msgbox PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TEMP_1, 1
	applymovement VAR_0x8005, PlayersHouse_1F_Movement_MomReturnToSeatMale
	waitmovement 0
	goto PlayersHouse_1F_EventScript_SetWatchedBroadcast
	end

PlayersHouse_1F_EventScript_PetalburgGymReportFemale:: 
	applymovement VAR_0x8005, Common_Movement_WalkInPlaceFastestLeft
	waitmovement 0
	call PlayersHouse_1F_EventScript_MomNoticeGymBroadcast
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerApproachTVForGymFemale
	waitmovement 0
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
	msgbox PlayersHouse_1F_Text_MaybeDadWillBeOn, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_0x8005, PlayersHouse_1F_Movement_MomMakeRoomToSeeTVFemale
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerMoveToTVFemale
	waitmovement 0
	call PlayersHouse_1F_EventScript_WatchGymBroadcast
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestRight
	waitmovement 0
	msgbox PlayersHouse_1F_Text_ItsOverWeMissedHim, MSGBOX_DEFAULT
	closemessage
	delay 30
	msgbox PlayersHouse_1F_Text_RunningShoes, MSGBOX_DEFAULT
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
	msgbox PlayersHouse_1F_Text_ReceivedRunningShoes, MSGBOX_DEFAULT
	waitfanfare
	delay 30
	setflag FLAG_SYS_B_DASH
	msgbox PlayersHouse_1F_Text_RunningShoesExplanation, MSGBOX_DEFAULT
	closemessage
	delay 30
	msgbox PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TEMP_1, 1
	applymovement VAR_0x8005, PlayersHouse_1F_Movement_MomReturnToSeatFemale
	waitmovement 0
	goto PlayersHouse_1F_EventScript_SetWatchedBroadcast
	end

PlayersHouse_1F_EventScript_MomNoticeGymBroadcast:: 
	playse SE_PIN
	applymovement VAR_0x8005, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement VAR_0x8005, Common_Movement_Delay48
	waitmovement 0
	msgbox PlayersHouse_1F_Text_OhComeQuickly, MSGBOX_DEFAULT
	closemessage
	return

PlayersHouse_1F_EventScript_WatchGymBroadcast:: 
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
	waitmovement 0
	msgbox PlayersHouse_1F_Text_ReportFromPetalburgGym, MSGBOX_DEFAULT
	fadedefaultbgm
	special TurnOffTVScreen
	setflag FLAG_SYS_TV_HOME
	delay 35
	return

PlayersHouse_1F_Movement_MomApproachDadMale: 
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_in_place_fastest_right
	step_end

PlayersHouse_1F_Movement_MomApproachDadFemale: 
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_in_place_fastest_left
	step_end

PlayersHouse_1F_Movement_MomApproachPlayerMale: 
	walk_right
	step_end

PlayersHouse_1F_Movement_MomApproachPlayerFemale: 
	walk_left
	step_end

PlayersHouse_1F_Movement_MomNoticesLatiBroadcastMale: 
	walk_in_place_fastest_left
	delay_16
	delay_16
	delay_16
	delay_16
	walk_in_place_fastest_right
	delay_16
	delay_16
	step_end

PlayersHouse_1F_Movement_MomNoticesLatiBroadcastFemale: 
	walk_in_place_fastest_right
	delay_16
	delay_16
	delay_16
	delay_16
	walk_in_place_fastest_left
	delay_16
	delay_16
	step_end

PlayersHouse_1F_Movement_MomApproachPlayerAfterTVMale: 
	walk_up
	walk_left
	walk_left
	step_end

PlayersHouse_1F_Movement_MomApproachPlayerAfterTVFemale: 
	walk_up
	walk_right
	walk_right
	step_end

PlayersHouse_1F_Movement_MomMakeRoomToSeeTVMale: 
	walk_left
	walk_in_place_fastest_right
	step_end

PlayersHouse_1F_Movement_MomMakeRoomToSeeTVFemale: 
	walk_right
	walk_in_place_fastest_left
	step_end

PlayersHouse_1F_Movement_MomReturnToSeatMale: 
	walk_left
	walk_down
	walk_in_place_fastest_right
	step_end

PlayersHouse_1F_Movement_MomReturnToSeatFemale: 
	walk_right
	walk_down
	walk_in_place_fastest_left
	step_end

PlayersHouse_1F_EventScript_Mom:: 
	lock
	faceplayer
	compare VAR_LITTLEROOT_HOUSES_STATE_MAY, 4
	goto_if_eq PlayersHouse_1F_EventScript_DontPushYourselfTooHard
	compare VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4
	goto_if_eq PlayersHouse_1F_EventScript_DontPushYourselfTooHard
	goto_if_set FLAG_HAS_MATCH_CALL, PlayersHouse_1F_EventScript_TryRegisterMom
	goto_if_set FLAG_RESCUED_BIRCH, PlayersHouse_1F_EventScript_MomHealsParty
	compare VAR_TEMP_1, 1
	goto_if_eq PlayersHouse_1F_EventScript_SeeYouHoney
	compare VAR_LITTLEROOT_INTRO_STATE, 7
	goto_if_eq PlayersHouse_1F_EventScript_DidYouMeetProfBirch
	msgbox PlayersHouse_1F_Text_IsntItNiceInHere, MSGBOX_DEFAULT
	release
	end

PlayersHouse_1F_EventScript_DontPushYourselfTooHard:: 
	msgbox PlayersHouse_1F_Text_DontPushYourselfTooHard, MSGBOX_DEFAULT
	release
	end

PlayersHouse_1F_EventScript_TryRegisterMom:: 
	goto_if_set FLAG_ENABLE_MOM_MATCH_CALL, PlayersHouse_1F_EventScript_CheckGiveAmuletCoin
	msgbox PlayersHouse_1F_Text_IsThatAPokenav, MSGBOX_DEFAULT
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox PlayersHouse_1F_Text_RegisteredMom, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_MOM_MATCH_CALL
	release
	end

PlayersHouse_1F_EventScript_CheckGiveAmuletCoin:: 
	goto_if_set FLAG_BADGE05_GET, PlayersHouse_1F_EventScript_TryGiveAmuletCoin
	goto PlayersHouse_1F_EventScript_MomHealsParty

PlayersHouse_1F_EventScript_TryGiveAmuletCoin:: 
	goto_if_set FLAG_RECEIVED_AMULET_COIN, PlayersHouse_1F_EventScript_MomHealsParty
	msgbox PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom, MSGBOX_DEFAULT
	giveitem ITEM_AMULET_COIN
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_ShowBagIsFull
	msgbox PlayersHouse_1F_Text_IAlsoBoughtYouSomeNewClothes, MSGBOX_DEFAULT
	msgbox PlayersHouse_1F_Text_DontPushYourselfTooHard, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_AMULET_COIN
	release
	end

PlayersHouse_1F_EventScript_MomHealsParty:: 
	msgbox PlayersHouse_1F_Text_YouShouldRestABit, MSGBOX_DEFAULT
	goto PlayersHouse_1F_EventScript_HealParty
	end

PlayersHouse_1F_EventScript_SeeYouHoney:: 
	msgbox PlayersHouse_1F_Text_SeeYouHoney, MSGBOX_DEFAULT
	release
	end

PlayersHouse_1F_EventScript_HealParty:: 
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	incrementgamestat GAME_STAT_RESTED_AT_HOME
	msgbox PlayersHouse_1F_Text_TakeCareHoney, MSGBOX_DEFAULT
	release
	end

PlayersHouse_1F_EventScript_DidYouMeetProfBirch:: 
	msgbox PlayersHouse_1F_Text_DidYouMeetProfBirch, MSGBOX_DEFAULT
	release
	end

PlayersHouse_1F_EventScript_Vigoroth1:: 
	lock
	faceplayer
	waitse
	playmoncry SPECIES_VIGOROTH, 0
	msgbox PlayersHouse_1F_Text_Vigoroth1, MSGBOX_DEFAULT
	waitmoncry
	release
	end

PlayersHouse_1F_EventScript_Vigoroth2:: 
	lock
	faceplayer
	waitse
	playmoncry SPECIES_VIGOROTH, 0
	msgbox PlayersHouse_1F_Text_Vigoroth2, MSGBOX_DEFAULT
	waitmoncry
	release
	end

PlayersHouse_1F_Movement_PlayerApproachTVForGymMale: 
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	step_end

PlayersHouse_1F_Movement_PlayerMoveToTVMale: 
	walk_left
	step_end

PlayersHouse_1F_Movement_PlayerApproachTVForGymFemale: 
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	step_end

PlayersHouse_1F_Movement_PlayerMoveToTVFemale: 
	walk_right
	step_end

PlayersHouse_1F_Movement_MovePlayerAwayFromDoor: 
	walk_up
	step_end

PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV:: 
	lockall
	checkplayergender
	compare VAR_RESULT, MALE
	call_if_eq PlayersHouse_1F_EventScript_SetUpObjectEventVarsMale
	compare VAR_RESULT, FEMALE
	call_if_eq PlayersHouse_1F_EventScript_SetUpObjectEventVarsFemale
	compare VAR_0x8008, MALE
	call_if_eq PlayersHouse_1F_EventScript_PlayerEnterRoomMale
	compare VAR_0x8008, FEMALE
	call_if_eq PlayersHouse_1F_EventScript_PlayerEnterRoomFemale
	applymovement VAR_0x8009, Common_Movement_FacePlayer
	waitmovement 0
	playse SE_PIN
	applymovement VAR_0x8009, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement VAR_0x8009, Common_Movement_Delay48
	waitmovement 0
	delay 20
	compare VAR_0x8008, MALE
	call_if_eq PlayersHouse_1F_EventScript_DadApproachPlayerMale
	compare VAR_0x8008, FEMALE
	call_if_eq PlayersHouse_1F_EventScript_DadApproachPlayerFemale
	msgbox PlayersHouse_1F_Text_TicketFromBrineyCameForYou, MSGBOX_DEFAULT
	giveitem ITEM_SS_TICKET
	msgbox PlayersHouse_1F_Text_PortsInSlateportLilycove, MSGBOX_DEFAULT
	msgbox PlayersHouse_1F_Text_IBoughtYouSomeNewClothesToo, MSGBOX_DEFAULT
	closemessage
	delay 20
	compare VAR_0x8008, MALE
	call_if_eq PlayersHouse_1F_EventScript_MomApproachDadMale
	compare VAR_0x8008, FEMALE
	call_if_eq PlayersHouse_1F_EventScript_MomApproachDadFemale
	msgbox PlayersHouse_1F_Text_BetterGetBackToGym, MSGBOX_DEFAULT
	closemessage
	compare VAR_0x8008, MALE
	call_if_eq PlayersHouse_1F_EventScript_DadExitsMale
	compare VAR_0x8008, FEMALE
	call_if_eq PlayersHouse_1F_EventScript_DadExitsFemale
	playse SE_DOOR
	removeobject VAR_0x8009
	setflag FLAG_RECEIVED_SS_TICKET
	delay 30
	compare VAR_0x8008, MALE
	call_if_eq PlayersHouse_1F_EventScript_MomApproachPlayerMale
	compare VAR_0x8008, FEMALE
	call_if_eq PlayersHouse_1F_EventScript_MomApproachPlayerFemale
	delay 20
	msgbox PlayersHouse_1F_Text_DadShouldStayLonger, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_SYS_TV_LATIAS_LATIOS
	special TurnOnTVScreen
	delay 60
	compare VAR_0x8008, MALE
	call_if_eq PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastMale
	compare VAR_0x8008, FEMALE
	call_if_eq PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastFemale
	msgbox PlayersHouse_1F_Text_IsThatABreakingStory, MSGBOX_DEFAULT
	closemessage
	compare VAR_0x8008, MALE
	call_if_eq PlayersHouse_1F_EventScript_PlayerApproachTVForLatiMale
	compare VAR_0x8008, FEMALE
	call_if_eq PlayersHouse_1F_EventScript_PlayerApproachTVForLatiFemale
	msgbox PlayersHouse_1F_Text_LatiEmergencyNewsFlash, MSGBOX_DEFAULT
	closemessage
	clearflag FLAG_SYS_TV_LATIAS_LATIOS
	setflag FLAG_LATIOS_OR_LATIAS_ROAMING
	special TurnOffTVScreen
	compare VAR_0x8008, MALE
	call_if_eq PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVMale
	compare VAR_0x8008, FEMALE
	call_if_eq PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVFemale
	msgbox PlayersHouse_1F_Text_WhatColorDidTheySay, MSGBOX_DEFAULT
	multichoice 22, 8, MULTI_TV_LATI, TRUE
	copyvar VAR_0x8004, VAR_RESULT
	special InitRoamer
	copyvar VAR_ROAMER_POKEMON, VAR_RESULT
	msgbox PlayersHouse_1F_Text_StillUnknownPokemon, MSGBOX_DEFAULT
	applymovement VAR_0x800A, Common_Movement_FaceUp
	waitmovement 0
	delay 60
	playse SE_PIN
	applymovement VAR_0x800A, Common_Movement_ExclamationMark
	waitmovement 0
	waitse
	applymovement VAR_0x800A, Common_Movement_FacePlayer
	waitmovement 0
	msgbox PlayersHouse_1F_Text_IAlmostForgot, MSGBOX_DEFAULT
	msgbox PlayersHouse_1F_Text_OneLastThing, MSGBOX_DEFAULT
	closemessage
	checkplayergender
	compare VAR_RESULT, FEMALE
	goto_if_eq PlayersHouse_1F_EventScript_FemalePlayersMomGoesBackToHerPreferredSpot
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomGoesBackToHerPreferredSpot
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomGoesBackToHerPreferredSpot2
	waitmovement 0
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 4
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4
	releaseall
	end

PlayersHouse_1F_EventScript_FemalePlayersMomGoesBackToHerPreferredSpot:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_FemalePlayersMomGoesBackToHerPreferredSpot
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_FemalePlayersMomGoesBackToHerPreferredSpot2
	waitmovement 0
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 4
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4
	releaseall
	end

@ Never called.
PlayersHouse_1F_EventScript_AirLatiBroadcast:: 
	setflag FLAG_SYS_TV_LATIAS_LATIOS
	return

PlayersHouse_1F_EventScript_SetUpObjectEventVarsMale:: 
	setvar VAR_0x8008, MALE
	setvar VAR_0x8009, LOCALID_DAD
	setvar VAR_0x800A, LOCALID_MOM
	return

PlayersHouse_1F_EventScript_SetUpObjectEventVarsFemale:: 
	setvar VAR_0x8008, FEMALE
	setvar VAR_0x8009, LOCALID_DAD
	setvar VAR_0x800A, LOCALID_MOM
	return

PlayersHouse_1F_EventScript_DadApproachPlayerMale:: 
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadApproachPlayerMale
	waitmovement 0
	return

PlayersHouse_1F_EventScript_DadApproachPlayerFemale:: 
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadApproachPlayerFemale
	waitmovement 0
	return

PlayersHouse_1F_EventScript_MomApproachDadMale:: 
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachDadMale
	waitmovement 0
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadFaceMomMale
	waitmovement 0
	return

PlayersHouse_1F_EventScript_MomApproachDadFemale:: 
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachDadFemale
	waitmovement 0
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadFaceMomFemale
	waitmovement 0
	return

PlayersHouse_1F_EventScript_DadExitsMale:: 
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadExitsMale
	waitmovement 0
	return

PlayersHouse_1F_EventScript_DadExitsFemale:: 
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadExitsFemale
	waitmovement 0
	return

PlayersHouse_1F_EventScript_PlayerEnterRoomMale:: 
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerEnterRoomMale
	waitmovement 0
	return

PlayersHouse_1F_EventScript_PlayerEnterRoomFemale:: 
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerEnterRoomFemale
	waitmovement 0
	return

PlayersHouse_1F_EventScript_PlayerApproachTVForLatiMale:: 
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerApproachTVForLatiMale
	waitmovement 0
	applymovement VAR_0x800A, Common_Movement_WalkInPlaceFastestLeft
	waitmovement 0
	return

PlayersHouse_1F_EventScript_PlayerApproachTVForLatiFemale:: 
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerApproachTVForLatiFemale
	waitmovement 0
	applymovement VAR_0x800A, Common_Movement_WalkInPlaceFastestRight
	waitmovement 0
	return

PlayersHouse_1F_EventScript_MomApproachPlayerMale:: 
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerMale
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestLeft
	waitmovement 0
	return

PlayersHouse_1F_EventScript_MomApproachPlayerFemale:: 
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerFemale
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestRight
	waitmovement 0
	return

PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastMale:: 
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomNoticesLatiBroadcastMale
	waitmovement 0
	return

PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastFemale:: 
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomNoticesLatiBroadcastFemale
	waitmovement 0
	return

PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVMale:: 
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerAfterTVMale
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestRight
	waitmovement 0
	return

PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVFemale:: 
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerAfterTVFemale
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestLeft
	waitmovement 0
	return

PlayersHouse_1F_Movement_MomGoesBackToHerPreferredSpot:
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	step_end

PlayersHouse_1F_Movement_MomGoesBackToHerPreferredSpot2:
	walk_up
	walk_up
	face_right
	step_end

PlayersHouse_1F_Movement_FemalePlayersMomGoesBackToHerPreferredSpot:
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	step_end

PlayersHouse_1F_Movement_FemalePlayersMomGoesBackToHerPreferredSpot2:
	walk_up
	walk_up
	face_left
	step_end

PlayersHouse_1F_Movement_DadApproachPlayerMale: 
	walk_right
	walk_right
	step_end

PlayersHouse_1F_Movement_DadApproachPlayerFemale: 
	walk_left
	walk_left
	step_end

PlayersHouse_1F_Movement_DadFaceMomMale: 
	face_left
	step_end

PlayersHouse_1F_Movement_DadFaceMomFemale: 
	face_right
	step_end

PlayersHouse_1F_Movement_DadExitsMale: 
	walk_down
	walk_right
	walk_down
	delay_8
	step_end

PlayersHouse_1F_Movement_DadExitsFemale: 
	walk_down
	walk_left
	walk_down
	delay_8
	step_end

PlayersHouse_1F_Movement_PlayerEnterRoomMale: 
	delay_16
	walk_down
	walk_down
	walk_down
	walk_in_place_fastest_left
	step_end

PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit: 
	delay_8
	delay_16
	delay_16
	walk_in_place_fastest_down
	step_end

PlayersHouse_1F_Movement_PlayerEnterRoomFemale: 
	delay_16
	walk_down
	walk_down
	walk_down
	walk_in_place_fastest_right
	step_end

PlayersHouse_1F_Movement_PlayerApproachTVForLatiMale: 
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_fastest_up
	step_end

PlayersHouse_1F_Movement_PlayerApproachTVForLatiFemale: 
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_fastest_up
	step_end

EventScript_RunningShoesManual:: 
	msgbox PlayersHouse_1F_Text_RunningShoesManual, MSGBOX_SIGN
	end

EventScript_Dresser::
	lock
	goto_if_unset FLAG_RECEIVED_AMULET_COIN, EventScript_NicelyMadeDresser
	checkplayergender
	compare VAR_RESULT, FEMALE
	goto_if_eq EventScript_SwapFemalePlayersCostume
EventScript_SwapMalePlayersCostume:
	specialvar VAR_RESULT, GetCurrentMap
	compare VAR_RESULT, MAP_LITTLEROOT_TOWN_MAYS_HOUSE_2F
	goto_if_eq EventScript_NicelyMadeDresser
	goto_if_set FLAG_IS_CHAMPION, EventScript_SwapPlayersCostumeExtended
	multichoice 0, 0, MULTI_COSTUME_SELECTION_1, 0
	switch VAR_RESULT
	case 0, EventScript_SetPkmnTrainerCostume
	case 1, EventScript_SetLegacyCostume
	case 2, EventScript_SwapPlayersCostumeEnd
	case MULTI_B_PRESSED, EventScript_SwapPlayersCostumeEnd

EventScript_SwapPlayersCostumeExtended:
	multichoice 0, 0, MULTI_COSTUME_SELECTION_2, 0
	switch VAR_RESULT
	case 0, EventScript_SetPkmnTrainerCostume
	case 1, EventScript_SetLegacyCostume
	case 2, EventScript_SetPokedexHolderCostume
	case 3, EventScript_SwapPlayersCostumeEnd
	case MULTI_B_PRESSED, EventScript_SwapPlayersCostumeEnd

EventScript_SetPkmnTrainerCostume:
	compare VAR_COSTUME_SELECTION, 0
	goto_if_eq EventScript_AlreadyWearingIt
	setvar VAR_COSTUME_SELECTION, 0
	goto EventScript_ChangeCostume
EventScript_SetLegacyCostume:
	compare VAR_COSTUME_SELECTION, 1
	goto_if_eq EventScript_AlreadyWearingIt
	setvar VAR_COSTUME_SELECTION, 1
	goto EventScript_ChangeCostume
EventScript_SetPokedexHolderCostume:
	compare VAR_COSTUME_SELECTION, 2
	goto_if_eq EventScript_AlreadyWearingIt
	setvar VAR_COSTUME_SELECTION, 2
	goto EventScript_ChangeCostume

EventScript_AlreadyWearingIt:
	msgbox CostumeSwapping_Text_AlreadyWearingIt, MSGBOX_DEFAULT
	closemessage
	release
	end

EventScript_ChangeCostume:
	fadescreen FADE_TO_BLACK
	special SwapPlayersCostume
	fadescreen FADE_FROM_BLACK
	playfanfare MUS_LEVEL_UP
	msgbox CostumeSwapping_Text_2, MSGBOX_DEFAULT
	waitfanfare
EventScript_SwapPlayersCostumeEnd:
	release
	end

EventScript_SwapFemalePlayersCostume:
	specialvar VAR_RESULT, GetCurrentMap
	compare VAR_RESULT, MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
	goto_if_eq EventScript_NicelyMadeDresser
	goto_if_set FLAG_IS_CHAMPION, EventScript_SwapPlayersCostumeExtended
	multichoice 0, 0, MULTI_COSTUME_SELECTION_1, 0
	switch VAR_RESULT
	case 0, EventScript_SetPkmnTrainerCostume
	case 1, EventScript_SetLegacyCostume
	case 2, EventScript_SwapPlayersCostumeEnd
	case MULTI_B_PRESSED, EventScript_SwapPlayersCostumeEnd

EventScript_NicelyMadeDresser:
	msgbox EventScript_Text_NicelyMadeDresser, MSGBOX_DEFAULT
	release
	end

EventScript_Text_NicelyMadeDresser:
	.string "It's a nicely made dresser.\nIt will hold a lot of stuff.$"

CostumeSwapping_Text_1:
	.string "The clothes MOM bought for me\nare nicely put inside the drawer.\pShould I try to put them on?$"

CostumeSwapping_Text_2:
	.string "Comfy.$"

CostumeSwapping_Text_AlreadyWearingIt:
	.string "I'm already wearing it.$"
