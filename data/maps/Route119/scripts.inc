# 1 "data/maps/Route119/scripts.pory"

# 2 "data/maps/Route119/scripts.pory"
.set LOCALID_RIVAL, 16
# 3 "data/maps/Route119/scripts.pory"
.set LOCALID_RIVAL_ON_BIKE, 25
# 4 "data/maps/Route119/scripts.pory"
.set LOCALID_SCOTT, 43
# 5 "data/maps/Route119/scripts.pory"

# 6 "data/maps/Route119/scripts.pory"
Route119_MapScripts::
# 7 "data/maps/Route119/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route119_OnResume
# 8 "data/maps/Route119/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_OnTransition
# 9 "data/maps/Route119/scripts.pory"
	.byte 0
# 10 "data/maps/Route119/scripts.pory"

# 11 "data/maps/Route119/scripts.pory"
Route119_OnResume:
# 12 "data/maps/Route119/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route119_EventScript_TryRemoveKecleon
# 13 "data/maps/Route119/scripts.pory"
	end
# 14 "data/maps/Route119/scripts.pory"

# 15 "data/maps/Route119/scripts.pory"
Route119_EventScript_TryRemoveKecleon::
# 16 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 17 "data/maps/Route119/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 18 "data/maps/Route119/scripts.pory"
	removeobject VAR_LAST_TALKED
# 19 "data/maps/Route119/scripts.pory"
	return
# 20 "data/maps/Route119/scripts.pory"

# 21 "data/maps/Route119/scripts.pory"
Route119_OnTransition:
# 22 "data/maps/Route119/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 23 "data/maps/Route119/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 24 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 1, Route119_EventScript_MoveInstituteWorkersDownstairs
# 25 "data/maps/Route119/scripts.pory"
	special SetRoute119Weather
# 26 "data/maps/Route119/scripts.pory"
	end
# 27 "data/maps/Route119/scripts.pory"

# 28 "data/maps/Route119/scripts.pory"
Route119_EventScript_MoveInstituteWorkersDownstairs::
# 29 "data/maps/Route119/scripts.pory"
	setflag FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS
# 30 "data/maps/Route119/scripts.pory"
	clearflag FLAG_HIDE_WEATHER_INSTITUTE_1F_WORKERS
# 31 "data/maps/Route119/scripts.pory"
	setvar VAR_WEATHER_INSTITUTE_STATE, 2
# 32 "data/maps/Route119/scripts.pory"
	return
# 33 "data/maps/Route119/scripts.pory"

# 34 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalTrigger1::
# 35 "data/maps/Route119/scripts.pory"
	setvar VAR_TEMP_1, 1
# 36 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalEncounter
# 37 "data/maps/Route119/scripts.pory"
	end
# 38 "data/maps/Route119/scripts.pory"

# 39 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalTrigger2::
# 40 "data/maps/Route119/scripts.pory"
	setvar VAR_TEMP_1, 2
# 41 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalEncounter
# 42 "data/maps/Route119/scripts.pory"
	end
# 43 "data/maps/Route119/scripts.pory"

# 44 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEncounter::
# 45 "data/maps/Route119/scripts.pory"
	lockall
# 46 "data/maps/Route119/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 47 "data/maps/Route119/scripts.pory"
	checkplayergender
# 48 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route119_EventScript_PlayMayMusic
# 49 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route119_EventScript_PlayBrendanMusic
# 50 "data/maps/Route119/scripts.pory"
	delay 65
# 51 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_RivalEnter1
# 52 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_RivalEnter2
# 53 "data/maps/Route119/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 54 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 55 "data/maps/Route119/scripts.pory"
	delay 30
# 56 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_SetRivalPos1
# 57 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_SetRivalPos2
# 58 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 59 "data/maps/Route119/scripts.pory"
	addobject LOCALID_RIVAL
# 60 "data/maps/Route119/scripts.pory"
	delay 30
# 61 "data/maps/Route119/scripts.pory"
	checkplayergender
# 62 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route119_EventScript_BattleMay
# 63 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route119_EventScript_BattleBrendan
# 64 "data/maps/Route119/scripts.pory"
	releaseall
# 65 "data/maps/Route119/scripts.pory"
	end
# 66 "data/maps/Route119/scripts.pory"

# 67 "data/maps/Route119/scripts.pory"
Route119_EventScript_PlayMayMusic::
# 68 "data/maps/Route119/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 69 "data/maps/Route119/scripts.pory"
	return
# 70 "data/maps/Route119/scripts.pory"

# 71 "data/maps/Route119/scripts.pory"
Route119_EventScript_PlayBrendanMusic::
# 72 "data/maps/Route119/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 73 "data/maps/Route119/scripts.pory"
	return
# 74 "data/maps/Route119/scripts.pory"

# 75 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMay::
# 76 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayIntro, MSGBOX_DEFAULT
# 77 "data/maps/Route119/scripts.pory"
	switch VAR_STARTER_MON
# 78 "data/maps/Route119/scripts.pory"
	case 0, Route119_EventScript_BattleMayTreecko
# 79 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_BattleMayTorchic
# 80 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_BattleMayMudkip
# 81 "data/maps/Route119/scripts.pory"
	end
# 82 "data/maps/Route119/scripts.pory"

# 83 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMayTreecko::
# 84 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_TREECKO, Route119_Text_MayDefeat
# 85 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedMay
# 86 "data/maps/Route119/scripts.pory"
	end
# 87 "data/maps/Route119/scripts.pory"

# 88 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMayTorchic::
# 89 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_TORCHIC, Route119_Text_MayDefeat
# 90 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedMay
# 91 "data/maps/Route119/scripts.pory"
	end
# 92 "data/maps/Route119/scripts.pory"

# 93 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMayMudkip::
# 94 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_MUDKIP, Route119_Text_MayDefeat
# 95 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedMay
# 96 "data/maps/Route119/scripts.pory"
	end
# 97 "data/maps/Route119/scripts.pory"

# 98 "data/maps/Route119/scripts.pory"
Route119_EventScript_DefeatedMay::
# 99 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayPresentForYou, MSGBOX_DEFAULT
# 100 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_GiveDevonScope
# 101 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayExplainDevonScope, MSGBOX_DEFAULT
# 102 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_GiveAcrobaticsTM
# 103 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayExplainAcrobatics, MSGBOX_DEFAULT
# 104 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalExitScottArrive
# 105 "data/maps/Route119/scripts.pory"
	end
