.set LOCALID_WALLACE, 1

CaveOfOrigin_B1F_MapScripts:: 
	.byte 0

CaveOfOrigin_B1F_EventScript_Wallace:: 
	lock
	faceplayer
	msgbox CaveOfOrigin_B1F_Text_WallaceStory, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFastestUp
	waitmovement 0
	delay 60
	playse SE_PIN
	applymovement LOCALID_WALLACE, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_WALLACE, Common_Movement_Delay48
	waitmovement 0
	delay 30
	applymovement LOCALID_WALLACE, Common_Movement_FacePlayer
	waitmovement 0
	msgbox CaveOfOrigin_B1F_Text_LetsHeadToSkyPillar, MSGBOX_DEFAULT
	closemessage
	playse SE_EXIT
	fadescreenspeed FADE_TO_BLACK, 4
	setflag FLAG_WALLACE_GOES_TO_SKY_PILLAR
	setvar VAR_SOOTOPOLIS_CITY_STATE, 3
	removeobject LOCALID_WALLACE
	clearflag FLAG_HIDE_SKY_PILLAR_WALLACE
	fadescreen FADE_FROM_BLACK
	release
	end

CaveOfOrigin_B1F_Text_WallaceStory: 
	.string "Ah, so you are {PLAYER}?\n"
	.string "I've heard tales of your exploits.\p"
	.string "My name is WALLACE.\p"
	.string "I was once the GYM LEADER of\n"
	.string "SOOTOPOLIS, but something came up.\p"
	.string "So now, I've entrusted my mentor JUAN\n"
	.string "with the GYM's operation.\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "GROUDON and KYOGRE, the two POKéMON\n"
	.string "wreaking havoc here, are considered\l"
	.string "to be super-ancient POKéMON.\p"
	.string "But there aren't just two super-\n"
	.string "ancient POKéMON.\p"
	.string "There is one more somewhere.\p"
	.string "Somewhere, there is a super-\n"
	.string "ancient POKéMON named RAYQUAZA.\p"
	.string "It's said that it was RAYQUAZA that\n"
	.string "becalmed the two combatants in\l"
	.string "the distant past.\p"
	.string "But where could RAYQUAZA be…$"

CaveOfOrigin_B1F_Text_LetsHeadToSkyPillar: 
	.string "WALLACE: The SKY PILLAR!\p"
	.string "That's it!\n"
	.string "It must be the SKY PILLAR!\p"
	.string "{PLAYER}, there's not a moment to lose!\n"
	.string "We'll head to the SKY PILLAR right away!\p"
	.string "You know where it's located, right?\p"
	.string "It's in ROUTE 131, northeast from\n"
	.string "PACIFIDLOG TOWN.\p"
	.string "Let us make haste.$"

