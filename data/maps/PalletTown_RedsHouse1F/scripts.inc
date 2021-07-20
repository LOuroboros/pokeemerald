PalletTown_RedsHouse1F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RedsHouse1F_EventScript_BigDay_Start
	.byte 0

RedsHouse1F_EventScript_BigDay_Start:
	map_script_2 VAR_0x402E, 2, RedsHouse1F_EventScript_BigDay
	.2byte 0

RedsHouse1F_EventScript_BigDay::
	applymovement 1, RedsHouse1F_MotherMovement1
	waitmovement 0
	msgbox RedsHouse1F_Text_RedPresent, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	message RedsHouse1F_Text_EquippedRunningShoes
	waitfanfare
	setflag FLAG_SYS_B_DASH
	msgbox RedsHouse1F_Text_MomSpeech, MSGBOX_NPC
	applymovement 1, RedsHouse1F_MotherMovement2
	waitmovement 0
	setvar VAR_0x402E, 3
	setflag FLAG_HIDE_OAK_PALLET_TOWN
	setflag FLAG_HIDE_OAK_OAKS_LAB
	end

RedsHouse1F_EventScript_Mom::
	lockall
	faceplayer
	checkflag FLAG_SYS_POKEMON_GET
	vgoto_if 1, RedsHouse1F_EventScript_Mom_Heal
	msgbox RedsHouse1F_Text_MomCommon, MSGBOX_DEFAULT
	releaseall
	end

RedsHouse1F_EventScript_Mom_Heal::
	lockall
	faceplayer
	msgbox RedsHouse1F_Text_WorriedMom, MSGBOX_DEFAULT
	fadescreen 1
	playfanfare MUS_HEAL
	special HealPlayerParty
	waitfanfare
	fadescreen 0
	msgbox RedsHouse1F_Text_PlayerHealed, MSGBOX_DEFAULT
	releaseall
	end

RedsHouse1F_MotherMovement1:
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	step_end

RedsHouse1F_MotherMovement2:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	step_end

RedsHouse1F_Text_WorriedMom:
	.string "MOM: {PLAYER}!\n"
	.string "You should take a quick rest.$"

RedsHouse1F_Text_PlayerHealed:
	.string "MOM: Oh, good! You and your\n"
	.string "POKéMON are looking great.\l"
	.string "Take care now!$"

RedsHouse1F_Text_MomSpeech:
	.string "MOM: … Sigh.\n"
	.string "All kids leave home someday,\l"
	.string "I know. It said so on TV.\l"
	.string "Still, I can't help but feel scared\l"
	.string "anything bad could happen to you,\l"
	.string "sweetheart. If it's you though, I know\l"
	.string "deep inside that you're going to be just\l"
	.string "fine.\p"
	.string "Oh, yes. Our neighbor, PROF. OAK, was\n"
	.string "looking for you by the way.\p"
	.string "If I'm remembering right, he was walking\n"
	.string "around the entrance of the town.$"

RedsHouse1F_Text_RedPresent:
	.string "MOM: Are you ready {PLAYER}?\n"
	.string "Today you will get your first\l"
	.string "POKéMON, honey!\p"
	.string "MOM: To celebrate it, I bought you\n"
	.string "a brand new pair of shoes. Try them,\l"
	.string "I'm sure you will like them.$"

RedsHouse1F_Text_EquippedRunningShoes:
	.string "{PLAYER} switched shoes with the\n"
	.string "RUNNING SHOES.$"

RedsHouse1F_Text_MomCommon:
	.string "MOM: Good luck, honey!$"
