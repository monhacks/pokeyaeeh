# 1 "data/maps/PetalburgCity/scripts.pory"

# 2 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_BOY, 2
# 3 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_SCOTT, 5
# 4 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_BIRCH, 7
# 5 "data/maps/PetalburgCity/scripts.pory"

# 6 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_MapScripts::
# 7 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
# 8 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_OnFrame
# 9 "data/maps/PetalburgCity/scripts.pory"
	.byte 0
# 10 "data/maps/PetalburgCity/scripts.pory"

# 11 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnTransition:
# 12 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 13 "data/maps/PetalburgCity/scripts.pory"
	call_if_set FLAG_BADGE04_GET, PetalburgCity_EventScript_RemoveGymGuy
# 14 "data/maps/PetalburgCity/scripts.pory"
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_EventScript_SetVar
# 15 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 1, PetalburgCity_EventScript_HideMapNamePopup
# 16 "data/maps/PetalburgCity/scripts.pory"
	end
# 17 "data/maps/PetalburgCity/scripts.pory"

# 18 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnFrame:
# 19 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 1, PetalburgCity_EventScript_ProfBirch
# 20 "data/maps/PetalburgCity/scripts.pory"
	.2byte 0
# 21 "data/maps/PetalburgCity/scripts.pory"

# 22 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_SetVar::
# 23 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 6
# 24 "data/maps/PetalburgCity/scripts.pory"
	return
# 25 "data/maps/PetalburgCity/scripts.pory"

# 26 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_RemoveGymGuy::
# 27 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_GYM_GUY
# 28 "data/maps/PetalburgCity/scripts.pory"
	return
# 29 "data/maps/PetalburgCity/scripts.pory"

# 30 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_HideMapNamePopup::
# 31 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 32 "data/maps/PetalburgCity/scripts.pory"
	return
# 33 "data/maps/PetalburgCity/scripts.pory"

# 34 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 35 "data/maps/PetalburgCity/scripts.pory"
	lock
# 36 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 37 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 38 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 39 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_BOY, Common_Movement_FaceOriginalDirection
# 40 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 41 "data/maps/PetalburgCity/scripts.pory"
	release
# 42 "data/maps/PetalburgCity/scripts.pory"
	end
# 43 "data/maps/PetalburgCity/scripts.pory"

# 44 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 45 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 46 "data/maps/PetalburgCity/scripts.pory"
	end
# 47 "data/maps/PetalburgCity/scripts.pory"

# 48 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 49 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 50 "data/maps/PetalburgCity/scripts.pory"
	end
# 51 "data/maps/PetalburgCity/scripts.pory"

# 52 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 53 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 54 "data/maps/PetalburgCity/scripts.pory"
	end
# 55 "data/maps/PetalburgCity/scripts.pory"

# 56 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 57 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 58 "data/maps/PetalburgCity/scripts.pory"
	end
# 59 "data/maps/PetalburgCity/scripts.pory"

# 60 "data/maps/PetalburgCity/scripts.pory"
@ Unused
# 61 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48::
# 62 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 63 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 64 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 65 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 66 "data/maps/PetalburgCity/scripts.pory"

# 67 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 68 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 69 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 70 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 71 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 10
# 72 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 73 "data/maps/PetalburgCity/scripts.pory"
	end
# 74 "data/maps/PetalburgCity/scripts.pory"

# 75 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 76 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 77 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 78 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 79 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 11
# 80 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 81 "data/maps/PetalburgCity/scripts.pory"
	end
# 82 "data/maps/PetalburgCity/scripts.pory"

# 83 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 84 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 85 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 86 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 87 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 12
# 88 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 89 "data/maps/PetalburgCity/scripts.pory"
	end
# 90 "data/maps/PetalburgCity/scripts.pory"

# 91 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 92 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 93 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 94 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 95 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 13
# 96 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 97 "data/maps/PetalburgCity/scripts.pory"
	end
# 98 "data/maps/PetalburgCity/scripts.pory"

# 99 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 100 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 101 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 102 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 103 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_ExclamationMark
# 104 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 105 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_Delay48
# 106 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 107 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
# 108 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 109 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 110 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 111 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 112 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 113 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 114 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 115 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 116 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 117 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 118 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 119 "data/maps/PetalburgCity/scripts.pory"
	giveitem ITEM_TM_TRAILBLAZE
# 120 "data/maps/PetalburgCity/scripts.pory"
	giveitem ITEM_TM_FLAME_CHARGE
# 121 "data/maps/PetalburgCity/scripts.pory"
	giveitem ITEM_TM_CHILLING_WATER
# 122 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 123 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 124 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 125 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 126 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 127 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 128 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 129 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 130 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 131 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 132 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 133 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 134 "data/maps/PetalburgCity/scripts.pory"
	end
