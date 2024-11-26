GraniteCave_HiddenArea_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GraniteCave_HiddenArea_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_RESUME, GraniteCave_HiddenArea_MapScripts_MAP_SCRIPT_ON_RESUME
	map_script MAP_SCRIPT_ON_LOAD, GraniteCave_HiddenArea_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

GraniteCave_HiddenArea_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto_if_unset FLAG_DEFEATED_MEWTWO, GraniteCave_HiddenArea_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

GraniteCave_HiddenArea_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	clearflag FLAG_HIDE_MEWTWO
	return

GraniteCave_HiddenArea_MapScripts_MAP_SCRIPT_ON_RESUME:
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, GraniteCave_HiddenArea_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

GraniteCave_HiddenArea_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq GraniteCave_HiddenArea_MapScripts_MAP_SCRIPT_ON_RESUME_3
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GraniteCave_HiddenArea_MapScripts_MAP_SCRIPT_ON_RESUME_3
	return

GraniteCave_HiddenArea_MapScripts_MAP_SCRIPT_ON_RESUME_3:
	removeobject VAR_LAST_TALKED
	return

GraniteCave_HiddenArea_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto_if_unset FLAG_DEFEATED_MEWTWO, GraniteCave_HiddenArea_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

GraniteCave_HiddenArea_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	clearflag FLAG_HIDE_MEWTWO
	return


GraniteCave_HiddenArea_EventScript_Mewtwo::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MEWTWO, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	settotemboost 1, 0, 2, 2, 2, 2, 0, 0
	setwildbattle SPECIES_MEWTWO, 0, ITEM_MEWTWONITE_Y, NATURE_TIMID, 2, 0, 0, 4, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_PSYSTRIKE, MOVE_DAZZLING_GLEAM, MOVE_AURA_SPHERE, MOVE_ICE_BEAM
	setvar B_VAR_STARTING_STATUS, STARTING_STATUS_PSYCHIC_TERRAIN
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	setvar B_VAR_STARTING_STATUS, 0
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	setflag FLAG_DEFEATED_MEWTWO
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, GraniteCave_HiddenArea_EventScript_DefeatedMewtwo
	goto GraniteCave_HiddenArea_EventScript_RanFromMewtwo
	release
	end


GraniteCave_HiddenArea_EventScript_DefeatedMewtwo::
	goto Common_EventScript_RemoveStaticPokemon
	end


GraniteCave_HiddenArea_EventScript_RanFromMewtwo::
	setvar VAR_0x8004, SPECIES_MEWTWO
	goto Common_EventScript_LegendaryFlewAway
	end

