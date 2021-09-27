CableClub_OnTransition:
	end

CableClub_OnWarp:
	map_script_2 VAR_CABLE_CLUB_STATE, USING_SINGLE_BATTLE, CableClub_EventScript_CheckTurnAttendant
	map_script_2 VAR_CABLE_CLUB_STATE, USING_DOUBLE_BATTLE, CableClub_EventScript_CheckTurnAttendant
	map_script_2 VAR_CABLE_CLUB_STATE, USING_MULTI_BATTLE, CableClub_EventScript_CheckTurnAttendant
	map_script_2 VAR_CABLE_CLUB_STATE, USING_TRADE_CENTER, CableClub_EventScript_CheckTurnAttendant
	map_script_2 VAR_CABLE_CLUB_STATE, USING_RECORD_CORNER, CableClub_EventScript_CheckTurnAttendant
	.2byte 0

CableClub_EventScript_CheckTurnAttendant::
	compare VAR_0x8007, 0
	goto_if_eq CableClub_EventScript_DontTurnAttendant
	turnobject VAR_0x8007, DIR_WEST
CableClub_EventScript_DontTurnAttendant::
	end

CableClub_OnLoad:
	compare VAR_CABLE_CLUB_STATE, USING_SINGLE_BATTLE
	goto_if_eq CableClub_EventScript_OnLoadFromColosseum
	compare VAR_CABLE_CLUB_STATE, USING_DOUBLE_BATTLE
	goto_if_eq CableClub_EventScript_OnLoadFromColosseum
	compare VAR_CABLE_CLUB_STATE, USING_MULTI_BATTLE
	goto_if_eq CableClub_EventScript_OnLoadFromColosseum
	compare VAR_CABLE_CLUB_STATE, USING_TRADE_CENTER
	goto_if_eq CableClub_EventScript_OnLoadFromTradeCenter
	compare VAR_CABLE_CLUB_STATE, USING_RECORD_CORNER
	goto_if_eq CableClub_EventScript_OnLoadFromRecordCorner
	end

CableClub_EventScript_OnLoadFromColosseum::
	call CableClub_EventScript_OpenDirectCornerBarrier
	end

CableClub_EventScript_OnLoadFromTradeCenter::
	call CableClub_EventScript_OpenDirectCornerBarrier
	end

CableClub_EventScript_OnLoadFromRecordCorner::
	call CableClub_EventScript_OpenDirectCornerBarrier
	end

CableClub_OnFrame:
	map_script_2 VAR_CABLE_CLUB_TUTORIAL_STATE, 1, CableClub_EventScript_Tutorial
	map_script_2 VAR_CABLE_CLUB_STATE, USING_SINGLE_BATTLE, CableClub_EventScript_ExitLinkRoom
	map_script_2 VAR_CABLE_CLUB_STATE, USING_DOUBLE_BATTLE, CableClub_EventScript_ExitLinkRoom
	map_script_2 VAR_CABLE_CLUB_STATE, USING_MULTI_BATTLE, CableClub_EventScript_ExitLinkRoom
	map_script_2 VAR_CABLE_CLUB_STATE, USING_TRADE_CENTER, CableClub_EventScript_ExitTradeCenter
	map_script_2 VAR_CABLE_CLUB_STATE, USING_RECORD_CORNER, CableClub_EventScript_ExitRecordCorner
	.2byte 0

CableClub_EventScript_ExitLinkRoom::
	lockall
	call CableClub_EventScript_CloseLinkAndExitLinkRoom
	call CableClub_EventScript_CloseDirectCornerBarrier
	special DrawWholeMapView
	playse SE_CLICK
	erasebox 0, 0, 29, 19
	releaseall
	end

CableClub_EventScript_CloseLinkAndExitLinkRoom::
	special CloseLink
	setvar VAR_CABLE_CLUB_STATE, 0
	compare VAR_0x8007, 0
	goto_if_eq CableClub_EventScript_PlayerExitLinkRoom
	applymovement VAR_0x8007, Movement_AttendantFaceLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerExitLinkRoom
	waitmovement 0
	applymovement VAR_0x8007, Movement_AttendantFaceDown
	waitmovement 0
	return

CableClub_EventScript_ExitTradeCenter::
	lockall
	call CableClub_EventScript_PlayerExitTradeCenter
	call CableClub_EventScript_CloseDirectCornerBarrier
	special DrawWholeMapView
	playse SE_CLICK
	erasebox 0, 0, 29, 19
	releaseall
	end

