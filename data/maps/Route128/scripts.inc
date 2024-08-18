# 1 "data/maps/Route128/scripts.pory"

# 2 "data/maps/Route128/scripts.pory"
.set LOCALID_ARCHIE, 3
# 3 "data/maps/Route128/scripts.pory"
.set LOCALID_MAXIE, 4
# 4 "data/maps/Route128/scripts.pory"

# 5 "data/maps/Route128/scripts.pory"
Route128_MapScripts::
# 6 "data/maps/Route128/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route128_OnTransition
# 7 "data/maps/Route128/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route128_OnFrame
# 8 "data/maps/Route128/scripts.pory"
	.byte 0
# 9 "data/maps/Route128/scripts.pory"

# 10 "data/maps/Route128/scripts.pory"
Route128_OnTransition:
# 11 "data/maps/Route128/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 12 "data/maps/Route128/scripts.pory"
	end
# 13 "data/maps/Route128/scripts.pory"

# 14 "data/maps/Route128/scripts.pory"
Route128_OnFrame:
# 15 "data/maps/Route128/scripts.pory"
	map_script_2 VAR_ROUTE128_STATE, 1, Route128_EventScript_KyogreAwakenedScene
# 16 "data/maps/Route128/scripts.pory"
	.2byte 0
# 17 "data/maps/Route128/scripts.pory"

# 18 "data/maps/Route128/scripts.pory"
Route128_EventScript_KyogreAwakenedScene::
# 19 "data/maps/Route128/scripts.pory"
	lockall
# 20 "data/maps/Route128/scripts.pory"
	delay 20
# 21 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ARCHIE, Route128_Movement_ArchieLookAround
# 22 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 23 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_ArchieWhatHappened, MSGBOX_DEFAULT
# 24 "data/maps/Route128/scripts.pory"
	closemessage
# 25 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ARCHIE, Route128_Movement_ArchieBackUp
# 26 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 27 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_ArchieIOnlyWanted, MSGBOX_DEFAULT
# 28 "data/maps/Route128/scripts.pory"
	closemessage
# 29 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_MAXIE, Route128_Movement_MaxieApproachArchie
# 30 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 31 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterUp
# 32 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 33 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_MaxieDoYouUnderstandNow, MSGBOX_DEFAULT
# 34 "data/maps/Route128/scripts.pory"
	closemessage
# 35 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_MAXIE, Route128_Movement_MaxieApproachPlayer
# 36 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 37 "data/maps/Route128/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 38 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 39 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_MaxieResposibilityFallsToArchieAndMe, MSGBOX_DEFAULT
# 40 "data/maps/Route128/scripts.pory"
	closemessage
# 41 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ARCHIE, Route128_Movement_ArchieRunLeft
# 42 "data/maps/Route128/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 43 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_MAXIE, Route128_Movement_MaxieWalkLeft
# 44 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 45 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_MaxieThisDefiesBelief, MSGBOX_DEFAULT
# 46 "data/maps/Route128/scripts.pory"
	closemessage
# 47 "data/maps/Route128/scripts.pory"
	delay 40
# 48 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_MAXIE, Route128_Movement_MaxieExit
# 49 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ARCHIE, Route128_Movement_ArchieExit
# 50 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route128/scripts.pory"
	removeobject LOCALID_MAXIE
# 52 "data/maps/Route128/scripts.pory"
	removeobject LOCALID_ARCHIE
# 53 "data/maps/Route128/scripts.pory"
	delay 10
# 54 "data/maps/Route128/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 55 "data/maps/Route128/scripts.pory"
	setvar VAR_ROUTE128_STATE, 2
# 56 "data/maps/Route128/scripts.pory"
	releaseall
# 57 "data/maps/Route128/scripts.pory"
	end
# 58 "data/maps/Route128/scripts.pory"

# 59 "data/maps/Route128/scripts.pory"
Route128_Movement_Unused1:
# 60 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 61 "data/maps/Route128/scripts.pory"
	step_end
# 62 "data/maps/Route128/scripts.pory"

# 63 "data/maps/Route128/scripts.pory"
Route128_Movement_Unused2:
# 64 "data/maps/Route128/scripts.pory"
	walk_left
