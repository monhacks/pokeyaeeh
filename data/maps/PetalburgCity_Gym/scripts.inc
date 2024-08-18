# 1 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_NORMAN, 1
# 3 "data/maps/PetalburgCity_Gym/scripts.pory"

# 4 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_MapScripts::
# 5 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PetalburgCity_Gym_OnLoad
# 6 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_Gym_OnTransition
# 7 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_Gym_OnWarp
# 8 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_Gym_OnFrame
# 9 "data/maps/PetalburgCity_Gym/scripts.pory"
	.byte 0
# 10 "data/maps/PetalburgCity_Gym/scripts.pory"

# 11 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnLoad:
# 12 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 13 "data/maps/PetalburgCity_Gym/scripts.pory"

# 14 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnTransition:
# 15 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_CheckNormanForRematch
# 16 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 17 "data/maps/PetalburgCity_Gym/scripts.pory"

# 18 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_CheckNormanForRematch::
# 19 "data/maps/PetalburgCity_Gym/scripts.pory"
	setorcopyvar VAR_TRAINER_BATTLE_OPPONENT_A, TRAINER_NORMAN_1
# 20 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsTrainerReadyForRematch
# 21 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontMoveNormanToFront
# 22 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_Gym_EventScript_DontMoveNormanToFront
# 23 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_NORMAN, 4, 107
# 24 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 25 "data/maps/PetalburgCity_Gym/scripts.pory"

# 26 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontMoveNormanToFront::
# 27 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 8
# 28 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 29 "data/maps/PetalburgCity_Gym/scripts.pory"

# 30 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnWarp:
# 31 "data/maps/PetalburgCity_Gym/scripts.pory"
	.2byte 0
# 32 "data/maps/PetalburgCity_Gym/scripts.pory"

# 33 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnFrame:
# 34 "data/maps/PetalburgCity_Gym/scripts.pory"
	.2byte 0
# 35 "data/maps/PetalburgCity_Gym/scripts.pory"

# 36 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Norman::
# 37 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 38 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 39 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_PETALBURG_GYM_STATE
# 40 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 6, PetalburgCity_Gym_EventScript_NormanBattle
# 41 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 7, PetalburgCity_Gym_EventScript_NormanPostBattle
# 42 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 8, PetalburgCity_Gym_EventScript_NormanRematch
# 43 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon, MSGBOX_DEFAULT
# 44 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 45 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 46 "data/maps/PetalburgCity_Gym/scripts.pory"

# 47 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanPostBattle::
# 48 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_DRAIN_PUNCH, PetalburgCity_Gym_EventScript_GiveDrainPunch2
# 49 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough
# 50 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHappyAndSad, MSGBOX_DEFAULT
# 51 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 52 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 53 "data/maps/PetalburgCity_Gym/scripts.pory"

# 54 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveDrainPunch2::
# 55 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveDrainPunch
# 56 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 57 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 58 "data/maps/PetalburgCity_Gym/scripts.pory"

# 59 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanRematch::
# 60 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_rematch TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanPreRematch, PetalburgCity_Gym_Text_NormanRematchDefeat
# 61 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanPostRematch, MSGBOX_AUTOCLOSE
# 62 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 63 "data/maps/PetalburgCity_Gym/scripts.pory"

# 64 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanBattle::
# 65 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanIntro, MSGBOX_DEFAULT
# 66 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag B_FLAG_NO_BAG_USE
# 67 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanDefeat
# 68 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanAfterDefeat, MSGBOX_DEFAULT
# 69 "data/maps/PetalburgCity_Gym/scripts.pory"
	message PetalburgCity_Gym_Text_ReceivedBalanceBadge
# 70 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 71 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 72 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis, MSGBOX_DEFAULT
# 73 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_PETALBURG_GYM
# 74 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 75 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 76 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 1
# 77 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 78 "data/maps/PetalburgCity_Gym/scripts.pory"
	special ResetHealLocationFromDewford
# 79 "data/maps/PetalburgCity_Gym/scripts.pory"
	call EventScript_HideMrBriney
