PalletTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_EventScript_SpokeWithGirl
	.byte 0

PalletTown_EventScript_SpokeWithGirl:
	compare VAR_INFLAG1, 2
	goto_if_eq PalletTown_EventScript_MoveTheGirl
	end
PalletTown_EventScript_MoveTheGirl:
	setvar VAR_INFLAG1, 3
	setobjectxyperm 1, 3, 10
	setobjectmovementtype 1, MOVEMENT_TYPE_WANDER_AROUND
	end

PalletTown_EventScript_MCsHouseSign::
	msgbox PalletTown_Text_MCsHouseSign, MSGBOX_SIGN
	end

PalletTown_EventScript_RivalsHouseSign::
	msgbox PalletTown_Text_RivalsHouseSign, MSGBOX_SIGN
	end

PalletTown_EventScript_OaksLab::
	msgbox PalletTown_Text_OaksLab, MSGBOX_SIGN
	end

PalletTown_EventScript_TrainerTips::
	msgbox PalletTown_Text_TrainerTips, MSGBOX_SIGN
	setvar VAR_INFLAG1, 2
	end

PalletTown_EventScript_Description::
	msgbox PalletTown_Text_Description, MSGBOX_SIGN
	end

PalletTown_Girl::
	lock
	compare VAR_INFLAG1, 2
	goto_if_eq PalletTown_Girl3
	compare VAR_INFLAG1, 3
	goto_if_eq PalletTown_Girl4
	compare VAR_INFLAG1, 1
	goto_if_eq PalletTown_Girl2
	msgbox PalletTown_Text_Girl1, MSGBOX_DEFAULT
	applymovement 1, PalletTown_GirlMovement1
	waitmovement 0
	msgbox PalletTown_Text_Girl2, MSGBOX_DEFAULT
	applymovement 1, PalletTown_GirlMovement2
	waitmovement 0
	setvar VAR_INFLAG1, 1
	release
	end
PalletTown_Girl2:
	msgbox PalletTown_Text_Girl3, MSGBOX_DEFAULT
	release
	end
PalletTown_Girl3:
	faceplayer
	msgbox PalletTown_Text_Girl4, MSGBOX_DEFAULT
	release
	end
PalletTown_Girl4:
	lock
	faceplayer
	msgbox PalletTown_Text_Girl5, MSGBOX_DEFAULT
	release
	end

PalletTown_FatMan::
	lock
	faceplayer
	msgbox PalletTown_Text_FatMan, MSGBOX_DEFAULT
	release
	end

PalletTown_TriggerLeft::
	lock
	playbgm MUS_RG_OAK, 0
	message PalletTown_Text_ProfOak1
	waitmessage
	delay 30
	closemessage
	applymovement 255, Common_Movement_ExclamationMark
	waitmovement 0
	playse SE_PIN
	applymovement 255, Common_Movement_FaceDown
	waitmovement 0
	delay 85
	addobject 3
	applymovement 3, PalletTown_ProfOakToPlayer
	waitmovement 0
	message PalletTown_Text_ProfOak2
	waitmessage
	delay 85
	closemessage
	applymovement 3, PalletTown_ProfOakToLab
	applymovement 255, PalletTown_PlayerToOak
	waitmovement 0
	opendoor 17, 14
	waitdooranim
	applymovement 3, PalletTown_ProfOakEntersTheLab
	waitmovement 0
	hideobjectat 3, MAP_PALLET_TOWN
	applymovement 255, PalletTown_PlayerEntersTheLab
	waitmovement 0
	hideobjectat 255, MAP_PALLET_TOWN
	closedoor 17, 14
	waitdooranim
	setflag FLAG_HIDE_OAK_PALLET_TOWN
	clearflag FLAG_HIDE_OAK_OAKS_LAB
	setvar VAR_INFLAG2, 1
	setvar VAR_INFLAG3, 1
	setflag FLAG_DONT_TRANSITION_MUSIC
	warp MAP_PALLET_TOWN_OAKS_LAB, 255, 6, 12
	waitstate
	release
	end

