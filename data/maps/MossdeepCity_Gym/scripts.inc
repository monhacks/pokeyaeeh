# 1 "data/maps/MossdeepCity_Gym/scripts.pory"

# 2 "data/maps/MossdeepCity_Gym/scripts.pory"
.set LOCALID_NINJABOY_1, 2
# 3 "data/maps/MossdeepCity_Gym/scripts.pory"
.set LOCALID_NINJABOY_2, 3
# 4 "data/maps/MossdeepCity_Gym/scripts.pory"
.set LOCALID_COOLTRAINER_M, 5
# 5 "data/maps/MossdeepCity_Gym/scripts.pory"
.set LOCALID_HEXMANIAC, 6
# 6 "data/maps/MossdeepCity_Gym/scripts.pory"
.set LOCALID_NINJABOY_3, 7
# 7 "data/maps/MossdeepCity_Gym/scripts.pory"
.set LOCALID_NINJABOY_4, 8
# 8 "data/maps/MossdeepCity_Gym/scripts.pory"
.set LOCALID_COOLTRAINER_F, 9
# 9 "data/maps/MossdeepCity_Gym/scripts.pory"
.set LOCALID_CAMPER, 10
# 10 "data/maps/MossdeepCity_Gym/scripts.pory"

# 11 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_MapScripts::
# 12 "data/maps/MossdeepCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_Gym_OnTransition
# 13 "data/maps/MossdeepCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MossdeepCity_Gym_OnResume
# 14 "data/maps/MossdeepCity_Gym/scripts.pory"
	.byte 0
# 15 "data/maps/MossdeepCity_Gym/scripts.pory"

# 16 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_OnTransition:
# 17 "data/maps/MossdeepCity_Gym/scripts.pory"
	checktrainerflag TRAINER_PRESTON
# 18 "data/maps/MossdeepCity_Gym/scripts.pory"
	call_if TRUE, MossdeepCity_Gym_PrestonMove
# 19 "data/maps/MossdeepCity_Gym/scripts.pory"
	checktrainerflag TRAINER_VIRGIL
# 20 "data/maps/MossdeepCity_Gym/scripts.pory"
	call_if TRUE, MossdeepCity_Gym_VirgilMove
# 21 "data/maps/MossdeepCity_Gym/scripts.pory"
	checktrainerflag TRAINER_NATE
# 22 "data/maps/MossdeepCity_Gym/scripts.pory"
	call_if TRUE, MossdeepCity_Gym_NateMove
# 23 "data/maps/MossdeepCity_Gym/scripts.pory"
	checktrainerflag TRAINER_SYLVIA
# 24 "data/maps/MossdeepCity_Gym/scripts.pory"
	call_if TRUE, MossdeepCity_Gym_SylviaMove
# 25 "data/maps/MossdeepCity_Gym/scripts.pory"
	checktrainerflag TRAINER_CLIFFORD
# 26 "data/maps/MossdeepCity_Gym/scripts.pory"
	call_if TRUE, MossdeepCity_Gym_CliffordMove
# 27 "data/maps/MossdeepCity_Gym/scripts.pory"
	checktrainerflag TRAINER_MACEY
# 28 "data/maps/MossdeepCity_Gym/scripts.pory"
	call_if TRUE, MossdeepCity_Gym_MaceyMove
# 29 "data/maps/MossdeepCity_Gym/scripts.pory"
	checktrainerflag TRAINER_KATHLEEN
# 30 "data/maps/MossdeepCity_Gym/scripts.pory"
	call_if TRUE, MossdeepCity_Gym_KathleenMove
# 31 "data/maps/MossdeepCity_Gym/scripts.pory"
	checktrainerflag TRAINER_NICHOLAS
# 32 "data/maps/MossdeepCity_Gym/scripts.pory"
	call_if TRUE, MossdeepCity_Gym_NicholasMove
# 33 "data/maps/MossdeepCity_Gym/scripts.pory"
	return
# 34 "data/maps/MossdeepCity_Gym/scripts.pory"

# 35 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_OnResume:
# 36 "data/maps/MossdeepCity_Gym/scripts.pory"
	call MossdeepCity_Gym_OnTransition
# 37 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 38 "data/maps/MossdeepCity_Gym/scripts.pory"

# 39 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_PrestonMove::
# 40 "data/maps/MossdeepCity_Gym/scripts.pory"
	setobjectmovementtype LOCALID_NINJABOY_1, MOVEMENT_TYPE_FACE_DOWN
