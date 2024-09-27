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
# 21 "data/maps/ScorchedSlab/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, ScorchedSlab_EventScript_TryRemoveVolcarona
	return


ScorchedSlab_EventScript_TryRemoveVolcarona::
# 25 "data/maps/ScorchedSlab/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 26 "data/maps/ScorchedSlab/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ScorchedSlab_EventScript_TryRemoveVolcarona_1
# 26 "data/maps/ScorchedSlab/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ScorchedSlab_EventScript_TryRemoveVolcarona_1
	return

ScorchedSlab_EventScript_TryRemoveVolcarona_1:
# 28 "data/maps/ScorchedSlab/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


ScorchedSlab_OnLoad::
# 37 "data/maps/ScorchedSlab/scripts.pory"
	call ScorchedSlab_OnWarp
# 38 "data/maps/ScorchedSlab/scripts.pory"
	call ScorchedSlab_OnTransition
	return


ScorchedSlab_OnTransition::
# 42 "data/maps/ScorchedSlab/scripts.pory"
	setflag FLAG_LANDMARK_SCORCHED_SLAB
# 43 "data/maps/ScorchedSlab/scripts.pory"
	call_if_unset FLAG_DEFEATED_VOLCARONA, ScorchedSlab_EventScript_ShowVolcarona
	return


ScorchedSlab_EventScript_ShowVolcarona::
# 47 "data/maps/ScorchedSlab/scripts.pory"
	clearflag FLAG_HIDE_VOLCARONA
	return


ScorchedSlab_EventScript_Volcarona::
# 52 "data/maps/ScorchedSlab/scripts.pory"
	lock
# 53 "data/maps/ScorchedSlab/scripts.pory"
	faceplayer
# 54 "data/maps/ScorchedSlab/scripts.pory"
	waitse
# 55 "data/maps/ScorchedSlab/scripts.pory"
	playmoncry SPECIES_VOLCARONA, CRY_MODE_ENCOUNTER
# 56 "data/maps/ScorchedSlab/scripts.pory"
	delay 40
# 57 "data/maps/ScorchedSlab/scripts.pory"
	waitmoncry
# 58 "data/maps/ScorchedSlab/scripts.pory"
	settotemboost 1, 0, 2, 2, 2, 2, 0, 0
# 59 "data/maps/ScorchedSlab/scripts.pory"
	randompercentage 10
# 60 "data/maps/ScorchedSlab/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ScorchedSlab_EventScript_Volcarona_2
# 66 "data/maps/ScorchedSlab/scripts.pory"
	setwildbattle SPECIES_VOLCARONA, 0, ITEM_FIRE_GEM, NATURE_TIMID, 2, 0, 0, 4, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_FIERY_DANCE, MOVE_BUG_BUZZ, MOVE_JETSTREAM, MOVE_GIGA_DRAIN, FALSE
ScorchedSlab_EventScript_Volcarona_1:
# 68 "data/maps/ScorchedSlab/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 69 "data/maps/ScorchedSlab/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 70 "data/maps/ScorchedSlab/scripts.pory"
	waitstate
# 71 "data/maps/ScorchedSlab/scripts.pory"
	resetweather
# 72 "data/maps/ScorchedSlab/scripts.pory"
	doweather
# 73 "data/maps/ScorchedSlab/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 74 "data/maps/ScorchedSlab/scripts.pory"
	setflag FLAG_DEFEATED_VOLCARONA
# 75 "data/maps/ScorchedSlab/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 76 "data/maps/ScorchedSlab/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, ScorchedSlab_EventScript_RanFromVolcarona
# 77 "data/maps/ScorchedSlab/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, ScorchedSlab_EventScript_RanFromVolcarona
# 78 "data/maps/ScorchedSlab/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, ScorchedSlab_EventScript_DefeatedVolcarona
# 79 "data/maps/ScorchedSlab/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, ScorchedSlab_EventScript_RanFromVolcarona
# 80 "data/maps/ScorchedSlab/scripts.pory"
	release
	end

ScorchedSlab_EventScript_Volcarona_2:
# 62 "data/maps/ScorchedSlab/scripts.pory"
	setwildbattle SPECIES_VOLCARONA, 0, ITEM_FIRE_GEM, NATURE_TIMID, 2, 0, 0, 4, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_FIERY_DANCE, MOVE_BUG_BUZZ, MOVE_JETSTREAM, MOVE_GIGA_DRAIN, TRUE
	goto ScorchedSlab_EventScript_Volcarona_1


ScorchedSlab_EventScript_DefeatedVolcarona::
# 85 "data/maps/ScorchedSlab/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	end


ScorchedSlab_EventScript_RanFromVolcarona::
# 90 "data/maps/ScorchedSlab/scripts.pory"
	setvar VAR_0x8004, SPECIES_VOLCARONA
# 91 "data/maps/ScorchedSlab/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
	end

