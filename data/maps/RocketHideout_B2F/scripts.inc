.set LOCALID_RHYDON_MASTER, 6
.set TRAINER, VAR_0x8009

RocketHideout_B2F_MapScripts:: @ 81612A1
	map_script MAP_SCRIPT_ON_TRANSITION, RocketHideout_B2F_MapScript_SetMasterTrainerMovementTypes
	.byte 0

RocketHideout_B2F_MapScript_SetMasterTrainerMovementTypes::
	setvar TRAINER, MASTER_RHYDON
	callnative ShouldChangeMasterTrainerMovementType
	compare VAR_RESULT, FALSE
	call_if_eq RocketHideout_B2F_MapScript_RhydonMasterMovementType
	end

RocketHideout_B2F_MapScript_RhydonMasterMovementType::
	setobjectmovementtype LOCALID_RHYDON_MASTER, MOVEMENT_TYPE_VS_SEEKER_4D
	return

RocketHideout_B2F_EventScript_Grunt:: @ 81612A2
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_13, RocketHideout_B2F_Text_GruntIntro, RocketHideout_B2F_Text_GruntDefeat
	msgbox RocketHideout_B2F_Text_GruntPostBattle, MSGBOX_AUTOCLOSE
	end