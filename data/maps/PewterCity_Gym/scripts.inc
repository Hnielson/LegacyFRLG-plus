.equ CHECK_VISITOR_STATE, 6
.equ TYPE, VAR_0x8003
.equ ARGUMENT, VAR_0x8004

PewterCity_Gym_MapScripts:: @ 816A592
	map_script MAP_SCRIPT_ON_TRANSITION, PewterCity_Gym_OnTransition
	.byte 0

PewterCity_Gym_OnTransition::
	setvar TYPE, CHECK_VISITOR_STATE
	setvar ARGUMENT, FAMECHECKER_BROCK
	callnative UseBattleHouseVar
	compare VAR_RESULT, 1
	call_if_eq PewterCity_Gym_EventScript_HideBrock
	end

PewterCity_Gym_EventScript_HideBrock::
	setflag FLAG_TEMP_1
	return

PewterCity_Gym_EventScript_Brock:: @ 816A593
	famechecker FAMECHECKER_BROCK, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
	callnative IsChallengeModeToVarResult
	compare VAR_RESULT TRUE
	goto_if_eq PewterCity_Gym_EventScript_Brock_ChallengeMode
	trainerbattle_single TRAINER_LEADER_BROCK, PewterCity_Gym_Text_BrockIntro, PewterCity_Gym_Text_BrockDefeat, PewterCity_Gym_EventScript_DefeatedBrock, NO_MUSIC
	settrainerflag TRAINER_LEADER_BROCK_CHALLENGE
	goto_if_unset FLAG_GOT_TM39_FROM_BROCK, PewterCity_Gym_EventScript_GiveTM39
	msgbox PewterCity_Gym_Text_BrockPostBattle
	release
	end

PewterCity_Gym_EventScript_Brock_ChallengeMode::
	trainerbattle_single TRAINER_LEADER_BROCK_CHALLENGE, PewterCity_Gym_Text_BrockIntro, PewterCity_Gym_Text_BrockDefeat, PewterCity_Gym_EventScript_DefeatedBrock, NO_MUSIC
	settrainerflag TRAINER_LEADER_BROCK
	goto_if_unset FLAG_GOT_TM39_FROM_BROCK, PewterCity_Gym_EventScript_GiveTM39
	msgbox PewterCity_Gym_Text_BrockPostBattle
	release
	end

PewterCity_Gym_EventScript_DefeatedBrock:: @ 816A5C5
	famechecker FAMECHECKER_BROCK, 1
	setflag FLAG_DEFEATED_BROCK
	setflag FLAG_BADGE01_GET
	setvar VAR_MAP_SCENE_PEWTER_CITY, 1
	setflag FLAG_HIDE_PEWTER_CITY_GYM_GUIDE
	clearflag FLAG_HIDE_PEWTER_CITY_RUNNING_SHOES_GUY
	set_gym_trainers 1
	setflag FLAG_HIDE_CHARMANDER_BALL
	setflag FLAG_HIDE_SQUIRTLE_BALL
	setflag FLAG_HIDE_BULBASAUR_BALL
	goto PewterCity_Gym_EventScript_GiveTM39
	end

PewterCity_Gym_EventScript_GiveTM39:: @ 816A5F3
	msgbox PewterCity_Gym_Text_TakeThisWithYou
	checkitemspace ITEM_TM39, 1
	compare VAR_RESULT, FALSE
	goto_if_eq PewterCity_Gym_EventScript_NoRoomForTM39
	giveitem_msg PewterCity_Gym_Text_ReceivedTM39FromBrock, ITEM_TM39
	setflag FLAG_GOT_TM39_FROM_BROCK
	msgbox PewterCity_Gym_Text_ExplainTM39
	release
	end

PewterCity_Gym_EventScript_NoRoomForTM39:: @ 816A634
	msgbox PewterCity_Gym_Text_DontHaveRoomForThis
	release
	end

PewterCity_Gym_EventScript_Liam:: @ 816A63E
	trainerbattle_single TRAINER_CAMPER_LIAM, PewterCity_Gym_Text_LiamIntro, PewterCity_Gym_Text_LiamDefeat
	msgbox PewterCity_Gym_Text_LiamPostBattle, MSGBOX_AUTOCLOSE
	end

PewterCity_Gym_EventScript_GymGuy:: @ 816A655
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_BROCK, PewterCity_Gym_EventScript_GymGuyPostVictory
	msgbox PewterCity_Gym_Text_LetMeTakeYouToTheTop, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq PewterCity_Gym_EventScript_GymGuyTakeMeToTop
	compare VAR_RESULT, NO
	goto_if_eq PewterCity_Gym_EventScript_GymGuyDontTakeMeToTop
	end

PewterCity_Gym_EventScript_GymGuyPostVictory:: @ 816A67F
	msgbox PewterCity_Gym_Text_YoureChampMaterial
	release
	end

PewterCity_Gym_EventScript_GymGuyTakeMeToTop:: @ 816A689
	msgbox PewterCity_Gym_Text_LetsGetHappening
	goto PewterCity_Gym_EventScript_GymGuyAdvice
	end

PewterCity_Gym_EventScript_GymGuyDontTakeMeToTop:: @ 816A697
	msgbox PewterCity_Gym_Text_ItsFreeLetsGetHappening
	goto PewterCity_Gym_EventScript_GymGuyAdvice
	end

PewterCity_Gym_EventScript_GymGuyAdvice:: @ 816A6A5
	msgbox PewterCity_Gym_Text_TryDifferentPartyOrders
	release
	end

PewterCity_Gym_EventScript_GymStatue:: @ 816A6AF
	lockall
	goto_if_set FLAG_BADGE01_GET, PewterCity_Gym_EventScript_GymStatuePostVictory
	msgbox PewterCity_Gym_Text_GymStatue
	releaseall
	end

PewterCity_Gym_EventScript_GymStatuePostVictory:: @ 816A6C3
	msgbox PewterCity_Gym_Text_GymStatuePlayerWon
	releaseall
	end