CableClub_EventScript_PlayerExitTradeCenter::
	special CloseLink
	setvar VAR_CABLE_CLUB_STATE, 0
	compare VAR_0x8007, 0
	goto_if_eq CableClub_EventScript_PlayerExitLinkRoom
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerFaceAttendantRight
	waitmovement 0
	applymovement VAR_0x8007, Movement_AttendantFaceLeft
	waitmovement 0
	call CableClub_EventScript_TrainerCardDataOverwritten
	return

CableClub_EventScript_ExitRecordCorner::
	lockall
	call CableClub_EventScript_PlayerExitRecordCorner
	call CableClub_EventScript_CloseDirectCornerBarrier
	special DrawWholeMapView
	playse SE_CLICK
	erasebox 0, 0, 29, 19
	releaseall
	end

CableClub_EventScript_PlayerExitRecordCorner::
	special CloseLink
	setvar VAR_CABLE_CLUB_STATE, 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerExitLinkRoom
	waitmovement 0
	compare VAR_0x8007, 0
	goto_if_eq CableClub_EventScript_ExitRecordCornerRet
	applymovement VAR_0x8007, Movement_AttendantFaceDown
	waitmovement 0
CableClub_EventScript_ExitRecordCornerRet::
	return

CableClub_EventScript_TrainerCardDataOverwritten::
	message CableClub_Text_TrainerCardDataOverwritten
	waitmessage
	playse SE_PIN
	delay 60
	message CableClub_Text_HopeToSeeYouAgain
	waitmessage
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerExitLinkRoom
	waitmovement 0
	applymovement VAR_0x8007, Movement_AttendantFaceDown
	waitmovement 0
	return

CableClub_EventScript_PlayerExitLinkRoom::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerExitLinkRoom
	waitmovement 0
	return

CableClub_EventScript_Tutorial::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
	waitmovement 0
	msgbox CableClub_Text_FirstTimeRightThisWay, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, CableClub_Movement_PlayerApproachCounter
	waitmovement 0
	delay 30
	msgbox CableClub_Text_ExplainCableClubFirstTime, MSGBOX_DEFAULT
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 2
	releaseall
	end

CableClub_Movement_PlayerApproachCounter:
	walk_up
	walk_up
	step_end

CableClub_EventScript_WelcomeToCableClub::
	message CableClub_Text_WelcomeWhichCableClubService
	waitmessage
	delay 28
	goto CableClub_EventScript_SelectCableClubRoom
	end

CableClub_EventScript_SelectCableClubRoom::
	setvar VAR_0x8004, 0
	goto_if_set FLAG_VISITED_MAUVILLE_CITY, CableClub_EventScript_CableClubUnlockedRecordCorner
	multichoice 0, 0, MULTI_CABLE_CLUB_NO_RECORD_MIX, FALSE
	switch VAR_RESULT
	case 0, CableClub_EventScript_TradeCenter
	case 1, CableClub_EventScript_Colosseum
	case 2, CableClub_EventScript_AbortLink
	case MULTI_B_PRESSED, CableClub_EventScript_AbortLink
	end

CableClub_EventScript_CableClubUnlockedRecordCorner::
	multichoice 0, 0, MULTI_CABLE_CLUB_WITH_RECORD_MIX, FALSE
	switch VAR_RESULT
	case 0, CableClub_EventScript_TradeCenter
	case 1, CableClub_EventScript_Colosseum
	case 2, CableClub_EventScript_RecordCorner
	case 3, CableClub_EventScript_AbortLink
	case MULTI_B_PRESSED, CableClub_EventScript_AbortLink
	end

CableClub_EventScript_Colosseum::
	copyvar VAR_0x8007, VAR_LAST_TALKED
	goto CableClub_EventScript_SelectBattleMode
	end

CableClub_EventScript_SelectBattleMode::
	message CableClub_Text_PlayWhichBattleMode
	waitmessage
	multichoice 0, 0, MULTI_BATTLE_MODE, FALSE
	switch VAR_RESULT
	case 0, CableClub_EventScript_SingleBattleMode
	case 1, CableClub_EventScript_DoubleBattleMode
	case 2, CableClub_EventScript_MultiBattleMode
	case 3, CableClub_EventScript_BattleModeInfo
	case 4, CableClub_EventScript_AbortLink
	case MULTI_B_PRESSED, CableClub_EventScript_AbortLink
	end

