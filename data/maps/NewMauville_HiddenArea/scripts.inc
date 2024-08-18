NewMauville_HiddenArea_MapScripts::
# 2 "data/maps/NewMauville_HiddenArea/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NewMauvilleHiddenArea_OnResume
# 3 "data/maps/NewMauville_HiddenArea/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, NewMauvilleHiddenArea_OnLoad
# 4 "data/maps/NewMauville_HiddenArea/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewMauvilleHiddenArea_OnTransition
	.byte 0


NewMauvilleHiddenArea_OnResume::
# 8 "data/maps/NewMauville_HiddenArea/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, NewMauvilleHiddenArea_EventScript_TryRemoveZapdos
	return


NewMauvilleHiddenArea_EventScript_TryRemoveZapdos::
# 12 "data/maps/NewMauville_HiddenArea/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/NewMauville_HiddenArea/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq NewMauvilleHiddenArea_EventScript_TryRemoveZapdos_1
# 13 "data/maps/NewMauville_HiddenArea/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq NewMauvilleHiddenArea_EventScript_TryRemoveZapdos_1
	return

NewMauvilleHiddenArea_EventScript_TryRemoveZapdos_1:
# 15 "data/maps/NewMauville_HiddenArea/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


NewMauvilleHiddenArea_OnLoad::
	return


NewMauvilleHiddenArea_OnTransition::
# 27 "data/maps/NewMauville_HiddenArea/scripts.pory"
	call_if_unset FLAG_DEFEATED_ZAPDOS, NewMauvilleHiddenArea_EventScript_ShowZapdos
	return


NewMauvilleHiddenArea_EventScript_ShowZapdos::
# 31 "data/maps/NewMauville_HiddenArea/scripts.pory"
	clearflag FLAG_HIDE_ZAPDOS
	return


NewMauvilleHiddenArea_EventScript_Zapdos::
# 36 "data/maps/NewMauville_HiddenArea/scripts.pory"
	lock
# 37 "data/maps/NewMauville_HiddenArea/scripts.pory"
	faceplayer
# 38 "data/maps/NewMauville_HiddenArea/scripts.pory"
	waitse
# 39 "data/maps/NewMauville_HiddenArea/scripts.pory"
	playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
# 40 "data/maps/NewMauville_HiddenArea/scripts.pory"
	delay 40
# 41 "data/maps/NewMauville_HiddenArea/scripts.pory"
	waitmoncry
# 42 "data/maps/NewMauville_HiddenArea/scripts.pory"
	settotemboost 1, 1, 1, 1, 2, 1, 0, 0
# 43 "data/maps/NewMauville_HiddenArea/scripts.pory"
	setwildbattle SPECIES_ZAPDOS, 0, ITEM_LEFTOVERS, NATURE_TIMID, 2, 0, 0, 4, 252, 252, 0, 31, 31, 31, 30, 31, 31, MOVE_THUNDER, MOVE_HURRICANE, MOVE_HIDDEN_POWER, MOVE_ROOST
# 44 "data/maps/NewMauville_HiddenArea/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 45 "data/maps/NewMauville_HiddenArea/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 46 "data/maps/NewMauville_HiddenArea/scripts.pory"
	waitstate
# 47 "data/maps/NewMauville_HiddenArea/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 48 "data/maps/NewMauville_HiddenArea/scripts.pory"
	setflag FLAG_DEFEATED_ZAPDOS
# 49 "data/maps/NewMauville_HiddenArea/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 50 "data/maps/NewMauville_HiddenArea/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, NewMauvilleHiddenArea_EventScript_RanFromZapdos
# 51 "data/maps/NewMauville_HiddenArea/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, NewMauvilleHiddenArea_EventScript_RanFromZapdos
# 52 "data/maps/NewMauville_HiddenArea/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, NewMauvilleHiddenArea_EventScript_DefeatedZapdos
# 53 "data/maps/NewMauville_HiddenArea/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, NewMauvilleHiddenArea_EventScript_RanFromZapdos
# 54 "data/maps/NewMauville_HiddenArea/scripts.pory"
	release
	end


NewMauvilleHiddenArea_EventScript_DefeatedZapdos::
# 59 "data/maps/NewMauville_HiddenArea/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	end


NewMauvilleHiddenArea_EventScript_RanFromZapdos::
# 64 "data/maps/NewMauville_HiddenArea/scripts.pory"
	setvar VAR_0x8004, SPECIES_ZAPDOS
# 65 "data/maps/NewMauville_HiddenArea/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
	end

