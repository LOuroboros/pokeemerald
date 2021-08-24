Common_EventScript_PkmnCenterNurse:: 
    lock
    faceplayer
    specialvar VAR_RESULT, CountPlayerTrainerStars
    compare VAR_RESULT, 4
    goto_if_eq EventScript_PkmnCenterNurse_GoldCard
    goto Common_EventScript_PkmnCenterNurse2

Common_EventScript_PkmnCenterNurse2:
    getgamestat GAME_STAT_USED_POKECENTER
    compare VAR_RESULT, 1
    goto_if_ge EventScript_PkmnCenterNurse_HealPkmn
    msgbox gText_WouldYouLikeToRestYourPkmn, MSGBOX_YESNO
    compare VAR_RESULT, YES
    goto_if_eq EventScript_PkmnCenterNurse_HealPkmn
    compare VAR_RESULT, NO
    goto_if_eq EventScript_PkmnCenterNurse_Goodbye

EventScript_PkmnCenterNurse_GoldCard:: 
    goto_if_set FLAG_NURSE_MENTIONS_GOLD_CARD, EventScript_PkmnCenterNurse_AskForUsual
    msgbox gText_WelcomeCutShort, MSGBOX_DEFAULT
    playse SE_PIN
    applymovement VAR_0x800B, Common_Movement_ExclamationMark
    waitmovement 0
    applymovement VAR_0x800B, Common_Movement_Delay48
    waitmovement 0
    setflag FLAG_NURSE_MENTIONS_GOLD_CARD
    msgbox gText_NoticesGoldCard, MSGBOX_YESNO
    compare VAR_RESULT, YES
    goto_if_eq EventScript_PkmnCenterNurse_HealPkmn
    msgbox gText_WeHopeToSeeYouAgain, MSGBOX_DEFAULT
    release
    end

EventScript_PkmnCenterNurse_AskForUsual:: 
    msgbox gText_YouWantTheUsual, MSGBOX_YESNO
    compare VAR_RESULT, YES
    goto_if_eq EventScript_PkmnCenterNurse_HealPkmn
    msgbox gText_WeHopeToSeeYouAgain, MSGBOX_DEFAULT
    release
    end

EventScript_PkmnCenterNurse_Goodbye:: 
    msgbox gText_WeHopeToSeeYouAgain, MSGBOX_DEFAULT
    release
    end

EventScript_PkmnCenterNurse_HealPkmn:: 
    getgamestat GAME_STAT_USED_POKECENTER
    compare VAR_RESULT, 1
    call_if_ge EventScript_PkmnCenterNurse_HealPkmnAgain
    compare VAR_RESULT, 0
    call_if_eq EventScript_PkmnCenterNurse_HealPkmnForTheFirstTime
    call EventScript_PkmnCenterNurse_TakeAndHealPkmn
    call_if_unset FLAG_POKERUS_EXPLAINED, EventScript_PkmnCenterNurse_CheckPokerus
    goto EventScript_PkmnCenterNurse_CheckTrainerHillAndUnionRoom
    release
    end

EventScript_PkmnCenterNurse_HealPkmnAgain:
    msgbox gText_SecondAndSubsequentMeetingsWithNurseJoy, MSGBOX_DEFAULT
    incrementgamestat GAME_STAT_USED_POKECENTER
    message gText_IllTakeYourPkmn2
    waitmessage
    return

EventScript_PkmnCenterNurse_HealPkmnForTheFirstTime:
    incrementgamestat GAME_STAT_USED_POKECENTER
    message gText_IllTakeYourPkmn
    waitmessage
    return

EventScript_PkmnCenterNurse_TakeAndHealPkmn:: 
    applymovement VAR_0x800B, Common_Movement_WalkInPlaceFastestLeft
    waitmovement 0
    dofieldeffect FLDEFF_POKECENTER_HEAL
    waitfieldeffect FLDEFF_POKECENTER_HEAL
    applymovement VAR_0x800B, Common_Movement_WalkInPlaceFastestDown
    waitmovement 0
    special HealPlayerParty
    return

EventScript_PkmnCenterNurse_CheckPokerus:: 
    specialvar VAR_RESULT, IsPokerusInParty
    compare VAR_RESULT, FALSE
    goto_if_eq EventScript_PkmnCenterNurse_CheckTrainerHillAndUnionRoom
    message gText_PokerusExplanation
    setflag FLAG_POKERUS_EXPLAINED
    return

EventScript_PkmnCenterNurse_CheckTrainerHillAndUnionRoom:: 
    specialvar VAR_RESULT, PlayerNotAtTrainerHillEntrance
    compare VAR_RESULT, TRUE
    goto_if_eq EventScript_PkmnCenterNurse_ReturnPkmn
    specialvar VAR_RESULT, BufferUnionRoomPlayerName
    compare VAR_RESULT, FALSE
    goto_if_eq EventScript_PkmnCenterNurse_ReturnPkmn
    goto EventScript_PkmnCenterNurse_PlayerWaitingInUnionRoom
    release
    end

EventScript_PkmnCenterNurse_ReturnPkmn:: 
    goto_if_set FLAG_NURSE_MENTIONS_GOLD_CARD, EventScript_PkmnCenterNurse_ReturnPkmn2
    message gText_RestoredPkmnToFullHealth
    waitmessage
    applymovement VAR_0x800B, Movement_PkmnCenterNurse_Bow
    waitmovement 0
    msgbox gText_WeHopeToSeeYouAgain, MSGBOX_DEFAULT
    release
    end

EventScript_PkmnCenterNurse_ReturnPkmn2:: 
    message gText_ThankYouForWaiting
    waitmessage
    applymovement VAR_0x800B, Movement_PkmnCenterNurse_Bow
    waitmovement 0
    msgbox gText_WeHopeToSeeYouAgain, MSGBOX_DEFAULT
    release
    end

EventScript_PkmnCenterNurse_PlayerWaitingInUnionRoom:: 
    goto_if_set FLAG_NURSE_UNION_ROOM_REMINDER, EventScript_PkmnCenterNurse_ReturnPkmn
	special InitUnionRoom
    msgbox gText_RestoredPkmnToFullHealth, MSGBOX_DEFAULT
    setflag FLAG_NURSE_UNION_ROOM_REMINDER
    message CableClub_Text_PlayerIsWaiting
    waitmessage
    applymovement VAR_0x800B, Movement_PkmnCenterNurse_Bow
    waitmovement 0
    msgbox gText_WeHopeToSeeYouAgain, MSGBOX_DEFAULT
    release
    end

Movement_PkmnCenterNurse_Bow: 
    nurse_joy_bow
    delay_16
    step_end
