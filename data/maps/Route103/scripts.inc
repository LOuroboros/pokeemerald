.set LOCALID_RIVAL, 2

Route103_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route103_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, Route103_OnLoad
	.byte 0

	@ State descriptions for VAR_ROUTE103_STATE
	@ 1: Player is on their way to meet rival on Route 103 (postgame)
	@ 2: Defeated rival on Route 103 (postgame)

Route103_OnTransition:
	call Common_EventScript_SetupRivalGfxId
	call ProfBirch_EventScript_UpdateLocation
	end

Route103_OnLoad:
	call_if_set FLAG_SYS_GAME_CLEAR, Route103_EventScript_OpenAlteringCave
	end

Route103_EventScript_OpenAlteringCave::
	setmetatile 45, 5, METATILE_General_CaveEntrance_Top, 1
	setmetatile 45, 6, METATILE_General_CaveEntrance_Bottom, 0
	return

Route103_EventScript_Rival::
	lockall
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Route103_EventScript_RivalMay
	compare VAR_RESULT, FEMALE
	goto_if_eq Route103_EventScript_RivalBrendan
	end

Route103_EventScript_RivalMay::
	compare VAR_BIRCH_LAB_STATE, 6
	goto_if_eq Route103_EventScript_RivalMayPostGame
	msgbox Route103_Text_MayRoute103Pokemon, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_ENCOUNTER_MAY, TRUE
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	msgbox Route103_Text_MayLetsBattle, MSGBOX_DEFAULT
	switch VAR_STARTER_MON
	case 0, Route103_EventScript_StartMayBattleTreecko
	case 1, Route103_EventScript_StartMayBattleTorchic
	case 2, Route103_EventScript_StartMayBattleMudkip
	end

Route103_EventScript_RivalBrendan::
	compare VAR_BIRCH_LAB_STATE, 6
	goto_if_eq Route103_EventScript_RivalBrendanPostGame
	msgbox Route103_Text_BrendanRoute103Pokemon, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	msgbox Route103_Text_BrendanLetsBattle, MSGBOX_DEFAULT
	switch VAR_STARTER_MON
	case 0, Route103_EventScript_StartBrendanBattleTreecko
	case 1, Route103_EventScript_StartBrendanBattleTorchic
	case 2, Route103_EventScript_StartBrendanBattleMudkip
	end

Route103_EventScript_StartMayBattleTreecko::
	setvar VAR_MUGSHOT_ID, MUGSHOT_MAY
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, Route103_Text_MayDefeated
	goto Route103_EventScript_AfterMayBattle
	end

Route103_EventScript_StartMayBattleTorchic::
	setvar VAR_MUGSHOT_ID, MUGSHOT_MAY
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TORCHIC, Route103_Text_MayDefeated
	goto Route103_EventScript_AfterMayBattle
	end

Route103_EventScript_StartMayBattleMudkip::
	setvar VAR_MUGSHOT_ID, MUGSHOT_MAY
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_MUDKIP, Route103_Text_MayDefeated
	goto Route103_EventScript_AfterMayBattle
	end

Route103_EventScript_StartBrendanBattleTreecko::
	setvar VAR_MUGSHOT_ID, MUGSHOT_BRENDAN
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, Route103_Text_BrendanDefeated
	goto Route103_EventScript_AfterBrendanBattle
	end

Route103_EventScript_StartBrendanBattleTorchic::
	setvar VAR_MUGSHOT_ID, MUGSHOT_BRENDAN
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TORCHIC, Route103_Text_BrendanDefeated
	goto Route103_EventScript_AfterBrendanBattle
	end

Route103_EventScript_StartBrendanBattleMudkip::
	setvar VAR_MUGSHOT_ID, MUGSHOT_BRENDAN
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, Route103_Text_BrendanDefeated
	goto Route103_EventScript_AfterBrendanBattle
	end

Route103_EventScript_AfterMayBattle::
	msgbox Route103_Text_MayTimeToHeadBack, MSGBOX_DEFAULT
	goto Route103_EventScript_RivalExit
	end

Route103_EventScript_AfterBrendanBattle::
	msgbox Route103_Text_BrendanTimeToHeadBack, MSGBOX_DEFAULT
	goto Route103_EventScript_RivalExit
	end