# 41 "data/maps/MossdeepCity_Gym/scripts.pory"
	return
# 42 "data/maps/MossdeepCity_Gym/scripts.pory"

# 43 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_VirgilMove::
# 44 "data/maps/MossdeepCity_Gym/scripts.pory"
	setobjectmovementtype LOCALID_NINJABOY_2, MOVEMENT_TYPE_FACE_DOWN
# 45 "data/maps/MossdeepCity_Gym/scripts.pory"
	return
# 46 "data/maps/MossdeepCity_Gym/scripts.pory"

# 47 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_NateMove::
# 48 "data/maps/MossdeepCity_Gym/scripts.pory"
	setobjectmovementtype LOCALID_COOLTRAINER_M, MOVEMENT_TYPE_FACE_DOWN
# 49 "data/maps/MossdeepCity_Gym/scripts.pory"
	return
# 50 "data/maps/MossdeepCity_Gym/scripts.pory"

# 51 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_SylviaMove::
# 52 "data/maps/MossdeepCity_Gym/scripts.pory"
	setobjectmovementtype LOCALID_HEXMANIAC, MOVEMENT_TYPE_FACE_DOWN
# 53 "data/maps/MossdeepCity_Gym/scripts.pory"
	return
# 54 "data/maps/MossdeepCity_Gym/scripts.pory"

# 55 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_CliffordMove::
# 56 "data/maps/MossdeepCity_Gym/scripts.pory"
	setobjectmovementtype LOCALID_NINJABOY_3, MOVEMENT_TYPE_FACE_DOWN
# 57 "data/maps/MossdeepCity_Gym/scripts.pory"
	return
# 58 "data/maps/MossdeepCity_Gym/scripts.pory"

# 59 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_MaceyMove::
# 60 "data/maps/MossdeepCity_Gym/scripts.pory"
	setobjectmovementtype LOCALID_NINJABOY_4, MOVEMENT_TYPE_FACE_DOWN
# 61 "data/maps/MossdeepCity_Gym/scripts.pory"
	return
# 62 "data/maps/MossdeepCity_Gym/scripts.pory"

# 63 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_KathleenMove::
# 64 "data/maps/MossdeepCity_Gym/scripts.pory"
	setobjectmovementtype LOCALID_COOLTRAINER_F, MOVEMENT_TYPE_FACE_DOWN
# 65 "data/maps/MossdeepCity_Gym/scripts.pory"
	return
# 66 "data/maps/MossdeepCity_Gym/scripts.pory"

# 67 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_NicholasMove::
# 68 "data/maps/MossdeepCity_Gym/scripts.pory"
	setobjectmovementtype LOCALID_CAMPER, MOVEMENT_TYPE_FACE_DOWN
# 69 "data/maps/MossdeepCity_Gym/scripts.pory"
	return
# 70 "data/maps/MossdeepCity_Gym/scripts.pory"

# 71 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind2::
# 72 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_VENOSHOCK
# 73 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 74 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 75 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_VENOSHOCK
# 76 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 77 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 78 "data/maps/MossdeepCity_Gym/scripts.pory"

# 79 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind::
# 80 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_VENOSHOCK
# 81 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 82 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 83 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_VENOSHOCK
# 84 "data/maps/MossdeepCity_Gym/scripts.pory"
	return
# 85 "data/maps/MossdeepCity_Gym/scripts.pory"

# 86 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaRematch::
# 87 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_rematch TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaPreRematch, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
# 88 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostRematch, MSGBOX_AUTOCLOSE
# 89 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 90 "data/maps/MossdeepCity_Gym/scripts.pory"

# 91 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Preston::
# 92 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PRESTON, MossdeepCity_Gym_Text_PrestonIntro, MossdeepCity_Gym_Text_PrestonDefeat
# 93 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
# 94 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 95 "data/maps/MossdeepCity_Gym/scripts.pory"

# 96 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Virgil::
# 97 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIRGIL, MossdeepCity_Gym_Text_VirgilIntro, MossdeepCity_Gym_Text_VirgilDefeat
# 98 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_VirgilPostBattle, MSGBOX_AUTOCLOSE
# 99 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 100 "data/maps/MossdeepCity_Gym/scripts.pory"

# 101 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Sylvia::
# 102 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SYLVIA, MossdeepCity_Gym_Text_SylviaIntro, MossdeepCity_Gym_Text_SylviaDefeat
# 103 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SylviaPostBattle, MSGBOX_AUTOCLOSE
# 104 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 105 "data/maps/MossdeepCity_Gym/scripts.pory"

