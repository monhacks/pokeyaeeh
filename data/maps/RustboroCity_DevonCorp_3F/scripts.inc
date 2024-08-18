# 1 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 2 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 2
# 3 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 4 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_MapScripts::
# 5 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_3F_OnTransition
# 6 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RustboroCity_DevonCorp_3F_OnWarp
# 7 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_DevonCorp_3F_OnFrame
# 8 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.byte 0
# 9 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 10 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_OnTransition:
# 11 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	call_if_eq VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_SetEmployeePos
# 12 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 13 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 14 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_SetEmployeePos::
# 15 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 3, 2
# 16 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_LEFT
# 17 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	return
# 18 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 19 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_OnWarp:
# 20 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script_2 VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_PlayerFaceEast
# 21 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.2byte 0
# 22 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 23 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_PlayerFaceEast::
# 24 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 25 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 26 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 27 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_OnFrame:
# 28 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script_2 VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_MeetPresident
# 29 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.2byte 0
# 30 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 31 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MeetPresident::
# 32 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lockall
# 33 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ThisIs3rdFloorWaitHere, MSGBOX_DEFAULT
# 34 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 35 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeWalkOffscreen
# 36 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 37 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay 80
# 38 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeReturnToPlayer
# 39 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 40 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_WordWithPresidentComeWithMe, MSGBOX_DEFAULT
# 41 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 42 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 43 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_LeadPlayerToPresident
# 44 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_DevonCorp_3F_Movement_PlayerFollowToPresident
# 45 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 46 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_PleaseGoAhead, MSGBOX_DEFAULT
# 47 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 48 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	fadedefaultbgm
# 49 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeFaceDesk
# 50 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_DevonCorp_3F_Movement_PlayerApproachDesk
# 51 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 52 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneIHaveFavor, MSGBOX_DEFAULT
# 53 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 54 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	message RustboroCity_DevonCorp_3F_Text_ReceivedPokenav
# 55 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitfanfare
# 56 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 57 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_RECEIVED_POKENAV
# 58 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_POKEMON_SCHOOL_SCOTT
# 59 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneExplainPokenavRestUp, MSGBOX_DEFAULT
# 60 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 61 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneGoWithCautionAndCare, MSGBOX_DEFAULT
# 62 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_WANDAS_BOYFRIEND
# 63 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND
# 64 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDA
# 65 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 66 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 67 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_BRINEY_LOCATION, 1
# 68 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 69 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_DEVON_CORP_3F_STATE, 1
# 70 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 6
# 71 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	releaseall
# 72 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 73 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 74 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_Unused:
# 75 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 76 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 77 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 78 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_left
# 79 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 80 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 81 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_LeadPlayerToPresident:
# 82 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 83 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 84 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 85 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 86 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 87 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 88 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 89 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 90 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 91 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 92 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 93 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 94 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 95 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_left
# 96 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 97 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 98 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_EmployeeFaceDesk:
# 99 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 100 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_down
# 101 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 102 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 103 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_EmployeeWalkOffscreen:
# 104 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 105 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 106 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 107 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 108 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 109 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 110 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 111 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 112 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 113 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 114 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_EmployeeReturnToPlayer:
# 115 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 116 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 117 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 118 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 119 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 120 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 121 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 122 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 123 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 124 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 125 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_PlayerFollowToPresident:
# 126 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 127 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 128 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 129 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 130 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 131 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 132 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 133 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 134 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 135 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 136 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 137 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 138 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 139 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 140 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 141 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_PlayerApproachDesk:
# 142 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 143 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 144 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 145 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 146 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_right
# 147 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 148 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 149 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MrStone::
# 150 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lock
# 151 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	faceplayer
# 152 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_RECEIVED_EXP_SHARE, RustboroCity_DevonCorp_3F_EventScript_MrStoneAfterFavor
# 153 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_DELIVERED_DEVON_GOODS, RustboroCity_DevonCorp_3F_EventScript_GiveExpShare
# 154 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_CountingOnYou, MSGBOX_DEFAULT
# 155 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 156 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 157 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 158 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 159 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 160 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 161 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_GiveExpShare::
# 162 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ThankYouForDeliveringLetter, MSGBOX_DEFAULT
# 163 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_QUICK_BALL, 10
# 164 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 165 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_RECEIVED_EXP_SHARE
# 166 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ExplainExpShare, MSGBOX_DEFAULT
# 167 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 168 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 169 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 170 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 171 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 172 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 173 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MrStoneAfterFavor::
# 174 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_NotFamiliarWithTrends, MSGBOX_DEFAULT
# 175 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 176 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 177 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 178 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 179 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 180 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 181 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_Employee::
# 182 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lock
# 183 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	faceplayer
# 184 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_RECEIVED_REPEAT_BALL, RustboroCity_DevonCorp_3F_EventScript_EmployeeBalls
# 185 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_VisitCaptSternShipyard, MSGBOX_DEFAULT
# 186 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 187 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 188 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 189 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_EmployeeBalls::
# 190 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_RepeatAndTimerHugelyPopular, MSGBOX_DEFAULT
# 191 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 192 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 193 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 194 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_RareRocksDisplay::
# 195 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_RareRocksDisplay, MSGBOX_SIGN
# 196 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 197 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 198 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneIHaveFavor:
# 199 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I'm Mr. Stone, the President of\n"
# 200 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "the Devon Corporation.\p"
# 201 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I'd just got word about you!\p"
# 202 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "You saved our staff not just once,\n"
# 203 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "but twice!\p"
# 204 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Oh I see you're delivering a package\n"
# 205 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "to Slateport's Shipyard.\p"
# 206 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Now, you should know that\n"
# 207 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I am a great President.\p"
# 208 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "So, I'd never be so cheap as to ask\n"
# 209 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "a favor for nothing in return.\p"
# 210 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "That's why I want you to have this!$"
# 211 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 212 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ReceivedPokenav:
# 213 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "{PLAYER} received a PokéNav.$"
# 214 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 215 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneExplainPokenavRestUp:
# 216 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Mr. Stone: That device…\p"
# 217 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It's a Pokémon Navigator, or PokéNav\n"
# 218 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "for short.\p"
# 219 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It's an indispensable tool for any\n"
# 220 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Trainer on an adventure.\p"
# 221 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It has a map of the Hoenn region.\p"
# 222 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "You can check the locations of\n"
# 223 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Hoenn easily!\p"
# 224 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "You can also use the DexNav\n"
# 225 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "feature to check what species of\l"
# 226 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Pokémon are around you.\p"
# 227 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It'll make searching for them,\n"
# 228 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "very easy!\p"
# 229 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Just click {R_BUTTON} on a Pokémon to\n"
# 230 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "register it on the DexNav and search.\p"
# 231 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "By the way, I've heard that sinister\n"
# 232 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "criminals--Magma and Aqua, I believe--\l"
# 233 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "have been making trouble far and wide.\p"
# 234 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I think it would be best if you rested\n"
# 235 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "up before you go on your way.$"
# 236 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 237 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneGoWithCautionAndCare:
# 238 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Mr. Stone: Well, then, {PLAYER}{KUN},\n"
# 239 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "go with caution and care!$"
# 240 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 241 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_CountingOnYou:
# 242 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Mr. Stone: I'm counting on you!$"
# 243 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 244 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ThankYouForDeliveringLetter:
# 245 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Mr. Stone: You delivered my Goods?\n"
# 246 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Thank you kindly!\p"
# 247 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "This is my way of thanking you.\n"
# 248 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It should help you, a Trainer.$"
# 249 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 250 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ExplainExpShare:
# 251 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Mr. Stone: The Quick Ball is a new kind\n"
# 252 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "of Poké Ball we developed here.\p"
# 253 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It has a higher chance of catching a\n"
# 254 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Pokémon when used on the first turn!\p"
# 255 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I would say QUick Ball is quite useful\n"
# 256 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "for catching Pokémon.$"
# 257 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 258 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_NotFamiliarWithTrends:
# 259 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Mr. Stone: Since my youth, I've immersed\n"
# 260 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "myself in work.\p"
# 261 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Consequently, I'm not familiar with\n"
# 262 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "trends and that sort of thing.\p"
# 263 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "But do young people all want to be\n"
# 264 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Trainers in the Pokémon League?$"
# 265 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 266 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ThisIs3rdFloorWaitHere:
# 267 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "This is the Devon Corporation's\n"
# 268 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "third floor.\p"
# 269 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Our President's Office is on\n"
# 270 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "this floor.\p"
# 271 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Anyway, I can't tell you how much I'm\n"
# 272 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "grateful for what you've done.\p"
# 273 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Um… By the way, that parcel\n"
# 274 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "you got back for us…\p"
# 275 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Could I get you to deliver that to\n"
# 276 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "the Shipyard in Slateport?\p"
# 277 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It would be awful if those robbers\n"
# 278 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "tried to take it again.\p"
# 279 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Uh… Hehehe, so, uh, could I count\n"
# 280 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "on you to do that for me?\p"
# 281 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Oh, that's right.\n"
# 282 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Could you wait here a second?$"
# 283 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 284 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_WordWithPresidentComeWithMe:
# 285 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Our President would like to have\n"
# 286 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "a word with you.\p"
# 287 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Please come with me.$"
# 288 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 289 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_PleaseGoAhead:
# 290 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Please, go ahead.$"
# 291 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 292 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_VisitCaptSternShipyard:
# 293 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "If you visit the Shipyard in Slateport,\n"
# 294 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "you should go see Capt. Stern.$"
# 295 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 296 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_RepeatAndTimerHugelyPopular:
# 297 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Devon's new products, the Repeat Ball\n"
# 298 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "and Timer Ball, have become hugely\l"
# 299 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "popular among Trainers.$"
# 300 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 301 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_RareRocksDisplay:
# 302 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It's a collection of rare rocks and\n"
# 303 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "stones assembled by the President.$"
