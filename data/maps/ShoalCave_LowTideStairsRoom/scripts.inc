# 1 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"

# 2 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
ShoalCave_LowTideStairsRoom_MapScripts::
# 3 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ShoalCave_LowTideStairsRoom_OnResume
# 4 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ShoalCave_LowTideStairsRoom_OnLoad
# 5 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ShoalCave_LowTideStairsRoom_OnTransition
# 6 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	.byte 0
# 7 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"

# 8 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
ShoalCave_LowTideStairsRoom_OnLoad:
# 9 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	end
# 10 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"

# 11 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
ShoalCave_LowTideStairsRoom_EventScript_SetShoalItemMetatiles::
# 12 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_3, ShoalCave_LowTideStairsRoom_EventScript_SetShoalItemMetatilesEnd
# 13 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	setmetatile 11, 11, METATILE_Cave_ShoalCave_DirtPile_Large, TRUE
# 14 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	return
# 15 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"

# 16 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
ShoalCave_LowTideStairsRoom_EventScript_SetShoalItemMetatilesEnd::
# 17 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	return
# 18 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"

# 19 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
ShoalCave_LowTideStairsRoom_EventScript_ShoalSalt3::
# 20 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	lockall
# 21 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_3, ShoalCave_LowTideStairsRoom_EventScript_ReceivedShoalSalt
# 22 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	giveitem ITEM_SHOAL_SALT
# 23 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 24 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	setmetatile 11, 11, METATILE_Cave_ShoalCave_DirtPile_Small, FALSE
# 25 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	special DrawWholeMapView
# 26 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	setflag FLAG_RECEIVED_SHOAL_SALT_3
# 27 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	releaseall
# 28 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	end
# 29 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"

# 30 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
ShoalCave_LowTideStairsRoom_EventScript_ReceivedShoalSalt::
# 31 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	msgbox ShoalCave_Text_WasShoalSaltNowNothing, MSGBOX_DEFAULT
# 32 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	releaseall
# 33 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	end

ShoalCave_LowTideStairsRoom_OnResume::
# 37 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, ShoalCave_LowTideStairsRoom_EventScript_TryRemoveArticuno
	return


ShoalCave_LowTideStairsRoom_EventScript_TryRemoveArticuno::
# 41 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 42 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ShoalCave_LowTideStairsRoom_EventScript_TryRemoveArticuno_1
# 42 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ShoalCave_LowTideStairsRoom_EventScript_TryRemoveArticuno_1
	return

ShoalCave_LowTideStairsRoom_EventScript_TryRemoveArticuno_1:
# 44 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


ShoalCave_LowTideStairsRoom_OnTransition::
# 53 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	call_if_unset FLAG_DEFEATED_ARTICUNO, ShoalCave_LowTideStairsRoom_EventScript_ShowArticuno
	return


ShoalCave_LowTideStairsRoom_EventScript_ShowArticuno::
# 57 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	clearflag FLAG_HIDE_ARTICUNO
	return


ShoalCave_LowTideStairsRoom_EventScript_Articuno::
# 62 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	lock
# 63 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	faceplayer
# 64 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	waitse
# 65 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	playmoncry SPECIES_ARTICUNO, CRY_MODE_ENCOUNTER
# 66 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	delay 40
# 67 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	waitmoncry
# 68 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	settotemboost 1, 0, 2, 2, 2, 2, 0, 0
# 69 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	setwildbattle SPECIES_ARTICUNO, 0, ITEM_LEFTOVERS, NATURE_TIMID, 2, 0, 0, 4, 252, 252, 0, 31, 30, 31, 30, 30, 31, MOVE_BLIZZARD, MOVE_HURRICANE, MOVE_HIDDEN_POWER, MOVE_ROOST
# 70 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 71 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 72 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	waitstate
# 73 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 74 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	setflag FLAG_DEFEATED_ARTICUNO
# 75 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 76 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, ShoalCave_LowTideStairsRoom_EventScript_DefeatedArticuno
# 77 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	goto ShoalCave_LowTideStairsRoom_EventScript_RanFromArticuno
# 78 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	release
	end


ShoalCave_LowTideStairsRoom_EventScript_DefeatedArticuno::
# 83 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	end


ShoalCave_LowTideStairsRoom_EventScript_RanFromArticuno::
# 88 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	setvar VAR_0x8004, SPECIES_ARTICUNO
# 89 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
	end