CableClub_EventScript_BattleModeInfo::
	msgbox CableClub_Text_ExplainBattleModes, MSGBOX_DEFAULT
	goto CableClub_EventScript_SelectBattleMode
	end

CableClub_EventScript_SingleBattleMode::
	setvar VAR_0x8004, USING_SINGLE_BATTLE
	goto CableClub_EventScript_TryEnterColosseum
	end

CableClub_EventScript_DoubleBattleMode::
	special HasEnoughMonsForDoubleBattle
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne CableClub_EventScript_NeedTwoMonsForDoubleBattle
	setvar VAR_0x8004, USING_DOUBLE_BATTLE
	goto CableClub_EventScript_TryEnterColosseum
	end

CableClub_EventScript_NeedTwoMonsForDoubleBattle::
	msgbox CableClub_Text_NeedTwoMonsForDoubleBattle, MSGBOX_DEFAULT
	goto CableClub_EventScript_SelectBattleMode
	end

CableClub_EventScript_MultiBattleMode::
	setvar VAR_0x8004, USING_MULTI_BATTLE
	goto CableClub_EventScript_TryEnterColosseum
	end

CableClub_EventScript_TryEnterColosseum::
	call Common_EventScript_SaveGame
	compare VAR_RESULT, 0
	goto_if_eq CableClub_EventScript_AbortLink
	message gText_PleaseWaitForLink
	waitmessage
	special TryBattleLinkup
	waitstate
	compare VAR_RESULT, LINKUP_SUCCESS
	goto_if_eq CableClub_EventScript_EnterColosseum
	compare VAR_RESULT, LINKUP_SOMEONE_NOT_READY
	goto_if_eq CableClub_EventScript_AbortLinkSomeoneNotReady
	compare VAR_RESULT, LINKUP_DIFF_SELECTIONS
	goto_if_eq CableClub_EventScript_AbortLinkDifferentSelections
	compare VAR_RESULT, LINKUP_WRONG_NUM_PLAYERS
	goto_if_eq CableClub_EventScript_AbortLinkIncorrectNumberOfBattlers
	compare VAR_RESULT, LINKUP_FAILED
	goto_if_eq CableClub_EventScript_AbortLink
	compare VAR_RESULT, LINKUP_CONNECTION_ERROR
	goto_if_eq CableClub_EventScript_AbortLinkConnectionError
	end

CableClub_EventScript_EnterColosseum::
	special HealPlayerParty
	special SavePlayerParty
	special LoadPlayerBag
	copyvar VAR_CABLE_CLUB_STATE, VAR_0x8004
	messageautoscroll CableClub_Text_PleaseEnter
	waitmessage
	call CableClub_EventScript_OpenDirectCornerBarrier
	special DrawWholeMapView
	playse SE_CLICK
	delay 60
	applymovement VAR_LAST_TALKED, Movement_AttendantFaceLeft
	waitmovement 0
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerApproachLinkRoomLeft
	waitmovement 0
	opendoor 9, 1
	waitdooranim
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerEnterLinkRoom
	waitmovement 0
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
	closedoor 9, 1
	waitdooranim
	release
	compare VAR_0x8004, USING_MULTI_BATTLE
	goto_if_eq CableClub_EventScript_WarpTo4PColosseum
	special SetCableClubWarp
	warp MAP_BATTLE_COLOSSEUM_2P, 255, 6, 8
	special DoCableClubWarp
	waitstate
	end

CableClub_EventScript_WarpTo4PColosseum::
	special SetCableClubWarp
	warp MAP_BATTLE_COLOSSEUM_4P, 255, 5, 8
	special DoCableClubWarp
	waitstate
	end

CableClub_EventScript_AbortLinkIncorrectNumberOfBattlers::
	switch VAR_0x8004
	case USING_SINGLE_BATTLE, CableClub_EventScript_AbortLinkWrongNumberForSingleBattle
	case USING_DOUBLE_BATTLE, CableClub_EventScript_AbortLinkWrongNumberForDoubleBattle
	case USING_MULTI_BATTLE,  CableClub_EventScript_AbortLinkNeedFourPlayers
	goto CableClub_EventScript_AbortLinkIncorrectNumberOfParticipants
	end

CableClub_EventScript_AbortLinkNeedFourPlayers::
	special CloseLink
	msgbox CableClub_Text_NeedFourPlayers, MSGBOX_DEFAULT
	goto CableClub_EventScript_ConfirmNumberAndRestart
	end

