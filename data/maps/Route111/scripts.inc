# 1 "data/maps/Route111/scripts.pory"

# 2 "data/maps/Route111/scripts.pory"
.set LOCALID_VICTOR, 1
# 3 "data/maps/Route111/scripts.pory"
.set LOCALID_VICTORIA, 2
# 4 "data/maps/Route111/scripts.pory"
.set LOCALID_VIVI, 3
# 5 "data/maps/Route111/scripts.pory"
.set LOCALID_VICKY, 4
# 6 "data/maps/Route111/scripts.pory"
.set LOCALID_ROCK_SMASH_MAN, 46
# 7 "data/maps/Route111/scripts.pory"

# 8 "data/maps/Route111/scripts.pory"
@ Note: LOCALID_ROUTE111_PLAYER_FALLING is a local id for this map used elsewhere. It's defined in event_objects.h
# 9 "data/maps/Route111/scripts.pory"

# 10 "data/maps/Route111/scripts.pory"
Route111_MapScripts::
# 11 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route111_OnLoad
# 12 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route111_OnTransition
# 13 "data/maps/Route111/scripts.pory"
	.byte 0
# 14 "data/maps/Route111/scripts.pory"

# 15 "data/maps/Route111/scripts.pory"
Route111_OnLoad:
# 16 "data/maps/Route111/scripts.pory"
	call_if_unset FLAG_REGI_DOORS_OPENED, Route111_EventScript_CloseDesertRuins
# 17 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_ShowTemporaryMirageTower
# 18 "data/maps/Route111/scripts.pory"
	end
# 19 "data/maps/Route111/scripts.pory"

# 20 "data/maps/Route111/scripts.pory"
Route111_EventScript_CloseDesertRuins::
# 21 "data/maps/Route111/scripts.pory"
	setmetatile 29, 86, METATILE_General_RockWall_RockBase, TRUE
# 22 "data/maps/Route111/scripts.pory"
	setmetatile 29, 87, METATILE_General_RockWall_SandBase, TRUE
# 23 "data/maps/Route111/scripts.pory"
	return
# 24 "data/maps/Route111/scripts.pory"

# 25 "data/maps/Route111/scripts.pory"
@ Show Mirage Tower just prior to disintegration. Mirage Tower is otherwise handled by the map layout
# 26 "data/maps/Route111/scripts.pory"
Route111_EventScript_ShowTemporaryMirageTower::
# 27 "data/maps/Route111/scripts.pory"
	setmetatile 18, 53, METATILE_Mauville_MirageTower_Tile0, FALSE
# 28 "data/maps/Route111/scripts.pory"
	setmetatile 19, 53, METATILE_Mauville_MirageTower_Tile1, FALSE
# 29 "data/maps/Route111/scripts.pory"
	setmetatile 20, 53, METATILE_Mauville_MirageTower_Tile2, FALSE
# 30 "data/maps/Route111/scripts.pory"
	setmetatile 18, 54, METATILE_Mauville_MirageTower_Tile3, FALSE
# 31 "data/maps/Route111/scripts.pory"
	setmetatile 19, 54, METATILE_Mauville_MirageTower_Tile4, FALSE
# 32 "data/maps/Route111/scripts.pory"
	setmetatile 20, 54, METATILE_Mauville_MirageTower_Tile5, FALSE
# 33 "data/maps/Route111/scripts.pory"
	setmetatile 18, 55, METATILE_Mauville_MirageTower_Tile6, FALSE
# 34 "data/maps/Route111/scripts.pory"
	setmetatile 19, 55, METATILE_Mauville_MirageTower_Tile7, FALSE
# 35 "data/maps/Route111/scripts.pory"
	setmetatile 20, 55, METATILE_Mauville_MirageTower_Tile8, FALSE
# 36 "data/maps/Route111/scripts.pory"
	setmetatile 18, 56, METATILE_Mauville_MirageTower_Tile9, FALSE
# 37 "data/maps/Route111/scripts.pory"
	setmetatile 19, 56, METATILE_Mauville_MirageTower_TileA, FALSE
# 38 "data/maps/Route111/scripts.pory"
	setmetatile 20, 56, METATILE_Mauville_MirageTower_TileB, FALSE
# 39 "data/maps/Route111/scripts.pory"
	setmetatile 18, 57, METATILE_Mauville_MirageTower_TileC, FALSE
# 40 "data/maps/Route111/scripts.pory"
	setmetatile 19, 57, METATILE_Mauville_MirageTower_TileD, FALSE
# 41 "data/maps/Route111/scripts.pory"
	setmetatile 20, 57, METATILE_Mauville_MirageTower_TileE, FALSE
# 42 "data/maps/Route111/scripts.pory"
	setmetatile 18, 58, METATILE_Mauville_MirageTower_TileF, FALSE
# 43 "data/maps/Route111/scripts.pory"
	setmetatile 19, 58, METATILE_Mauville_MirageTower_Tile10, FALSE
# 44 "data/maps/Route111/scripts.pory"
	setmetatile 20, 58, METATILE_Mauville_MirageTower_Tile11, FALSE
# 45 "data/maps/Route111/scripts.pory"
	return
# 46 "data/maps/Route111/scripts.pory"

# 47 "data/maps/Route111/scripts.pory"
Route111_OnTransition:
# 48 "data/maps/Route111/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
# 49 "data/maps/Route111/scripts.pory"
	special SetMirageTowerVisibility
# 50 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_SetFallingPlayerGfx
# 51 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CheckSetSandstorm
# 52 "data/maps/Route111/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 53 "data/maps/Route111/scripts.pory"
	goto_if_not_defeated TRAINER_VICKY, Route111_EventScript_SetWinstratesNotDefeated
# 54 "data/maps/Route111/scripts.pory"
	end
# 55 "data/maps/Route111/scripts.pory"

# 56 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfx::
# 57 "data/maps/Route111/scripts.pory"
	checkplayergender
# 58 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route111_EventScript_SetFallingPlayerGfxMale
# 59 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route111_EventScript_SetFallingPlayerGfxFemale
# 60 "data/maps/Route111/scripts.pory"
	return
# 61 "data/maps/Route111/scripts.pory"

# 62 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxMale::
# 63 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 64 "data/maps/Route111/scripts.pory"
	return
# 65 "data/maps/Route111/scripts.pory"

# 66 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxFemale::
# 67 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 68 "data/maps/Route111/scripts.pory"
	return
# 69 "data/maps/Route111/scripts.pory"

# 70 "data/maps/Route111/scripts.pory"
Route111_EventScript_CheckSetSandstorm::
# 71 "data/maps/Route111/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 72 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_1, 34, Route111_EventScript_EndCheckSetSandstorm
# 73 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_1, 107, Route111_EventScript_EndCheckSetSandstorm
# 74 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_1, 72, Route111_EventScript_SetSandstorm
# 75 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_0, 2000, Route111_EventScript_EndCheckSetSandstorm
# 76 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_0, 8, Route111_EventScript_EndCheckSetSandstorm
# 77 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetSandstorm::
# 78 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 79 "data/maps/Route111/scripts.pory"
Route111_EventScript_EndCheckSetSandstorm::
# 80 "data/maps/Route111/scripts.pory"
	return
