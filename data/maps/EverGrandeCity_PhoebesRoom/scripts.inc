
EverGrandeCity_PhoebesRoom_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_PhoebesRoom_OnWarp
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_PhoebesRoom_OnTransition
	.byte 0

EverGrandeCity_PhoebesRoom_OnTransition:
	setvar VAR_UNUSED_0x40B8, 1
	end

EverGrandeCity_PhoebesRoom_OnWarp:
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_PhoebesRoom_EventScript_PlayerTurnNorth
	.2byte 0

EverGrandeCity_PhoebesRoom_EventScript_PlayerTurnNorth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

EverGrandeCity_PhoebesRoom_EventScript_Phoebe::
	lock
	faceplayer
	dotimebasedevents
	goto_if_set FLAG_DEFEATED_ELITE_4_PHOEBE, EverGrandeCity_PhoebesRoom_EventScript_PostBattleSpeech
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	trainerbattle_single TRAINER_PHOEBE_1, EverGrandeCity_PhoebesRoom_Text_IntroSpeech, EverGrandeCity_PhoebesRoom_Text_Defeat
	shouldtryrematchbattle TRAINER_PHOEBE_1, EverGrandeCity_PhoebesRoom_EventScript_PhoebeRematch
	goto EverGrandeCity_PhoebesRoom_EventScript_Defeated
	end

EverGrandeCity_PhoebesRoom_EventScript_PostBattleSpeech::
	goto_if_eq VAR_ELITE_4_STATE, 4, EverGrandeCity_PhoebesRoom_EventScript_EliteFourDefeated
	msgbox EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_PhoebesRoom_EventScript_Defeated::
	setflag FLAG_DEFEATED_ELITE_4_PHOEBE
	addvar VAR_ELITE_4_STATE, 1
	goto_if_eq VAR_ELITE_4_STATE, 4, EverGrandeCity_PhoebesRoom_EventScript_EliteFourDefeated
	msgbox EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_PhoebesRoom_EventScript_EliteFourDefeated::
	msgbox EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_PhoebesRoom_EventScript_PhoebeRematch::
	trainerbattle_rematch TRAINER_PHOEBE_1, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
	end

EverGrandeCity_PhoebesRoom_Text_IntroSpeech:
	.string "Ahahaha!\p"
	.string "I'm Phoebe of the Elite Four.\n"
	.string "I did my training on Mt. Pyre.\p"
	.string "While I trained, I gained the ability\n"
	.string "to commune with Ghost-type Pokémon.\p"
	.string "Yes, the bond I developed with Pokémon\n"
	.string "is extremely tight.\p"
	.string "So, come on, just try and see if you can\n"
	.string "even inflict damage on my Pokémon!$"

EverGrandeCity_PhoebesRoom_Text_Defeat:
	.string "Oh, darn.\n"
	.string "I've gone and lost.$"

EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech:
	.string "There's a definite bond between you\n"
	.string "and your Pokémon, too.\p"
	.string "I didn't recognize it, so it's only\n"
	.string "natural that I lost.\p"
	.string "Yup, I'd like to see how far your bond\n"
	.string "will carry you.\p"
	.string "Go ahead, move on to the next room.$"
