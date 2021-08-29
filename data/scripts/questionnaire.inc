EventScript_Questionnaire::
	lockall
	msgbox Questionnaire_Text_FillOutQuestionnaire, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Questionnaire_EventScript_Release
	setvar VAR_0x8004, EASY_CHAT_TYPE_QUESTIONNAIRE
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	specialvar VAR_0x8008, GetMartEmployeeObjectEventId
	goto_if_var_eq VAR_0x8004, 1, Questionnaire_EventScript_PlayerInputMysteryEventPhrase
	goto_if_var_eq VAR_RESULT, 0, Questionnaire_EventScript_Release
	goto_if_var_eq VAR_RESULT, 1, Questionnaire_EventScript_QuestionnaireThankYou
	end

Questionnaire_EventScript_PlayerInputMysteryEventPhrase::
	goto_if_unset FLAG_SYS_POKEDEX_GET, Questionnaire_EventScript_QuestionnaireThankYou
	goto_if_set FLAG_OBTAINED_PICHU_EGG, Questionnaire_EventScript_QuestionnaireThankYou
	applymovement VAR_0x8008, Common_Movement_FaceDown
	waitmovement 0
	playse SE_PIN
	applymovement VAR_0x8008, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement VAR_0x8008, Common_Movement_Delay48
	waitmovement 0
	msgbox Questionnaire_Text_YouKnowThoseWordsEvent, MSGBOX_DEFAULT
	call Questionnaire_EventScript_PichuEgg
	setflag FLAG_OBTAINED_PICHU_EGG
	msgbox Questionnaire_Text_QuestionnaireThankYou, MSGBOX_DEFAULT
	releaseall
	end

Questionnaire_EventScript_Release::
	releaseall
	end

Questionnaire_EventScript_QuestionnaireThankYou::
	applymovement VAR_0x8008, Common_Movement_FaceDown
	waitmovement 0
	msgbox Questionnaire_Text_QuestionnaireThankYou, MSGBOX_DEFAULT
	releaseall
	end

Questionnaire_EventScript_PichuEgg::
	specialvar VAR_RESULT, CalculatePlayerPartyCount
	goto_if_var_eq VAR_RESULT, PARTY_SIZE, Questionnaire_EventScript_FullParty
	giveegg SPECIES_PICHU
	setmoneventlegal VAR_RESULT
	setmonmetlocation VAR_RESULT, METLOC_FATEFUL_ENCOUNTER
	call_if_var_eq VAR_RESULT, 1, Questionnaire_EventScript_PichuEgg_Slot2
	call_if_var_eq VAR_RESULT, 2, Questionnaire_EventScript_PichuEgg_Slot3
	call_if_var_eq VAR_RESULT, 3, Questionnaire_EventScript_PichuEgg_Slot4
	call_if_var_eq VAR_RESULT, 4, Questionnaire_EventScript_PichuEgg_Slot5
	call_if_var_eq VAR_RESULT, 5, Questionnaire_EventScript_PichuEgg_Slot6
	playfanfare MUS_OBTAIN_ITEM
	msgbox gPlayerReceivedAnEgg, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	return

Questionnaire_EventScript_FullParty:
	msgbox gText_PartyFull, MSGBOX_DEFAULT
	release
	end

Questionnaire_EventScript_PichuEgg_Slot2:
	setmonmove 1, 3, MOVE_SURF
	return

Questionnaire_EventScript_PichuEgg_Slot3::
	setmonmove 2, 3, MOVE_SURF
	return

Questionnaire_EventScript_PichuEgg_Slot4:
	setmonmove 3, 3, MOVE_SURF
	return

Questionnaire_EventScript_PichuEgg_Slot5:
	setmonmove 4, 3, MOVE_SURF
	return

Questionnaire_EventScript_PichuEgg_Slot6:
	setmonmove 5, 3, MOVE_SURF
	return

Questionnaire_Text_FillOutQuestionnaire::
	.string "There is a questionnaire.\n"
	.string "Would you like to fill it out?$"

Questionnaire_Text_QuestionnaireThankYou::
	.string "Thank you for taking the time to\n"
	.string "fill out our questionnaire.\p"
	.string "Your feedback will be used for\n"
	.string "future reference.$"

Questionnaire_Text_YouKnowThoseWordsGift::
	.string "Oh, hello!\n"
	.string "You know those words?\p"
	.string "That means you must know about\n"
	.string "the MYSTERY GIFT.\p"
	.string "From now on, you should be\n"
	.string "receiving MYSTERY GIFTS!$"

Questionnaire_Text_YouCanAccessMysteryGift::
	.string "Once you save your game, you can\n"
	.string "access the MYSTERY GIFT.$"

Questionnaire_Text_YouKnowThoseWordsEvent::
	.string "Oh, hello!\n"
	.string "You know those words?\p"
	.string "That means you must know about\n"
	.string "the MYSTERY EVENT.\p"
	.string "Sadly, MYSTERY EVENTS are over.\p"
	.string "Here, take this egg for your\n"
	.string "troubles."

Questionnaire_Text_YouCanAccessMysteryEvent::
	.string "Once you save your game, you can\n"
	.string "access the MYSTERY EVENT.$"

Questionnaire_Text_TheresATicketForYou::
	.string "Thank you for using the MYSTERY\n"
	.string "EVENT System.\p"
	.string "You must be {PLAYER}.\n"
	.string "There is a ticket here for you.$"

Questionnaire_Text_TryUsingItAtLilycovePort::
	.string "It appears to be for use at\n"
	.string "the LILYCOVE CITY port.\p"
	.string "Why not give it a try and see what\n"
	.string "it is about?$"

gPlayerReceivedAnEgg::
	.string "{PLAYER} received a Pokémon Egg!"
