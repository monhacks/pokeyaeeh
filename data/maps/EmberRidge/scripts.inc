EmberRidge_MapScripts::
# 4 "data/maps/EmberRidge/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, EmberRidge_OnResume
# 5 "data/maps/EmberRidge/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, EmberRidge_OnLoad
# 6 "data/maps/EmberRidge/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EmberRidge_OnTransition
	.byte 0


EmberRidge_OnResume::
# 10 "data/maps/EmberRidge/scripts.pory"
	setstepcallback STEP_CB_ASH
# 11 "data/maps/EmberRidge/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, EmberRidge_EventScript_TryRemoveMoltres
	return


EmberRidge_EventScript_TryRemoveMoltres::
# 15 "data/maps/EmberRidge/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 16 "data/maps/EmberRidge/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq EmberRidge_EventScript_TryRemoveMoltres_1
# 16 "data/maps/EmberRidge/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq EmberRidge_EventScript_TryRemoveMoltres_1
	return

EmberRidge_EventScript_TryRemoveMoltres_1:
# 18 "data/maps/EmberRidge/scripts.pory"
	removeobject 1
	return


EmberRidge_OnLoad::
	return


EmberRidge_OnTransition::
# 30 "data/maps/EmberRidge/scripts.pory"
	compare VAR_EMBER_RIDGE_STATE, 1
	goto_if_lt EmberRidge_OnTransition_2
EmberRidge_OnTransition_1:
# 34 "data/maps/EmberRidge/scripts.pory"
	setflag FLAG_LANDMARK_EMBER_RIDGE
	return

EmberRidge_OnTransition_2:
# 32 "data/maps/EmberRidge/scripts.pory"
	setvar VAR_EMBER_RIDGE_STATE, 0
	goto EmberRidge_OnTransition_1


EmberRidge_EventScript_Moltres::
# 38 "data/maps/EmberRidge/scripts.pory"
	lock
# 39 "data/maps/EmberRidge/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 40 "data/maps/EmberRidge/scripts.pory"
	playmoncry SPECIES_MOLTRES, CRY_MODE_NORMAL
# 41 "data/maps/EmberRidge/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 42 "data/maps/EmberRidge/scripts.pory"
	waitse
# 43 "data/maps/EmberRidge/scripts.pory"
	addobject 1
# 44 "data/maps/EmberRidge/scripts.pory"
	setobjectxyperm 1, 10, 4
# 45 "data/maps/EmberRidge/scripts.pory"
	waitmovement 0
# 46 "data/maps/EmberRidge/scripts.pory"
	delay 60
# 47 "data/maps/EmberRidge/scripts.pory"
	waitmovement 0
# 48 "data/maps/EmberRidge/scripts.pory"
	playse SE_PIN
# 49 "data/maps/EmberRidge/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 50 "data/maps/EmberRidge/scripts.pory"
	waitmovement 0
# 51 "data/maps/EmberRidge/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 52 "data/maps/EmberRidge/scripts.pory"
	waitmovement 0
# 53 "data/maps/EmberRidge/scripts.pory"
	delay 40
# 54 "data/maps/EmberRidge/scripts.pory"
	applymovement 1, Common_Movement_WalkDown2
# 55 "data/maps/EmberRidge/scripts.pory"
	waitmovement 0
# 56 "data/maps/EmberRidge/scripts.pory"
	playmoncry SPECIES_MOLTRES, CRY_MODE_ENCOUNTER
# 57 "data/maps/EmberRidge/scripts.pory"
	delay 40
# 58 "data/maps/EmberRidge/scripts.pory"
	waitmoncry
# 59 "data/maps/EmberRidge/scripts.pory"
	settotemboost 1, 0, 2, 2, 2, 2, 0, 0
# 60 "data/maps/EmberRidge/scripts.pory"
	setwildbattle SPECIES_MOLTRES, 0, ITEM_LEFTOVERS, NATURE_TIMID, 2, 0, 0, 4, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_HEAT_WAVE, MOVE_JETSTREAM, MOVE_SOLAR_BEAM, MOVE_ROOST
# 61 "data/maps/EmberRidge/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 62 "data/maps/EmberRidge/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 63 "data/maps/EmberRidge/scripts.pory"
	waitstate
# 64 "data/maps/EmberRidge/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 65 "data/maps/EmberRidge/scripts.pory"
	setflag FLAG_DEFEATED_MOLTRES
# 66 "data/maps/EmberRidge/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 67 "data/maps/EmberRidge/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, EmberRidge_EventScript_DefeatedMoltres
# 68 "data/maps/EmberRidge/scripts.pory"
	goto EmberRidge_EventScript_RanFromMoltres
# 69 "data/maps/EmberRidge/scripts.pory"
	release
	end


EmberRidge_EventScript_DefeatedMoltres::
# 74 "data/maps/EmberRidge/scripts.pory"
	setvar VAR_EMBER_RIDGE_STATE, 2
# 75 "data/maps/EmberRidge/scripts.pory"
	goto EmberRidge_EventScript_RemoveMoltres
	end


EmberRidge_EventScript_RemoveMoltres::
# 80 "data/maps/EmberRidge/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 81 "data/maps/EmberRidge/scripts.pory"
	removeobject 1
# 82 "data/maps/EmberRidge/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 83 "data/maps/EmberRidge/scripts.pory"
	release
	end


EmberRidge_EventScript_RanFromMoltres::
# 88 "data/maps/EmberRidge/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 89 "data/maps/EmberRidge/scripts.pory"
	removeobject 1
# 90 "data/maps/EmberRidge/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 91 "data/maps/EmberRidge/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MOLTRES
# 92 "data/maps/EmberRidge/scripts.pory"
	msgbox gText_LegendaryEscaped, MSGBOX_DEFAULT
# 93 "data/maps/EmberRidge/scripts.pory"
	release
	end

