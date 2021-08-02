LilycoveCity_DepartmentStore_4F_MapScripts:: @ 821FDEA
	.byte 0

LilycoveCity_DepartmentStore_4F_EventScript_Gentleman:: @ 821FDEB
	msgbox LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_Woman:: @ 821FDF4
	msgbox LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_Youngster:: @ 821FDFD
	msgbox LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_WomanTwo::
	compare VAR_STARTER_MON, 1
	goto_if_eq LilycoveCity_DepartmentStore_4F_EventScript_WomanTwo_Flavor
	msgbox LilycoveCity_DepartmentStore_4F_Text_IBoughtTheLastTM18, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_WomanTwo_Flavor:
	goto_if_set FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS, LilycoveCity_DepartmentStore_4F_EventScript_WomanTwoTwo
	msgbox LilycoveCity_DepartmentStore_4F_Text_SomeoneBoughtTheLastTM18, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_WomanTwoTwo:
	msgbox LilycoveCity_DepartmentStore_4F_Text_WomanObtainedATM18, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_ClerkLeft:: @ 821FE06
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs: @ 821FE20
	.2byte ITEM_TM38  @ Fire Blast
	.2byte ITEM_TM25  @ Thunder
	.2byte ITEM_TM14  @ Blizzard
	.2byte ITEM_TM15  @ Hyper Beam
	.2byte ITEM_NONE
	release
	end

LilycoveCity_DepartmentStore_4F_EventScript_ClerkRight:: @ 821FE2C
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_DefenseTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_DefenseTMs: @ 821FE44
	.2byte ITEM_TM17  @ Protect
	.2byte ITEM_TM20  @ Safeguard
	.2byte ITEM_TM33  @ Reflect
	.2byte ITEM_TM16  @ Light Screen
	.2byte ITEM_NONE
	release
	end

LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM: @ 821FE50
	.string "Hmm…\p"
	.string "An attacking move…\n"
	.string "Or a defensive move…\p"
	.string "It's no easy matter to decide which TM\n"
	.string "moves should be taught to POKéMON…$"

LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs: @ 821FEC7
	.string "There are so many different kinds of\n"
	.string "TM moves.\p"
	.string "A catalog I read said there are fifty\n"
	.string "different kinds.$"

LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves: @ 821FF2D
	.string "I'd like to get all the different TMs,\n"
	.string "but a POKéMON learns only four moves.$"

LilycoveCity_DepartmentStore_4F_Text_IBoughtTheLastTM18:
	.string "Lucky me! I bought the last TM18!\p"
	.string "This TECHNICAL MACHINE can teach\n"
	.string "the move RAIN DANCE to a POKéMON.\p"
	.string "With this, my strategy is complete!\n"
	.string "I will be unstoppable!$"

LilycoveCity_DepartmentStore_4F_Text_SomeoneBoughtTheLastTM18:
	.string "It looks like someone just bought the\n"
	.string "last TM18. How problematic.\p"
	.string "That TECHNICAL MACHINE can teach the\n"
	.string "move RAIN DANCE to a POKéMON, and I\l"
	.string "was intending to buy it.$"

LilycoveCity_DepartmentStore_4F_Text_WomanObtainedATM18:
	.string "Lucky me! I got a TM18!\p"
	.string "This TECHNICAL MACHINE can teach\n"
	.string "the move RAIN DANCE to a POKéMON.\p"
	.string "A man wearing a bandana approached\n"
	.string "me as I was walking around.\p"
	.string "He gave it to me before running\n"
	.string "towards the east with his friends.\p"
	.string "How very kind of him.$"