# 65 "data/maps/Route128/scripts.pory"
	walk_left
# 66 "data/maps/Route128/scripts.pory"
	walk_left
# 67 "data/maps/Route128/scripts.pory"
	walk_left
# 68 "data/maps/Route128/scripts.pory"
	walk_left
# 69 "data/maps/Route128/scripts.pory"
	walk_left
# 70 "data/maps/Route128/scripts.pory"
	walk_up
# 71 "data/maps/Route128/scripts.pory"
	walk_up
# 72 "data/maps/Route128/scripts.pory"
	walk_up
# 73 "data/maps/Route128/scripts.pory"
	walk_up
# 74 "data/maps/Route128/scripts.pory"
	walk_up
# 75 "data/maps/Route128/scripts.pory"
	walk_up
# 76 "data/maps/Route128/scripts.pory"
	step_end
# 77 "data/maps/Route128/scripts.pory"

# 78 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieLookAround:
# 79 "data/maps/Route128/scripts.pory"
	walk_fast_down
# 80 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_left
# 81 "data/maps/Route128/scripts.pory"
	delay_16
# 82 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_right
# 83 "data/maps/Route128/scripts.pory"
	delay_16
# 84 "data/maps/Route128/scripts.pory"
	delay_16
# 85 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_down
# 86 "data/maps/Route128/scripts.pory"
	step_end
# 87 "data/maps/Route128/scripts.pory"

# 88 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieBackUp:
# 89 "data/maps/Route128/scripts.pory"
	lock_facing_direction
# 90 "data/maps/Route128/scripts.pory"
	walk_slow_up
# 91 "data/maps/Route128/scripts.pory"
	delay_16
# 92 "data/maps/Route128/scripts.pory"
	unlock_facing_direction
# 93 "data/maps/Route128/scripts.pory"
	step_end
# 94 "data/maps/Route128/scripts.pory"

# 95 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieRunLeft:
# 96 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 97 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 98 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 99 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_right
# 100 "data/maps/Route128/scripts.pory"
	step_end
# 101 "data/maps/Route128/scripts.pory"

# 102 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieExit:
# 103 "data/maps/Route128/scripts.pory"
	delay_16
# 104 "data/maps/Route128/scripts.pory"
	delay_16
# 105 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 106 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 107 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 108 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 109 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 110 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 111 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 112 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 113 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 114 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 115 "data/maps/Route128/scripts.pory"
	step_end
# 116 "data/maps/Route128/scripts.pory"

# 117 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieWalkLeft:
# 118 "data/maps/Route128/scripts.pory"
	walk_left
# 119 "data/maps/Route128/scripts.pory"
	walk_left
# 120 "data/maps/Route128/scripts.pory"
	delay_8
# 121 "data/maps/Route128/scripts.pory"
	delay_4
# 122 "data/maps/Route128/scripts.pory"
	step_end
# 123 "data/maps/Route128/scripts.pory"

# 124 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieApproachArchie:
# 125 "data/maps/Route128/scripts.pory"
	walk_left
# 126 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_down
# 127 "data/maps/Route128/scripts.pory"
	step_end
# 128 "data/maps/Route128/scripts.pory"

# 129 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieExit:
# 130 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 131 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 132 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 133 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 134 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 135 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 136 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 137 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 138 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 139 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 140 "data/maps/Route128/scripts.pory"
	step_end
# 141 "data/maps/Route128/scripts.pory"

# 142 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieApproachPlayer:
# 143 "data/maps/Route128/scripts.pory"
	walk_right
# 144 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_down
# 145 "data/maps/Route128/scripts.pory"
	step_end
# 146 "data/maps/Route128/scripts.pory"

# 147 "data/maps/Route128/scripts.pory"
Route128_EventScript_Isaiah::
# 148 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_ISAIAH_1, Route128_Text_IsaiahIntro, Route128_Text_IsaiahDefeat, Route128_EventScript_RegisterIsaiah
# 149 "data/maps/Route128/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 150 "data/maps/Route128/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route128_EventScript_RematchIsaiah
# 151 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_IsaiahPostBattle, MSGBOX_DEFAULT
# 152 "data/maps/Route128/scripts.pory"
	release
