.set LOCALID_STEVEN, 19
.set LOCALID_LATIAS, 22

Route118_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route118_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, Route118_OnLoad
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route118_OnFrame
	.byte 0

	@ State descriptions for VAR_ROUTE118_STATE
	@ 1: Met Steven and went to Southern Island.
	@ 2: Came back from Southern Island.
	@ 3: End of the Mega Event.

Route118_OnTransition:
	call GabbyAndTy_EventScript_UpdateLocation
	compare VAR_SHOULD_END_ABNORMAL_WEATHER, 1
	call_if_eq AbnormalWeather_EventScript_HideMapNamePopup
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_EAST
	call_if_eq AbnormalWeather_StartGroudonWeather
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_WEST
	call_if_eq AbnormalWeather_StartGroudonWeather
	call_if_var_eq VAR_ROUTE118_STATE, 2, Route118_EventScript_UpdateSteven
	end

Route118_EventScript_UpdateSteven:
	setobjectxyperm LOCALID_STEVEN, 45, 10
	return

Route118_OnLoad:
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_EAST
	call_if_eq AbnormalWeather_EventScript_PlaceTilesRoute118East
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_WEST
	call_if_eq AbnormalWeather_EventScript_PlaceTilesRoute118West
	end

Route118_OnFrame:
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
	map_script_2 VAR_ROUTE118_STATE, 2, Route118_EventScript_MegaEventAftermath
	.2byte 0

Route118_EventScript_MegaEventAftermath:
	setfieldeffectargument 0, 1
	dofieldeffect FLDEFF_NPCFLY_OUT
	delay 15
	addobject LOCALID_STEVEN
	turnobject LOCALID_STEVEN, DIR_SOUTH
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE118
	waitfieldeffect FLDEFF_NPCFLY_OUT
	msgbox Route118_Text_StevenThanksSkarmory, MSGBOX_DEFAULT
	turnobject LOCALID_STEVEN, DIR_WEST
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	msgbox Route118_Text_StevenGivesThePlayerAPresent, MSGBOX_DEFAULT
	closemessage
	receiveitem ITEM_MEGA_BRACELET, 1
	closemessage
	delay 30
	msgbox Route118_Text_StevenSpeaks, MSGBOX_DEFAULT
	closemessage
	turnobject LOCALID_STEVEN, DIR_SOUTH
	msgbox Route118_Text_StevenSpeaksAgain, MSGBOX_DEFAULT
	closemessage
	turnobject LOCALID_STEVEN, DIR_WEST
	msgbox Route118_Text_StevenSpeaksOneMoreTimeBeforeLeaving, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_STEVEN, Route118_Movement_StevenWalksAway
	waitmovement 0
	removeobject LOCALID_STEVEN
	clearflag FLAG_SPAWN_INVISIBLE_PLAYER
	setvar VAR_ROUTE118_STATE, 3
	end

Route118_EventScript_GoodRodFisherman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_GOOD_ROD, Route118_EventScript_ReceivedGoodRod
	msgbox Route118_Text_YouAgreeGoodRodIsGood, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Route118_EventScript_ReceiveGoodRod
	compare VAR_RESULT, NO
	goto_if_eq Route118_EventScript_DeclineGoodRod
	end

Route118_EventScript_ReceiveGoodRod::
	msgbox Route118_Text_IdenticalMindsTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_GOOD_ROD
	setflag FLAG_RECEIVED_GOOD_ROD
	msgbox Route118_Text_TryYourLuckFishing, MSGBOX_DEFAULT
	release
	end

Route118_EventScript_DeclineGoodRod::
	msgbox Route118_Text_DontYouLikeToFish, MSGBOX_DEFAULT
	release
	end

Route118_EventScript_ReceivedGoodRod::
	msgbox Route118_Text_TryCatchingMonWithGoodRod, MSGBOX_DEFAULT
	release
	end

Route118_EventScript_Girl::
	msgbox Route118_Text_CanCrossRiversWithSurf, MSGBOX_NPC
	end

