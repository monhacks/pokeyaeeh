# 1 "data/maps/MarineCave_End/scripts.pory"

# 2 "data/maps/MarineCave_End/scripts.pory"
.set LOCALID_KYOGRE, 1
# 3 "data/maps/MarineCave_End/scripts.pory"

# 4 "data/maps/MarineCave_End/scripts.pory"
MarineCave_End_MapScripts::
# 5 "data/maps/MarineCave_End/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MarineCave_End_OnResume
# 6 "data/maps/MarineCave_End/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MarineCave_End_OnTransition
# 7 "data/maps/MarineCave_End/scripts.pory"
	.byte 0
# 8 "data/maps/MarineCave_End/scripts.pory"

# 9 "data/maps/MarineCave_End/scripts.pory"
MarineCave_End_OnResume:
# 10 "data/maps/MarineCave_End/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, MarineCave_End_EventScript_TryRemoveKyogre
# 11 "data/maps/MarineCave_End/scripts.pory"
	end
# 12 "data/maps/MarineCave_End/scripts.pory"

# 13 "data/maps/MarineCave_End/scripts.pory"
MarineCave_End_EventScript_TryRemoveKyogre::
# 14 "data/maps/MarineCave_End/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 15 "data/maps/MarineCave_End/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 16 "data/maps/MarineCave_End/scripts.pory"
	removeobject LOCALID_KYOGRE
# 17 "data/maps/MarineCave_End/scripts.pory"
	return
# 18 "data/maps/MarineCave_End/scripts.pory"

# 19 "data/maps/MarineCave_End/scripts.pory"
MarineCave_End_OnTransition:
# 20 "data/maps/MarineCave_End/scripts.pory"
	call_if_unset FLAG_DEFEATED_KYOGRE, MarineCave_End_EventScript_ShowKyogre
# 21 "data/maps/MarineCave_End/scripts.pory"
	end
# 22 "data/maps/MarineCave_End/scripts.pory"

# 23 "data/maps/MarineCave_End/scripts.pory"
MarineCave_End_EventScript_ShowKyogre::
# 24 "data/maps/MarineCave_End/scripts.pory"
	clearflag FLAG_HIDE_MARINE_CAVE_KYOGRE
# 25 "data/maps/MarineCave_End/scripts.pory"
	setvar VAR_TEMP_1, 1
# 26 "data/maps/MarineCave_End/scripts.pory"
	return
# 27 "data/maps/MarineCave_End/scripts.pory"

# 28 "data/maps/MarineCave_End/scripts.pory"
MarineCave_End_Movement_KyogreApproach:
# 29 "data/maps/MarineCave_End/scripts.pory"
	init_affine_anim
# 30 "data/maps/MarineCave_End/scripts.pory"
	walk_down_start_affine
# 31 "data/maps/MarineCave_End/scripts.pory"
	delay_16
# 32 "data/maps/MarineCave_End/scripts.pory"
	delay_16
# 33 "data/maps/MarineCave_End/scripts.pory"
	walk_down_affine
# 34 "data/maps/MarineCave_End/scripts.pory"
	delay_16
# 35 "data/maps/MarineCave_End/scripts.pory"
	delay_16
# 36 "data/maps/MarineCave_End/scripts.pory"
	walk_down_affine
# 37 "data/maps/MarineCave_End/scripts.pory"
	step_end

MarineCave_End_EventScript_Kyogre::
# 41 "data/maps/MarineCave_End/scripts.pory"
	lockall
# 42 "data/maps/MarineCave_End/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 43 "data/maps/MarineCave_End/scripts.pory"
	waitmovement 0
# 44 "data/maps/MarineCave_End/scripts.pory"
	applymovement LOCALID_KYOGRE, MarineCave_End_Movement_KyogreApproach
# 45 "data/maps/MarineCave_End/scripts.pory"
	waitmovement 0
# 46 "data/maps/MarineCave_End/scripts.pory"
	waitse
# 47 "data/maps/MarineCave_End/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 48 "data/maps/MarineCave_End/scripts.pory"
	delay 40
# 49 "data/maps/MarineCave_End/scripts.pory"
	waitmoncry
# 50 "data/maps/MarineCave_End/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_KYOGRE
# 51 "data/maps/MarineCave_End/scripts.pory"
	settotemboost 1, 0, 2, 2, 2, 2, 0, 0
# 52 "data/maps/MarineCave_End/scripts.pory"
	setwildbattle SPECIES_KYOGRE, 0, ITEM_BLUE_ORB, NATURE_TIMID, 0, 4, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_ORIGIN_PULSE, MOVE_WATER_SPOUT, MOVE_ICE_BEAM, MOVE_THUNDER, FALSE
# 53 "data/maps/MarineCave_End/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 54 "data/maps/MarineCave_End/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 55 "data/maps/MarineCave_End/scripts.pory"
	waitstate
# 56 "data/maps/MarineCave_End/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 57 "data/maps/MarineCave_End/scripts.pory"
	setflag FLAG_DEFEATED_KYOGRE
# 58 "data/maps/MarineCave_End/scripts.pory"
	setvar VAR_TEMP_1, 0
# 59 "data/maps/MarineCave_End/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 60 "data/maps/MarineCave_End/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, MarineCave_End_EventScript_DefeatedKyogre
# 61 "data/maps/MarineCave_End/scripts.pory"
	goto MarineCave_End_EventScript_RanFromKyogre
# 62 "data/maps/MarineCave_End/scripts.pory"
	setvar VAR_SHOULD_END_ABNORMAL_WEATHER, 1
# 63 "data/maps/MarineCave_End/scripts.pory"
	releaseall
	end


MarineCave_End_EventScript_DefeatedKyogre::
# 68 "data/maps/MarineCave_End/scripts.pory"
	setvar VAR_SHOULD_END_ABNORMAL_WEATHER, 1
# 69 "data/maps/MarineCave_End/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	end


MarineCave_End_EventScript_RanFromKyogre::
# 74 "data/maps/MarineCave_End/scripts.pory"
	setvar VAR_0x8004, SPECIES_KYOGRE
# 75 "data/maps/MarineCave_End/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
	end

