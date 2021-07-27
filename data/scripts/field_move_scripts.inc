@ Interact with cuttable tree
EventScript_CutTree::
	lockall
	goto_if_unset FLAG_BADGE01_GET, EventScript_CheckTreeCantCut
	compare VAR_TEMP_1, 1 @ Using Cut from Ocarina
	goto_if_eq EventScript_CutTreeOcarina
	checkpartymove MOVE_CUT
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq EventScript_CheckTreeCantCut
	setfieldeffectargument 0, VAR_RESULT
	bufferpartymonnick 0, VAR_RESULT
	buffermovename 1, MOVE_CUT
	msgbox Text_WantToCut, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_CancelCut
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
	closemessage
	dofieldeffect FLDEFF_USE_CUT_ON_TREE
	waitstate
	setvar VAR_TEMP_1, 0
	goto EventScript_CutTreeDown
	end

EventScript_CutTreeOcarina:
	msgbox Text_WantToCut, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_CancelCut
	setvar VAR_TEMP_2, SPECIES_VIGOROTH
	msgbox Text_PlayerUsedCutOcarina, MSGBOX_DEFAULT
	closemessage
	dofieldeffect FLDEFF_USE_CUT_ON_TREE
	waitstate
	setvar VAR_TEMP_1, 0
	goto EventScript_CutTreeDown
	end

@ Use cut from party menu
EventScript_UseCut::
	lockall
	dofieldeffect FLDEFF_USE_CUT_ON_TREE
	waitstate
	setvar VAR_TEMP_1, 0
	goto EventScript_CutTreeDown
	end

EventScript_CutTreeDown::
	applymovement VAR_LAST_TALKED, Movement_CutTreeDown
	waitmovement 0
	removeobject VAR_LAST_TALKED
	releaseall
	end

Movement_CutTreeDown:
	cut_tree
	step_end

EventScript_CheckTreeCantCut::
	msgbox Text_CantCut, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CancelCut::
	closemessage
	releaseall
	end

Text_WantToCut:
	.string "This tree looks like it can be\n"
	.string "CUT down!\p"
	.string "Would you like to CUT it?$"

Text_MonUsedFieldMove:
	.string "{STR_VAR_1} used {STR_VAR_2}!$"

Text_PlayerUsedCutOcarina:
	.string "{PLAYER} called a VIGOROTH\nusing the OCARINA!$"

Text_CantCut:
	.string "This tree looks like it can be\n"
	.string "CUT down!$"

@ Interact with smashable rock
EventScript_RockSmash::
	lockall
	goto_if_unset FLAG_BADGE03_GET, EventScript_CantSmashRock
	compare VAR_TEMP_1, 1 @ Using Rock Smash from Ocarina
	goto_if_eq EventScript_RockSmashOcarina
	checkpartymove MOVE_ROCK_SMASH
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq EventScript_CantSmashRock
	setfieldeffectargument 0, VAR_RESULT
	bufferpartymonnick 0, VAR_RESULT
	buffermovename 1, MOVE_ROCK_SMASH
	msgbox Text_WantToSmash, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_CancelSmash
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
	closemessage
	dofieldeffect FLDEFF_USE_ROCK_SMASH
	waitstate
	setvar VAR_TEMP_1, 0
	goto EventScript_SmashRock
	end

EventScript_RockSmashOcarina:
	msgbox Text_WantToSmash, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_CancelSmash
	setvar VAR_TEMP_2, SPECIES_EXPLOUD
	msgbox Text_PlayerUsedRockSmashOcarina, MSGBOX_DEFAULT
	closemessage
	dofieldeffect FLDEFF_USE_ROCK_SMASH
	waitstate
	setvar VAR_TEMP_1, 0
	goto EventScript_SmashRock
	end

@ Use rock smash from party menu
EventScript_UseRockSmash::
	lockall
	dofieldeffect FLDEFF_USE_ROCK_SMASH
	waitstate
	setvar VAR_TEMP_1, 0
	goto EventScript_SmashRock
	end

EventScript_SmashRock::
	applymovement VAR_LAST_TALKED, Movement_SmashRock
	waitmovement 0
	removeobject VAR_LAST_TALKED
	specialvar VAR_RESULT, TryUpdateRusturfTunnelState
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_EndSmash
	special RockSmashWildEncounter
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_EndSmash
	waitstate
	releaseall
	end