Route103_EventScript_RivalExit::
	closemessage
	switch VAR_FACING
	case DIR_SOUTH, Route103_EventScript_RivalExitFacingSouth
	case DIR_NORTH, Route103_EventScript_RivalExitFacingNorth
	case DIR_WEST, Route103_EventScript_RivalExitFacingEastOrWest
	case DIR_EAST, Route103_EventScript_RivalExitFacingEastOrWest
	end

Route103_EventScript_RivalExitFacingNorth::
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingNorth
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExitFacingNorth1
	waitmovement 0
	playse SE_LEDGE
	applymovement LOCALID_RIVAL, Route103_EventScript_RivalExitFacingNorth2
	waitmovement 0
	goto Route103_EventScript_RivalEnd
	end

Route103_EventScript_RivalExitFacingEastOrWest::
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingEastOrWest
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit1
	waitmovement 0
	playse SE_LEDGE
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit2
	waitmovement 0
	goto Route103_EventScript_RivalEnd
	end

Route103_EventScript_RivalExitFacingSouth::
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit1
	waitmovement 0
	playse SE_LEDGE
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit2
	waitmovement 0
	goto Route103_EventScript_RivalEnd
	end

Route103_EventScript_RivalEnd::
	compare VAR_ROUTE103_STATE, 2
	goto_if_eq Route103_EventScript_RivalEndPostgame
	removeobject LOCALID_RIVAL
	setvar VAR_BIRCH_LAB_STATE, 4
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
	setvar VAR_OLDALE_RIVAL_STATE, 1
	clearflag FLAG_HIDE_OLDALE_TOWN_RIVAL
	savebgm MUS_DUMMY
	fadedefaultbgm
	releaseall
	end

Route103_EventScript_RivalEndPostgame:
	removeobject LOCALID_RIVAL
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
	savebgm MUS_DUMMY
	fadedefaultbgm
	releaseall
	end

Route103_Movement_RivalExitFacingNorth1:
	walk_left
	walk_down
	step_end

Route103_EventScript_RivalExitFacingNorth2:
	jump_2_down
	delay_16
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route103_Movement_WatchRivalExitFacingNorth:
	delay_16
	delay_4
	walk_in_place_fastest_left
	delay_16
	walk_in_place_fastest_down
	step_end

Route103_Movement_RivalExit1:
	walk_down
	step_end

Route103_Movement_RivalExit2:
	jump_2_down
	delay_16
	walk_down
	walk_down
	walk_down
	step_end

Route103_Movement_WatchRivalExitFacingEastOrWest:
	delay_16
	walk_in_place_fastest_down
	step_end

Route103_EventScript_Boy::
	msgbox Route103_Text_ShouldHaveBroughtPotion, MSGBOX_NPC
	end

Route103_EventScript_Man::
	msgbox Route103_Text_ShortcutToOldale, MSGBOX_NPC
	end

Route103_EventScript_RouteSign::
	msgbox Route103_Text_RouteSign, MSGBOX_SIGN
	end

Route103_EventScript_Daisy::
	trainerbattle_single TRAINER_DAISY, Route103_Text_DaisyIntro, Route103_Text_DaisyDefeated
	msgbox Route103_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Amy::
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyIntro, Route103_Text_AmyDefeated, Route103_Text_AmyNotEnoughPokemon, Route102_EventScript_AmyRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, TRUE
	goto_if_eq Route102_EventScript_AmyRematch
	msgbox Route103_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_AmyRegisterMatchCallAfterBattle::
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_AMY_AND_LIV_1
	release
	end

Route102_EventScript_AmyRematch::
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyRematchIntro, Route103_Text_AmyRematchDefeated, Route103_Text_AmyRematchNotEnoughPokemon
	msgbox Route103_Text_AmyRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Liv::
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivIntro, Route103_Text_LivDefeated, Route103_Text_LivNotEnoughPokemon, Route102_EventScript_LivRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, TRUE
	goto_if_eq Route102_EventScript_LivRematch
	msgbox Route103_Text_LivPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_LivRegisterMatchCallAfterBattle::
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_AMY_AND_LIV_1
	release
	end

