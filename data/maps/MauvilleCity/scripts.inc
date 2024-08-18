# 1 "data/maps/MauvilleCity/scripts.pory"

# 2 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_WALLY, 10
# 3 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_SCOTT, 9
# 4 "data/maps/MauvilleCity/scripts.pory"

# 5 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_MapScripts::
# 6 "data/maps/MauvilleCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_OnTransition
# 7 "data/maps/MauvilleCity/scripts.pory"
	.byte 0
# 8 "data/maps/MauvilleCity/scripts.pory"

# 9 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_OnTransition:
# 10 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_VISITED_MAUVILLE_CITY
# 11 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 12 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION
# 13 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_SYS_TV_START
# 14 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 15 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 0
# 16 "data/maps/MauvilleCity/scripts.pory"
	call_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_MoveWattsonBackToGym
# 17 "data/maps/MauvilleCity/scripts.pory"
	call_if_unset FLAG_DEFEATED_WALLY_MAUVILLE, MauvilleCity_EventScript_BattleWally
# 18 "data/maps/MauvilleCity/scripts.pory"
	end
# 19 "data/maps/MauvilleCity/scripts.pory"

# 20 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWally:
# 21 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_MAUVILLE_CITY_STATE, 0
# 22 "data/maps/MauvilleCity/scripts.pory"
	return	
# 23 "data/maps/MauvilleCity/scripts.pory"

# 24 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_MoveWattsonBackToGym::
# 25 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 26 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_WATTSON_REMATCH_AVAILABLE
# 27 "data/maps/MauvilleCity/scripts.pory"
	return
# 28 "data/maps/MauvilleCity/scripts.pory"

# 29 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Boy::
# 30 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_NurseHurtMonBackToHealth, MSGBOX_NPC
# 31 "data/maps/MauvilleCity/scripts.pory"
	end
# 32 "data/maps/MauvilleCity/scripts.pory"

# 33 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Maniac::
# 34 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_AllSortsOfPeopleComeThrough, MSGBOX_NPC
# 35 "data/maps/MauvilleCity/scripts.pory"
	end
# 36 "data/maps/MauvilleCity/scripts.pory"

# 37 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Woman::
# 38 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RydelVeryGenerous, MSGBOX_NPC
# 39 "data/maps/MauvilleCity/scripts.pory"
	end
# 40 "data/maps/MauvilleCity/scripts.pory"

# 41 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RichBoy::
# 42 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_PokemonCanJumpYouOnBike, MSGBOX_NPC
# 43 "data/maps/MauvilleCity/scripts.pory"
	end
# 44 "data/maps/MauvilleCity/scripts.pory"

# 45 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CitySign::
# 46 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_CitySign, MSGBOX_SIGN
# 47 "data/maps/MauvilleCity/scripts.pory"
	end
# 48 "data/maps/MauvilleCity/scripts.pory"

# 49 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GymSign::
# 50 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GymSign, MSGBOX_SIGN
# 51 "data/maps/MauvilleCity/scripts.pory"
	end
# 52 "data/maps/MauvilleCity/scripts.pory"

# 53 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BikeShopSign::
# 54 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BikeShopSign, MSGBOX_SIGN
# 55 "data/maps/MauvilleCity/scripts.pory"
	end
# 56 "data/maps/MauvilleCity/scripts.pory"

# 57 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GameCornerSign::
# 58 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GameCornerSign, MSGBOX_SIGN
# 59 "data/maps/MauvilleCity/scripts.pory"
	end
# 60 "data/maps/MauvilleCity/scripts.pory"

# 61 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_SchoolKidM::
# 62 "data/maps/MauvilleCity/scripts.pory"
	lock
# 63 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 64 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_TV_EXPLAINED, MauvilleCity_EventScript_TVExplained
# 65 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ExplainTV, MSGBOX_DEFAULT
# 66 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_TV_EXPLAINED
# 67 "data/maps/MauvilleCity/scripts.pory"
	release
# 68 "data/maps/MauvilleCity/scripts.pory"
	end
# 69 "data/maps/MauvilleCity/scripts.pory"

