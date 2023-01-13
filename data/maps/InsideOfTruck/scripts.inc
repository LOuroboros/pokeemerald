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
	lock
// 1st item
	random ITEMS_COUNT
	copyvar VAR_TEMP_1, VAR_RESULT
	bufferitemname STR_VAR_1, VAR_TEMP_1
// 2nd item
	random ITEMS_COUNT
	copyvar VAR_TEMP_2, VAR_RESULT
	bufferitemname STR_VAR_2, VAR_TEMP_2
// 3rd item
	random ITEMS_COUNT
	copyvar VAR_TEMP_3, VAR_RESULT
	bufferitemname STR_VAR_3, VAR_TEMP_3
// Let's roll
	loaddynamic 0, InsideOfTruck_EventScript_MovingBox_Text_StrVar1
	loaddynamic 1, InsideOfTruck_EventScript_MovingBox_Text_StrVar2
	loaddynamic 2, InsideOfTruck_EventScript_MovingBox_Text_StrVar3
	multichoice 20, 6, 3, TRUE
	switch VAR_RESULT
	case 0, InsideOfTruck_EventScript_MovingBox_1stItem
	case 1, InsideOfTruck_EventScript_MovingBox_2ndItem
	case 2, InsideOfTruck_EventScript_MovingBox_3rdItem
	end

InsideOfTruck_EventScript_MovingBox_Text_StrVar1:
	.string "{STR_VAR_1}$"
InsideOfTruck_EventScript_MovingBox_Text_StrVar2:
	.string "{STR_VAR_2}$"
InsideOfTruck_EventScript_MovingBox_Text_StrVar3:
	.string "{STR_VAR_3}$"

InsideOfTruck_EventScript_MovingBox_1stItem:
	giveitem VAR_TEMP_1, 5
	release
	end

InsideOfTruck_EventScript_MovingBox_2ndItem:
	giveitem VAR_TEMP_2, 5
	release
	end

InsideOfTruck_EventScript_MovingBox_3rdItem:
	giveitem VAR_TEMP_3, 5
	release
	end

InsideOfTruck_Text_BoxPrintedWithMonLogo:
	.string "The box is printed with a POKéMON logo.\p"
	.string "It's a POKéMON brand moving and\n"
	.string "delivery service.$"