# 80 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 5
# 81 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 82 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_DEWFORD_HALL_SLUDGE_BOMB_MAN
# 83 "data/maps/PetalburgCity_Gym/scripts.pory"
	@clearflag FLAG_HIDE_PETALBURG_CITY_BIRCH
# 84 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 85 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveDrainPunch
# 86 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 87 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 88 "data/maps/PetalburgCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 89 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox Route104_Text_RegisteredDadInPokenav, MSGBOX_DEFAULT
# 90 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitfanfare
# 91 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 92 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 93 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_NORMAN_MATCH_CALL
# 94 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 95 "data/maps/PetalburgCity_Gym/scripts.pory"

# 96 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveDrainPunch::
# 97 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_TM_DRAIN_PUNCH
# 98 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 99 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_DRAIN_PUNCH
# 100 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainFacade, MSGBOX_DEFAULT
# 101 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_GALLADITE
# 102 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainGalladite, MSGBOX_DEFAULT
# 103 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 104 "data/maps/PetalburgCity_Gym/scripts.pory"

# 105 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough::
# 106 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough, MSGBOX_DEFAULT
# 107 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 108 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 109 "data/maps/PetalburgCity_Gym/scripts.pory"

# 110 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Randall::
# 111 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_RANDALL, PetalburgCity_Gym_Text_RandallIntro, PetalburgCity_Gym_Text_RandallDefeat
# 112 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBattle, MSGBOX_AUTOCLOSE
# 113 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 114 "data/maps/PetalburgCity_Gym/scripts.pory"

# 115 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Parker::
# 116 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PARKER, PetalburgCity_Gym_Text_ParkerIntro, PetalburgCity_Gym_Text_ParkerDefeat
# 117 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
# 118 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 119 "data/maps/PetalburgCity_Gym/scripts.pory"

# 120 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_George::
# 121 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_GEORGE, PetalburgCity_Gym_Text_GeorgeIntro, PetalburgCity_Gym_Text_GeorgeDefeat
# 122 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
# 123 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 124 "data/maps/PetalburgCity_Gym/scripts.pory"

# 125 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Berke::
# 126 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BERKE, PetalburgCity_Gym_Text_BerkeIntro, PetalburgCity_Gym_Text_BerkeDefeat
# 127 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
# 128 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 129 "data/maps/PetalburgCity_Gym/scripts.pory"

# 130 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Mary::
# 131 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARY, PetalburgCity_Gym_Text_MaryIntro, PetalburgCity_Gym_Text_MaryDefeat
# 132 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
# 133 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 134 "data/maps/PetalburgCity_Gym/scripts.pory"

# 135 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Alexia::
# 136 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ALEXIA, PetalburgCity_Gym_Text_AlexiaIntro, PetalburgCity_Gym_Text_AlexiaDefeat
# 137 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBattle, MSGBOX_AUTOCLOSE
# 138 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 139 "data/maps/PetalburgCity_Gym/scripts.pory"

# 140 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Jody::
# 141 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JODY, PetalburgCity_Gym_Text_JodyIntro, PetalburgCity_Gym_Text_JodyDefeat
# 142 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBattle, MSGBOX_AUTOCLOSE
# 143 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 144 "data/maps/PetalburgCity_Gym/scripts.pory"

# 145 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuide::
# 146 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 147 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 148 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GymGuidePostVictory
# 149 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 150 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 151 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 152 "data/maps/PetalburgCity_Gym/scripts.pory"

# 153 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuidePostVictory::
# 154 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 155 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 156 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 157 "data/maps/PetalburgCity_Gym/scripts.pory"

# 158 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymStatue::
# 159 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 160 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 161 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 162 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 163 "data/maps/PetalburgCity_Gym/scripts.pory"

# 164 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymStatue::
# 165 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 166 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 167 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 168 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 169 "data/maps/PetalburgCity_Gym/scripts.pory"

# 170 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatueCertified::
# 171 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 172 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 173 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 174 "data/maps/PetalburgCity_Gym/scripts.pory"

# 175 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatue::
# 176 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 177 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 178 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 179 "data/maps/PetalburgCity_Gym/scripts.pory"

# 180 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon:
# 181 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Chrizz: Skeddadle kiddo!$"
# 182 "data/maps/PetalburgCity_Gym/scripts.pory"