# 135 "data/maps/PetalburgCity/scripts.pory"

# 136 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 137 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 138 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit0
# 139 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 140 "data/maps/PetalburgCity/scripts.pory"
	return
# 141 "data/maps/PetalburgCity/scripts.pory"

# 142 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 143 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 144 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit1
# 145 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 146 "data/maps/PetalburgCity/scripts.pory"
	return
# 147 "data/maps/PetalburgCity/scripts.pory"

# 148 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 149 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 150 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit2
# 151 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 152 "data/maps/PetalburgCity/scripts.pory"
	return
# 153 "data/maps/PetalburgCity/scripts.pory"

# 154 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 155 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 156 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit3
# 157 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 158 "data/maps/PetalburgCity/scripts.pory"
	return
# 159 "data/maps/PetalburgCity/scripts.pory"

# 160 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymGuy::
# 161 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymLeaderIsNotHere, MSGBOX_NPC
# 162 "data/maps/PetalburgCity/scripts.pory"
	end
# 163 "data/maps/PetalburgCity/scripts.pory"

# 164 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 165 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 166 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 167 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 168 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 169 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 170 "data/maps/PetalburgCity/scripts.pory"

# 171 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
# 172 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 173 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 174 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 175 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 176 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 177 "data/maps/PetalburgCity/scripts.pory"

# 178 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 179 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 180 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 181 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 182 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 183 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 184 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 185 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 186 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 187 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 188 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 189 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 190 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 191 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 192 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 193 "data/maps/PetalburgCity/scripts.pory"

# 194 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 195 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 197 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 198 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 199 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 200 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 201 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 202 "data/maps/PetalburgCity/scripts.pory"

# 203 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 204 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 205 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 206 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 207 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 208 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 209 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 210 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 211 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 212 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 213 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 214 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 215 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 216 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 217 "data/maps/PetalburgCity/scripts.pory"

# 218 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 219 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 220 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 221 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 222 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 223 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 224 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 225 "data/maps/PetalburgCity/scripts.pory"

# 226 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 227 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 228 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 229 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 230 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 231 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 232 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 233 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 234 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 235 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 236 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 237 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 238 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 239 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 240 "data/maps/PetalburgCity/scripts.pory"

# 241 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 242 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 243 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 244 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 245 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 246 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 247 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 248 "data/maps/PetalburgCity/scripts.pory"

# 249 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 250 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 251 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 252 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 253 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 254 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 255 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 256 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 257 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 258 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 259 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 260 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 261 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 262 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 263 "data/maps/PetalburgCity/scripts.pory"

# 264 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 265 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 266 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 267 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 268 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 269 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 270 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 271 "data/maps/PetalburgCity/scripts.pory"

# 272 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 273 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 274 "data/maps/PetalburgCity/scripts.pory"
	end
# 275 "data/maps/PetalburgCity/scripts.pory"

# 276 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 277 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our Wally gone?\p"
# 278 "data/maps/PetalburgCity/scripts.pory"
	.string "We have to leave for Verdanturf Town\n"
# 279 "data/maps/PetalburgCity/scripts.pory"
	.string "very soon…$"
# 280 "data/maps/PetalburgCity/scripts.pory"

# 281 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 282 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 283 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie Trainer?\p"
# 284 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what Pokémon Trainers\n"
# 285 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 286 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of Gym\n"
# 287 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 288 "data/maps/PetalburgCity/scripts.pory"

# 289 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 290 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is Petalburg City's Gym.$"
# 291 "data/maps/PetalburgCity/scripts.pory"

# 292 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 293 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the Gym's sign. Look for it\n"
# 294 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a Gym.$"
# 295 "data/maps/PetalburgCity/scripts.pory"

# 296 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 297 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
# 298 "data/maps/PetalburgCity/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 299 "data/maps/PetalburgCity/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 300 "data/maps/PetalburgCity/scripts.pory"
	.string "struggling with fear…\p"
# 301 "data/maps/PetalburgCity/scripts.pory"
	.string "What do you see reflected in your face?$"
# 302 "data/maps/PetalburgCity/scripts.pory"

# 303 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 304 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six Pokémon.\n"
# 305 "data/maps/PetalburgCity/scripts.pory"
	.string "If you catch another one…\p"
# 306 "data/maps/PetalburgCity/scripts.pory"
	.string "It is automatically sent to a Storage\n"
# 307 "data/maps/PetalburgCity/scripts.pory"
	.string "Box over a PC connection.$"
# 308 "data/maps/PetalburgCity/scripts.pory"

