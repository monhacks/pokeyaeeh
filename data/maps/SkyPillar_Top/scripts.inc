# 1 "data/maps/SkyPillar_Top/scripts.pory"

# 2 "data/maps/SkyPillar_Top/scripts.pory"
.set LOCALID_RAYQUAZA_SLEEPING, 1
# 3 "data/maps/SkyPillar_Top/scripts.pory"

# 4 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_MapScripts::
# 5 "data/maps/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SkyPillar_Top_OnResume
# 6 "data/maps/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_Top_OnTransition
# 7 "data/maps/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SkyPillar_Top_OnWarp
# 8 "data/maps/SkyPillar_Top/scripts.pory"
	.byte 0
# 9 "data/maps/SkyPillar_Top/scripts.pory"

# 10 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnResume:
# 11 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, SkyPillar_Top_EventScript_TryRemoveRayquaza
# 12 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 13 "data/maps/SkyPillar_Top/scripts.pory"

# 14 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_TryRemoveRayquaza::
# 15 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 16 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 17 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 18 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 19 "data/maps/SkyPillar_Top/scripts.pory"

# 20 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnTransition:
# 21 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_lt VAR_SKY_PILLAR_STATE, 2, SkyPillar_Top_EventScript_SetCleanLayout
# 22 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_ge VAR_SKY_PILLAR_STATE, 2, SkyPillar_Top_EventScript_ShouldShowRayquaza
# 23 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 24 "data/maps/SkyPillar_Top/scripts.pory"

# 25 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_SetCleanLayout::
# 26 "data/maps/SkyPillar_Top/scripts.pory"
	setmaplayoutindex LAYOUT_SKY_PILLAR_TOP_CLEAN
# 27 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_RAYQUAZA_SLEEPING, MOVEMENT_TYPE_FACE_DOWN
# 28 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 29 "data/maps/SkyPillar_Top/scripts.pory"

# 30 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ShouldShowRayquaza::
# 31 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, SkyPillar_Top_EventScript_TryShowRayquaza
# 32 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 33 "data/maps/SkyPillar_Top/scripts.pory"

# 34 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_TryShowRayquaza::
# 35 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_unset FLAG_DEFEATED_RAYQUAZA, SkyPillar_Top_EventScript_ShowRayquaza
# 36 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 37 "data/maps/SkyPillar_Top/scripts.pory"

# 38 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ShowRayquaza::
# 39 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA_STILL
# 40 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 41 "data/maps/SkyPillar_Top/scripts.pory"

# 42 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnWarp:
# 43 "data/maps/SkyPillar_Top/scripts.pory"
	map_script_2 VAR_SKY_PILLAR_STATE, 0, SkyPillar_Top_EventScript_RayquazaFaceDown
# 44 "data/maps/SkyPillar_Top/scripts.pory"
	.2byte 0
# 45 "data/maps/SkyPillar_Top/scripts.pory"

# 46 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RayquazaFaceDown::
# 47 "data/maps/SkyPillar_Top/scripts.pory"
	turnobject LOCALID_RAYQUAZA_SLEEPING, DIR_SOUTH
# 48 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 49 "data/maps/SkyPillar_Top/scripts.pory"

# 50 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Rayquaza::
# 51 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 52 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 53 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 54 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 55 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 56 "data/maps/SkyPillar_Top/scripts.pory"
	setvar B_VAR_STARTING_STATUS, STARTING_STATUS_TAILWIND_OPPONENT
# 57 "data/maps/SkyPillar_Top/scripts.pory"
	settotemboost 1, 2, 2, 2, 2, 2, 0, 0
# 58 "data/maps/SkyPillar_Top/scripts.pory"
	setwildbattle SPECIES_RAYQUAZA, 0, ITEM_ROSELI_BERRY, NATURE_HARDY, 0, 100, 152, 0, 156, 100, 0, 31, 31, 31, 31, 31, 31, MOVE_DRAGON_ASCENT, MOVE_DRACO_METEOR, MOVE_EARTHQUAKE, MOVE_V_CREATE, FALSE
# 59 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 60 "data/maps/SkyPillar_Top/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 61 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 62 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 63 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_DEFEATED_RAYQUAZA
# 64 "data/maps/SkyPillar_Top/scripts.pory"
	setvar B_VAR_STARTING_STATUS, 0