# 81 "data/maps/Route111/scripts.pory"

# 82 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetWinstratesNotDefeated::
# 83 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE
# 84 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE
# 85 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE
# 86 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
# 87 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTOR
# 88 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTORIA
# 89 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VIVI
# 90 "data/maps/Route111/scripts.pory"
	end
# 91 "data/maps/Route111/scripts.pory"

# 92 "data/maps/Route111/scripts.pory"
@ Unused
# 93 "data/maps/Route111/scripts.pory"
Route111_Movement_PlayerFall::
# 94 "data/maps/Route111/scripts.pory"
	lock_anim
# 95 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 96 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 97 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 98 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 99 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 100 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 101 "data/maps/Route111/scripts.pory"
	step_end
# 102 "data/maps/Route111/scripts.pory"

# 103 "data/maps/Route111/scripts.pory"
Route111_EventScript_Girl::
# 104 "data/maps/Route111/scripts.pory"
	lock
# 105 "data/maps/Route111/scripts.pory"
	faceplayer
# 106 "data/maps/Route111/scripts.pory"
	dotimebasedevents
# 107 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_111_RECEIVED_BERRY, Route111_EventScript_ReceivedBerry
# 108 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WateredPlantsEveryDayTakeBerry, MSGBOX_DEFAULT
# 109 "data/maps/Route111/scripts.pory"
	giveitem ITEM_RAZZ_BERRY
# 110 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 111 "data/maps/Route111/scripts.pory"
	setflag FLAG_DAILY_ROUTE_111_RECEIVED_BERRY
# 112 "data/maps/Route111/scripts.pory"
	special GetPlayerBigGuyGirlString
# 113 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_GoingToTryToMakeDifferentColorBerries, MSGBOX_DEFAULT
# 114 "data/maps/Route111/scripts.pory"
	release
# 115 "data/maps/Route111/scripts.pory"
	end
# 116 "data/maps/Route111/scripts.pory"

# 117 "data/maps/Route111/scripts.pory"
Route111_EventScript_ReceivedBerry::
# 118 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WhatColorBerriesToLookForToday, MSGBOX_DEFAULT
# 119 "data/maps/Route111/scripts.pory"
	release
# 120 "data/maps/Route111/scripts.pory"
	end
# 121 "data/maps/Route111/scripts.pory"

# 122 "data/maps/Route111/scripts.pory"
@ Unused
# 123 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerUp::
# 124 "data/maps/Route111/scripts.pory"
	lockall
# 125 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 0
# 126 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 127 "data/maps/Route111/scripts.pory"
	end
# 128 "data/maps/Route111/scripts.pory"

# 129 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerDown::
# 130 "data/maps/Route111/scripts.pory"
	lockall
# 131 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 1
# 132 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 133 "data/maps/Route111/scripts.pory"
	end
# 134 "data/maps/Route111/scripts.pory"

# 135 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerLeft::
# 136 "data/maps/Route111/scripts.pory"
	lockall
# 137 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 2
# 138 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 139 "data/maps/Route111/scripts.pory"
	end
# 140 "data/maps/Route111/scripts.pory"

# 141 "data/maps/Route111/scripts.pory"
@ Unused
# 142 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerRight::
# 143 "data/maps/Route111/scripts.pory"
	lockall
# 144 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 3
# 145 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 146 "data/maps/Route111/scripts.pory"
	end
# 147 "data/maps/Route111/scripts.pory"

# 148 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTrigger::
# 149 "data/maps/Route111/scripts.pory"
	checkitem ITEM_GO_GOGGLES
# 150 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route111_EventScript_PreventRouteAccess
# 151 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 1
# 152 "data/maps/Route111/scripts.pory"
	releaseall
# 153 "data/maps/Route111/scripts.pory"
	end
# 154 "data/maps/Route111/scripts.pory"

# 155 "data/maps/Route111/scripts.pory"
Route111_EventScript_PreventRouteAccess::
# 156 "data/maps/Route111/scripts.pory"
	msgbox gText_SandstormIsVicious, MSGBOX_DEFAULT
# 157 "data/maps/Route111/scripts.pory"
	closemessage
# 158 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 0, Route111_EventScript_PushUpFromRoute
# 159 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 1, Route111_EventScript_PushDownFromRoute
# 160 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 2, Route111_EventScript_PushLeftFromRoute
# 161 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 3, Route111_EventScript_PushRightFromRoute
# 162 "data/maps/Route111/scripts.pory"
	releaseall
# 163 "data/maps/Route111/scripts.pory"
	end
# 164 "data/maps/Route111/scripts.pory"

# 165 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushUpFromRoute::
# 166 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushUpFromRoute
# 167 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 168 "data/maps/Route111/scripts.pory"
	return
# 169 "data/maps/Route111/scripts.pory"

# 170 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushDownFromRoute::
# 171 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushDownFromRoute
# 172 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 173 "data/maps/Route111/scripts.pory"
	return
# 174 "data/maps/Route111/scripts.pory"

# 175 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushLeftFromRoute::
# 176 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushLeftFromRoute
# 177 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 178 "data/maps/Route111/scripts.pory"
	return
# 179 "data/maps/Route111/scripts.pory"

# 180 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushRightFromRoute::
# 181 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushRightFromRoute
# 182 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 183 "data/maps/Route111/scripts.pory"
	return
# 184 "data/maps/Route111/scripts.pory"

# 185 "data/maps/Route111/scripts.pory"
Route111_Movement_PushUpFromRoute:
# 186 "data/maps/Route111/scripts.pory"
	walk_up
# 187 "data/maps/Route111/scripts.pory"
	step_end
# 188 "data/maps/Route111/scripts.pory"

# 189 "data/maps/Route111/scripts.pory"
Route111_Movement_PushDownFromRoute:
# 190 "data/maps/Route111/scripts.pory"
	walk_down
# 191 "data/maps/Route111/scripts.pory"
	step_end
# 192 "data/maps/Route111/scripts.pory"

# 193 "data/maps/Route111/scripts.pory"
Route111_Movement_PushLeftFromRoute:
# 194 "data/maps/Route111/scripts.pory"
	walk_left
# 195 "data/maps/Route111/scripts.pory"
	step_end
# 196 "data/maps/Route111/scripts.pory"

# 197 "data/maps/Route111/scripts.pory"
Route111_Movement_PushRightFromRoute:
# 198 "data/maps/Route111/scripts.pory"
	walk_right
# 199 "data/maps/Route111/scripts.pory"
	step_end
# 200 "data/maps/Route111/scripts.pory"

# 201 "data/maps/Route111/scripts.pory"
Route111_EventScript_SunTrigger::
# 202 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SUNNY
# 203 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_ROUTE110
# 204 "data/maps/Route111/scripts.pory"
	doweather
# 205 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 0
# 206 "data/maps/Route111/scripts.pory"
	end
