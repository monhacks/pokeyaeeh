# 1 "data/maps/NavelRock_Top/scripts.pory"

# 2 "data/maps/NavelRock_Top/scripts.pory"
.set LOCALID_HO_OH, 1
# 3 "data/maps/NavelRock_Top/scripts.pory"

# 4 "data/maps/NavelRock_Top/scripts.pory"
NavelRock_Top_MapScripts::
# 5 "data/maps/NavelRock_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NavelRock_Top_OnTransition
# 6 "data/maps/NavelRock_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NavelRock_Top_OnResume
# 7 "data/maps/NavelRock_Top/scripts.pory"
	.byte 0
# 8 "data/maps/NavelRock_Top/scripts.pory"

# 9 "data/maps/NavelRock_Top/scripts.pory"
NavelRock_Top_OnTransition:
# 10 "data/maps/NavelRock_Top/scripts.pory"
	call_if_set FLAG_CAUGHT_HO_OH, NavelRock_Top_EventScript_HideHoOh
# 11 "data/maps/NavelRock_Top/scripts.pory"
	call_if_unset FLAG_CAUGHT_HO_OH, NavelRock_Top_EventScript_TryShowHoOh
# 12 "data/maps/NavelRock_Top/scripts.pory"
	end
# 13 "data/maps/NavelRock_Top/scripts.pory"

# 14 "data/maps/NavelRock_Top/scripts.pory"
NavelRock_Top_EventScript_HideHoOh::
# 15 "data/maps/NavelRock_Top/scripts.pory"
	setvar VAR_TEMP_1, 1
# 16 "data/maps/NavelRock_Top/scripts.pory"
	setflag FLAG_HIDE_HO_OH
# 17 "data/maps/NavelRock_Top/scripts.pory"
	return
# 18 "data/maps/NavelRock_Top/scripts.pory"

# 19 "data/maps/NavelRock_Top/scripts.pory"
NavelRock_Top_EventScript_TryShowHoOh::
# 20 "data/maps/NavelRock_Top/scripts.pory"
	setvar VAR_TEMP_1, 1
# 21 "data/maps/NavelRock_Top/scripts.pory"
	goto_if_set FLAG_DEFEATED_HO_OH, Common_EventScript_NopReturn
# 22 "data/maps/NavelRock_Top/scripts.pory"
	setvar VAR_TEMP_1, 0
# 23 "data/maps/NavelRock_Top/scripts.pory"
	clearflag FLAG_HIDE_HO_OH
# 24 "data/maps/NavelRock_Top/scripts.pory"
	return
# 25 "data/maps/NavelRock_Top/scripts.pory"

# 26 "data/maps/NavelRock_Top/scripts.pory"
NavelRock_Top_OnResume:
# 27 "data/maps/NavelRock_Top/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, NavelRock_Top_EventScript_TryRemoveHoOh
# 28 "data/maps/NavelRock_Top/scripts.pory"
	end
# 29 "data/maps/NavelRock_Top/scripts.pory"

# 30 "data/maps/NavelRock_Top/scripts.pory"
NavelRock_Top_EventScript_TryRemoveHoOh::
# 31 "data/maps/NavelRock_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 32 "data/maps/NavelRock_Top/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 33 "data/maps/NavelRock_Top/scripts.pory"
	removeobject LOCALID_HO_OH
# 34 "data/maps/NavelRock_Top/scripts.pory"
	return
# 35 "data/maps/NavelRock_Top/scripts.pory"

# 36 "data/maps/NavelRock_Top/scripts.pory"
NavelRock_Top_Movement_CameraPanUp:
# 37 "data/maps/NavelRock_Top/scripts.pory"
	walk_up
# 38 "data/maps/NavelRock_Top/scripts.pory"
	walk_up
# 39 "data/maps/NavelRock_Top/scripts.pory"
	walk_up
# 40 "data/maps/NavelRock_Top/scripts.pory"
	step_end
# 41 "data/maps/NavelRock_Top/scripts.pory"

# 42 "data/maps/NavelRock_Top/scripts.pory"
NavelRock_Top_Movement_CameraPanDown:
# 43 "data/maps/NavelRock_Top/scripts.pory"
	delay_16
# 44 "data/maps/NavelRock_Top/scripts.pory"
	delay_16
# 45 "data/maps/NavelRock_Top/scripts.pory"
	walk_down
# 46 "data/maps/NavelRock_Top/scripts.pory"
	walk_down
# 47 "data/maps/NavelRock_Top/scripts.pory"
	walk_down
# 48 "data/maps/NavelRock_Top/scripts.pory"
	step_end
# 49 "data/maps/NavelRock_Top/scripts.pory"

# 50 "data/maps/NavelRock_Top/scripts.pory"
NavelRock_Top_Movement_HoOhApproach:
# 51 "data/maps/NavelRock_Top/scripts.pory"
	walk_down
# 52 "data/maps/NavelRock_Top/scripts.pory"
	walk_down
# 53 "data/maps/NavelRock_Top/scripts.pory"
	walk_down
# 54 "data/maps/NavelRock_Top/scripts.pory"
	walk_down
