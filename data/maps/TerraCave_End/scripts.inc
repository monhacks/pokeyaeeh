# 1 "data/maps/TerraCave_End/scripts.pory"

# 2 "data/maps/TerraCave_End/scripts.pory"
.set LOCALID_GROUDON, 1
# 3 "data/maps/TerraCave_End/scripts.pory"

# 4 "data/maps/TerraCave_End/scripts.pory"
TerraCave_End_MapScripts::
# 5 "data/maps/TerraCave_End/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TerraCave_End_OnResume
# 6 "data/maps/TerraCave_End/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TerraCave_End_OnTransition
# 7 "data/maps/TerraCave_End/scripts.pory"
	.byte 0
# 8 "data/maps/TerraCave_End/scripts.pory"

# 9 "data/maps/TerraCave_End/scripts.pory"
TerraCave_End_OnResume:
# 10 "data/maps/TerraCave_End/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, TerraCave_End_EventScript_TryRemoveGroudon
# 11 "data/maps/TerraCave_End/scripts.pory"
	end
# 12 "data/maps/TerraCave_End/scripts.pory"

# 13 "data/maps/TerraCave_End/scripts.pory"
TerraCave_End_EventScript_TryRemoveGroudon::
# 14 "data/maps/TerraCave_End/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 15 "data/maps/TerraCave_End/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 16 "data/maps/TerraCave_End/scripts.pory"
	removeobject LOCALID_GROUDON
# 17 "data/maps/TerraCave_End/scripts.pory"
	return
# 18 "data/maps/TerraCave_End/scripts.pory"

# 19 "data/maps/TerraCave_End/scripts.pory"
TerraCave_End_OnTransition:
# 20 "data/maps/TerraCave_End/scripts.pory"
	call_if_unset FLAG_DEFEATED_GROUDON, TerraCave_End_EventScript_ShowGroudon
# 21 "data/maps/TerraCave_End/scripts.pory"
	end
# 22 "data/maps/TerraCave_End/scripts.pory"

# 23 "data/maps/TerraCave_End/scripts.pory"
TerraCave_End_EventScript_ShowGroudon::
# 24 "data/maps/TerraCave_End/scripts.pory"
	clearflag FLAG_HIDE_TERRA_CAVE_GROUDON
# 25 "data/maps/TerraCave_End/scripts.pory"
	setvar VAR_TEMP_1, 1
# 26 "data/maps/TerraCave_End/scripts.pory"
	return
# 27 "data/maps/TerraCave_End/scripts.pory"

# 28 "data/maps/TerraCave_End/scripts.pory"
TerraCave_End_Movement_GroudonApproach:
# 29 "data/maps/TerraCave_End/scripts.pory"
	init_affine_anim
# 30 "data/maps/TerraCave_End/scripts.pory"
	walk_down_start_affine
# 31 "data/maps/TerraCave_End/scripts.pory"
	delay_16
# 32 "data/maps/TerraCave_End/scripts.pory"
	delay_16
# 33 "data/maps/TerraCave_End/scripts.pory"
	walk_down_affine
# 34 "data/maps/TerraCave_End/scripts.pory"
	delay_16
# 35 "data/maps/TerraCave_End/scripts.pory"
	delay_16
# 36 "data/maps/TerraCave_End/scripts.pory"
	walk_down_affine
# 37 "data/maps/TerraCave_End/scripts.pory"
	step_end

TerraCave_End_EventScript_Groudon::
# 41 "data/maps/TerraCave_End/scripts.pory"
	lockall
# 42 "data/maps/TerraCave_End/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 43 "data/maps/TerraCave_End/scripts.pory"
	waitmovement 0
# 44 "data/maps/TerraCave_End/scripts.pory"
	applymovement LOCALID_GROUDON, TerraCave_End_Movement_GroudonApproach
# 45 "data/maps/TerraCave_End/scripts.pory"
	waitmovement 0
# 46 "data/maps/TerraCave_End/scripts.pory"
	waitse
# 47 "data/maps/TerraCave_End/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 48 "data/maps/TerraCave_End/scripts.pory"
	delay 40
# 49 "data/maps/TerraCave_End/scripts.pory"
	waitmoncry
# 50 "data/maps/TerraCave_End/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_GROUDON
# 51 "data/maps/TerraCave_End/scripts.pory"
	settotemboost 1, 2, 2, 2, 0, 2, 0, 0
# 52 "data/maps/TerraCave_End/scripts.pory"
	setwildbattle SPECIES_GROUDON, 0, ITEM_RED_ORB, NATURE_ADAMANT, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PRECIPICE_BLADES, MOVE_EARTHQUAKE, MOVE_HEAT_CRASH, MOVE_SOLAR_BLADE, FALSE
# 53 "data/maps/TerraCave_End/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 54 "data/maps/TerraCave_End/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 55 "data/maps/TerraCave_End/scripts.pory"
	waitstate
# 56 "data/maps/TerraCave_End/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 57 "data/maps/TerraCave_End/scripts.pory"
	setflag FLAG_DEFEATED_GROUDON
# 58 "data/maps/TerraCave_End/scripts.pory"
	setvar VAR_TEMP_1, 0
# 59 "data/maps/TerraCave_End/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 60 "data/maps/TerraCave_End/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, TerraCave_End_EventScript_DefeatedGroudon
# 61 "data/maps/TerraCave_End/scripts.pory"
	goto TerraCave_End_EventScript_RanFromGroudon
# 62 "data/maps/TerraCave_End/scripts.pory"
	setvar VAR_SHOULD_END_ABNORMAL_WEATHER, 1
# 63 "data/maps/TerraCave_End/scripts.pory"
	releaseall
	end


TerraCave_End_EventScript_DefeatedGroudon::
# 68 "data/maps/TerraCave_End/scripts.pory"
	setvar VAR_SHOULD_END_ABNORMAL_WEATHER, 1
# 69 "data/maps/TerraCave_End/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	end


TerraCave_End_EventScript_RanFromGroudon::
# 74 "data/maps/TerraCave_End/scripts.pory"
	setvar VAR_0x8004, SPECIES_GROUDON
# 75 "data/maps/TerraCave_End/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
	end

