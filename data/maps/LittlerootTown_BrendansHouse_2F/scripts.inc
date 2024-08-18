# 1 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 2 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
.set LOCALID_RIVAL, 1
# 3 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 4 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_MapScripts::
# 5 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_2F_OnTransition
# 6 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_BrendansHouse_2F_OnWarp
# 7 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.byte 0
# 8 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 9 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnTransition:
# 10 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_INTRO_STATE, 7, LittlerootTown_PlayersHouse_2F_EventScript_Vars
# 11 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan
# 12 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_ge VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos
# 13 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call SecretBase_EventScript_SetDecorationFlags
# 14 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 0
# 15 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 16 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 17 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos::
# 18 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
# 19 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_ge VAR_BIRCH_LAB_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 20 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
# 21 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 22 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos::
# 23 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 24 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 25 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	@ Odd that the BrendansHouse equivalent was used below instead
# 26 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 27 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 0, 2
# 28 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_UP
# 29 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 30 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 31 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_Ret::
# 32 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 33 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 34 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan::
# 35 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 36 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan
# 37 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 38 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 39 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan::
# 40 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 2
# 41 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 42 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 43 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnWarp:
# 44 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor
# 45 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.2byte 0
# 46 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 47 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor::
# 48 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 49 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, SecretBase_EventScript_InitDecorations
# 50 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 51 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 52 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_RivalsPokeBall::
# 53 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 54 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan
# 55 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_ItsRivalsPokeBall, MSGBOX_DEFAULT
# 56 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 57 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 58 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 59 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan::
# 60 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 10
# 61 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	addobject LOCALID_RIVAL
# 62 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanEnters
# 63 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 64 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PIN
# 65 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 66 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 67 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 68 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 69 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 10
# 70 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 71 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanNorth
# 72 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanSouth
# 73 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanWest
# 74 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanEast
# 75 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 76 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 77 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 78 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 79 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	savebgm MUS_DUMMY
# 80 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadedefaultbgm
# 81 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 82 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 83 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 84 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanNorth::
# 85 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerNorth
# 86 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 87 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 88 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 89 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 90 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call LittlerootTown_BrendansHouse_2F_EventScript_ChooseStarterSet
# 91 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_1F_Text_BrendanSomeOtherTime, MSGBOX_DEFAULT
# 92 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 93 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth
# 94 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCNorth
# 95 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 96 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 97 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 98 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanSouth::
# 99 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerSouth
# 100 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 101 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 102 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 103 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 104 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call LittlerootTown_BrendansHouse_2F_EventScript_ChooseStarterSet
# 105 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_1F_Text_BrendanSomeOtherTime, MSGBOX_DEFAULT
# 106 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 107 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth
# 108 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCSouth
# 109 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 110 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 111 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 112 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanWest::
# 113 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerWest
# 114 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 115 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 116 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 117 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 118 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call LittlerootTown_BrendansHouse_2F_EventScript_ChooseStarterSet
# 119 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_1F_Text_BrendanSomeOtherTime, MSGBOX_DEFAULT
# 120 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 121 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest
# 122 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCWest
# 123 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 124 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 125 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 126 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanEast::
# 127 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerEast
# 128 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 129 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 130 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 131 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 132 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call LittlerootTown_BrendansHouse_2F_EventScript_ChooseStarterSet
# 133 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_1F_Text_BrendanSomeOtherTime, MSGBOX_DEFAULT
# 134 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 135 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCEast
# 136 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 137 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 138 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 139 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanEnters:
# 140 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 141 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 142 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 143 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 144 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 145 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerNorth:
# 146 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 147 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 148 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 149 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 150 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 151 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 152 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 153 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCNorth:
# 154 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 155 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 156 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 157 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 158 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 159 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 160 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 161 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 162 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 163 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 164 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth:
# 165 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 166 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 167 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 168 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 169 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 170 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 171 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 172 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 173 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 174 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerSouth:
# 175 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 176 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 177 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 178 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 179 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 180 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCSouth:
# 181 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 182 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 183 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 184 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 185 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 186 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 187 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 188 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 189 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth:
# 190 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 191 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 192 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 193 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 194 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 195 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 196 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 197 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerWest:
# 198 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 199 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 200 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 201 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 202 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 203 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 204 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCWest:
# 205 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 206 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 207 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 208 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 209 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 210 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 211 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 212 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 213 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 214 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 215 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest:
# 216 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_8
# 217 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 218 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 219 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 220 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 221 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 222 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 223 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 224 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerEast:
# 225 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 226 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 227 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 228 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 229 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 230 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_down
# 231 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 232 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 233 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCEast:
# 234 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 235 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 236 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 237 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 238 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 239 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 240 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
@ Unused, the player is already facing this direction so its unneeded
# 241 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanEast:
# 242 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 243 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 244 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 245 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 246 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 247 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_PC::
# 248 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 249 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 250 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC
# 251 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC
# 252 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 253 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 254 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC::
# 255 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 256 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 257 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_ON
# 258 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 259 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special BedroomPC
# 260 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitstate
# 261 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 262 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 263 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 264 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TurnOffPlayerPC::
# 265 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 266 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 267 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 268 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 269 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 270 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 271 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC::
# 272 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 273 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 274 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 275 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 276 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_EventScript_Notebook::
# 277 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_Notebook, MSGBOX_SIGN
# 278 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 279 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 280 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_EventScript_GameCube::
# 281 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_ItsAGameCube, MSGBOX_SIGN
# 282 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 283 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 284 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_ChooseStarterSet::
# 285 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_REGION_NAMES
# 286 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special ShowScrollableMultichoice
# 287 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitstate
# 288 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	switch VAR_RESULT
# 289 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 0, LittlerootTown_BrendansHouse_2F_EventScript_Kanto
# 290 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 1, LittlerootTown_BrendansHouse_2F_EventScript_Johto
# 291 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 2, LittlerootTown_BrendansHouse_2F_EventScript_Hoenn
# 292 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 3, LittlerootTown_BrendansHouse_2F_EventScript_Sinnoh
# 293 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 4, LittlerootTown_BrendansHouse_2F_EventScript_Unova
# 294 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 5, LittlerootTown_BrendansHouse_2F_EventScript_Kalos
# 295 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 6, LittlerootTown_BrendansHouse_2F_EventScript_Alola
# 296 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 7, LittlerootTown_BrendansHouse_2F_EventScript_Galar
# 297 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 8, LittlerootTown_BrendansHouse_2F_EventScript_Paldea
# 298 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_Paldea
# 299 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 300 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 301 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_Kanto:
# 302 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_1F_Text_SureAboutRegion, MSGBOX_YESNO
# 303 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, NO
# 304 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_2F_EventScript_ChooseStarterSet
# 305 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_STARTER_GEN, 1
# 306 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	bufferstring 1, StarterRegionStringKanto
# 307 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 308 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_Johto:
# 309 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_1F_Text_SureAboutRegion, MSGBOX_YESNO
# 310 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, NO
# 311 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_2F_EventScript_ChooseStarterSet
# 312 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_STARTER_GEN, 2
# 313 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	bufferstring 1, StarterRegionStringJohto
# 314 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 315 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_Hoenn:
# 316 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_1F_Text_SureAboutRegion, MSGBOX_YESNO
# 317 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, NO
# 318 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_2F_EventScript_ChooseStarterSet
# 319 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_STARTER_GEN, 3
# 320 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	bufferstring 1, StarterRegionStringHoenn
# 321 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 322 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_Sinnoh:
# 323 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_1F_Text_SureAboutRegion, MSGBOX_YESNO
# 324 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, NO
# 325 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_2F_EventScript_ChooseStarterSet
# 326 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_STARTER_GEN, 4
# 327 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	bufferstring 1, StarterRegionStringSinnoh
# 328 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 329 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_Unova:
# 330 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_1F_Text_SureAboutRegion, MSGBOX_YESNO
# 331 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, NO
# 332 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_2F_EventScript_ChooseStarterSet
# 333 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_STARTER_GEN, 5
# 334 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	bufferstring 1, StarterRegionStringUnova
# 335 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 336 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_Kalos:
# 337 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_1F_Text_SureAboutRegion, MSGBOX_YESNO
# 338 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, NO
# 339 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_2F_EventScript_ChooseStarterSet
# 340 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_STARTER_GEN, 6
# 341 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	bufferstring 1, StarterRegionStringKalos
# 342 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 343 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_Alola:
# 344 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_1F_Text_SureAboutRegion, MSGBOX_YESNO
# 345 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, NO
# 346 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_2F_EventScript_ChooseStarterSet
# 347 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_STARTER_GEN, 7
# 348 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	bufferstring 1, StarterRegionStringAlola
# 349 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 350 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 351 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_Galar:
# 352 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_1F_Text_SureAboutRegion, MSGBOX_YESNO
# 353 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, NO
# 354 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_2F_EventScript_ChooseStarterSet
# 355 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_STARTER_GEN, 8
# 356 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	bufferstring 1, StarterRegionStringGalar
# 357 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 358 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 359 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_Paldea:
# 360 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_1F_Text_SureAboutRegion, MSGBOX_YESNO
# 361 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, NO
# 362 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_2F_EventScript_ChooseStarterSet
# 363 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_STARTER_GEN, 9
# 364 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	bufferstring 1, StarterRegionStringPaldea
# 365 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 366 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 367 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ClockIsStopped:
# 368 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The clock is stopped…\p"
# 369 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Better set it and start it!$"
# 370 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 371 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_HowDoYouLikeYourRoom:
# 372 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Mom: {PLAYER}, how do you like your\n"
# 373 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "new room?\p"
# 374 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Good! Everything's put away neatly!\p"
# 375 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "They finished moving everything in\n"
# 376 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "downstairs, too.\p"
# 377 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Pokémon movers are so convenient!\p"
# 378 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Oh, you should make sure that\n"
# 379 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "everything's all there on your desk.$"
# 380 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 381 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_Notebook:
# 382 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} flipped open the notebook.\p"
# 383 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Adventure Rule no. 1\n"
# 384 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Open the Menu with Start.\p"
# 385 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Adventure Rule no. 2\n"
# 386 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Record your progress with Save.\p"
# 387 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The remaining pages are blank…$"
# 388 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 389 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
Common_Text_LookCloserAtMap:
# 390 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} took a closer look at the\n"
# 391 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Hoenn region map.$"
# 392 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 393 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ItsAGameCube:
# 394 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's a Nintendo GameCube.\p"
# 395 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A Game Boy Advance is connected to\n"
# 396 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "serve as the Controller.$"