# 55 "data/maps/NavelRock_Top/scripts.pory"
	walk_down
# 56 "data/maps/NavelRock_Top/scripts.pory"
	walk_in_place_down
# 57 "data/maps/NavelRock_Top/scripts.pory"
	delay_16
# 58 "data/maps/NavelRock_Top/scripts.pory"
	delay_16
# 59 "data/maps/NavelRock_Top/scripts.pory"
	step_end
# 60 "data/maps/NavelRock_Top/scripts.pory"

# 61 "data/maps/NavelRock_Top/scripts.pory"
NavelRock_Top_Movement_HoOhAppear:
# 62 "data/maps/NavelRock_Top/scripts.pory"
	delay_16
# 63 "data/maps/NavelRock_Top/scripts.pory"
	delay_16
# 64 "data/maps/NavelRock_Top/scripts.pory"
	walk_in_place_down
# 65 "data/maps/NavelRock_Top/scripts.pory"
	walk_in_place_down
# 66 "data/maps/NavelRock_Top/scripts.pory"
	walk_in_place_down
# 67 "data/maps/NavelRock_Top/scripts.pory"
	walk_in_place_down
# 68 "data/maps/NavelRock_Top/scripts.pory"
	step_end

NavelRock_Top_EventScript_HoOh::
# 72 "data/maps/NavelRock_Top/scripts.pory"
	lockall
# 73 "data/maps/NavelRock_Top/scripts.pory"
	setvar VAR_TEMP_1, 1
# 74 "data/maps/NavelRock_Top/scripts.pory"
	special SpawnCameraObject
# 75 "data/maps/NavelRock_Top/scripts.pory"
	setvar VAR_0x8004, 3
# 76 "data/maps/NavelRock_Top/scripts.pory"
	setvar VAR_0x8005, 35
# 77 "data/maps/NavelRock_Top/scripts.pory"
	special LoopWingFlapSE
# 78 "data/maps/NavelRock_Top/scripts.pory"
	applymovement LOCALID_HO_OH, NavelRock_Top_Movement_HoOhAppear
# 79 "data/maps/NavelRock_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, NavelRock_Top_Movement_CameraPanUp
# 80 "data/maps/NavelRock_Top/scripts.pory"
	waitmovement 0
# 81 "data/maps/NavelRock_Top/scripts.pory"
	delay 50
# 82 "data/maps/NavelRock_Top/scripts.pory"
	setweather WEATHER_NONE
# 83 "data/maps/NavelRock_Top/scripts.pory"
	doweather
# 84 "data/maps/NavelRock_Top/scripts.pory"
	waitse
# 85 "data/maps/NavelRock_Top/scripts.pory"
	playmoncry SPECIES_HO_OH, CRY_MODE_ENCOUNTER
# 86 "data/maps/NavelRock_Top/scripts.pory"
	delay 30
# 87 "data/maps/NavelRock_Top/scripts.pory"
	waitmoncry
# 88 "data/maps/NavelRock_Top/scripts.pory"
	delay 60
# 89 "data/maps/NavelRock_Top/scripts.pory"
	setvar VAR_0x8004, 3
# 90 "data/maps/NavelRock_Top/scripts.pory"
	setvar VAR_0x8005, 35
# 91 "data/maps/NavelRock_Top/scripts.pory"
	special LoopWingFlapSE
# 92 "data/maps/NavelRock_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, NavelRock_Top_Movement_CameraPanDown
# 93 "data/maps/NavelRock_Top/scripts.pory"
	applymovement LOCALID_HO_OH, NavelRock_Top_Movement_HoOhApproach
# 94 "data/maps/NavelRock_Top/scripts.pory"
	waitmovement 0
# 95 "data/maps/NavelRock_Top/scripts.pory"
	special RemoveCameraObject
# 96 "data/maps/NavelRock_Top/scripts.pory"
	seteventmon SPECIES_HO_OH, 70
# 97 "data/maps/NavelRock_Top/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 98 "data/maps/NavelRock_Top/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 99 "data/maps/NavelRock_Top/scripts.pory"
	waitstate
# 100 "data/maps/NavelRock_Top/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 101 "data/maps/NavelRock_Top/scripts.pory"
	setflag FLAG_DEFEATED_HO_OH
# 102 "data/maps/NavelRock_Top/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_HO_OH
# 103 "data/maps/NavelRock_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 104 "data/maps/NavelRock_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, NavelRock_Top_EventScript_DefeatedHoOh
# 105 "data/maps/NavelRock_Top/scripts.pory"
	goto NavelRock_Top_EventScript_RanFromHoOh
# 106 "data/maps/NavelRock_Top/scripts.pory"
	setflag FLAG_CAUGHT_HO_OH
# 107 "data/maps/NavelRock_Top/scripts.pory"
	releaseall
	end


NavelRock_Top_EventScript_DefeatedHoOh::
# 112 "data/maps/NavelRock_Top/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	end


NavelRock_Top_EventScript_RanFromHoOh::
# 117 "data/maps/NavelRock_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_HO_OH
# 118 "data/maps/NavelRock_Top/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
	end

