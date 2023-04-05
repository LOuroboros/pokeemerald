EventScript_PokemonProfessor::
	lock
	faceplayer
	goto_if_set FLAG_UNUSED_0x020, EventScript_PokemonProfessor_End
	msgbox EventScript_PokemonProfessor_Text_Introduction, MSGBOX_DEFAULT
	msgbox EventScript_PokemonProfessor_Text_OfferAStarter, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, EventScript_PokemonProfessor_Proceed
	msgbox EventScript_PokemonProfessor_Text_Goodbye, MSGBOX_DEFAULT
	release
	end

EventScript_PokemonProfessor_Proceed:
	call_if_unset FLAG_TEMP_1, EventScript_PokemonProfessor_Explanation
	msgbox EventScript_PokemonProfessor_Proceed_Text_Explanation_2, MSGBOX_DEFAULT
	call_if_eq VAR_CUSTOM_STARTER, 0, EventScript_BufferKantoStarterChoices
	call_if_eq VAR_CUSTOM_STARTER, 1, EventScript_BufferJohtoStarterChoices
	call_if_eq VAR_CUSTOM_STARTER, 2, EventScript_BufferHoennStarterChoices
	dynmultistack 0, 0, TRUE, 3, FALSE, VAR_TEMP_F, DYN_MULTICHOICE_CB_NONE
	switch VAR_RESULT
	case 0, EventScript_StarterChoices_GiveGrassTypeStarter
	case 1, EventScript_StarterChoices_GiveFireTypeStarter
	case 2, EventScript_StarterChoices_GiveWaterTypeStarter
	case MULTI_B_PRESSED, EventScript_PokemonProfessor_Goodbye

EventScript_PokemonProfessor_Explanation:
	msgbox EventScript_PokemonProfessor_Proceed_Text_Explanation, MSGBOX_DEFAULT
	return

EventScript_PokemonProfessor_Goodbye:
	setflag FLAG_TEMP_1
	msgbox EventScript_PokemonProfessor_Text_Goodbye, MSGBOX_DEFAULT
	release
	end

EventScript_BufferKantoStarterChoices:
	dynmultipush EventScript_StarterChoices_Text_Bulbasaur, 0
	dynmultipush EventScript_StarterChoices_Text_Charmander, 1
	dynmultipush EventScript_StarterChoices_Text_Squirtle, 2
	setvar VAR_TEMP_1, SPECIES_BULBASAUR
	setvar VAR_TEMP_2, SPECIES_CHARMANDER
	setvar VAR_TEMP_3, SPECIES_SQUIRTLE
	return

EventScript_BufferJohtoStarterChoices:
	dynmultipush EventScript_StarterChoices_Text_Chikorita, 0
	dynmultipush EventScript_StarterChoices_Text_Cyndaquil, 1
	dynmultipush EventScript_StarterChoices_Text_Totodile, 2
	setvar VAR_TEMP_1, SPECIES_CHIKORITA
	setvar VAR_TEMP_2, SPECIES_CYNDAQUIL
	setvar VAR_TEMP_3, SPECIES_TOTODILE
	return

EventScript_BufferHoennStarterChoices:
	dynmultipush EventScript_StarterChoices_Text_Treecko, 0
	dynmultipush EventScript_StarterChoices_Text_Torchic, 1
	dynmultipush EventScript_StarterChoices_Text_Mudkip, 2
	setvar VAR_TEMP_1, SPECIES_TREECKO
	setvar VAR_TEMP_2, SPECIES_TORCHIC
	setvar VAR_TEMP_3, SPECIES_MUDKIP
	return

EventScript_StarterChoices_GiveGrassTypeStarter:
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
	msgbox EventScript_StarterChoices_Text_GrassTypeStarter, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	givemon VAR_TEMP_1, 5, ITEM_ORAN_BERRY
	message EventScript_StarterChoices_Text_ReceivedPokemon
	waitmessage
	waitfanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, Common_EventScript_NameReceivedPartyMon
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_UNUSED_0x020 // Some flag to mark the event as finished.
	goto EventScript_PokemonProfessor_End

