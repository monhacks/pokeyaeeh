GraniteCave_HiddenArea_MapScripts::
# 2 "data/maps/GraniteCave_HiddenArea/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GraniteCave_HiddenArea_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 7 "data/maps/GraniteCave_HiddenArea/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, GraniteCave_HiddenArea_MapScripts_MAP_SCRIPT_ON_RESUME
# 20 "data/maps/GraniteCave_HiddenArea/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, GraniteCave_HiddenArea_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

GraniteCave_HiddenArea_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/GraniteCave_HiddenArea/scripts.pory"
	goto_if_unset FLAG_DEFEATED_MEWTWO, GraniteCave_HiddenArea_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

GraniteCave_HiddenArea_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/GraniteCave_HiddenArea/scripts.pory"
	clearflag FLAG_HIDE_MEWTWO
	return

GraniteCave_HiddenArea_MapScripts_MAP_SCRIPT_ON_RESUME:
# 8 "data/maps/GraniteCave_HiddenArea/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, GraniteCave_HiddenArea_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

GraniteCave_HiddenArea_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 9 "data/maps/GraniteCave_HiddenArea/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 10 "data/maps/GraniteCave_HiddenArea/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq GraniteCave_HiddenArea_MapScripts_MAP_SCRIPT_ON_RESUME_3
# 10 "data/maps/GraniteCave_HiddenArea/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GraniteCave_HiddenArea_MapScripts_MAP_SCRIPT_ON_RESUME_3
	return

GraniteCave_HiddenArea_MapScripts_MAP_SCRIPT_ON_RESUME_3:
# 12 "data/maps/GraniteCave_HiddenArea/scripts.pory"
	removeobject VAR_LAST_TALKED
	return

GraniteCave_HiddenArea_MapScripts_MAP_SCRIPT_ON_LOAD:
# 21 "data/maps/GraniteCave_HiddenArea/scripts.pory"
	goto_if_unset FLAG_DEFEATED_MEWTWO, GraniteCave_HiddenArea_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

GraniteCave_HiddenArea_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 22 "data/maps/GraniteCave_HiddenArea/scripts.pory"
	clearflag FLAG_HIDE_MEWTWO
	return


GraniteCave_HiddenArea_EventScript_Mewtwo::
# 28 "data/maps/GraniteCave_HiddenArea/scripts.pory"
	lock
# 29 "data/maps/GraniteCave_HiddenArea/scripts.pory"
	faceplayer
# 30 "data/maps/GraniteCave_HiddenArea/scripts.pory"
	waitse
# 31 "data/maps/GraniteCave_HiddenArea/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_ENCOUNTER
# 32 "data/maps/GraniteCave_HiddenArea/scripts.pory"
	delay 40
# 33 "data/maps/GraniteCave_HiddenArea/scripts.pory"
	waitmoncry
# 34 "data/maps/GraniteCave_HiddenArea/scripts.pory"
	settotemboost 1, 0, 2, 2, 2, 2, 0, 0
# 35 "data/maps/GraniteCave_HiddenArea/scripts.pory"
	setwildbattle SPECIES_MEWTWO, 0, ITEM_MEWTWONITE_Y, NATURE_TIMID, 2, 0, 0, 4, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_PSYSTRIKE, MOVE_DAZZLING_GLEAM, MOVE_AURA_SPHERE, MOVE_ICE_BEAM
# 36 "data/maps/GraniteCave_HiddenArea/scripts.pory"
	setvar B_VAR_STARTING_STATUS, STARTING_STATUS_PSYCHIC_TERRAIN
# 37 "data/maps/GraniteCave_HiddenArea/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 38 "data/maps/GraniteCave_HiddenArea/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 39 "data/maps/GraniteCave_HiddenArea/scripts.pory"
	waitstate
# 40 "data/maps/GraniteCave_HiddenArea/scripts.pory"
	setvar B_VAR_STARTING_STATUS, 0
# 41 "data/maps/GraniteCave_HiddenArea/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 42 "data/maps/GraniteCave_HiddenArea/scripts.pory"
	setflag FLAG_DEFEATED_MEWTWO
# 43 "data/maps/GraniteCave_HiddenArea/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 44 "data/maps/GraniteCave_HiddenArea/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, GraniteCave_HiddenArea_EventScript_DefeatedMewtwo
# 45 "data/maps/GraniteCave_HiddenArea/scripts.pory"
	goto GraniteCave_HiddenArea_EventScript_RanFromMewtwo
# 46 "data/maps/GraniteCave_HiddenArea/scripts.pory"
	release
	end


GraniteCave_HiddenArea_EventScript_DefeatedMewtwo::
# 51 "data/maps/GraniteCave_HiddenArea/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	end


GraniteCave_HiddenArea_EventScript_RanFromMewtwo::
# 56 "data/maps/GraniteCave_HiddenArea/scripts.pory"
	setvar VAR_0x8004, SPECIES_MEWTWO
# 57 "data/maps/GraniteCave_HiddenArea/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
	end

