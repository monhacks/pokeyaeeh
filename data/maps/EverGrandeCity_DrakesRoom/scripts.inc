# 1 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 2 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_MapScripts::
# 3 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_DrakesRoom_OnWarp
# 4 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_DrakesRoom_OnTransition
# 5 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.byte 0
# 6 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 7 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_OnTransition:
# 8 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setvar VAR_UNUSED_0x40B8, 1
# 9 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 10 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 11 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_OnWarp:
# 12 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_DrakesRoom_EventScript_PlayerTurnNorth
# 13 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.2byte 0
# 14 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 15 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_PlayerTurnNorth::
# 16 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 17 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 18 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 19 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_Drake::
# 20 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	lock
# 21 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	faceplayer
# 22 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_DRAKE, EverGrandeCity_DrakesRoom_EventScript_PostBattleSpeech
# 23 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 24 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 25 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_DRAKE, EverGrandeCity_DrakesRoom_Text_Defeat
# 26 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	goto EverGrandeCity_DrakesRoom_EventScript_Defeated
# 27 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 28 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 29 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_PostBattleSpeech::
# 30 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 31 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	release
# 32 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 33 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 34 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_Defeated::
# 35 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setvar VAR_0x8004, FANCOUNTER_DEFEATED_DRAKE
# 36 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	special Script_TryGainNewFanFromCounter
# 37 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_DRAKE
# 38 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	addvar VAR_ELITE_4_STATE, 1
# 39 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 40 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	release
# 41 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 42 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 43 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_Text_IntroSpeech:
# 44 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "I am the last of the Pokémon League\n"
# 45 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Elite Four, Drake the Dragon master!\p"
# 46 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "In their natural state, Pokémon are\n"
# 47 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "wild living things. They are free.\p"
# 48 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "At times, they hinder us.\n"
# 49 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "At times, they help us.\p"
# 50 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "For us to battle with Pokémon as\n"
# 51 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "partners, do you know what it takes?\p"
# 52 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Do you know what is needed?\p"
# 53 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "If you don't, then you will never\n"
# 54 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "prevail over me!$"
# 55 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 56 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_Text_Defeat:
# 57 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Superb, it should be said.$"
# 58 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 59 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_Text_PostBattleSpeech:
# 60 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "You deserve every credit for coming\n"
# 61 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "this far as a Trainer of Pokémon.\p"
# 62 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "You do seem to know what is needed.\p"
# 63 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Yes, what a Trainer needs is a\n"
# 64 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "virtuous heart.\p"
# 65 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Pokémon touch the good hearts of\n"
# 66 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Trainers and learn good from wrong.\p"
# 67 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "They touch the good hearts of\n"
# 68 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Trainers and grow strong.\p"
# 69 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Go! Go onwards!\n"
# 70 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "The Champion is waiting!$"