Route118_EventScript_RouteSignMauville::
	msgbox Route118_Text_RouteSignMauville, MSGBOX_SIGN
	end

Route118_EventScript_RouteSign119::
	msgbox Route118_Text_RouteSign119, MSGBOX_SIGN
	end

Route118_EventScript_StevenTrigger::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	spawnmovecamera Route118_Movement_CameraToSteven
	msgbox Route118_Text_StevenThinks, MSGBOX_DEFAULT
	closemessage
	delay 30
	applymovement LOCALID_STEVEN, Common_Movement_FaceDown
	waitmovement 0
	delay 30
	playse SE_PIN
	applymovement LOCALID_STEVEN, Common_Movement_ExclamationMark
	waitmovement 0
	despawnmovecamera Route118_Movement_CameraToPlayer
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	goto_if_var_eq VAR_TEMP_1, 43, Route118_EventScript_StevenTrigger0
	goto_if_var_eq VAR_TEMP_1, 44, Route118_EventScript_StevenTrigger1
	goto_if_var_eq VAR_TEMP_1, 45, Route118_EventScript_StevenTrigger2
	end

Route118_EventScript_StevenTrigger0::
	lockall
	setvar VAR_0x8008, 0
	applymovement LOCALID_STEVEN, Route118_Movement_StevenApproachLedge0
	waitmovement 0
	goto Route118_EventScript_Steven
	end

Route118_EventScript_StevenTrigger1::
	lockall
	setvar VAR_0x8008, 1
	goto Route118_EventScript_Steven
	end

Route118_EventScript_StevenTrigger2::
	lockall
	setvar VAR_0x8008, 2
	applymovement LOCALID_STEVEN, Route118_Movement_StevenApproachLedge2
	waitmovement 0
	goto Route118_EventScript_Steven
	end

Route118_EventScript_Steven::
	playse SE_LEDGE
	applymovement LOCALID_STEVEN, Route118_Movement_StevenJumpLedge
	waitmovement 0
	delay 30
	msgbox Route118_Text_StevenQuestions, MSGBOX_DEFAULT
	closemessage
	call Route118_EventScript_StevenExit
	delay 30
	playse SE_PIN
	applymovement LOCALID_STEVEN, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_STEVEN, Common_Movement_FaceDown
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	playmoncry SPECIES_LATIAS, 0
	waitmoncry
	delay 30
	msgbox Route118_Text_StevenSurprised, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	playse SE_M_GUST
	addobject LOCALID_LATIAS
	delay 90
	stopse
	fadescreen FADE_FROM_BLACK
	call_if_var_eq VAR_0x8008, 0, Route118_EventScript_StevenGreetsLatias0
	call_if_var_eq VAR_0x8008, 1, Route118_EventScript_StevenGreetsLatias0
	call_if_var_eq VAR_0x8008, 2, Route118_EventScript_StevenGreetsLatias2
	msgbox Route118_Text_StevenGreetsLatias, MSGBOX_DEFAULT
	closemessage
	playmoncry SPECIES_LATIAS, 0
	applymovement LOCALID_LATIAS, Route118_Movement_LatiWalkInPlaceFastDown
	waitmovement 0
	waitmoncry
	msgbox Route118_Text_LatiGrowls, MSGBOX_DEFAULT
	closemessage
	delay 30
	msgbox Route118_Text_StevenGuessesLatiasIntention, MSGBOX_DEFAULT
	closemessage
	playmoncry SPECIES_LATIAS, 0
	applymovement LOCALID_LATIAS, Route118_Movement_LatiWalkInPlaceFastDown
	waitmovement 0
	waitmoncry
	msgbox Route118_Text_LatiGrowlsAgain, MSGBOX_DEFAULT
	closemessage
	delay 30
	applymovement LOCALID_STEVEN, Common_Movement_FaceLeft
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	msgbox Route118_Text_StevenAndPlayerDepart, MSGBOX_YESNO
	call_if_var_eq VAR_RESULT, NO, Route118_EventScript_StevenAndPlayerDontDepart
	setvar VAR_ROUTE118_STATE, 1
	warp MAP_SOUTHERN_ISLAND_EXTERIOR, 255, 15, 21
	releaseall
	end