# 106 "data/maps/Route119/scripts.pory"

# 107 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendan::
# 108 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanIntro, MSGBOX_DEFAULT
# 109 "data/maps/Route119/scripts.pory"
	switch VAR_STARTER_MON
# 110 "data/maps/Route119/scripts.pory"
	case 0, Route119_EventScript_BattleBrendanTreecko
# 111 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_BattleBrendanTorchic
# 112 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_BattleBrendanMudkip
# 113 "data/maps/Route119/scripts.pory"
	end
# 114 "data/maps/Route119/scripts.pory"

# 115 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendanTreecko::
# 116 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_TREECKO, Route119_Text_BrendanDefeat
# 117 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedBrendan
# 118 "data/maps/Route119/scripts.pory"
	end
# 119 "data/maps/Route119/scripts.pory"

# 120 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendanTorchic::
# 121 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_TORCHIC, Route119_Text_BrendanDefeat
# 122 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedBrendan
# 123 "data/maps/Route119/scripts.pory"
	end
# 124 "data/maps/Route119/scripts.pory"

# 125 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendanMudkip::
# 126 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_MUDKIP, Route119_Text_BrendanDefeat
# 127 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedBrendan
# 128 "data/maps/Route119/scripts.pory"
	end
# 129 "data/maps/Route119/scripts.pory"

# 130 "data/maps/Route119/scripts.pory"
Route119_EventScript_DefeatedBrendan::
# 131 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanIllGiveYouThis, MSGBOX_DEFAULT
# 132 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_GiveDevonScope
# 133 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanExplainDevonScope, MSGBOX_DEFAULT
# 134 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_GiveAcrobaticsTM
# 135 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanExplainAcrobatics, MSGBOX_DEFAULT
# 136 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalExitScottArrive
# 137 "data/maps/Route119/scripts.pory"
	end
# 138 "data/maps/Route119/scripts.pory"

# 139 "data/maps/Route119/scripts.pory"
Route119_EventScript_GiveAcrobaticsTM::
# 140 "data/maps/Route119/scripts.pory"
	giveitem ITEM_TM_ACROBATICS
# 141 "data/maps/Route119/scripts.pory"
	setflag FLAG_RECEIVED_TM_ACROBATICS
# 142 "data/maps/Route119/scripts.pory"
	return
# 143 "data/maps/Route119/scripts.pory"

# 144 "data/maps/Route119/scripts.pory"
Route119_EventScript_GiveDevonScope::
# 145 "data/maps/Route119/scripts.pory"
	giveitem ITEM_DEVON_SCOPE
# 146 "data/maps/Route119/scripts.pory"
	setflag FLAG_RECEIVED_DEVON_SCOPE
# 147 "data/maps/Route119/scripts.pory"
	return
# 148 "data/maps/Route119/scripts.pory"

# 149 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExitScottArrive::
# 150 "data/maps/Route119/scripts.pory"
	closemessage
# 151 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_SetRivalPos1
# 152 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_SetRivalPos2
# 153 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_RIVAL
# 154 "data/maps/Route119/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 155 "data/maps/Route119/scripts.pory"
	delay 30
# 156 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_RivalExit1
# 157 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_RivalExit2
# 158 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 159 "data/maps/Route119/scripts.pory"
	setvar VAR_ROUTE119_STATE, 1
# 160 "data/maps/Route119/scripts.pory"
	savebgm MUS_DUMMY
# 161 "data/maps/Route119/scripts.pory"
	fadedefaultbgm
# 162 "data/maps/Route119/scripts.pory"
	delay 60
# 163 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_SetScottPos1
# 164 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_SetScottPos2
# 165 "data/maps/Route119/scripts.pory"
	addobject LOCALID_SCOTT
# 166 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_SCOTT, Route119_Movement_ScottEnter
# 167 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 168 "data/maps/Route119/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 169 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ScottWayToGoBeSeeingYou, MSGBOX_DEFAULT
# 170 "data/maps/Route119/scripts.pory"
	closemessage
# 171 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_ScottExit1
# 172 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_ScottExit2
# 173 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_SCOTT
# 174 "data/maps/Route119/scripts.pory"
	releaseall
# 175 "data/maps/Route119/scripts.pory"
	end
# 176 "data/maps/Route119/scripts.pory"

# 177 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetScottPos1::
# 178 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 27, 25
# 179 "data/maps/Route119/scripts.pory"
	return
# 180 "data/maps/Route119/scripts.pory"

# 181 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetScottPos2::
# 182 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 28, 25
# 183 "data/maps/Route119/scripts.pory"
	return
# 184 "data/maps/Route119/scripts.pory"

# 185 "data/maps/Route119/scripts.pory"
Route119_EventScript_ScottExit1::
# 186 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_SCOTT, Route119_Movement_ScottExit1
# 187 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 188 "data/maps/Route119/scripts.pory"
	return
# 189 "data/maps/Route119/scripts.pory"

# 190 "data/maps/Route119/scripts.pory"
Route119_EventScript_ScottExit2::
# 191 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_SCOTT, Route119_Movement_ScottExit2
# 192 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 193 "data/maps/Route119/scripts.pory"
	return
# 194 "data/maps/Route119/scripts.pory"

# 195 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEnter1::
# 196 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route119_Movement_RivalEnter1
# 197 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 198 "data/maps/Route119/scripts.pory"
	return
# 199 "data/maps/Route119/scripts.pory"

# 200 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEnter2::
# 201 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route119_Movement_RivalEnter2
# 202 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 203 "data/maps/Route119/scripts.pory"
	return
# 204 "data/maps/Route119/scripts.pory"

# 205 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExit1::
# 206 "data/maps/Route119/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route119_Movement_PlayerWatchRivalExit1
# 207 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route119_Movement_RivalExit1
# 208 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 209 "data/maps/Route119/scripts.pory"
	return
# 210 "data/maps/Route119/scripts.pory"

# 211 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExit2::
# 212 "data/maps/Route119/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route119_Movement_PlayerWatchRivalExit2
# 213 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route119_Movement_RivalExit2
# 214 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 215 "data/maps/Route119/scripts.pory"
	return
# 216 "data/maps/Route119/scripts.pory"

