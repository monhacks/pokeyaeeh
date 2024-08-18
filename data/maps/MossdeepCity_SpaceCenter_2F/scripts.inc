# 1 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 2 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_RICH_BOY, 1
# 3 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_GENTLEMAN, 2
# 4 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_SCIENTIST, 3
# 5 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_WALLY, 4
# 6 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
@ Grunt names numbered like their Trainer values (which are for the full Space Center)
# 7 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_GRUNT_6, 5
# 8 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_GRUNT_5, 6
# 9 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_GRUNT_7, 7
# 10 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_TABITHA, 8
# 11 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_MAXIE, 9
# 12 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 13 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_MapScripts::
# 14 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_SpaceCenter_2F_OnTransition
# 15 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_SpaceCenter_2F_OnFrame
# 16 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.byte 0
# 17 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 18 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_OnTransition:
# 19 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_MoveCivilians
# 20 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call_if_eq VAR_MOSSDEEP_SPACE_CENTER_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_MoveDefeatedGrunts
# 21 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 22 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 23 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_MoveCivilians::
# 24 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 5, 3
# 25 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
# 26 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_RICH_BOY, 3, 2
# 27 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_RICH_BOY, MOVEMENT_TYPE_FACE_RIGHT
# 28 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_GENTLEMAN, 1, 3
# 29 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_GENTLEMAN, MOVEMENT_TYPE_FACE_RIGHT
# 30 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 31 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 32 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_MoveDefeatedGrunts::
# 33 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_GRUNT_6, 11, 2
# 34 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_GRUNT_7, 15, 2
# 35 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_GRUNT_5, 13, 4
# 36 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 37 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 38 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_OnFrame:
# 39 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	map_script_2 VAR_MOSSDEEP_SPACE_CENTER_STATE, 1, MossdeepCity_SpaceCenter_2F_EventScript_ThreeMagmaGrunts
# 40 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.2byte 0
# 41 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 42 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ThreeMagmaGrunts::
# 43 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	playse SE_PIN
# 44 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 45 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 46 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 47 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 48 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_YoureOutnumberedTakeUsOn, MSGBOX_YESNO
# 49 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MossdeepCity_SpaceCenter_2F_EventScript_BattleThreeMagmaGrunts
# 50 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_GoodAnswer, MSGBOX_DEFAULT
# 51 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 52 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_SpaceCenter_2F_Movement_PlayerExit
# 53 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 54 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	warp MAP_MOSSDEEP_CITY_SPACE_CENTER_1F, 13, 1
# 55 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitstate
# 56 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 57 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 58 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 59 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_PlayerExit:
# 60 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_up
# 61 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 62 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 63 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_BattleThreeMagmaGrunts::
# 64 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt5Intro, MSGBOX_DEFAULT
# 65 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SPACE_CENTER_5, MossdeepCity_SpaceCenter_2F_Text_Grunt5Defeat
# 66 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_GRUNT_5, MossdeepCity_SpaceCenter_2F_Movement_Grunt5Defeated
# 67 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 68 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 69 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 70 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt6Intro, MSGBOX_DEFAULT
# 71 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SPACE_CENTER_6, MossdeepCity_SpaceCenter_2F_Text_Grunt6Defeat
# 72 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_GRUNT_6, MossdeepCity_SpaceCenter_2F_Movement_Grunt6Defeated
# 73 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 74 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 75 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 76 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt7Intro, MSGBOX_DEFAULT
# 77 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SPACE_CENTER_7, MossdeepCity_SpaceCenter_2F_Text_Grunt7Defeat
# 78 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_GRUNT_7, MossdeepCity_SpaceCenter_2F_Movement_Grunt7Defeated
# 79 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 80 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 2
# 81 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	copyobjectxytoperm LOCALID_GRUNT_6
# 82 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	copyobjectxytoperm LOCALID_GRUNT_7
# 83 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	copyobjectxytoperm LOCALID_GRUNT_5
# 84 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 85 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 86 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 87 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_Grunt6Defeated:
# 88 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 89 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 90 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 91 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 92 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 93 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_Grunt5Defeated:
# 94 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 95 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_down
# 96 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 97 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 98 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 99 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_Grunt7Defeated:
# 100 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 101 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_right
# 102 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 103 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 104 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 105 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Scientist::
# 106 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 107 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 108 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal
# 109 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_ScientistMagma
# 110 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal
# 111 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_ScientistMagma
# 112 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 113 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 114 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal::
# 115 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MossdeepIdealForRockets, MSGBOX_DEFAULT
# 116 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 117 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 118 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 119 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ScientistMagma::
# 120 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WhyWouldMagmaStealRocketFuel, MSGBOX_DEFAULT
# 121 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 122 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 123 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 124 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Gentleman::
# 125 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 126 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 127 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_GentlemanNormal
# 128 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_GentlemanMagma
# 129 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_GentlemanNormal
# 130 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_GentlemanMagma
# 131 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 132 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 133 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_GentlemanNormal::
# 134 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WouldveLikedToBeAstronaut, MSGBOX_DEFAULT
# 135 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 136 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 137 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 138 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_GentlemanMagma::
# 139 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MagmaCantGetAwayWithThis, MSGBOX_DEFAULT
# 140 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 141 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 142 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 143 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RichBoy::
# 144 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 145 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 146 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_RichBoyNormal
# 147 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_RichBoyMagma
# 148 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_RichBoyNormal
# 149 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_RichBoyMagma
# 150 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 151 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 152 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RichBoyNormal::
# 153 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WishOrdinaryPeopleCouldGoIntoSpace, MSGBOX_DEFAULT
# 154 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 155 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 156 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 157 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RichBoyMagma::
# 158 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_DoesMagmaWantToGoToSpace, MSGBOX_DEFAULT
# 159 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 160 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 161 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 162 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
@ Battle for the below 3 grunts is handled in MossdeepCity_SpaceCenter_2F_EventScript_BattleThreeMagmaGrunts
# 163 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Grunt6::
# 164 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt6PostBattle, MSGBOX_NPC
# 165 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 166 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 167 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Grunt7::
# 168 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt7PostBattle, MSGBOX_NPC
# 169 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 170 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 171 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Grunt5::
# 172 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt5PostBattle, MSGBOX_NPC
# 173 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 174 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 175 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Tabitha::
# 176 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 177 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 178 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WellTakeCareOfYou, MSGBOX_DEFAULT
# 179 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 180 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 181 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 182 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 183 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 184 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Maxie::
# 185 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lockall
# 186 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieDontInterfere, MSGBOX_DEFAULT
# 187 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 188 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 189 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 190 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Trigger1::
# 191 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	playse SE_PIN
# 192 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 193 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 194 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 195 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 196 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_SpaceCenter_2F_Movement_Player1
# 197 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 198 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_MagmaCutscene
# 199 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 200 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_Player1:
# 201 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 202 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 203 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 204 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_up
# 205 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 206 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	face_down
# 207 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 208 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 209 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Trigger2::
# 210 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	playse SE_PIN
# 211 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 212 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 213 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 214 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 215 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_SpaceCenter_2F_Movement_Player2
# 216 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 217 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_MagmaCutscene
# 218 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 219 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_Player2:
# 220 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 221 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 222 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 223 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 224 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	face_down
# 225 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 226 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 227 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Trigger3::
# 228 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	playse SE_PIN
# 229 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 230 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 231 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 232 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 233 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_SpaceCenter_2F_Movement_Player3
# 234 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 235 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_MagmaCutscene
# 236 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 237 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_Player3:
# 238 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 239 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 240 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 241 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 242 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_down
# 243 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_down
# 244 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 245 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 246 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Trigger4::
# 247 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	playse SE_PIN
# 248 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 249 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 250 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 251 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 252 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_SpaceCenter_2F_Movement_Player4
# 253 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 254 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_MagmaCutscene
# 255 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 256 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_Player4:
# 257 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 258 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 259 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 260 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 261 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_down
# 262 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_down
# 263 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_down
# 264 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 265 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 266 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_MagmaQuestion::
# 267 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	playse SE_PIN
# 268 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_QuestionMark
# 269 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	playse SE_PIN
# 270 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_QuestionMark
# 271 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	playse SE_PIN
# 272 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 273 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 274 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 275 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 276 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 277 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 278 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 279 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 280 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 281 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_MagmaCutscene::
# 282 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lockall
# 283 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieUseFuelToEruptVolcano, MSGBOX_DEFAULT
# 284 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 285 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 20
# 286 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WallyHoldUp, MSGBOX_AUTOCLOSE
# 287 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call MossdeepCity_SpaceCenter_2F_EventScript_MagmaQuestion
# 288 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	addobject LOCALID_WALLY
# 289 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxy LOCALID_WALLY, 9, 8
# 290 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_WALLY, MossdeepCity_SpaceCenter_2F_Movement_Wally
# 291 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 292 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt
# 293 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 294 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 295 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 296 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 297 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_Wally:
# 298 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 299 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 300 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 301 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 302 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 303 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 304 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 305 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 306 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 307 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt::
# 308 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 309 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 310 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WallyAreYouReadyToBattle, MSGBOX_DEFAULT
# 311 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle
# 312 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 313 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 314 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 315 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle::
# 316 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterDown
# 317 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 318 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special SavePlayerParty
# 319 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 320 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special ChooseHalfPartyForBattle
# 321 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitstate
# 322 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_ne VAR_RESULT, 0, MossdeepCity_SpaceCenter_2F_EventScript_DoWallyMultiBattle
# 323 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special LoadPlayerParty
# 324 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt
# 325 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 326 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_DoWallyMultiBattle::
# 327 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FaceDown
# 328 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 329 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 330 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
    setvar B_VAR_STARTING_STATUS, STARTING_STATUS_TRICK_ROOM