Route102_EventScript_LivRematch::
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivRematchIntro, Route103_Text_LivRematchDefeated, Route103_Text_LivRematchNotEnoughPokemon
	msgbox Route103_Text_LivRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Andrew::
	trainerbattle_single TRAINER_ANDREW, Route103_Text_AndrewIntro, Route103_Text_AndrewDefeated
	msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Miguel::
	trainerbattle_single TRAINER_MIGUEL_1, Route103_Text_MiguelIntro, Route103_Text_MiguelDefeated, Route102_EventScript_MiguelRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, TRUE
	goto_if_eq Route103_EventScript_MiguelRematch
	msgbox Route103_Text_MiguelPostBattle, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_MiguelRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route103_Text_MiguelRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_MIGUEL_1
	release
	end

Route103_EventScript_MiguelRematch::
	trainerbattle_rematch TRAINER_MIGUEL_1, Route103_Text_MiguelRematchIntro, Route103_Text_MiguelRematchDefeated
	msgbox Route103_Text_MiguelRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Marcos::
	trainerbattle_single TRAINER_MARCOS, Route103_Text_MarcosIntro, Route103_Text_MarcosDefeated
	msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Rhett::
	trainerbattle_single TRAINER_RHETT, Route103_Text_RhettIntro, Route103_Text_RhettDefeated
	msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Pete::
	trainerbattle_single TRAINER_PETE, Route103_Text_PeteIntro, Route103_Text_PeteDefeated
	msgbox Route103_Text_PetePostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Isabelle::
	trainerbattle_single TRAINER_ISABELLE, Route103_Text_IsabelleIntro, Route103_Text_IsabelleDefeated
	msgbox Route103_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_RivalMayPostGame:
	msgbox Route103_Text_MayRoute103Postgame, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_ENCOUNTER_MAY, TRUE
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	msgbox Route103_Text_MayLetsBattlePostgame, MSGBOX_DEFAULT
	switch VAR_STARTER_MON
	case 0, Route103_EventScript_StartMayBattleTreeckoPostgame
	case 1, Route103_EventScript_StartMayBattleTorchicPostgame
	case 2, Route103_EventScript_StartMayBattleMudkipPostgame
	end

Route103_EventScript_RivalBrendanPostGame:
	msgbox Route103_Text_BrendanRoute103Postgame, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	msgbox Route103_Text_BrendanLetsBattlePostgame, MSGBOX_DEFAULT
	switch VAR_STARTER_MON
	case 0, Route103_EventScript_StartBrendanBattleTreeckoPostgame
	case 1, Route103_EventScript_StartBrendanBattleTorchicPostgame
	case 2, Route103_EventScript_StartBrendanBattleMudkipPostgame
	end

Route103_EventScript_StartMayBattleTreeckoPostgame::
	setvar VAR_MUGSHOT_ID, MUGSHOT_MAY
	trainerbattle_no_intro TRAINER_MAY_POSTGAME_TREECKO, Route103_Text_MayDefeatedPostgame
	goto Route103_EventScript_AfterMayBattlePostgame
	end

Route103_EventScript_StartMayBattleTorchicPostgame::
	setvar VAR_MUGSHOT_ID, MUGSHOT_MAY
	trainerbattle_no_intro TRAINER_MAY_POSTGAME_TORCHIC, Route103_Text_MayDefeatedPostgame
	goto Route103_EventScript_AfterMayBattlePostgame
	end

Route103_EventScript_StartMayBattleMudkipPostgame::
	setvar VAR_MUGSHOT_ID, MUGSHOT_MAY
	trainerbattle_no_intro TRAINER_MAY_POSTGAME_MUDKIP, Route103_Text_MayDefeatedPostgame
	goto Route103_EventScript_AfterMayBattlePostgame
	end

Route103_EventScript_AfterMayBattlePostgame::
	msgbox Route103_Text_MayTimeToHeadBackForGood, MSGBOX_DEFAULT
	call Route103_EventScript_UpdateFlagsAndVarsAfterPostgameRivalBattle
	goto Route103_EventScript_RivalExit
	end