# 65 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 66 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SkyPillar_Top_EventScript_RanFromRayquaza
# 67 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SkyPillar_Top_EventScript_RanFromRayquaza
# 68 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, SkyPillar_Top_EventScript_DefeatedRayquaza
# 69 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SkyPillar_Top_EventScript_RanFromRayquaza
# 70 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 71 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 72 "data/maps/SkyPillar_Top/scripts.pory"

# 73 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_DefeatedRayquaza::
# 74 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_DefeatedRayquaza2
# 75 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 76 "data/maps/SkyPillar_Top/scripts.pory"

# 77 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RanFromRayquaza::
# 78 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_RAYQUAZA
# 79 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_RanFromRayquaza2
# 80 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 81 "data/maps/SkyPillar_Top/scripts.pory"

# 82 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_DefeatedRayquaza2::
# 83 "data/maps/SkyPillar_Top/scripts.pory"
	setvar B_VAR_STARTING_STATUS, 0
# 84 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 85 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 86 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 87 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 88 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 89 "data/maps/SkyPillar_Top/scripts.pory"

# 90 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RanFromRayquaza2::
# 91 "data/maps/SkyPillar_Top/scripts.pory"
	setvar B_VAR_STARTING_STATUS, 0
# 92 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 93 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 94 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 95 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 96 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox gText_LegendaryEscaped, MSGBOX_DEFAULT
# 97 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 98 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 99 "data/maps/SkyPillar_Top/scripts.pory"

# 100 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_AwakenRayquaza::
# 101 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 102 "data/maps/SkyPillar_Top/scripts.pory"
	fadeoutbgm 1
# 103 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 104 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 105 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 106 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_CameraPanUp
# 107 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 108 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 109 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaStir
# 110 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 111 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 112 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 113 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 114 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 115 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 116 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 117 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 118 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 119 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 120 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 121 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 122 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 123 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 124 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 125 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 126 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 127 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 128 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaFlyOff
# 129 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 130 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_RAYQUAZA_SLEEPING
# 131 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_RayquazaFlewOff, MSGBOX_DEFAULT
# 132 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 133 "data/maps/SkyPillar_Top/scripts.pory"
	delay 20
# 134 "data/maps/SkyPillar_Top/scripts.pory"
	fadeinbgm 1
# 135 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 136 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_CameraPanDown
# 137 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 138 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 139 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 6
# 140 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 1
# 141 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_RAYQUAZA_CRY_DONE, 1
# 142 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 143 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 144 "data/maps/SkyPillar_Top/scripts.pory"

# 145 "data/maps/SkyPillar_Top/scripts.pory"
@ Rayquaza has unusual movement frames
# 146 "data/maps/SkyPillar_Top/scripts.pory"
@ See comments, or sAnimTable_Rayquaza
# 147 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaStir:
# 148 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 149 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_fast_left  @ Coiled, awake
# 150 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 151 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 152 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 153 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 154 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 155 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_left  @ Coiled, mouth open
# 156 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 157 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_right  @ Normal, awake
# 158 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 159 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 160 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 161 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 162 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 163 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 164 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 165 "data/maps/SkyPillar_Top/scripts.pory"

# 166 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaFlyOff:
# 167 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 168 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_down  @ Coiled, asleep
# 169 "data/maps/SkyPillar_Top/scripts.pory"
	delay_8
# 170 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_right  @ Normal, awake
# 171 "data/maps/SkyPillar_Top/scripts.pory"
	delay_8
# 172 "data/maps/SkyPillar_Top/scripts.pory"
	walk_faster_up  @ Fly up
# 173 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 174 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 175 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 176 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 177 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 178 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 179 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 180 "data/maps/SkyPillar_Top/scripts.pory"

# 181 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CameraPanUp:
# 182 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 183 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 184 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 185 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 186 "data/maps/SkyPillar_Top/scripts.pory"

# 187 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CameraPanDown:
# 188 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 189 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 190 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 191 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 192 "data/maps/SkyPillar_Top/scripts.pory"

# 193 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_RayquazaFlewOff:
# 194 "data/maps/SkyPillar_Top/scripts.pory"
	.string "The awakened Rayquaza flew off…$"