CableClub_EventScript_AbortLinkWrongNumberForDoubleBattle::
	special CloseLink
	msgbox CableClub_Text_CantDoubleBattleWithXPlayers, MSGBOX_DEFAULT
	goto CableClub_EventScript_ConfirmNumberAndRestart
	end

CableClub_EventScript_AbortLinkWrongNumberForSingleBattle::
	special CloseLink
	msgbox CableClub_Text_CantSingleBattleWithXPlayers, MSGBOX_DEFAULT
	goto CableClub_EventScript_ConfirmNumberAndRestart
	end

CableClub_EventScript_ConfirmNumberAndRestart::
	special CloseLink  @ Redundant
	msgbox CableClub_Text_PleaseConfirmNumberAndRestart, MSGBOX_DEFAULT
	release
	end

CableClub_EventScript_TradeCenter::
	copyvar VAR_0x8007, VAR_LAST_TALKED
	call CableClub_EventScript_CheckPartyTradeRequirements
	compare VAR_RESULT, 0
	goto_if_eq CableClub_EventScript_AbortLink
	call Common_EventScript_SaveGame
	compare VAR_RESULT, 0
	goto_if_eq CableClub_EventScript_AbortLink
	message gText_PleaseWaitForLink
	waitmessage
	special TryTradeLinkup
	waitstate
	compare VAR_RESULT, LINKUP_SUCCESS
	goto_if_eq CableClub_EventScript_EnterTradeCenter
	compare VAR_RESULT, LINKUP_SOMEONE_NOT_READY
	goto_if_eq CableClub_EventScript_AbortLinkSomeoneNotReady
	compare VAR_RESULT, LINKUP_DIFF_SELECTIONS
	goto_if_eq CableClub_EventScript_AbortLinkDifferentSelections
	compare VAR_RESULT, LINKUP_WRONG_NUM_PLAYERS
	goto_if_eq CableClub_EventScript_AbortLinkIncorrectNumberOfParticipants
	compare VAR_RESULT, LINKUP_FAILED
	goto_if_eq CableClub_EventScript_AbortLink
	compare VAR_RESULT, LINKUP_CONNECTION_ERROR
	goto_if_eq CableClub_EventScript_AbortLinkConnectionError
	compare VAR_RESULT, LINKUP_PLAYER_NOT_READY
	goto_if_eq CableClub_EventScript_AbortLinkPlayerNotReady
	compare VAR_RESULT, LINKUP_PARTNER_NOT_READY
	goto_if_eq CableClub_EventScript_AbortLinkOtherTrainerNotReady
	end

CableClub_EventScript_EnterTradeCenter::
	setvar VAR_0x8004, USING_TRADE_CENTER
	copyvar VAR_CABLE_CLUB_STATE, VAR_0x8004
	messageautoscroll CableClub_Text_PleaseEnter
	waitmessage
	call CableClub_EventScript_OpenDirectCornerBarrier
	special DrawWholeMapView
	playse SE_CLICK
	delay 60
	applymovement VAR_LAST_TALKED, Movement_AttendantFaceLeft
	waitmovement 0
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerApproachLinkRoomLeft
	waitmovement 0
	opendoor 9, 1
	waitdooranim
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerEnterLinkRoom
	waitmovement 0
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
	closedoor 9, 1
	waitdooranim
	release
	special SetCableClubWarp
	setwarp MAP_TRADE_CENTER, 255, 5, 8
	special DoCableClubWarp
	waitstate
	end

CableClub_EventScript_CheckPartyTradeRequirements::
	specialvar VAR_RESULT, CalculatePlayerPartyCount
	compare VAR_RESULT, 2
	goto_if_lt CableClub_EventScript_NeedTwoMonsToTrade
	specialvar VAR_RESULT, DoesPartyHaveEnigmaBerry
	compare VAR_RESULT, TRUE
	goto_if_eq CableClub_EventScript_CantTradeEnigmaBerry
	setvar VAR_RESULT, 1
	return

CableClub_EventScript_NeedTwoMonsToTrade::
	msgbox CableClub_Text_NeedTwoMonsToTrade, MSGBOX_DEFAULT
	setvar VAR_RESULT, 0
	return