# 106 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Nate::
# 107 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NATE, MossdeepCity_Gym_Text_NateIntro, MossdeepCity_Gym_Text_NateDefeat
# 108 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
# 109 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 110 "data/maps/MossdeepCity_Gym/scripts.pory"

# 111 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Macey::
# 112 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MACEY, MossdeepCity_Gym_Text_MaceyIntro, MossdeepCity_Gym_Text_MaceyDefeat
# 113 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MaceyPostBattle, MSGBOX_AUTOCLOSE
# 114 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 115 "data/maps/MossdeepCity_Gym/scripts.pory"

# 116 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Clifford::
# 117 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CLIFFORD, MossdeepCity_Gym_Text_CliffordIntro, MossdeepCity_Gym_Text_CliffordDefeat
# 118 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_CliffordPostBattle, MSGBOX_AUTOCLOSE
# 119 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 120 "data/maps/MossdeepCity_Gym/scripts.pory"

# 121 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Nicholas::
# 122 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NICHOLAS, MossdeepCity_Gym_Text_NicholasIntro, MossdeepCity_Gym_Text_NicholasDefeat
# 123 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NicholasPostBattle, MSGBOX_AUTOCLOSE
# 124 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 125 "data/maps/MossdeepCity_Gym/scripts.pory"

# 126 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Kathleen::
# 127 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KATHLEEN, MossdeepCity_Gym_Text_KathleenIntro, MossdeepCity_Gym_Text_KathleenDefeat
# 128 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_KathleenPostBattle, MSGBOX_AUTOCLOSE
# 129 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 130 "data/maps/MossdeepCity_Gym/scripts.pory"

# 131 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuide::
# 132 "data/maps/MossdeepCity_Gym/scripts.pory"
	lock
# 133 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 134 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, MossdeepCity_Gym_EventScript_GymGuidePostVictory
# 135 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 136 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 137 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 138 "data/maps/MossdeepCity_Gym/scripts.pory"

# 139 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuidePostVictory::
# 140 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 141 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 142 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 143 "data/maps/MossdeepCity_Gym/scripts.pory"

# 144 "data/maps/MossdeepCity_Gym/scripts.pory"
@ Leftover from RS, functionally unused
# 145 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Movement_WaitAfterSwitchUse:
# 146 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
# 147 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
# 148 "data/maps/MossdeepCity_Gym/scripts.pory"
	step_end
# 149 "data/maps/MossdeepCity_Gym/scripts.pory"

# 150 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_LeftGymStatue::
# 151 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 152 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
# 153 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
# 154 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 155 "data/maps/MossdeepCity_Gym/scripts.pory"

# 156 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_RightGymStatue::
# 157 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 158 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
# 159 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
# 160 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 161 "data/maps/MossdeepCity_Gym/scripts.pory"

# 162 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymStatueCertified::
# 163 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 164 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 165 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 166 "data/maps/MossdeepCity_Gym/scripts.pory"

# 167 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymStatue::
# 168 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 169 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 170 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 171 "data/maps/MossdeepCity_Gym/scripts.pory"

# 172 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymGuideAdvice:
# 173 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Yo, how's it going, Champion-bound\n"
# 174 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER}?\p"
# 175 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Light, the Gym Leader, here uses\n"
# 176 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Poison-type Pokémon.\p"
# 177 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you go up against them with\n"
# 178 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Grass or Fairy-type Pokémon,\l"
# 179 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "they'll inflict horrible damage!\p"
# 180 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Plus, they'll come at you with\n"
# 181 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "outstanding combination attacks.\p"
# 182 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you want to win, you'll need to show\n"
# 183 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "them how tight you are with your\l"
# 184 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Pokémon. Go for it!\p"
# 185 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Also, if you're wondering,\n"
# 186 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "there's 8 Trainers here.\p"
# 187 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "They are invisible to the naked eye.\p"
# 188 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You cannot see them. But,\n"
# 189 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "if you get close to them,\l"
# 190 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "they'll sense you.$"
# 191 "data/maps/MossdeepCity_Gym/scripts.pory"

# 192 "data/maps/MossdeepCity_Gym/scripts.pory"

# 193 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymGuidePostVictory:
# 194 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wow, you're astounding!\n"
# 195 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're one great Trainer!$"
# 196 "data/maps/MossdeepCity_Gym/scripts.pory"

