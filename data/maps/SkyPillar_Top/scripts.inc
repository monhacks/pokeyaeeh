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
SkyPillar_Top_EventScript_AwakenRayquaza::
# 51 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 52 "data/maps/SkyPillar_Top/scripts.pory"
	fadeoutbgm 1
# 53 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 54 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 55 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 56 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_CameraPanUp
# 57 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 58 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 59 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaStir
# 60 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 61 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 62 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 63 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 64 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 65 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 66 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 67 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 68 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 69 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 70 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 71 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 72 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 73 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 74 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 75 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 76 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 77 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 78 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaFlyOff
# 79 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 80 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_RAYQUAZA_SLEEPING
# 81 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_RayquazaFlewOff, MSGBOX_DEFAULT
# 82 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 83 "data/maps/SkyPillar_Top/scripts.pory"
	delay 20
# 84 "data/maps/SkyPillar_Top/scripts.pory"
	fadeinbgm 1
# 85 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 86 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_CameraPanDown
# 87 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 88 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 89 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 6
# 90 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 1
# 91 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_RAYQUAZA_CRY_DONE, 1
# 92 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 93 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 94 "data/maps/SkyPillar_Top/scripts.pory"

# 95 "data/maps/SkyPillar_Top/scripts.pory"
@ Rayquaza has unusual movement frames
# 96 "data/maps/SkyPillar_Top/scripts.pory"
@ See comments, or sAnimTable_Rayquaza
# 97 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaStir:
# 98 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 99 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_fast_left  @ Coiled, awake
# 100 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 101 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 102 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 103 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 104 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 105 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_left  @ Coiled, mouth open
# 106 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 107 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_right  @ Normal, awake
# 108 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 109 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 110 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 111 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 112 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 113 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 114 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 115 "data/maps/SkyPillar_Top/scripts.pory"

# 116 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaFlyOff:
# 117 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 118 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_down  @ Coiled, asleep
# 119 "data/maps/SkyPillar_Top/scripts.pory"
	delay_8
# 120 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_right  @ Normal, awake
# 121 "data/maps/SkyPillar_Top/scripts.pory"
	delay_8
# 122 "data/maps/SkyPillar_Top/scripts.pory"
	walk_faster_up  @ Fly up
# 123 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 124 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 125 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 126 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 127 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 128 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 129 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 130 "data/maps/SkyPillar_Top/scripts.pory"

# 131 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CameraPanUp:
# 132 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 133 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 134 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 135 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 136 "data/maps/SkyPillar_Top/scripts.pory"

# 137 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CameraPanDown:
# 138 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 139 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 140 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 141 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 142 "data/maps/SkyPillar_Top/scripts.pory"

# 143 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_RayquazaFlewOff:
# 144 "data/maps/SkyPillar_Top/scripts.pory"
	.string "The awakened Rayquaza flew off…$"

SkyPillar_Top_EventScript_Rayquaza::
# 148 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 149 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 150 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 151 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 152 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 153 "data/maps/SkyPillar_Top/scripts.pory"
	setvar B_VAR_STARTING_STATUS, STARTING_STATUS_TAILWIND_OPPONENT
# 154 "data/maps/SkyPillar_Top/scripts.pory"
	settotemboost 1, 2, 2, 2, 2, 2, 0, 0
# 155 "data/maps/SkyPillar_Top/scripts.pory"
	setwildbattle SPECIES_RAYQUAZA, 0, ITEM_ROSELI_BERRY, NATURE_HARDY, 0, 100, 152, 0, 156, 100, 0, 31, 31, 31, 31, 31, 31, MOVE_DRAGON_ASCENT, MOVE_DRACO_METEOR, MOVE_EARTHQUAKE, MOVE_V_CREATE, FALSE
# 156 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 157 "data/maps/SkyPillar_Top/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 158 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 159 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 160 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_DEFEATED_RAYQUAZA
# 161 "data/maps/SkyPillar_Top/scripts.pory"
	setvar B_VAR_STARTING_STATUS, 0
# 162 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 163 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, SkyPillar_Top_EventScript_DefeatedRayquaza
# 164 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_RanFromRayquaza
# 165 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
	end


SkyPillar_Top_EventScript_DefeatedRayquaza::
# 170 "data/maps/SkyPillar_Top/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 171 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
	end


SkyPillar_Top_EventScript_RanFromRayquaza::
# 176 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_RAYQUAZA
# 177 "data/maps/SkyPillar_Top/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
	end

