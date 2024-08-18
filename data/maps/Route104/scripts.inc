# 1 "data/maps/Route104/scripts.pory"

# 2 "data/maps/Route104/scripts.pory"
@ NOTE: Route 104's sail to Dewford script references local IDs from Dewford's map.
# 3 "data/maps/Route104/scripts.pory"
@  These are labeled in DewfordTown/scripts.inc
# 4 "data/maps/Route104/scripts.pory"
.set LOCALID_RIVAL, 34
# 5 "data/maps/Route104/scripts.pory"

# 6 "data/maps/Route104/scripts.pory"
Route104_MapScripts::
# 7 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route104_OnFrame
# 8 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_OnTransition
# 9 "data/maps/Route104/scripts.pory"
	.byte 0
# 10 "data/maps/Route104/scripts.pory"

# 11 "data/maps/Route104/scripts.pory"
Route104_OnFrame:
# 12 "data/maps/Route104/scripts.pory"
	map_script_2 VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_EventScript_StartSailToDewford
# 13 "data/maps/Route104/scripts.pory"
	.2byte 0
# 14 "data/maps/Route104/scripts.pory"

# 15 "data/maps/Route104/scripts.pory"
Route104_EventScript_StartSailToDewford::
# 16 "data/maps/Route104/scripts.pory"
	lockall
# 17 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_SailToDewford
# 18 "data/maps/Route104/scripts.pory"
	end
# 19 "data/maps/Route104/scripts.pory"

# 20 "data/maps/Route104/scripts.pory"
Route104_OnTransition:
# 21 "data/maps/Route104/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 22 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_TrySetRivalPos
# 23 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_ShowOrHideWhiteHerbFlorist
# 24 "data/maps/Route104/scripts.pory"
	end
# 25 "data/maps/Route104/scripts.pory"

# 26 "data/maps/Route104/scripts.pory"
Route104_EventScript_ShowOrHideWhiteHerbFlorist::
# 27 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_EventScript_HideWhiteHerbFlorist
# 28 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route104_EventScript_HideWhiteHerbFlorist
# 29 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 30 "data/maps/Route104/scripts.pory"
	return
# 31 "data/maps/Route104/scripts.pory"

# 32 "data/maps/Route104/scripts.pory"
Route104_EventScript_HideWhiteHerbFlorist::
# 33 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 34 "data/maps/Route104/scripts.pory"
	return
# 35 "data/maps/Route104/scripts.pory"

# 36 "data/maps/Route104/scripts.pory"
Route104_EventScript_TrySetRivalPos::
# 37 "data/maps/Route104/scripts.pory"
	goto_if_ge VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_EventScript_DontSetRivalPos
# 38 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, Route104_EventScript_DontSetRivalPos
# 39 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_DontSetRivalPos
# 40 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 17, 52
# 41 "data/maps/Route104/scripts.pory"
	return
# 42 "data/maps/Route104/scripts.pory"

# 43 "data/maps/Route104/scripts.pory"
Route104_EventScript_DontSetRivalPos::
# 44 "data/maps/Route104/scripts.pory"
	return
# 45 "data/maps/Route104/scripts.pory"

# 46 "data/maps/Route104/scripts.pory"
Route104_EventScript_Rival::
# 47 "data/maps/Route104/scripts.pory"
	lockall
# 48 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 1
# 49 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 50 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_RivalEncounter
# 52 "data/maps/Route104/scripts.pory"

# 53 "data/maps/Route104/scripts.pory"
Route104_EventScript_RivalTrigger::
# 54 "data/maps/Route104/scripts.pory"
	lockall
# 55 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 56 "data/maps/Route104/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 57 "data/maps/Route104/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 58 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 59 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 60 "data/maps/Route104/scripts.pory"
	delay 10
# 61 "data/maps/Route104/scripts.pory"
	addobject LOCALID_RIVAL
# 62 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_RIVAL
# 63 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerBackUp
# 64 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 65 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalExitBrineysCottage
# 66 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 67 "data/maps/Route104/scripts.pory"
	delay 20
# 68 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 0
# 69 "data/maps/Route104/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 70 "data/maps/Route104/scripts.pory"
	playse SE_PIN
# 71 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 72 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 73 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 74 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 75 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_RivalEncounter
# 76 "data/maps/Route104/scripts.pory"

# 77 "data/maps/Route104/scripts.pory"
@ Unused, shares script with Rustboro encounter instead
# 78 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayRivalMusic::
# 79 "data/maps/Route104/scripts.pory"
	checkplayergender
# 80 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route104_EventScript_PlayMayMusic
# 81 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route104_EventScript_PlayBrendanMusic
# 82 "data/maps/Route104/scripts.pory"
	return
# 83 "data/maps/Route104/scripts.pory"

# 84 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayMayMusic::
# 85 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 86 "data/maps/Route104/scripts.pory"
	return
# 87 "data/maps/Route104/scripts.pory"

# 88 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayBrendanMusic::
# 89 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 90 "data/maps/Route104/scripts.pory"
	return
# 91 "data/maps/Route104/scripts.pory"

# 92 "data/maps/Route104/scripts.pory"
Route104_EventScript_RivalEncounter::
# 93 "data/maps/Route104/scripts.pory"
	checkplayergender
# 94 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route104_EventScript_MayEncounter
# 95 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route104_EventScript_BrendanEncounter
# 96 "data/maps/Route104/scripts.pory"
	end
# 97 "data/maps/Route104/scripts.pory"

# 98 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayEncounter::
# 99 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_MayDefeated
# 100 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_MayAskToBattle
# 101 "data/maps/Route104/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 102 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayWeShouldRegister, MSGBOX_DEFAULT
# 103 "data/maps/Route104/scripts.pory"
	closemessage
# 104 "data/maps/Route104/scripts.pory"
	delay 30
# 105 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 106 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredMay, MSGBOX_DEFAULT
# 107 "data/maps/Route104/scripts.pory"
	waitfanfare
# 108 "data/maps/Route104/scripts.pory"
	closemessage
# 109 "data/maps/Route104/scripts.pory"
	delay 30
# 110 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 111 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerFaceRival
# 112 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalWalkSlowLeft
# 113 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHowsYourPokedex, MSGBOX_DEFAULT
# 114 "data/maps/Route104/scripts.pory"
	closemessage
# 115 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 116 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalApproachPlayer
# 117 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 118 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_RIVAL
# 119 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayMinesDecentLetsBattle, MSGBOX_YESNO
# 120 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleMay
# 121 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHaventRaisedPokemon, MSGBOX_DEFAULT
# 122 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RestoreMusic
# 123 "data/maps/Route104/scripts.pory"
	releaseall
# 124 "data/maps/Route104/scripts.pory"
	end
# 125 "data/maps/Route104/scripts.pory"

# 126 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalWalkSlowLeft:
# 127 "data/maps/Route104/scripts.pory"
	walk_slow_left
# 128 "data/maps/Route104/scripts.pory"
	step_end