CableClub_EventScript_CantTradeEnigmaBerry::
	msgbox CableClub_Text_CantTradeEnigmaBerry, MSGBOX_DEFAULT
	setvar VAR_RESULT, 0
	return

CableClub_EventScript_RecordCorner::
	copyvar VAR_0x8007, VAR_LAST_TALKED
	call Common_EventScript_SaveGame
	compare VAR_RESULT, 0
	goto_if_eq CableClub_EventScript_AbortLink
	message gText_PleaseWaitForLink
	waitmessage
	special TryRecordMixLinkup
	waitstate
	special ValidateMixingGameLanguage
	waitstate
	compare VAR_RESULT, LINKUP_FOREIGN_GAME
	goto_if_eq CableClub_EventScript_AbortLinkForeignGame
	compare VAR_RESULT, LINKUP_SUCCESS
	goto_if_eq CableClub_EventScript_EnterRecordCorner
	compare VAR_RESULT, LINKUP_SOMEONE_NOT_READY
	goto_if_eq CableClub_EventScript_AbortLinkSomeoneNotReady
	compare VAR_RESULT, LINKUP_DIFF_SELECTIONS
	goto_if_eq CableClub_EventScript_AbortLinkDifferentSelections
	compare VAR_RESULT, LINKUP_WRONG_NUM_PLAYERS
	goto_if_eq CableClub_EventScript_AbortLinkIncorrectNumberOfParticipants
	compare VAR_RESULT, LINKUP_FAILED
	goto_if_eq CableClub_EventScript_AbortLink
	compare VAR_RESULT, LINKUP_CONNECTION_ERROR
	goto_if_eq CableClub_EventScript_AbortLinkConnectionError
	end

CableClub_EventScript_EnterRecordCorner::
	setvar VAR_0x8004, USING_RECORD_CORNER
	copyvar VAR_CABLE_CLUB_STATE, VAR_0x8004
	messageautoscroll CableClub_Text_PleaseEnter
	waitmessage
	call CableClub_EventScript_OpenDirectCornerBarrier
	special DrawWholeMapView
	playse SE_CLICK
	delay 60
	applymovement VAR_LAST_TALKED, Movement_AttendantFaceLeft
	waitmovement 0
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerApproachLinkRoomLeft
	waitmovement 0
	opendoor 9, 1
	waitdooranim
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerEnterLinkRoom
	waitmovement 0
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
	closedoor 9, 1
	waitdooranim
	release
	special SetCableClubWarp
	setwarp MAP_RECORD_CORNER, 255, 8, 9
	special DoCableClubWarp
	waitstate
	end

CableClub_EventScript_AbortLinkPlayerNotReady::
	special CloseLink
	msgbox CableClub_Text_NotSetUpForFarAwayRegion, MSGBOX_DEFAULT
	release
	end

CableClub_EventScript_AbortLinkOtherTrainerNotReady::
	special CloseLink
	msgbox CableClub_Text_OtherTrainerNotReady, MSGBOX_DEFAULT
	release
	end

CableClub_EventScript_AbortLinkConnectionError::
	special CloseLink
	msgbox Text_LinkErrorPleaseReset, MSGBOX_DEFAULT
	release
	end

CableClub_EventScript_AbortLinkSomeoneNotReady::
	special CloseLink
	msgbox Text_SomeoneIsNotReadyToLink, MSGBOX_DEFAULT
	release
	end

CableClub_EventScript_AbortLinkDifferentSelections::
	special CloseLink
	msgbox Text_PlayersMadeDifferentSelections, MSGBOX_DEFAULT
	release
	end

CableClub_EventScript_AbortLink::
	special CloseLink
	msgbox CableClub_Text_PleaseVisitAgain, MSGBOX_DEFAULT
	release
	end

CableClub_EventScript_AbortLinkIncorrectNumberOfParticipants::
	special CloseLink
	msgbox CableClub_Text_IncorrectNumberOfParticipants, MSGBOX_DEFAULT
	release
	end

CableClub_EventScript_AbortLinkPlayerHasBadEgg::
	special CloseLink
	msgbox CableClub_Text_YouHaveAMonThatCantBeTaken, MSGBOX_DEFAULT
	release
	end

CableClub_EventScript_AbortLinkForeignGame::
	special CloseLink
	msgbox CableClub_Text_CantMixWithJapaneseGame, MSGBOX_DEFAULT
	release
	end

CableClub_EventScript_CableClubAdjustements::
	msgbox gText_SorryCableClubAdjustments, MSGBOX_DEFAULT
	release
	end

