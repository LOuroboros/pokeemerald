.set LOCALID_FISHERMAN, 2
.set LOCALID_RIVAL, 3

Route103North_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route103North_OnTransition
	.byte 0

Route103North_OnTransition:
	call Common_EventScript_SetupRivalGfxId
	call Route103North_EventScript_TryToHideFisherman
	end

Route103North_EventScript_TryToHideFisherman:
	call_if_set FLAG_SYS_GAME_CLEAR, Route103North_EventScript_ShowFisherman
	call_if_unset FLAG_SYS_GAME_CLEAR, Route103North_EventScript_HideFisherman
	return

Route103North_EventScript_ShowFisherman:
	addobject LOCALID_FISHERMAN
	return

Route103North_EventScript_HideFisherman:
	removeobject LOCALID_FISHERMAN
	return

Route103North_EventScript_Rival::
	lockall
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Route103North_EventScript_RivalMay
	compare VAR_RESULT, FEMALE
	goto_if_eq Route103North_EventScript_RivalBrendan
	end

Route103North_EventScript_RivalMay::
	compare VAR_BIRCH_LAB_STATE, 6
	goto_if_eq Route103North_EventScript_RivalMayPostGame
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
	setflag FLAG_DISABLE_MONEY_REWARD
	switch VAR_STARTER_MON
	case 0, Route103North_EventScript_StartMayBattleTreecko
	case 1, Route103North_EventScript_StartMayBattleTorchic
	case 2, Route103North_EventScript_StartMayBattleMudkip
	end

Route103North_EventScript_RivalBrendan::
	compare VAR_BIRCH_LAB_STATE, 6
	goto_if_eq Route103North_EventScript_RivalBrendanPostGame
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
	case 0, Route103North_EventScript_StartBrendanBattleTreecko
	case 1, Route103North_EventScript_StartBrendanBattleTorchic
	case 2, Route103North_EventScript_StartBrendanBattleMudkip
	end

Route103North_EventScript_StartMayBattleTreecko::
	trainerbattle_no_whiteout_no_intro TRAINER_MAY_ROUTE_103_TREECKO, Route103_Text_MayDefeated, Route103_Text_MayVictorious, Route103North_EventScript_AfterMayBattle
	end

Route103North_EventScript_StartMayBattleTorchic::
	trainerbattle_no_whiteout_no_intro TRAINER_MAY_ROUTE_103_TORCHIC, Route103_Text_MayDefeated, Route103_Text_MayVictorious, Route103North_EventScript_AfterMayBattle
	end

Route103North_EventScript_StartMayBattleMudkip::
	trainerbattle_no_whiteout_no_intro TRAINER_MAY_ROUTE_103_MUDKIP, Route103_Text_MayDefeated, Route103_Text_MayVictorious, Route103North_EventScript_AfterMayBattle
	end

Route103North_EventScript_StartBrendanBattleTreecko::
	trainerbattle_no_whiteout_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, Route103_Text_BrendanDefeated, Route103_Text_BrendanVictorious, Route103North_EventScript_AfterBrendanBattle
	end

Route103North_EventScript_StartBrendanBattleTorchic::
	trainerbattle_no_whiteout_no_intro TRAINER_BRENDAN_ROUTE_103_TORCHIC, Route103_Text_BrendanDefeated, Route103_Text_BrendanVictorious, Route103North_EventScript_AfterBrendanBattle
	end

Route103North_EventScript_StartBrendanBattleMudkip::
	trainerbattle_no_whiteout_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, Route103_Text_BrendanDefeated, Route103_Text_BrendanVictorious, Route103North_EventScript_AfterBrendanBattle
	end

Route103North_EventScript_AfterMayBattle::
	msgbox Route103_Text_MayTimeToHeadBack, MSGBOX_DEFAULT
	clearflag FLAG_DISABLE_MONEY_REWARD
	goto Route103North_EventScript_RivalExit
	end

Route103North_EventScript_AfterBrendanBattle::
	msgbox Route103_Text_BrendanTimeToHeadBack, MSGBOX_DEFAULT
	clearflag FLAG_DISABLE_MONEY_REWARD
	goto Route103North_EventScript_RivalExit
	end

Route103North_EventScript_RivalExit::
	closemessage
	switch VAR_FACING
	case DIR_WEST, Route103North_EventScript_RivalExitFacingEastOrWest
	case DIR_EAST, Route103North_EventScript_RivalExitFacingEastOrWest
	case DIR_SOUTH, Route103North_EventScript_RivalExitFacingSouth
	end

Route103North_EventScript_RivalExitFacingEastOrWest::
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExit
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExitEastOrWest
	waitmovement 0
	goto Route103North_EventScript_RivalEnd
	end

Route103North_EventScript_RivalExitFacingSouth::
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExit
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExitSouth
	waitmovement 0
	goto Route103North_EventScript_RivalEnd
	end

Route103North_EventScript_RivalEnd::
	compare VAR_ROUTE103_STATE, 2
	goto_if_eq Route103North_EventScript_RivalEndPostgame
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

Route103North_EventScript_RivalEndPostgame:
	removeobject LOCALID_RIVAL
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
	savebgm MUS_DUMMY
	fadedefaultbgm
	releaseall
	end