# 129 "data/maps/Route104/scripts.pory"

# 130 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalApproachPlayer:
# 131 "data/maps/Route104/scripts.pory"
	walk_down
# 132 "data/maps/Route104/scripts.pory"
	face_right
# 133 "data/maps/Route104/scripts.pory"
	step_end
# 134 "data/maps/Route104/scripts.pory"

# 135 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerFaceRival:
# 136 "data/maps/Route104/scripts.pory"
	delay_4
# 137 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
# 138 "data/maps/Route104/scripts.pory"
	step_end
# 139 "data/maps/Route104/scripts.pory"

# 140 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayAskToBattle::
# 141 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayLetsBattle, MSGBOX_YESNO
# 142 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleMay
# 143 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHaventRaisedPokemon, MSGBOX_DEFAULT
# 144 "data/maps/Route104/scripts.pory"
	releaseall
# 145 "data/maps/Route104/scripts.pory"
	end
# 146 "data/maps/Route104/scripts.pory"

# 147 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMay::
# 148 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayIntro, MSGBOX_DEFAULT
# 149 "data/maps/Route104/scripts.pory"
	switch VAR_STARTER_MON
# 150 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_BattleMayTreecko
# 151 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_BattleMayTorchic
# 152 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_BattleMayMudkip
# 153 "data/maps/Route104/scripts.pory"
	end
# 154 "data/maps/Route104/scripts.pory"

# 155 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayDefeated::
# 156 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayPostBattle, MSGBOX_DEFAULT
# 157 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route104_EventScript_RestoreMusic
# 158 "data/maps/Route104/scripts.pory"
	releaseall
# 159 "data/maps/Route104/scripts.pory"
	end
# 160 "data/maps/Route104/scripts.pory"

# 161 "data/maps/Route104/scripts.pory"
Route104_EventScript_RestoreMusic::
# 162 "data/maps/Route104/scripts.pory"
	savebgm MUS_DUMMY
# 163 "data/maps/Route104/scripts.pory"
	fadedefaultbgm
# 164 "data/maps/Route104/scripts.pory"
	return
# 165 "data/maps/Route104/scripts.pory"

# 166 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayTreecko::
# 167 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, Route104_Text_MayDefeat
# 168 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 169 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 170 "data/maps/Route104/scripts.pory"
	end
# 171 "data/maps/Route104/scripts.pory"

# 172 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayTorchic::
# 173 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, Route104_Text_MayDefeat
# 174 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 175 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 176 "data/maps/Route104/scripts.pory"
	end
# 177 "data/maps/Route104/scripts.pory"

# 178 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayMudkip::
# 179 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, Route104_Text_MayDefeat
# 180 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 181 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 182 "data/maps/Route104/scripts.pory"
	end
# 183 "data/maps/Route104/scripts.pory"

# 184 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanEncounter::
# 185 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_BrendanDefeated
# 186 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_BrendanAskToBattle
# 187 "data/maps/Route104/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 188 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanWeShouldRegister, MSGBOX_DEFAULT
# 189 "data/maps/Route104/scripts.pory"
	closemessage
# 190 "data/maps/Route104/scripts.pory"
	delay 30
# 191 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 192 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 193 "data/maps/Route104/scripts.pory"
	waitfanfare
# 194 "data/maps/Route104/scripts.pory"
	closemessage
# 195 "data/maps/Route104/scripts.pory"
	delay 30
# 196 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 197 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerFaceRival
# 198 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalWalkSlowLeft
# 199 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanHowsYourPokedex, MSGBOX_DEFAULT
# 200 "data/maps/Route104/scripts.pory"
	closemessage
# 201 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 202 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalApproachPlayer
# 203 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 204 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_RIVAL
# 205 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanDoingGreatLetsBattle, MSGBOX_YESNO
# 206 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleBrendan
# 207 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 208 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RestoreMusic
# 209 "data/maps/Route104/scripts.pory"
	releaseall
# 210 "data/maps/Route104/scripts.pory"
	end
# 211 "data/maps/Route104/scripts.pory"

# 212 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanAskToBattle::
# 213 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanLetsBattle, MSGBOX_YESNO
# 214 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleBrendan
# 215 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 216 "data/maps/Route104/scripts.pory"
	releaseall
# 217 "data/maps/Route104/scripts.pory"
	end
# 218 "data/maps/Route104/scripts.pory"

# 219 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendan::
# 220 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanIntro, MSGBOX_DEFAULT
# 221 "data/maps/Route104/scripts.pory"
	switch VAR_STARTER_MON
# 222 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_BattleBrendanTreecko
# 223 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_BattleBrendanTorchic
# 224 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_BattleBrendanMudkip
# 225 "data/maps/Route104/scripts.pory"
	end
# 226 "data/maps/Route104/scripts.pory"

# 227 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanDefeated::
# 228 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanPostBattle, MSGBOX_DEFAULT
# 229 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route104_EventScript_RestoreMusic
# 230 "data/maps/Route104/scripts.pory"
	releaseall
# 231 "data/maps/Route104/scripts.pory"
	end
# 232 "data/maps/Route104/scripts.pory"

# 233 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanTreecko::
# 234 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, Route104_Text_BrendanDefeat
# 235 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 236 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 237 "data/maps/Route104/scripts.pory"
	end
# 238 "data/maps/Route104/scripts.pory"

# 239 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanTorchic::
# 240 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, Route104_Text_BrendanDefeat
# 241 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 242 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 243 "data/maps/Route104/scripts.pory"
	end
# 244 "data/maps/Route104/scripts.pory"

# 245 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanMudkip::
# 246 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, Route104_Text_BrendanDefeat
# 247 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 248 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 249 "data/maps/Route104/scripts.pory"
	end
# 250 "data/maps/Route104/scripts.pory"

# 251 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBackUp:
# 252 "data/maps/Route104/scripts.pory"
	lock_facing_direction
# 253 "data/maps/Route104/scripts.pory"
	walk_down
# 254 "data/maps/Route104/scripts.pory"
	unlock_facing_direction
# 255 "data/maps/Route104/scripts.pory"
	step_end
# 256 "data/maps/Route104/scripts.pory"

# 257 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalExitBrineysCottage:
# 258 "data/maps/Route104/scripts.pory"
	walk_down
# 259 "data/maps/Route104/scripts.pory"
	step_end
# 260 "data/maps/Route104/scripts.pory"

# 261 "data/maps/Route104/scripts.pory"
Route104_EventScript_ExpertF::
# 262 "data/maps/Route104/scripts.pory"
	lock
# 263 "data/maps/Route104/scripts.pory"
	faceplayer
# 264 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104, Route104_EventScript_ReceivedBerry
# 265 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PlantBerriesInSoilTakeThis, MSGBOX_DEFAULT
# 266 "data/maps/Route104/scripts.pory"
	giveitem ITEM_CHESTO_BERRY
# 267 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 268 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104
# 269 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 270 "data/maps/Route104/scripts.pory"
	release