# 207 "data/maps/Route111/scripts.pory"

# 208 "data/maps/Route111/scripts.pory"
Route111_EventScript_SandstormTrigger::
# 209 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 210 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_DESERT
# 211 "data/maps/Route111/scripts.pory"
	doweather
# 212 "data/maps/Route111/scripts.pory"
	end
# 213 "data/maps/Route111/scripts.pory"

# 214 "data/maps/Route111/scripts.pory"
Route111_EventScript_Victor::
# 215 "data/maps/Route111/scripts.pory"
	lock
# 216 "data/maps/Route111/scripts.pory"
	faceplayer
# 217 "data/maps/Route111/scripts.pory"
	setflag FLAG_LANDMARK_WINSTRATE_FAMILY
# 218 "data/maps/Route111/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route111_EventScript_CannotBattleOurFamilyYet
# 219 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BattleOurFamily, MSGBOX_YESNO
# 220 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route111_EventScript_BattleWinstrates
# 221 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IsThatSo, MSGBOX_DEFAULT
# 222 "data/maps/Route111/scripts.pory"
	release
# 223 "data/maps/Route111/scripts.pory"
	end
# 224 "data/maps/Route111/scripts.pory"

# 225 "data/maps/Route111/scripts.pory"
Route111_EventScript_CannotBattleOurFamilyYet:
# 226 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CannotBattleOurFamilyYet, MSGBOX_NPC
# 227 "data/maps/Route111/scripts.pory"
	release
# 228 "data/maps/Route111/scripts.pory"
	end
# 229 "data/maps/Route111/scripts.pory"

# 230 "data/maps/Route111/scripts.pory"
Route111_EventScript_BattleWinstrates::
# 231 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorIntro, MSGBOX_DEFAULT
# 232 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTOR, Route111_Text_VictorDefeat
# 233 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTOR, Common_Movement_WalkInPlaceFasterUp
# 234 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 235 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 236 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorPostBattle, MSGBOX_DEFAULT
# 237 "data/maps/Route111/scripts.pory"
	closemessage
# 238 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTOR, Route111_Movement_WinstrateEnterHouse
# 239 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 240 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VICTOR
# 241 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 242 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 243 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 244 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 245 "data/maps/Route111/scripts.pory"
	addobject LOCALID_VICTORIA
# 246 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTORIA, Route111_Movement_WinstrateExitHouse
# 247 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 248 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 249 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaIntro, MSGBOX_DEFAULT
# 250 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTORIA, Route111_Text_VictoriaDefeat
# 251 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTORIA, Common_Movement_WalkInPlaceFasterUp
# 252 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 253 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 254 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaPostBattle, MSGBOX_DEFAULT
# 255 "data/maps/Route111/scripts.pory"
	closemessage
# 256 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTORIA, Route111_Movement_WinstrateEnterHouse
# 257 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 258 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VICTORIA
# 259 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 260 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 261 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 262 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 263 "data/maps/Route111/scripts.pory"
	addobject LOCALID_VIVI
# 264 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VIVI, Route111_Movement_WinstrateExitHouse
# 265 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 266 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 267 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviIntro, MSGBOX_DEFAULT
# 268 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VIVI, Route111_Text_ViviDefeat
# 269 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VIVI, Common_Movement_WalkInPlaceFasterUp
# 270 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 271 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 272 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviPostBattle, MSGBOX_DEFAULT
# 273 "data/maps/Route111/scripts.pory"
	closemessage
# 274 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VIVI, Route111_Movement_WinstrateEnterHouse
# 275 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 276 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VIVI
# 277 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 278 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 279 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 280 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 281 "data/maps/Route111/scripts.pory"
	addobject LOCALID_VICKY
# 282 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICKY, Route111_Movement_WinstrateExitHouse
# 283 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 284 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 285 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyIntro, MSGBOX_DEFAULT
# 286 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICKY, Route111_Text_VickyDefeat
# 287 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyPostBattle, MSGBOX_DEFAULT
# 288 "data/maps/Route111/scripts.pory"
	closemessage
# 289 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICKY, Common_Movement_WalkInPlaceFasterUp
# 290 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 291 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 292 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICKY, Route111_Movement_WinstrateEnterHouse
# 293 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 294 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VICKY
# 295 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 296 "data/maps/Route111/scripts.pory"
	release
# 297 "data/maps/Route111/scripts.pory"
	end
# 298 "data/maps/Route111/scripts.pory"

# 299 "data/maps/Route111/scripts.pory"
Route111_EventScript_OpenWinstrateDoor::
# 300 "data/maps/Route111/scripts.pory"
	opendoor 13, 113
# 301 "data/maps/Route111/scripts.pory"
	waitdooranim
# 302 "data/maps/Route111/scripts.pory"
	return
# 303 "data/maps/Route111/scripts.pory"

# 304 "data/maps/Route111/scripts.pory"
Route111_EventScript_CloseWinstrateDoor::
# 305 "data/maps/Route111/scripts.pory"
	closedoor 13, 113
# 306 "data/maps/Route111/scripts.pory"
	waitdooranim
# 307 "data/maps/Route111/scripts.pory"
	return
# 308 "data/maps/Route111/scripts.pory"

# 309 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateEnterHouse:
# 310 "data/maps/Route111/scripts.pory"
	walk_in_place_faster_up
# 311 "data/maps/Route111/scripts.pory"
	walk_up
# 312 "data/maps/Route111/scripts.pory"
	step_end
# 313 "data/maps/Route111/scripts.pory"

# 314 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateExitHouse:
# 315 "data/maps/Route111/scripts.pory"
	walk_down
# 316 "data/maps/Route111/scripts.pory"
	step_end
# 317 "data/maps/Route111/scripts.pory"

# 318 "data/maps/Route111/scripts.pory"
Route111_Movement_WaitForNextWinstrate:
# 319 "data/maps/Route111/scripts.pory"
	delay_16
# 320 "data/maps/Route111/scripts.pory"
	delay_16
# 321 "data/maps/Route111/scripts.pory"
	delay_16
# 322 "data/maps/Route111/scripts.pory"
	step_end
# 323 "data/maps/Route111/scripts.pory"

# 324 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSignMauville::
# 325 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSignMauville, MSGBOX_SIGN
# 326 "data/maps/Route111/scripts.pory"
	end
# 327 "data/maps/Route111/scripts.pory"

# 328 "data/maps/Route111/scripts.pory"
Route111_EventScript_WinstrateHouseSign::
# 329 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateHouseSign, MSGBOX_SIGN
# 330 "data/maps/Route111/scripts.pory"
	end
# 331 "data/maps/Route111/scripts.pory"

# 332 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign112::
# 333 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign112, MSGBOX_SIGN
# 334 "data/maps/Route111/scripts.pory"
	end
# 335 "data/maps/Route111/scripts.pory"

# 336 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign113::
# 337 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign113, MSGBOX_SIGN
# 338 "data/maps/Route111/scripts.pory"
	end
# 339 "data/maps/Route111/scripts.pory"

