Route103North_MapScripts::
	.byte 0

Route103North_EventScript_Fisherman::
	goto_if_set FLAG_MET_ROUTE_103_NORTH_FISHERMAN, Route103North_EventScript_Fisherman2
	msgbox Route103North_Text_Rumor, MSGBOX_NPC
	setflag FLAG_MET_ROUTE_103_NORTH_FISHERMAN
	end

Route103North_EventScript_Fisherman2:
	msgbox Route103North_Text_Rumor2, MSGBOX_NPC
	end

Route103North_Text_Rumor:
	.string "Did you hear?\p"
	.string "There's a rumor going around that\n"
	.string "a strong Pokémon lives close by.\p"
	.string "Maybe it's somewhere in that cave…$"

Route103North_Text_Rumor2:
	.string "I wonder what does the strong\n"
	.string "Pokémon look like… hmm…$"