# 70 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_TVExplained::
# 71 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BeenCheckingOutTV, MSGBOX_DEFAULT
# 72 "data/maps/MauvilleCity/scripts.pory"
	release
# 73 "data/maps/MauvilleCity/scripts.pory"
	end
# 74 "data/maps/MauvilleCity/scripts.pory"

# 75 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wally::
# 76 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 77 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm LOCALID_WALLY, 8, 5
# 78 "data/maps/MauvilleCity/scripts.pory"
	opendoor 8, 5
# 79 "data/maps/MauvilleCity/scripts.pory"
	waitdooranim
# 80 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_WALLY
# 81 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkDown
# 82 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 83 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 84 "data/maps/MauvilleCity/scripts.pory"
	delay 1
# 85 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_PushDownFromUp
# 86 "data/maps/MauvilleCity/scripts.pory"
	closedoor 8, 5
# 87 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 88 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 89 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 90 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyGreetAndBattle, MSGBOX_DEFAULT
# 91 "data/maps/MauvilleCity/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyDefeat
# 92 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyThankYou, MSGBOX_AUTOCLOSE
# 93 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_MAUVILLE
# 94 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 95 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_MAUVILLE_CITY_STATE, 1
# 96 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_WALLY_CALL_STEP_COUNTER, 0
# 97 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 98 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitNorth
# 99 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExit
# 100 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 101 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_WALLY
# 102 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 103 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_Scott
# 104 "data/maps/MauvilleCity/scripts.pory"
	end
# 105 "data/maps/MauvilleCity/scripts.pory"

# 106 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Scott::
# 107 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 12, 13
# 108 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_SCOTT
# 109 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottApproachPlayerEast
# 110 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 111 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 112 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 113 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ScottYouDidntHoldBack, MSGBOX_DEFAULT
# 114 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 115 "data/maps/MauvilleCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 116 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_ScottExitEast
# 117 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 118 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 119 "data/maps/MauvilleCity/scripts.pory"
	end
# 120 "data/maps/MauvilleCity/scripts.pory"

# 121 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerNorth::
# 122 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_SCOTT
# 123 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottApproachPlayerNorth
# 124 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 125 "data/maps/MauvilleCity/scripts.pory"
	return
# 126 "data/maps/MauvilleCity/scripts.pory"

# 127 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerEast::
# 128 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 12, 13
# 129 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_SCOTT
# 130 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottApproachPlayerEast
# 131 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 132 "data/maps/MauvilleCity/scripts.pory"
	return
# 133 "data/maps/MauvilleCity/scripts.pory"

# 134 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitNorth::
# 135 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitNorth
# 136 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottExitNorth
# 137 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 138 "data/maps/MauvilleCity/scripts.pory"
	return
# 139 "data/maps/MauvilleCity/scripts.pory"

# 140 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitEast::
# 141 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitEast
# 142 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottExitEast
# 143 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 144 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 145 "data/maps/MauvilleCity/scripts.pory"
	return
# 146 "data/maps/MauvilleCity/scripts.pory"

# 147 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExit:
# 148 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 149 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 150 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 151 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 152 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 153 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 154 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 155 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 156 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 157 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 158 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 159 "data/maps/MauvilleCity/scripts.pory"

# 160 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitNorth:
# 161 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 162 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 163 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 164 "data/maps/MauvilleCity/scripts.pory"

# 165 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitEast:
# 166 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 167 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 168 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 169 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 170 "data/maps/MauvilleCity/scripts.pory"

# 171 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerNorth:
# 172 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 173 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 174 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 175 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 176 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 177 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 178 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 179 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 180 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 181 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 182 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
# 183 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 184 "data/maps/MauvilleCity/scripts.pory"

# 185 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerEast:
# 186 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 187 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 188 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 189 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 190 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 191 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 192 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 193 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 194 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 195 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 196 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 197 "data/maps/MauvilleCity/scripts.pory"
	face_right
# 198 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 199 "data/maps/MauvilleCity/scripts.pory"

