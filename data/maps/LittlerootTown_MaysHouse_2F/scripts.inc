# 1 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 2 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
.set LOCALID_RIVAL, 1
# 3 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 4 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_MapScripts::
# 5 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_MaysHouse_2F_OnTransition
# 6 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_MaysHouse_2F_OnWarp
# 7 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.byte 0
# 8 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 9 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_OnTransition:
# 10 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_INTRO_STATE, 7, LittlerootTown_PlayersHouse_2F_EventScript_Vars
# 11 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_CheckSetReadyToMeetMay
# 12 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_ge VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos
# 13 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call SecretBase_EventScript_SetDecorationFlags
# 14 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 0
# 15 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 16 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 17 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos::
# 18 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos
# 19 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_ge VAR_BIRCH_LAB_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 20 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos
# 21 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 22 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos::
# 23 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 24 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 25 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 26 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 8, 2
# 27 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_UP
# 28 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 29 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 30 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_Ret::
# 31 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 32 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 33 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckSetReadyToMeetMay::
# 34 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 35 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_MaysHouse_2F_EventScript_SetReadyToMeetMay
# 36 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 37 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 38 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_SetReadyToMeetMay::
# 39 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 2
# 40 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 41 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 42 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_OnWarp:
# 43 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, LittlerootTown_MaysHouse_2F_EventScript_CheckInitDecor
# 44 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.2byte 0
# 45 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 46 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckInitDecor::
# 47 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 48 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, SecretBase_EventScript_InitDecorations
# 49 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 50 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 51 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_RivalsPokeBall::
# 52 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 53 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_MeetMay
# 54 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_ItsRivalsPokeBall, MSGBOX_DEFAULT
# 55 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 56 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 57 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 58 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMay::
# 59 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay 10
# 60 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	addobject LOCALID_RIVAL
# 61 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayEnters
# 62 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 63 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PIN
# 64 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 65 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 66 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 67 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 68 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay 10
# 69 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 70 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, LittlerootTown_MaysHouse_2F_EventScript_MeetMayNorth
# 71 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, LittlerootTown_MaysHouse_2F_EventScript_MeetMaySouth
# 72 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, LittlerootTown_MaysHouse_2F_EventScript_MeetMayWest
# 73 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, LittlerootTown_MaysHouse_2F_EventScript_MeetMayEast
# 74 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 75 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 76 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 77 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 78 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	savebgm MUS_DUMMY
# 79 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	fadedefaultbgm
# 80 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 81 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 82 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 83 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMayNorth::
# 84 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerNorth
# 85 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 86 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 87 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 88 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 89 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call LittlerootTown_MaysHouse_2F_EventScript_ChooseStarterSet
# 90 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_1F_Text_MayCatchYouLater, MSGBOX_DEFAULT
# 91 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 92 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayNorth
# 93 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCNorth
# 94 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 95 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 96 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 97 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMaySouth::
# 98 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerSouth
# 99 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 100 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 101 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 102 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 103 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call LittlerootTown_MaysHouse_2F_EventScript_ChooseStarterSet
# 104 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_1F_Text_MayCatchYouLater, MSGBOX_DEFAULT
# 105 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 106 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMaySouth
# 107 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCSouth
# 108 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 109 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 110 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 111 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMayWest::
# 112 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerWest
# 113 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 114 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 115 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 116 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 117 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call LittlerootTown_MaysHouse_2F_EventScript_ChooseStarterSet
# 118 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_1F_Text_MayCatchYouLater, MSGBOX_DEFAULT
# 119 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 120 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCWest
# 121 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 122 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 123 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 124 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMayEast::
# 125 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerEast
# 126 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 127 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 128 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 129 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 130 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call LittlerootTown_MaysHouse_2F_EventScript_ChooseStarterSet
# 131 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_1F_Text_MayCatchYouLater, MSGBOX_DEFAULT
# 132 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 133 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayEast
# 134 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCEast
# 135 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 136 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 137 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 138 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayEnters:
# 139 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 140 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 141 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 142 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 143 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 144 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerNorth:
# 145 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 146 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 147 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 148 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 149 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 150 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 151 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 152 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCNorth:
# 153 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 154 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 155 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 156 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 157 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 158 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 159 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 160 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 161 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 162 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 163 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 164 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayNorth:
# 165 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 166 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 167 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 168 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 169 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 170 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 171 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 172 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 173 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 174 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerSouth:
# 175 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 176 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 177 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 178 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 179 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 180 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCSouth:
# 181 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 182 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 183 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 184 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 185 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 186 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 187 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 188 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 189 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 190 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMaySouth:
# 191 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 192 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 193 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 194 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 195 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 196 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 197 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 198 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerWest:
# 199 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 200 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 201 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 202 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 203 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 204 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_down
# 205 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 206 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 207 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCWest:
# 208 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 209 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 210 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 211 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 212 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 213 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 214 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
@ Unused, the player is already facing this direction so its unneeded
# 215 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayWest:
# 216 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 217 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 218 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 219 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 220 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 221 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerEast:
# 222 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 223 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 224 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 225 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 226 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 227 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 228 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCEast:
# 229 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 230 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 231 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 232 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 233 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 234 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 235 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 236 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 237 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 238 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 239 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayEast:
# 240 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 241 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 242 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 243 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 244 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 245 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 246 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 247 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_Rival::
# 248 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 249 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, RivalsHouse_2F_EventScript_RivalPostLilycove
# 250 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 251 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RivalsHouse_2F_EventScript_May
# 252 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RivalsHouse_2F_EventScript_Brendan
# 253 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 254 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 255 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_May::
# 256 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayGettingReady, MSGBOX_DEFAULT
# 257 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 258 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 259 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 260 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_Brendan::
# 261 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanGettingReady, MSGBOX_DEFAULT
# 262 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 263 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 264 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 265 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_RivalPostLilycove::
# 266 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 267 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 268 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 269 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, RivalsHouse_2F_EventScript_MayPostLilycove
# 270 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, RivalsHouse_2F_EventScript_BrendanPostLilycove
# 271 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setflag FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE
# 272 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 273 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 274 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 275 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_MayPostLilycove::
# 276 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE, RivalsHouse_2F_EventScript_MayWhereShouldIGoNext
# 277 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayJustCheckingMyPokedex, MSGBOX_DEFAULT
# 278 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 279 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 280 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_BrendanPostLilycove::
# 281 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE, RivalsHouse_2F_EventScript_BrendanWhereShouldIGoNext
# 282 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanJustCheckingMyPokedex, MSGBOX_DEFAULT
# 283 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 284 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 285 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_MayWhereShouldIGoNext::
# 286 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhereShouldIGoNext, MSGBOX_DEFAULT
# 287 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 288 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 289 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_BrendanWhereShouldIGoNext::
# 290 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhereShouldIGoNext, MSGBOX_DEFAULT
# 291 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 292 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 293 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_PC::
# 294 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 295 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 296 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_MaysHouse_2F_EventScript_CheckRivalsPC
# 297 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_2F_EventScript_CheckPlayersPC
# 298 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 299 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 300 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckRivalsPC::
# 301 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 302 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 303 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 304 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 305 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckPlayersPC::
# 306 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_MAYS_HOUSE
# 307 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 308 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PC_ON
# 309 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 310 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special BedroomPC
# 311 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitstate
# 312 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 313 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 314 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 315 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_TurnOffPlayerPC::
# 316 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_MAYS_HOUSE
# 317 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 318 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 319 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 320 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 321 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 322 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_ChooseStarterSet::
# 323 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_REGION_NAMES
# 324 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special ShowScrollableMultichoice
# 325 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitstate
# 326 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	switch VAR_RESULT
# 327 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	case 0, LittlerootTown_MaysHouse_2F_EventScript_Kanto
# 328 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	case 1, LittlerootTown_MaysHouse_2F_EventScript_Johto
# 329 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	case 2, LittlerootTown_MaysHouse_2F_EventScript_Hoenn
# 330 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	case 3, LittlerootTown_MaysHouse_2F_EventScript_Sinnoh
# 331 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	case 4, LittlerootTown_MaysHouse_2F_EventScript_Unova
# 332 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	case 5, LittlerootTown_MaysHouse_2F_EventScript_Kalos
# 333 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	case 6, LittlerootTown_MaysHouse_2F_EventScript_Alola
# 334 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	case 7, LittlerootTown_MaysHouse_2F_EventScript_Galar
# 335 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	case 8, LittlerootTown_MaysHouse_2F_EventScript_Paldea
# 336 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_Paldea
# 337 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 338 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 339 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_Kanto:
# 340 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_1F_Text_SureAboutRegion, MSGBOX_YESNO
# 341 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, NO
# 342 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_2F_EventScript_ChooseStarterSet
# 343 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_STARTER_GEN, 1
# 344 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	bufferstring 1, StarterRegionStringKanto
# 345 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 346 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_Johto:
# 347 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_1F_Text_SureAboutRegion, MSGBOX_YESNO
# 348 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, NO
# 349 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_2F_EventScript_ChooseStarterSet
# 350 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_STARTER_GEN, 2
# 351 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	bufferstring 1, StarterRegionStringJohto
# 352 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 353 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_Hoenn:
# 354 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_1F_Text_SureAboutRegion, MSGBOX_YESNO
# 355 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, NO
# 356 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_2F_EventScript_ChooseStarterSet
# 357 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_STARTER_GEN, 3
# 358 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	bufferstring 1, StarterRegionStringHoenn
# 359 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 360 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_Sinnoh:
# 361 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_1F_Text_SureAboutRegion, MSGBOX_YESNO
# 362 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, NO
# 363 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_2F_EventScript_ChooseStarterSet
# 364 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_STARTER_GEN, 4
# 365 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	bufferstring 1, StarterRegionStringSinnoh
# 366 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 367 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_Unova:
# 368 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_1F_Text_SureAboutRegion, MSGBOX_YESNO
# 369 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, NO
# 370 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_2F_EventScript_ChooseStarterSet
# 371 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_STARTER_GEN, 5
# 372 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	bufferstring 1, StarterRegionStringUnova
# 373 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 374 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_Kalos:
# 375 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_1F_Text_SureAboutRegion, MSGBOX_YESNO
# 376 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, NO
# 377 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_2F_EventScript_ChooseStarterSet
# 378 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_STARTER_GEN, 6
# 379 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	bufferstring 1, StarterRegionStringKalos
# 380 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 381 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_Alola:
# 382 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_1F_Text_SureAboutRegion, MSGBOX_YESNO
# 383 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, NO
# 384 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_2F_EventScript_ChooseStarterSet
# 385 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_STARTER_GEN, 7
# 386 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	bufferstring 1, StarterRegionStringAlola
# 387 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 388 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 389 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_Galar:
# 390 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_1F_Text_SureAboutRegion, MSGBOX_YESNO
# 391 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, NO
# 392 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_2F_EventScript_ChooseStarterSet
# 393 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_STARTER_GEN, 8
# 394 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	bufferstring 1, StarterRegionStringGalar
# 395 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 396 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 397 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_Paldea:
# 398 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_1F_Text_SureAboutRegion, MSGBOX_YESNO
# 399 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, NO
# 400 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_2F_EventScript_ChooseStarterSet
# 401 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_STARTER_GEN, 9
# 402 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	bufferstring 1, StarterRegionStringPaldea
# 403 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 404 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 405 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayWhoAreYou:
# 406 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Huh?\n"
# 407 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Who… Who are you?\p"
# 408 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "… … … … … … … …\n"
# 409 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "… … … … … … … …\p"
# 410 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Oh, you're {PLAYER}{KUN}.\n"
# 411 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "So your move was today.\p"
# 412 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Um… I'm May.\n"
# 413 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Glad to meet you!\p"
# 414 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I…\n"
# 415 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I have this dream of becoming friends\l"
# 416 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "with Pokémon all over the world.\p"
# 417 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I… I heard about you, {PLAYER}{KUN}, from\n"
# 418 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "my dad, Prof. Birch.\p"
# 419 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I was hoping that you would be nice,\n"
# 420 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "{PLAYER}{KUN}, and that we could be friends.\p"
# 421 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Oh, this is silly, isn't it?\n"
# 422 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I… I've just met you, {PLAYER}{KUN}.\p"
# 423 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Eheheh…\p"
# 424 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Oh, no! I forgot!\p"
# 425 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I was supposed to go help Dad catch\n"
# 426 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "some wild Pokémon!\p"
# 427 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Oh! You should come too! My dad\n"
# 428 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "just got three new Pokémon from uh…\p"
# 429 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Darn. Where was it from again?$"
# 430 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 431 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayCatchYouLater:
# 432 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "{STR_VAR_2}, huh?\n"
# 433 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Wow, I think that was it!\p"
# 434 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "{PLAYER}{KUN}, I'll catch you later!$"
# 435 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 436 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayGettingReady:
# 437 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Pokémon fully restored!\n"
# 438 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Items ready, and…$"
# 439 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 440 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanWhoAreYou:
# 441 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Hey!\n"
# 442 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "You…\p"
# 443 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Who are you?\p"
# 444 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Oh, you're {PLAYER}, aren't you?\n"
# 445 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Moved in next door, right?\p"
# 446 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I didn't know that you're a girl.\p"
# 447 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Dad, Prof. Birch, said that our new\n"
# 448 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "next-door neighbor is a Gym Leader's\l"
# 449 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "kid, so I assumed you'd be a guy.\p"
# 450 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "My name's Brendan.\n"
# 451 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "So, hi, neighbor!\p"
# 452 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Huh? Hey, {PLAYER}, don't you have\n"
# 453 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "a Pokémon?\p"
# 454 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Do you want me to go catch you one?\p"
# 455 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Aw, darn, I forgot…\p"
# 456 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I'm supposed to go help my dad catch\n"
# 457 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "some wild Pokémon.\p"
# 458 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Oh, you should go check out the\n"
# 459 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "new Pokémon my dad just got.\p"
# 460 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "They're very cool! And they're all\n"
# 461 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "from, uh…\p"
# 462 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Hmm. Where was it from again?$"
# 463 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 464 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanSomeOtherTime:
# 465 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "{STR_VAR_2}, huh?\n"
# 466 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I think that was it, actually.\p"
# 467 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Some other time, okay?$"
# 468 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 469 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanGettingReady:
# 470 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Pokémon fully restored…\n"
# 471 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Items all packed, and…$"
# 472 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 473 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_ItsRivalsPokeBall:
# 474 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "It's {RIVAL}'s Poké Ball!\p"
# 475 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Better leave it right where it is.$"
# 476 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 477 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayJustCheckingMyPokedex:
# 478 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "May: {PLAYER}{KUN}!\p"
# 479 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I was just checking my Pokédex.\p"
# 480 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "There's still a lot of Pokémon that\n"
# 481 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I've seen but haven't caught.\p"
# 482 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "And there are many others that\n"
# 483 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I think will evolve.\p"
# 484 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I wonder where I should go catch\n"
# 485 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "some Pokémon next?$"
# 486 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 487 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayWhereShouldIGoNext:
# 488 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "May: I wonder where I should go catch\n"
# 489 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "some Pokémon next?\p"
# 490 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Wouldn't it be funny if we ran into each\n"
# 491 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "other, {PLAYER}{KUN}?$"
# 492 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 493 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanJustCheckingMyPokedex:
# 494 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Brendan: Hey, it's {PLAYER}.\p"
# 495 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I was just checking out my Pokédex.\p"
# 496 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "There are still many Pokémon that\n"
# 497 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I need to catch, I know, but this\l"
# 498 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "is looking pretty good.\p"
# 499 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Checking this Pokédex out gives me\n"
# 500 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "the urge to hit the road again.$"
# 501 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 502 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanWhereShouldIGoNext:
# 503 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Brendan: I'm having a hard time deciding\n"
# 504 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "where I should catch Pokémon next.\p"
# 505 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Hey, {PLAYER}, if I see you while I'm out\n"
# 506 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "catching Pokémon, I can pitch you a\l"
# 507 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "battle if you'd like.$"