Route118_EventScript_StevenExit::
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerWatchStevenExit
	applymovement LOCALID_STEVEN, Route118_Movement_StevenExit
	waitmovement 0
	return

Route118_EventScript_StevenGreetsLatias0:
	applymovement LOCALID_STEVEN, Route118_Movement_StevenGreetsLatias0
	waitmovement 0
	return

Route118_EventScript_StevenGreetsLatias2:
	applymovement LOCALID_STEVEN, Route118_Movement_StevenGreetsLatias2
	waitmovement 0
	return

Route118_EventScript_StevenAndPlayerDontDepart:
	msgbox Route118_Text_StevenAndPlayerDepart2, MSGBOX_YESNO
	call_if_var_eq VAR_RESULT, NO, Route118_EventScript_StevenAndPlayerDontDepart2
	return

Route118_EventScript_StevenAndPlayerDontDepart2:
	msgbox Route118_Text_StevenAndPlayerDepart3, MSGBOX_YESNO
	goto_if_var_eq VAR_RESULT, NO, Route118_EventScript_BadEnd2
	return

Route118_EventScript_BadEnd2:
	closemessage
	delay 30
	fadescreenspeed FADE_TO_BLACK, 16
	special Script_FadeOutMapMusic
	waitstate
	playse SE_FAILURE
	waitse
	delay 60
	msgbox Route118_Text_BadEnd2, MSGBOX_DEFAULT
	closemessage
	delay 180
	special DoSoftReset
	end

Route118_Movement_StevenWalksAway:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Route118_Movement_StevenGreetsLatias0:
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

Route118_Movement_StevenGreetsLatias2:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

Route118_Movement_LatiWalkInPlaceFastDown::
	walk_in_place_fast_down
	walk_in_place_fast_down
	walk_in_place_fast_down
	walk_in_place_fast_down
	walk_in_place_fast_down
	step_end

Route118_Movement_PlayerWatchStevenExit:
	delay_16
	walk_in_place_fastest_right
	step_end

Route118_Movement_CameraToSteven:
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	step_end

Route118_Movement_CameraToPlayer:
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	step_end

Route118_Movement_StevenApproachLedge0:
	walk_left
	step_end

Route118_Movement_StevenApproachLedge2:
	walk_right
	step_end

Route118_Movement_StevenJumpLedge:
	jump_2_down
	delay_16
	walk_down
	step_end

Route118_Movement_StevenExit:
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Route118_EventScript_Rose::
	trainerbattle_single TRAINER_ROSE_1, Route118_Text_RoseIntro, Route118_Text_RoseDefeat, Route118_EventScript_RegisterRose
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, TRUE
	goto_if_eq Route118_EventScript_RematchRose
	msgbox Route118_Text_RosePostBattle, MSGBOX_DEFAULT
	release
	end

Route118_EventScript_RegisterRose::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route118_Text_RoseRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_ROSE_1
	release
	end

Route118_EventScript_RematchRose::
	trainerbattle_rematch TRAINER_ROSE_1, Route118_Text_RoseRematchIntro, Route118_Text_RoseRematchDefeat
	msgbox Route118_Text_RosePostRematch, MSGBOX_AUTOCLOSE
	end

Route118_EventScript_Barny::
	trainerbattle_single TRAINER_BARNY, Route118_Text_BarnyIntro, Route118_Text_BarnyDefeat
	msgbox Route118_Text_BarnyPostBattle, MSGBOX_AUTOCLOSE
	end

Route118_EventScript_Wade::
	trainerbattle_single TRAINER_WADE, Route118_Text_WadeIntro, Route118_Text_WadeDefeat
	msgbox Route118_Text_WadePostBattle, MSGBOX_AUTOCLOSE
	end

