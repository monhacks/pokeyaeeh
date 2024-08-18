# 1 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 2 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
.set LOCALID_MOM, 1
# 3 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
.set LOCALID_RIVAL_MOM, 4
# 4 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
.set LOCALID_RIVAL, 7
# 5 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 6 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_MapScripts::
# 7 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_BrendansHouse_1F_OnLoad
# 8 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_1F_OnTransition
# 9 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_1F_OnFrame
# 10 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.byte 0
# 11 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 12 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnLoad:
# 13 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes
# 14 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual
# 15 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 16 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 17 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes::
# 18 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 19 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
# 20 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 21 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 22 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual::
# 23 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	checkplayergender
# 24 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual
# 25 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 26 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 27 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual::
# 28 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 3, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 29 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 30 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 31 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnTransition:
# 32 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV
# 33 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 34 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 35 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs::
# 36 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 8, 4
# 37 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 38 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 39 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 40 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV::
# 41 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 4, 5
# 42 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 43 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 44 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 45 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor::
# 46 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 9, 8
# 47 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 48 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 49 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 50 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 51 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ The below SS Ticket script uses Mays house state by accident(?), but theyre both set identically after the intro
# 52 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnFrame:
# 53 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport
# 54 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 1, LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor
# 55 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 56 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.2byte 0
# 57 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 58 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock::
# 59 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 60 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 61 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 62 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 63 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 64 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 65 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 7, 1
# 66 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitstate
# 67 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 68 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 69 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 70 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs:
# 71 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 72 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 73 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 74 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn::
# 75 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 76 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 77 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 78 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 79 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 80 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 81 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport::
# 82 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 83 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, MALE
# 84 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_MOM
# 85 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportMale
# 86 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 87 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 88 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor::
# 89 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 90 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 91 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_ExclamationMark
# 92 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 93 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_Delay48
# 94 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 95 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 96 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach
# 97 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 98 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 99 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 100 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 101 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2
# 102 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 103 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 104 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 105 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach:
# 106 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 107 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 108 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 109 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 110 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 111 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 112 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 113 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 114 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom::
# 115 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 116 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 117 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 118 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 119 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 120 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 121 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 122 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 123 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival0::
# 124 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 125 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 126 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 127 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 128 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 129 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival1::
# 130 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 131 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 132 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 133 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 134 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 135 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival2::
# 136 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 137 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 138 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 139 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 140 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 141 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival::
# 142 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 143 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 10
# 144 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	addobject LOCALID_RIVAL
# 145 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 146 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 147 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 148 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 149 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 150 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 151 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan
# 152 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 153 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0
# 154 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1
# 155 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2
# 156 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 157 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call LittlerootTown_BrendansHouse_1F_EventScript_ChooseStarterSet
# 158 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_BrendanSomeOtherTime, MSGBOX_DEFAULT
# 159 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 160 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0
# 161 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1
# 162 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2
# 163 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 164 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	removeobject LOCALID_RIVAL
# 165 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 166 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 167 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 168 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 169 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 170 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 171 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 172 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	fadedefaultbgm
# 173 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 174 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 175 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 176 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan::
# 177 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 178 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 179 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 180 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 181 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0::
# 182 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0
# 183 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 184 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 185 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 186 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1::
# 187 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1
# 188 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 189 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 190 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 191 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2::
# 192 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2
# 193 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 194 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 195 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 196 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0:
# 197 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 198 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 199 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 200 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 201 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 202 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 203 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 204 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 205 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 206 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1:
# 207 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 208 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 209 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 210 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 211 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 212 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2:
# 213 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 214 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 215 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 216 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 217 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 218 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 219 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 220 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 221 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 222 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0::
# 223 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0
# 224 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0
# 225 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 226 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 227 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 228 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1::
# 229 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1
# 230 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1
# 231 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 232 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 233 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 234 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2::
# 235 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2
# 236 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2
# 237 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 238 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 239 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 240 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0:
# 241 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 242 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 243 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 244 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 245 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 246 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1:
# 247 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 248 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 249 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 250 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 251 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 252 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 253 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 254 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 255 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2:
# 256 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 257 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 258 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 259 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 260 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 261 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0:
# 262 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 263 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 264 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 265 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 266 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 267 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 268 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 269 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1:
# 270 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 271 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 272 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 273 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 274 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 275 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 276 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 277 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 278 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 279 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 280 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 281 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2:
# 282 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 283 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 284 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 285 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 286 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 287 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 288 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 289 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_ChooseStarterSet::
# 290 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_REGION_NAMES
# 291 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	special ShowScrollableMultichoice
# 292 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitstate
# 293 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	switch VAR_RESULT
# 294 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	case 0, LittlerootTown_BrendansHouse_1F_EventScript_Kanto
# 295 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	case 1, LittlerootTown_BrendansHouse_1F_EventScript_Johto
# 296 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	case 2, LittlerootTown_BrendansHouse_1F_EventScript_Hoenn
# 297 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	case 3, LittlerootTown_BrendansHouse_1F_EventScript_Sinnoh
# 298 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	case 4, LittlerootTown_BrendansHouse_1F_EventScript_Unova
# 299 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	case 5, LittlerootTown_BrendansHouse_1F_EventScript_Kalos
# 300 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	case 6, LittlerootTown_BrendansHouse_1F_EventScript_Alola
# 301 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	case 7, LittlerootTown_BrendansHouse_1F_EventScript_Galar
# 302 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	case 8, LittlerootTown_MaysHouse_1F_EventScript_Paldea
# 303 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_Paldea
# 304 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 305 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 306 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_Kanto:
# 307 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_SureAboutRegion, MSGBOX_YESNO
# 308 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_RESULT, NO
# 309 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_1F_EventScript_ChooseStarterSet
# 310 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_STARTER_GEN, 1
# 311 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	bufferstring 1, StarterRegionStringKanto
# 312 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 313 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_Johto:
# 314 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_SureAboutRegion, MSGBOX_YESNO
# 315 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_RESULT, NO
# 316 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_1F_EventScript_ChooseStarterSet
# 317 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_STARTER_GEN, 2
# 318 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	bufferstring 1, StarterRegionStringJohto
# 319 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 320 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_Hoenn:
# 321 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_SureAboutRegion, MSGBOX_YESNO
# 322 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_RESULT, NO
# 323 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_1F_EventScript_ChooseStarterSet
# 324 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_STARTER_GEN, 3
# 325 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	bufferstring 1, StarterRegionStringHoenn
# 326 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 327 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_Sinnoh:
# 328 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_SureAboutRegion, MSGBOX_YESNO
# 329 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_RESULT, NO
# 330 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_1F_EventScript_ChooseStarterSet
# 331 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_STARTER_GEN, 4
# 332 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	bufferstring 1, StarterRegionStringSinnoh
# 333 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 334 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_Unova:
# 335 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_SureAboutRegion, MSGBOX_YESNO
# 336 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_RESULT, NO
# 337 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_1F_EventScript_ChooseStarterSet
# 338 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_STARTER_GEN, 5
# 339 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	bufferstring 1, StarterRegionStringUnova
# 340 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 341 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_Kalos:
# 342 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_SureAboutRegion, MSGBOX_YESNO
# 343 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_RESULT, NO
# 344 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_1F_EventScript_ChooseStarterSet
# 345 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_STARTER_GEN, 6
# 346 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	bufferstring 1, StarterRegionStringKalos
# 347 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 348 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_Alola:
# 349 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_SureAboutRegion, MSGBOX_YESNO
# 350 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_RESULT, NO
# 351 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_1F_EventScript_ChooseStarterSet
# 352 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_STARTER_GEN, 7
# 353 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	bufferstring 1, StarterRegionStringAlola
# 354 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 355 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 356 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_Galar:
# 357 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_SureAboutRegion, MSGBOX_YESNO
# 358 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_RESULT, NO
# 359 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_1F_EventScript_ChooseStarterSet
# 360 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_STARTER_GEN, 8
# 361 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	bufferstring 1, StarterRegionStringGalar
# 362 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 363 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 364 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_Paldea:
# 365 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_SureAboutRegion, MSGBOX_YESNO
# 366 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_RESULT, NO
# 367 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_1F_EventScript_ChooseStarterSet
# 368 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_STARTER_GEN, 9
# 369 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	bufferstring 1, StarterRegionStringPaldea
# 370 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 371 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 372 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsntItNiceInHere:
# 373 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: See, {PLAYER}?\n"
# 374 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Isn't it nice in here, too?$"
# 375 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 376 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MoversPokemonGoSetClock:
# 377 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The mover's Pokémon do all the work\n"
# 378 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "of moving us in and cleaning up after.\l"
# 379 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "This is so convenient!\p"
# 380 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{PLAYER}, your room is upstairs.\n"
# 381 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go check it out, dear!\p"
# 382 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Dad bought you a new clock to mark\n"
# 383 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "our move here.\l"
# 384 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Don't forget to set it!$"
# 385 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 386 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ArentYouInterestedInRoom:
# 387 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: Well, {PLAYER}?\p"
# 388 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Aren't you interested in seeing your\n"
# 389 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "very own room?$"
# 390 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 391 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoSetTheClock:
# 392 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: {PLAYER}.\p"
# 393 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go set the clock in your room, honey.$"
# 394 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 395 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_OhComeQuickly:
# 396 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: Oh! {PLAYER}, {PLAYER}!\n"
# 397 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Quick! Come quickly!$"
# 398 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 399 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MaybeDadWillBeOn:
# 400 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: Look! It's Pokémon League!\n"
# 401 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Maybe the Champion will be on!$"
# 402 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 403 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ItsOverWeMissedHim:
# 404 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: Oh… It's over.\p"
# 405 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I think the Champion was on, but we\n"
# 406 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "missed him. Too bad.$"
# 407 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 408 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor:
# 409 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, yes.\n"
# 410 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "How about introducing yourself to our\l"
# 411 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "new neighbours?\p"
# 412 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go on, don't be a shy baby!$"
# 413 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 414 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_SeeYouHoney:
# 415 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: See you, honey!$"
# 416 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 417 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DidYouMeetProfBirch:
# 418 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: Did you introduce yourself to\n"
# 419 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "the Professor?$"
# 420 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 421 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_YouShouldRestABit:
# 422 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: How are you doing, {PLAYER}?\n"
# 423 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "You look a little tired.\p"
# 424 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I think you should rest a bit.$"
# 425 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 426 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TakeCareHoney:
# 427 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: Take care, honey!$"
# 428 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 429 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom:
# 430 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: Oh? You have that many Badges?\p"
# 431 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Here's something from your Mom!$"
# 432 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 433 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DontPushYourselfTooHard:
# 434 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Don't push yourself too hard, dear.\n"
# 435 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "You can always come home.\p"
# 436 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go for it, honey!$"
# 437 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 438 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatAPokenav:
# 439 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: What is that, honey? A PokéNav?\p"
# 440 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Well, honey, how about registering\n"
# 441 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "your mom?\p"
# 442 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "… … …$"
# 443 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 444 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RegisteredMom:
# 445 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Registered Mom\n"
# 446 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "in the PokéNav.$"
# 447 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 448 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth1:
# 449 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Fugiiiiih!$"
# 450 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 451 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth2:
# 452 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Huggoh, uggo uggo…$"
# 453 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 454 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ReportFromPetalburgGym:
# 455 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Interviewer: …We brought you this\n"
# 456 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "report from in front of the League!$"
# 457 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 458 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TheresAMovieOnTV:
# 459 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There is a movie on TV.\p"
# 460 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Two men are dancing on a big piano\n"
# 461 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "keyboard.\p"
# 462 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Better get going!$"
# 463 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 464 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RunningShoesManual:
# 465 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's the instruction booklet for the\n"
# 466 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Running Shoes.\p"
# 467 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "“Press the B Button to run while\n"
# 468 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "wearing your Running Shoes.\p"
# 469 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "“Lace up your Running Shoes and hit\n"
# 470 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "the road running!”$"
# 471 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 472 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TicketFromBrineyCameForYou:
# 473 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Dad: Hm?\p"
# 474 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 475 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's been a while since I saw you,\n"
# 476 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "but you look…stronger, somehow.\p"
# 477 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "That's the impression I get.\n"
# 478 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "But your old man hasn't given up yet!\p"
# 479 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, yes, I have something for you.\n"
# 480 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "This came to you from someone named\l"
# 481 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mr. Briney.$"
# 482 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 483 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_PortsInSlateportLilycove:
# 484 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Dad: Hm, a Ticket for a ferry?\p"
# 485 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "If I recall, there are ferry ports in\n"
# 486 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Slateport and Lilycove.$"
# 487 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 488 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_BetterGetBackToGym:
# 489 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I'd better get back to boring job.\p"
# 490 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom, thanks for looking after the house\n"
# 491 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while I'm away.$"
# 492 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 493 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DadShouldStayLonger:
# 494 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: That Dad of yours…\p"
# 495 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He comes home for the first time in a\n"
# 496 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while, but all he talks about is Pokémon.\p"
# 497 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He should relax and stay a little longer.$"
# 498 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 499 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatABreakingStory:
# 500 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: Is that a breaking news story?$"
# 501 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 502 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_LatiEmergencyNewsFlash:
# 503 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "We bring you this emergency\n"
# 504 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "news flash!\p"
# 505 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "In various Hoenn locales, there have\n"
# 506 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "been reports of a BZZT…colored\l"
# 507 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Pokémon in flight.\p"
# 508 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The identity of this Pokémon is\n"
# 509 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "currently unknown.\p"
# 510 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "We now return you to the regular\n"
# 511 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "movie program.$"
# 512 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 513 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_WhatColorDidTheySay:
# 514 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: {PLAYER}, did you catch that?\p"
# 515 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "What color did the announcer say\n"
# 516 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "that Pokémon was?$"
# 517 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 518 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_StillUnknownPokemon:
# 519 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: Well, isn't that something!\n"
# 520 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There are still unknown Pokémon.$"