# 153 "data/maps/Route128/scripts.pory"
	end
# 154 "data/maps/Route128/scripts.pory"

# 155 "data/maps/Route128/scripts.pory"
Route128_EventScript_RegisterIsaiah::
# 156 "data/maps/Route128/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 157 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 158 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_IsaiahRegister, MSGBOX_DEFAULT
# 159 "data/maps/Route128/scripts.pory"
	register_matchcall TRAINER_ISAIAH_1
# 160 "data/maps/Route128/scripts.pory"
	release
# 161 "data/maps/Route128/scripts.pory"
	end
# 162 "data/maps/Route128/scripts.pory"

# 163 "data/maps/Route128/scripts.pory"
Route128_EventScript_RematchIsaiah::
# 164 "data/maps/Route128/scripts.pory"
	trainerbattle_rematch TRAINER_ISAIAH_1, Route128_Text_IsaiahRematchIntro, Route128_Text_IsaiahRematchDefeat
# 165 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_IsaiahPostRematch, MSGBOX_AUTOCLOSE
# 166 "data/maps/Route128/scripts.pory"
	end
# 167 "data/maps/Route128/scripts.pory"

# 168 "data/maps/Route128/scripts.pory"
Route128_EventScript_Katelyn::
# 169 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_KATELYN_1, Route128_Text_KatelynIntro, Route128_Text_KatelynDefeat, Route128_EventScript_RegisterKatelyn
# 170 "data/maps/Route128/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 171 "data/maps/Route128/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route128_EventScript_RematchKatelyn
# 172 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_KatelynPostBattle, MSGBOX_DEFAULT
# 173 "data/maps/Route128/scripts.pory"
	release
# 174 "data/maps/Route128/scripts.pory"
	end
# 175 "data/maps/Route128/scripts.pory"

# 176 "data/maps/Route128/scripts.pory"
Route128_EventScript_RegisterKatelyn::
# 177 "data/maps/Route128/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 178 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 179 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_KatelynRegister, MSGBOX_DEFAULT
# 180 "data/maps/Route128/scripts.pory"
	register_matchcall TRAINER_KATELYN_1
# 181 "data/maps/Route128/scripts.pory"
	release
# 182 "data/maps/Route128/scripts.pory"
	end
# 183 "data/maps/Route128/scripts.pory"

# 184 "data/maps/Route128/scripts.pory"
Route128_EventScript_RematchKatelyn::
# 185 "data/maps/Route128/scripts.pory"
	trainerbattle_rematch TRAINER_KATELYN_1, Route128_Text_KatelynRematchIntro, Route128_Text_KatelynRematchDefeat
# 186 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_KatelynPostRematch, MSGBOX_AUTOCLOSE
# 187 "data/maps/Route128/scripts.pory"
	end
# 188 "data/maps/Route128/scripts.pory"

# 189 "data/maps/Route128/scripts.pory"
Route128_EventScript_Alexa::
# 190 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_ALEXA, Route128_Text_AlexaIntro, Route128_Text_AlexaDefeat
# 191 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_AlexaPostBattle, MSGBOX_AUTOCLOSE
# 192 "data/maps/Route128/scripts.pory"
	end
# 193 "data/maps/Route128/scripts.pory"

# 194 "data/maps/Route128/scripts.pory"
Route128_EventScript_Ruben::
# 195 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_RUBEN, Route128_Text_RubenIntro, Route128_Text_RubenDefeat
# 196 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_RubenPostBattle, MSGBOX_AUTOCLOSE
# 197 "data/maps/Route128/scripts.pory"
	end
# 198 "data/maps/Route128/scripts.pory"

# 199 "data/maps/Route128/scripts.pory"
Route128_EventScript_Wayne::
# 200 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_WAYNE, Route128_Text_WayneIntro, Route128_Text_WayneDefeat
# 201 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_WaynePostBattle, MSGBOX_AUTOCLOSE
# 202 "data/maps/Route128/scripts.pory"
	end
# 203 "data/maps/Route128/scripts.pory"

# 204 "data/maps/Route128/scripts.pory"
Route128_EventScript_Harrison::
# 205 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_HARRISON, Route128_Text_HarrisonIntro, Route128_Text_HarrisonDefeat
# 206 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_HarrisonPostBattle, MSGBOX_AUTOCLOSE
# 207 "data/maps/Route128/scripts.pory"
	end