Route103_EventScript_StartBrendanBattleTreeckoPostgame::
	setvar VAR_MUGSHOT_ID, MUGSHOT_BRENDAN
	trainerbattle_no_intro TRAINER_BRENDAN_POSTGAME_TREECKO, Route103_Text_BrendanDefeatedPostgame
	goto Route103_EventScript_AfterBrendanBattlePostgame
	end

Route103_EventScript_StartBrendanBattleTorchicPostgame::
	setvar VAR_MUGSHOT_ID, MUGSHOT_BRENDAN
	trainerbattle_no_intro TRAINER_BRENDAN_POSTGAME_TORCHIC, Route103_Text_BrendanDefeatedPostgame
	goto Route103_EventScript_AfterBrendanBattlePostgame
	end

Route103_EventScript_StartBrendanBattleMudkipPostgame::
	setvar VAR_MUGSHOT_ID, MUGSHOT_BRENDAN
	trainerbattle_no_intro TRAINER_BRENDAN_POSTGAME_MUDKIP, Route103_Text_BrendanDefeatedPostgame
	goto Route103_EventScript_AfterBrendanBattlePostgame
	end

Route103_EventScript_AfterBrendanBattlePostgame::
	msgbox Route103_Text_BrendanTimeToHeadBackForGood, MSGBOX_DEFAULT
	call Route103_EventScript_UpdateFlagsAndVarsAfterPostgameRivalBattle
	goto Route103_EventScript_RivalExit
	end

Route103_EventScript_UpdateFlagsAndVarsAfterPostgameRivalBattle:
	setvar VAR_ROUTE103_STATE, 2
	setflag FLAG_DEFEATED_RIVAL_POSTGAME
	setvar VAR_SKY_PILLAR_STATE, 4
	setvar VAR_MT_PYRE_STATE, 2
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE
	clearflag FLAG_HIDE_METEOR_FALLS_STEVEN
	return

Route103_Text_MayRoute103Pokemon:
	.string "{RIVAL}: Let's see… The POKéMON found\n"
	.string "on ROUTE 103 include…$"

Route103_Text_MayLetsBattle:
	.string "Oh, hi, {PLAYER}!\p"
	.string "…Oh, I see, my dad gave you\n"
	.string "a POKéMON as a gift.\p"
	.string "Since we're here, let's have a quick\n"
	.string "battle!\p"
	.string "I'll give you a taste of what being\n"
	.string "a TRAINER is like.$"

Route103_Text_MayDefeated:
	.string "Wow! That's great!\n"
	.string "{PLAYER}, you're pretty good!$"

Route103_Text_MayTimeToHeadBack:
	.string "{RIVAL}: I think I know why my dad has\n"
	.string "an eye out for you now.\p"
	.string "I mean, you just got that POKéMON,\n"
	.string "but it already likes you.\p"
	.string "You might be able to befriend any\n"
	.string "kind of POKéMON easily.\p"
	.string "Well, it's time to head back to\n"
	.string "the LAB.$"

Route103_Text_BrendanRoute103Pokemon:
	.string "{RIVAL}: Okay, so it's this one and\n"
	.string "that one that live on ROUTE 103…$"

Route103_Text_BrendanLetsBattle:
	.string "Hey, it's {PLAYER}!\p"
	.string "…Oh, yeah, Dad gave you a POKéMON.\p"
	.string "Since we're here, how about a little\n"
	.string "battle?\p"
	.string "I'll teach you what being a TRAINER's\n"
	.string "about!$"

Route103_Text_BrendanDefeated:
	.string "Huh, {PLAYER}, you're not too shabby.$"

Route103_Text_BrendanTimeToHeadBack:
	.string "{RIVAL}: I think I get it.\n"
	.string "I think I know why my dad has his eye\l"
	.string "out for you now.\p"
	.string "Look, your POKéMON already likes you,\n"
	.string "even though you just got it.\p"
	.string "{PLAYER}, I get the feeling that you\n"
	.string "could befriend any POKéMON with ease.\p"
	.string "We should head back to the LAB.$"

Route103_Text_ShouldHaveBroughtPotion:
	.string "My POKéMON is staggeringly tired…\n"
	.string "I should have brought a POTION…$"

