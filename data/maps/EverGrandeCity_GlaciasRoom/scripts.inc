# 1 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 2 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_MapScripts::
# 3 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_GlaciasRoom_OnWarp
# 4 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_GlaciasRoom_OnTransition
# 5 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.byte 0
# 6 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 7 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_OnTransition:
# 8 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	setvar VAR_UNUSED_0x40B8, 1
# 9 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end
# 10 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 11 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_OnWarp:
# 12 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_GlaciasRoom_EventScript_PlayerTurnNorth
# 13 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.2byte 0
# 14 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 15 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_PlayerTurnNorth::
# 16 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 17 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end
# 18 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 19 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_Glacia::
# 20 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	lock
# 21 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	faceplayer
# 22 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_GLACIA, EverGrandeCity_GlaciasRoom_EventScript_PostBattleSpeech
# 23 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 24 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	msgbox EverGrandeCity_GlaciasRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 25 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_GLACIA, EverGrandeCity_GlaciasRoom_Text_Defeat
# 26 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	goto EverGrandeCity_GlaciasRoom_EventScript_Defeated
# 27 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end
# 28 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 29 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_PostBattleSpeech::
# 30 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	msgbox EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 31 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	release
# 32 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end
# 33 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 34 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_Defeated::
# 35 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_GLACIA
# 36 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	addvar VAR_ELITE_4_STATE, 1
# 37 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	msgbox EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 38 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	release
# 39 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end
# 40 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 41 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_Text_IntroSpeech:
# 42 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "Welcome, my name is Glacia\n"
# 43 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "of the Elite Four.\p"
# 44 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "I've traveled from afar to Hoenn\n"
# 45 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "so that I may hone my ice skills.\p"
# 46 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "But all I have seen are challenges by\n"
# 47 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "weak Trainers and their Pokémon.\p"
# 48 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "What about you?\p"
# 49 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "It would please me to no end if I could\n"
# 50 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "go all out against you!$"
# 51 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 52 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_Text_Defeat:
# 53 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "You and your Pokémon…\n"
# 54 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "How hot your spirits burn!\p"
# 55 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "The all-consuming heat overwhelms.\p"
# 56 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "It's no surprise that my icy skills\n"
# 57 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "failed to harm you.$"
# 58 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 59 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech:
# 60 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "Advance to the next room.\p"
# 61 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "And there, confirm the truly fearsome\n"
# 62 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "side of the Pokémon League.$"