# 183 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIdLikeAPokemon:
# 184 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Um… I…\n"
# 185 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'd like to get a Pokémon, please…$"
# 186 "data/maps/PetalburgCity_Gym/scripts.pory"

# 187 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadOhYoureWallyRight:
# 188 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Hm? You're… Uh… Oh, right.\n"
# 189 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're Wally, right?$"
# 190 "data/maps/PetalburgCity_Gym/scripts.pory"

# 191 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon:
# 192 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally: I'm going to go stay with my\n"
# 193 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "relatives in Verdanturf Town.\p"
# 194 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I thought I would be lonely by myself,\n"
# 195 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I wanted to take a Pokémon along.\p"
# 196 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But I've never caught a Pokémon before.\n"
# 197 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I don't know how…$"
# 198 "data/maps/PetalburgCity_Gym/scripts.pory"

# 199 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHmISee:
# 200 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Hm. I see.$"
# 201 "data/maps/PetalburgCity_Gym/scripts.pory"

# 202 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadPlayerGoWithWally:
# 203 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: {PLAYER}, you heard that,\n"
# 204 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right?\p"
# 205 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go with Wally and make sure that he\n"
# 206 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "safely catches a Pokémon.$"
# 207 "data/maps/PetalburgCity_Gym/scripts.pory"

# 208 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon:
# 209 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally, here, I'll loan you my Pokémon.\p"
# 210 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally received a Zigzagoon!$"
# 211 "data/maps/PetalburgCity_Gym/scripts.pory"

# 212 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall:
# 213 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally: Oh, wow!\n"
# 214 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "A Pokémon!\p"
# 215 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Hm. I'll give you a Poké Ball, too.\n"
# 216 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go for it!\p"
# 217 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally received a Poké Ball!$"
# 218 "data/maps/PetalburgCity_Gym/scripts.pory"

# 219 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyOhWowThankYou:
# 220 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally: Oh, wow!\n"
# 221 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Thank you!$"
# 222 "data/maps/PetalburgCity_Gym/scripts.pory"

# 223 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WouldYouReallyComeWithMe:
# 224 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}… Would you really come\n"
# 225 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with me?$"
# 226 "data/maps/PetalburgCity_Gym/scripts.pory"

# 227 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadSoDidItWorkOut:
# 228 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: So, did it work out?$"
# 229 "data/maps/PetalburgCity_Gym/scripts.pory"

# 230 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouBye:
# 231 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally: Thank you, yes, it did.\n"
# 232 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here's your Pokémon back.\p"
# 233 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, thank you for coming along\n"
# 234 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with me.\p"
# 235 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You two are why I was able to catch\n"
# 236 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "my Pokémon.\p"
# 237 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I promise I'll take really good\n"
# 238 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "care of it.\p"
# 239 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh! My mom's waiting for me,\n"
# 240 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I have to go!\p"
# 241 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Bye, {PLAYER}!$"
# 242 "data/maps/PetalburgCity_Gym/scripts.pory"

# 243 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoCollectBadges:
# 244 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Now…\p"
# 245 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, if you want to become a\n"
# 246 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "strong Trainer, here's my advice.\p"
# 247 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Head for Rustboro City beyond this\n"
# 248 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "town.\p"
# 249 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There, you should challenge\n"
# 250 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Gym Leader, Dor.\p"
# 251 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After her, go on to other Pokémon\n"
# 252 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Gyms and defeat their Leaders.\p"
# 253 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Collect Badges from them,\n"
# 254 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "understood?\p"
# 255 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Of course, I'm a Gym Leader, too.\n"
# 256 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We'll battle one day, {PLAYER}.\p"
# 257 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But that's only after you become\n"
# 258 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.$"
# 259 "data/maps/PetalburgCity_Gym/scripts.pory"

# 260 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToRustboro:
# 261 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Hm? Aren't you going to the\n"
# 262 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pokémon Gym in Rustboro City?\p"
# 263 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There's no challenge for me to\n"
# 264 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle a greenhorn Trainer.\p"
# 265 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, I want you to challenge me\n"
# 266 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "when you become a lot stronger.\p"
# 267 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll battle you, {PLAYER}, when you\n"
# 268 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "can show me four Gym Badges, okay?$"
# 269 "data/maps/PetalburgCity_Gym/scripts.pory"