# 208 "data/maps/Route128/scripts.pory"

# 209 "data/maps/Route128/scripts.pory"
Route128_EventScript_Carlee::
# 210 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_CARLEE, Route128_Text_CarleeIntro, Route128_Text_CarleeDefeat
# 211 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_CarleePostBattle, MSGBOX_AUTOCLOSE
# 212 "data/maps/Route128/scripts.pory"
	end
# 213 "data/maps/Route128/scripts.pory"

# 214 "data/maps/Route128/scripts.pory"
Route128_Text_ArchieWhatHappened:
# 215 "data/maps/Route128/scripts.pory"
	.string "Archie: What happened…\n"
# 216 "data/maps/Route128/scripts.pory"
	.string "What is this wretched scene…\p"
# 217 "data/maps/Route128/scripts.pory"
	.string "Did I…make a horrible mistake?$"
# 218 "data/maps/Route128/scripts.pory"

# 219 "data/maps/Route128/scripts.pory"
Route128_Text_ArchieIOnlyWanted:
# 220 "data/maps/Route128/scripts.pory"
	.string "I…\n"
# 221 "data/maps/Route128/scripts.pory"
	.string "I only wanted…$"
# 222 "data/maps/Route128/scripts.pory"

# 223 "data/maps/Route128/scripts.pory"
Route128_Text_MaxieDoYouUnderstandNow:
# 224 "data/maps/Route128/scripts.pory"
	.string "Maxie: Do you understand now,\n"
# 225 "data/maps/Route128/scripts.pory"
	.string "Archie?\p"
# 226 "data/maps/Route128/scripts.pory"
	.string "Do you finally see how disastrous\n"
# 227 "data/maps/Route128/scripts.pory"
	.string "your dream turned out to be?\p"
# 228 "data/maps/Route128/scripts.pory"
	.string "We have to hurry! We have to do\n"
# 229 "data/maps/Route128/scripts.pory"
	.string "something before the situation goes\l"
# 230 "data/maps/Route128/scripts.pory"
	.string "completely out of control!$"
# 231 "data/maps/Route128/scripts.pory"

# 232 "data/maps/Route128/scripts.pory"
Route128_Text_MaxieResposibilityFallsToArchieAndMe:
# 233 "data/maps/Route128/scripts.pory"
	.string "Maxie: {PLAYER}, don't say anything.\p"
# 234 "data/maps/Route128/scripts.pory"
	.string "I know that I have no right to be\n"
# 235 "data/maps/Route128/scripts.pory"
	.string "critical of Archie…\p"
# 236 "data/maps/Route128/scripts.pory"
	.string "But the way things are now, I doubt\n"
# 237 "data/maps/Route128/scripts.pory"
	.string "that we humans will be capable of\l"
# 238 "data/maps/Route128/scripts.pory"
	.string "doing anything about it.\p"
# 239 "data/maps/Route128/scripts.pory"
	.string "But neither can we stand by and\n"
# 240 "data/maps/Route128/scripts.pory"
	.string "just watch helplessly.\p"
# 241 "data/maps/Route128/scripts.pory"
	.string "The responsibility for putting an end\n"
# 242 "data/maps/Route128/scripts.pory"
	.string "to this falls to Archie and me…\p"
# 243 "data/maps/Route128/scripts.pory"
	.string "{PLAYER}, we'll leave to Sootopolis,\n"
# 244 "data/maps/Route128/scripts.pory"
	.string "in hopes of finding answers to this!$"
# 245 "data/maps/Route128/scripts.pory"

# 246 "data/maps/Route128/scripts.pory"
Route128_Text_MaxieThisDefiesBelief:
# 247 "data/maps/Route128/scripts.pory"
	.string "Maxie: This defies belief…\p"
# 248 "data/maps/Route128/scripts.pory"
	.string "Those super-ancient Pokémon…\p"
# 249 "data/maps/Route128/scripts.pory"
	.string "Their power is unbelievable.\n"
# 250 "data/maps/Route128/scripts.pory"
	.string "They've upset the balance of nature…$"
