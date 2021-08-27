EventScript_CostumeSwap::
	lockall
	fadescreen FADE_TO_BLACK
	setvar VAR_TEMP_1, COSTUME_1
	special SwapPlayersCostume
	fadescreen FADE_FROM_BLACK
	releaseall
	end
