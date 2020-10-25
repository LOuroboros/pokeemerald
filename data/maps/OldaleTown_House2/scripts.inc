OldaleTown_House2_MapScripts:: @ 81FBF5A
	.byte 0

OldaleTown_House2_EventScript_Woman:: @ 81FBF5B
	msgbox OldaleTown_House2_Text_PokemonLevelUp, MSGBOX_NPC
	end

OldaleTown_House2_EventScript_Man:: @ 81FBF64
	msgbox OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon, MSGBOX_NPC
	end

OldaleTown_House2_Text_PokemonLevelUp: @ 81FBF6D
	.string "Cuando los POKéMON luchan,\n"
	.string "suben de nivel y se hacen más fuertes.$"

OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon: @ 81FBFB0
	.string "Si los POKéMON que tienes se vuelven\n"
	.string "más fuertes, podrás viajar más lejos.$"
