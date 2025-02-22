
EverGrandeCity_GlaciasRoom_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_GlaciasRoom_OnWarp
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_GlaciasRoom_OnTransition
	.byte 0

EverGrandeCity_GlaciasRoom_OnTransition:
	setvar VAR_UNUSED_0x40B8, 1
	end

EverGrandeCity_GlaciasRoom_OnWarp:
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_GlaciasRoom_EventScript_PlayerTurnNorth
	.2byte 0

EverGrandeCity_GlaciasRoom_EventScript_PlayerTurnNorth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

EverGrandeCity_GlaciasRoom_EventScript_Glacia::
	lock
	faceplayer
	dotimebasedevents
	goto_if_set FLAG_DEFEATED_ELITE_4_GLACIA, EverGrandeCity_GlaciasRoom_EventScript_PostBattleSpeech
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	setweather WEATHER_FOG_HORIZONTAL
	doweather
	trainerbattle_single TRAINER_GLACIA_1, EverGrandeCity_GlaciasRoom_Text_IntroSpeech, EverGrandeCity_GlaciasRoom_Text_Defeat
	shouldtryrematchbattle TRAINER_GLACIA_1, EverGrandeCity_GlaciasRoom_EventScript_GlaciaRematch
	goto EverGrandeCity_GlaciasRoom_EventScript_Defeated
	end

EverGrandeCity_GlaciasRoom_EventScript_PostBattleSpeech::
	goto_if_eq VAR_ELITE_4_STATE, 4, EverGrandeCity_GlaciasRoom_EventScript_EliteFourDefeated
	msgbox EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_GlaciasRoom_EventScript_Defeated::
	resetweather
	doweather
	setflag FLAG_DEFEATED_ELITE_4_GLACIA
	addvar VAR_ELITE_4_STATE, 1
	goto_if_eq VAR_ELITE_4_STATE, 4, EverGrandeCity_GlaciasRoom_EventScript_EliteFourDefeated
	msgbox EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_GlaciasRoom_EventScript_EliteFourDefeated::
	msgbox EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_GlaciasRoom_EventScript_GlaciaRematch::
	trainerbattle_rematch TRAINER_GLACIA_1, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
	end

EverGrandeCity_GlaciasRoom_Text_IntroSpeech:
	.string "Welcome, my name is Glacia\n"
	.string "of the Elite Four.\p"
	.string "I've traveled from afar to Hoenn\n"
	.string "so that I may hone my ice skills.\p"
	.string "But all I have seen are challenges by\n"
	.string "weak Trainers and their Pokémon.\p"
	.string "What about you?\p"
	.string "It would please me to no end if I could\n"
	.string "go all out against you!$"

EverGrandeCity_GlaciasRoom_Text_Defeat:
	.string "You and your Pokémon…\n"
	.string "How hot your spirits burn!\p"
	.string "The all-consuming heat overwhelms.\p"
	.string "It's no surprise that my icy skills\n"
	.string "failed to harm you.$"

EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech:
	.string "Advance to the next room.\p"
	.string "And there, confirm the truly fearsome\n"
	.string "side of the Pokémon League.$"