# 200 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitNorth:
# 201 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 202 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 203 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 204 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 205 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 206 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 207 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 208 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 209 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 210 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 211 "data/maps/MauvilleCity/scripts.pory"

# 212 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitEast:
# 213 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 214 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 215 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 216 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 217 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 218 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 219 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 220 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 221 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 222 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 223 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 224 "data/maps/MauvilleCity/scripts.pory"

# 225 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wattson::
# 226 "data/maps/MauvilleCity/scripts.pory"
	lock
# 227 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 228 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_ReceivedThunderbolt
# 229 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_EventScript_CompletedNewMauville
# 230 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_BASEMENT_KEY_FROM_WATTSON, MauvilleCity_EventScript_BegunNewMauville
# 231 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonNeedFavorTakeKey, MSGBOX_DEFAULT
# 232 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_BASEMENT_KEY
# 233 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
# 234 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_HIDE_NEW_MAUVILLE_SCIENTISTS
# 235 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 236 "data/maps/MauvilleCity/scripts.pory"
	release
# 237 "data/maps/MauvilleCity/scripts.pory"
	end
# 238 "data/maps/MauvilleCity/scripts.pory"

# 239 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BegunNewMauville::
# 240 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 241 "data/maps/MauvilleCity/scripts.pory"
	release
# 242 "data/maps/MauvilleCity/scripts.pory"
	end
# 243 "data/maps/MauvilleCity/scripts.pory"

# 244 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CompletedNewMauville::
# 245 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonThanksTakeTM, MSGBOX_DEFAULT
# 246 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_TM_PLAY_ROUGH
# 247 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 248 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON
# 249 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_NEW_MAUVILLE_SCIENTISTS
# 250 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 251 "data/maps/MauvilleCity/scripts.pory"
	release
# 252 "data/maps/MauvilleCity/scripts.pory"
	end
# 253 "data/maps/MauvilleCity/scripts.pory"

# 254 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ReceivedThunderbolt::
# 255 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 256 "data/maps/MauvilleCity/scripts.pory"
	release
# 257 "data/maps/MauvilleCity/scripts.pory"
	end
# 258 "data/maps/MauvilleCity/scripts.pory"

# 259 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RegisterWallyCall::
# 260 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 261 "data/maps/MauvilleCity/scripts.pory"
	pokenavcall MauvilleCity_Text_WallyPokenavCall
# 262 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 263 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 264 "data/maps/MauvilleCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 265 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RegisteredWally, MSGBOX_DEFAULT
# 266 "data/maps/MauvilleCity/scripts.pory"
	waitfanfare
# 267 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 268 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 269 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_WALLY_MATCH_CALL
# 270 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 271 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 272 "data/maps/MauvilleCity/scripts.pory"
	end
# 273 "data/maps/MauvilleCity/scripts.pory"

# 274 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyGreetAndBattle:
# 275 "data/maps/MauvilleCity/scripts.pory"
	.string "Oh?\n"
# 276 "data/maps/MauvilleCity/scripts.pory"
	.string "Sorry, I'm blocking your way.\p"
# 277 "data/maps/MauvilleCity/scripts.pory"
	.string "Hello, my name is Wally.\p"
# 278 "data/maps/MauvilleCity/scripts.pory"
	.string "I'm a Pokémon Trainer, from Petalburg\n"
# 279 "data/maps/MauvilleCity/scripts.pory"
	.string "City.\p"
# 280 "data/maps/MauvilleCity/scripts.pory"
	.string "I see you're a Pokémon Trainer, too.\p"
# 281 "data/maps/MauvilleCity/scripts.pory"
	.string "Whaddya say,\n"
# 282 "data/maps/MauvilleCity/scripts.pory"
	.string "how about a quick battle?\p"
# 283 "data/maps/MauvilleCity/scripts.pory"
	.string "… … …\p"
# 284 "data/maps/MauvilleCity/scripts.pory"
	.string "That's the spirit! Here I come!$"
# 285 "data/maps/MauvilleCity/scripts.pory"

# 286 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyDefeat:
# 287 "data/maps/MauvilleCity/scripts.pory"
	.string "Wally: … … … … … … …\p"