CableClub_EventScript_NotReadyYet::
	msgbox gText_UndergoingAdjustments, MSGBOX_DEFAULT
	releaseall
	end

Movement_AttendantFaceDown:
	face_down
	step_end

Movement_AttendantFaceLeft:
	face_left
	step_end

Movement_PlayerExitLinkRoom:
	walk_down
	walk_down
	step_end

Movement_PlayerApproachLinkRoomLeft:
	walk_left
	walk_up
	walk_up
	step_end

Movement_PlayerEnterLinkRoom:
	walk_up
	step_end

Movement_PlayerFaceAttendantRight:
	face_right
	step_end

Movement_PlayerEnterMinigameRoom:
	walk_left
	walk_up
	walk_up
	walk_up
	step_end

EventScript_CableBoxResults::
	lockall
	setvar VAR_0x8004, 0
	special ShowLinkBattleRecords
	waitbuttonpress
	special RemoveRecordsWindow
	releaseall
	end

EventScript_BattleColosseum_2P_PlayerSpot0::
	setvar VAR_0x8005, 0
	special ColosseumPlayerSpotTriggered
	waitstate
	end

EventScript_BattleColosseum_2P_PlayerSpot1::
	setvar VAR_0x8005, 1
	special ColosseumPlayerSpotTriggered
	waitstate
	end

EventScript_BattleColosseum_4P_PlayerSpot0::
	fadescreen FADE_TO_BLACK
	special ChooseHalfPartyForBattle
	waitstate
	compare VAR_RESULT, 0
	goto_if_eq EventScript_BattleColosseum_4P_CancelSpotTrigger
	setvar VAR_0x8005, 0
	special ColosseumPlayerSpotTriggered
	waitstate
	end

EventScript_BattleColosseum_4P_PlayerSpot1::
	fadescreen FADE_TO_BLACK
	special ChooseHalfPartyForBattle
	waitstate
	compare VAR_RESULT, 0
	goto_if_eq EventScript_BattleColosseum_4P_CancelSpotTrigger
	setvar VAR_0x8005, 1
	special ColosseumPlayerSpotTriggered
	waitstate
	end

EventScript_BattleColosseum_4P_PlayerSpot2::
	fadescreen FADE_TO_BLACK
	special ChooseHalfPartyForBattle
	waitstate
	compare VAR_RESULT, 0
	goto_if_eq EventScript_BattleColosseum_4P_CancelSpotTrigger
	setvar VAR_0x8005, 2
	special ColosseumPlayerSpotTriggered
	waitstate
	end

EventScript_BattleColosseum_4P_PlayerSpot3::
	fadescreen FADE_TO_BLACK
	special ChooseHalfPartyForBattle
	waitstate
	compare VAR_RESULT, 0
	goto_if_eq EventScript_BattleColosseum_4P_CancelSpotTrigger
	setvar VAR_0x8005, 3
	special ColosseumPlayerSpotTriggered
	waitstate
	end

EventScript_BattleColosseum_4P_CancelSpotTrigger::
	end

EventScript_TradeCenter_Chair0::
	setvar VAR_0x8005, 0
	special PlayerEnteredTradeSeat
	waitstate
	end

EventScript_TradeCenter_Chair1::
	setvar VAR_0x8005, 1
	special PlayerEnteredTradeSeat
	waitstate
	end

/* Never used */
EventScript_TradeCenter_Chair2::
	setvar VAR_0x8005, 2
	special PlayerEnteredTradeSeat
	waitstate
	end

/* Never used */
EventScript_TradeCenter_Chair3::
	setvar VAR_0x8005, 3
	special PlayerEnteredTradeSeat
	waitstate
	end

@ VAR_TEMP_1 for below scripts set by ReceiveGiftItem
EventScript_RecordCenter_Spot0::
	setvar VAR_0x8005, 0
	special RecordMixingPlayerSpotTriggered
	waitstate
	compare VAR_TEMP_1, ITEM_NONE
	goto_if_ne RecordCorner_EventScript_ReceivedGiftItem
	end

EventScript_RecordCenter_Spot1::
	setvar VAR_0x8005, 1
	special RecordMixingPlayerSpotTriggered
	waitstate
	compare VAR_TEMP_1, ITEM_NONE
	goto_if_ne RecordCorner_EventScript_ReceivedGiftItem
	end