PalletTown_TriggerRight::
	lock
	playbgm MUS_RG_OAK, 0
	message PalletTown_Text_ProfOak1
	waitmessage
	delay 30
	closemessage
	applymovement 255, Common_Movement_ExclamationMark
	waitmovement 0
	playse SE_PIN
	applymovement 255, Common_Movement_FaceDown
	waitmovement 0
	delay 85
	addobject 3
	applymovement 3, PalletTown_ProfOakToPlayerFromTheRight
	waitmovement 0
	message PalletTown_Text_ProfOak2
	waitmessage
	delay 85
	closemessage
	applymovement 3, PalletTown_ProfOakToLabFromTheRight
	applymovement 255, PalletTown_PlayerToOakFromTheRight
	waitmovement 0
	opendoor 17, 14
	waitdooranim
	applymovement 3, PalletTown_ProfOakEntersTheLab
	waitmovement 0
	hideobjectat 3, MAP_PALLET_TOWN
	applymovement 255, PalletTown_PlayerEntersTheLab
	waitmovement 0
	hideobjectat 255, MAP_PALLET_TOWN
	closedoor 17, 14
	waitdooranim
	setflag FLAG_HIDE_OAK_PALLET_TOWN
	clearflag FLAG_HIDE_OAK_OAKS_LAB
	setvar VAR_INFLAG2, 1
	setvar VAR_INFLAG3, 1
	setflag FLAG_DONT_TRANSITION_MUSIC
	warp MAP_PALLET_TOWN_OAKS_LAB, 255, 6, 12
	waitstate
	release
	end

PalletTown_GirlMovement1:
	face_right
	emote_exclamation_mark
	step_end

PalletTown_GirlMovement2:
	walk_left
	face_right
	step_end

PalletTown_ProfOakToPlayer:
	walk_up
	walk_right
	walk_up
	walk_right
	walk_up
	walk_up
	walk_up
	step_end

PalletTown_ProfOakToLab:
	walk_down
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	face_up
	step_end

PalletTown_PlayerToOak:
	walk_down
	walk_down
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

PalletTown_ProfOakToPlayerFromTheRight:
	walk_up
	walk_right
	walk_up
	walk_right
	walk_up
	walk_up
	walk_up
	walk_right
	face_up
	step_end

PalletTown_ProfOakToLabFromTheRight:
	walk_left
	walk_down
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	face_up
	step_end

PalletTown_PlayerToOakFromTheRight:
	walk_down
	walk_left
	walk_down
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

PalletTown_ProfOakEntersTheLab:
	walk_up
	step_end

PalletTown_PlayerEntersTheLab:
	walk_right
	walk_up
	step_end

PalletTown_Text_OaksLab:
	.string "OAK POKéMON RESEARCH LAB$"

PalletTown_Text_MCsHouseSign:
	.string "{PLAYER}'s HOUSE$"

PalletTown_Text_RivalsHouseSign:
	.string "{RIVAL}'s HOUSE$"

PalletTown_Text_TrainerTips:
	.string "TRAINER TIPS\p"
	.string "Press START to open the MENU!$"

PalletTown_Text_Description:
	.string "PALLET TOWN\n"
	.string "“Shades of your journey await!”$"

PalletTown_Text_Girl1:
	.string "Hmm…\n"
	.string "Is that right…$"

PalletTown_Text_Girl2:
	.string "Oh!\n"
	.string "Look, look!$"

PalletTown_Text_Girl3:
	.string "Read it, read it!$"

PalletTown_Text_Girl4:
	.string "Signs are useful, aren't they?$"

PalletTown_Text_Girl5:
	.string "I'm raising POKéMON, too.\p"
	.string "When they get strong, they can\n"
	.string "protect me.$"

PalletTown_Text_FatMan:
	.string "Technology is incredible!\p"
	.string "You can now store and recall items\n"
	.string "and POKéMON as data via PC.$"

PalletTown_Text_ProfOak1:
	.string "Oak: Hey! Wait!\n"
	.string "Don't go out!$"

PalletTown_Text_ProfOak2:
	.string "Oak: It's unsafe!\n"
	.string "Wild POKéMON live in tall grass!\p"
	.string "You need your own POKéMON for\n"
	.string "your protection.\p"
	.string "I know!\n"
	.string "Here, come with me!$"