# 197 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonIntro:
# 198 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Battles hinge on the strength of your\n"
# 199 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "spirit! The weak-spirited will never win!$"
# 200 "data/maps/MossdeepCity_Gym/scripts.pory"

# 201 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonDefeat:
# 202 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I lost!\n"
# 203 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I must temper my spirit again!$"
# 204 "data/maps/MossdeepCity_Gym/scripts.pory"

# 205 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonPostBattle:
# 206 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The indecisive lose.\n"
# 207 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "That's my warning to you.$"
# 208 "data/maps/MossdeepCity_Gym/scripts.pory"

# 209 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilIntro:
# 210 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Let me see your talent!$"
# 211 "data/maps/MossdeepCity_Gym/scripts.pory"

# 212 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilDefeat:
# 213 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You possess spectacular talent!$"
# 214 "data/maps/MossdeepCity_Gym/scripts.pory"

# 215 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilPostBattle:
# 216 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Your talent is superb!$"
# 217 "data/maps/MossdeepCity_Gym/scripts.pory"

# 218 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaIntro:
# 219 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Even at the risk of life, I will win\n"
# 220 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "this battle!$"
# 221 "data/maps/MossdeepCity_Gym/scripts.pory"

# 222 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaDefeat:
# 223 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What you do…\n"
# 224 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It horrifies me…$"
# 225 "data/maps/MossdeepCity_Gym/scripts.pory"

# 226 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaPostBattle:
# 227 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "How dare you beat me…\p"
# 228 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It won't be my fault if something\n"
# 229 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "horrible befalls you…$"
# 230 "data/maps/MossdeepCity_Gym/scripts.pory"

# 231 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NateIntro:
# 232 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Hohoho.\p"
# 233 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You need me to show you how tenacious\n"
# 234 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "the Poison-type can be.$"
# 235 "data/maps/MossdeepCity_Gym/scripts.pory"

# 236 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NateDefeat:
# 237 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Oh! My, my!\n"
# 238 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Your battle style is fantastic!$"
# 239 "data/maps/MossdeepCity_Gym/scripts.pory"

# 240 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NatePostBattle:
# 241 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I… I don't let defeat rattle m-me,\n"
# 242 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "however b-badly.$"
# 243 "data/maps/MossdeepCity_Gym/scripts.pory"

# 244 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenIntro:
# 245 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Let me show you a perfectly awful,\n"
# 246 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "horrifying time!$"
# 247 "data/maps/MossdeepCity_Gym/scripts.pory"

# 248 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenDefeat:
# 249 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "N-nooooo!$"
# 250 "data/maps/MossdeepCity_Gym/scripts.pory"

# 251 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenPostBattle:
# 252 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Your vitality is contagious!\n"
# 253 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Get away from me quickly!$"
# 254 "data/maps/MossdeepCity_Gym/scripts.pory"

# 255 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordIntro:
# 256 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I may be a little boy, but I suggest\n"
# 257 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "you not patronize me.$"
# 258 "data/maps/MossdeepCity_Gym/scripts.pory"

# 259 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordDefeat:
# 260 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ah, you overflow with the power\n"
# 261 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "of knowledge!$"
# 262 "data/maps/MossdeepCity_Gym/scripts.pory"

# 263 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordPostBattle:
# 264 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It seems that I could not overcome\n"
# 265 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "your smartness.$"
# 266 "data/maps/MossdeepCity_Gym/scripts.pory"

# 267 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyIntro:
# 268 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're not getting through to the end!\n"
# 269 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Not if I can help it!$"
# 270 "data/maps/MossdeepCity_Gym/scripts.pory"

# 271 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyDefeat:
# 272 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "How could you be so ludicrously\n"
# 273 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "strong?$"
# 274 "data/maps/MossdeepCity_Gym/scripts.pory"

# 275 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyPostBattle:
# 276 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Humph! You may be strong, but you're\n"
# 277 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "not suitable for the Poison-type!\p"
# 278 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The way you battle is somehow shabby!$"
# 279 "data/maps/MossdeepCity_Gym/scripts.pory"

# 280 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasIntro:
# 281 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wroooar! Have a taste of my super\n"
# 282 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Pokémon hard-battling power!$"
# 283 "data/maps/MossdeepCity_Gym/scripts.pory"

# 284 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasDefeat:
# 285 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Oh!\n"
# 286 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Done in!$"
# 287 "data/maps/MossdeepCity_Gym/scripts.pory"

# 288 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasPostBattle:
# 289 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "All right! I think I'll develop a special\n"
# 290 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "invincible Pokémon power next.$"
# 291 "data/maps/MossdeepCity_Gym/scripts.pory"

