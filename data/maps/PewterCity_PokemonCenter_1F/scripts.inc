.set LOCALID_JIGGLYPUFF_MASTER, 10
.set TRAINER, VAR_0x8009

PewterCity_PokemonCenter_1F_MapScripts:: @ 816A760
	map_script MAP_SCRIPT_ON_TRANSITION, PewterCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, PokemonCenter_1F_OnLoad
	//map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

PewterCity_PokemonCenter_1F_OnTransition:: @ 816A76B
	setrespawn SPAWN_PEWTER_CITY
	goto PewterCity_PokemonCenter_1F_MapScript_SetMasterTrainerMovementTypes
	end

PewterCity_PokemonCenter_1F_MapScript_SetMasterTrainerMovementTypes::
	setvar TRAINER, MASTER_JIGGLYPUFF
	callnative ShouldChangeMasterTrainerMovementType
	compare VAR_RESULT, FALSE
	call_if_eq PewterCity_PokemonCenter_1F_MapScript_JigglypuffMasterMovementType
	end

PewterCity_PokemonCenter_1F_MapScript_JigglypuffMasterMovementType::
	setobjectmovementtype LOCALID_JIGGLYPUFF_MASTER, MOVEMENT_TYPE_VS_SEEKER_4D
	return

PewterCity_PokemonCenter_1F_EventScript_Nurse:: @ 816A76F
	lock
	faceplayer
	call EventScript_PkmnCenterNurse
	release
	end

PewterCity_PokemonCenter_1F_EventScript_Gentleman:: @ 816A778
	msgbox PewterCity_Museum_1F_Text_TeamRocketMtMoonImOnPhone, MSGBOX_NPC
	end

PewterCity_PokemonCenter_1F_EventScript_Jigglypuff:: @ 816A781
	lock
	faceplayer
	fadeoutbgm 0
	playbgm MUS_JIGGLYPUFF, 0
	message PewterCity_Museum_1F_Text_Jigglypuff
	waitmessage
	delay 455
	playbgm MUS_POKE_CENTER, 1
	release
	end

PewterCity_PokemonCenter_1F_EventScript_Youngster:: @ 816A798
	msgbox PewterCity_Museum_1F_Text_WhenJiggylypuffSingsMonsGetDrowsy, MSGBOX_NPC
	end

PewterCity_PokemonCenter_1F_EventScript_GBAKid1:: @ 816A7A1
	lock
	msgbox PewterCity_Museum_1F_Text_TradingMyClefairyForPikachu
	release
	end

PewterCity_PokemonCenter_1F_EventScript_GBAKid2:: @ 816A7AC
	msgbox PewterCity_Museum_1F_Text_TradingPikachuWithKid, MSGBOX_NPC
	end