# 309 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign:
# 310 "data/maps/PetalburgCity/scripts.pory"
	.string "Petalburg City Pokémon Gym\n"
# 311 "data/maps/PetalburgCity/scripts.pory"
	.string "Leader: Chrizz\l"
# 312 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 313 "data/maps/PetalburgCity/scripts.pory"

# 314 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 315 "data/maps/PetalburgCity/scripts.pory"
	.string "Petalburg City\n"
# 316 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 317 "data/maps/PetalburgCity/scripts.pory"

# 318 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 319 "data/maps/PetalburgCity/scripts.pory"
	.string "Wally's House$"
# 320 "data/maps/PetalburgCity/scripts.pory"

# 321 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 322 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
# 323 "data/maps/PetalburgCity/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 324 "data/maps/PetalburgCity/scripts.pory"
	.string "dressed, are you a Pokémon Trainer?$"
# 325 "data/maps/PetalburgCity/scripts.pory"

# 326 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 327 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
# 328 "data/maps/PetalburgCity/scripts.pory"
	.string "Well, maybe not.\n"
# 329 "data/maps/PetalburgCity/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 330 "data/maps/PetalburgCity/scripts.pory"
	.string "You're either a rookie Trainer,\n"
# 331 "data/maps/PetalburgCity/scripts.pory"
	.string "or maybe you're just an ordinary kid.\p"
# 332 "data/maps/PetalburgCity/scripts.pory"
	.string "These may be of help for you, then.$"
# 333 "data/maps/PetalburgCity/scripts.pory"

# 334 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 335 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
# 336 "data/maps/PetalburgCity/scripts.pory"
	.string "talented Trainers.\p"
# 337 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm sorry to have taken your time.\p"
# 338 "data/maps/PetalburgCity/scripts.pory"
	.string "Best of luck, newbie!$"
# 339 "data/maps/PetalburgCity/scripts.pory"

# 340 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymLeaderIsNotHere:
# 341 "data/maps/PetalburgCity/scripts.pory"
	.string "Sorry, kiddo.\n"
# 342 "data/maps/PetalburgCity/scripts.pory"
	.string "The Gym Leader will be away for a while.\p"
# 343 "data/maps/PetalburgCity/scripts.pory"
	.string "He's attending a conferance in Kalos.\p"
# 344 "data/maps/PetalburgCity/scripts.pory"
	.string "Til then, how about you go and try\n"
# 345 "data/maps/PetalburgCity/scripts.pory"
	.string "challenging other gyms?$"
# 346 "data/maps/PetalburgCity/scripts.pory"

# 347 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ProfBirchUnused:: @ for the dex
# 348 "data/maps/PetalburgCity/scripts.pory"
	giveitem ITEM_VENUSAURITE, 1
# 349 "data/maps/PetalburgCity/scripts.pory"
	giveitem ITEM_CHARIZARDITE_X, 1
# 350 "data/maps/PetalburgCity/scripts.pory"
	giveitem ITEM_CHARIZARDITE_Y, 1
# 351 "data/maps/PetalburgCity/scripts.pory"
	giveitem ITEM_BLASTOISINITE, 1
# 352 "data/maps/PetalburgCity/scripts.pory"
	giveitem ITEM_SCEPTILITE, 1
# 353 "data/maps/PetalburgCity/scripts.pory"
	giveitem ITEM_BLAZIKENITE, 1
# 354 "data/maps/PetalburgCity/scripts.pory"
	giveitem ITEM_SWAMPERTITE, 1
# 355 "data/maps/PetalburgCity/scripts.pory"
	giveitem ITEM_RILLABOOMITE, 1
# 356 "data/maps/PetalburgCity/scripts.pory"
	giveitem ITEM_CINDERACITE, 1
# 357 "data/maps/PetalburgCity/scripts.pory"
	giveitem ITEM_INTELEONITE, 1
# 358 "data/maps/PetalburgCity/scripts.pory"
	end

PetalburgCity_EventScript_ProfBirch::
# 362 "data/maps/PetalburgCity/scripts.pory"
	lock
# 363 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_BIRCH
# 364 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_BIRCH, 15, 15
# 365 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_BIRCH, ProfBirch_Movement_WalkUp1
# 366 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 367 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 368 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 369 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 370 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_Delay48
# 371 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 372 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_BIRCH, ProfBirch_Movement_WalkUp4
# 373 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 374 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_ProfBirch_Text_0, MSGBOX_AUTOCLOSE
# 382 "data/maps/PetalburgCity/scripts.pory"
	giveitem ITEM_MEGA_BRACELET, 1
# 383 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_ProfBirch_Text_1, MSGBOX_DEFAULT
# 384 "data/maps/PetalburgCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 385 "data/maps/PetalburgCity/scripts.pory"
	message PetalburgCity_EventScript_ProfBirch_Text_2