# 217 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetRivalPos1::
# 218 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 25, 32
# 219 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 25, 32
# 220 "data/maps/Route119/scripts.pory"
	return
# 221 "data/maps/Route119/scripts.pory"

# 222 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetRivalPos2::
# 223 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 26, 32
# 224 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 26, 32
# 225 "data/maps/Route119/scripts.pory"
	return
# 226 "data/maps/Route119/scripts.pory"

# 227 "data/maps/Route119/scripts.pory"
Route119_Movement_PlayerWatchRivalExit1:
# 228 "data/maps/Route119/scripts.pory"
	delay_16
# 229 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_right
# 230 "data/maps/Route119/scripts.pory"
	delay_8
# 231 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_up
# 232 "data/maps/Route119/scripts.pory"
	step_end
# 233 "data/maps/Route119/scripts.pory"

# 234 "data/maps/Route119/scripts.pory"
Route119_Movement_PlayerWatchRivalExit2:
# 235 "data/maps/Route119/scripts.pory"
	delay_16
# 236 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_left
# 237 "data/maps/Route119/scripts.pory"
	delay_8
# 238 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_up
# 239 "data/maps/Route119/scripts.pory"
	step_end
# 240 "data/maps/Route119/scripts.pory"

# 241 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalEnter1:
# 242 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 243 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 244 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 245 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 246 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 247 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 248 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 249 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 250 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 251 "data/maps/Route119/scripts.pory"
	step_end
# 252 "data/maps/Route119/scripts.pory"

# 253 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalEnter2:
# 254 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 255 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 256 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 257 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 258 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 259 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 260 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 261 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 262 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 263 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 264 "data/maps/Route119/scripts.pory"
	step_end
# 265 "data/maps/Route119/scripts.pory"

# 266 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalExit1:
# 267 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 268 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 269 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 270 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 271 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 272 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 273 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 274 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 275 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 276 "data/maps/Route119/scripts.pory"
	step_end
# 277 "data/maps/Route119/scripts.pory"

# 278 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalExit2:
# 279 "data/maps/Route119/scripts.pory"
	walk_fast_left
# 280 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 281 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 282 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 283 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 284 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 285 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 286 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 287 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 288 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 289 "data/maps/Route119/scripts.pory"
	step_end
# 290 "data/maps/Route119/scripts.pory"

# 291 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottEnter:
# 292 "data/maps/Route119/scripts.pory"
	walk_down
# 293 "data/maps/Route119/scripts.pory"
	walk_down
# 294 "data/maps/Route119/scripts.pory"
	walk_down
# 295 "data/maps/Route119/scripts.pory"
	walk_down
# 296 "data/maps/Route119/scripts.pory"
	walk_left
# 297 "data/maps/Route119/scripts.pory"
	walk_left
# 298 "data/maps/Route119/scripts.pory"
	walk_down
# 299 "data/maps/Route119/scripts.pory"
	step_end
# 300 "data/maps/Route119/scripts.pory"

# 301 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottExit1:
# 302 "data/maps/Route119/scripts.pory"
	walk_up
# 303 "data/maps/Route119/scripts.pory"
	walk_right
# 304 "data/maps/Route119/scripts.pory"
	walk_right
# 305 "data/maps/Route119/scripts.pory"
	walk_up
# 306 "data/maps/Route119/scripts.pory"
	walk_up
# 307 "data/maps/Route119/scripts.pory"
	walk_up
# 308 "data/maps/Route119/scripts.pory"
	walk_up
# 309 "data/maps/Route119/scripts.pory"
	walk_up
# 310 "data/maps/Route119/scripts.pory"
	step_end
# 311 "data/maps/Route119/scripts.pory"

# 312 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottExit2:
# 313 "data/maps/Route119/scripts.pory"
	walk_up
# 314 "data/maps/Route119/scripts.pory"
	walk_right
# 315 "data/maps/Route119/scripts.pory"
	walk_up
# 316 "data/maps/Route119/scripts.pory"
	walk_up
# 317 "data/maps/Route119/scripts.pory"
	walk_up
# 318 "data/maps/Route119/scripts.pory"
	walk_up
# 319 "data/maps/Route119/scripts.pory"
	walk_up
# 320 "data/maps/Route119/scripts.pory"
	step_end
# 321 "data/maps/Route119/scripts.pory"

# 322 "data/maps/Route119/scripts.pory"
Route119_EventScript_CyclingTriathleteM::
# 323 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TallGrassSnaresBikeTires, MSGBOX_NPC
# 324 "data/maps/Route119/scripts.pory"
	end
# 325 "data/maps/Route119/scripts.pory"

# 326 "data/maps/Route119/scripts.pory"
Route119_EventScript_RouteSignFortree::
# 327 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_RouteSignFortree, MSGBOX_SIGN
# 328 "data/maps/Route119/scripts.pory"
	end
# 329 "data/maps/Route119/scripts.pory"

# 330 "data/maps/Route119/scripts.pory"
Route119_EventScript_WeatherInstituteSign::
# 331 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_WeatherInstitute, MSGBOX_SIGN
# 332 "data/maps/Route119/scripts.pory"
	end
# 333 "data/maps/Route119/scripts.pory"

# 334 "data/maps/Route119/scripts.pory"
Route119_EventScript_Brent::
# 335 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_BRENT, Route119_Text_BrentIntro, Route119_Text_BrentDefeat
# 336 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrentPostBattle, MSGBOX_AUTOCLOSE
# 337 "data/maps/Route119/scripts.pory"
	end
# 338 "data/maps/Route119/scripts.pory"

# 339 "data/maps/Route119/scripts.pory"
Route119_EventScript_Taylor::
# 340 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_TAYLOR, Route119_Text_TaylorIntro, Route119_Text_TaylorDefeat
# 341 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TaylorPostBattle, MSGBOX_AUTOCLOSE
# 342 "data/maps/Route119/scripts.pory"
	end
# 343 "data/maps/Route119/scripts.pory"

# 344 "data/maps/Route119/scripts.pory"
Route119_EventScript_Doug::
# 345 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DOUG, Route119_Text_DougIntro, Route119_Text_DougDefeat
# 346 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DougPostBattle, MSGBOX_AUTOCLOSE
# 347 "data/maps/Route119/scripts.pory"
	end
# 348 "data/maps/Route119/scripts.pory"