# 270 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToDewford:
# 271 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Chrizz: I see… So, you've beaten\n"
# 272 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Gym Leader in Rustboro City.\p"
# 273 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But there are many more Trainers\n"
# 274 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "who are stronger than you, {PLAYER}.\p"
# 275 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Across the sea in Dewford Town is a\n"
# 276 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Gym Leader named Oisin.\p"
# 277 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You should go challenge him.$"
# 278 "data/maps/PetalburgCity_Gym/scripts.pory"

# 279 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_YouHaveGottenStronger:
# 280 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Chrizz: Hm… {PLAYER}, you have gotten\n"
# 281 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 282 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can tell by the number of Badges\n"
# 283 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "that you've earned.$"
# 284 "data/maps/PetalburgCity_Gym/scripts.pory"

# 285 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanIntro:
# 286 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Welcome to the Petalburg City Gym\p"
# 287 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I am Chrizz, the Fighting-type Gym\n"
# 288 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Leader!\p"
# 289 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Now, let's not waste our time in\n"
# 290 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "exchanging pleasantries.\p"
# 291 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I shall send you back home!$"
# 292 "data/maps/PetalburgCity_Gym/scripts.pory"

# 293 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanDefeat:
# 294 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Well, looks like still I'm in need of\n"
# 295 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "more training.$"
# 296 "data/maps/PetalburgCity_Gym/scripts.pory"

# 297 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanAfterDefeat:
# 298 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Chrizz: You fought honorably,\n"
# 299 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}!"
# 300 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "For that I give you this.$"
# 301 "data/maps/PetalburgCity_Gym/scripts.pory"

# 302 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ReceivedBalanceBadge:
# 303 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER} received the Fist Badge\n"
# 304 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from Chrizz!$"
# 305 "data/maps/PetalburgCity_Gym/scripts.pory"

# 306 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis:
# 307 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Chrizz: With the Fist Badge, all\n"
# 308 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pokémon upto Lv 55 will obey your\l"
# 309 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "command, even the ones you get from\l"
# 310 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "trades.\p"
# 311 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It is customary for a Gym Leader to\n"
# 312 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "give a TM to the victor.\p"
# 313 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here is a TM.$"
# 314 "data/maps/PetalburgCity_Gym/scripts.pory"

# 315 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainFacade:
# 316 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Chrizz: TM122 contains Drain Punch.\p"
# 317 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It heals your Pokémon for half the\n"
# 318 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "damage done!\p"
# 319 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dealing damage and healing!\n"
# 320 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Awesome, huh?\p"
# 321 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh!\p"
# 322 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here, a souvenir from Kalos.$"
# 323 "data/maps/PetalburgCity_Gym/scripts.pory"

# 324 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainGalladite:
# 325 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Chrizz: That…\n"
# 326 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…is a Mega Stone.\p"
# 327 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "When held by Gallade, it'll allow you\n"
# 328 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "to Mega Evolve it in battle!\p"
# 329 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh……\p"
# 330 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You don't have a Key stone.\p"
# 331 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm…\n"
# 332 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I don't have a spare with me, {PLAYER}.\p"
# 333 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm really sorry about that!\p"
# 334 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You deserve the power of Mega\n"
# 335 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Evolution!\p"
# 336 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 337 "data/maps/PetalburgCity_Gym/scripts.pory"

# 338 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHappyAndSad:
# 339 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Chrizz: That was an amazing battle,\n"
# 340 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}.\l"
# 341 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We should fight again, sometimes.$"
# 342 "data/maps/PetalburgCity_Gym/scripts.pory"

# 343 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough:
# 344 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Chrizz: {PLAYER}, how are things going?\p"
# 345 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The world of Pokémon is deep.\p"
# 346 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I honestly think that no amount of\n"
# 347 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training would ever be enough.$"
# 348 "data/maps/PetalburgCity_Gym/scripts.pory"

