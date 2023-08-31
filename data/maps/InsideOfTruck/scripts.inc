InsideOfTruck_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, InsideOfTruck_OnLoad
	map_script MAP_SCRIPT_ON_RESUME, InsideOfTruck_OnResume
	.byte 0

InsideOfTruck_OnLoad:
	setmetatile 4, 1, METATILE_InsideOfTruck_ExitLight_Top, FALSE
	setmetatile 4, 2, METATILE_InsideOfTruck_ExitLight_Mid, FALSE
	setmetatile 4, 3, METATILE_InsideOfTruck_ExitLight_Bottom, FALSE
	end

InsideOfTruck_OnResume:
	setstepcallback STEP_CB_TRUCK
	end

InsideOfTruck_EventScript_SetIntroFlags::
	lockall
	setflag FLAG_HIDE_MAP_NAME_POPUP
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, InsideOfTruck_EventScript_SetIntroFlagsMale
	goto_if_eq VAR_RESULT, FEMALE, InsideOfTruck_EventScript_SetIntroFlagsFemale
	end

InsideOfTruck_EventScript_SetIntroFlagsMale::
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1
	setdynamicwarp MAP_LITTLEROOT_TOWN, 3, 10
	releaseall
	end

InsideOfTruck_EventScript_SetIntroFlagsFemale::
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
	setvar VAR_LITTLEROOT_INTRO_STATE, 2
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_SIBLING
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 1
	setdynamicwarp MAP_LITTLEROOT_TOWN, 12, 10
	releaseall
	end

InsideOfTruck_EventScript_MovingBox::
	speakername InsideOfTruck_Text_Kamisama
	msgbox InsideOfTruck_Text_BoxPrintedWithMonLogo, MSGBOX_DEFAULT
	dynmultichoice 3, 4, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, InsideOfTruck_Text_Opcion1, InsideOfTruck_Text_Opcion2, InsideOfTruck_Text_Opcion3, InsideOfTruck_Text_Opcion4
	switch VAR_RESULT
	case 0, InsideOfTruck_EventScript_MovingBox_Opcion1
	case 1, InsideOfTruck_EventScript_MovingBox_Opcion2
	case 2, InsideOfTruck_EventScript_MovingBox_Opcion3
	case 3, InsideOfTruck_EventScript_MovingBox_Opcion4
	release
	end

InsideOfTruck_EventScript_MovingBox_Opcion1:
	speakername InsideOfTruck_Text_Kamisama
	msgbox InsideOfTruck_Text_Opcion1Aftermath, MSGBOX_DEFAULT
	release
	end

InsideOfTruck_EventScript_MovingBox_Opcion2:
	speakername InsideOfTruck_Text_Kamisama
	msgbox InsideOfTruck_Text_Opcion2Aftermath, MSGBOX_DEFAULT
	release
	end

InsideOfTruck_EventScript_MovingBox_Opcion3:
	speakername InsideOfTruck_Text_Kamisama
	msgbox InsideOfTruck_Text_Opcion3Aftermath, MSGBOX_DEFAULT
	release
	end

InsideOfTruck_EventScript_MovingBox_Opcion4:
	speakername InsideOfTruck_Text_Kamisama
	msgbox InsideOfTruck_Text_Opcion4Aftermath, MSGBOX_DEFAULT
	release
	end

InsideOfTruck_Text_Kamisama:
	.string "Kami-sama$"
InsideOfTruck_Text_BoxPrintedWithMonLogo:
	.string "¡Que se abra el multichoice...!$"
InsideOfTruck_Text_Opcion1:
	.string "Opción 1$"
InsideOfTruck_Text_Opcion2:
	.string "Opción 2$"
InsideOfTruck_Text_Opcion3:
	.string "Opción 3$"
InsideOfTruck_Text_Opcion4:
	.string "Opción 4$"
InsideOfTruck_Text_Opcion1Aftermath:
	.string "Esta es el resultado de\nla opción 1.$"
InsideOfTruck_Text_Opcion2Aftermath:
	.string "Esta es el resultado de\nla opción 2.$"
InsideOfTruck_Text_Opcion3Aftermath:
	.string "Esta es el resultado de\nla opción 3.$"
InsideOfTruck_Text_Opcion4Aftermath:
	.string "Esta es el resultado de\nla opción 4.$"