# 349 "data/maps/Route119/scripts.pory"
Route119_EventScript_Greg::
# 350 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_GREG, Route119_Text_GregIntro, Route119_Text_GregDefeat
# 351 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_GregPostBattle, MSGBOX_AUTOCLOSE
# 352 "data/maps/Route119/scripts.pory"
	end
# 353 "data/maps/Route119/scripts.pory"

# 354 "data/maps/Route119/scripts.pory"
Route119_EventScript_Kent::
# 355 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_KENT, Route119_Text_KentIntro, Route119_Text_KentDefeat
# 356 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_KentPostBattle, MSGBOX_AUTOCLOSE
# 357 "data/maps/Route119/scripts.pory"
	end
# 358 "data/maps/Route119/scripts.pory"

# 359 "data/maps/Route119/scripts.pory"
Route119_EventScript_Jackson::
# 360 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_JACKSON_1, Route119_Text_JacksonIntro, Route119_Text_JacksonDefeat, Route119_EventScript_RegisterJackson
# 361 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 362 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route119_EventScript_RematchJackson
# 363 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonPostBattle, MSGBOX_DEFAULT
# 364 "data/maps/Route119/scripts.pory"
	release
# 365 "data/maps/Route119/scripts.pory"
	end
# 366 "data/maps/Route119/scripts.pory"

# 367 "data/maps/Route119/scripts.pory"
Route119_EventScript_RegisterJackson::
# 368 "data/maps/Route119/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 369 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 370 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonRegister, MSGBOX_DEFAULT
# 371 "data/maps/Route119/scripts.pory"
	register_matchcall TRAINER_JACKSON_1
# 372 "data/maps/Route119/scripts.pory"
	release
# 373 "data/maps/Route119/scripts.pory"
	end
# 374 "data/maps/Route119/scripts.pory"

# 375 "data/maps/Route119/scripts.pory"
Route119_EventScript_RematchJackson::
# 376 "data/maps/Route119/scripts.pory"
	trainerbattle_rematch TRAINER_JACKSON_1, Route119_Text_JacksonRematchIntro, Route119_Text_JacksonRematchDefeat
# 377 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonPostRematch, MSGBOX_AUTOCLOSE
# 378 "data/maps/Route119/scripts.pory"
	end
# 379 "data/maps/Route119/scripts.pory"

# 380 "data/maps/Route119/scripts.pory"
Route119_EventScript_Catherine::
# 381 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_CATHERINE_1, Route119_Text_CatherineIntro, Route119_Text_CatherineDefeat, Route119_EventScript_RegisterCatherine
# 382 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 383 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route119_EventScript_RematchCatherine
# 384 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherinePostBattle, MSGBOX_DEFAULT
# 385 "data/maps/Route119/scripts.pory"
	release
# 386 "data/maps/Route119/scripts.pory"
	end
# 387 "data/maps/Route119/scripts.pory"

# 388 "data/maps/Route119/scripts.pory"
Route119_EventScript_RegisterCatherine::
# 389 "data/maps/Route119/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 390 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 391 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherineRegister, MSGBOX_DEFAULT
# 392 "data/maps/Route119/scripts.pory"
	register_matchcall TRAINER_CATHERINE_1
# 393 "data/maps/Route119/scripts.pory"
	release
# 394 "data/maps/Route119/scripts.pory"
	end
# 395 "data/maps/Route119/scripts.pory"

# 396 "data/maps/Route119/scripts.pory"
Route119_EventScript_RematchCatherine::
# 397 "data/maps/Route119/scripts.pory"
	trainerbattle_rematch TRAINER_CATHERINE_1, Route119_Text_CatherineRematchIntro, Route119_Text_CatherineRematchDefeat
# 398 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherinePostRematch, MSGBOX_AUTOCLOSE
# 399 "data/maps/Route119/scripts.pory"
	end
# 400 "data/maps/Route119/scripts.pory"

# 401 "data/maps/Route119/scripts.pory"
Route119_EventScript_Hugh::
# 402 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_HUGH, Route119_Text_HughIntro, Route119_Text_HughDefeat
# 403 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_HughPostBattle, MSGBOX_AUTOCLOSE
# 404 "data/maps/Route119/scripts.pory"
	end
# 405 "data/maps/Route119/scripts.pory"

# 406 "data/maps/Route119/scripts.pory"
Route119_EventScript_Phil::
# 407 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_PHIL, Route119_Text_PhilIntro, Route119_Text_PhilDefeat
# 408 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_PhilPostBattle, MSGBOX_AUTOCLOSE
# 409 "data/maps/Route119/scripts.pory"
	end
# 410 "data/maps/Route119/scripts.pory"

# 411 "data/maps/Route119/scripts.pory"
Route119_EventScript_Yasu::
# 412 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_YASU, Route119_Text_YasuIntro, Route119_Text_YasuDefeat
# 413 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_YasuPostBattle, MSGBOX_AUTOCLOSE
# 414 "data/maps/Route119/scripts.pory"
	end
# 415 "data/maps/Route119/scripts.pory"

# 416 "data/maps/Route119/scripts.pory"
Route119_EventScript_Takashi::
# 417 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_TAKASHI, Route119_Text_TakashiIntro, Route119_Text_TakashiDefeat
# 418 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TakashiPostBattle, MSGBOX_AUTOCLOSE
# 419 "data/maps/Route119/scripts.pory"
	end
# 420 "data/maps/Route119/scripts.pory"

# 421 "data/maps/Route119/scripts.pory"
Route119_EventScript_Hideo::
# 422 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_HIDEO, Route119_Text_HideoIntro, Route119_Text_HideoDefeat
# 423 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_HideoPostBattle, MSGBOX_AUTOCLOSE
# 424 "data/maps/Route119/scripts.pory"
	end
# 425 "data/maps/Route119/scripts.pory"

# 426 "data/maps/Route119/scripts.pory"
Route119_EventScript_Chris::
# 427 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_CHRIS, Route119_Text_ChrisIntro, Route119_Text_ChrisDefeat
# 428 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ChrisPostBattle, MSGBOX_AUTOCLOSE
# 429 "data/maps/Route119/scripts.pory"
	end
# 430 "data/maps/Route119/scripts.pory"