# 349 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuideAdvice:
# 350 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hey, how's it going, Champion-\n"
# 351 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 352 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This Gym isn't something to laugh at.\p"
# 353 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Chrizz, the Gym Leader has mastered\n"
# 354 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the art of Mega Evolution!\p"
# 355 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "… … …\p"
# 356 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What is it, you ask?\p"
# 357 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's a special sort of evolution that\n"
# 358 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "happens when there is a strong bond\l"
# 359 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "between the Trainer and the Pokémon.\p"
# 360 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "In order to Mega Evolve, one must have\n"
# 361 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "have a Mega Bracelet with a Key stone\l"
# 362 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "and a Pokémon capable of Mega Evolving,\l"
# 363 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "holding its Mega Stone.\p"
# 364 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You'll be amazed by its beauty and power,\n"
# 365 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}.$"
# 366 "data/maps/PetalburgCity_Gym/scripts.pory"

# 367 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuidePostVictory:
# 368 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}! Whoa! What a fantastic battle!\p"
# 369 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "A young, talented Trainer such as yourself\n"
# 370 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "deserves the power of Mega Evolution!\p"
# 371 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What a stunning turn of events!$"
# 372 "data/maps/PetalburgCity_Gym/scripts.pory"

# 373 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallIntro:
# 374 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The ability to attack before the\n"
# 375 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "opponent…\p"
# 376 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just that alone puts me at a great\n"
# 377 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "advantage, don't you agree?$"
# 378 "data/maps/PetalburgCity_Gym/scripts.pory"

# 379 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallDefeat:
# 380 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That was a magnificent battle!$"
# 381 "data/maps/PetalburgCity_Gym/scripts.pory"

# 382 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBattle:
# 383 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whomever you beat, and whomever you\n"
# 384 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "may lose to, you never shirk from\l"
# 385 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training yourself and your Pokémon.\p"
# 386 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's what I think being a\n"
# 387 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Gym Leader is all about.$"
# 388 "data/maps/PetalburgCity_Gym/scripts.pory"

# 389 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerIntro:
# 390 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the Confusion Room.\p"
# 391 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me see how well bonded you are\n"
# 392 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with your Pokémon!$"
# 393 "data/maps/PetalburgCity_Gym/scripts.pory"

# 394 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerDefeat:
# 395 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't confuse your team enough…\n"
# 396 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You share a strong bond together.$"
# 397 "data/maps/PetalburgCity_Gym/scripts.pory"

# 398 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBattle:
# 399 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After you beat our Leader, the\n"
# 400 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training has become a lot tougher.$"
# 401 "data/maps/PetalburgCity_Gym/scripts.pory"

# 402 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeIntro:
# 403 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just when you think you're going to\n"
# 404 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "win, your opponent restores HP…\p"
# 405 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you just imagine how awful that\n"
# 406 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "must feel?\p"
# 407 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you exactly how awful it\n"
# 408 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "feels!$"
# 409 "data/maps/PetalburgCity_Gym/scripts.pory"

# 410 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeDefeat:
# 411 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't restore HP enough…\n"
# 412 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What Attack power…$"
# 413 "data/maps/PetalburgCity_Gym/scripts.pory"

# 414 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBattle:
# 415 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to keep training at Gyms.\n"
# 416 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "One day, I'll become a Leader.$"
# 417 "data/maps/PetalburgCity_Gym/scripts.pory"

# 418 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeIntro:
# 419 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm not going to take it easy just\n"
# 420 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "because you're our Leader's kid.\p"
# 421 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you how horrid it is for\n"
# 422 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a Pokémon to take a critical hit!$"
# 423 "data/maps/PetalburgCity_Gym/scripts.pory"

# 424 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeDefeat:
# 425 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your power…\n"
# 426 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're the real deal.$"
# 427 "data/maps/PetalburgCity_Gym/scripts.pory"

# 428 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBattle:
# 429 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Since Chrizz became the Leader,\n"
# 430 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Trainers of Petalburg City have\l"
# 431 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a lot tougher.$"
# 432 "data/maps/PetalburgCity_Gym/scripts.pory"