# 331 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	multi_2_vs_2 TRAINER_MAXIE_MOSSDEEP, MossdeepCity_SpaceCenter_2F_Text_JustWantToExpandLand, TRAINER_TABITHA_MOSSDEEP, MossdeepCity_SpaceCenter_Text_TabithaDefeat, PARTNER_WALLY, TRAINER_BACK_PIC_WALLY
# 332 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
    setvar B_VAR_STARTING_STATUS, 0
# 333 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_RESULT
# 334 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case 1, MossdeepCity_SpaceCenter_2F_EventScript_DefeatedMaxieTabitha
# 335 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 336 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special SetCB2WhiteOut
# 337 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitstate
# 338 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 339 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_DefeatedMaxieTabitha::
# 340 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 341 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieWeFailedIsAquaAlsoMisguided, MSGBOX_DEFAULT
# 342 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 343 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 20
# 344 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterLeft
# 345 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterDown
# 346 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 347 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 60
# 348 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterUp
# 349 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 350 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 351 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 20
# 352 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieWeWillGiveUp, MSGBOX_DEFAULT
# 353 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 354 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 3
# 355 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadedefaultbgm
# 356 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 357 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 3
# 358 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
# 359 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
# 360 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 361 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_GRUNT_6
# 362 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_GRUNT_7
# 363 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_GRUNT_5
# 364 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_TABITHA
# 365 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_MAXIE
# 366 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxy LOCALID_SCIENTIST, 5, 6
# 367 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_SCIENTIST, DIR_SOUTH
# 368 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxy LOCALID_GENTLEMAN, 11, 8
# 369 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_GENTLEMAN, DIR_NORTH
# 370 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxy LOCALID_RICH_BOY, 6, 2
# 371 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_RICH_BOY, DIR_NORTH
# 372 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 373 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 374 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 375 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 376 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 377 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WallyThankYouComeSeeMeAtHome, MSGBOX_AUTOCLOSE
# 378 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	giveitem ITEM_HM_DIVE
# 379 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WallyExplainDive, MSGBOX_DEFAULT
# 380 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 381 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 382 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_DEFEATED_MAGMA_SPACE_CENTER
# 383 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_WALLY
# 384 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
# 385 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
# 386 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ENTRANCE_AQUA_GRUNT
# 387 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SCIENTIST
# 388 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 5, 6
# 389 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_SCIENTIST, MOVEMENT_TYPE_WANDER_AROUND
# 390 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	addobject LOCALID_SCIENTIST
# 391 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 392 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special InitRoamer
# 393 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 394 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 395 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RivalRayquazaCall::
# 396 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lockall
# 397 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	checkplayergender
# 398 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, MossdeepCity_SpaceCenter_2F_EventScript_MayRayquazaCall
# 399 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, MossdeepCity_SpaceCenter_2F_EventScript_BrendanRayquazaCall
# 400 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 401 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	clearflag FLAG_DEFEATED_MAGMA_SPACE_CENTER
# 402 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 403 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 404 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 405 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_MayRayquazaCall::
# 406 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	pokenavcall MatchCall_Text_MayRayquazaCall
# 407 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 408 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 409 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 410 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_BrendanRayquazaCall::
# 411 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	pokenavcall MatchCall_Text_BrendanRayquazaCall
# 412 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 413 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 414 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 415 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MossdeepIdealForRockets:
# 416 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Mossdeep has mainly sunny weather,\n"
# 417 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "and its winds are stable.\p"
# 418 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "It's an ideal location for launching\n"
# 419 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "rockets.$"
# 420 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 421 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WhyWouldMagmaStealRocketFuel:
# 422 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Why would Team Magma want to steal\n"
# 423 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "our rocket fuel in the first place?$"
# 424 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 425 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WouldveLikedToBeAstronaut:
# 426 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If only I was a little younger, I would\n"
# 427 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "have liked being an astronaut…\p"
# 428 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "No… It's not too late!\n"
# 429 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I can and will try!$"
# 430 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 431 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MagmaCantGetAwayWithThis:
# 432 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If Team Magma takes the rocket fuel,\n"
# 433 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I won't be able to go to space!\p"
# 434 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "They can't be allowed to get away\n"
# 435 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "with such an outrage!$"
# 436 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 437 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WishOrdinaryPeopleCouldGoIntoSpace:
# 438 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I wish ordinary people could go into\n"
# 439 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "space one day…$"
# 440 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 441 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_DoesMagmaWantToGoToSpace:
# 442 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Team Magma…\n"
# 443 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Do they want to go to space, too?$"
# 444 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 445 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_YoureOutnumberedTakeUsOn:
# 446 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "What's wrong with you?\p"
# 447 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "You're outnumbered three to one,\n"
# 448 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "but you still want to take us on?$"
# 449 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 450 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_GoodAnswer:
# 451 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Good answer!\n"
# 452 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "That's what a smart person'll do!$"
# 453 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 454 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt5Intro:
# 455 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "A reckless go-getter, are you?\n"
# 456 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Okay, I'll go first!$"
# 457 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 458 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt5Defeat:
# 459 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I lost!\n"
# 460 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "But!$"
# 461 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 462 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt6Intro:
# 463 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "It's too soon to be relieved!\n"
# 464 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I'm up next!$"
# 465 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 466 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt6Defeat:
# 467 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I lost, too!\n"
# 468 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "But!$"
# 469 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 470 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt7Intro:
# 471 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I bet you want to take a break.\n"
# 472 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "But I'm not about to let you do that!$"
# 473 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 474 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt7Defeat:
# 475 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We should've taken a break…\n"
# 476 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "That's what we should've done…$"
# 477 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 478 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt6PostBattle:
# 479 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Three of us here, and look at the sorry\n"
# 480 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "mess we got ourselves into.$"
# 481 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 482 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt7PostBattle:
# 483 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We three losing like this…\n"
# 484 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We look worse than usual by triple!$"
# 485 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 486 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt5PostBattle:
# 487 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Are we being useful to our leader\n"
# 488 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "at all?$"
# 489 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 490 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WellTakeCareOfYou:
# 491 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Hehehe!\p"
# 492 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We come all the way here to get some\n"
# 493 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "fuel, and we're interfered with again!\p"
# 494 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If you're going to mess with us too,\n"
# 495 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "we'll take care of you at the same time!$"
# 496 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 497 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MaxieDontInterfere:
# 498 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Maxie: Clear out of the way!\n"
# 499 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Don't you dare interfere!$"
# 500 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 501 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WallyWhyStealRocketFuel:
# 502 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Mystic: Team Magma…\p"
# 503 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "What's the point of stealing rocket\n"
# 504 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "fuel?$"
# 505 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 506 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MaxieUseFuelToEruptVolcano:
# 507 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Maxie: Fufufu…\n"
# 508 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Hello, {PLAYER}.\p"
# 509 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We're going to jettison the entire\n"
# 510 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "load into Mt. Chimney!\p"
# 511 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "With Groudon gone, we have no need\n"
# 512 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "for that slag heap of a mountain!\p"
# 513 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "So we'll use the fuel's power to make\n"
# 514 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "the volcano erupt!\p"
# 515 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "It will be savage!\p"
# 516 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "You think you can stop us?\p"
# 517 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "You're all alone, {PLAYER}!\p"
# 518 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "… … … … …$"
# 519 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 520 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WallyHoldUp:
# 521 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "???: Hold up!$"
# 522 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 523 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WallyAreYouReadyToBattle:
# 524 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Wally: {PLAYER}{KUN}!\p"
# 525 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "These thugs are too strong for you to\n"
# 526 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "take on, alone!\p"
# 527 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Let's go into battle together!$"
# 528 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 529 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_JustWantToExpandLand:
# 530 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "All I want…\n"
# 531 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I just want to expand the land mass…$"
# 532 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 533 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_Text_TabithaDefeat:
# 534 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I'm with our leader…$"
# 535 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 536 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MaxieWeFailedIsAquaAlsoMisguided:
# 537 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Maxie: We failed to make the volcano\n"
# 538 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "erupt…\p"
# 539 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We failed to control Groudon after\n"
# 540 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "we had awoken it…\p"
# 541 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Is our goal to expand the land\n"
# 542 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "misguided?\p"
# 543 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "… … … … … …\n"
# 544 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "… … … … … …\p"
# 545 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If…\n"
# 546 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If we, Team Magma, are wrong…\l"
# 547 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "… … … … … …\p"
# 548 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Then might Team Aqua's goal to expand\n"
# 549 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "the sea also be equally misguided?$"
# 550 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 551 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MaxieWeWillGiveUp:
# 552 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Maxie: All right…\n"
# 553 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We will give up on the fuel…\p"
# 554 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "There appear to be more important\n"
# 555 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "matters that I must examine…$"
# 556 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 557 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WallyThankYouComeSeeMeAtHome:
# 558 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Wally: Whew, that was too tense.\p"
# 559 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "{PLAYER}{KUN}, you're really awesome!\p"
# 560 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "You must be heading toward Sootopolis\n"
# 561 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "City, right?\p"
# 562 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "This might be helpful to you!$"
# 563 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 564 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WallyExplainDive:
# 565 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "HM08 is Dive.\p"
# 566 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "It'll allow you to dive underwater and\n"
# 567 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "explore new areas!\p"
# 568 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "You'll need it to reach Sootopolis.\p"
# 569 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "See you soon, {PLAYER}!$"