# 386 "data/maps/PetalburgCity/scripts.pory"
	waitfanfare
# 387 "data/maps/PetalburgCity/scripts.pory"
	additem ITEM_VENUSAURITE, 1
# 388 "data/maps/PetalburgCity/scripts.pory"
	additem ITEM_CHARIZARDITE_X, 1
# 389 "data/maps/PetalburgCity/scripts.pory"
	additem ITEM_CHARIZARDITE_Y, 1
# 390 "data/maps/PetalburgCity/scripts.pory"
	additem ITEM_BLASTOISINITE, 1
# 391 "data/maps/PetalburgCity/scripts.pory"
	additem ITEM_SCEPTILITE, 1
# 392 "data/maps/PetalburgCity/scripts.pory"
	additem ITEM_BLAZIKENITE, 1
# 393 "data/maps/PetalburgCity/scripts.pory"
	additem ITEM_SWAMPERTITE, 1
# 394 "data/maps/PetalburgCity/scripts.pory"
	additem ITEM_RILLABOOMITE, 1
# 395 "data/maps/PetalburgCity/scripts.pory"
	additem ITEM_CINDERACITE, 1
# 396 "data/maps/PetalburgCity/scripts.pory"
	additem ITEM_INTELEONITE, 1
# 397 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_ProfBirch_Text_3, MSGBOX_AUTOCLOSE
# 402 "data/maps/PetalburgCity/scripts.pory"
	giveitem ITEM_POKEMON_BOX_LINK, 1
# 403 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_ProfBirch_Text_4, MSGBOX_AUTOCLOSE
# 406 "data/maps/PetalburgCity/scripts.pory"
	giveitem ITEM_HM_SURF, 1
# 407 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_ProfBirch_Text_5, MSGBOX_AUTOCLOSE
# 414 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_BIRCH, ProfBirch_Movement_WalkDown5
# 415 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 416 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_BIRCH
# 417 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 2
# 418 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 419 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_RECEIVED_HM_SURF
# 420 "data/maps/PetalburgCity/scripts.pory"
	release
	end


# 424 "data/maps/PetalburgCity/scripts.pory"
ProfBirch_Movement_WalkUp1:
# 425 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 426 "data/maps/PetalburgCity/scripts.pory"
	step_end

# 429 "data/maps/PetalburgCity/scripts.pory"
ProfBirch_Movement_WalkUp4:
# 430 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 430 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 430 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 430 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 431 "data/maps/PetalburgCity/scripts.pory"
	step_end

# 434 "data/maps/PetalburgCity/scripts.pory"
ProfBirch_Movement_WalkDown5:
# 435 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 435 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 435 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 435 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 435 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 436 "data/maps/PetalburgCity/scripts.pory"
	step_end

PetalburgCity_EventScript_ProfBirch_Text_0:
# 374 "data/maps/PetalburgCity/scripts.pory"
	.string "Prof. Birch: Oh, there you are,\n"
	.string "{PLAYER}!\p"
	.string "I see you just got your fifth Badge.\p"
	.string "Looks like I'm a little late to the party,\n"
	.string "then. Hehe\p"
	.string "Anyway, I've got something really\n"
	.string "special for you.\p"
	.string "It took some time, but it's finally here!$"

PetalburgCity_EventScript_ProfBirch_Text_1:
# 383 "data/maps/PetalburgCity/scripts.pory"
	.string "And these, too!$"

PetalburgCity_EventScript_ProfBirch_Text_2:
# 385 "data/maps/PetalburgCity/scripts.pory"
	.string "{PLAYER} received some Mega Stones!$"

PetalburgCity_EventScript_ProfBirch_Text_3:
# 397 "data/maps/PetalburgCity/scripts.pory"
	.string "You do a lot of battling.\n"
	.string "It might be hard for you to run to the\l"
	.string "Pokémon Center everytime you want to\l"
	.string "change your team, right?\p"
	.string "You can use this item!$"

PetalburgCity_EventScript_ProfBirch_Text_4:
# 403 "data/maps/PetalburgCity/scripts.pory"
	.string "I assume you're heading next to\n"
	.string "Fortree City, right?\p"
	.string "You might need this, then.$"

PetalburgCity_EventScript_ProfBirch_Text_5:
# 407 "data/maps/PetalburgCity/scripts.pory"
	.string "You can use Surf to cross bodies of\n"
	.string "water.\p"
	.string "In battle, it is a very strong move,\n"
	.string "too!\p"
	.string "Well, I hope your Pokédex is coming\n"
	.string "along well.\p"
	.string "Goodbye, {PLAYER}.$"