# 292 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaIntro:
# 293 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Light: Fufufu… So you did beat\n"
# 294 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "everyone, here!\p"
# 295 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I command power way beyond your\n"
# 296 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "comprehension.\p"
# 297 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Prepare to get eroded by my toxins!$"
# 298 "data/maps/MossdeepCity_Gym/scripts.pory"

# 299 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaDefeat:
# 300 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Light: It seems my toxins aren't potent\n"
# 301 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "enough…$"
# 302 "data/maps/MossdeepCity_Gym/scripts.pory"

# 303 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ReceivedMindBadge:
# 304 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER} received the Toxic Badge\n"
# 305 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "from Light.$"
# 306 "data/maps/MossdeepCity_Gym/scripts.pory"

# 307 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis:
# 308 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Light: With the Toxic Badge,\n"
# 309 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "all Pokémon upto Lv 70 will obey you\l"
# 310 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "without question.\p"
# 311 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You can also use Dive outside of battle.\p"
# 312 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Take this with you, too!$"
# 313 "data/maps/MossdeepCity_Gym/scripts.pory"

# 314 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ExplainCalmMind:
# 315 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Light: TM107 contains Venoshock!\p"
# 316 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "A strong special Poison-type attack\n"
# 317 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "that deals double damage if the foe is\l"
# 318 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "poisoned.\p"
# 319 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 320 "data/maps/MossdeepCity_Gym/scripts.pory"

# 321 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_RegisteredTateAndLiza:
# 322 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Registered Gym Leader Light\n"
# 323 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "in the PokéNav.$"
# 324 "data/maps/MossdeepCity_Gym/scripts.pory"

# 325 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPostBattle:
# 326 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Light: Looks like the bond between you\n"
# 327 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "and your Pokémon were able to overcome\l"
# 328 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "my toxic strategy.\p"
# 329 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You played fair! Good luck!$"
# 330 "data/maps/MossdeepCity_Gym/scripts.pory"

# 331 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymStatue:
# 332 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Mossdeep City Pokémon Gym\p"
# 333 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Light certified Trainers:\n"
# 334 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wally$"
# 335 "data/maps/MossdeepCity_Gym/scripts.pory"

# 336 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymStatueCertified:
# 337 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Mossdeep City Pokémon Gym\p"
# 338 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Light certified Trainers:\n"
# 339 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wally and {PLAYER}$"
# 340 "data/maps/MossdeepCity_Gym/scripts.pory"

# 341 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPreRematch:
# 342 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Light: TBD$"
# 343 "data/maps/MossdeepCity_Gym/scripts.pory"

# 344 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaRematchDefeat:
# 345 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Light: TBD 2$"
# 346 "data/maps/MossdeepCity_Gym/scripts.pory"

# 347 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPostRematch:
# 348 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Light: TBD 3$"
# 349 "data/maps/MossdeepCity_Gym/scripts.pory"

# 350 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons:
# 351 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Light: no$"

MossdeepCity_Gym_EventScript_TateAndLizaDefeated::
# 354 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_EventScript_TateAndLizaDefeated_Text_0, MSGBOX_DEFAULT
# 356 "data/maps/MossdeepCity_Gym/scripts.pory"
	message MossdeepCity_Gym_Text_ReceivedMindBadge
# 357 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmessage
# 358 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 359 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis, MSGBOX_DEFAULT
# 360 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
# 361 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_BADGE07_GET
# 362 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_GRUNTS
# 363 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_TOXIC_POISON_TEAM
# 364 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY
# 365 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 366 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_GENGARITE, 1
# 367 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_EventScript_TateAndLizaDefeated_Text_1, MSGBOX_DEFAULT
# 371 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 372 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS
# 373 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 374 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
# 375 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
# 376 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 1
# 377 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 1
# 378 "data/maps/MossdeepCity_Gym/scripts.pory"
	call MossdeepCity_Gym_EventScript_GiveCalmMind
# 379 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 380 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 381 "data/maps/MossdeepCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 382 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_RegisteredTateAndLiza, MSGBOX_DEFAULT
# 383 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitfanfare
# 384 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 385 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 386 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL
# 387 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
	end


MossdeepCity_Gym_EventScript_TateAndLiza::
# 392 "data/maps/MossdeepCity_Gym/scripts.pory"
	lock