# 433 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryIntro:
# 434 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Giggle…\n"
# 435 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the Accuracy Room.\p"
# 436 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's pretty nasty when every attack\n"
# 437 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lands without fail.$"
# 438 "data/maps/PetalburgCity_Gym/scripts.pory"

# 439 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryDefeat:
# 440 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You were a cut above me…$"
# 441 "data/maps/PetalburgCity_Gym/scripts.pory"

# 442 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBattle:
# 443 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you know what we're trying to\n"
# 444 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "achieve as Trainers?\p"
# 445 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We're striving to become soul mates\n"
# 446 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with our Pokémon.$"
# 447 "data/maps/PetalburgCity_Gym/scripts.pory"

# 448 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaIntro:
# 449 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The higher the Defense, the more\n"
# 450 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "reckless I can be in attack.$"
# 451 "data/maps/PetalburgCity_Gym/scripts.pory"

# 452 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaDefeat:
# 453 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our defenses weren't enough…$"
# 454 "data/maps/PetalburgCity_Gym/scripts.pory"

# 455 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBattle:
# 456 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I think you've taught me a valuable\n"
# 457 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lesson here.\p"
# 458 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I shall train further.$"
# 459 "data/maps/PetalburgCity_Gym/scripts.pory"

# 460 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyIntro:
# 461 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our Gym Leader told us to go all out\n"
# 462 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "and beat you.\p"
# 463 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Even if you happen to be the\n"
# 464 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Leader's kid!$"
# 465 "data/maps/PetalburgCity_Gym/scripts.pory"

# 466 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyDefeat:
# 467 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But… I went all out!$"
# 468 "data/maps/PetalburgCity_Gym/scripts.pory"

# 469 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBattle:
# 470 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sure, it's fine to make your Pokémon\n"
# 471 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 472 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But what decides the winner?\p"
# 473 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Why, it's the feelings Trainers have\n"
# 474 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "for their Pokémon.$"
# 475 "data/maps/PetalburgCity_Gym/scripts.pory"

# 476 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatue:
# 477 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Petalburg City Pokémon Gym\p"
# 478 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Chrizz's certified Trainers:\n"
# 479 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally$"
# 480 "data/maps/PetalburgCity_Gym/scripts.pory"

# 481 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatueCertified:
# 482 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Petalburg City Pokémon Gym\p"
# 483 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Chrizz's certified Trainers:\n"
# 484 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally and {PLAYER}$"
# 485 "data/maps/PetalburgCity_Gym/scripts.pory"

# 486 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanPreRematch:
# 487 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Chrizz: {PLAYER}…\n"
# 488 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I had a feeling that you would come.\p"
# 489 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I would never refuse to accept\n"
# 490 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a challenge from you.\p"
# 491 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You do understand, don't you?\p"
# 492 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Inside a Gym, it doesn't matter that\n"
# 493 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we are a parent and child.\p"
# 494 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…No, because we are parent and child,\n"
# 495 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we owe it to each other to do the best\l"
# 496 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we can. Isn't that right, {PLAYER}?$"
# 497 "data/maps/PetalburgCity_Gym/scripts.pory"

# 498 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanRematchDefeat:
# 499 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Uh… Haha…\n"
# 500 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Maybe that was going too hard…$"
# 501 "data/maps/PetalburgCity_Gym/scripts.pory"

# 502 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanPostRematch:
# 503 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Chrizz: {PLAYER}…\n"
# 504 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What is your dream?\p"
# 505 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "My dream…\n"
# 506 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hahaha…\l"
# 507 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It has already come true, actually.$"
# 508 "data/maps/PetalburgCity_Gym/scripts.pory"

# 509 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanRematchNeedTwoMons:
# 510 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Chrizz: {PLAYER}…\n"
# 511 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I had a feeling that you would come.\p"
# 512 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I would never refuse to accept\n"
# 513 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a challenge from you.\p"
# 514 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You do understand, don't you?\p"
# 515 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Inside a Gym, it doesn't matter that\n"
# 516 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we are a parent and child.\p"
# 517 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm? Wait a second, {PLAYER}.\p"
# 518 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you only have one Pokémon that is\n"
# 519 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "capable of battle?\p"
# 520 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sorry, but you'll have to come back\n"
# 521 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with at least two Pokémon.$"