Route103_Movement_RivalExitEastOrWest:
	walk_down
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route103_Movement_RivalExitSouth:
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route103_Movement_WatchRivalExit:
	delay_16
	walk_in_place_fastest_down
	step_end

Route103North_EventScript_RivalMayPostGame:
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
	case 0, Route103North_EventScript_StartMayBattleTreeckoPostgame
	case 1, Route103North_EventScript_StartMayBattleTorchicPostgame
	case 2, Route103North_EventScript_StartMayBattleMudkipPostgame
	end

Route103North_EventScript_RivalBrendanPostGame:
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
	case 0, Route103North_EventScript_StartBrendanBattleTreeckoPostgame
	case 1, Route103North_EventScript_StartBrendanBattleTorchicPostgame
	case 2, Route103North_EventScript_StartBrendanBattleMudkipPostgame
	end

Route103North_EventScript_StartMayBattleTreeckoPostgame::
	trainerbattle_no_intro TRAINER_MAY_POSTGAME_TREECKO, Route103_Text_MayDefeatedPostgame
	goto Route103North_EventScript_AfterMayBattlePostgame
	end

Route103North_EventScript_StartMayBattleTorchicPostgame::
	trainerbattle_no_intro TRAINER_MAY_POSTGAME_TORCHIC, Route103_Text_MayDefeatedPostgame
	goto Route103North_EventScript_AfterMayBattlePostgame
	end

Route103North_EventScript_StartMayBattleMudkipPostgame::
	trainerbattle_no_intro TRAINER_MAY_POSTGAME_MUDKIP, Route103_Text_MayDefeatedPostgame
	goto Route103North_EventScript_AfterMayBattlePostgame
	end

Route103North_EventScript_AfterMayBattlePostgame::
	msgbox Route103_Text_MayTimeToHeadBackForGood, MSGBOX_DEFAULT
	call Route103North_EventScript_UpdateFlagsAndVarsAfterPostgameRivalBattle
	goto Route103North_EventScript_RivalExit
	end

Route103North_EventScript_StartBrendanBattleTreeckoPostgame::
	trainerbattle_no_intro TRAINER_BRENDAN_POSTGAME_TREECKO, Route103_Text_BrendanDefeatedPostgame
	goto Route103North_EventScript_AfterBrendanBattlePostgame
	end

Route103North_EventScript_StartBrendanBattleTorchicPostgame::
	trainerbattle_no_intro TRAINER_BRENDAN_POSTGAME_TORCHIC, Route103_Text_BrendanDefeatedPostgame
	goto Route103North_EventScript_AfterBrendanBattlePostgame
	end

Route103North_EventScript_StartBrendanBattleMudkipPostgame::
	trainerbattle_no_intro TRAINER_BRENDAN_POSTGAME_MUDKIP, Route103_Text_BrendanDefeatedPostgame
	goto Route103North_EventScript_AfterBrendanBattlePostgame
	end

Route103North_EventScript_AfterBrendanBattlePostgame::
	msgbox Route103_Text_BrendanTimeToHeadBackForGood, MSGBOX_DEFAULT
	call Route103North_EventScript_UpdateFlagsAndVarsAfterPostgameRivalBattle
	goto Route103North_EventScript_RivalExit
	end

Route103North_EventScript_UpdateFlagsAndVarsAfterPostgameRivalBattle:
	setvar VAR_ROUTE103_STATE, 2
	setflag FLAG_DEFEATED_RIVAL_POSTGAME
	setvar VAR_SKY_PILLAR_STATE, 4
	setvar VAR_MT_PYRE_STATE, 2
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE
	clearflag FLAG_HIDE_METEOR_FALLS_STEVEN
	return

Route103North_EventScript_Fisherman::
	goto_if_set FLAG_MET_ROUTE_103_NORTH_FISHERMAN, Route103North_EventScript_Fisherman2
	msgbox Route103North_Text_Rumor, MSGBOX_NPC
	setflag FLAG_MET_ROUTE_103_NORTH_FISHERMAN
	end

Route103North_EventScript_Fisherman2:
	msgbox Route103North_Text_Rumor2, MSGBOX_NPC
	end

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

Route103_Text_MayVictorious:
	.string "Wow! That's great!\n"
	.string "You're a quick learner, {PLAYER}!$"

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

Route103_Text_BrendanVictorious:
	.string "Hey, you're pretty good {PLAYER}!\n"
	.string "Are you really a newbie?$"

Route103_Text_BrendanTimeToHeadBack:
	.string "{RIVAL}: I think I get it.\n"
	.string "I think I know why my dad has his eye\l"
	.string "out for you now.\p"
	.string "Look, your POKéMON already likes you,\n"
	.string "even though you just got it.\p"
	.string "{PLAYER}, I get the feeling that you\n"
	.string "could befriend any POKéMON with ease.\p"
	.string "We should head back to the LAB.$"

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

Route103North_Text_Rumor:
	.string "Did you hear?\p"
	.string "There's a rumor going around that\n"
	.string "a strong Pokémon lives close by.\p"
	.string "Maybe it's somewhere in that cave…$"

Route103North_Text_Rumor2:
	.string "I wonder what does the strong\n"
	.string "Pokémon look like… hmm…$"
