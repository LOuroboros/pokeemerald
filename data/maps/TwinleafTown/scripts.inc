TwinleafTown_MapScripts::
	.byte 0


TwinleafTown_EventScript_FatMan::
	msgbox TwinleafTown_EventScript_FatMan_Text_0, MSGBOX_NPC
	return


TwinleafTown_EventScript_Woman::
	msgbox TwinleafTown_EventScript_Woman_Text_0, MSGBOX_NPC
	return


TwinleafTown_EventScript_Man::
	msgbox TwinleafTown_EventScript_Man_Text_0, MSGBOX_NPC
	return


TwinleafTown_EventScript_Sign_Rival::
	msgbox TwinleafTown_EventScript_Sign_Rival_Text_0, MSGBOX_SIGN
	return


TwinleafTown_EventScript_Sign_Player::
	msgbox TwinleafTown_EventScript_Sign_Player_Text_0, MSGBOX_SIGN
	return


TwinleafTown_EventScript_Sign::
	msgbox TwinleafTown_EventScript_Sign_Text_0, MSGBOX_SIGN
	return


TwinleafTown_EventScript_RivalWaitingForYou::
	return


TwinleafTown_EventScript_FatMan_Text_0:
	.string "Technology just blows me away!\p"
	.string "I mean, now you can play with people\n"
	.string "around the world… wirelessly!$"

TwinleafTown_EventScript_Woman_Text_0:
	.string "It's true that wild Pokémon do attack\n"
	.string "people sometimes…\p"
	.string "However, Pokémon also let you become\n"
	.string "friends with them!$"

TwinleafTown_EventScript_Man_Text_0:
	.string "Hiya, {PLAYER}.\n"
	.string "Pearl was looking for you.\p"
	.string "I think he's home now.\n"
	.string "Why don't you go check it out?$"

TwinleafTown_EventScript_Sign_Rival_Text_0:
	.string "Rival's House$"

TwinleafTown_EventScript_Sign_Player_Text_0:
	.string "{PLAYER}'s House$"

TwinleafTown_EventScript_Sign_Text_0:
	.string "Twinleaf Town\nFresh and Free!$"