# 431 "data/maps/Route119/scripts.pory"
Route119_EventScript_Fabian::
# 432 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_FABIAN, Route119_Text_FabianIntro, Route119_Text_FabianDefeat
# 433 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_FabianPostBattle, MSGBOX_AUTOCLOSE
# 434 "data/maps/Route119/scripts.pory"
	end
# 435 "data/maps/Route119/scripts.pory"

# 436 "data/maps/Route119/scripts.pory"
Route119_EventScript_Dayton::
# 437 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DAYTON, Route119_Text_DaytonIntro, Route119_Text_DaytonDefeat
# 438 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DaytonPostBattle, MSGBOX_AUTOCLOSE
# 439 "data/maps/Route119/scripts.pory"
	end
# 440 "data/maps/Route119/scripts.pory"

# 441 "data/maps/Route119/scripts.pory"
Route119_EventScript_Rachel::
# 442 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_RACHEL, Route119_Text_RachelIntro, Route119_Text_RachelDefeat
# 443 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_RachelPostBattle, MSGBOX_AUTOCLOSE
# 444 "data/maps/Route119/scripts.pory"
	end
# 445 "data/maps/Route119/scripts.pory"

# 446 "data/maps/Route119/scripts.pory"
Route119_EventScript_BridgeAquaGrunt1::
# 447 "data/maps/Route119/scripts.pory"
	lock
# 448 "data/maps/Route119/scripts.pory"
	faceplayer
# 449 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_StayAwayFromWeatherInstitute, MSGBOX_DEFAULT
# 450 "data/maps/Route119/scripts.pory"
	closemessage
# 451 "data/maps/Route119/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 452 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 453 "data/maps/Route119/scripts.pory"
	release
# 454 "data/maps/Route119/scripts.pory"
	end
# 455 "data/maps/Route119/scripts.pory"

# 456 "data/maps/Route119/scripts.pory"
Route119_EventScript_BridgeAquaGrunt2::
# 457 "data/maps/Route119/scripts.pory"
	lock
# 458 "data/maps/Route119/scripts.pory"
	faceplayer
# 459 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DontGoNearWeatherInstitute, MSGBOX_DEFAULT
# 460 "data/maps/Route119/scripts.pory"
	closemessage
# 461 "data/maps/Route119/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 462 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 463 "data/maps/Route119/scripts.pory"
	release
# 464 "data/maps/Route119/scripts.pory"
	end
# 465 "data/maps/Route119/scripts.pory"

# 466 "data/maps/Route119/scripts.pory"
Route119_EventScript_Boy1::
# 467 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ThoughtFlyByCatchingBirdMons, MSGBOX_NPC
# 468 "data/maps/Route119/scripts.pory"
	end
# 469 "data/maps/Route119/scripts.pory"

# 470 "data/maps/Route119/scripts.pory"
Route119_EventScript_Boy2::
# 471 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CanYourMonMakeSecretBase, MSGBOX_NPC
# 472 "data/maps/Route119/scripts.pory"
	end
# 473 "data/maps/Route119/scripts.pory"

# 474 "data/maps/Route119/scripts.pory"
Route119_EventScript_TrainerTipsDecoration::
# 475 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TrainerTipsDecoration, MSGBOX_SIGN
# 476 "data/maps/Route119/scripts.pory"
	end
# 477 "data/maps/Route119/scripts.pory"

# 478 "data/maps/Route119/scripts.pory"
Route119_EventScript_ScottWonAtFortreeGymCall::
# 479 "data/maps/Route119/scripts.pory"
	lockall
# 480 "data/maps/Route119/scripts.pory"
	pokenavcall Route119_Text_ScottYouWonAtFortreeGym
# 481 "data/maps/Route119/scripts.pory"
	waitmessage
# 482 "data/maps/Route119/scripts.pory"
	clearflag FLAG_SCOTT_CALL_FORTREE_GYM
# 483 "data/maps/Route119/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 484 "data/maps/Route119/scripts.pory"
	releaseall
# 485 "data/maps/Route119/scripts.pory"
	end
# 486 "data/maps/Route119/scripts.pory"

# 487 "data/maps/Route119/scripts.pory"
Route119_EventScript_BAndDPadToJumpOnRails::
# 488 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BAndDPadToJumpOnRails, MSGBOX_SIGN
# 489 "data/maps/Route119/scripts.pory"
	end
# 490 "data/maps/Route119/scripts.pory"

# 491 "data/maps/Route119/scripts.pory"
Route119_Text_MayIntro:
# 492 "data/maps/Route119/scripts.pory"
	.string "May: {PLAYER}{KUN}!\n"
# 493 "data/maps/Route119/scripts.pory"
	.string "Where were you? I was looking for you!\p"
# 494 "data/maps/Route119/scripts.pory"
	.string "How much stronger have you gotten?\n"
# 495 "data/maps/Route119/scripts.pory"
	.string "Let me check for you!\p"
# 496 "data/maps/Route119/scripts.pory"
	.string "Ready with your Pokémon?\n"
# 497 "data/maps/Route119/scripts.pory"
	.string "Of course you are! Go!$"
# 498 "data/maps/Route119/scripts.pory"

# 499 "data/maps/Route119/scripts.pory"
Route119_Text_MayDefeat:
# 500 "data/maps/Route119/scripts.pory"
	.string "Achah!\n"
# 501 "data/maps/Route119/scripts.pory"
	.string "{PLAYER}{KUN}, you're strong!\p"
# 502 "data/maps/Route119/scripts.pory"
	.string "I was worried that you might be\n"
# 503 "data/maps/Route119/scripts.pory"
	.string "struggling with your training.$"
# 504 "data/maps/Route119/scripts.pory"

# 505 "data/maps/Route119/scripts.pory"
Route119_Text_MayPresentForYou:
# 506 "data/maps/Route119/scripts.pory"
	.string "May: But I had absolutely nothing to\n"
# 507 "data/maps/Route119/scripts.pory"
	.string "worry about! Keep it up!\p"
# 508 "data/maps/Route119/scripts.pory"
	.string "And, here! I have a present for you.$"
# 509 "data/maps/Route119/scripts.pory"

# 510 "data/maps/Route119/scripts.pory"
Route119_Text_MayExplainDevonScope:
# 511 "data/maps/Route119/scripts.pory"
	.string "May: The Devon Scope lets you see\n"
# 512 "data/maps/Route119/scripts.pory"
	.string "things that you normally won't be able\l"
