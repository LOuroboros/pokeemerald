MtPyre_6F_MapScripts::
	.byte 0

MtPyre_6F_EventScript_Valerie::
	trainerbattle_single TRAINER_VALERIE_1, MtPyre_6F_Text_ValerieIntro, MtPyre_6F_Text_ValerieDefeat, MtPyre_6F_EventScript_RegisterValerie
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, TRUE
	goto_if_eq MtPyre_6F_EventScript_RematchValerie
	msgbox MtPyre_6F_Text_ValeriePostBattle, MSGBOX_DEFAULT
	release
	end

MtPyre_6F_EventScript_RegisterValerie::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox MtPyre_6F_Text_ValerieRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_VALERIE_1
	release
	end

MtPyre_6F_EventScript_RematchValerie::
	trainerbattle_rematch TRAINER_VALERIE_1, MtPyre_6F_Text_ValerieRematchIntro, MtPyre_6F_Text_ValerieRematchDefeat
	msgbox MtPyre_6F_Text_ValeriePostRematch, MSGBOX_AUTOCLOSE
	end

MtPyre_6F_EventScript_Cedric::
	trainerbattle_single TRAINER_CEDRIC, MtPyre_6F_Text_CedricIntro, MtPyre_6F_Text_CedricDefeat
	msgbox MtPyre_6F_Text_CedricPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_6F_EventScript_Spiritomb::
	lock
	goto_if_set FLAG_SPIRITOMB_EVENT_END, MtPyre_6F_EventScript_Spiritomb4
	goto_if_set FLAG_SPIRITOMB_EVENT_IN_PROGRESS, MtPyre_6F_EventScript_Spiritomb3Take2
	checkitem ITEM_ODD_KEYSTONE, 1
	compare VAR_RESULT, TRUE
	goto_if_eq MtPyre_6F_EventScript_Spiritomb2
	msgbox MtPyre_6F_Text_WhiteTombstone_WhiteTombstone, MSGBOX_DEFAULT
MtPyre_6F_EventScript_SpiritombEnd:
	release
	end

MtPyre_6F_EventScript_Spiritomb2:
	msgbox MtPyre_6F_Text_WhiteTombstone_WhiteTombstonePresence, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq MtPyre_6F_EventScript_Spiritomb3
	release
	end

MtPyre_6F_EventScript_Spiritomb3:
	msgbox MtPyre_6F_Text_WhiteTombstone_PlayerUsesTheOddKeystone, MSGBOX_DEFAULT
	closemessage
	delay 120
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	waitse
	msgbox MtPyre_6F_Text_WhiteTombstone_TheOddKeystoneFloats, MSGBOX_DEFAULT
	closemessage
	removeitem ITEM_ODD_KEYSTONE
	setflag FLAG_SPIRITOMB_EVENT_IN_PROGRESS
	delay 60
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	waitse
MtPyre_6F_EventScript_Spiritomb3Take2:
	playmoncry SPECIES_SPIRITOMB, 0
	msgbox MtPyre_6F_Text_WhiteTombstone_SpiritombAttacks, MSGBOX_AUTOCLOSE
	waitmoncry
	setcustomwildbattle SPECIES_SPIRITOMB, 50, ITEM_ODD_KEYSTONE, NATURE_BOLD, 0, 0, 0, 0, 0, 0, 0, 15, 15, 15, 15, 15, 15, MOVE_CURSE, MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_NASTY_PLOT, 0
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq MtPyre_6F_EventScript_SpiritombEnd
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq MtPyre_6F_EventScript_SpiritombEnd
	msgbox MtPyre_6F_Text_WhiteTombstone_WhiteTombstonePresenceDisappeared, MSGBOX_DEFAULT
	setflag FLAG_SPIRITOMB_EVENT_END
	release
	end

MtPyre_6F_EventScript_Spiritomb4:
	msgbox MtPyre_6F_Text_WhiteTombstone_ItIsAWhiteTombstone, MSGBOX_DEFAULT
	release
	end

MtPyre_6F_Text_ValerieIntro:
	.string "When I'm here…\n"
	.string "A curious power flows into me…$"

MtPyre_6F_Text_ValerieDefeat:
	.string "The power is ebbing away…$"

MtPyre_6F_Text_ValeriePostBattle:
	.string "Perhaps the power is from the spirits\n"
	.string "of POKéMON in fitful sleep here…$"

MtPyre_6F_Text_ValerieRegister:
	.string "Fufufu… I lost the match, but…\n"
	.string "I have this little ability…\p"
	.string "Without ever laying my hands on\n"
	.string "your POKéNAV… Hiyah!$"

MtPyre_6F_Text_ValerieRematchIntro:
	.string "Behind you…\n"
	.string "What is it…$"

MtPyre_6F_Text_ValerieRematchDefeat:
	.string "Something faded away…$"

MtPyre_6F_Text_ValeriePostRematch:
	.string "The POKéMON at rest here…\n"
	.string "Sometimes, they play…$"

MtPyre_6F_Text_CedricIntro:
	.string "Have you lost your bearings?\n"
	.string "Have no fear for I am here!$"

MtPyre_6F_Text_CedricDefeat:
	.string "Weren't you lost?$"

MtPyre_6F_Text_CedricPostBattle:
	.string "I had this feeling that a lost TRAINER\n"
	.string "would be panicked and easy to beat.\p"
	.string "It's dirty and I won't try it again…$"

MtPyre_6F_Text_WhiteTombstone_WhiteTombstone:
	.string "It's a white tombstone.\pA presence can be felt coming\nfrom it.$"

MtPyre_6F_Text_WhiteTombstone_WhiteTombstonePresence:
	.string "It's a white tombstone.\nA presence can be felt coming from it.\pThe ODD KEYSTONE is shaking.\nDo you want to use it?$"

MtPyre_6F_Text_WhiteTombstone_PlayerUsesTheOddKeystone:
	.string "{PLAYER} puts the SILPH SCOPE on\nand holds the ODD KEYSTONE in front\lof the white tombstone.$"

MtPyre_6F_Text_WhiteTombstone_TheOddKeystoneFloats:
	.string "The ODD KEYSTONE starts to float\ntowards the white tombstone.$"

MtPyre_6F_Text_WhiteTombstone_SpiritombAttacks:
	.string "Yulaaah!$"

MtPyre_6F_Text_WhiteTombstone_WhiteTombstonePresenceDisappeared:
	.string "The SILPH SCOPE is no longer\ndetecting anything.\pThe tombstone has been purified.$"

MtPyre_6F_Text_WhiteTombstone_ItIsAWhiteTombstone:
	.string "It's a white tombstone.$"