EventScript_EndSmash::
	releaseall
	end

Movement_SmashRock:
	rock_smash_break
	step_end

EventScript_CantSmashRock::
	msgbox Text_CantSmash, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CancelSmash::
	closemessage
	releaseall
	end

Text_WantToSmash:
	.string "This rock appears to be breakable.\n"
	.string "Would you like to use ROCK SMASH?$"

Text_PlayerUsedRockSmashOcarina:
	.string "{PLAYER} called an EXPLOUD\nusing the OCARINA!$"	

Text_CantSmash:
	.string "It's a rugged rock, but a POKéMON\n"
	.string "may be able to smash it.$"

EventScript_StrengthBoulder::
	lockall
	goto_if_unset FLAG_BADGE04_GET, EventScript_CantStrength
	compare VAR_TEMP_1, 1 @ Using Strength from Ocarina
	goto_if_eq EventScript_StrengthOcarina
	goto_if_set FLAG_SYS_USE_STRENGTH, EventScript_CheckActivatedBoulder
	checkpartymove MOVE_STRENGTH
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq EventScript_CantStrength
	setfieldeffectargument 0, VAR_RESULT
	msgbox Text_WantToStrength, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_CancelStrength
	closemessage
	dofieldeffect FLDEFF_USE_STRENGTH
	waitstate
	setvar VAR_TEMP_1, 0
	goto EventScript_ActivateStrength
	end

EventScript_StrengthOcarina:
	msgbox Text_WantToStrength, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_CancelStrength
	closemessage
	setvar VAR_TEMP_2, SPECIES_MACHAMP
	dofieldeffect FLDEFF_USE_STRENGTH
	waitstate
	setvar VAR_TEMP_1, 0
	goto EventScript_ActivateStrengthOcarina
	end

EventScript_UseStrength::
	lockall
	dofieldeffect FLDEFF_USE_STRENGTH
	waitstate
	setvar VAR_TEMP_1, 0
	goto EventScript_ActivateStrength
	end

EventScript_ActivateStrength::
	setflag FLAG_SYS_USE_STRENGTH
	msgbox Text_MonUsedStrength, MSGBOX_DEFAULT
	setvar VAR_TEMP_1, 0
	releaseall
	end

EventScript_ActivateStrengthOcarina:
	setflag FLAG_SYS_USE_STRENGTH
	msgbox Text_PlayerUsedStrengthOcarina, MSGBOX_DEFAULT
	setvar VAR_TEMP_1, 0
	releaseall
	end

EventScript_CantStrength::
	msgbox Text_CantStrength, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CheckActivatedBoulder::
	msgbox Text_StrengthActivated, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CancelStrength::
	closemessage
	releaseall
	end

Text_WantToStrength:
	.string "It's a big boulder, but a POKéMON\n"
	.string "may be able to push it aside.\p"
	.string "Would you like to use STRENGTH?$"

Text_MonUsedStrength:
	.string "{STR_VAR_1} used STRENGTH!\p"
	.string "{STR_VAR_1}'s STRENGTH made it\n"
	.string "possible to move boulders around!$"

Text_PlayerUsedStrengthOcarina:
	.string "{PLAYER} called a MACHAMP\nusing the OCARINA!\pMACHAMP's STRENGTH made it possible\nto move boulders around!$"

Text_CantStrength:
	.string "It's a big boulder, but a POKéMON\n"
	.string "may be able to push it aside.$"

Text_StrengthActivated:
	.string "STRENGTH made it possible to move\n"
	.string "boulders around.$"

EventScript_UseWaterfall::
	lockall
	compare VAR_TEMP_1, 1 @ Using Waterfall from Ocarina
	goto_if_eq EventScript_WaterfallOcarina
	checkpartymove MOVE_WATERFALL
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq EventScript_CantWaterfall
	bufferpartymonnick 0, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	msgbox Text_WantToWaterfall, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_EndWaterfall
	msgbox Text_MonUsedWaterfall, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_WATERFALL
	setvar VAR_TEMP_1, 0
	goto EventScript_EndWaterfall