# 340 "data/maps/Route111/scripts.pory"
Route111_EventScript_OldLadysRestStopSign::
# 341 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_OldLadysRestStopSign, MSGBOX_SIGN
# 342 "data/maps/Route111/scripts.pory"
	end
# 343 "data/maps/Route111/scripts.pory"

# 344 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerTipsSpAtkSpDef::
# 345 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerTipsSpAtkSpDef, MSGBOX_SIGN
# 346 "data/maps/Route111/scripts.pory"
	end
# 347 "data/maps/Route111/scripts.pory"

# 348 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man1::
# 349 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ToughToKeepWinningUpTheRanks, MSGBOX_NPC
# 350 "data/maps/Route111/scripts.pory"
	end
# 351 "data/maps/Route111/scripts.pory"

# 352 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man2::
# 353 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateFamilyDestroyedMe, MSGBOX_NPC
# 354 "data/maps/Route111/scripts.pory"
	end
# 355 "data/maps/Route111/scripts.pory"

# 356 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hiker::
# 357 "data/maps/Route111/scripts.pory"
	lock
# 358 "data/maps/Route111/scripts.pory"
	faceplayer
# 359 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 3, Route111_EventScript_HikerMirageTowerGone
# 360 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_HikerMirageTowerDisintegrated
# 361 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_HikerMirageTowerVisible
# 362 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ShouldBeMirageTowerAroundHere, MSGBOX_DEFAULT
# 363 "data/maps/Route111/scripts.pory"
	release
# 364 "data/maps/Route111/scripts.pory"
	end
# 365 "data/maps/Route111/scripts.pory"

# 366 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerGone::
# 367 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerHasntBeenSeenSince, MSGBOX_DEFAULT
# 368 "data/maps/Route111/scripts.pory"
	release
# 369 "data/maps/Route111/scripts.pory"
	end
# 370 "data/maps/Route111/scripts.pory"

# 371 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerDisintegrated::
# 372 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ThatWasShockingSandRainedDown, MSGBOX_DEFAULT
# 373 "data/maps/Route111/scripts.pory"
	release
# 374 "data/maps/Route111/scripts.pory"
	end
# 375 "data/maps/Route111/scripts.pory"

# 376 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerVisible::
# 377 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerClearlyVisible, MSGBOX_DEFAULT
# 378 "data/maps/Route111/scripts.pory"
	release
# 379 "data/maps/Route111/scripts.pory"
	end
# 380 "data/maps/Route111/scripts.pory"

# 381 "data/maps/Route111/scripts.pory"
Route111_EventScript_RockSmashTipFatMan::
# 382 "data/maps/Route111/scripts.pory"
	lockall
# 383 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROCK_SMASH_MAN, Common_Movement_FacePlayer
# 384 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 385 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MauvilleUncleToldMeToTakeRockSmash, MSGBOX_DEFAULT
# 386 "data/maps/Route111/scripts.pory"
	closemessage
# 387 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROCK_SMASH_MAN, Common_Movement_FaceOriginalDirection
# 388 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 389 "data/maps/Route111/scripts.pory"
	releaseall
# 390 "data/maps/Route111/scripts.pory"
	end
# 391 "data/maps/Route111/scripts.pory"

# 392 "data/maps/Route111/scripts.pory"
Route111_EventScript_Drew::
# 393 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DREW, Route111_Text_DrewIntro, Route111_Text_DrewDefeat
# 394 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DrewPostBattle, MSGBOX_AUTOCLOSE
# 395 "data/maps/Route111/scripts.pory"
	end
# 396 "data/maps/Route111/scripts.pory"

# 397 "data/maps/Route111/scripts.pory"
Route111_EventScript_Heidi::
# 398 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HEIDI, Route111_Text_HeidiIntro, Route111_Text_HeidiDefeat
# 399 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HeidiPostBattle, MSGBOX_AUTOCLOSE
# 400 "data/maps/Route111/scripts.pory"
	end
# 401 "data/maps/Route111/scripts.pory"

# 402 "data/maps/Route111/scripts.pory"
Route111_EventScript_Beau::
# 403 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BEAU, Route111_Text_BeauIntro, Route111_Text_BeauDefeat
# 404 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeauPostBattle, MSGBOX_AUTOCLOSE
# 405 "data/maps/Route111/scripts.pory"
	end
# 406 "data/maps/Route111/scripts.pory"

# 407 "data/maps/Route111/scripts.pory"
Route111_EventScript_Becky::
# 408 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BECKY, Route111_Text_BeckyIntro, Route111_Text_BeckyDefeat
# 409 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeckyPostBattle, MSGBOX_AUTOCLOSE
# 410 "data/maps/Route111/scripts.pory"
	end
# 411 "data/maps/Route111/scripts.pory"

# 412 "data/maps/Route111/scripts.pory"
Route111_EventScript_Dusty::
# 413 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DUSTY_1, Route111_Text_DustyIntro, Route111_Text_DustyDefeat, Route111_EventScript_RegisterDusty
# 414 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 415 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchDusty
# 416 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostBattle, MSGBOX_DEFAULT
# 417 "data/maps/Route111/scripts.pory"
	release
# 418 "data/maps/Route111/scripts.pory"
	end
# 419 "data/maps/Route111/scripts.pory"

# 420 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterDusty::
# 421 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 422 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 423 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyRegister, MSGBOX_DEFAULT
# 424 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_DUSTY_1
# 425 "data/maps/Route111/scripts.pory"
	release
# 426 "data/maps/Route111/scripts.pory"
	end
# 427 "data/maps/Route111/scripts.pory"

# 428 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchDusty::
# 429 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_DUSTY_1, Route111_Text_DustyRematchIntro, Route111_Text_DustyRematchDefeat
# 430 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostRematch, MSGBOX_AUTOCLOSE
# 431 "data/maps/Route111/scripts.pory"
	end
# 432 "data/maps/Route111/scripts.pory"

# 433 "data/maps/Route111/scripts.pory"
Route111_EventScript_Travis::
# 434 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TRAVIS, Route111_Text_TravisIntro, Route111_Text_TravisDefeat
# 435 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
# 436 "data/maps/Route111/scripts.pory"
	end
# 437 "data/maps/Route111/scripts.pory"

# 438 "data/maps/Route111/scripts.pory"
Route111_EventScript_Irene::
# 439 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_IRENE, Route111_Text_IreneIntro, Route111_Text_IreneDefeat
# 440 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IrenePostBattle, MSGBOX_AUTOCLOSE
# 441 "data/maps/Route111/scripts.pory"
	end
# 442 "data/maps/Route111/scripts.pory"

# 443 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wilton::
# 444 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_WILTON_1, Route111_Text_WiltonIntro, Route111_Text_WiltonDefeat, Route111_EventScript_RegisterWilton
# 445 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 446 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchWilton
# 447 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostBattle, MSGBOX_DEFAULT
# 448 "data/maps/Route111/scripts.pory"
	release
# 449 "data/maps/Route111/scripts.pory"
	end