# 271 "data/maps/Route104/scripts.pory"
	end
# 272 "data/maps/Route104/scripts.pory"

# 273 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBerry::
# 274 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 275 "data/maps/Route104/scripts.pory"
	release
# 276 "data/maps/Route104/scripts.pory"
	end
# 277 "data/maps/Route104/scripts.pory"

# 278 "data/maps/Route104/scripts.pory"
Route104_EventScript_WhiteHerbFlorist::
# 279 "data/maps/Route104/scripts.pory"
	lock
# 280 "data/maps/Route104/scripts.pory"
	faceplayer
# 281 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_WHITE_HERB, Route104_EventScript_ReceivedWhiteHerb
# 282 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DontNeedThisTakeIt, MSGBOX_DEFAULT
# 283 "data/maps/Route104/scripts.pory"
	giveitem ITEM_WHITE_HERB
# 284 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 285 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_WHITE_HERB
# 286 "data/maps/Route104/scripts.pory"
	release
# 287 "data/maps/Route104/scripts.pory"
	end
# 288 "data/maps/Route104/scripts.pory"

# 289 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedWhiteHerb::
# 290 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_FlowerShopSellingSaplings, MSGBOX_DEFAULT
# 291 "data/maps/Route104/scripts.pory"
	release
# 292 "data/maps/Route104/scripts.pory"
	end
# 293 "data/maps/Route104/scripts.pory"

# 294 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl1::
# 295 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrineyLivesInSeasideCottage, MSGBOX_NPC
# 296 "data/maps/Route104/scripts.pory"
	end
# 297 "data/maps/Route104/scripts.pory"

# 298 "data/maps/Route104/scripts.pory"
Route104_EventScript_BugCatcher::
# 299 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WhatsItLikeAtBottomOfSea, MSGBOX_SIGN
# 300 "data/maps/Route104/scripts.pory"
	end
# 301 "data/maps/Route104/scripts.pory"

# 302 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrineysCottageSign::
# 303 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MrBrineysCottage, MSGBOX_SIGN
# 304 "data/maps/Route104/scripts.pory"
	end
# 305 "data/maps/Route104/scripts.pory"

# 306 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignPetalburg::
# 307 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignPetalburg, MSGBOX_SIGN
# 308 "data/maps/Route104/scripts.pory"
	end
# 309 "data/maps/Route104/scripts.pory"

# 310 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignRustboro::
# 311 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignRustboro, MSGBOX_SIGN
# 312 "data/maps/Route104/scripts.pory"
	end
# 313 "data/maps/Route104/scripts.pory"

# 314 "data/maps/Route104/scripts.pory"
Route104_EventScript_FlowerShopSign::
# 315 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PrettyPetalFlowShop, MSGBOX_SIGN
# 316 "data/maps/Route104/scripts.pory"
	end
# 317 "data/maps/Route104/scripts.pory"

# 318 "data/maps/Route104/scripts.pory"
Route104_EventScript_TrainerTipsDoubleBattles::
# 319 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainerTipsDoubleBattles, MSGBOX_SIGN
# 320 "data/maps/Route104/scripts.pory"
	end
# 321 "data/maps/Route104/scripts.pory"

# 322 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy1::
# 323 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ThrowBallAtWeakenedPokemon, MSGBOX_NPC
# 324 "data/maps/Route104/scripts.pory"
	end
# 325 "data/maps/Route104/scripts.pory"

# 326 "data/maps/Route104/scripts.pory"
Route104_EventScript_Woman::
# 327 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_OnlyThrowBallAtWildPokemon, MSGBOX_NPC
# 328 "data/maps/Route104/scripts.pory"
	end
# 329 "data/maps/Route104/scripts.pory"

# 330 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy2::
# 331 "data/maps/Route104/scripts.pory"
	lock
# 332 "data/maps/Route104/scripts.pory"
	faceplayer
# 333 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_BULLET_SEED, Route104_EventScript_ReceivedBulletSeed
# 334 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LikeFillingMouthWithSeedsTakeThis, MSGBOX_DEFAULT
# 335 "data/maps/Route104/scripts.pory"
	giveitem ITEM_TM_BULLET_SEED
# 336 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 337 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULLET_SEED
# 338 "data/maps/Route104/scripts.pory"
	release
# 339 "data/maps/Route104/scripts.pory"
	end
# 340 "data/maps/Route104/scripts.pory"

# 341 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBulletSeed::
# 342 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TMsAreOneTimeUse, MSGBOX_DEFAULT
# 343 "data/maps/Route104/scripts.pory"
	release
# 344 "data/maps/Route104/scripts.pory"
	end
# 345 "data/maps/Route104/scripts.pory"

# 346 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl2::
# 347 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ImNotATrainer, MSGBOX_NPC
# 348 "data/maps/Route104/scripts.pory"
	end
# 349 "data/maps/Route104/scripts.pory"

# 350 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewford::
# 351 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_R104, MAP_ROUTE104, 0
# 352 "data/maps/Route104/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE104, 0
# 353 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BRINEY_R104, Route104_Movement_BrineyBoardBoat
# 354 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 355 "data/maps/Route104/scripts.pory"
	removeobject LOCALID_BRINEY_R104
# 356 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerBoardBoat
# 357 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 358 "data/maps/Route104/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 359 "data/maps/Route104/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 360 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewfordNoCall
# 361 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewfordDadCalls
# 362 "data/maps/Route104/scripts.pory"
	end
# 363 "data/maps/Route104/scripts.pory"

# 364 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordNoCall::
# 365 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewford
# 366 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewford
# 367 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 368 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 369 "data/maps/Route104/scripts.pory"

# 370 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordDadCalls::
# 371 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewfordBeforeDadCalls
# 372 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewfordBeforeDadCalls, MAP_ROUTE104
# 373 "data/maps/Route104/scripts.pory"
	waitmovement LOCALID_BOAT_R104, MAP_ROUTE104
# 374 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 375 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 376 "data/maps/Route104/scripts.pory"

# 377 "data/maps/Route104/scripts.pory"
Route104_EventScript_ArriveInDewford::
# 378 "data/maps/Route104/scripts.pory"
	delay 50
# 379 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerExitBoat
# 380 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 381 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 382 "data/maps/Route104/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 383 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerMoveForBriney
# 384 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 385 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_BRINEY_DEWFORD, 12, 8
# 386 "data/maps/Route104/scripts.pory"
	addobject LOCALID_BRINEY_DEWFORD
# 387 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 388 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 389 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, Route104_Movement_BrineyExitBoat
# 390 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 391 "data/maps/Route104/scripts.pory"
	addobject LOCALID_BOAT_DEWFORD
# 392 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 393 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 394 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 395 "data/maps/Route104/scripts.pory"
	hideobjectat LOCALID_BOAT_R104, MAP_ROUTE104