EventScript_WaterfallOcarina:
	msgbox Text_WantToWaterfall, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_EndWaterfall
	setvar VAR_TEMP_2, SPECIES_WAILMER
	msgbox Text_PlayerUsedWaterfallOcarina, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_WATERFALL
	setvar VAR_TEMP_1, 0
	goto EventScript_EndWaterfall

EventScript_CannotUseWaterfall::
	lockall

EventScript_CantWaterfall::
	msgbox Text_CantWaterfall, MSGBOX_DEFAULT

EventScript_EndWaterfall::
	releaseall
	end

Text_CantWaterfall:
	.string "A wall of water is crashing down with\n"
	.string "a mighty roar.$"

Text_WantToWaterfall:
	.string "It's a large waterfall.\n"
	.string "Would you like to use WATERFALL?$"

Text_MonUsedWaterfall:
	.string "{STR_VAR_1} used WATERFALL.$"

Text_PlayerUsedWaterfallOcarina:
	.string "{PLAYER} called a WAILMER\nusing the OCARINA!$"

EventScript_UseDive::
	lockall
	compare VAR_TEMP_1, 1 @ Using Dive from Ocarina
	goto_if_eq EventScript_DiveOcarina
	checkpartymove MOVE_DIVE
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq EventScript_CantDive
	bufferpartymonnick 0, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	setfieldeffectargument 1, 1
	msgbox Text_WantToDive, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_EndDive
	msgbox Text_MonUsedDive, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_DIVE
	setvar VAR_TEMP_1, 0
	goto EventScript_EndDive
	end

EventScript_DiveOcarina:
	msgbox Text_WantToDive, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_EndDive
	setvar VAR_TEMP_2, SPECIES_SHARPEDO
	msgbox Text_PlayerUsedDiveOcarina, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_DIVE
	setvar VAR_TEMP_1, 0
	goto EventScript_EndDive
	end

EventScript_CantDive::
	msgbox Text_CantDive, MSGBOX_DEFAULT
	releaseall
	end

EventScript_EndDive::
	releaseall
	end

EventScript_UseDiveUnderwater::
	lockall
	compare VAR_TEMP_1, 1 @ Using Dive from Ocarina
	goto_if_eq EventScript_DiveUnderwaterOcarina
	checkpartymove MOVE_DIVE
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq EventScript_CantSurface
	bufferpartymonnick 0, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	setfieldeffectargument 1, 1
	msgbox Text_WantToSurface, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_EndSurface
	msgbox Text_MonUsedDive, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_DIVE
	setvar VAR_TEMP_1, 0
	goto EventScript_EndSurface
	end

EventScript_DiveUnderwaterOcarina:
	msgbox Text_WantToSurface, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_EndSurface
	setvar VAR_TEMP_2, SPECIES_SHARPEDO
	msgbox Text_PlayerUsedDiveOcarinaUnderwater, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_DIVE
	setvar VAR_TEMP_1, 0
	goto EventScript_EndSurface
	end

EventScript_CantSurface::
	lockall
	msgbox Text_CantSurface, MSGBOX_DEFAULT
	goto EventScript_EndSurface
	end

EventScript_EndSurface::
	releaseall
	end

Text_CantDive:
	.string "The sea is deep here. A POKéMON\n"
	.string "may be able to go underwater.$"

Text_WantToDive:
	.string "The sea is deep here.\n"
	.string "Would you like to use DIVE?$"

Text_MonUsedDive:
	.string "{STR_VAR_1} used DIVE.$"

Text_PlayerUsedDiveOcarina:
	.string "{PLAYER} called a SHARPEDO\nusing the OCARINA!$"

Text_PlayerUsedDiveOcarinaUnderwater:
	.string "SHARPEDO took {PLAYER}\nback to the surface!$"

Text_CantSurface:
	.string "Light is filtering down from above.\n"
	.string "A POKéMON may be able to surface.$"

Text_WantToSurface:
	.string "Light is filtering down from above.\n"
	.string "Would you like to use DIVE?$"

EventScript_FailSweetScent::
	msgbox Text_FailSweetScent, MSGBOX_SIGN
	end

Text_FailSweetScent:
	.string "Looks like there's nothing here…$"
