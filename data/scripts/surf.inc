EventScript_UseSurf::
	compare VAR_TEMP_1, 1 @ Using Surf from Ocarina
	goto_if_eq EventScript_SurfOcarina
	checkpartymove MOVE_SURF
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq EventScript_EndUseSurf
	bufferpartymonnick 0, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	lockall
	msgbox gText_WantToUseSurf, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_ReleaseUseSurf
	msgbox gText_PlayerUsedSurf, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_SURF
EventScript_ReleaseUseSurf::
	setvar VAR_TEMP_1, 0
	releaseall
EventScript_EndUseSurf::
	end

EventScript_SurfOcarina:
	lockall
	msgbox gText_WantToUseSurf, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_ReleaseUseSurf
	setvar VAR_TEMP_2, SPECIES_WAILORD
	msgbox gText_PlayerUsedSurfOcarina, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_SURF
	setvar VAR_TEMP_1, 0
	releaseall
	end