Route118_EventScript_Dalton::
	trainerbattle_single TRAINER_DALTON_1, Route118_Text_DaltonIntro, Route118_Text_DaltonDefeat, Route118_EventScript_RegisterDalton
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, TRUE
	goto_if_eq Route118_EventScript_RematchDalton
	msgbox Route118_Text_DaltonPostBattle, MSGBOX_DEFAULT
	release
	end

Route118_EventScript_RegisterDalton::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route118_Text_DaltonRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_DALTON_1
	release
	end

Route118_EventScript_RematchDalton::
	trainerbattle_rematch TRAINER_DALTON_1, Route118_Text_DaltonRematchIntro, Route118_Text_DaltonRematchDefeat
	msgbox Route118_Text_DaltonPostRematch, MSGBOX_AUTOCLOSE
	end

Route118_EventScript_Perry::
	trainerbattle_single TRAINER_PERRY, Route118_Text_PerryIntro, Route118_Text_PerryDefeat
	msgbox Route118_Text_PerryPostBattle, MSGBOX_AUTOCLOSE
	end

Route118_EventScript_Chester::
	trainerbattle_single TRAINER_CHESTER, Route118_Text_ChesterIntro, Route118_Text_ChesterDefeat
	msgbox Route118_Text_ChesterPostBattle, MSGBOX_AUTOCLOSE
	end

Route118_EventScript_Deandre::
	trainerbattle_single TRAINER_DEANDRE, Route118_Text_DeandreIntro, Route118_Text_DeandreDefeat
	msgbox Route118_Text_DeandrePostBattle, MSGBOX_AUTOCLOSE
	end

Route118_Text_StevenThinks:
	.string "Hmm… what should I do with it…$"

Route118_Text_StevenQuestions:
	.string "STEVEN: Oh, hey. Aren't you {PLAYER}?\p"
	.string "It's me, STEVEN!\n"
	.string "We met in the cave near DEWFORD.\p"
	.string "Say, how many kinds of POKéMON have\n"
	.string "you seen since we last met?\p"
	.string "There are many, many different kinds\n"
	.string "of POKéMON in this wide world.\p"
	.string "There's POKéMON of different types,\n"
	.string "colors, personalities, etc.\p"
	.string "One can choose to raise only their\n"
	.string "favorites, and that's fine.\p"
	.string "Raising all different sorts of\n"
	.string "POKéMON is also fun though.\p"
	.string "You seem to be doing well in your\n"
	.string "journey. Five badges, huh…\p"
	.string "As an adept POKéMON TRAINER,\n"
	.string "what do you think, {PLAYER}?\p"
	.string "Of course, I know it's none\n"
	.string "of my business.\p"
	.string "I should get going. It would be\n"
	.string "nice if we met again somewhere.$"

Route118_Text_StevenSurprised:
	.string "STEVEN: What the…$"

Route118_Text_StevenGreetsLatias:
	.string "LATIAS?\n"
	.string "What are you doing here?$"

Route118_Text_LatiGrowls::
	.string "Hyaahh!$"

Route118_Text_StevenGuessesLatiasIntention:
	.string "Do you want us to soar\n"
	.string "somewhere with you?$"

Route118_Text_LatiGrowlsAgain::
	.string "Hyah!$"

Route118_Text_StevenAndPlayerDepart:
	.string "{PLAYER}, I believe LATIAS\n"
	.string "sought us out for a reason.\p"
	.string "We should go and see what this\n"
	.string "is all about, don't you agree?$"

Route118_Text_StevenAndPlayerDepart2:
	.string "What are you saying?\n"
	.string "Are you serious?\p"
	.string "Do you really not want to know\n"
	.string "what LATIAS wants from us?$"

Route118_Text_StevenAndPlayerDepart3:
	.string "Okay, one last time.\p"
	.string "Do you really not want to\n"
	.string "come with us, {PLAYER}?$"