# 288 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … … … …\p"
# 289 "data/maps/MauvilleCity/scripts.pory"
	.string "I lost…$"
# 290 "data/maps/MauvilleCity/scripts.pory"

# 291 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyThankYou:
# 292 "data/maps/MauvilleCity/scripts.pory"
	.string "Boy, was that fun!\p"
# 293 "data/maps/MauvilleCity/scripts.pory"
	.string "Being a Trainer is tough, isn't it?\p"
# 294 "data/maps/MauvilleCity/scripts.pory"
	.string "It's not enough just to have Pokémon\n"
# 295 "data/maps/MauvilleCity/scripts.pory"
	.string "and make them battle.\p"
# 296 "data/maps/MauvilleCity/scripts.pory"
	.string "That isn't what being a real Trainer\n"
# 297 "data/maps/MauvilleCity/scripts.pory"
	.string "is about.\p"
# 298 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, I hope our paths cross again.$"
# 299 "data/maps/MauvilleCity/scripts.pory"

# 300 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPokenavCall:
# 301 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 302 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Beep!\p"
# 303 "data/maps/MauvilleCity/scripts.pory"
	.string "Wally: Oh, hello, {PLAYER}!\p"
# 304 "data/maps/MauvilleCity/scripts.pory"
	.string "How rude of me to not add you in my\n"
# 305 "data/maps/MauvilleCity/scripts.pory"
	.string "PokéNav!\p"
# 306 "data/maps/MauvilleCity/scripts.pory"
	.string "Now I can get in touch with you\n"
# 307 "data/maps/MauvilleCity/scripts.pory"
	.string "anytime, {PLAYER}!\p"
# 308 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 309 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Click!$"
# 310 "data/maps/MauvilleCity/scripts.pory"

# 311 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RegisteredWally:
# 312 "data/maps/MauvilleCity/scripts.pory"
	.string "Registered Wally\n"
# 313 "data/maps/MauvilleCity/scripts.pory"
	.string "in the PokéNav.$"
# 314 "data/maps/MauvilleCity/scripts.pory"

# 315 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ScottYouDidntHoldBack:
# 316 "data/maps/MauvilleCity/scripts.pory"
	.string "Scott: Hehe…\n"
# 317 "data/maps/MauvilleCity/scripts.pory"
	.string "I was watching that match!\p"
# 318 "data/maps/MauvilleCity/scripts.pory"
	.string "He looks like a really strong Trainer\n"
# 319 "data/maps/MauvilleCity/scripts.pory"
	.string "and beat him impressively.\p"
# 320 "data/maps/MauvilleCity/scripts.pory"
	.string "Yeah! That's what a real Pokémon\n"
# 321 "data/maps/MauvilleCity/scripts.pory"
	.string "battle is all about!\p"
# 322 "data/maps/MauvilleCity/scripts.pory"
	.string "I idolize Trainers like that!\p"
# 323 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 324 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll be cheering for you!$"
# 325 "data/maps/MauvilleCity/scripts.pory"

# 326 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonNeedFavorTakeKey:
# 327 "data/maps/MauvilleCity/scripts.pory"
	.string "???: Oh, hello!\p"
# 328 "data/maps/MauvilleCity/scripts.pory"
	.string "You look like a Pokémon Trainer!\p"
# 329 "data/maps/MauvilleCity/scripts.pory"
	.string "Umm, I need some help, please!\p"
# 330 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 331 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\p"
# 332 "data/maps/MauvilleCity/scripts.pory"
	.string "Thank you!\p"
# 333 "data/maps/MauvilleCity/scripts.pory"
	.string "What's your name?\p"
# 334 "data/maps/MauvilleCity/scripts.pory"
	.string "… … …\p"
# 335 "data/maps/MauvilleCity/scripts.pory"
	.string "Okay, {PLAYER}!\n"
# 336 "data/maps/MauvilleCity/scripts.pory"
	.string "My name is Anabel.\p"
# 337 "data/maps/MauvilleCity/scripts.pory"
	.string "Anabel: I work for the Pokémon League.\p"