# 396 "data/maps/Route104/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 397 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 398 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN
# 399 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_BRINEY_DEWFORD
# 400 "data/maps/Route104/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 0
# 401 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LandedInDewfordDeliverLetter, MSGBOX_DEFAULT
# 402 "data/maps/Route104/scripts.pory"
	releaseall
# 403 "data/maps/Route104/scripts.pory"
	end
# 404 "data/maps/Route104/scripts.pory"

# 405 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordBeforeDadCalls:
# 406 "data/maps/Route104/scripts.pory"
	walk_down
# 407 "data/maps/Route104/scripts.pory"
	walk_down
# 408 "data/maps/Route104/scripts.pory"
	walk_down
# 409 "data/maps/Route104/scripts.pory"
	walk_down
# 410 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 411 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 412 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 413 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 414 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 415 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 416 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 417 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 418 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 419 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 420 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 421 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 422 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 424 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 425 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 426 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 427 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 428 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 429 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 430 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 431 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 432 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 433 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 434 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 435 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 436 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 437 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 438 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 439 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 440 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 441 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 442 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 443 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 444 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 445 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 446 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 448 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 449 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 451 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 452 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 453 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 454 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 455 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 456 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 457 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 458 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 459 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 460 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 461 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 462 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 463 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 464 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 465 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 466 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 467 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 468 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 469 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 470 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 471 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 472 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 473 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 474 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 475 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 476 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 477 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 478 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 479 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 480 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 481 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 482 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 483 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 484 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 485 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 486 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 487 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 488 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 489 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 490 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 491 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 492 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 493 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 494 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 495 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 496 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 497 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 498 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 499 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 500 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 501 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 502 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 503 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 504 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 505 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 506 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 507 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 508 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 509 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 510 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 511 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 512 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 513 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 514 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 515 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 516 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 517 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 518 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 519 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 520 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 521 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 522 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 523 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 524 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 525 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 526 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 527 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 528 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 529 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 530 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 531 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 532 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 533 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 534 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 535 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 536 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 537 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 538 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 539 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 540 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 541 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 542 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 543 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 544 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 545 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 546 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 547 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 548 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 549 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 550 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 551 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 552 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 553 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 554 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 555 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 556 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 557 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 558 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 559 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 560 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 561 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 562 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 563 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 564 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 565 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 566 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 567 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 568 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 569 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 570 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 571 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 572 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 573 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 574 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 575 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 576 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 577 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 578 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 579 "data/maps/Route104/scripts.pory"
	walk_right
# 580 "data/maps/Route104/scripts.pory"
	walk_right
# 581 "data/maps/Route104/scripts.pory"
	walk_down
# 582 "data/maps/Route104/scripts.pory"
	walk_down
# 583 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 584 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 585 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 586 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 587 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 588 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 589 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 590 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 591 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 592 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 593 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 594 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 595 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 596 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 597 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 598 "data/maps/Route104/scripts.pory"
	walk_down
# 599 "data/maps/Route104/scripts.pory"
	walk_down
# 600 "data/maps/Route104/scripts.pory"
	step_end
# 601 "data/maps/Route104/scripts.pory"

# 602 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewford:
# 603 "data/maps/Route104/scripts.pory"
	walk_down
# 604 "data/maps/Route104/scripts.pory"
	walk_down
# 605 "data/maps/Route104/scripts.pory"
	walk_down
# 606 "data/maps/Route104/scripts.pory"
	walk_down
# 607 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 608 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 609 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 610 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 611 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 612 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 613 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 614 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 615 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 616 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 617 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 618 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 619 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 620 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 621 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 622 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 623 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 624 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 625 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 626 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 627 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 628 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 629 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 630 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 631 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 632 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 633 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 634 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 635 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 636 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 637 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 638 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 639 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 640 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 641 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 642 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 643 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 644 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 645 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 646 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 647 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 648 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 649 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 650 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 651 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 652 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 653 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 654 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 655 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 656 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 657 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 658 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 659 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 660 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 661 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 662 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 663 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 664 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 665 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 666 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 667 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 668 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 669 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 670 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 671 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 672 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 673 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 674 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 675 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 676 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 677 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 678 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 679 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 680 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 681 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 682 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 683 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 684 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 685 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 686 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 687 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 688 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 689 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 690 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 691 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 692 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 693 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 694 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 695 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 696 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 697 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 698 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 699 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 700 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 701 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 702 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 703 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 704 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 705 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 706 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 707 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 708 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 709 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 710 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 711 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 712 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 713 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 714 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 715 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 716 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 717 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 718 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 719 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 720 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 721 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 722 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 723 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 724 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 725 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 726 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 727 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 728 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 729 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 730 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 731 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 732 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 733 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 734 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 735 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 736 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 737 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 738 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 739 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 740 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 741 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 742 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 743 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 744 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 745 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 746 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 747 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 748 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 749 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 750 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 751 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 752 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 753 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 754 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 755 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 756 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 757 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 758 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 759 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 760 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 761 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 762 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 763 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 764 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 765 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 766 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 767 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 768 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 769 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 770 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 771 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 772 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 773 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 774 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 775 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 776 "data/maps/Route104/scripts.pory"
	walk_right
# 777 "data/maps/Route104/scripts.pory"
	walk_right
# 778 "data/maps/Route104/scripts.pory"
	walk_down
# 779 "data/maps/Route104/scripts.pory"
	walk_down
# 780 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 781 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 782 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 783 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 784 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 785 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 786 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 787 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 788 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 789 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 790 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 791 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 792 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 793 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 794 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 795 "data/maps/Route104/scripts.pory"
	walk_down
# 796 "data/maps/Route104/scripts.pory"
	walk_down
# 797 "data/maps/Route104/scripts.pory"
	step_end
# 798 "data/maps/Route104/scripts.pory"

# 799 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBoardBoat:
# 800 "data/maps/Route104/scripts.pory"
	walk_left
# 801 "data/maps/Route104/scripts.pory"
	walk_down
# 802 "data/maps/Route104/scripts.pory"
	walk_down
# 803 "data/maps/Route104/scripts.pory"
	step_end
# 804 "data/maps/Route104/scripts.pory"

# 805 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerExitBoat:
# 806 "data/maps/Route104/scripts.pory"
	walk_down
# 807 "data/maps/Route104/scripts.pory"
	step_end
# 808 "data/maps/Route104/scripts.pory"

# 809 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerMoveForBriney:
# 810 "data/maps/Route104/scripts.pory"
	walk_down
# 811 "data/maps/Route104/scripts.pory"
	walk_left
# 812 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_right
# 813 "data/maps/Route104/scripts.pory"
	step_end
# 814 "data/maps/Route104/scripts.pory"

# 815 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyBoardBoat:
# 816 "data/maps/Route104/scripts.pory"
	walk_down
# 817 "data/maps/Route104/scripts.pory"
	walk_down
# 818 "data/maps/Route104/scripts.pory"
	step_end
# 819 "data/maps/Route104/scripts.pory"

# 820 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyExitBoat:
# 821 "data/maps/Route104/scripts.pory"
	walk_down
