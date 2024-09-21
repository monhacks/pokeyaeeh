# 1 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 2 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_MapScripts::
# 3 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_PhoebesRoom_OnWarp
# 4 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_PhoebesRoom_OnTransition
# 5 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.byte 0
# 6 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 7 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_OnTransition:
# 8 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setvar VAR_UNUSED_0x40B8, 1
# 9 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 10 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 11 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_OnWarp:
# 12 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_PhoebesRoom_EventScript_PlayerTurnNorth
# 13 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.2byte 0
# 14 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 15 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_PlayerTurnNorth::
# 16 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 17 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 18 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 19 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_Phoebe::
# 20 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	lock
# 21 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	faceplayer
# 22 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_PHOEBE, EverGrandeCity_PhoebesRoom_EventScript_PostBattleSpeech
# 23 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 24 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 25 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_PHOEBE, EverGrandeCity_PhoebesRoom_Text_Defeat
# 26 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_Defeated
# 27 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 28 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 29 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_PostBattleSpeech::
# 30 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 31 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	release
# 32 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 33 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 34 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_Defeated::
# 35 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_PHOEBE
# 36 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	addvar VAR_ELITE_4_STATE, 1
# 37 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 38 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	release
# 39 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 40 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 41 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_Text_IntroSpeech:
# 42 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Ahahaha!\p"
# 43 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "I'm Phoebe of the Elite Four.\n"
# 44 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "I did my training on Mt. Pyre.\p"
# 45 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "While I trained, I gained the ability\n"
# 46 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "to commune with Ghost-type Pokémon.\p"
# 47 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Yes, the bond I developed with Pokémon\n"
# 48 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "is extremely tight.\p"
# 49 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "So, come on, just try and see if you can\n"
# 50 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "even inflict damage on my Pokémon!$"
# 51 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 52 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_Text_Defeat:
# 53 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Oh, darn.\n"
# 54 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "I've gone and lost.$"
# 55 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 56 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech:
# 57 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "There's a definite bond between you\n"
# 58 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "and your Pokémon, too.\p"
# 59 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "I didn't recognize it, so it's only\n"
# 60 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "natural that I lost.\p"
# 61 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Yup, I'd like to see how far your bond\n"
# 62 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "will carry you.\p"
# 63 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Go ahead, move on to the next room.$"