# 338 "data/maps/MauvilleCity/scripts.pory"
	.string "So, you see, Mauville City has a big\n"
# 339 "data/maps/MauvilleCity/scripts.pory"
	.string "underground sector called the New\l"
# 340 "data/maps/MauvilleCity/scripts.pory"
	.string "Mauville.\p"
# 341 "data/maps/MauvilleCity/scripts.pory"
	.string "I'd like you to go there and switch\n"
# 342 "data/maps/MauvilleCity/scripts.pory"
	.string "off the Generator.\p"
# 343 "data/maps/MauvilleCity/scripts.pory"
	.string "The Generator has been running a bit\n"
# 344 "data/maps/MauvilleCity/scripts.pory"
	.string "haywire. It's getting unsafe.\p"
# 345 "data/maps/MauvilleCity/scripts.pory"
	.string "Here, this is the Key to get into\n"
# 346 "data/maps/MauvilleCity/scripts.pory"
	.string "New Mauville.\p"
# 347 "data/maps/MauvilleCity/scripts.pory"
	.string "I would do this myself, but I don't\n"
# 348 "data/maps/MauvilleCity/scripts.pory"
	.string "a Pokémon of my own, and my escort is\l"
# 349 "data/maps/MauvilleCity/scripts.pory"
	.string "not here.\p"
# 350 "data/maps/MauvilleCity/scripts.pory"
	.string "Thank you for your help, {PLAYER}!$"
# 351 "data/maps/MauvilleCity/scripts.pory"

# 352 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonWontBeChallenge:
# 353 "data/maps/MauvilleCity/scripts.pory"
	.string "Anabel: The entrance to New Mauville\n"
# 354 "data/maps/MauvilleCity/scripts.pory"
	.string "is just a short Surf away from\l"
# 355 "data/maps/MauvilleCity/scripts.pory"
	.string "Route 110.\p"
# 356 "data/maps/MauvilleCity/scripts.pory"
	.string "That's it, then, you have my trust!$"
# 357 "data/maps/MauvilleCity/scripts.pory"

# 358 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonThanksTakeTM:
# 359 "data/maps/MauvilleCity/scripts.pory"
	.string "Anabel: Thank you, {PLAYER}!\p"
# 360 "data/maps/MauvilleCity/scripts.pory"
	.string "I knew it, {PLAYER}{KUN}! I knew I'd made\n"
# 361 "data/maps/MauvilleCity/scripts.pory"
	.string "the right choice asking you!\p"
# 362 "data/maps/MauvilleCity/scripts.pory"
	.string "This is my thanks--a TM containing\n"
# 363 "data/maps/MauvilleCity/scripts.pory"
	.string "Play Rough!\l"
# 364 "data/maps/MauvilleCity/scripts.pory"
	.string "It's a powerful Fairy-type move!\l"
# 365 "data/maps/MauvilleCity/scripts.pory"
	.string "Go on, you've earned it!$"
# 366 "data/maps/MauvilleCity/scripts.pory"

# 367 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonYoungTakeCharge:
# 368 "data/maps/MauvilleCity/scripts.pory"
	.string "Anabel: Thank you, {PLAYER}!\p"
# 369 "data/maps/MauvilleCity/scripts.pory"
	.string "I knew it! I knew I'd made the right\n"
# 370 "data/maps/MauvilleCity/scripts.pory"
	.string "choice asking you!$"
# 371 "data/maps/MauvilleCity/scripts.pory"

# 372 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_NurseHurtMonBackToHealth:
# 373 "data/maps/MauvilleCity/scripts.pory"
	.string "You know, it's cool to have Pokémon\n"
# 374 "data/maps/MauvilleCity/scripts.pory"
	.string "battles and stuff…\p"
# 375 "data/maps/MauvilleCity/scripts.pory"
	.string "But if your Pokémon gets hurt,\n"
# 376 "data/maps/MauvilleCity/scripts.pory"
	.string "you have to nurse it back to health.$"
# 377 "data/maps/MauvilleCity/scripts.pory"

# 378 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_AllSortsOfPeopleComeThrough:
# 379 "data/maps/MauvilleCity/scripts.pory"
	.string "The roads of this town stretch north\n"