# 822 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
# 823 "data/maps/Route104/scripts.pory"
	step_end
# 824 "data/maps/Route104/scripts.pory"

# 825 "data/maps/Route104/scripts.pory"
Route104_EventScript_Billy::
# 826 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_BILLY, Route104_Text_BillyIntro, Route104_Text_BillyDefeat
# 827 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
# 828 "data/maps/Route104/scripts.pory"
	end
# 829 "data/maps/Route104/scripts.pory"

# 830 "data/maps/Route104/scripts.pory"
Route104_EventScript_Haley::
# 831 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_HALEY_1, Route104_Text_HaleyIntro, Route104_Text_HaleyDefeat, Route104_EventScript_TryRegisterHaleyAfterBattle
# 832 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 833 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchHaley
# 834 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_HALEY_1
# 835 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 836 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterHaley
# 837 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 838 "data/maps/Route104/scripts.pory"
	release
# 839 "data/maps/Route104/scripts.pory"
	end
# 840 "data/maps/Route104/scripts.pory"

# 841 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaleyAfterBattle::
# 842 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 843 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 844 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaleyAfterBattle
# 845 "data/maps/Route104/scripts.pory"
	release
# 846 "data/maps/Route104/scripts.pory"
	end
# 847 "data/maps/Route104/scripts.pory"

# 848 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaleyAfterBattle::
# 849 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister2, MSGBOX_DEFAULT
# 850 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 851 "data/maps/Route104/scripts.pory"
	release
# 852 "data/maps/Route104/scripts.pory"
	end
# 853 "data/maps/Route104/scripts.pory"

# 854 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaley::
# 855 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaley
# 856 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 857 "data/maps/Route104/scripts.pory"
	release
# 858 "data/maps/Route104/scripts.pory"
	end
# 859 "data/maps/Route104/scripts.pory"

# 860 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaley::
# 861 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister1, MSGBOX_DEFAULT
# 862 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 863 "data/maps/Route104/scripts.pory"
	release
# 864 "data/maps/Route104/scripts.pory"
	end
# 865 "data/maps/Route104/scripts.pory"

# 866 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchHaley::
# 867 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_HALEY_1, Route104_Text_HaleyRematchIntro, Route104_Text_HaleyRematchDefeat
# 868 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostRematch, MSGBOX_AUTOCLOSE
# 869 "data/maps/Route104/scripts.pory"
	end
# 870 "data/maps/Route104/scripts.pory"

# 871 "data/maps/Route104/scripts.pory"
Route104_EventScript_Winston::
# 872 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_WINSTON_1, Route104_Text_WinstonIntro, Route104_Text_WinstonDefeat, Route104_EventScript_TryRegisterWinstonAfterBattle
# 873 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 874 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchWinston
# 875 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_WINSTON_1
# 876 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 877 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterWinston
# 878 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 879 "data/maps/Route104/scripts.pory"
	release
# 880 "data/maps/Route104/scripts.pory"
	end
# 881 "data/maps/Route104/scripts.pory"

# 882 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinstonAfterBattle::
# 883 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 884 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 885 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinstonAfterBattle
# 886 "data/maps/Route104/scripts.pory"
	release
# 887 "data/maps/Route104/scripts.pory"
	end
# 888 "data/maps/Route104/scripts.pory"

# 889 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinstonAfterBattle::
# 890 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister2, MSGBOX_DEFAULT
# 891 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 892 "data/maps/Route104/scripts.pory"
	release
# 893 "data/maps/Route104/scripts.pory"
	end
# 894 "data/maps/Route104/scripts.pory"

# 895 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinston::
# 896 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinston
# 897 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 898 "data/maps/Route104/scripts.pory"
	release
# 899 "data/maps/Route104/scripts.pory"
	end
# 900 "data/maps/Route104/scripts.pory"

# 901 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinston::
# 902 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister1, MSGBOX_DEFAULT
# 903 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 904 "data/maps/Route104/scripts.pory"
	release
# 905 "data/maps/Route104/scripts.pory"
	end
# 906 "data/maps/Route104/scripts.pory"

# 907 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchWinston::
# 908 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_WINSTON_1, Route104_Text_WinstonRematchIntro, Route104_Text_WinstonRematchDefeat
# 909 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostRematch, MSGBOX_AUTOCLOSE
# 910 "data/maps/Route104/scripts.pory"
	end
# 911 "data/maps/Route104/scripts.pory"

# 912 "data/maps/Route104/scripts.pory"
Route104_EventScript_Cindy::
# 913 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_CINDY_1, Route104_Text_CindyIntro, Route104_Text_CindyDefeat, Route104_EventScript_TryRegisterCindyAfterBattle
# 914 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 915 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchCindy
# 916 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_CINDY_1
# 917 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 918 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterCindy
# 919 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 920 "data/maps/Route104/scripts.pory"
	release
# 921 "data/maps/Route104/scripts.pory"
	end
# 922 "data/maps/Route104/scripts.pory"

# 923 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindyAfterBattle::
# 924 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 925 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 926 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindyAfterBattle
# 927 "data/maps/Route104/scripts.pory"
	release
# 928 "data/maps/Route104/scripts.pory"
	end
# 929 "data/maps/Route104/scripts.pory"

# 930 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindyAfterBattle::
# 931 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister2, MSGBOX_DEFAULT
# 932 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 933 "data/maps/Route104/scripts.pory"
	release
# 934 "data/maps/Route104/scripts.pory"
	end
# 935 "data/maps/Route104/scripts.pory"

# 936 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindy::
# 937 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindy
# 938 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 939 "data/maps/Route104/scripts.pory"
	release
# 940 "data/maps/Route104/scripts.pory"
	end
# 941 "data/maps/Route104/scripts.pory"

# 942 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindy::
# 943 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister1, MSGBOX_DEFAULT
# 944 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 945 "data/maps/Route104/scripts.pory"
	release
# 946 "data/maps/Route104/scripts.pory"
	end
# 947 "data/maps/Route104/scripts.pory"

# 948 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchCindy::
# 949 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_CINDY_1, Route104_Text_CindyRematchIntro, Route104_Text_CindyRematchDefeat
# 950 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostRematch, MSGBOX_AUTOCLOSE
# 951 "data/maps/Route104/scripts.pory"
	end
# 952 "data/maps/Route104/scripts.pory"

# 953 "data/maps/Route104/scripts.pory"
Route104_EventScript_Gina::
# 954 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_GINA_AND_MIA_1, Route104_Text_GinaIntro, Route104_Text_GinaDefeat
# 955 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 956 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_GinaPostBattle, MSGBOX_DEFAULT
# 957 "data/maps/Route104/scripts.pory"
	release
# 958 "data/maps/Route104/scripts.pory"
	end
# 959 "data/maps/Route104/scripts.pory"