EventScript_StarterChoices_GiveFireTypeStarter:
	bufferspeciesname STR_VAR_1, VAR_TEMP_2
	msgbox EventScript_StarterChoices_Text_FireTypeStarter, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	givemon VAR_TEMP_2, 5, ITEM_ORAN_BERRY
	message EventScript_StarterChoices_Text_ReceivedPokemon
	waitmessage
	waitfanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, Common_EventScript_NameReceivedPartyMon
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_UNUSED_0x020 // Some flag to mark the event as finished.
	goto EventScript_PokemonProfessor_End

EventScript_StarterChoices_GiveWaterTypeStarter:
	bufferspeciesname STR_VAR_1, VAR_TEMP_3
	msgbox EventScript_StarterChoices_Text_WaterTypeStarter, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	givemon VAR_TEMP_3, 5, ITEM_ORAN_BERRY
	message EventScript_StarterChoices_Text_ReceivedPokemon
	waitmessage
	waitfanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, Common_EventScript_NameReceivedPartyMon
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_UNUSED_0x020 // Some flag to mark the event as finished.
	goto EventScript_PokemonProfessor_End

EventScript_PokemonProfessor_End:
	msgbox EventScript_PokemonProfessor_End_Text_TakeCareOfYourMon, MSGBOX_DEFAULT
	release
	end

EventScript_PokemonProfessor_Text_Introduction:
	.string "I am the POKéMON PROFESSOR.$"

EventScript_PokemonProfessor_Text_OfferAStarter:
	.string "Do you want a POKéMON?$"

EventScript_PokemonProfessor_Text_Goodbye:
	.string "Goodbye.$"

EventScript_PokemonProfessor_Proceed_Text_Explanation:
	.string "I have 3 POKéMON with me.\p"
	.string "A FIRE-type, a WATER-type, and\n"
	.string "a GRASS-type as well.$"

EventScript_PokemonProfessor_Proceed_Text_Explanation_2:
	.string "Which one do you want?$"

EventScript_StarterChoices_Text_GrassTypeStarter:
	.string "So you want {STR_VAR_1},\n"
	.string "the GRASS-type POKéMON.\p"
	.string "Very well. Take it.$"

EventScript_StarterChoices_Text_FireTypeStarter:
	.string "So you want {STR_VAR_1},\n"
	.string "the FIRE-type POKéMON.\p"
	.string "Very well. Take it.$"

EventScript_StarterChoices_Text_WaterTypeStarter:
	.string "So you want {STR_VAR_1},\n"
	.string "the WATER-type POKéMON.\p"
	.string "Very well. Take it.$"

EventScript_StarterChoices_Text_ReceivedPokemon:
	.string "{PLAYER} received {STR_VAR_1}!$"

EventScript_PokemonProfessor_End_Text_TakeCareOfYourMon:
	.string "Make sure to take care of\n"
	.string "the POKéMON I gave you.$"

// TODO: Refactor so the string below aren't needed.
EventScript_StarterChoices_Text_Bulbasaur:
	.string "BULBASAUR$"
EventScript_StarterChoices_Text_Charmander:
	.string "CHARMANDER$"
EventScript_StarterChoices_Text_Squirtle:
	.string "SQUIRTLE$"
EventScript_StarterChoices_Text_Chikorita:
	.string "CHIKORITA$"
EventScript_StarterChoices_Text_Cyndaquil:
	.string "CYNDAQUIL$"
EventScript_StarterChoices_Text_Totodile:
	.string "TOTODILE$"
EventScript_StarterChoices_Text_Treecko:
	.string "TRRECKO$"
EventScript_StarterChoices_Text_Torchic:
	.string "TORCHIC$"
EventScript_StarterChoices_Text_Mudkip:
	.string "MUDKIP$"

