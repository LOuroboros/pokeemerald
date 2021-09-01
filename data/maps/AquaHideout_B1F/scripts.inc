.set LOCALID_ARCHIE, 10
.set LOCALID_ITEM_BALL_SHARPEDONITE, 11

AquaHideout_B1F_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, AquaHideout_B1F_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, AquaHideout_B1F_OnTransition
	.byte 0

AquaHideout_B1F_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, AquaHideout_B1F_EventScript_TryRemoveElectrode
	end

AquaHideout_B1F_EventScript_TryRemoveElectrode::
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_ne Common_EventScript_NopReturn
	removeobject VAR_LAST_TALKED
	return

AquaHideout_B1F_OnTransition:
	call_if_unset FLAG_DEFEATED_ELECTRODE_1_AQUA_HIDEOUT, AquaHideout_B1F_EventScript_ShowElectrode1
	call_if_unset FLAG_DEFEATED_ELECTRODE_2_AQUA_HIDEOUT, AquaHideout_B1F_EventScript_ShowElectrode2
	call_if_not_defeated TRAINER_ARCHIE_POSTGAME, AquaHideout_B1F_EventScript_HideSharpedonite
	end

AquaHideout_B1F_EventScript_ShowElectrode1::
	clearflag FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_1
	return

AquaHideout_B1F_EventScript_ShowElectrode2::
	clearflag FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_2
	return

AquaHideout_B1F_EventScript_HideSharpedonite:
	setflag FLAG_ITEM_AQUA_HIDEOUT_SHARPEDONITE
	return

AquaHideout_B1F_EventScript_Electrode1::
	lock
	faceplayer
	setwildbattle SPECIES_ELECTRODE, 30, ITEM_NONE
	waitse
	playmoncry SPECIES_ELECTRODE, 2
	delay 40
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AquaHideout_B1F_EventScript_DefeatedElectrode1
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AquaHideout_B1F_EventScript_DefeatedElectrode1
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AquaHideout_B1F_EventScript_DefeatedElectrode1
	setflag FLAG_DEFEATED_ELECTRODE_1_AQUA_HIDEOUT
	release
	end

AquaHideout_B1F_EventScript_DefeatedElectrode1::
	setflag FLAG_DEFEATED_ELECTRODE_1_AQUA_HIDEOUT
	goto Common_EventScript_RemoveStaticPokemon
	end

AquaHideout_B1F_EventScript_Electrode2::
	lock
	faceplayer
	setwildbattle SPECIES_ELECTRODE, 30, ITEM_NONE
	waitse
	playmoncry SPECIES_ELECTRODE, 2
	delay 40
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AquaHideout_B1F_EventScript_DefeatedElectrode2
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AquaHideout_B1F_EventScript_DefeatedElectrode2
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AquaHideout_B1F_EventScript_DefeatedElectrode2
	setflag FLAG_DEFEATED_ELECTRODE_2_AQUA_HIDEOUT
	release
	end

AquaHideout_B1F_EventScript_DefeatedElectrode2::
	setflag FLAG_DEFEATED_ELECTRODE_2_AQUA_HIDEOUT
	goto Common_EventScript_RemoveStaticPokemon
	end

AquaHideout_B1F_EventScript_Grunt2::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_2, AquaHideout_B1F_Text_Grunt2Intro, AquaHideout_B1F_Text_Grunt2Defeat, AquaHideout_B1F_EventScript_Grunt2Defeated
	msgbox AquaHideout_B1F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

AquaHideout_B1F_EventScript_Grunt2Defeated::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox AquaHideout_B1F_Text_Grunt2PostBattle, MSGBOX_DEFAULT
	release
	end

AquaHideout_B1F_EventScript_Grunt3::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_3, AquaHideout_B1F_Text_Grunt3Intro, AquaHideout_B1F_Text_Grunt3Defeat, AquaHideout_B1F_EventScript_Grunt3Defeated
	msgbox AquaHideout_B1F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end

AquaHideout_B1F_EventScript_Grunt3Defeated::
	msgbox AquaHideout_B1F_Text_Grunt3PostBattle, MSGBOX_DEFAULT
	release
	end

AquaHideout_B1F_EventScript_Grunt5::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_5, AquaHideout_B1F_Text_Grunt5Intro, AquaHideout_B1F_Text_Grunt5Defeat
	msgbox AquaHideout_B1F_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
	end