# 513 "data/maps/Route119/scripts.pory"
	.string "to.\p"
# 514 "data/maps/Route119/scripts.pory"
	.string "The Devon Scope will make it easier for\n"
# 515 "data/maps/Route119/scripts.pory"
	.string "you to see these things!\p"
# 516 "data/maps/Route119/scripts.pory"
	.string "Also, this might be more helpful to you.$"
# 517 "data/maps/Route119/scripts.pory"

# 518 "data/maps/Route119/scripts.pory"
Route119_Text_MayExplainAcrobatics:
# 519 "data/maps/Route119/scripts.pory"
	.string "May: Acrobatics is a pretty fun move!\n"
# 520 "data/maps/Route119/scripts.pory"
	.string "It doubles in power if you're not\l"
# 521 "data/maps/Route119/scripts.pory"
	.string "holding any item!\p"
# 522 "data/maps/Route119/scripts.pory"
	.string "Well, let's meet again somewhere!$"
# 523 "data/maps/Route119/scripts.pory"

# 524 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanIntro:
# 525 "data/maps/Route119/scripts.pory"
	.string "Brendan: {PLAYER}! So this is where\n"
# 526 "data/maps/Route119/scripts.pory"
	.string "you've been looking for Pokémon?\p"
# 527 "data/maps/Route119/scripts.pory"
	.string "Let me see how good you got.\n"
# 528 "data/maps/Route119/scripts.pory"
	.string "I'll test you!\p"
# 529 "data/maps/Route119/scripts.pory"
	.string "Now!\n"
# 530 "data/maps/Route119/scripts.pory"
	.string "It's a battle, so battle!$"
# 531 "data/maps/Route119/scripts.pory"

# 532 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanDefeat:
# 533 "data/maps/Route119/scripts.pory"
	.string "Hmm…\n"
# 534 "data/maps/Route119/scripts.pory"
	.string "You've gotten pretty darn decent.$"
# 535 "data/maps/Route119/scripts.pory"

# 536 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanIllGiveYouThis:
# 537 "data/maps/Route119/scripts.pory"
	.string "Brendan: I'd say you're good enough\n"
# 538 "data/maps/Route119/scripts.pory"
	.string "to search for Pokémon anywhere.\p"
# 539 "data/maps/Route119/scripts.pory"
	.string "Here, I'll give you this.\n"
# 540 "data/maps/Route119/scripts.pory"
	.string "Try it out.$"
# 541 "data/maps/Route119/scripts.pory"

# 542 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanExplainDevonScope:
# 543 "data/maps/Route119/scripts.pory"
	.string "Brendan: The Devon Scope lets you see\n"
# 544 "data/maps/Route119/scripts.pory"
	.string "things that you normally won't be able\l"
# 545 "data/maps/Route119/scripts.pory"
	.string "to.\p"
# 546 "data/maps/Route119/scripts.pory"
	.string "There may be some Pokémon blocking your\n"
# 547 "data/maps/Route119/scripts.pory"
	.string "way, and you won't even notice!\p"
# 548 "data/maps/Route119/scripts.pory"
	.string "Oh, also this will be helpful!$"
# 549 "data/maps/Route119/scripts.pory"

# 550 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanExplainAcrobatics:
# 551 "data/maps/Route119/scripts.pory"
	.string "Brendan: Acrobatics is an awesome move!\n"
# 552 "data/maps/Route119/scripts.pory"
	.string "It doubles in power if you're not\l"
# 553 "data/maps/Route119/scripts.pory"
	.string "holding any item!\p"
# 554 "data/maps/Route119/scripts.pory"
	.string "Pretty rad, eh?\p"
# 555 "data/maps/Route119/scripts.pory"
	.string "Anyway, I have to move along.$"
# 556 "data/maps/Route119/scripts.pory"

# 557 "data/maps/Route119/scripts.pory"
Route119_Text_ScottWayToGoBeSeeingYou:
# 558 "data/maps/Route119/scripts.pory"
	.string "Scott: Hahahah!\n"
# 559 "data/maps/Route119/scripts.pory"
	.string "Way to go, {PLAYER}{KUN}!\p"
# 560 "data/maps/Route119/scripts.pory"
	.string "I just passed by a Trainer riding\n"
# 561 "data/maps/Route119/scripts.pory"
	.string "a Bike.\p"
# 562 "data/maps/Route119/scripts.pory"
	.string "You just beat that Trainer, didn't you?\n"
# 563 "data/maps/Route119/scripts.pory"
	.string "It was pretty obvious that you did.\p"
# 564 "data/maps/Route119/scripts.pory"
	.string "The kid looked really upset with\n"
# 565 "data/maps/Route119/scripts.pory"
	.string "a face all red from anger.\p"
# 566 "data/maps/Route119/scripts.pory"
	.string "I sure seem to run into you often.\n"
# 567 "data/maps/Route119/scripts.pory"
	.string "Are you off to Fortree Gym next?\p"
# 568 "data/maps/Route119/scripts.pory"
	.string "I expect that you'll do well at the Gym.\n"
# 569 "data/maps/Route119/scripts.pory"
	.string "Well, I'll be seeing you!$"
# 570 "data/maps/Route119/scripts.pory"

# 571 "data/maps/Route119/scripts.pory"

# 572 "data/maps/Route119/scripts.pory"
Route119_Text_ScottYouWonAtFortreeGym:
# 573 "data/maps/Route119/scripts.pory"
	.string "… … … … … …\n"
# 574 "data/maps/Route119/scripts.pory"
	.string "… … … … … Beep!\p"
# 575 "data/maps/Route119/scripts.pory"
	.string "Scott: Hiya, {PLAYER}{KUN}, it's me!\p"
# 576 "data/maps/Route119/scripts.pory"
	.string "Just as I thought, you won at\n"
# 577 "data/maps/Route119/scripts.pory"
	.string "the Fortree Gym.\p"
# 578 "data/maps/Route119/scripts.pory"
	.string "Your strength…\n"
# 579 "data/maps/Route119/scripts.pory"
	.string "Perhaps you really are the Trainer\l"
# 580 "data/maps/Route119/scripts.pory"
	.string "that I've been searching for.\p"
# 581 "data/maps/Route119/scripts.pory"
	.string "Remember, you have a fan in me.\n"
# 582 "data/maps/Route119/scripts.pory"
	.string "I'll be cheering from the sidelines.\l"