EventScript_RecordCenter_Spot2::
	setvar VAR_0x8005, 2
	special RecordMixingPlayerSpotTriggered
	waitstate
	compare VAR_TEMP_1, ITEM_NONE
	goto_if_ne RecordCorner_EventScript_ReceivedGiftItem
	end

EventScript_RecordCenter_Spot3::
	setvar VAR_0x8005, 3
	special RecordMixingPlayerSpotTriggered
	waitstate
	compare VAR_TEMP_1, ITEM_NONE
	goto_if_ne RecordCorner_EventScript_ReceivedGiftItem
	end

RecordCorner_EventScript_ReceivedGiftItem::
	bufferitemname 1, VAR_TEMP_1
	message RecordCorner_Text_PlayerSentOverOneX
	waitmessage
	waitbuttonpress
	releaseall
	end

CableClub_EventScript_ReadTrainerCard::
	msgbox CableClub_Text_GotToLookAtTrainerCard, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special Script_ShowLinkTrainerCard
	waitstate
	end

CableClub_EventScript_ReadTrainerCardColored::
	msgbox CableClub_Text_GotToLookAtColoredTrainerCard, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special Script_ShowLinkTrainerCard
	waitstate
	end

CableClub_EventScript_TooBusyToNotice::
	msgbox CableClub_Text_TooBusyToNotice, MSGBOX_DEFAULT
	closemessage
	end

BattleColosseum_2P_EventScript_Attendant::
	special Script_FacePlayer
	msgbox BattleColosseum_2P_Text_TakePlaceStartBattle, MSGBOX_DEFAULT
	special Script_ClearHeldMovement
	closemessage
	end

TradeCenter_EventScript_Attendant::
	special Script_FacePlayer
	msgbox TradeCenter_Text_TakeSeatStartTrade, MSGBOX_DEFAULT
	special Script_ClearHeldMovement
	closemessage
	end

RecordCorner_EventScript_Attendant::
	compare VAR_TEMP_0, 0
	goto_if_ne RecordCorner_EventScript_AlreadyMixed
	special Script_FacePlayer
	message RecordCorner_Text_TakeSeatAndWait
	waitmessage
	waitbuttonpress
	special Script_ClearHeldMovement
	closemessage
	end

RecordCorner_EventScript_AlreadyMixed::
	special Script_FacePlayer
	message RecordCorner_Text_ThanksForComing
	waitmessage
	waitbuttonpress
	special Script_ClearHeldMovement
	closemessage
	end

EventScript_ConfirmLeaveCableClubRoom::
	msgbox Text_TerminateLinkConfirmation, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_TerminateLink
	erasebox 0, 0, 29, 19
	releaseall
	end

EventScript_TerminateLink::
	messageautoscroll Text_TerminateLinkPleaseWait
	waitmessage
	special ExitLinkRoom
	end

EventScript_DoLinkRoomExit::
	special CleanupLinkRoomState
	special ReturnFromLinkRoom
	waitstate
	end

CableClub_EventScript_UnionRoomAttendant::
	lock
	faceplayer
	goto CableClub_EventScript_CableClubAdjustements
	end

CableClub_EventScript_CableClubAttendant::
	lock
	faceplayer
	goto CableClub_EventScript_CableClubAdjustements
	return

CableClub_EventScript_DirectCornerAttendant::
	lock
	faceplayer
	setvar VAR_FRONTIER_FACILITY, FACILITY_MULTI_OR_EREADER  @ Set preemptively for multi battles, ignored otherwise
	goto_if_unset FLAG_SYS_POKEDEX_GET, CableClub_EventScript_CableClubAdjustements
	specialvar VAR_RESULT, IsBadEggInParty
	compare VAR_RESULT, TRUE
	goto_if_eq CableClub_EventScript_AbortLinkPlayerHasBadEgg
	goto CableClub_EventScript_WelcomeToCableClub
	end

CableClub_EventScript_OpenDirectCornerBarrier::
	setmetatile 9, 2, METATILE_PokemonCenter_Floor_ShadowTop_Alt, 0
	setmetatile 9, 3, METATILE_PokemonCenter_Floor_Plain_Alt, 0
	return

CableClub_EventScript_CloseDirectCornerBarrier::
	setmetatile 9, 2, METATILE_PokemonCenter_Floor_ShadowTop, 1
	setmetatile 9, 3, METATILE_PokemonCenter_CounterBarrier, 1
	return
