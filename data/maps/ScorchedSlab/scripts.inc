
ScorchedSlab_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ScorchedSlab_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, ScorchedSlab_OnResume
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, ScorchedSlab_OnWarp
	map_script MAP_SCRIPT_ON_LOAD, ScorchedSlab_OnLoad
	.byte 0

ScorchedSlab_OnWarp::
	map_script_2 VAR_TEMP_0, 0, ScorchedSlab_SetHarshSunlight
	return


ScorchedSlab_SetHarshSunlight::
	goto_if_unset FLAG_DEFEATED_VOLCARONA, ScorchedSlab_SetHarshSunlight_1
	return

ScorchedSlab_SetHarshSunlight_1:
	setweather WEATHER_DROUGHT
	doweather
	return


ScorchedSlab_OnResume::
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, ScorchedSlab_EventScript_TryRemoveVolcarona
	return


ScorchedSlab_EventScript_TryRemoveVolcarona::
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ScorchedSlab_EventScript_TryRemoveVolcarona_1
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ScorchedSlab_EventScript_TryRemoveVolcarona_1
	return

ScorchedSlab_EventScript_TryRemoveVolcarona_1:
	removeobject VAR_LAST_TALKED
	return


ScorchedSlab_OnLoad::
	call ScorchedSlab_OnWarp
	call ScorchedSlab_OnTransition
	return


ScorchedSlab_OnTransition::
	setflag FLAG_LANDMARK_SCORCHED_SLAB
	call_if_unset FLAG_DEFEATED_VOLCARONA, ScorchedSlab_EventScript_ShowVolcarona
	return


ScorchedSlab_EventScript_ShowVolcarona::
	clearflag FLAG_HIDE_VOLCARONA
	return


ScorchedSlab_EventScript_Volcarona::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_VOLCARONA, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	settotemboost 1, 0, 2, 2, 2, 2, 0, 0
	randompercentage 10
	compare VAR_RESULT, TRUE
	goto_if_eq ScorchedSlab_EventScript_Volcarona_2
	setwildbattle SPECIES_VOLCARONA, 0, ITEM_FIRE_GEM, NATURE_TIMID, 2, 0, 0, 4, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_FIERY_DANCE, MOVE_BUG_BUZZ, MOVE_JETSTREAM, MOVE_GIGA_DRAIN, FALSE
ScorchedSlab_EventScript_Volcarona_1:
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	resetweather
	doweather
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	setflag FLAG_DEFEATED_VOLCARONA
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, ScorchedSlab_EventScript_DefeatedVolcarona
	goto ScorchedSlab_EventScript_RanFromVolcarona
	end

ScorchedSlab_EventScript_Volcarona_2:
	setwildbattle SPECIES_VOLCARONA, 0, ITEM_FIRE_GEM, NATURE_TIMID, 2, 0, 0, 4, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_FIERY_DANCE, MOVE_BUG_BUZZ, MOVE_JETSTREAM, MOVE_GIGA_DRAIN, TRUE
	goto ScorchedSlab_EventScript_Volcarona_1


ScorchedSlab_EventScript_DefeatedVolcarona::
	goto Common_EventScript_RemoveStaticPokemon
	end


ScorchedSlab_EventScript_RanFromVolcarona::
	setvar VAR_0x8004, SPECIES_VOLCARONA
	goto Common_EventScript_LegendaryFlewAway
	end