Route103_Text_ShortcutToOldale:
	.string "If you cross the sea from here,\n"
	.string "it'll be a shortcut to OLDALE TOWN.\p"
	.string "Fufufu, that's useful, isn't it?$"

Route103_Text_RouteSign:
	.string "ROUTE 103\n"
	.string "{DOWN_ARROW} OLDALE TOWN$"

Route103_Text_MayRoute103Postgame:
	.string "{RIVAL}: How strange… this POKéMON\n"
	.string "shouldn't normally appear here…$"

Route103_Text_MayLetsBattlePostgame:
	.string "Oh, {PLAYER}, you're here!\p"
	.string "I'm sorry. I was distracted,\n"
	.string "looking at this KRICKETOT.\p"
	.string "It is strange to see one here\n"
	.string "in the HOENN Region, isn't it?\p"
	.string "Nevermind that. I told you there\n"
	.string "was something I had to ask of you.\p"
	.string "Can we have a POKéMON battle?\n"
	.string "It's been so long since our last.\p"
	.string "I'd like to learn how much have we\n"
	.string "grown up during our journeys.\p"
	.string "You better not hold yourself back!$"

Route103_Text_MayDefeatedPostgame:
	.string "I guess that's that.\n"
	.string "You're something else, {PLAYER}!\p"
	.string "Truly, you live up to your title\n"
	.string "as HOENN's Champion.$"

Route103_Text_MayTimeToHeadBackForGood:
	.string "Thank you, {PLAYER}. That was a\n"
	.string "great battle. I have no regrets.\p"
	.string "It feels like a lot of time passed\n"
	.string "since we fought here, in ROUTE 103.\p"
	.string "You were just starting as a POKéMON\n"
	.string "TRAINER, remember?\p"
	.string "We've been through many adventures\n"
	.string "and conquered many challenges.\p"
	.string "I had a lot of fun in my journey,\n"
	.string "and it's partly thanks to you.\p"
	.string "I think I'm ready to take a good\n"
	.string "break. DAD needs help with his\l"
	.string "work in the LAB too.\p"
	.string "If you feel tired, don't hesitate\n"
	.string "to stop by LITTLEROOT TOWN!\p"
	.string "You're always welcomed in the LAB,\n"
	.string "and I'm sure that your mother would\l"
	.string "appreciate it too!$"

Route103_Text_BrendanRoute103Postgame:
	.string "{RIVAL}: Huh? That's weird… this one\n"
	.string "shouldn't appear here, right…?$"

Route103_Text_BrendanLetsBattlePostgame:
	.string "Oh, hey {PLAYER}. What's up?\n"
	.string "Sorry. I was distracted.\p"
	.string "It's weird to see a PACHIRISU\n"
	.string "here in HOENN, don't you think?\p"
	.string "Whatever. I told you there was\n"
	.string "something I had to ask of you.\p"
	.string "I'll go straight to the point:\n"
	.string "Let's have a POKéMON battle!\p"
	.string "I want to learn how much did we\n"
	.string "grow up to this point.\p"
	.string "You better get ready, because I\n"
	.string "won't hold anything back!$"

Route103_Text_BrendanDefeatedPostgame:
	.string "Wow! That was amazing!\n"
	.string "You really live up to your title!$"

Route103_Text_BrendanTimeToHeadBackForGood:
	.string "Thanks, {PLAYER}. That was a\n"
	.string "great battle. I've no regrets.\p"
	.string "It's been long since since we first\n"
	.string "fought here, in ROUTE 103.\p"
	.string "DAD wanted me to teach you the\n"
	.string "basics of being a POKéMON TRAINER.\p"
	.string "We've been through a lot since\n"
	.string "then and faced many challenges.\p"
	.string "I had a lot of fun in my journey,\n"
	.string "and it's partly thanks to you.\p"
	.string "I think I'm ready to take a good\n"
	.string "break now.\p"
	.string "I'm sure DAD would appreciate\n"
	.string "the extra hands too.\p"
	.string "If you feel tired, don't hesitate\n"
	.string "to stop by LITTLEROOT TOWN!\p"
	.string "You're always welcomed in the LAB!$"