# 450 "data/maps/Route111/scripts.pory"

# 451 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterWilton::
# 452 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 453 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 454 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonRegister, MSGBOX_DEFAULT
# 455 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_WILTON_1
# 456 "data/maps/Route111/scripts.pory"
	release
# 457 "data/maps/Route111/scripts.pory"
	end
# 458 "data/maps/Route111/scripts.pory"

# 459 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchWilton::
# 460 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_WILTON_1, Route111_Text_WiltonRematchIntro, Route111_Text_WiltonRematchDefeat
# 461 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostRematch, MSGBOX_AUTOCLOSE
# 462 "data/maps/Route111/scripts.pory"
	end
# 463 "data/maps/Route111/scripts.pory"

# 464 "data/maps/Route111/scripts.pory"
Route111_EventScript_Brooke::
# 465 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BROOKE_1, Route111_Text_BrookeIntro, Route111_Text_BrookeDefeat, Route111_EventScript_RegisterBrooke
# 466 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 467 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchBrooke
# 468 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostBattle, MSGBOX_DEFAULT
# 469 "data/maps/Route111/scripts.pory"
	release
# 470 "data/maps/Route111/scripts.pory"
	end
# 471 "data/maps/Route111/scripts.pory"

# 472 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterBrooke::
# 473 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 474 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 475 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookeRegister, MSGBOX_DEFAULT
# 476 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_BROOKE_1
# 477 "data/maps/Route111/scripts.pory"
	release
# 478 "data/maps/Route111/scripts.pory"
	end
# 479 "data/maps/Route111/scripts.pory"

# 480 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchBrooke::
# 481 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_BROOKE_1, Route111_Text_BrookeRematchIntro, Route111_Text_BrookeRematchDefeat
# 482 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostRematch, MSGBOX_AUTOCLOSE
# 483 "data/maps/Route111/scripts.pory"
	end
# 484 "data/maps/Route111/scripts.pory"

# 485 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hayden::
# 486 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HAYDEN, Route111_Text_HaydenIntro, Route111_Text_HaydenDefeat
# 487 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HaydenPostBattle, MSGBOX_AUTOCLOSE
# 488 "data/maps/Route111/scripts.pory"
	end
# 489 "data/maps/Route111/scripts.pory"

# 490 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bianca::
# 491 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BIANCA, Route111_Text_BiancaIntro, Route111_Text_BiancaDefeat
# 492 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BiancaPostBattle, MSGBOX_AUTOCLOSE
# 493 "data/maps/Route111/scripts.pory"
	end
# 494 "data/maps/Route111/scripts.pory"

# 495 "data/maps/Route111/scripts.pory"
Route111_EventScript_Tyron::
# 496 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TYRON, Route111_Text_TyronIntro, Route111_Text_TyronDefeat
# 497 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TyronPostBattle, MSGBOX_AUTOCLOSE
# 498 "data/maps/Route111/scripts.pory"
	end
# 499 "data/maps/Route111/scripts.pory"

# 500 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celina::
# 501 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELINA, Route111_Text_CelinaIntro, Route111_Text_CelinaDefeat
# 502 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CelinaPostBattle, MSGBOX_AUTOCLOSE
# 503 "data/maps/Route111/scripts.pory"
	end
# 504 "data/maps/Route111/scripts.pory"

# 505 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celia::
# 506 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELIA, Route111_Text_CeliaIntro, Route111_Text_CeliaDefeat
# 507 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CeliaPostBattle, MSGBOX_AUTOCLOSE
# 508 "data/maps/Route111/scripts.pory"
	end
# 509 "data/maps/Route111/scripts.pory"

# 510 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bryan::
# 511 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRYAN, Route111_Text_BryanIntro, Route111_Text_BryanDefeat
# 512 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BryanPostBattle, MSGBOX_AUTOCLOSE
# 513 "data/maps/Route111/scripts.pory"
	end
# 514 "data/maps/Route111/scripts.pory"

# 515 "data/maps/Route111/scripts.pory"
Route111_EventScript_Branden::
# 516 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRANDEN, Route111_Text_BrandenIntro, Route111_Text_BrandenDefeat
# 517 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrandenPostBattle, MSGBOX_AUTOCLOSE
# 518 "data/maps/Route111/scripts.pory"
	end
# 519 "data/maps/Route111/scripts.pory"

# 520 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerHillSign::
# 521 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerHillSign, MSGBOX_SIGN
# 522 "data/maps/Route111/scripts.pory"
	end
# 523 "data/maps/Route111/scripts.pory"

# 524 "data/maps/Route111/scripts.pory"
Route111_Text_BattleOurFamily:
# 525 "data/maps/Route111/scripts.pory"
	.string "How's this? What do you say to taking\n"
# 526 "data/maps/Route111/scripts.pory"
	.string "on our family of four in a series of\l"
# 527 "data/maps/Route111/scripts.pory"
	.string "Pokémon battles?$"
# 528 "data/maps/Route111/scripts.pory"

# 529 "data/maps/Route111/scripts.pory"
Route111_Text_IsThatSo:
# 530 "data/maps/Route111/scripts.pory"
	.string "Is that so?\n"
# 531 "data/maps/Route111/scripts.pory"
	.string "Drop in, if you change your mind!$"
# 532 "data/maps/Route111/scripts.pory"

# 533 "data/maps/Route111/scripts.pory"
Route111_Text_CannotBattleOurFamilyYet:
# 534 "data/maps/Route111/scripts.pory"
	.string "How's this? What do you say to taking\n"
# 535 "data/maps/Route111/scripts.pory"
	.string "on our family of four in a series of\l"
# 536 "data/maps/Route111/scripts.pory"
	.string "Pokémon battles?\p"
# 537 "data/maps/Route111/scripts.pory"
	.string "… … …\p"
# 538 "data/maps/Route111/scripts.pory"
	.string "Nevermind!\p"
# 539 "data/maps/Route111/scripts.pory"
	.string "How about this?\n"
# 540 "data/maps/Route111/scripts.pory"
	.string "You beat the Mauville City Gym Leader\l"
# 541 "data/maps/Route111/scripts.pory"
	.string "and then come back?\p"
# 542 "data/maps/Route111/scripts.pory"
	.string "Surely then you'll be much of a challenge!$"
# 543 "data/maps/Route111/scripts.pory"

# 544 "data/maps/Route111/scripts.pory"
Route111_Text_VictorIntro:
# 545 "data/maps/Route111/scripts.pory"
	.string "That's the spirit! I like you!$"
# 546 "data/maps/Route111/scripts.pory"

# 547 "data/maps/Route111/scripts.pory"
Route111_Text_VictorDefeat:
# 548 "data/maps/Route111/scripts.pory"
	.string "Aiyah!\n"
# 549 "data/maps/Route111/scripts.pory"
	.string "You're a lot tougher than I expected!$"
# 550 "data/maps/Route111/scripts.pory"

# 551 "data/maps/Route111/scripts.pory"
Route111_Text_VictorPostBattle:
# 552 "data/maps/Route111/scripts.pory"
	.string "Hey, all!\n"
