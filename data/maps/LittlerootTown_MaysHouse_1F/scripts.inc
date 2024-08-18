# 1 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 2 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
.set LOCALID_MOM, 1
# 3 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
.set LOCALID_RIVAL_MOM, 4
# 4 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
.set LOCALID_RIVAL, 7
# 5 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 6 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_MapScripts::
# 7 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_MaysHouse_1F_OnLoad
# 8 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_MaysHouse_1F_OnTransition
# 9 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_MaysHouse_1F_OnFrame
# 10 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.byte 0
# 11 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 12 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnLoad:
# 13 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_SetMovingBoxes
# 14 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual
# 15 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 16 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 17 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_SetMovingBoxes::
# 18 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 19 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
# 20 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 21 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 22 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual::
# 23 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	checkplayergender
# 24 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_1F_EventScript_ShowRunningShoesManual
# 25 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 26 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 27 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_ShowRunningShoesManual::
# 28 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 6, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 29 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 30 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 31 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnTransition:
# 32 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_MoveMomToTV
# 33 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 34 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 35 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToStairs::
# 36 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 2, 4
# 37 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 38 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 39 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 40 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToTV::
# 41 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 6, 5
# 42 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 43 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 44 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 45 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToDoor::
# 46 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 1, 8
# 47 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 48 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 49 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 50 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 51 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnFrame:
# 52 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport
# 53 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1, LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor
# 54 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 55 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.2byte 0
# 56 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 57 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock::
# 58 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 59 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 60 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 61 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 62 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 63 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 64 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_MAYS_HOUSE_2F, 1, 1
# 65 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitstate
# 66 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 67 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 68 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 69 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs:
# 70 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 71 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 72 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 73 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_EnterHouseMovingIn::
# 74 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 75 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 76 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 77 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 78 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 79 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 80 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport::
# 81 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 82 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, FEMALE
# 83 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_MOM
# 84 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportFemale
# 85 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 86 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 87 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor::
# 88 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 89 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 90 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_ExclamationMark
# 91 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 92 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_Delay48
# 93 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 94 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 95 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach
# 96 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 97 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 98 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 99 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 100 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2
# 101 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 102 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 103 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 104 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach:
# 105 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_down
# 106 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 107 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 108 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 109 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 110 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 111 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 112 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 113 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalMom::
# 114 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 115 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 116 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE103, RivalsHouse_1F_EventScript_GoHomeEverySoOften
# 117 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, RivalsHouse_1F_EventScript_RivalIsOnRoute103
# 118 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, RivalsHouse_1F_EventScript_RivalTooBusy
# 119 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 120 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_LikeChildLikeFather, MSGBOX_DEFAULT
# 121 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 122 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 123 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 124 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalTooBusy::
# 125 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_TooBusyToNoticeVisit, MSGBOX_DEFAULT
# 126 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 127 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 128 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 129 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalIsOnRoute103::
# 130 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_WentOutToRoute103, MSGBOX_DEFAULT
# 131 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 132 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 133 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 134 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_GoHomeEverySoOften::
# 135 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_ShouldGoHomeEverySoOften, MSGBOX_DEFAULT
# 136 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 137 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 138 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 139 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalSibling::
# 140 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 141 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 142 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetPlayerBigGuyGirlString
# 143 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_DoYouHavePokemon, MSGBOX_DEFAULT
# 144 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 145 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 146 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 147 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoSeeRoom::
# 148 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 149 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 150 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 151 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterRight
# 152 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 153 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 154 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 155 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 156 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival0::
# 157 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 158 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 159 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 160 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 161 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 162 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival1::
# 163 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 164 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 165 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 166 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 167 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 168 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival2::
# 169 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 170 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 171 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 172 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 173 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 174 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival::
# 175 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_EXIT
# 176 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 10
# 177 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	addobject LOCALID_RIVAL
# 178 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 30
# 179 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 180 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 181 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 182 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 183 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 184 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay
# 185 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 186 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0
# 187 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1
# 188 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2
# 189 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 190 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call LittlerootTown_MaysHouse_1F_EventScript_ChooseStarterSet
# 191 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_MayCatchYouLater, MSGBOX_DEFAULT
# 192 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 193 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0
# 194 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1
# 195 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2
# 196 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_EXIT
# 197 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	removeobject LOCALID_RIVAL
# 198 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY
# 199 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 200 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 201 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 30
# 202 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 203 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 204 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 205 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	fadedefaultbgm
# 206 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 207 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 208 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 209 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay::
# 210 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 211 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 212 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 213 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 214 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0::
# 215 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0
# 216 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 217 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 218 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 219 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1::
# 220 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1
# 221 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 222 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 223 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 224 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2::
# 225 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2
# 226 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 227 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 228 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 229 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0:
# 230 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 231 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 232 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 233 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 234 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 235 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 236 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 237 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 238 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 239 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1:
# 240 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 241 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 242 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 243 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 244 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 245 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2:
# 246 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 247 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 248 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 249 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 250 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 251 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 252 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 253 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 254 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 255 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0::
# 256 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0
# 257 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0
# 258 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 259 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 260 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 261 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1::
# 262 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1
# 263 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1
# 264 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 265 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 266 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 267 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2::
# 268 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2
# 269 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2
# 270 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 271 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 272 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 273 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0:
# 274 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 275 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 276 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 277 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 278 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 279 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1:
# 280 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 281 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 282 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 283 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 284 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 285 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 286 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 287 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 288 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2:
# 289 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 290 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 291 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 292 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 293 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 294 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0:
# 295 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 296 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 297 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 298 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 299 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 300 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 301 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 302 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1:
# 303 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 304 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 305 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 306 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 307 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 308 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 309 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 310 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 311 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 312 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 313 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 314 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2:
# 315 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 316 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 317 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 318 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 319 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 320 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 321 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 322 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_ChooseStarterSet::
# 323 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_REGION_NAMES
# 324 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special ShowScrollableMultichoice
# 325 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitstate
# 326 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	switch VAR_RESULT
# 327 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	case 0, LittlerootTown_MaysHouse_1F_EventScript_Kanto
# 328 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	case 1, LittlerootTown_MaysHouse_1F_EventScript_Johto
# 329 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	case 2, LittlerootTown_MaysHouse_1F_EventScript_Hoenn
# 330 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	case 3, LittlerootTown_MaysHouse_1F_EventScript_Sinnoh
# 331 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	case 4, LittlerootTown_MaysHouse_1F_EventScript_Unova
# 332 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	case 5, LittlerootTown_MaysHouse_1F_EventScript_Kalos
# 333 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	case 6, LittlerootTown_MaysHouse_1F_EventScript_Alola
# 334 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	case 7, LittlerootTown_MaysHouse_1F_EventScript_Galar
# 335 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	case 8, LittlerootTown_MaysHouse_1F_EventScript_Paldea
# 336 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_Paldea
# 337 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 338 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 339 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_Kanto:
# 340 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_SureAboutRegion, MSGBOX_YESNO
# 341 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, NO
# 342 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_1F_EventScript_ChooseStarterSet
# 343 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_STARTER_GEN, 1
# 344 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	bufferstring 1, StarterRegionStringKanto
# 345 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 346 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_Johto:
# 347 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_SureAboutRegion, MSGBOX_YESNO
# 348 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, NO
# 349 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_1F_EventScript_ChooseStarterSet
# 350 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_STARTER_GEN, 2
# 351 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	bufferstring 1, StarterRegionStringJohto
# 352 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 353 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_Hoenn:
# 354 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_SureAboutRegion, MSGBOX_YESNO
# 355 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, NO
# 356 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_1F_EventScript_ChooseStarterSet
# 357 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_STARTER_GEN, 3
# 358 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	bufferstring 1, StarterRegionStringHoenn
# 359 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 360 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_Sinnoh:
# 361 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_SureAboutRegion, MSGBOX_YESNO
# 362 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, NO
# 363 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_1F_EventScript_ChooseStarterSet
# 364 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_STARTER_GEN, 4
# 365 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	bufferstring 1, StarterRegionStringSinnoh
# 366 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 367 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_Unova:
# 368 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_SureAboutRegion, MSGBOX_YESNO
# 369 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, NO
# 370 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_1F_EventScript_ChooseStarterSet
# 371 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_STARTER_GEN, 5
# 372 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	bufferstring 1, StarterRegionStringUnova
# 373 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 374 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_Kalos:
# 375 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_SureAboutRegion, MSGBOX_YESNO
# 376 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, NO
# 377 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_1F_EventScript_ChooseStarterSet
# 378 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_STARTER_GEN, 6
# 379 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	bufferstring 1, StarterRegionStringKalos
# 380 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 381 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_Alola:
# 382 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_SureAboutRegion, MSGBOX_YESNO
# 383 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, NO
# 384 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_1F_EventScript_ChooseStarterSet
# 385 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_STARTER_GEN, 7
# 386 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	bufferstring 1, StarterRegionStringAlola
# 387 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 388 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 389 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_Galar:
# 390 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_SureAboutRegion, MSGBOX_YESNO
# 391 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, NO
# 392 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_1F_EventScript_ChooseStarterSet
# 393 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_STARTER_GEN, 8
# 394 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	bufferstring 1, StarterRegionStringGalar
# 395 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 396 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 397 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_Paldea:
# 398 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_SureAboutRegion, MSGBOX_YESNO
# 399 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, NO
# 400 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_1F_EventScript_ChooseStarterSet
# 401 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_STARTER_GEN, 9
# 402 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	bufferstring 1, StarterRegionStringPaldea
# 403 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 404 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 405 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_OhYoureTheNewNeighbor:
# 406 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, hello. And you are?\p"
# 407 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … … …\n"
# 408 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … … …\p"
# 409 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, you're {PLAYER}{KUN}, our new next-door\n"
# 410 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "neighbor! Hi!\p"
# 411 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "We have a {STR_VAR_1} about the same\n"
# 412 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "age as you.\p"
# 413 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Our {STR_VAR_1} was excited about making\n"
# 414 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "a new friend.\p"
# 415 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Our {STR_VAR_1} is upstairs, I think.$"
# 416 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 417 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_LikeChildLikeFather:
# 418 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Like child, like father.\p"
# 419 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "My husband is as wild about Pokémon\n"
# 420 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "as our child.\p"
# 421 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "If he's not at his Lab, he's likely\n"
# 422 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "scrabbling about in grassy places.$"
# 423 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 424 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_TooBusyToNoticeVisit:
# 425 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "That {RIVAL}!\p"
# 426 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I guess our child is too busy with\n"
# 427 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Pokémon to notice that you came\l"
# 428 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "to visit, {PLAYER}{KUN}.$"
# 429 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 430 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_WentOutToRoute103:
# 431 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, {RIVAL} went out to Route 103\n"
# 432 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "just a little while ago.\p"
# 433 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Like father, like child.\n"
# 434 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{RIVAL} can't stay quietly at home.$"
# 435 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 436 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_ShouldGoHomeEverySoOften:
# 437 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I think it's wonderful for people to\n"
# 438 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "travel with Pokémon.\p"
# 439 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "But you should go home every so often\n"
# 440 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "to let your mother know you're okay.\p"
# 441 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "She might not say it, but I'm sure she\n"
# 442 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "worries about you, {PLAYER}{KUN}.$"
# 443 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 444 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_MayWhoAreYou:
# 445 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Huh?\n"
# 446 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Who… Who are you?\p"
# 447 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … …\n"
# 448 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … …\p"
# 449 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, you're {PLAYER}{KUN}.\n"
# 450 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "So your move was today.\p"
# 451 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Um… I'm May.\n"
# 452 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Glad to meet you!\p"
# 453 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I…\n"
# 454 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I have this dream of becoming friends\l"
# 455 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "with Pokémon all over the world.\p"
# 456 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I… I heard about you, {PLAYER}{KUN}, from\n"
# 457 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "my dad, Prof. Birch.\p"
# 458 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I was hoping that you would be nice,\n"
# 459 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{PLAYER}{KUN}, and that we could be friends.\p"
# 460 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, this is silly, isn't it?\n"
# 461 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I… I've just met you, {PLAYER}{KUN}.\p"
# 462 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Eheheh…\p"
# 463 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, no! I forgot!\p"
# 464 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I was supposed to go help Dad catch\n"
# 465 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "some wild Pokémon!\p"
# 466 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh! You should come too! My dad\n"
# 467 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "just got three new Pokémon from uh…\p"
# 468 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Darn. Where was it from again?$"
# 469 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 470 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_MayCatchYouLater:
# 471 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{STR_VAR_2}, huh?\n"
# 472 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Wow, I think that was it!\p"
# 473 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{PLAYER}{KUN}, I'll catch you later!$"
# 474 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 475 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_BrendanWhoAreYou:
# 476 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Hey!\n"
# 477 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "You…\p"
# 478 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Who are you?\p"
# 479 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, you're {PLAYER}, aren't you?\n"
# 480 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Moved in next door, right?\p"
# 481 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I didn't know that you're a girl.\p"
# 482 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Dad, Prof. Birch, said that our new\n"
# 483 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "next-door neighbor is a kid, so I\l"
# 484 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "assumed you'd be a boy.\p"
# 485 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "My name's Brendan.\n"
# 486 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "So, hi, neighbor!\p"
# 487 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Huh? Hey, {PLAYER}, don't you have\n"
# 488 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "a Pokémon?\p"
# 489 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Do you want me to go catch you one?\p"
# 490 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Aw, darn, I forgot…\p"
# 491 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I'm supposed to go help my dad catch\n"
# 492 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "some wild Pokémon!\p"
# 493 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, you should check out the\n"
# 494 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "new Pokémon my dad just got.\p"
# 495 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "They're very cool! And they're all\n"
# 496 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "from, uh…\p"
# 497 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Hmm. Where was it from again?$"
# 498 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 499 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_BrendanSomeOtherTime:
# 500 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Hmm. {STR_VAR_2}, huh?\n"
# 501 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I think that was it, actually.\p"
# 502 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Some other time, okay?$"
# 503 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 504 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_DoYouHavePokemon:
# 505 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Hi, neighbor!\p"
# 506 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Do you already have your\n"
# 507 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "own Pokémon?$"
# 508 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 509 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
StarterRegionStringKanto::
# 510 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Kanto$"
# 511 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 512 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
StarterRegionStringJohto::
# 513 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Johto$"
# 514 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 515 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
StarterRegionStringHoenn::
# 516 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Hoenn$"
# 517 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 518 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
StarterRegionStringSinnoh::
# 519 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Sinnoh$"
# 520 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 521 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
StarterRegionStringUnova::
# 522 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Unova$"
# 523 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 524 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
StarterRegionStringKalos::
# 525 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Kalos$"
# 526 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 527 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
StarterRegionStringAlola::
# 528 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Alola$"
# 529 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 530 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
StarterRegionStringGalar::
# 531 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Galar$"
# 532 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 533 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
StarterRegionStringPaldea::
# 534 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
    .string "Paldea$"
# 535 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 536 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_SureAboutRegion::
# 537 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Are you sure about the region?$"
# 538 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 539 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_Which_Region::
# 540 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, darn. Which region was it again?$"
