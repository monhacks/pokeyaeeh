NewMauville_HiddenArea_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, NewMauvilleHiddenArea_OnResume
	map_script MAP_SCRIPT_ON_LOAD, NewMauvilleHiddenArea_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, NewMauvilleHiddenArea_OnTransition
	.byte 0


NewMauvilleHiddenArea_OnResume::
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, NewMauvilleHiddenArea_EventScript_TryRemoveZapdos
	return


NewMauvilleHiddenArea_EventScript_TryRemoveZapdos::
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq NewMauvilleHiddenArea_EventScript_TryRemoveZapdos_1
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq NewMauvilleHiddenArea_EventScript_TryRemoveZapdos_1
	return

NewMauvilleHiddenArea_EventScript_TryRemoveZapdos_1:
	removeobject VAR_LAST_TALKED
	return


NewMauvilleHiddenArea_OnLoad::
	return


NewMauvilleHiddenArea_OnTransition::
	call_if_unset FLAG_DEFEATED_ZAPDOS, NewMauvilleHiddenArea_EventScript_ShowZapdos
	return


NewMauvilleHiddenArea_EventScript_ShowZapdos::
	clearflag FLAG_HIDE_ZAPDOS
	return


NewMauvilleHiddenArea_EventScript_Zapdos::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	settotemboost 1, 1, 1, 1, 2, 1, 0, 0
	setwildbattle SPECIES_ZAPDOS, 0, ITEM_LEFTOVERS, NATURE_TIMID, 2, 0, 0, 4, 252, 252, 0, 31, 31, 31, 30, 31, 31, MOVE_THUNDER, MOVE_HURRICANE, MOVE_HIDDEN_POWER, MOVE_ROOST
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, NewMauvilleHiddenArea_EventScript_RanFromZapdos
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, NewMauvilleHiddenArea_EventScript_RanFromZapdos
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, NewMauvilleHiddenArea_EventScript_DefeatedZapdos
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, NewMauvilleHiddenArea_EventScript_RanFromZapdos
	setflag FLAG_DEFEATED_ZAPDOS
	release
	end


NewMauvilleHiddenArea_EventScript_DefeatedZapdos::
	setflag FLAG_DEFEATED_ZAPDOS
	goto Common_EventScript_RemoveStaticPokemon
	end


NewMauvilleHiddenArea_EventScript_RanFromZapdos::
	setvar VAR_0x8004, SPECIES_ZAPDOS
	goto Common_EventScript_LegendaryFlewAway
	end