# 553 "data/maps/Route111/scripts.pory"
	.string "I've found a pretty strong Trainer!$"
# 554 "data/maps/Route111/scripts.pory"

# 555 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaIntro:
# 556 "data/maps/Route111/scripts.pory"
	.string "Oh, my goodness! Aren't you young?\p"
# 557 "data/maps/Route111/scripts.pory"
	.string "You must be quite the Trainer to beat\n"
# 558 "data/maps/Route111/scripts.pory"
	.string "my husband, though.\p"
# 559 "data/maps/Route111/scripts.pory"
	.string "It's my turn to battle now!$"
# 560 "data/maps/Route111/scripts.pory"

# 561 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaDefeat:
# 562 "data/maps/Route111/scripts.pory"
	.string "Oh, gosh!\n"
# 563 "data/maps/Route111/scripts.pory"
	.string "I can't get over how strong you are!$"
# 564 "data/maps/Route111/scripts.pory"

# 565 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaPostBattle:
# 566 "data/maps/Route111/scripts.pory"
	.string "There's a strong Trainer here!\n"
# 567 "data/maps/Route111/scripts.pory"
	.string "This one's really strong!$"
# 568 "data/maps/Route111/scripts.pory"

# 569 "data/maps/Route111/scripts.pory"
Route111_Text_ViviIntro:
# 570 "data/maps/Route111/scripts.pory"
	.string "You're stronger than Mommy? Wow!\p"
# 571 "data/maps/Route111/scripts.pory"
	.string "But I'm strong, too!\n"
# 572 "data/maps/Route111/scripts.pory"
	.string "Really! Honestly!$"
# 573 "data/maps/Route111/scripts.pory"

# 574 "data/maps/Route111/scripts.pory"
Route111_Text_ViviDefeat:
# 575 "data/maps/Route111/scripts.pory"
	.string "Huh? Did I just lose?$"
# 576 "data/maps/Route111/scripts.pory"

# 577 "data/maps/Route111/scripts.pory"
Route111_Text_ViviPostBattle:
# 578 "data/maps/Route111/scripts.pory"
	.string "This stinks…\p"
# 579 "data/maps/Route111/scripts.pory"
	.string "…Snivel… Grandma!$"
# 580 "data/maps/Route111/scripts.pory"

# 581 "data/maps/Route111/scripts.pory"
Route111_Text_VickyIntro:
# 582 "data/maps/Route111/scripts.pory"
	.string "How dare you make my granddaughter\n"
# 583 "data/maps/Route111/scripts.pory"
	.string "cry!\p"
# 584 "data/maps/Route111/scripts.pory"
	.string "For that, I'm going to smack you!\n"
# 585 "data/maps/Route111/scripts.pory"
	.string "Prepare to lose!$"
# 586 "data/maps/Route111/scripts.pory"

# 587 "data/maps/Route111/scripts.pory"
Route111_Text_VickyDefeat:
# 588 "data/maps/Route111/scripts.pory"
	.string "Kwah! You are strong…\n"
# 589 "data/maps/Route111/scripts.pory"
	.string "My granddaughter was right…$"
# 590 "data/maps/Route111/scripts.pory"

# 591 "data/maps/Route111/scripts.pory"
Route111_Text_VickyPostBattle:
# 592 "data/maps/Route111/scripts.pory"
	.string "If you're not in any hurry,\n"
# 593 "data/maps/Route111/scripts.pory"
	.string "visit with us awhile.$"
# 594 "data/maps/Route111/scripts.pory"

# 595 "data/maps/Route111/scripts.pory"
Route111_Text_ToughToKeepWinningUpTheRanks:
# 596 "data/maps/Route111/scripts.pory"
	.string "If you don't raise your Pokémon some\n"
# 597 "data/maps/Route111/scripts.pory"
	.string "more, it could be tough to keep winning\l"
# 598 "data/maps/Route111/scripts.pory"
	.string "up through the ranks.\p"
# 599 "data/maps/Route111/scripts.pory"
	.string "I've heard the Pokémon League's\n"
# 600 "data/maps/Route111/scripts.pory"
	.string "Elite Four are far stronger than\l"
# 601 "data/maps/Route111/scripts.pory"
	.string "any Gym Leader.$"
# 602 "data/maps/Route111/scripts.pory"

# 603 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateFamilyDestroyedMe:
# 604 "data/maps/Route111/scripts.pory"
	.string "I challenged the Winstrate family,\n"
# 605 "data/maps/Route111/scripts.pory"
	.string "but four matches in a row is tough\l"
# 606 "data/maps/Route111/scripts.pory"
	.string "going… They destroyed me.$"
# 607 "data/maps/Route111/scripts.pory"

# 608 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSignMauville:
# 609 "data/maps/Route111/scripts.pory"
	.string "Route 111\n"
# 610 "data/maps/Route111/scripts.pory"
	.string "{DOWN_ARROW} Mauville City$"
# 611 "data/maps/Route111/scripts.pory"

# 612 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateHouseSign:
# 613 "data/maps/Route111/scripts.pory"
	.string "“Our family's hearts beat as one!”\n"
# 614 "data/maps/Route111/scripts.pory"
	.string "The Winstrate's House$"
# 615 "data/maps/Route111/scripts.pory"

# 616 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign112:
# 617 "data/maps/Route111/scripts.pory"
	.string "Route 111\n"
# 618 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} Route 112$"
# 619 "data/maps/Route111/scripts.pory"

# 620 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign113:
# 621 "data/maps/Route111/scripts.pory"
	.string "Route 111\n"
# 622 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} Route 113$"
# 623 "data/maps/Route111/scripts.pory"

# 624 "data/maps/Route111/scripts.pory"
Route111_Text_OldLadysRestStopSign:
# 625 "data/maps/Route111/scripts.pory"
	.string "Old Lady's Rest Stop\n"
# 626 "data/maps/Route111/scripts.pory"
	.string "“Come in and rest your tired bones.”$"
# 627 "data/maps/Route111/scripts.pory"

# 628 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerTipsSpAtkSpDef:
# 629 "data/maps/Route111/scripts.pory"
	.string "Trainer Tips\p"
# 630 "data/maps/Route111/scripts.pory"
	.string "One of the indicators of a Pokémon's\n"
# 631 "data/maps/Route111/scripts.pory"
	.string "powerfulness is Sp. Atk. It stands for\l"
# 632 "data/maps/Route111/scripts.pory"
	.string "“Special Attack.”\p"
# 633 "data/maps/Route111/scripts.pory"
	.string "Likewise, Sp. Def stands for “Special\n"
# 634 "data/maps/Route111/scripts.pory"
	.string "Defense.”$"
# 635 "data/maps/Route111/scripts.pory"

# 636 "data/maps/Route111/scripts.pory"
Route111_Text_ShouldBeMirageTowerAroundHere:
# 637 "data/maps/Route111/scripts.pory"
	.string "There should be a tower made of sand\n"
# 638 "data/maps/Route111/scripts.pory"
	.string "around here somewhere.\p"
