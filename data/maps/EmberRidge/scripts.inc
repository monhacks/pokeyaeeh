EmberRidge_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, EmberRidge_OnResume
	map_script MAP_SCRIPT_ON_LOAD, EmberRidge_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, EmberRidge_OnTransition
	.byte 0


EmberRidge_OnResume::
	setstepcallback STEP_CB_ASH
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, EmberRidge_EventScript_TryRemoveMoltres
	return


EmberRidge_EventScript_TryRemoveMoltres::
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq EmberRidge_EventScript_TryRemoveMoltres_1
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq EmberRidge_EventScript_TryRemoveMoltres_1
	return

EmberRidge_EventScript_TryRemoveMoltres_1:
	removeobject 1
	return


EmberRidge_OnLoad::
	return


EmberRidge_OnTransition::
	compare VAR_EMBER_RIDGE_STATE, 1
	goto_if_lt EmberRidge_OnTransition_2
EmberRidge_OnTransition_1:
	setflag FLAG_LANDMARK_EMBER_RIDGE
	return

EmberRidge_OnTransition_2:
	setvar VAR_EMBER_RIDGE_STATE, 0
	goto EmberRidge_OnTransition_1


EmberRidge_EventScript_Moltres::
	lock
	fadescreenswapbuffers FADE_TO_BLACK
	playmoncry SPECIES_MOLTRES, CRY_MODE_NORMAL
	fadescreenswapbuffers FADE_FROM_BLACK
	waitse
	addobject 1
	setobjectxyperm 1, 10, 4
	waitmovement 0
	delay 60
	waitmovement 0
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	delay 40
	applymovement 1, Common_Movement_WalkDown2
	waitmovement 0
	playmoncry SPECIES_MOLTRES, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	settotemboost 1, 0, 2, 2, 2, 2, 0, 0
	setwildbattle SPECIES_MOLTRES, 0, ITEM_LEFTOVERS, NATURE_TIMID, 2, 0, 0, 4, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_HEAT_WAVE, MOVE_JETSTREAM, MOVE_SOLAR_BEAM, MOVE_ROOST
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	setflag FLAG_DEFEATED_MOLTRES
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, EmberRidge_EventScript_DefeatedMoltres
	goto EmberRidge_EventScript_RanFromMoltres
	release
	end


EmberRidge_EventScript_DefeatedMoltres::
	setvar VAR_EMBER_RIDGE_STATE, 2
	goto EmberRidge_EventScript_RemoveMoltres
	end


EmberRidge_EventScript_RemoveMoltres::
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject 1
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end


EmberRidge_EventScript_RanFromMoltres::
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject 1
	fadescreenswapbuffers FADE_FROM_BLACK
	bufferspeciesname STR_VAR_1, SPECIES_MOLTRES
	msgbox gText_LegendaryEscaped, MSGBOX_DEFAULT
	release
	end