# 960 "data/maps/Route104/scripts.pory"
Route104_EventScript_Mia::
# 961 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_GINA_AND_MIA_1, Route104_Text_MiaIntro, Route104_Text_MiaDefeat
# 962 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 963 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MiaPostBattle, MSGBOX_DEFAULT
# 964 "data/maps/Route104/scripts.pory"
	release
# 965 "data/maps/Route104/scripts.pory"
	end
# 966 "data/maps/Route104/scripts.pory"

# 967 "data/maps/Route104/scripts.pory"
Route104_EventScript_Darian::
# 968 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_DARIAN, Route104_Text_DarianIntro, Route104_Text_DarianDefeat
# 969 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DarianPostBattle, MSGBOX_AUTOCLOSE
# 970 "data/maps/Route104/scripts.pory"
	end
# 971 "data/maps/Route104/scripts.pory"

# 972 "data/maps/Route104/scripts.pory"
Route104_Text_BrineyLivesInSeasideCottage:
# 973 "data/maps/Route104/scripts.pory"
	.string "That seaside cottage is where\n"
# 974 "data/maps/Route104/scripts.pory"
	.string "Mr. Briney lives.\p"
# 975 "data/maps/Route104/scripts.pory"
	.string "He was once a mighty sailor who never\n"
# 976 "data/maps/Route104/scripts.pory"
	.string "feared the sea, however stormy.$"
# 977 "data/maps/Route104/scripts.pory"

# 978 "data/maps/Route104/scripts.pory"
Route104_Text_WhatsItLikeAtBottomOfSea:
# 979 "data/maps/Route104/scripts.pory"
	.string "The sea, huh?\p"
# 980 "data/maps/Route104/scripts.pory"
	.string "I wonder what it's like at the bottom\n"
# 981 "data/maps/Route104/scripts.pory"
	.string "of the sea?$"
# 982 "data/maps/Route104/scripts.pory"

# 983 "data/maps/Route104/scripts.pory"
Route104_Text_ThrowBallAtWeakenedPokemon:
# 984 "data/maps/Route104/scripts.pory"
	.string "If you're going to throw a Poké Ball,\n"
# 985 "data/maps/Route104/scripts.pory"
	.string "weaken the wild Pokémon first.\p"
# 986 "data/maps/Route104/scripts.pory"
	.string "It will be easier to catch if it's been\n"
# 987 "data/maps/Route104/scripts.pory"
	.string "poisoned, burned, or lulled to sleep.$"
# 988 "data/maps/Route104/scripts.pory"

# 989 "data/maps/Route104/scripts.pory"
Route104_Text_OnlyThrowBallAtWildPokemon:
# 990 "data/maps/Route104/scripts.pory"
	.string "You're a thief if you try to steal\n"
# 991 "data/maps/Route104/scripts.pory"
	.string "someone else's Pokémon.\p"
# 992 "data/maps/Route104/scripts.pory"
	.string "You should throw Poké Balls only at\n"
# 993 "data/maps/Route104/scripts.pory"
	.string "wild Pokémon.$"
# 994 "data/maps/Route104/scripts.pory"

# 995 "data/maps/Route104/scripts.pory"
Route104_Text_ImNotATrainer:
# 996 "data/maps/Route104/scripts.pory"
	.string "Oh, no, I'm not a Trainer.\p"
# 997 "data/maps/Route104/scripts.pory"
	.string "But that's right, if Trainers lock eyes,\n"
# 998 "data/maps/Route104/scripts.pory"
	.string "it's a challenge to battle.\p"
# 999 "data/maps/Route104/scripts.pory"
	.string "If you don't want to battle, stay out\n"
# 1000 "data/maps/Route104/scripts.pory"
	.string "of their sight.$"
# 1001 "data/maps/Route104/scripts.pory"

# 1002 "data/maps/Route104/scripts.pory"
Route104_Text_LikeFillingMouthWithSeedsTakeThis:
# 1003 "data/maps/Route104/scripts.pory"
	.string "I like filling my mouth with seeds,\n"
# 1004 "data/maps/Route104/scripts.pory"
	.string "then spitting them out fast!\p"
# 1005 "data/maps/Route104/scripts.pory"
	.string "You can have this, so you try it out!\p"
# 1006 "data/maps/Route104/scripts.pory"
	.string "Use it on a Pokémon, and it will learn\n"
# 1007 "data/maps/Route104/scripts.pory"
	.string "a move for firing seeds rapidly.$"
# 1008 "data/maps/Route104/scripts.pory"

# 1009 "data/maps/Route104/scripts.pory"
Route104_Text_TMsAreOneTimeUse:
# 1010 "data/maps/Route104/scripts.pory"
	.string "A word of advice!\p"
# 1011 "data/maps/Route104/scripts.pory"
	.string "A TM, Technical Machine, is good only\n"
# 1012 "data/maps/Route104/scripts.pory"
	.string "for one-time use.\p"
# 1013 "data/maps/Route104/scripts.pory"
	.string "Once you use it, it's gone.\n"
# 1014 "data/maps/Route104/scripts.pory"
	.string "Think twice before using it!$"
# 1015 "data/maps/Route104/scripts.pory"

# 1016 "data/maps/Route104/scripts.pory"
Route104_Text_DontNeedThisTakeIt:
# 1017 "data/maps/Route104/scripts.pory"
	.string "This Flower Shop started selling\n"
# 1018 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 1019 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 1020 "data/maps/Route104/scripts.pory"
	.string "shopping.\p"
# 1021 "data/maps/Route104/scripts.pory"
	.string "I don't need this White Herb anymore.\n"
# 1022 "data/maps/Route104/scripts.pory"
	.string "Would you take it, please?$"
# 1023 "data/maps/Route104/scripts.pory"

# 1024 "data/maps/Route104/scripts.pory"
Route104_Text_FlowerShopSellingSaplings:
# 1025 "data/maps/Route104/scripts.pory"
	.string "This Flower Shop started selling\n"
# 1026 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 1027 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 1028 "data/maps/Route104/scripts.pory"
	.string "shopping. Where should I put them?$"
# 1029 "data/maps/Route104/scripts.pory"

# 1030 "data/maps/Route104/scripts.pory"
Route104_Text_MrBrineysCottage:
# 1031 "data/maps/Route104/scripts.pory"
	.string "Mr. Briney's Cottage$"
# 1032 "data/maps/Route104/scripts.pory"

# 1033 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignPetalburg:
# 1034 "data/maps/Route104/scripts.pory"
	.string "Route 1O4\n"
# 1035 "data/maps/Route104/scripts.pory"
	.string "{RIGHT_ARROW} Petalburg City$"
# 1036 "data/maps/Route104/scripts.pory"

# 1037 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignRustboro:
# 1038 "data/maps/Route104/scripts.pory"
	.string "Route 1O4\n"
# 1039 "data/maps/Route104/scripts.pory"
	.string "{UP_ARROW} Rustboro City$"
# 1040 "data/maps/Route104/scripts.pory"

# 1041 "data/maps/Route104/scripts.pory"
Route104_Text_PrettyPetalFlowShop:
# 1042 "data/maps/Route104/scripts.pory"
	.string "Pretty Petal Flower Shop$"