# 639 "data/maps/Route111/scripts.pory"
	.string "But for some reason, it can be seen\n"
# 640 "data/maps/Route111/scripts.pory"
	.string "sometimes, and sometimes not.\p"
# 641 "data/maps/Route111/scripts.pory"
	.string "That's why I call it the Mirage Tower.$"
# 642 "data/maps/Route111/scripts.pory"

# 643 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerClearlyVisible:
# 644 "data/maps/Route111/scripts.pory"
	.string "I see it!\n"
# 645 "data/maps/Route111/scripts.pory"
	.string "The tower of sand!\p"
# 646 "data/maps/Route111/scripts.pory"
	.string "The sand tower they called a mirage\n"
# 647 "data/maps/Route111/scripts.pory"
	.string "is clearly visible!\p"
# 648 "data/maps/Route111/scripts.pory"
	.string "But it looks so fragile…\n"
# 649 "data/maps/Route111/scripts.pory"
	.string "It could crumble away anytime…\p"
# 650 "data/maps/Route111/scripts.pory"
	.string "I want to go inside it, but I can't\n"
# 651 "data/maps/Route111/scripts.pory"
	.string "get my courage up for it…$"
# 652 "data/maps/Route111/scripts.pory"

# 653 "data/maps/Route111/scripts.pory"
Route111_Text_ThatWasShockingSandRainedDown:
# 654 "data/maps/Route111/scripts.pory"
	.string "Whoa…\n"
# 655 "data/maps/Route111/scripts.pory"
	.string "That was shocking.\p"
# 656 "data/maps/Route111/scripts.pory"
	.string "Sand rained down in chunks all of\n"
# 657 "data/maps/Route111/scripts.pory"
	.string "a sudden.\p"
# 658 "data/maps/Route111/scripts.pory"
	.string "What was it like inside?\n"
# 659 "data/maps/Route111/scripts.pory"
	.string "Were there sandy ghosts and such?$"
# 660 "data/maps/Route111/scripts.pory"

# 661 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerHasntBeenSeenSince:
# 662 "data/maps/Route111/scripts.pory"
	.string "Since I spoke to you, the tower of sand\n"
# 663 "data/maps/Route111/scripts.pory"
	.string "hasn't been seen.\p"
# 664 "data/maps/Route111/scripts.pory"
	.string "Perhaps it really was\n"
# 665 "data/maps/Route111/scripts.pory"
	.string "the Mirage Tower…$"
# 666 "data/maps/Route111/scripts.pory"

# 667 "data/maps/Route111/scripts.pory"
Route111_Text_ClawFossilDisappeared:
# 668 "data/maps/Route111/scripts.pory"
	.string "The Claw Fossil disappeared into\n"
# 669 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 670 "data/maps/Route111/scripts.pory"

# 671 "data/maps/Route111/scripts.pory"
Route111_Text_RootFossilDisappeared:
# 672 "data/maps/Route111/scripts.pory"
	.string "The Root Fossil disappeared into\n"
# 673 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 674 "data/maps/Route111/scripts.pory"

# 675 "data/maps/Route111/scripts.pory"
Route111_Text_MauvilleUncleToldMeToTakeRockSmash:
# 676 "data/maps/Route111/scripts.pory"
	.string "Oh, no!\p"
# 677 "data/maps/Route111/scripts.pory"
	.string "My uncle in Mauville told me to take\n"
# 678 "data/maps/Route111/scripts.pory"
	.string "Rock Smash with me if I was going to\l"
# 679 "data/maps/Route111/scripts.pory"
	.string "Route 111!\p"
# 680 "data/maps/Route111/scripts.pory"
	.string "My uncle? He lives across from\n"
# 681 "data/maps/Route111/scripts.pory"
	.string "the bike shop in Mauville.$"
# 682 "data/maps/Route111/scripts.pory"

# 683 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerHillSign:
# 684 "data/maps/Route111/scripts.pory"
	.string "{RIGHT_ARROW} Trainer Hill Entrance\p"
# 685 "data/maps/Route111/scripts.pory"
	.string "“Scale the heights, you hot-blooded\n"
# 686 "data/maps/Route111/scripts.pory"
	.string "Trainers!”$"

Route111_EventScript_Daisuke2::
# 691 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Daisuke2_Text_0, MSGBOX_AUTOCLOSE
# 692 "data/maps/Route111/scripts.pory"
	givemon SPECIES_KUBFU, 0, ITEM_CHOICE_BAND, ITEM_CHERISH_BALL, NATURE_JOLLY, 0, MON_MALE, 0, 252, 0, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_MEGA_PUNCH, MOVE_FOCUS_ENERGY, MOVE_CLOSE_COMBAT, MOVE_U_TURN, FALSE
# 693 "data/maps/Route111/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_KUBFU
# 694 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_KUBFU
# 695 "data/maps/Route111/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 696 "data/maps/Route111/scripts.pory"
	message Route111_EventScript_Daisuke2_Text_1
# 697 "data/maps/Route111/scripts.pory"
	waitmessage
# 698 "data/maps/Route111/scripts.pory"
	waitfanfare
# 699 "data/maps/Route111/scripts.pory"
	call Common_EventScript_Nickname
# 700 "data/maps/Route111/scripts.pory"
	setflag FLAG_ROUTE_111_BOSS_DEFEATED
# 701 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Daisuke2_Text_2
# 702 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, Route111_EventScript_Daisuke2_2
# 726 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Daisuke2_Text_6, MSGBOX_NPC
	return

Route111_EventScript_Daisuke2_2:
# 704 "data/maps/Route111/scripts.pory"
	message Route111_EventScript_Daisuke2_Text_3
# 705 "data/maps/Route111/scripts.pory"
	waitmessage
# 706 "data/maps/Route111/scripts.pory"
	multichoice 20, 8, MULTI_KUBFU_EVO, TRUE
# 707 "data/maps/Route111/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route111_EventScript_Daisuke2_4
# 718 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Daisuke2_Text_4, MSGBOX_AUTOCLOSE
# 719 "data/maps/Route111/scripts.pory"
	giveitem ITEM_SCROLL_OF_WATERS, 1
# 720 "data/maps/Route111/scripts.pory"
	waitfanfare
# 721 "data/maps/Route111/scripts.pory"
	setflag FLAG_CHOSE_WATER_SCROLL
# 722 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Daisuke2_Text_5, MSGBOX_NPC
	end

Route111_EventScript_Daisuke2_4:
# 709 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Daisuke2_Text_4, MSGBOX_AUTOCLOSE
# 710 "data/maps/Route111/scripts.pory"
	giveitem ITEM_SCROLL_OF_DARKNESS, 1
# 711 "data/maps/Route111/scripts.pory"
	waitfanfare
# 712 "data/maps/Route111/scripts.pory"
	setflag FLAG_CHOSE_DARK_SCROLL
# 713 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Daisuke2_Text_5, MSGBOX_NPC
	end


Route111_EventScript_Daisuke::
# 733 "data/maps/Route111/scripts.pory"
	lock