# 380 "data/maps/MauvilleCity/scripts.pory"
	.string "and south, and east and west.\p"
# 381 "data/maps/MauvilleCity/scripts.pory"
	.string "Because of that, we get all sorts of\n"
# 382 "data/maps/MauvilleCity/scripts.pory"
	.string "people coming through.$"
# 383 "data/maps/MauvilleCity/scripts.pory"

# 384 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RydelVeryGenerous:
# 385 "data/maps/MauvilleCity/scripts.pory"
	.string "Have you been to Rydel's Cycles yet?\p"
# 386 "data/maps/MauvilleCity/scripts.pory"
	.string "Rydel, the owner, is a very generous\n"
# 387 "data/maps/MauvilleCity/scripts.pory"
	.string "man.$"
# 388 "data/maps/MauvilleCity/scripts.pory"

# 389 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_PokemonCanJumpYouOnBike:
# 390 "data/maps/MauvilleCity/scripts.pory"
	.string "Even if you're riding a Bike,\n"
# 391 "data/maps/MauvilleCity/scripts.pory"
	.string "wild Pokémon could jump you.$"
# 392 "data/maps/MauvilleCity/scripts.pory"

# 393 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_CitySign:
# 394 "data/maps/MauvilleCity/scripts.pory"
	.string "Mauville City\n"
# 395 "data/maps/MauvilleCity/scripts.pory"
	.string "“The bright and shiny city of fun!”$"
# 396 "data/maps/MauvilleCity/scripts.pory"

# 397 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GymSign:
# 398 "data/maps/MauvilleCity/scripts.pory"
	.string "Mauville City Pokémon Gym\n"
# 399 "data/maps/MauvilleCity/scripts.pory"
	.string "Leader: Ydarissep:\p"
# 400 "data/maps/MauvilleCity/scripts.pory"
	.string "“Old man with dementia,\n"
# 401 "data/maps/MauvilleCity/scripts.pory"
	.string "and a burning spirit!”$"
# 402 "data/maps/MauvilleCity/scripts.pory"

# 403 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BikeShopSign:
# 404 "data/maps/MauvilleCity/scripts.pory"
	.string "“Ride in gravel and shake up your\n"
# 405 "data/maps/MauvilleCity/scripts.pory"
	.string "soul!”\l"
# 406 "data/maps/MauvilleCity/scripts.pory"
	.string "Rydel's Cycles$"
# 407 "data/maps/MauvilleCity/scripts.pory"

# 408 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GameCornerSign:
# 409 "data/maps/MauvilleCity/scripts.pory"
	.string "“The play spot for all!”\n"
# 410 "data/maps/MauvilleCity/scripts.pory"
	.string "Mauville Game Corner$"
# 411 "data/maps/MauvilleCity/scripts.pory"

# 412 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ExplainTV:
# 413 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, do you check out TV at all?\p"
# 414 "data/maps/MauvilleCity/scripts.pory"
	.string "They've added a bunch of cool new\n"
# 415 "data/maps/MauvilleCity/scripts.pory"
	.string "shows recently.\p"
# 416 "data/maps/MauvilleCity/scripts.pory"
	.string "TV is so cool. I've seen my friends on\n"
# 417 "data/maps/MauvilleCity/scripts.pory"
	.string "TV just out of the blue.\p"
# 418 "data/maps/MauvilleCity/scripts.pory"
	.string "And, sometimes, they even put you on TV\n"
# 419 "data/maps/MauvilleCity/scripts.pory"
	.string "without telling you.\p"
# 420 "data/maps/MauvilleCity/scripts.pory"
	.string "I wish I would be on TV sometime.\p"
# 421 "data/maps/MauvilleCity/scripts.pory"
	.string "That's why I think you should check\n"
# 422 "data/maps/MauvilleCity/scripts.pory"
	.string "out TVs whenever you can.$"
# 423 "data/maps/MauvilleCity/scripts.pory"

# 424 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BeenCheckingOutTV:
# 425 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, have you been checking out TVs?$"