# 583 "data/maps/Route119/scripts.pory"
	.string "Keep up the great work!\p"
# 584 "data/maps/Route119/scripts.pory"
	.string "… … … … … …\n"
# 585 "data/maps/Route119/scripts.pory"
	.string "… … … … … Click!$"
# 586 "data/maps/Route119/scripts.pory"

# 587 "data/maps/Route119/scripts.pory"
Route119_Text_StayAwayFromWeatherInstitute:
# 588 "data/maps/Route119/scripts.pory"
	.string "We're standing lookout here.\p"
# 589 "data/maps/Route119/scripts.pory"
	.string "Hey, you! Stay away from the Weather\n"
# 590 "data/maps/Route119/scripts.pory"
	.string "Institute. It's not safe.$"
# 591 "data/maps/Route119/scripts.pory"

# 592 "data/maps/Route119/scripts.pory"
Route119_Text_DontGoNearWeatherInstitute:
# 593 "data/maps/Route119/scripts.pory"
	.string "Lookout duty is surprisingly boring.\p"
# 594 "data/maps/Route119/scripts.pory"
	.string "Hey, you! Please don't go near the\n"
# 595 "data/maps/Route119/scripts.pory"
	.string "Weather Institute.$"
# 596 "data/maps/Route119/scripts.pory"

# 597 "data/maps/Route119/scripts.pory"
Route119_Text_ThoughtFlyByCatchingBirdMons:
# 598 "data/maps/Route119/scripts.pory"
	.string "I thought you Fly by catching a whole\n"
# 599 "data/maps/Route119/scripts.pory"
	.string "flock of Bird Pokémon, and then\l"
# 600 "data/maps/Route119/scripts.pory"
	.string "hanging on to them somehow.\p"
# 601 "data/maps/Route119/scripts.pory"
	.string "But it turns out there's an HM move\n"
# 602 "data/maps/Route119/scripts.pory"
	.string "called Fly!\p"
# 603 "data/maps/Route119/scripts.pory"
	.string "I wish I'd known about that a long\n"
# 604 "data/maps/Route119/scripts.pory"
	.string "time ago…$"
# 605 "data/maps/Route119/scripts.pory"

# 606 "data/maps/Route119/scripts.pory"
Route119_Text_TallGrassSnaresBikeTires:
# 607 "data/maps/Route119/scripts.pory"
	.string "Tch…\n"
# 608 "data/maps/Route119/scripts.pory"
	.string "It's a no-go…\p"
# 609 "data/maps/Route119/scripts.pory"
	.string "The tall grass snares Bike tires.\n"
# 610 "data/maps/Route119/scripts.pory"
	.string "There's no way you can cycle here.$"
# 611 "data/maps/Route119/scripts.pory"

# 612 "data/maps/Route119/scripts.pory"
Route119_Text_CanYourMonMakeSecretBase:
# 613 "data/maps/Route119/scripts.pory"
	.string "Can your Pokémon use its Secret Power\n"
# 614 "data/maps/Route119/scripts.pory"
	.string "on a big pile of grass and make a\l"
# 615 "data/maps/Route119/scripts.pory"
	.string "Secret Base?$"
# 616 "data/maps/Route119/scripts.pory"

# 617 "data/maps/Route119/scripts.pory"
Route119_Text_RouteSignFortree:
# 618 "data/maps/Route119/scripts.pory"
	.string "Route 119\n"
# 619 "data/maps/Route119/scripts.pory"
	.string "{RIGHT_ARROW} Fortree City$"
# 620 "data/maps/Route119/scripts.pory"

# 621 "data/maps/Route119/scripts.pory"
Route119_Text_WeatherInstitute:
# 622 "data/maps/Route119/scripts.pory"
	.string "Weather Institute$"
# 623 "data/maps/Route119/scripts.pory"

# 624 "data/maps/Route119/scripts.pory"
Route119_Text_TrainerTipsDecoration:
# 625 "data/maps/Route119/scripts.pory"
	.string "Trainer Tips\p"
# 626 "data/maps/Route119/scripts.pory"
	.string "Up to sixteen decorations and\n"
# 627 "data/maps/Route119/scripts.pory"
	.string "furniture items can be placed in\l"
# 628 "data/maps/Route119/scripts.pory"
	.string "a Secret Base.\p"
# 629 "data/maps/Route119/scripts.pory"
	.string "Pick your favorite items and create\n"
# 630 "data/maps/Route119/scripts.pory"
	.string "your very own Secret Base exactly the\l"
# 631 "data/maps/Route119/scripts.pory"
	.string "way you want.$"
# 632 "data/maps/Route119/scripts.pory"

# 633 "data/maps/Route119/scripts.pory"
Route119_Text_BAndDPadToJumpOnRails:
# 634 "data/maps/Route119/scripts.pory"
	.string "Trainer Tips\p"
# 635 "data/maps/Route119/scripts.pory"
	.string "To jump on the rails, set the bicycle to\n"
# 636 "data/maps/Route119/scripts.pory"
	.string "Acro mode, and press {B_BUTTON} and the\l"
# 637 "data/maps/Route119/scripts.pory"
	.string "direction you want to go to, at once!$"

Route119_EventScript_Donald2::
# 642 "data/maps/Route119/scripts.pory"
	msgbox Route119_EventScript_Donald2_Text_0
# 643 "data/maps/Route119/scripts.pory"
	givemon SPECIES_PINSIR, 0, ITEM_FOCUS_SASH, ITEM_CHERISH_BALL, NATURE_JOLLY, 2, MON_MALE, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_RETURN, MOVE_SWORDS_DANCE, MOVE_CLOSE_COMBAT, MOVE_QUICK_ATTACK, TRUE
# 644 "data/maps/Route119/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_PINSIR
# 645 "data/maps/Route119/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PINSIR
# 646 "data/maps/Route119/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 647 "data/maps/Route119/scripts.pory"
	msgbox Route119_EventScript_Donald2_Text_1
# 648 "data/maps/Route119/scripts.pory"
	waitmessage
# 649 "data/maps/Route119/scripts.pory"
	waitfanfare
# 650 "data/maps/Route119/scripts.pory"
	call Common_EventScript_Nickname
# 651 "data/maps/Route119/scripts.pory"
	msgbox Route119_EventScript_Donald2_Text_2, MSGBOX_NPC