# 734 "data/maps/Route111/scripts.pory"
	faceplayer
# 735 "data/maps/Route111/scripts.pory"
	checktrainerflag TRAINER_DREW
	goto_if 1, Route111_EventScript_Daisuke_5
Route111_EventScript_Daisuke_3:
# 765 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Daisuke_Text_1, MSGBOX_NPC
Route111_EventScript_Daisuke_1:
# 767 "data/maps/Route111/scripts.pory"
	release
	end

Route111_EventScript_Daisuke_2:
# 751 "data/maps/Route111/scripts.pory"
	setflag B_FLAG_NO_BAG_USE
# 752 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DAISUKE, Route111_Text_DaisukeIntro, Route111_Text_DaisukeDefeat, Route111_EventScript_Daisuke2
# 753 "data/maps/Route111/scripts.pory"
	clearflag B_FLAG_NO_BAG_USE
# 754 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_BADGE07_GET == TRUE, Route111_EventScript_Daisuke_35
# 760 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Daisuke_Text_0, MSGBOX_NPC
	goto Route111_EventScript_Daisuke_1

Route111_EventScript_Daisuke_4:
# 737 "data/maps/Route111/scripts.pory"
	checktrainerflag TRAINER_BEAU
	goto_if 1, Route111_EventScript_Daisuke_9
	goto Route111_EventScript_Daisuke_3

Route111_EventScript_Daisuke_5:
# 736 "data/maps/Route111/scripts.pory"
	checktrainerflag TRAINER_HEIDI
	goto_if 1, Route111_EventScript_Daisuke_4
	goto Route111_EventScript_Daisuke_3

Route111_EventScript_Daisuke_8:
# 739 "data/maps/Route111/scripts.pory"
	checktrainerflag TRAINER_DUSTY_1
	goto_if 1, Route111_EventScript_Daisuke_13
	goto Route111_EventScript_Daisuke_3

Route111_EventScript_Daisuke_9:
# 738 "data/maps/Route111/scripts.pory"
	checktrainerflag TRAINER_BECKY
	goto_if 1, Route111_EventScript_Daisuke_8
	goto Route111_EventScript_Daisuke_3

Route111_EventScript_Daisuke_12:
# 741 "data/maps/Route111/scripts.pory"
	checktrainerflag TRAINER_IRENE
	goto_if 1, Route111_EventScript_Daisuke_17
	goto Route111_EventScript_Daisuke_3

Route111_EventScript_Daisuke_13:
# 740 "data/maps/Route111/scripts.pory"
	checktrainerflag TRAINER_TRAVIS
	goto_if 1, Route111_EventScript_Daisuke_12
	goto Route111_EventScript_Daisuke_3

Route111_EventScript_Daisuke_16:
# 743 "data/maps/Route111/scripts.pory"
	checktrainerflag TRAINER_BROOKE_1
	goto_if 1, Route111_EventScript_Daisuke_21
	goto Route111_EventScript_Daisuke_3

Route111_EventScript_Daisuke_17:
# 742 "data/maps/Route111/scripts.pory"
	checktrainerflag TRAINER_WILTON_1
	goto_if 1, Route111_EventScript_Daisuke_16
	goto Route111_EventScript_Daisuke_3

Route111_EventScript_Daisuke_20:
# 745 "data/maps/Route111/scripts.pory"
	checktrainerflag TRAINER_BIANCA
	goto_if 1, Route111_EventScript_Daisuke_25
	goto Route111_EventScript_Daisuke_3

Route111_EventScript_Daisuke_21:
# 744 "data/maps/Route111/scripts.pory"
	checktrainerflag TRAINER_HAYDEN
	goto_if 1, Route111_EventScript_Daisuke_20
	goto Route111_EventScript_Daisuke_3

Route111_EventScript_Daisuke_24:
# 747 "data/maps/Route111/scripts.pory"
	checktrainerflag TRAINER_CELINA
	goto_if 1, Route111_EventScript_Daisuke_29
	goto Route111_EventScript_Daisuke_3

Route111_EventScript_Daisuke_25:
# 746 "data/maps/Route111/scripts.pory"
	checktrainerflag TRAINER_TYRON
	goto_if 1, Route111_EventScript_Daisuke_24
	goto Route111_EventScript_Daisuke_3

Route111_EventScript_Daisuke_28:
# 749 "data/maps/Route111/scripts.pory"
	checktrainerflag TRAINER_BRYAN
	goto_if 1, Route111_EventScript_Daisuke_32
	goto Route111_EventScript_Daisuke_3

Route111_EventScript_Daisuke_29:
# 748 "data/maps/Route111/scripts.pory"
	checktrainerflag TRAINER_CELIA
	goto_if 1, Route111_EventScript_Daisuke_28
	goto Route111_EventScript_Daisuke_3

Route111_EventScript_Daisuke_32:
# 750 "data/maps/Route111/scripts.pory"
	checktrainerflag TRAINER_BRANDEN
	goto_if 1, Route111_EventScript_Daisuke_2
	goto Route111_EventScript_Daisuke_3

Route111_EventScript_Daisuke_35:
# 756 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Daisuke2_Text_5, MSGBOX_NPC
	goto Route111_EventScript_Daisuke_1


Route111_EventScript_Daisuke2_Text_0:
# 691 "data/maps/Route111/scripts.pory"
	.string "You deserve the power of Kubfu.$"

Route111_EventScript_Daisuke2_Text_1:
# 696 "data/maps/Route111/scripts.pory"
	.string "{PLAYER} received a Kubfu!$"

Route111_EventScript_Daisuke2_Text_2:
# 701 "data/maps/Route111/scripts.pory"
	.string "Kubfu can only be found in the\nIsle of Armor, in Galar.\pBut, there have been a few spotted in\nHoenn.\pKubfu can evolve into two forms…$"

Route111_EventScript_Daisuke2_Text_3:
# 704 "data/maps/Route111/scripts.pory"
	.string "I can only give you one.\pSo… What kind of a Trainer are you?$"

Route111_EventScript_Daisuke2_Text_4:
# 709 "data/maps/Route111/scripts.pory"
	.string "Then you need this.$"

Route111_EventScript_Daisuke2_Text_5:
# 713 "data/maps/Route111/scripts.pory"
	.string "I hope you made the right choice.$"

Route111_EventScript_Daisuke2_Text_6:
# 726 "data/maps/Route111/scripts.pory"
	.string "Once you're ready for it I'll give it\nto you.$"

Route111_EventScript_Daisuke_Text_0:
# 760 "data/maps/Route111/scripts.pory"
	.string "Kubfu can only be found in the\nIsle of Armor, in Galar.\pBut, there have been a few spotted in\nHoenn.\pKubfu can evolve into two forms…\nOnce you're ready for it I'll give it\lto you.$"

Route111_EventScript_Daisuke_Text_1:
# 765 "data/maps/Route111/scripts.pory"
	.string "Hiyaaa!\pI will only accept your challenge once\nyou prove your might!\pHow? Simple.\pBeat every Trainer here, first.$"
