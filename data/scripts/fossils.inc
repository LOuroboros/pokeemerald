FossilScript_ChooseDomeFossil::
	checkitem ITEM_DOME_FOSSIL, 1
	goto_if_var_eq VAR_RESULT, FALSE, FossilScript_ChooseFossilDontHaveFossil
	setvar VAR_TEMP_2, ITEM_DOME_FOSSIL
	bufferspeciesname 0, SPECIES_KABUTO
	setvar VAR_TEMP_1, SPECIES_KABUTO
	goto FossilScript_GiveFossil
	end

FossilScript_ChooseHelixFossil::
	checkitem ITEM_HELIX_FOSSIL, 1
	goto_if_var_eq VAR_RESULT, FALSE, FossilScript_ChooseFossilDontHaveFossil
	setvar VAR_TEMP_2, ITEM_HELIX_FOSSIL
	bufferspeciesname 0, SPECIES_OMANYTE
	setvar VAR_TEMP_1, SPECIES_OMANYTE
	goto FossilScript_GiveFossil
	end

FossilScript_ChooseOldAmber::
	checkitem ITEM_OLD_AMBER, 1
	goto_if_var_eq VAR_RESULT, FALSE, FossilScript_ChooseFossilDontHaveFossil
	setvar VAR_TEMP_2, ITEM_OLD_AMBER
	bufferspeciesname 0, SPECIES_AERODACTYL
	setvar VAR_TEMP_1, SPECIES_AERODACTYL
	goto FossilScript_GiveFossil
	end

FossilScript_ChooseClawFossil::
	checkitem ITEM_CLAW_FOSSIL, 1
	goto_if_var_eq VAR_RESULT, FALSE, FossilScript_ChooseFossilDontHaveFossil
	setvar VAR_TEMP_2, ITEM_CLAW_FOSSIL
	bufferspeciesname 0, SPECIES_ANORITH
	setvar VAR_TEMP_1, SPECIES_ANORITH
	goto FossilScript_GiveFossil
	end

FossilScript_ChooseRootFossil::
	checkitem ITEM_ROOT_FOSSIL, 1
	goto_if_var_eq VAR_RESULT, FALSE, FossilScript_ChooseFossilDontHaveFossil
	setvar VAR_TEMP_2, ITEM_ROOT_FOSSIL
	bufferspeciesname 0, SPECIES_LILEEP
	setvar VAR_TEMP_1, SPECIES_LILEEP
	goto FossilScript_GiveFossil
	end

FossilScript_ChooseSkullFossil::
	checkitem ITEM_SKULL_FOSSIL, 1
	goto_if_var_eq VAR_RESULT, FALSE, FossilScript_ChooseFossilDontHaveFossil
	setvar VAR_TEMP_2, ITEM_SKULL_FOSSIL
	bufferspeciesname 0, SPECIES_CRANIDOS
	setvar VAR_TEMP_1, SPECIES_CRANIDOS
	goto FossilScript_GiveFossil
	end

FossilScript_ChooseArmorFossil::
	checkitem ITEM_ARMOR_FOSSIL, 1
	goto_if_var_eq VAR_RESULT, FALSE, FossilScript_ChooseFossilDontHaveFossil
	setvar VAR_TEMP_2, ITEM_ARMOR_FOSSIL
	bufferspeciesname 0, SPECIES_SHIELDON
	setvar VAR_TEMP_1, SPECIES_SHIELDON
	goto FossilScript_GiveFossil
	end

FossilScript_ChooseFossilDontHaveFossil::
	msgbox FossilScript_Text_DontHaveFossil, MSGBOX_NPC
	end

FossilScript_GiveFossil::
	bufferitemname 1, VAR_TEMP_2
	msgbox FossilScript_Text_HandedOverFossil, MSGBOX_DEFAULT
	removeitem VAR_TEMP_2
	fadescreenspeed FADE_TO_BLACK, 4
@	playse INSERT_SOME_NICE_SOUND_EFFECT_HERE
@	waitse
	fadescreenspeed FADE_FROM_BLACK, 4
	goto_if_var_eq VAR_TEMP_2, ITEM_DOME_FOSSIL, FossilScript_GiveFossilMon
	goto_if_var_eq VAR_TEMP_2, ITEM_HELIX_FOSSIL, FossilScript_GiveFossilMon
	goto_if_var_eq VAR_TEMP_2, ITEM_OLD_AMBER, FossilScript_GiveFossilMon
	goto_if_var_eq VAR_TEMP_2, ITEM_CLAW_FOSSIL, FossilScript_GiveFossilMon
	goto_if_var_eq VAR_TEMP_2, ITEM_ROOT_FOSSIL, FossilScript_GiveFossilMon
	goto_if_var_eq VAR_TEMP_2, ITEM_SKULL_FOSSIL, FossilScript_GiveFossilMon
	goto_if_var_eq VAR_TEMP_2, ITEM_ARMOR_FOSSIL, FossilScript_GiveFossilMon
	release
	end

FossilScript_GiveFossilMon::
	msgbox FossilScript_Text_FossilizedMonBroughtBackToLife, MSGBOX_DEFAULT
	givemon VAR_TEMP_1, 5, ITEM_NONE
	goto_if_var_eq VAR_RESULT, 0, FossilScript_ReceiveFossilMonParty
	goto_if_var_eq VAR_RESULT, 1, FossilScript_ReceiveFossilMonPC
	goto Common_EventScript_NoMoreRoomForPokemon
	end

FossilScript_ReceiveFossilMonParty::
	call FossilScript_ReceivedFossilMonFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_var_eq VAR_RESULT, NO, FossilScript_FinishReceivingFossilMon
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	msgbox FossilScript_Text_PleaseComeByAgain, MSGBOX_NPC
	release
	end

FossilScript_ReceiveFossilMonPC::
	call FossilScript_ReceivedFossilMonFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_var_eq VAR_RESULT, NO, FossilScript_TransferFossilMonToPC
	call Common_EventScript_NameReceivedBoxMon
	call Common_EventScript_TransferredToPC
	msgbox FossilScript_Text_PleaseComeByAgain, MSGBOX_NPC
	release
	end

FossilScript_ReceivedFossilMonFanfare::
	bufferspeciesname 0, VAR_TEMP_1
	playfanfare MUS_HG_EVOLVED
	message FossilScript_Text_ReceivedFossilMon
	waitmessage
	waitfanfare
	return

FossilScript_TransferFossilMonToPC::
	call Common_EventScript_TransferredToPC
FossilScript_FinishReceivingFossilMon::
	msgbox FossilScript_Text_PleaseComeByAgain, MSGBOX_NPC
	release
	end

FossilScript_Text_DontHaveFossil::
	.string "You don't have that fossil.$"

FossilScript_Text_HandedOverFossil::
	.string "Excellent!\n"
	.string "Let's do this right away.\p"
	.string "{PLAYER} handed over the {STR_VAR_2}.$"

FossilScript_Text_FossilizedMonBroughtBackToLife::
	.string "Thanks for waiting!\p"
	.string "Your fossilized POKéMON has been\n"
	.string "brought back to life!\p"
	.string "The fossil was an ancient POKéMON\n"
	.string "called {STR_VAR_1}!$"

FossilScript_Text_ReceivedFossilMon::
	.string "{PLAYER} received a {STR_VAR_1}!$"

FossilScript_Text_PleaseComeByAgain::
	.string "Please come by again if you\n"
	.string "ever want to revive a fossil.$"
