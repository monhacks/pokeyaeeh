
ShoalCave_LowTideStairsRoom_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, ShoalCave_LowTideStairsRoom_OnResume
	map_script MAP_SCRIPT_ON_LOAD, ShoalCave_LowTideStairsRoom_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, ShoalCave_LowTideStairsRoom_OnTransition
	.byte 0

ShoalCave_LowTideStairsRoom_OnLoad:
	end

ShoalCave_LowTideStairsRoom_EventScript_SetShoalItemMetatiles::
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_3, ShoalCave_LowTideStairsRoom_EventScript_SetShoalItemMetatilesEnd
	setmetatile 11, 11, METATILE_Cave_ShoalCave_DirtPile_Large, TRUE
	return

ShoalCave_LowTideStairsRoom_EventScript_SetShoalItemMetatilesEnd::
	return

ShoalCave_LowTideStairsRoom_EventScript_ShoalSalt3::
	lockall
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_3, ShoalCave_LowTideStairsRoom_EventScript_ReceivedShoalSalt
	giveitem ITEM_SHOAL_SALT
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setmetatile 11, 11, METATILE_Cave_ShoalCave_DirtPile_Small, FALSE
	special DrawWholeMapView
	setflag FLAG_RECEIVED_SHOAL_SALT_3
	releaseall
	end

ShoalCave_LowTideStairsRoom_EventScript_ReceivedShoalSalt::
	msgbox ShoalCave_Text_WasShoalSaltNowNothing, MSGBOX_DEFAULT
	releaseall
	end

ShoalCave_LowTideStairsRoom_OnResume::
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, ShoalCave_LowTideStairsRoom_EventScript_TryRemoveArticuno
	return


ShoalCave_LowTideStairsRoom_EventScript_TryRemoveArticuno::
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ShoalCave_LowTideStairsRoom_EventScript_TryRemoveArticuno_1
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ShoalCave_LowTideStairsRoom_EventScript_TryRemoveArticuno_1
	return

ShoalCave_LowTideStairsRoom_EventScript_TryRemoveArticuno_1:
	removeobject VAR_LAST_TALKED
	return


ShoalCave_LowTideStairsRoom_OnTransition::
	call_if_unset FLAG_DEFEATED_ARTICUNO, ShoalCave_LowTideStairsRoom_EventScript_ShowArticuno
	return


ShoalCave_LowTideStairsRoom_EventScript_ShowArticuno::
	clearflag FLAG_HIDE_ARTICUNO
	return


ShoalCave_LowTideStairsRoom_EventScript_Articuno::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ARTICUNO, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	settotemboost 1, 0, 2, 2, 2, 2, 0, 0
	setwildbattle SPECIES_ARTICUNO, 0, ITEM_LEFTOVERS, NATURE_TIMID, 2, 0, 0, 4, 252, 252, 0, 31, 30, 31, 30, 30, 31, MOVE_BLIZZARD, MOVE_HURRICANE, MOVE_HIDDEN_POWER, MOVE_ROOST
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	setflag FLAG_DEFEATED_ARTICUNO
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, ShoalCave_LowTideStairsRoom_EventScript_DefeatedArticuno
	goto ShoalCave_LowTideStairsRoom_EventScript_RanFromArticuno
	release
	end


ShoalCave_LowTideStairsRoom_EventScript_DefeatedArticuno::
	goto Common_EventScript_RemoveStaticPokemon
	end


ShoalCave_LowTideStairsRoom_EventScript_RanFromArticuno::
	setvar VAR_0x8004, SPECIES_ARTICUNO
	goto Common_EventScript_LegendaryFlewAway
	end