# 393 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 394 "data/maps/MossdeepCity_Gym/scripts.pory"
	checktrainerflag TRAINER_PRESTON
	goto_if 1, MossdeepCity_Gym_EventScript_TateAndLiza_5
MossdeepCity_Gym_EventScript_TateAndLiza_3:
# 414 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_Text_0, MSGBOX_NPC
MossdeepCity_Gym_EventScript_TateAndLiza_1:
# 416 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
	end

MossdeepCity_Gym_EventScript_TateAndLiza_2:
# 402 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag B_FLAG_NO_BAG_USE
# 403 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_TOXIC_POISON_TEAM
# 404 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaIntro, MossdeepCity_Gym_Text_TateAndLizaDefeat, MossdeepCity_Gym_EventScript_TateAndLizaDefeated, NO_MUSIC
# 405 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag B_FLAG_NO_BAG_USE
# 406 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_VENOSHOCK, MossdeepCity_Gym_EventScript_TateAndLiza_20
MossdeepCity_Gym_EventScript_TateAndLiza_19:
# 410 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostBattle, MSGBOX_DEFAULT
	goto MossdeepCity_Gym_EventScript_TateAndLiza_1

MossdeepCity_Gym_EventScript_TateAndLiza_4:
# 396 "data/maps/MossdeepCity_Gym/scripts.pory"
	checktrainerflag TRAINER_SYLVIA
	goto_if 1, MossdeepCity_Gym_EventScript_TateAndLiza_9
	goto MossdeepCity_Gym_EventScript_TateAndLiza_3

MossdeepCity_Gym_EventScript_TateAndLiza_5:
# 395 "data/maps/MossdeepCity_Gym/scripts.pory"
	checktrainerflag TRAINER_VIRGIL
	goto_if 1, MossdeepCity_Gym_EventScript_TateAndLiza_4
	goto MossdeepCity_Gym_EventScript_TateAndLiza_3

MossdeepCity_Gym_EventScript_TateAndLiza_8:
# 398 "data/maps/MossdeepCity_Gym/scripts.pory"
	checktrainerflag TRAINER_MACEY
	goto_if 1, MossdeepCity_Gym_EventScript_TateAndLiza_13
	goto MossdeepCity_Gym_EventScript_TateAndLiza_3

MossdeepCity_Gym_EventScript_TateAndLiza_9:
# 397 "data/maps/MossdeepCity_Gym/scripts.pory"
	checktrainerflag TRAINER_NATE
	goto_if 1, MossdeepCity_Gym_EventScript_TateAndLiza_8
	goto MossdeepCity_Gym_EventScript_TateAndLiza_3

MossdeepCity_Gym_EventScript_TateAndLiza_12:
# 400 "data/maps/MossdeepCity_Gym/scripts.pory"
	checktrainerflag TRAINER_NICHOLAS
	goto_if 1, MossdeepCity_Gym_EventScript_TateAndLiza_16
	goto MossdeepCity_Gym_EventScript_TateAndLiza_3

MossdeepCity_Gym_EventScript_TateAndLiza_13:
# 399 "data/maps/MossdeepCity_Gym/scripts.pory"
	checktrainerflag TRAINER_CLIFFORD
	goto_if 1, MossdeepCity_Gym_EventScript_TateAndLiza_12
	goto MossdeepCity_Gym_EventScript_TateAndLiza_3

MossdeepCity_Gym_EventScript_TateAndLiza_16:
# 401 "data/maps/MossdeepCity_Gym/scripts.pory"
	checktrainerflag TRAINER_KATHLEEN
	goto_if 1, MossdeepCity_Gym_EventScript_TateAndLiza_2
	goto MossdeepCity_Gym_EventScript_TateAndLiza_3

MossdeepCity_Gym_EventScript_TateAndLiza_20:
# 408 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GiveCalmMind2
	goto MossdeepCity_Gym_EventScript_TateAndLiza_19


MossdeepCity_Gym_EventScript_TateAndLizaDefeated_Text_0:
# 354 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Congratulations.\n"
	.string "You win the toxic badge$"

MossdeepCity_Gym_EventScript_TateAndLizaDefeated_Text_1:
# 367 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Light: When held by a Gengar,\n"
	.string "the Gengarite enables it to Mega Evolve\l"
	.string "and become an inescapable threat!\p"
	.string "And this as well.$"

MossdeepCity_Gym_EventScript_TateAndLiza_Text_0:
# 414 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Invisibility.\nI suggest you watch your steps,\nand be prepared to face any challenge!\pChallenge me after you beat all 8 of my\nTrainers.$"
