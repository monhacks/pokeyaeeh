# 1 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 2 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_MapScripts::
# 3 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_SidneysRoom_OnWarp
# 4 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_SidneysRoom_OnTransition
# 5 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.byte 0
# 6 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 7 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_OnTransition:
# 8 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	setflag FLAG_MET_SCOTT_IN_EVERGRANDE
# 9 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	setflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
# 10 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	setvar VAR_UNUSED_0x40B8, 1
# 11 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 12 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 13 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_OnWarp:
# 14 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_SidneysRoom_EventScript_PlayerTurnNorth
# 15 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.2byte 0
# 16 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 17 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_PlayerTurnNorth::
# 18 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 19 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 20 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 21 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_OnFrame:
# 22 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script_2 VAR_ELITE_4_STATE, 0, EverGrandeCity_SidneysRoom_EventScript_WalkInCloseDoor
# 23 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.2byte 0
# 24 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 25 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_WalkInCloseDoor::
# 26 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	lockall
# 27 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	releaseall
# 28 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 29 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 30 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_Sidney::
# 31 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	lock
# 32 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	faceplayer
# 33 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_SIDNEY, EverGrandeCity_SidneysRoom_EventScript_PostBattleSpeech
# 34 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 35 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	msgbox EverGrandeCity_SidneysRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 36 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_SIDNEY, EverGrandeCity_SidneysRoom_Text_Defeat
# 37 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	goto EverGrandeCity_SidneysRoom_EventScript_Defeated
# 38 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 39 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 40 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_PostBattleSpeech::
# 41 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	msgbox EverGrandeCity_SidneysRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 42 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	release
# 43 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 44 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 45 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_Defeated::
# 46 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_SIDNEY
# 47 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	addvar VAR_ELITE_4_STATE, 1
# 48 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	msgbox EverGrandeCity_SidneysRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 49 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	release
# 50 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 51 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 52 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_Text_IntroSpeech:
# 53 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Welcome, challenger!\n"
# 54 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "I'm Sidney of the Elite Four.\p"
# 55 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "I like that look you're giving me.\n"
# 56 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "I guess you'll give me a good match.\l"
# 57 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "That's good! Looking real good!\p"
# 58 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "All right! You and me, let's enjoy\n"
# 59 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "a battle that can only be staged\l"
# 60 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "here in the Pokémon League!$"
# 61 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 62 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_Text_Defeat:
# 63 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Well, how do you like that? I lost!\n"
# 64 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Eh, it was fun, so it doesn't matter.$"
# 65 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 66 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_Text_PostBattleSpeech:
# 67 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Well, listen to what this loser has\n"
# 68 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "to say.\p"
# 69 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "You've got what it takes to go far.\n"
# 70 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Now, go on to the next room and enjoy\l"
# 71 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "your next battle!$"
