EventScript_UseFlash:: @ 82926F8
	compare VAR_TEMP_1, 1 @ Using Flash from Ocarina
	goto_if_eq EventScript_FlashOcarina
	animateflash 1
	setflashradius 1
	end

EventScript_FlashOcarina:: @ 82926F8
@	setvar VAR_TEMP_2, SPECIES_ALAKAZAM // Unused, for now
	msgbox Text_PlayerUsedFlashOcarina, MSGBOX_DEFAULT
	closemessage
	animateflash 1
	setflashradius 1
	end

Text_PlayerUsedFlashOcarina:
	.string "{PLAYER} called an ALAKAZAM\nusing the OCARINA!$"

