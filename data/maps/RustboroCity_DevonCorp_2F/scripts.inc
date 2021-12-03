.set LOCALID_FOSSIL_SCIENTIST, 5

RustboroCity_DevonCorp_2F_MapScripts::
	.byte 0

RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist::
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon, MSGBOX_NPC
	end

RustboroCity_DevonCorp_2F_EventScript_BallScientist::
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, RustboroCity_DevonCorp_2F_EventScript_DevelopedBalls
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopingNewBalls, MSGBOX_NPC
	end

RustboroCity_DevonCorp_2F_EventScript_DevelopedBalls::
	msgbox RustboroCity_DevonCorp_2F_Text_WeFinallyMadeNewBalls, MSGBOX_NPC
	end

RustboroCity_DevonCorp_2F_EventScript_PokenavScientist::
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_DevonCorp_2F_EventScript_HasPokenav
	msgbox RustboroCity_DevonCorp_2F_Text_IMadePokenav, MSGBOX_NPC
	end

RustboroCity_DevonCorp_2F_EventScript_HasPokenav::
	msgbox RustboroCity_DevonCorp_2F_Text_WowThatsAPokenav, MSGBOX_NPC
	end

RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist::
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams, MSGBOX_NPC
	end

RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist::
	compare VAR_RUSTBORO_CITY_STATE, 6
	goto_if_ge RustboroCity_DevonCorp_2F_EventScript_WorkOnNext
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopNewPokenavFeature, MSGBOX_NPC
	release
	end

RustboroCity_DevonCorp_2F_EventScript_WorkOnNext::
	msgbox RustboroCity_DevonCorp_2F_Text_WhatToWorkOnNext, MSGBOX_NPC
	end

RustboroCity_DevonCorp_2F_EventScript_FossilScientist::
	goto_if_var_ge VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_DevonCorp_2F_EventScript_FossilScientistReadyForWork
	msgbox RustboroCity_DevonCorp_2F_Text_TryingToDevelopDeviceToResurrectFossils, MSGBOX_NPC
	end

RustboroCity_DevonCorp_2F_EventScript_FossilScientistReadyForWork::
	specialvar VAR_RESULT, HasCaughtFossilMon
	call_if_var_eq VAR_RESULT, FALSE, RustboroCity_DevonCorp_2F_EventScript_FossilScientistReadyForWorkForTheFirstTime
	call_if_var_eq VAR_RESULT, TRUE, RustboroCity_DevonCorp_2F_EventScript_FossilScientistReadyForWorkAgain
	specialvar VAR_RESULT, CountNumberUniqueFossils
	goto_if_var_eq VAR_RESULT, 1, RustboroCity_DevonCorp_2F_EventScript_NoticeFossil
	goto_if_var_ge VAR_RESULT, 2, RustboroCity_DevonCorp_2F_EventScript_NoticeFossils
	end

RustboroCity_DevonCorp_2F_EventScript_FossilScientistReadyForWorkForTheFirstTime:
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils, MSGBOX_NPC
	return

RustboroCity_DevonCorp_2F_EventScript_FossilScientistReadyForWorkAgain::
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils2, MSGBOX_NPC
	return

RustboroCity_DevonCorp_2F_EventScript_NoticeFossil::
	closemessage
	playse SE_PIN
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_Delay48
	waitmovement 0
	msgbox RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife, MSGBOX_YESNO
	goto_if_var_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil
	goto_if_var_eq VAR_RESULT, YES, RustboroCity_DevonCorp_2F_EventScript_ChooseFossil
	end

RustboroCity_DevonCorp_2F_EventScript_NoticeFossils::
	closemessage
	playse SE_PIN
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_Delay48
	waitmovement 0
	msgbox RustboroCity_DevonCorp_2F_Text_WantToBringFossilsBackToLife, MSGBOX_YESNO
	goto_if_var_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil
	goto_if_var_eq VAR_RESULT, YES, RustboroCity_DevonCorp_2F_EventScript_ChooseFossils
	end

RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil::
	msgbox RustboroCity_DevonCorp_2F_Text_OhIsThatSo, MSGBOX_NPC
	end

RustboroCity_DevonCorp_2F_EventScript_ChooseFossils::
	msgbox RustboroCity_DevonCorp_2F_Text_TwoFossilsPickOne, MSGBOX_NPC
	waitmessage
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil::
	special Script_CreateFossilsMultichoice
	waitstate
	switch VAR_RESULT
	case ITEM_DOME_FOSSIL, FossilScript_ChooseDomeFossil
	case ITEM_HELIX_FOSSIL, FossilScript_ChooseHelixFossil
	case ITEM_OLD_AMBER, FossilScript_ChooseOldAmber
	case ITEM_CLAW_FOSSIL, FossilScript_ChooseClawFossil
	case ITEM_ROOT_FOSSIL, FossilScript_ChooseRootFossil
	case ITEM_SKULL_FOSSIL, FossilScript_ChooseSkullFossil
	case ITEM_ARMOR_FOSSIL, FossilScript_ChooseArmorFossil
	msgbox RustboroCity_DevonCorp_2F_Text_OhISee, MSGBOX_NPC
	releaseall
	end

RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon:
	.string "We're developing a device for talking\n"
	.string "with POKéMON.\p"
	.string "But we haven't had much success…$"

RustboroCity_DevonCorp_2F_Text_DevelopingNewBalls:
	.string "I'm developing new kinds of\n"
	.string "POKé BALLS…\p"
	.string "But I haven't made much headway…$"

RustboroCity_DevonCorp_2F_Text_WeFinallyMadeNewBalls:
	.string "We finally made new kinds of\n"
	.string "POKé BALLS!\p"
	.string "The REPEAT BALL makes it easier to\n"
	.string "catch POKéMON you've caught before.\p"
	.string "The TIMER BALL gets better at catching\n"
	.string "POKéMON the longer a battle runs.\p"
	.string "Both are proudly developed by\n"
	.string "the DEVON CORPORATION.\p"
	.string "Please give them a try!$"

RustboroCity_DevonCorp_2F_Text_IMadePokenav:
	.string "I made the POKéNAV!\p"
	.string "As an engineer, I feel blessed to have\n"
	.string "made something so great!$"

RustboroCity_DevonCorp_2F_Text_WowThatsAPokenav:
	.string "Oh, wow!\n"
	.string "That's a POKéNAV!\p"
	.string "It came about as a result of our\n"
	.string "PRESIDENT's desire to learn about\l"
	.string "the feelings of POKéMON.\p"
	.string "Would you like me to describe its\n"
	.string "features in detail?\p"
	.string "No, no. I think you'll find out just by\n"
	.string "trying the POKéNAV out.$"

RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams:
	.string "I'm trying to develop a device that\n"
	.string "visually reproduces the dreams of\l"
	.string "POKéMON…\p"
	.string "But it's not going well.$"

RustboroCity_DevonCorp_2F_Text_TryingToDevelopDeviceToResurrectFossils:
	.string "I've been trying to develop a device\n"
	.string "that resurrects POKéMON from fossils.\p"
	.string "Sadly, I haven't had much luck yet…$"

RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils:
	.string "I've been trying to develop a device\n"
	.string "that resurrects POKéMON from fossils.\p"
	.string "After the last adjustments I made\n"
	.string "to it, it's finally working!$"

RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils2:
	.string "Oh, hello, {PLAYER}!\n"
	.string "Did you find any more fossils?\p"
	.string "If you do, please don't hesitate\n"
	.string "to come back and I'll resurrect them.$"

RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife:
	.string "Wait! That thing you have there…\n"
	.string "Is that a POKéMON fossil?\p"
	.string "Would you like to bring that POKéMON\n"
	.string "back to life?\p"
	.string "I can do it with my newly developed\n"
	.string "FOSSIL REGENERATOR.$"

RustboroCity_DevonCorp_2F_Text_WantToBringFossilsBackToLife:
	.string "Wait! Those things you have there…\n"
	.string "Are those POKéMON fossils?\p"
	.string "Would you like to bring those POKéMON\n"
	.string "back to life?\p"
	.string "I can do it with my newly developed\n"
	.string "FOSSIL REGENERATOR.$"

RustboroCity_DevonCorp_2F_Text_OhIsThatSo:
	.string "Oh, is that so?\p"
	.string "DEVON's technological expertise\n"
	.string "is outstanding, I tell you.$"

RustboroCity_DevonCorp_2F_Text_OhISee:
	.string "Oh, I see.\p"
	.string "If you change your mind, please\n"
	.string "don't hesitate to come back.$"

RustboroCity_DevonCorp_2F_Text_TwoFossilsPickOne:
	.string "Unfortunately, my machine can only\n"
	.string "regenerate one POKéMON at a time.\p"
	.string "Please pick one of your fossils\n"
	.string "for regeneration.$"

RustboroCity_DevonCorp_2F_Text_DevelopNewPokenavFeature:
	.string "I'm trying to develop a new feature\n"
	.string "for the POKéNAV…\p"
	.string "But it's not going well.$"

RustboroCity_DevonCorp_2F_Text_WhatToWorkOnNext:
	.string "Well, now what shall I work on\n"
	.string "developing next?\p"
	.string "Our company allows us to make our\n"
	.string "inspirations into reality.\p"
	.string "One couldn't ask for a better\n"
	.string "environment as an engineer.$"