AquaHideout_B1F_EventScript_Grunt7::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_7, AquaHideout_B1F_Text_Grunt7Intro, AquaHideout_B1F_Text_Grunt7Defeat
	msgbox AquaHideout_B1F_Text_Grunt7PostBattle, MSGBOX_AUTOCLOSE
	end

AquaHideout_B1F_EventScript_Archie::
	lock
	faceplayer
	trainerbattle_single TRAINER_ARCHIE_POSTGAME, AquaHideout_B1F_Text_Archie, AquaHideout_B1F_Text_ArchieDefeat, AquaHideout_B1F_EventScript_ArchieDefeated, NO_MUSIC
	end

AquaHideout_B1F_EventScript_ArchieDefeated:
	msgbox AquaHideout_B1F_Text_ArchiePostBattle, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_ARCHIE
	addobject LOCALID_ITEM_BALL_SHARPEDONITE
	fadescreen FADE_FROM_BLACK
	release
	end

AquaHideout_B1F_Text_Grunt2Intro:
	.string "If you want to know the secret about\n"
	.string "our HIDEOUT, you have me to beat!$"

AquaHideout_B1F_Text_Grunt2Defeat:
	.string "I can't win at all…$"

AquaHideout_B1F_Text_Grunt2PostBattle:
	.string "Our HIDEOUT's secret?\p"
	.string "Well, let's just say…\n"
	.string "There's a submarine at the far end!\p"
	.string "But, by now…\n"
	.string "Kekekeke…$"

AquaHideout_B1F_Text_Grunt3Intro:
	.string "Fuel supply loaded A-OK!\n"
	.string "In-cruise snacks loaded A-OK!\p"
	.string "Nothing left to do but KO a pesky\n"
	.string "meddler!$"

AquaHideout_B1F_Text_Grunt3Defeat:
	.string "I took a serious licking!$"

AquaHideout_B1F_Text_Grunt3PostBattle:
	.string "Humph!\n"
	.string "This was supposed to happen!\p"
	.string "My mission was to just hold you up!$"

AquaHideout_B1F_Text_Grunt5Intro:
	.string "Yawn… Keeping watch over the\n"
	.string "HIDEOUT bores me. I'll take you on.$"

AquaHideout_B1F_Text_Grunt5Defeat:
	.string "Yawn…\n"
	.string "Oh, I lost…$"

AquaHideout_B1F_Text_Grunt5PostBattle:
	.string "If you scurry too much, other TEAM\n"
	.string "AQUA members might get you.$"

AquaHideout_B1F_Text_Grunt7Intro:
	.string "Hey!\n"
	.string "You there!\p"
	.string "Which do you think is cooler?\n"
	.string "TEAM AQUA's uniform or TEAM MAGMA's?$"

AquaHideout_B1F_Text_Grunt7Defeat:
	.string "I lost in a cool way…$"

AquaHideout_B1F_Text_Grunt7PostBattle:
	.string "If you have a cool uniform, you look\n"
	.string "good even in a loss, don't you think?$"

AquaHideout_B1F_Text_Archie:
	.string "ARCHIE: I felt that you'd come.\p"
	.string "What do you want, kid?\n"
	.string "Ruining my plans wasn't enough?\p"
	.string "You want to kick me out of this\n"
	.string "place by force, is that it?\p"
	.string "Well bring it, punk.\n"
	.string "I won't go down without a fight!$"

AquaHideout_B1F_Text_ArchieDefeat:
	.string "So this is it…\n"
	.string "Here's where my dream ends…$"

AquaHideout_B1F_Text_ArchiePostBattle:
	.string "Good work, kid. You did it.\p"
	.string "Listen up, I didn't mean to\n"
	.string "cause all that ruckus.\p"
	.string "I was supposed to be in control\n"
	.string "It was supposed to work!\p"
	.string "We were going to use KYOGRE's\n"
	.string "power to create our ideal world!\p"
	.string "Just think about it, all life\n"
	.string "is born from the sea!\p"
	.string "By expanding the oceans we'd make\n"
	.string "room for life to grow and thrive!\p"
	.string "It was going to be glorious!\p"
	.string "But then, our paths crossed.\p"
	.string "You ruined everything I worked\n"
	.string "so hard to achieve, and now…\p"
	.string "I've no choice but to start from\n"
	.string "scratch.\p"
	.string "TEAM AQUA isn't over!\n"
	.string "I refuse to give up!$"
