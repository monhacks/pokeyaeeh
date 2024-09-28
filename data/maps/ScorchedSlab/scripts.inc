# 1 "data/maps/ScorchedSlab/scripts.pory"

# 2 "data/maps/ScorchedSlab/scripts.pory"
ScorchedSlab_MapScripts::
# 3 "data/maps/ScorchedSlab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ScorchedSlab_OnTransition
# 4 "data/maps/ScorchedSlab/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ScorchedSlab_OnResume
# 5 "data/maps/ScorchedSlab/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, ScorchedSlab_OnWarp
# 6 "data/maps/ScorchedSlab/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ScorchedSlab_OnLoad
# 7 "data/maps/ScorchedSlab/scripts.pory"
	.byte 0

ScorchedSlab_OnWarp::
# 11 "data/maps/ScorchedSlab/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, ScorchedSlab_SetHarshSunlight
	return


ScorchedSlab_SetHarshSunlight::
# 15 "data/maps/ScorchedSlab/scripts.pory"
	goto_if_unset FLAG_DEFEATED_VOLCARONA, ScorchedSlab_SetHarshSunlight_1
	return

ScorchedSlab_SetHarshSunlight_1:
# 16 "data/maps/ScorchedSlab/scripts.pory"
	setweather WEATHER_DROUGHT
# 17 "data/maps/ScorchedSlab/scripts.pory"
	doweather
	return


ScorchedSlab_OnResume::
# 22 "data/maps/ScorchedSlab/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, ScorchedSlab_EventScript_TryRemoveVolcarona
	return


ScorchedSlab_EventScript_TryRemoveVolcarona::
# 26 "data/maps/ScorchedSlab/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 27 "data/maps/ScorchedSlab/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ScorchedSlab_EventScript_TryRemoveVolcarona_1
# 27 "data/maps/ScorchedSlab/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ScorchedSlab_EventScript_TryRemoveVolcarona_1
	return

ScorchedSlab_EventScript_TryRemoveVolcarona_1:
# 29 "data/maps/ScorchedSlab/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


ScorchedSlab_OnLoad::
# 38 "data/maps/ScorchedSlab/scripts.pory"
	call ScorchedSlab_OnWarp
# 39 "data/maps/ScorchedSlab/scripts.pory"
	call ScorchedSlab_OnTransition
	return


ScorchedSlab_OnTransition::
# 43 "data/maps/ScorchedSlab/scripts.pory"
	setflag FLAG_LANDMARK_SCORCHED_SLAB
# 44 "data/maps/ScorchedSlab/scripts.pory"
	call_if_unset FLAG_DEFEATED_VOLCARONA, ScorchedSlab_EventScript_ShowVolcarona
	return


ScorchedSlab_EventScript_ShowVolcarona::
# 48 "data/maps/ScorchedSlab/scripts.pory"
	clearflag FLAG_HIDE_VOLCARONA
	return


ScorchedSlab_EventScript_Volcarona::
# 53 "data/maps/ScorchedSlab/scripts.pory"
	lock
# 54 "data/maps/ScorchedSlab/scripts.pory"
	faceplayer
# 55 "data/maps/ScorchedSlab/scripts.pory"
	waitse
# 56 "data/maps/ScorchedSlab/scripts.pory"
	playmoncry SPECIES_VOLCARONA, CRY_MODE_ENCOUNTER
# 57 "data/maps/ScorchedSlab/scripts.pory"
	delay 40
# 58 "data/maps/ScorchedSlab/scripts.pory"
	waitmoncry
# 59 "data/maps/ScorchedSlab/scripts.pory"
	settotemboost 1, 0, 2, 2, 2, 2, 0, 0
# 60 "data/maps/ScorchedSlab/scripts.pory"
	randompercentage 10
# 61 "data/maps/ScorchedSlab/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ScorchedSlab_EventScript_Volcarona_2
# 67 "data/maps/ScorchedSlab/scripts.pory"
	setwildbattle SPECIES_VOLCARONA, 0, ITEM_FIRE_GEM, NATURE_TIMID, 2, 0, 0, 4, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_FIERY_DANCE, MOVE_BUG_BUZZ, MOVE_JETSTREAM, MOVE_GIGA_DRAIN, FALSE
ScorchedSlab_EventScript_Volcarona_1:
# 69 "data/maps/ScorchedSlab/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 70 "data/maps/ScorchedSlab/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 71 "data/maps/ScorchedSlab/scripts.pory"
	waitstate
# 72 "data/maps/ScorchedSlab/scripts.pory"
	resetweather
# 73 "data/maps/ScorchedSlab/scripts.pory"
	doweather
# 74 "data/maps/ScorchedSlab/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 75 "data/maps/ScorchedSlab/scripts.pory"
	setflag FLAG_DEFEATED_VOLCARONA
# 76 "data/maps/ScorchedSlab/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 77 "data/maps/ScorchedSlab/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, ScorchedSlab_EventScript_RanFromVolcarona
# 78 "data/maps/ScorchedSlab/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, ScorchedSlab_EventScript_RanFromVolcarona
# 79 "data/maps/ScorchedSlab/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, ScorchedSlab_EventScript_DefeatedVolcarona
# 80 "data/maps/ScorchedSlab/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, ScorchedSlab_EventScript_RanFromVolcarona
# 81 "data/maps/ScorchedSlab/scripts.pory"
	release
	end

ScorchedSlab_EventScript_Volcarona_2:
# 63 "data/maps/ScorchedSlab/scripts.pory"
	setwildbattle SPECIES_VOLCARONA, 0, ITEM_FIRE_GEM, NATURE_TIMID, 2, 0, 0, 4, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_FIERY_DANCE, MOVE_BUG_BUZZ, MOVE_JETSTREAM, MOVE_GIGA_DRAIN, TRUE
	goto ScorchedSlab_EventScript_Volcarona_1


ScorchedSlab_EventScript_DefeatedVolcarona::
# 86 "data/maps/ScorchedSlab/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	end


ScorchedSlab_EventScript_RanFromVolcarona::
# 91 "data/maps/ScorchedSlab/scripts.pory"
	setvar VAR_0x8004, SPECIES_VOLCARONA
# 92 "data/maps/ScorchedSlab/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
	end