# 1043 "data/maps/Route104/scripts.pory"

# 1044 "data/maps/Route104/scripts.pory"
Route104_Text_TrainerTipsDoubleBattles:
# 1045 "data/maps/Route104/scripts.pory"
	.string "Trainer Tips\p"
# 1046 "data/maps/Route104/scripts.pory"
	.string "In the Hoenn region there are pairs\n"
# 1047 "data/maps/Route104/scripts.pory"
	.string "of Trainers who challenge others\l"
# 1048 "data/maps/Route104/scripts.pory"
	.string "for 2-on-2 Pokémon battles called\l"
# 1049 "data/maps/Route104/scripts.pory"
	.string "Double Battles.\p"
# 1050 "data/maps/Route104/scripts.pory"
	.string "In a Double Battle, the Trainer must\n"
# 1051 "data/maps/Route104/scripts.pory"
	.string "send out two Pokémon, the one at the\l"
# 1052 "data/maps/Route104/scripts.pory"
	.string "left of the list and the top one.\l"
# 1053 "data/maps/Route104/scripts.pory"
	.string "Watch how Pokémon are lined up.$"
# 1054 "data/maps/Route104/scripts.pory"

# 1055 "data/maps/Route104/scripts.pory"
Route104_Text_MayWeShouldRegister:
# 1056 "data/maps/Route104/scripts.pory"
	.string "May: Oh, hi, {PLAYER}{KUN}!\p"
# 1057 "data/maps/Route104/scripts.pory"
	.string "Devon upgraded your PokéNav with\n"
# 1058 "data/maps/Route104/scripts.pory"
	.string "the Match Call system, huh?\p"
# 1059 "data/maps/Route104/scripts.pory"
	.string "We should register each other so we\n"
# 1060 "data/maps/Route104/scripts.pory"
	.string "can get in contact anytime.$"
# 1061 "data/maps/Route104/scripts.pory"

# 1062 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredMay:
# 1063 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered May\n"
# 1064 "data/maps/Route104/scripts.pory"
	.string "in the PokéNav.$"
# 1065 "data/maps/Route104/scripts.pory"

# 1066 "data/maps/Route104/scripts.pory"
Route104_Text_MayHowsYourPokedex:
# 1067 "data/maps/Route104/scripts.pory"
	.string "May: Oh, by the way, {PLAYER}{KUN},\n"
# 1068 "data/maps/Route104/scripts.pory"
	.string "how's your Pokédex coming along?$"
# 1069 "data/maps/Route104/scripts.pory"

# 1070 "data/maps/Route104/scripts.pory"
Route104_Text_MayMinesDecentLetsBattle:
# 1071 "data/maps/Route104/scripts.pory"
	.string "Mine's looking pretty decent.\n"
# 1072 "data/maps/Route104/scripts.pory"
	.string "So…\l"
# 1073 "data/maps/Route104/scripts.pory"
	.string "How about a little battle?$"
# 1074 "data/maps/Route104/scripts.pory"

# 1075 "data/maps/Route104/scripts.pory"
Route104_Text_MayHaventRaisedPokemon:
# 1076 "data/maps/Route104/scripts.pory"
	.string "May: Oh, what's the matter?\p"
# 1077 "data/maps/Route104/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 1078 "data/maps/Route104/scripts.pory"
	.string "Pokémon very much?\p"
# 1079 "data/maps/Route104/scripts.pory"
	.string "That's not very good for a Trainer!$"
# 1080 "data/maps/Route104/scripts.pory"

# 1081 "data/maps/Route104/scripts.pory"
Route104_Text_MayLetsBattle:
# 1082 "data/maps/Route104/scripts.pory"
	.string "May: So, what do you think?\n"
# 1083 "data/maps/Route104/scripts.pory"
	.string "How about a little battle here?$"
# 1084 "data/maps/Route104/scripts.pory"

# 1085 "data/maps/Route104/scripts.pory"
Route104_Text_MayIntro:
# 1086 "data/maps/Route104/scripts.pory"
	.string "May: You just became a Trainer,\n"
# 1087 "data/maps/Route104/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 1088 "data/maps/Route104/scripts.pory"

# 1089 "data/maps/Route104/scripts.pory"
Route104_Text_MayDefeat:
# 1090 "data/maps/Route104/scripts.pory"
	.string "Yikes!\n"
# 1091 "data/maps/Route104/scripts.pory"
	.string "You're better than I expected!$"
# 1092 "data/maps/Route104/scripts.pory"

# 1093 "data/maps/Route104/scripts.pory"
Route104_Text_MayPostBattle:
# 1094 "data/maps/Route104/scripts.pory"
	.string "May: I can tell you've gotten pretty\n"
# 1095 "data/maps/Route104/scripts.pory"
	.string "good with the way you handle Pokémon.\p"
# 1096 "data/maps/Route104/scripts.pory"
	.string "But instead of only making them\n"
# 1097 "data/maps/Route104/scripts.pory"
	.string "battle, you should be like Mr. Briney.\p"
# 1098 "data/maps/Route104/scripts.pory"
	.string "It's important to become friends with\n"
# 1099 "data/maps/Route104/scripts.pory"
	.string "Pokémon, too.$"
# 1100 "data/maps/Route104/scripts.pory"

# 1101 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanWeShouldRegister:
# 1102 "data/maps/Route104/scripts.pory"
	.string "Brendan: Oh, hey, {PLAYER}!\p"
# 1103 "data/maps/Route104/scripts.pory"
	.string "Cool, you had Devon install the Match\n"
# 1104 "data/maps/Route104/scripts.pory"
	.string "Call system on your PokéNav!\p"
# 1105 "data/maps/Route104/scripts.pory"
	.string "Let's register each other in our\n"
# 1106 "data/maps/Route104/scripts.pory"
	.string "PokéNavs so we can keep in touch.$"
# 1107 "data/maps/Route104/scripts.pory"

# 1108 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredBrendan:
# 1109 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered Brendan\n"
# 1110 "data/maps/Route104/scripts.pory"
	.string "in the PokéNav.$"
# 1111 "data/maps/Route104/scripts.pory"

# 1112 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanHowsYourPokedex:
# 1113 "data/maps/Route104/scripts.pory"
	.string "Brendan: {PLAYER}, how's your Pokédex?\n"
# 1114 "data/maps/Route104/scripts.pory"
	.string "Have you filled in any pages yet?$"
# 1115 "data/maps/Route104/scripts.pory"

# 1116 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDoingGreatLetsBattle:
# 1117 "data/maps/Route104/scripts.pory"
	.string "Me, I'm doing great!\p"
# 1118 "data/maps/Route104/scripts.pory"
	.string "Want to check out how good I am with\n"
# 1119 "data/maps/Route104/scripts.pory"
	.string "a battle?$"
# 1120 "data/maps/Route104/scripts.pory"