# 652 "data/maps/Route119/scripts.pory"
	giveitem ITEM_PINSIRITE, 1
# 653 "data/maps/Route119/scripts.pory"
	setflag FLAG_ROUTE_118_BOSS_DEFEATED
# 654 "data/maps/Route119/scripts.pory"
	msgbox Route119_EventScript_Donald2_Text_3, MSGBOX_NPC
	return


Route119_EventScript_Donald::
# 659 "data/maps/Route119/scripts.pory"
	lock
# 660 "data/maps/Route119/scripts.pory"
	faceplayer
# 661 "data/maps/Route119/scripts.pory"
	checktrainerflag TRAINER_BRENT
	goto_if 1, Route119_EventScript_Donald_5
Route119_EventScript_Donald_3:
# 684 "data/maps/Route119/scripts.pory"
	msgbox Route119_EventScript_Donald_Text_0, MSGBOX_NPC
Route119_EventScript_Donald_1:
# 686 "data/maps/Route119/scripts.pory"
	release
	end

Route119_EventScript_Donald_2:
# 677 "data/maps/Route119/scripts.pory"
	setflag B_FLAG_NO_BAG_USE
# 678 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DONALD, Route119_Text_DonaldIntro, Route119_Text_DonaldDefeat, Route119_EventScript_Donald2
# 679 "data/maps/Route119/scripts.pory"
	clearflag B_FLAG_NO_BAG_USE
# 680 "data/maps/Route119/scripts.pory"
	msgbox Route119_EventScript_Donald2_Text_3, MSGBOX_NPC
	goto Route119_EventScript_Donald_1

Route119_EventScript_Donald_4:
# 663 "data/maps/Route119/scripts.pory"
	checktrainerflag TRAINER_DOUG
	goto_if 1, Route119_EventScript_Donald_9
	goto Route119_EventScript_Donald_3

Route119_EventScript_Donald_5:
# 662 "data/maps/Route119/scripts.pory"
	checktrainerflag TRAINER_TAYLOR
	goto_if 1, Route119_EventScript_Donald_4
	goto Route119_EventScript_Donald_3

Route119_EventScript_Donald_8:
# 665 "data/maps/Route119/scripts.pory"
	checktrainerflag TRAINER_KENT
	goto_if 1, Route119_EventScript_Donald_13
	goto Route119_EventScript_Donald_3

Route119_EventScript_Donald_9:
# 664 "data/maps/Route119/scripts.pory"
	checktrainerflag TRAINER_GREG
	goto_if 1, Route119_EventScript_Donald_8
	goto Route119_EventScript_Donald_3

Route119_EventScript_Donald_12:
# 667 "data/maps/Route119/scripts.pory"
	checktrainerflag TRAINER_CATHERINE_1
	goto_if 1, Route119_EventScript_Donald_17
	goto Route119_EventScript_Donald_3

Route119_EventScript_Donald_13:
# 666 "data/maps/Route119/scripts.pory"
	checktrainerflag TRAINER_JACKSON_1
	goto_if 1, Route119_EventScript_Donald_12
	goto Route119_EventScript_Donald_3

Route119_EventScript_Donald_16:
# 669 "data/maps/Route119/scripts.pory"
	checktrainerflag TRAINER_PHIL
	goto_if 1, Route119_EventScript_Donald_21
	goto Route119_EventScript_Donald_3

Route119_EventScript_Donald_17:
# 668 "data/maps/Route119/scripts.pory"
	checktrainerflag TRAINER_HUGH
	goto_if 1, Route119_EventScript_Donald_16
	goto Route119_EventScript_Donald_3

Route119_EventScript_Donald_20:
# 671 "data/maps/Route119/scripts.pory"
	checktrainerflag TRAINER_TAKASHI
	goto_if 1, Route119_EventScript_Donald_25
	goto Route119_EventScript_Donald_3

Route119_EventScript_Donald_21:
# 670 "data/maps/Route119/scripts.pory"
	checktrainerflag TRAINER_YASU
	goto_if 1, Route119_EventScript_Donald_20
	goto Route119_EventScript_Donald_3

Route119_EventScript_Donald_24:
# 673 "data/maps/Route119/scripts.pory"
	checktrainerflag TRAINER_CHRIS
	goto_if 1, Route119_EventScript_Donald_29
	goto Route119_EventScript_Donald_3

Route119_EventScript_Donald_25:
# 672 "data/maps/Route119/scripts.pory"
	checktrainerflag TRAINER_HIDEO
	goto_if 1, Route119_EventScript_Donald_24
	goto Route119_EventScript_Donald_3

Route119_EventScript_Donald_28:
# 675 "data/maps/Route119/scripts.pory"
	checktrainerflag TRAINER_DAYTON
	goto_if 1, Route119_EventScript_Donald_32
	goto Route119_EventScript_Donald_3

Route119_EventScript_Donald_29:
# 674 "data/maps/Route119/scripts.pory"
	checktrainerflag TRAINER_FABIAN
	goto_if 1, Route119_EventScript_Donald_28
	goto Route119_EventScript_Donald_3

Route119_EventScript_Donald_32:
# 676 "data/maps/Route119/scripts.pory"
	checktrainerflag TRAINER_RACHEL
	goto_if 1, Route119_EventScript_Donald_2
	goto Route119_EventScript_Donald_3


Route119_EventScript_Donald2_Text_0:
# 642 "data/maps/Route119/scripts.pory"
	.string "Well, here then!$"

Route119_EventScript_Donald2_Text_1:
# 647 "data/maps/Route119/scripts.pory"
	.string "{PLAYER} received a Pinsir!$"

Route119_EventScript_Donald2_Text_2:
# 651 "data/maps/Route119/scripts.pory"
	.string "For more fire power, you can have this.$"

Route119_EventScript_Donald2_Text_3:
# 654 "data/maps/Route119/scripts.pory"
	.string "Holding that Mega Stone,\nPinsir will Mega Evolve and gain a lot of\lpower.\pIt's Normal-type attacks will become\nFlying-type and hit your foes real hard!$"

Route119_EventScript_Donald_Text_0:
# 684 "data/maps/Route119/scripts.pory"
	.string "We Bug Catchers rule this place!\pIf you'd like to challenge my authority,\nbeat every Trainer here so I consider you\la challenge.$"