Route118_Text_BadEnd2:
	.string "And so, the adventure of {PLAYER}\n"
	.string "came to an end rather prematurely.\p"
	.string "{PLAYER} chose not to go\n"
	.string "with STEVEN and LATIAS.\p"
	.string "Instead, they turned back and\n"
	.string "walked back to LITTLEROOT TOWN,\l"
	.string "and forgot about being a TRAINER.\p"
	.string "LATIAS wanted {PLAYER} and STEVEN\n"
	.string "to deal with some TEAM MAGMA grunts.\p"
	.string "TEAM MAGMA wanted to uncover the\n"
	.string "secret behind Mega Evolution.\p"
	.string "For that, they intended to steal a\n"
	.string "LATIOSITE carried by LATIOS.\p"
	.string "Fortunately, STEVEN made quick work\n"
	.string "of them, and peace was mantained in\l"
	.string "HOENN as he eventually took care of\l"
	.string "the menace that were TEAM MAGMA and\l"
	.string "TEAM AQUA.$"

Route118_Text_StevenThanksSkarmory:
	.string "STEVEN: Thank you SKARMORY.$"

Route118_Text_StevenGivesThePlayerAPresent:
	.string "I never expected something like\n"
	.string "this detour we just had to happen.\p"
	.string "To be honest, it was fun to fight\n"
	.string "side by side with you, {PLAYER}.\p"
	.string "I have no use for this, but now I\n"
	.string "know it'll be better off with you.\p"
	.string "Here, please take it.$"

Route118_Text_StevenSpeaks:
	.string "I talked to you about a tale that\n"
	.string "involves Mega Evolution before.\p"
	.string "That is a Mega Bracelet.\n"
	.string "It has a Key Stone embedded to it.\p"
	.string "When a POKéMON holds a Mega Stone of\n"
	.string "their own, the Key Stone will react\l"
	.string "to the Stone, letting a POKéMON get\l"
	.string "a huge boost in terms of power.\p"
	.string "That phenomenon is what is called\n"
	.string "a Mega Evolution.\p"
	.string "Mega Evolution is fairly unknown.\n"
	.string "It's shrouded in mystery.$"

Route118_Text_StevenSpeaksAgain:
	.string "What is a Mega Stone?\n"
	.string "What is a Key Stone?\p"
	.string "How do they allow a Pokémon to\n"
	.string "manifest this sort of power?\p"
	.string "Hopefully, one day we'll find\n"
	.string "the answer to these questions.$"

Route118_Text_StevenSpeaksOneMoreTimeBeforeLeaving:
	.string "I got a good idea of your strength,\n"
	.string "I'm sure you'll make it through\l"
	.string "ROUTE 118 and what's beyond that.\p"
	.string "I can't wait to see how stronger\n"
	.string "you will get. Until then, {PLAYER}.$"

Route118_Text_YouAgreeGoodRodIsGood:
	.string "Hmm!\n"
	.string "A GOOD ROD is really good!\p"
	.string "Wouldn't you agree?$"

Route118_Text_IdenticalMindsTakeThis:
	.string "Hmm!\n"
	.string "We're of identical minds!\p"
	.string "Hmm!\n"
	.string "Take this GOOD ROD!$"

Route118_Text_TryYourLuckFishing:
	.string "Wherever there's water, try your luck\n"
	.string "at fishing.$"

Route118_Text_DontYouLikeToFish:
	.string "Don't you like to fish?$"

Route118_Text_TryCatchingMonWithGoodRod:
	.string "Try catching all sorts of POKéMON\n"
	.string "with your GOOD ROD.$"

Route118_Text_CanCrossRiversWithSurf:
	.string "Even if there isn't a boat, you can\n"
	.string "cross rivers and the sea if you have\l"
	.string "a POKéMON that knows SURF.\p"
	.string "POKéMON can be counted on to do so\n"
	.string "much!$"

Route118_Text_RouteSignMauville:
	.string "ROUTE 118\n"
	.string "{LEFT_ARROW} MAUVILLE CITY$"

Route118_Text_RouteSign119:
	.string "ROUTE 118\n"
	.string "{UP_ARROW} ROUTE 119$"