# 1121 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanNoConfidence:
# 1122 "data/maps/Route104/scripts.pory"
	.string "Brendan: What's the matter? Don't have\n"
# 1123 "data/maps/Route104/scripts.pory"
	.string "any confidence in your Pokémon?$"
# 1124 "data/maps/Route104/scripts.pory"

# 1125 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanLetsBattle:
# 1126 "data/maps/Route104/scripts.pory"
	.string "Brendan: What's up?\n"
# 1127 "data/maps/Route104/scripts.pory"
	.string "Want to have a battle with me?$"
# 1128 "data/maps/Route104/scripts.pory"

# 1129 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanIntro:
# 1130 "data/maps/Route104/scripts.pory"
	.string "Brendan: I know you just became\n"
# 1131 "data/maps/Route104/scripts.pory"
	.string "a Trainer, but I won't go easy!$"
# 1132 "data/maps/Route104/scripts.pory"

# 1133 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDefeat:
# 1134 "data/maps/Route104/scripts.pory"
	.string "Hmm…\n"
# 1135 "data/maps/Route104/scripts.pory"
	.string "You're pretty good.$"
# 1136 "data/maps/Route104/scripts.pory"

# 1137 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanPostBattle:
# 1138 "data/maps/Route104/scripts.pory"
	.string "Brendan: You've gotten pretty decent\n"
# 1139 "data/maps/Route104/scripts.pory"
	.string "at handling Pokémon.\p"
# 1140 "data/maps/Route104/scripts.pory"
	.string "But, you know, you shouldn't just be\n"
# 1141 "data/maps/Route104/scripts.pory"
	.string "making Pokémon battle.\p"
# 1142 "data/maps/Route104/scripts.pory"
	.string "Like Mr. Briney, it's important to\n"
# 1143 "data/maps/Route104/scripts.pory"
	.string "become friends with your Pokémon.$"

Route104_EventScript_Ivan2::
# 1146 "data/maps/Route104/scripts.pory"
	msgbox Route104_EventScript_Ivan2_Text_0, MSGBOX_AUTOCLOSE
# 1147 "data/maps/Route104/scripts.pory"
	givemon SPECIES_MAGIKARP, 0, ITEM_MYSTIC_WATER, ITEM_CHERISH_BALL, NATURE_JOLLY, 0, MON_MALE, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 0, 31, MOVE_SPLASH, MOVE_BOUNCE, MOVE_NONE, MOVE_NONE, TRUE
# 1148 "data/maps/Route104/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MAGIKARP
# 1149 "data/maps/Route104/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MAGIKARP
# 1150 "data/maps/Route104/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1151 "data/maps/Route104/scripts.pory"
	message Route104_EventScript_Ivan2_Text_1
# 1152 "data/maps/Route104/scripts.pory"
	waitmessage
# 1153 "data/maps/Route104/scripts.pory"
	waitfanfare
# 1154 "data/maps/Route104/scripts.pory"
	call Common_EventScript_Nickname
# 1155 "data/maps/Route104/scripts.pory"
	giveitem ITEM_TM_BOUNCE, 1
# 1156 "data/maps/Route104/scripts.pory"
	setflag FLAG_ROUTE_104_BOSS_DEFEATED
# 1157 "data/maps/Route104/scripts.pory"
	msgbox Route104_EventScript_Ivan2_Text_2, MSGBOX_NPC
	return


Route104_EventScript_Ivan::
# 1162 "data/maps/Route104/scripts.pory"
	lock
# 1163 "data/maps/Route104/scripts.pory"
	faceplayer
# 1164 "data/maps/Route104/scripts.pory"
	checktrainerflag TRAINER_BILLY
	goto_if 1, Route104_EventScript_Ivan_5
Route104_EventScript_Ivan_3:
# 1177 "data/maps/Route104/scripts.pory"
	msgbox Route104_EventScript_Ivan_Text_2, MSGBOX_NPC
Route104_EventScript_Ivan_1:
# 1179 "data/maps/Route104/scripts.pory"
	release
	end

Route104_EventScript_Ivan_2:
# 1170 "data/maps/Route104/scripts.pory"
	setflag B_FLAG_NO_BAG_USE
# 1171 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_IVAN, Route104_EventScript_Ivan_Text_0, Route104_EventScript_Ivan_Text_1, Route104_EventScript_Ivan2
# 1172 "data/maps/Route104/scripts.pory"
	clearflag B_FLAG_NO_BAG_USE
# 1173 "data/maps/Route104/scripts.pory"
	msgbox Route104_EventScript_Ivan2_Text_2
	goto Route104_EventScript_Ivan_1

Route104_EventScript_Ivan_4:
# 1166 "data/maps/Route104/scripts.pory"
	checktrainerflag TRAINER_CINDY_1
	goto_if 1, Route104_EventScript_Ivan_9
	goto Route104_EventScript_Ivan_3

Route104_EventScript_Ivan_5:
# 1165 "data/maps/Route104/scripts.pory"
	checktrainerflag TRAINER_DARIAN
	goto_if 1, Route104_EventScript_Ivan_4
	goto Route104_EventScript_Ivan_3

Route104_EventScript_Ivan_8:
# 1168 "data/maps/Route104/scripts.pory"
	checktrainerflag TRAINER_HALEY_1
	goto_if 1, Route104_EventScript_Ivan_12
	goto Route104_EventScript_Ivan_3

Route104_EventScript_Ivan_9:
# 1167 "data/maps/Route104/scripts.pory"
	checktrainerflag TRAINER_WINSTON_1
	goto_if 1, Route104_EventScript_Ivan_8
	goto Route104_EventScript_Ivan_3

Route104_EventScript_Ivan_12:
# 1169 "data/maps/Route104/scripts.pory"
	checktrainerflag TRAINER_GINA_AND_MIA_1
	goto_if 1, Route104_EventScript_Ivan_2
	goto Route104_EventScript_Ivan_3


Route104_EventScript_Ivan2_Text_0:
# 1146 "data/maps/Route104/scripts.pory"
	.string "Ok, fine! I lost! You can have my prized possesions…$"

Route104_EventScript_Ivan2_Text_1:
# 1151 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} received Magikarp!$"

Route104_EventScript_Ivan2_Text_2:
# 1157 "data/maps/Route104/scripts.pory"
	.string "Bouncy! Bouncy! Bouncy!\pBounce is the strongest Water-type\nmove!$"

Route104_EventScript_Ivan_Text_0:
# 1171 "data/maps/Route104/scripts.pory"
	.string "Why keep it a secret?\pI'm the Water Pokémon expert!\pHuh?\nYou don't know me?$"

Route104_EventScript_Ivan_Text_1:
# 1171 "data/maps/Route104/scripts.pory"
	.string "I thought I wasn't too bad,\nif I may say so, but I guess not\p… Bleah…$"

Route104_EventScript_Ivan_Text_2:
# 1177 "data/maps/Route104/scripts.pory"
	.string "I'm the Water Pokémon expert!\pBeat every trainer here before\napproaching me, little kiddo!$"
