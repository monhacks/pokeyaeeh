# 1 "data/maps/MtChimney/scripts.pory"

# 2 "data/maps/MtChimney/scripts.pory"
.set LOCALID_ARCHIE, 1
# 3 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAXIE, 2
# 4 "data/maps/MtChimney/scripts.pory"
.set LOCALID_TABITHA, 3
# 5 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAGMA_GRUNT_2, 22
# 6 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAGMA_GRUNT_1, 29
# 7 "data/maps/MtChimney/scripts.pory"

# 8 "data/maps/MtChimney/scripts.pory"

# 9 "data/maps/MtChimney/scripts.pory"
MtChimney_MapScripts::
# 10 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtChimney_OnResume
# 11 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtChimney_OnTransition
# 12 "data/maps/MtChimney/scripts.pory"
	.byte 0
# 13 "data/maps/MtChimney/scripts.pory"

# 14 "data/maps/MtChimney/scripts.pory"
MtChimney_OnTransition:
# 15 "data/maps/MtChimney/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 1
# 16 "data/maps/MtChimney/scripts.pory"
	end
# 17 "data/maps/MtChimney/scripts.pory"

# 18 "data/maps/MtChimney/scripts.pory"
MtChimney_OnResume:
# 19 "data/maps/MtChimney/scripts.pory"
	setstepcallback STEP_CB_ASH
# 20 "data/maps/MtChimney/scripts.pory"
	end
# 21 "data/maps/MtChimney/scripts.pory"

# 22 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Archie::
# 23 "data/maps/MtChimney/scripts.pory"
	lock
# 24 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 25 "data/maps/MtChimney/scripts.pory"
	call_if_unset FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieGoStopTeamMagma
# 26 "data/maps/MtChimney/scripts.pory"
	call_if_set FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieBusyFighting
# 27 "data/maps/MtChimney/scripts.pory"
	closemessage
# 28 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceOriginalDirection
# 29 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 30 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_EVIL_LEADER_PLEASE_STOP
# 31 "data/maps/MtChimney/scripts.pory"
	release
# 32 "data/maps/MtChimney/scripts.pory"
	end
# 33 "data/maps/MtChimney/scripts.pory"

# 34 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieGoStopTeamMagma::
# 35 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieGoStopTeamMagma, MSGBOX_DEFAULT
# 36 "data/maps/MtChimney/scripts.pory"
	return
# 37 "data/maps/MtChimney/scripts.pory"

# 38 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieBusyFighting::
# 39 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieIHaveMyHandsFull, MSGBOX_DEFAULT
# 40 "data/maps/MtChimney/scripts.pory"
	return
# 41 "data/maps/MtChimney/scripts.pory"

# 42 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie::
# 43 "data/maps/MtChimney/scripts.pory"
	lockall
# 44 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 45 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoriteWillActivateVolcano, MSGBOX_DEFAULT
# 46 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FacePlayer
# 47 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 48 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 49 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 50 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 51 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_Delay48
# 52 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 53 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieIntro, MSGBOX_DEFAULT
# 54 "data/maps/MtChimney/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MT_CHIMNEY, MtChimney_Text_MaxieDefeat
# 55 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieYouHaventSeenLastOfMagma, MSGBOX_DEFAULT
# 56 "data/maps/MtChimney/scripts.pory"
	closemessage
# 57 "data/maps/MtChimney/scripts.pory"
	delay 30
# 58 "data/maps/MtChimney/scripts.pory"
	setvar B_VAR_STARTING_STATUS, 0
# 59 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 60 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAXIE
# 61 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_1
# 62 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_TABITHA
# 63 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_2
# 64 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 65 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 66 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 10, 12
# 67 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_ARCHIE
# 68 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieApproachPlayerEast
# 69 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieApproachPlayerNorth
# 70 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 71 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 72 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
# 73 "data/maps/MtChimney/scripts.pory"
	closemessage
# 74 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieExitEast
# 75 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieExitNorth
# 76 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_ARCHIE
# 77 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 78 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 79 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 80 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 81 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 82 "data/maps/MtChimney/scripts.pory"
	releaseall
# 83 "data/maps/MtChimney/scripts.pory"
	end
# 84 "data/maps/MtChimney/scripts.pory"

# 85 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerEast::
# 86 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerEast
# 87 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 88 "data/maps/MtChimney/scripts.pory"
	return
# 89 "data/maps/MtChimney/scripts.pory"

# 90 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerNorth::
# 91 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerNorth
# 92 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 93 "data/maps/MtChimney/scripts.pory"
	return
# 94 "data/maps/MtChimney/scripts.pory"

# 95 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitEast::
# 96 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitEast
# 97 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 98 "data/maps/MtChimney/scripts.pory"
	return
# 99 "data/maps/MtChimney/scripts.pory"

# 100 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitNorth::
# 101 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitNorth
# 102 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 103 "data/maps/MtChimney/scripts.pory"
	return
# 104 "data/maps/MtChimney/scripts.pory"

# 105 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady::
# 106 "data/maps/MtChimney/scripts.pory"
	lock
# 107 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 108 "data/maps/MtChimney/scripts.pory"
	showmoneybox 0, 0
# 109 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LavaCookiesJust200, MSGBOX_YESNO
# 110 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_DeclineLavaCookie
# 111 "data/maps/MtChimney/scripts.pory"
	checkmoney 200
# 112 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_NotEnoughMoney
# 113 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ThankYouDear, MSGBOX_DEFAULT
# 114 "data/maps/MtChimney/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE
# 115 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RemoveMoney
# 116 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 117 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 118 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 119 "data/maps/MtChimney/scripts.pory"
	release
# 120 "data/maps/MtChimney/scripts.pory"
	end
# 121 "data/maps/MtChimney/scripts.pory"

# 122 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 123 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 124 "data/maps/MtChimney/scripts.pory"
	@hidemoneybox
# 125 "data/maps/MtChimney/scripts.pory"
	release
# 126 "data/maps/MtChimney/scripts.pory"
	end
# 127 "data/maps/MtChimney/scripts.pory"

# 128 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RemoveMoney::
# 129 "data/maps/MtChimney/scripts.pory"
	removemoney 200
# 130 "data/maps/MtChimney/scripts.pory"
	updatemoneybox
# 131 "data/maps/MtChimney/scripts.pory"
	return
# 132 "data/maps/MtChimney/scripts.pory"

# 133 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DeclineLavaCookie::
# 134 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
# 135 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 136 "data/maps/MtChimney/scripts.pory"
	release
# 137 "data/maps/MtChimney/scripts.pory"
	end
# 138 "data/maps/MtChimney/scripts.pory"

# 139 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_NotEnoughMoney::
# 140 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
# 141 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 142 "data/maps/MtChimney/scripts.pory"
	release
# 143 "data/maps/MtChimney/scripts.pory"
	end
# 144 "data/maps/MtChimney/scripts.pory"

# 145 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerEast:
# 146 "data/maps/MtChimney/scripts.pory"
	walk_up
# 147 "data/maps/MtChimney/scripts.pory"
	walk_up
# 148 "data/maps/MtChimney/scripts.pory"
	walk_up
# 149 "data/maps/MtChimney/scripts.pory"
	walk_up
# 150 "data/maps/MtChimney/scripts.pory"
	walk_up
# 151 "data/maps/MtChimney/scripts.pory"
	walk_up
# 152 "data/maps/MtChimney/scripts.pory"
	walk_right
# 153 "data/maps/MtChimney/scripts.pory"
	step_end
# 154 "data/maps/MtChimney/scripts.pory"

# 155 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitEast:
# 156 "data/maps/MtChimney/scripts.pory"
	walk_left
# 157 "data/maps/MtChimney/scripts.pory"
	walk_down
# 158 "data/maps/MtChimney/scripts.pory"
	walk_down
# 159 "data/maps/MtChimney/scripts.pory"
	walk_down
# 160 "data/maps/MtChimney/scripts.pory"
	walk_down
# 161 "data/maps/MtChimney/scripts.pory"
	walk_down
# 162 "data/maps/MtChimney/scripts.pory"
	walk_down
# 163 "data/maps/MtChimney/scripts.pory"
	walk_down
# 164 "data/maps/MtChimney/scripts.pory"
	step_end
# 165 "data/maps/MtChimney/scripts.pory"

# 166 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerNorth:
# 167 "data/maps/MtChimney/scripts.pory"
	walk_up
# 168 "data/maps/MtChimney/scripts.pory"
	walk_up
# 169 "data/maps/MtChimney/scripts.pory"
	walk_up
# 170 "data/maps/MtChimney/scripts.pory"
	walk_up
# 171 "data/maps/MtChimney/scripts.pory"
	walk_up
# 172 "data/maps/MtChimney/scripts.pory"
	walk_right
# 173 "data/maps/MtChimney/scripts.pory"
	walk_right
# 174 "data/maps/MtChimney/scripts.pory"
	step_end
# 175 "data/maps/MtChimney/scripts.pory"

# 176 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitNorth:
# 177 "data/maps/MtChimney/scripts.pory"
	walk_left
# 178 "data/maps/MtChimney/scripts.pory"
	walk_left
# 179 "data/maps/MtChimney/scripts.pory"
	walk_down
# 180 "data/maps/MtChimney/scripts.pory"
	walk_down
# 181 "data/maps/MtChimney/scripts.pory"
	walk_down
# 182 "data/maps/MtChimney/scripts.pory"
	walk_down
# 183 "data/maps/MtChimney/scripts.pory"
	walk_down
# 184 "data/maps/MtChimney/scripts.pory"
	walk_down
# 185 "data/maps/MtChimney/scripts.pory"
	walk_down
# 186 "data/maps/MtChimney/scripts.pory"
	step_end
# 187 "data/maps/MtChimney/scripts.pory"

# 188 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused1:
# 189 "data/maps/MtChimney/scripts.pory"
	walk_down
# 190 "data/maps/MtChimney/scripts.pory"
	walk_down
# 191 "data/maps/MtChimney/scripts.pory"
	walk_down
# 192 "data/maps/MtChimney/scripts.pory"
	walk_down
# 193 "data/maps/MtChimney/scripts.pory"
	walk_down
# 194 "data/maps/MtChimney/scripts.pory"
	walk_left
# 195 "data/maps/MtChimney/scripts.pory"
	walk_left
# 196 "data/maps/MtChimney/scripts.pory"
	walk_down
# 197 "data/maps/MtChimney/scripts.pory"
	walk_down
# 198 "data/maps/MtChimney/scripts.pory"
	walk_down
# 199 "data/maps/MtChimney/scripts.pory"
	walk_down
# 200 "data/maps/MtChimney/scripts.pory"
	walk_left
# 201 "data/maps/MtChimney/scripts.pory"
	walk_left
# 202 "data/maps/MtChimney/scripts.pory"
	walk_left
# 203 "data/maps/MtChimney/scripts.pory"
	walk_left
# 204 "data/maps/MtChimney/scripts.pory"
	walk_left
# 205 "data/maps/MtChimney/scripts.pory"
	walk_down
# 206 "data/maps/MtChimney/scripts.pory"
	step_end
# 207 "data/maps/MtChimney/scripts.pory"

# 208 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused2:
# 209 "data/maps/MtChimney/scripts.pory"
	walk_down
# 210 "data/maps/MtChimney/scripts.pory"
	walk_down
# 211 "data/maps/MtChimney/scripts.pory"
	walk_down
# 212 "data/maps/MtChimney/scripts.pory"
	walk_down
# 213 "data/maps/MtChimney/scripts.pory"
	walk_left
# 214 "data/maps/MtChimney/scripts.pory"
	walk_left
# 215 "data/maps/MtChimney/scripts.pory"
	walk_left
# 216 "data/maps/MtChimney/scripts.pory"
	walk_down
# 217 "data/maps/MtChimney/scripts.pory"
	step_end
# 218 "data/maps/MtChimney/scripts.pory"

# 219 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused3:
# 220 "data/maps/MtChimney/scripts.pory"
	walk_right
# 221 "data/maps/MtChimney/scripts.pory"
	walk_down
# 222 "data/maps/MtChimney/scripts.pory"
	walk_down
# 223 "data/maps/MtChimney/scripts.pory"
	walk_down
# 224 "data/maps/MtChimney/scripts.pory"
	walk_down
# 225 "data/maps/MtChimney/scripts.pory"
	walk_left
# 226 "data/maps/MtChimney/scripts.pory"
	walk_left
# 227 "data/maps/MtChimney/scripts.pory"
	walk_left
# 228 "data/maps/MtChimney/scripts.pory"
	walk_left
# 229 "data/maps/MtChimney/scripts.pory"
	walk_left
# 230 "data/maps/MtChimney/scripts.pory"
	walk_down
# 231 "data/maps/MtChimney/scripts.pory"
	walk_down
# 232 "data/maps/MtChimney/scripts.pory"
	walk_down
# 233 "data/maps/MtChimney/scripts.pory"
	walk_down
# 234 "data/maps/MtChimney/scripts.pory"
	step_end
# 235 "data/maps/MtChimney/scripts.pory"

# 236 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused4:
# 237 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 238 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 239 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 240 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 241 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 242 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 243 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 244 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 245 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 246 "data/maps/MtChimney/scripts.pory"
	walk_left
# 247 "data/maps/MtChimney/scripts.pory"
	walk_left
# 248 "data/maps/MtChimney/scripts.pory"
	walk_down
# 249 "data/maps/MtChimney/scripts.pory"
	walk_down
# 250 "data/maps/MtChimney/scripts.pory"
	walk_down
# 251 "data/maps/MtChimney/scripts.pory"
	walk_left
# 252 "data/maps/MtChimney/scripts.pory"
	walk_left
# 253 "data/maps/MtChimney/scripts.pory"
	walk_down
# 254 "data/maps/MtChimney/scripts.pory"
	walk_down
# 255 "data/maps/MtChimney/scripts.pory"
	walk_left
# 256 "data/maps/MtChimney/scripts.pory"
	walk_left
# 257 "data/maps/MtChimney/scripts.pory"
	walk_left
# 258 "data/maps/MtChimney/scripts.pory"
	walk_left
# 259 "data/maps/MtChimney/scripts.pory"
	walk_left
# 260 "data/maps/MtChimney/scripts.pory"
	walk_down
# 261 "data/maps/MtChimney/scripts.pory"
	step_end
# 262 "data/maps/MtChimney/scripts.pory"

# 263 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused5:
# 264 "data/maps/MtChimney/scripts.pory"
	delay_16
# 265 "data/maps/MtChimney/scripts.pory"
	delay_16
# 266 "data/maps/MtChimney/scripts.pory"
	delay_16
# 267 "data/maps/MtChimney/scripts.pory"
	walk_down
# 268 "data/maps/MtChimney/scripts.pory"
	walk_down
# 269 "data/maps/MtChimney/scripts.pory"
	walk_down
# 270 "data/maps/MtChimney/scripts.pory"
	walk_left
# 271 "data/maps/MtChimney/scripts.pory"
	walk_left
# 272 "data/maps/MtChimney/scripts.pory"
	walk_left
# 273 "data/maps/MtChimney/scripts.pory"
	walk_down
# 274 "data/maps/MtChimney/scripts.pory"
	step_end
# 275 "data/maps/MtChimney/scripts.pory"

# 276 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused6:
# 277 "data/maps/MtChimney/scripts.pory"
	delay_16
# 278 "data/maps/MtChimney/scripts.pory"
	walk_left
# 279 "data/maps/MtChimney/scripts.pory"
	walk_down
# 280 "data/maps/MtChimney/scripts.pory"
	walk_down
# 281 "data/maps/MtChimney/scripts.pory"
	walk_down
# 282 "data/maps/MtChimney/scripts.pory"
	walk_down
# 283 "data/maps/MtChimney/scripts.pory"
	walk_left
# 284 "data/maps/MtChimney/scripts.pory"
	walk_left
# 285 "data/maps/MtChimney/scripts.pory"
	walk_left
# 286 "data/maps/MtChimney/scripts.pory"
	walk_left
# 287 "data/maps/MtChimney/scripts.pory"
	walk_left
# 288 "data/maps/MtChimney/scripts.pory"
	walk_down
# 289 "data/maps/MtChimney/scripts.pory"
	walk_down
# 290 "data/maps/MtChimney/scripts.pory"
	walk_down
# 291 "data/maps/MtChimney/scripts.pory"
	walk_down
# 292 "data/maps/MtChimney/scripts.pory"
	step_end
# 293 "data/maps/MtChimney/scripts.pory"

# 294 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused7:
# 295 "data/maps/MtChimney/scripts.pory"
	delay_16
# 296 "data/maps/MtChimney/scripts.pory"
	walk_left
# 297 "data/maps/MtChimney/scripts.pory"
	walk_left
# 298 "data/maps/MtChimney/scripts.pory"
	walk_down
# 299 "data/maps/MtChimney/scripts.pory"
	walk_down
# 300 "data/maps/MtChimney/scripts.pory"
	walk_down
# 301 "data/maps/MtChimney/scripts.pory"
	walk_left
# 302 "data/maps/MtChimney/scripts.pory"
	walk_left
# 303 "data/maps/MtChimney/scripts.pory"
	walk_down
# 304 "data/maps/MtChimney/scripts.pory"
	walk_down
# 305 "data/maps/MtChimney/scripts.pory"
	walk_left
# 306 "data/maps/MtChimney/scripts.pory"
	walk_left
# 307 "data/maps/MtChimney/scripts.pory"
	walk_left
# 308 "data/maps/MtChimney/scripts.pory"
	walk_left
# 309 "data/maps/MtChimney/scripts.pory"
	walk_left
# 310 "data/maps/MtChimney/scripts.pory"
	walk_down
# 311 "data/maps/MtChimney/scripts.pory"
	step_end
# 312 "data/maps/MtChimney/scripts.pory"

# 313 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused8:
# 314 "data/maps/MtChimney/scripts.pory"
	delay_16
# 315 "data/maps/MtChimney/scripts.pory"
	walk_down
# 316 "data/maps/MtChimney/scripts.pory"
	walk_left
# 317 "data/maps/MtChimney/scripts.pory"
	walk_left
# 318 "data/maps/MtChimney/scripts.pory"
	walk_left
# 319 "data/maps/MtChimney/scripts.pory"
	walk_left
# 320 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_down
# 321 "data/maps/MtChimney/scripts.pory"
	step_end
# 322 "data/maps/MtChimney/scripts.pory"

# 323 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused9:
# 324 "data/maps/MtChimney/scripts.pory"
	walk_down
# 325 "data/maps/MtChimney/scripts.pory"
	walk_down
# 326 "data/maps/MtChimney/scripts.pory"
	walk_down
# 327 "data/maps/MtChimney/scripts.pory"
	walk_down
# 328 "data/maps/MtChimney/scripts.pory"
	walk_left
# 329 "data/maps/MtChimney/scripts.pory"
	walk_left
# 330 "data/maps/MtChimney/scripts.pory"
	walk_left
# 331 "data/maps/MtChimney/scripts.pory"
	walk_left
# 332 "data/maps/MtChimney/scripts.pory"
	walk_left
# 333 "data/maps/MtChimney/scripts.pory"
	walk_down
# 334 "data/maps/MtChimney/scripts.pory"
	walk_down
# 335 "data/maps/MtChimney/scripts.pory"
	walk_down
# 336 "data/maps/MtChimney/scripts.pory"
	walk_down
# 337 "data/maps/MtChimney/scripts.pory"
	step_end
# 338 "data/maps/MtChimney/scripts.pory"

# 339 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused10:
# 340 "data/maps/MtChimney/scripts.pory"
	walk_down
# 341 "data/maps/MtChimney/scripts.pory"
	step_end
# 342 "data/maps/MtChimney/scripts.pory"

# 343 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused11:
# 344 "data/maps/MtChimney/scripts.pory"
	walk_down
# 345 "data/maps/MtChimney/scripts.pory"
	walk_down
# 346 "data/maps/MtChimney/scripts.pory"
	walk_down
# 347 "data/maps/MtChimney/scripts.pory"
	walk_down
# 348 "data/maps/MtChimney/scripts.pory"
	walk_down
# 349 "data/maps/MtChimney/scripts.pory"
	walk_down
# 350 "data/maps/MtChimney/scripts.pory"
	walk_down
# 351 "data/maps/MtChimney/scripts.pory"
	step_end
# 352 "data/maps/MtChimney/scripts.pory"

# 353 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused12:
# 354 "data/maps/MtChimney/scripts.pory"
	delay_16
# 355 "data/maps/MtChimney/scripts.pory"
	delay_16
# 356 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 357 "data/maps/MtChimney/scripts.pory"
	delay_16
# 358 "data/maps/MtChimney/scripts.pory"
	walk_down
# 359 "data/maps/MtChimney/scripts.pory"
	walk_down
# 360 "data/maps/MtChimney/scripts.pory"
	walk_down
# 361 "data/maps/MtChimney/scripts.pory"
	walk_down
# 362 "data/maps/MtChimney/scripts.pory"
	walk_down
# 363 "data/maps/MtChimney/scripts.pory"
	step_end
# 364 "data/maps/MtChimney/scripts.pory"

# 365 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused13:
# 366 "data/maps/MtChimney/scripts.pory"
	delay_16
# 367 "data/maps/MtChimney/scripts.pory"
	delay_16
# 368 "data/maps/MtChimney/scripts.pory"
	delay_16
# 369 "data/maps/MtChimney/scripts.pory"
	delay_16
# 370 "data/maps/MtChimney/scripts.pory"
	delay_16
# 371 "data/maps/MtChimney/scripts.pory"
	delay_16
# 372 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 373 "data/maps/MtChimney/scripts.pory"
	delay_16
# 374 "data/maps/MtChimney/scripts.pory"
	walk_down
# 375 "data/maps/MtChimney/scripts.pory"
	walk_down
# 376 "data/maps/MtChimney/scripts.pory"
	step_end
# 377 "data/maps/MtChimney/scripts.pory"

# 378 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused14:
# 379 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 380 "data/maps/MtChimney/scripts.pory"
	walk_fast_left
# 381 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 382 "data/maps/MtChimney/scripts.pory"
	face_right
# 383 "data/maps/MtChimney/scripts.pory"
	step_end
# 384 "data/maps/MtChimney/scripts.pory"

# 385 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused15:
# 386 "data/maps/MtChimney/scripts.pory"
	walk_left
# 387 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_right
# 388 "data/maps/MtChimney/scripts.pory"
	delay_16
# 389 "data/maps/MtChimney/scripts.pory"
	step_end
# 390 "data/maps/MtChimney/scripts.pory"

# 391 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt1::
# 392 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN
# 393 "data/maps/MtChimney/scripts.pory"
	end
# 394 "data/maps/MtChimney/scripts.pory"

# 395 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt2::
# 396 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN
# 397 "data/maps/MtChimney/scripts.pory"
	end
# 398 "data/maps/MtChimney/scripts.pory"

# 399 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt3::
# 400 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmasNameSimilar, MSGBOX_SIGN
# 401 "data/maps/MtChimney/scripts.pory"
	end
# 402 "data/maps/MtChimney/scripts.pory"

# 403 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Tabitha::
# 404 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaIntro, MtChimney_Text_TabithaDefeat
# 405 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 406 "data/maps/MtChimney/scripts.pory"
	end
# 407 "data/maps/MtChimney/scripts.pory"

# 408 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Courtney::
# 409 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_COURTNEY_MT_CHIMNEY, MtChimney_Text_CourtneyIntro, MtChimney_Text_CourtneyDefeat
# 410 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_CourtneyPostBattle, MSGBOX_AUTOCLOSE
# 411 "data/maps/MtChimney/scripts.pory"
	end
# 412 "data/maps/MtChimney/scripts.pory"

# 413 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt2::
# 414 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_2, MtChimney_Text_Grunt2Intro, MtChimney_Text_Grunt2Defeat
# 415 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 416 "data/maps/MtChimney/scripts.pory"
	end
# 417 "data/maps/MtChimney/scripts.pory"

# 418 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt1::
# 419 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN
# 420 "data/maps/MtChimney/scripts.pory"
	end
# 421 "data/maps/MtChimney/scripts.pory"

# 422 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt2::
# 423 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN
# 424 "data/maps/MtChimney/scripts.pory"
	end
# 425 "data/maps/MtChimney/scripts.pory"

# 426 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt3::
# 427 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouBetterNotMessWithUs, MSGBOX_SIGN
# 428 "data/maps/MtChimney/scripts.pory"
	end
# 429 "data/maps/MtChimney/scripts.pory"

# 430 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt4::
# 431 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_AquasNameSimilar, MSGBOX_SIGN
# 432 "data/maps/MtChimney/scripts.pory"
	end
# 433 "data/maps/MtChimney/scripts.pory"

# 434 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt5::
# 435 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DouseThemInFire, MSGBOX_SIGN
# 436 "data/maps/MtChimney/scripts.pory"
	end
# 437 "data/maps/MtChimney/scripts.pory"

# 438 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt6::
# 439 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN
# 440 "data/maps/MtChimney/scripts.pory"
	end
# 441 "data/maps/MtChimney/scripts.pory"

# 442 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MagmaPoochyena::
# 443 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bufoh, MSGBOX_SIGN
# 444 "data/maps/MtChimney/scripts.pory"
	end
# 445 "data/maps/MtChimney/scripts.pory"

# 446 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_AquaPoochyena::
# 447 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bushaa, MSGBOX_SIGN
# 448 "data/maps/MtChimney/scripts.pory"
	end
# 449 "data/maps/MtChimney/scripts.pory"

# 450 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine::
# 451 "data/maps/MtChimney/scripts.pory"
	lockall
# 452 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_MachineOn
# 453 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_RECEIVED_METEORITE, MtChimney_EventScript_MachineOff
# 454 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RemoveTheMeteorite, MSGBOX_YESNO
# 455 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_LeaveMeteoriteAlone
# 456 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerRemovedMeteorite, MSGBOX_DEFAULT
# 457 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_METEORITE
# 458 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_RECEIVED_METEORITE
# 459 "data/maps/MtChimney/scripts.pory"
	releaseall
# 460 "data/maps/MtChimney/scripts.pory"
	end
# 461 "data/maps/MtChimney/scripts.pory"

# 462 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LeaveMeteoriteAlone::
# 463 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerLeftMeteorite, MSGBOX_DEFAULT
# 464 "data/maps/MtChimney/scripts.pory"
	releaseall
# 465 "data/maps/MtChimney/scripts.pory"
	end
# 466 "data/maps/MtChimney/scripts.pory"

# 467 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOff::
# 468 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
# 469 "data/maps/MtChimney/scripts.pory"
	releaseall
# 470 "data/maps/MtChimney/scripts.pory"
	end
# 471 "data/maps/MtChimney/scripts.pory"

# 472 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOn::
# 473 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MetoriteFittedOnMachine, MSGBOX_DEFAULT
# 474 "data/maps/MtChimney/scripts.pory"
	releaseall
# 475 "data/maps/MtChimney/scripts.pory"
	end
# 476 "data/maps/MtChimney/scripts.pory"

# 477 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RouteSign::
# 478 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
# 479 "data/maps/MtChimney/scripts.pory"
	end
# 480 "data/maps/MtChimney/scripts.pory"

# 481 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shelby::
# 482 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat, MtChimney_EventScript_DefeatedShelby
# 483 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 484 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RematchShelby
# 485 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
# 486 "data/maps/MtChimney/scripts.pory"
	release
# 487 "data/maps/MtChimney/scripts.pory"
	end
# 488 "data/maps/MtChimney/scripts.pory"

# 489 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DefeatedShelby::
# 490 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 491 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 492 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
# 493 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SHELBY_1
# 494 "data/maps/MtChimney/scripts.pory"
	release
# 495 "data/maps/MtChimney/scripts.pory"
	end
# 496 "data/maps/MtChimney/scripts.pory"

# 497 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RematchShelby::
# 498 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
# 499 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
# 500 "data/maps/MtChimney/scripts.pory"
	end
# 501 "data/maps/MtChimney/scripts.pory"

# 502 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Melissa::
# 503 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
# 504 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
# 505 "data/maps/MtChimney/scripts.pory"
	end
# 506 "data/maps/MtChimney/scripts.pory"

# 507 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sheila::
# 508 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
# 509 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
# 510 "data/maps/MtChimney/scripts.pory"
	end
# 511 "data/maps/MtChimney/scripts.pory"

# 512 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shirley::
# 513 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
# 514 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
# 515 "data/maps/MtChimney/scripts.pory"
	end
# 516 "data/maps/MtChimney/scripts.pory"

# 517 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1::
# 518 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_1, MtChimney_Text_Grunt1Intro, MtChimney_Text_Grunt1Defeat
# 519 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 520 "data/maps/MtChimney/scripts.pory"
	end
# 521 "data/maps/MtChimney/scripts.pory"

# 522 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sawyer::
# 523 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat, MtChimney_EventScript_SawyerDefeated
# 524 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 525 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_SawyerRematch
# 526 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
# 527 "data/maps/MtChimney/scripts.pory"
	release
# 528 "data/maps/MtChimney/scripts.pory"
	end
# 529 "data/maps/MtChimney/scripts.pory"

# 530 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerDefeated::
# 531 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 532 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 533 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
# 534 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SAWYER_1
# 535 "data/maps/MtChimney/scripts.pory"
	release
# 536 "data/maps/MtChimney/scripts.pory"
	end
# 537 "data/maps/MtChimney/scripts.pory"

# 538 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerRematch::
# 539 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
# 540 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
# 541 "data/maps/MtChimney/scripts.pory"
	end
# 542 "data/maps/MtChimney/scripts.pory"

# 543 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoriteWillActivateVolcano:
# 544 "data/maps/MtChimney/scripts.pory"
	.string "The power contained in the Meteorite…\p"
# 545 "data/maps/MtChimney/scripts.pory"
	.string "By amplifying its power with this\n"
# 546 "data/maps/MtChimney/scripts.pory"
	.string "machine, Mt. Chimney's volcanic\l"
# 547 "data/maps/MtChimney/scripts.pory"
	.string "activity will instantly intensify…\p"
# 548 "data/maps/MtChimney/scripts.pory"
	.string "Its energy will grow deep inside\n"
# 549 "data/maps/MtChimney/scripts.pory"
	.string "the crater and…\l"
# 550 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…$"
# 551 "data/maps/MtChimney/scripts.pory"

# 552 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieIntro:
# 553 "data/maps/MtChimney/scripts.pory"
	.string "Maxie: Hm?\n"
# 554 "data/maps/MtChimney/scripts.pory"
	.string "Who are you?\p"
# 555 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\n"
# 556 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\p"
# 557 "data/maps/MtChimney/scripts.pory"
	.string "I'd heard Archie bemoaning a child\n"
# 558 "data/maps/MtChimney/scripts.pory"
	.string "who's been meddling in Team Aqua's\l"
# 559 "data/maps/MtChimney/scripts.pory"
	.string "affairs.\p"
# 560 "data/maps/MtChimney/scripts.pory"
	.string "It must be you he meant.\p"
# 561 "data/maps/MtChimney/scripts.pory"
	.string "Humph! So you're thinking of\n"
# 562 "data/maps/MtChimney/scripts.pory"
	.string "interfering with us, Team Magma?\p"
# 563 "data/maps/MtChimney/scripts.pory"
	.string "Now you listen.\n"
# 564 "data/maps/MtChimney/scripts.pory"
	.string "Long ago, living things used the\l"
# 565 "data/maps/MtChimney/scripts.pory"
	.string "land to live and grow.\p"
# 566 "data/maps/MtChimney/scripts.pory"
	.string "That is why land is all important!\n"
# 567 "data/maps/MtChimney/scripts.pory"
	.string "It is the cradle of all!\p"
# 568 "data/maps/MtChimney/scripts.pory"
	.string "That is why Team Magma is dedicated\n"
# 569 "data/maps/MtChimney/scripts.pory"
	.string "to the expansion of the land mass.\p"
# 570 "data/maps/MtChimney/scripts.pory"
	.string "It is for further advancement of\n"
# 571 "data/maps/MtChimney/scripts.pory"
	.string "humankind and Pokémon!\p"
# 572 "data/maps/MtChimney/scripts.pory"
	.string "And for that, we need the power of\n"
# 573 "data/maps/MtChimney/scripts.pory"
	.string "what sleeps within this mountain…\p"
# 574 "data/maps/MtChimney/scripts.pory"
	.string "Oh! There was no need for you to\n"
# 575 "data/maps/MtChimney/scripts.pory"
	.string "learn that much.\p"
# 576 "data/maps/MtChimney/scripts.pory"
	.string "But, no matter!\n"
# 577 "data/maps/MtChimney/scripts.pory"
	.string "I'll teach you the consequences of\l"
# 578 "data/maps/MtChimney/scripts.pory"
	.string "meddling in our grand design!$"
# 579 "data/maps/MtChimney/scripts.pory"

# 580 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieDefeat:
# 581 "data/maps/MtChimney/scripts.pory"
	.string "What?!\p"
# 582 "data/maps/MtChimney/scripts.pory"
	.string "I, Maxie, was caught off guard?!$"
# 583 "data/maps/MtChimney/scripts.pory"

# 584 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieYouHaventSeenLastOfMagma:
# 585 "data/maps/MtChimney/scripts.pory"
	.string "Maxie: But, enough.\n"
# 586 "data/maps/MtChimney/scripts.pory"
	.string "I will back off this time.\p"
# 587 "data/maps/MtChimney/scripts.pory"
	.string "But don't think that this is the last\n"
# 588 "data/maps/MtChimney/scripts.pory"
	.string "you've seen of Team Magma.\p"
# 589 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…\p"
# 590 "data/maps/MtChimney/scripts.pory"
	.string "Even without the Meteorite, if we\n"
# 591 "data/maps/MtChimney/scripts.pory"
	.string "obtain that Orb… Fufufu…$"
# 592 "data/maps/MtChimney/scripts.pory"

# 593 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaIntro:
# 594 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe!\p"
# 595 "data/maps/MtChimney/scripts.pory"
	.string "So you've come all the way here!\p"
# 596 "data/maps/MtChimney/scripts.pory"
	.string "But you're too late!\n"
# 597 "data/maps/MtChimney/scripts.pory"
	.string "I've already delivered the Meteorite\l"
# 598 "data/maps/MtChimney/scripts.pory"
	.string "from Meteor Falls to the Boss!$"
# 599 "data/maps/MtChimney/scripts.pory"

# 600 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaDefeat:
# 601 "data/maps/MtChimney/scripts.pory"
	.string "Even though I've lost, if our leader\n"
# 602 "data/maps/MtChimney/scripts.pory"
	.string "awakens that thing…$"
# 603 "data/maps/MtChimney/scripts.pory"

# 604 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaPostBattle:
# 605 "data/maps/MtChimney/scripts.pory"
	.string "Boss, hurry!\n"
# 606 "data/maps/MtChimney/scripts.pory"
	.string "Give it the Meteorite's energy!\p"
# 607 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…$"
# 608 "data/maps/MtChimney/scripts.pory"

# 609 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_CourtneyIntro:
# 610 "data/maps/MtChimney/scripts.pory"
	.string "It's over for you, kiddo!\p"
# 611 "data/maps/MtChimney/scripts.pory"
	.string "Our Boss is gonna awaken that thing!$"
# 612 "data/maps/MtChimney/scripts.pory"

# 613 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_CourtneyDefeat:
# 614 "data/maps/MtChimney/scripts.pory"
	.string "You're too late.$"
# 615 "data/maps/MtChimney/scripts.pory"

# 616 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_CourtneyPostBattle:
# 617 "data/maps/MtChimney/scripts.pory"
	.string "Do it now, Boss!$"
# 618 "data/maps/MtChimney/scripts.pory"

# 619 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Intro:
# 620 "data/maps/MtChimney/scripts.pory"
	.string "We of Team Magma are working hard for\n"
# 621 "data/maps/MtChimney/scripts.pory"
	.string "everyone's sake.\p"
# 622 "data/maps/MtChimney/scripts.pory"
	.string "Like, if that thing's power made more\n"
# 623 "data/maps/MtChimney/scripts.pory"
	.string "land, there'd be more places to live.\p"
# 624 "data/maps/MtChimney/scripts.pory"
	.string "Everyone'd be happy!$"
# 625 "data/maps/MtChimney/scripts.pory"

# 626 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Defeat:
# 627 "data/maps/MtChimney/scripts.pory"
	.string "Hunh?\n"
# 628 "data/maps/MtChimney/scripts.pory"
	.string "What do you mean I lost?$"
# 629 "data/maps/MtChimney/scripts.pory"

# 630 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2PostBattle:
# 631 "data/maps/MtChimney/scripts.pory"
	.string "Our Boss says, “It will make everyone\n"
# 632 "data/maps/MtChimney/scripts.pory"
	.string "happy.”\p"
# 633 "data/maps/MtChimney/scripts.pory"
	.string "But why does everyone keep getting\n"
# 634 "data/maps/MtChimney/scripts.pory"
	.string "in our way?$"
# 635 "data/maps/MtChimney/scripts.pory"

# 636 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Intro:
# 637 "data/maps/MtChimney/scripts.pory"
	.string "If there were more land, I'd be able\n"
# 638 "data/maps/MtChimney/scripts.pory"
	.string "to get a big house of my own!\p"
# 639 "data/maps/MtChimney/scripts.pory"
	.string "I'm going to build it on hardened lava!$"
# 640 "data/maps/MtChimney/scripts.pory"

# 641 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Defeat:
# 642 "data/maps/MtChimney/scripts.pory"
	.string "My dream of a big house…$"
# 643 "data/maps/MtChimney/scripts.pory"

# 644 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1PostBattle:
# 645 "data/maps/MtChimney/scripts.pory"
	.string "A kid like you, you ought to be\n"
# 646 "data/maps/MtChimney/scripts.pory"
	.string "splashing about in the waves!$"
# 647 "data/maps/MtChimney/scripts.pory"

# 648 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TeamAquaAlwaysMessingWithPlans:
# 649 "data/maps/MtChimney/scripts.pory"
	.string "That annoying Team Aqua…\n"
# 650 "data/maps/MtChimney/scripts.pory"
	.string "They always mess with our plans!$"
# 651 "data/maps/MtChimney/scripts.pory"

# 652 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoritesPackAmazingPower:
# 653 "data/maps/MtChimney/scripts.pory"
	.string "Meteorites pack amazing power!$"
# 654 "data/maps/MtChimney/scripts.pory"

# 655 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouBetterNotMessWithUs:
# 656 "data/maps/MtChimney/scripts.pory"
	.string "You'd better not mess with us!\p"
# 657 "data/maps/MtChimney/scripts.pory"
	.string "We're trying to awaken that thing\n"
# 658 "data/maps/MtChimney/scripts.pory"
	.string "for the benefit of everyone!$"
# 659 "data/maps/MtChimney/scripts.pory"

# 660 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_AquasNameSimilar:
# 661 "data/maps/MtChimney/scripts.pory"
	.string "We're Team Magma!\p"
# 662 "data/maps/MtChimney/scripts.pory"
	.string "They're Team Aqua!\p"
# 663 "data/maps/MtChimney/scripts.pory"
	.string "It totally annoys me that they'd\n"
# 664 "data/maps/MtChimney/scripts.pory"
	.string "use a name like ours!$"
# 665 "data/maps/MtChimney/scripts.pory"

# 666 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_DouseThemInFire:
# 667 "data/maps/MtChimney/scripts.pory"
	.string "Yeah!\n"
# 668 "data/maps/MtChimney/scripts.pory"
	.string "Douse them in fire!$"
# 669 "data/maps/MtChimney/scripts.pory"

# 670 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_KeepMakingMoreLand:
# 671 "data/maps/MtChimney/scripts.pory"
	.string "We're going to keep making more land!$"
# 672 "data/maps/MtChimney/scripts.pory"

# 673 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bufoh:
# 674 "data/maps/MtChimney/scripts.pory"
	.string "Bufoh!$"
# 675 "data/maps/MtChimney/scripts.pory"

# 676 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieGoStopTeamMagma:
# 677 "data/maps/MtChimney/scripts.pory"
	.string "Archie: Grr, {PLAYER}!\n"
# 678 "data/maps/MtChimney/scripts.pory"
	.string "I should've guessed you'd show up!\p"
# 679 "data/maps/MtChimney/scripts.pory"
	.string "See for yourself what the fanatics\n"
# 680 "data/maps/MtChimney/scripts.pory"
	.string "of Team Magma are up to!\p"
# 681 "data/maps/MtChimney/scripts.pory"
	.string "They're trying to inject the stolen\n"
# 682 "data/maps/MtChimney/scripts.pory"
	.string "Meteorite's power into the volcano!\p"
# 683 "data/maps/MtChimney/scripts.pory"
	.string "Doing something like that will cause\n"
# 684 "data/maps/MtChimney/scripts.pory"
	.string "the volcano's eruption!$"
# 685 "data/maps/MtChimney/scripts.pory"

# 686 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieIHaveMyHandsFull:
# 687 "data/maps/MtChimney/scripts.pory"
	.string "Archie: Grrr…\p"
# 688 "data/maps/MtChimney/scripts.pory"
	.string "I want to stop that Maxie,\n"
# 689 "data/maps/MtChimney/scripts.pory"
	.string "but I can't!\p"
# 690 "data/maps/MtChimney/scripts.pory"
	.string "Not when I have my hands full battling\n"
# 691 "data/maps/MtChimney/scripts.pory"
	.string "three opponents at once!$"
# 692 "data/maps/MtChimney/scripts.pory"

# 693 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieThankYou:
# 694 "data/maps/MtChimney/scripts.pory"
	.string "Archie: {PLAYER}!\n"
# 695 "data/maps/MtChimney/scripts.pory"
	.string "Thank you!\p"
# 696 "data/maps/MtChimney/scripts.pory"
	.string "With your help, we thwarted Team\n"
# 697 "data/maps/MtChimney/scripts.pory"
	.string "Magma's destructive plan!\p"
# 698 "data/maps/MtChimney/scripts.pory"
	.string "But… You…\n"
# 699 "data/maps/MtChimney/scripts.pory"
	.string "Whose side are you on?\p"
# 700 "data/maps/MtChimney/scripts.pory"
	.string "Ah, it doesn't matter.\p"
# 701 "data/maps/MtChimney/scripts.pory"
	.string "We will remain vigilant and keep up\n"
# 702 "data/maps/MtChimney/scripts.pory"
	.string "our pursuit of Team Magma.\p"
# 703 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER}, we shall meet again!$"
# 704 "data/maps/MtChimney/scripts.pory"

# 705 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmaOutnumbersUs:
# 706 "data/maps/MtChimney/scripts.pory"
	.string "Darn… Team Magma outnumbers us!\n"
# 707 "data/maps/MtChimney/scripts.pory"
	.string "We can't keep up with them!$"
# 708 "data/maps/MtChimney/scripts.pory"

# 709 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LessHabitatForWaterPokemon:
# 710 "data/maps/MtChimney/scripts.pory"
	.string "If they expand the land, there'll be\n"
# 711 "data/maps/MtChimney/scripts.pory"
	.string "less habitats for Water Pokémon!$"
# 712 "data/maps/MtChimney/scripts.pory"

# 713 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmasNameSimilar:
# 714 "data/maps/MtChimney/scripts.pory"
	.string "We're Team Aqua!\p"
# 715 "data/maps/MtChimney/scripts.pory"
	.string "They're Team Magma!\p"
# 716 "data/maps/MtChimney/scripts.pory"
	.string "It burns me up that they'd use such\n"
# 717 "data/maps/MtChimney/scripts.pory"
	.string "a confusing name!$"
# 718 "data/maps/MtChimney/scripts.pory"

# 719 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bushaa:
# 720 "data/maps/MtChimney/scripts.pory"
	.string "Bushaa!$"
# 721 "data/maps/MtChimney/scripts.pory"

# 722 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LavaCookiesJust200:
# 723 "data/maps/MtChimney/scripts.pory"
	.string "Lava Cookies are Mt. Chimney's local\n"
# 724 "data/maps/MtChimney/scripts.pory"
	.string "specialty.\p"
# 725 "data/maps/MtChimney/scripts.pory"
	.string "Try one. It's just ¥200.$"
# 726 "data/maps/MtChimney/scripts.pory"

# 727 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ThankYouDear:
# 728 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, dear!$"
# 729 "data/maps/MtChimney/scripts.pory"

# 730 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouveNotGotTheMoney:
# 731 "data/maps/MtChimney/scripts.pory"
	.string "Oh, dear. You can't buy a thing if\n"
# 732 "data/maps/MtChimney/scripts.pory"
	.string "you've not got the money.$"
# 733 "data/maps/MtChimney/scripts.pory"

# 734 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_OhFineThen:
# 735 "data/maps/MtChimney/scripts.pory"
	.string "Oh, fine then.$"
# 736 "data/maps/MtChimney/scripts.pory"

# 737 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MetoriteFittedOnMachine:
# 738 "data/maps/MtChimney/scripts.pory"
	.string "A Meteorite is fitted on a mysterious\n"
# 739 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 740 "data/maps/MtChimney/scripts.pory"
	.string "The machine seems to be storing\n"
# 741 "data/maps/MtChimney/scripts.pory"
	.string "energy in the Meteorite.$"
# 742 "data/maps/MtChimney/scripts.pory"

# 743 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RemoveTheMeteorite:
# 744 "data/maps/MtChimney/scripts.pory"
	.string "A Meteorite is fitted on a mysterious\n"
# 745 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 746 "data/maps/MtChimney/scripts.pory"
	.string "Do you want to remove the Meteorite?$"
# 747 "data/maps/MtChimney/scripts.pory"

# 748 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerRemovedMeteorite:
# 749 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} removed the Meteorite from\n"
# 750 "data/maps/MtChimney/scripts.pory"
	.string "the mysterious machine.$"
# 751 "data/maps/MtChimney/scripts.pory"

# 752 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerLeftMeteorite:
# 753 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} left the Meteorite where\n"
# 754 "data/maps/MtChimney/scripts.pory"
	.string "it was.$"
# 755 "data/maps/MtChimney/scripts.pory"

# 756 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MachineMakesNoResponse:
# 757 "data/maps/MtChimney/scripts.pory"
	.string "This mysterious machine…\n"
# 758 "data/maps/MtChimney/scripts.pory"
	.string "It makes no response whatsoever.$"
# 759 "data/maps/MtChimney/scripts.pory"

# 760 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RouteSign:
# 761 "data/maps/MtChimney/scripts.pory"
	.string "{DOWN_ARROW} Jagged Path\n"
# 762 "data/maps/MtChimney/scripts.pory"
	.string "Lavaridge Town ahead$"
# 763 "data/maps/MtChimney/scripts.pory"

# 764 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyIntro:
# 765 "data/maps/MtChimney/scripts.pory"
	.string "I've been to the hot springs and\n"
# 766 "data/maps/MtChimney/scripts.pory"
	.string "refreshed my tired bones.\l"
# 767 "data/maps/MtChimney/scripts.pory"
	.string "Right now I'm feeling strong!$"
# 768 "data/maps/MtChimney/scripts.pory"

# 769 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyDefeat:
# 770 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 771 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 772 "data/maps/MtChimney/scripts.pory"

# 773 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostBattle:
# 774 "data/maps/MtChimney/scripts.pory"
	.string "Well, well, I've lost. I can't call\n"
# 775 "data/maps/MtChimney/scripts.pory"
	.string "myself an Expert now, can I?$"
# 776 "data/maps/MtChimney/scripts.pory"

# 777 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRegister:
# 778 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, child. It was fun, as if\n"
# 779 "data/maps/MtChimney/scripts.pory"
	.string "I were battling my own grandchild.\p"
# 780 "data/maps/MtChimney/scripts.pory"
	.string "Please, come see me again for\n"
# 781 "data/maps/MtChimney/scripts.pory"
	.string "a rematch.$"
# 782 "data/maps/MtChimney/scripts.pory"

# 783 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchIntro:
# 784 "data/maps/MtChimney/scripts.pory"
	.string "If you can mesh your heart with those\n"
# 785 "data/maps/MtChimney/scripts.pory"
	.string "of your Pokémon, why, you should be\l"
# 786 "data/maps/MtChimney/scripts.pory"
	.string "able to achieve great things.$"
# 787 "data/maps/MtChimney/scripts.pory"

# 788 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchDefeat:
# 789 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 790 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 791 "data/maps/MtChimney/scripts.pory"

# 792 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostRematch:
# 793 "data/maps/MtChimney/scripts.pory"
	.string "Perhaps your heart has become one\n"
# 794 "data/maps/MtChimney/scripts.pory"
	.string "with the hearts of your Pokémon.$"
# 795 "data/maps/MtChimney/scripts.pory"

# 796 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaIntro:
# 797 "data/maps/MtChimney/scripts.pory"
	.string "I've got the fire in me, baby.\n"
# 798 "data/maps/MtChimney/scripts.pory"
	.string "I can't stand it! I have to battle!$"
# 799 "data/maps/MtChimney/scripts.pory"

# 800 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaDefeat:
# 801 "data/maps/MtChimney/scripts.pory"
	.string "Ooh, that was a scorching-hot match!$"
# 802 "data/maps/MtChimney/scripts.pory"

# 803 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaPostBattle:
# 804 "data/maps/MtChimney/scripts.pory"
	.string "The heat of Mt. Chimney warms\n"
# 805 "data/maps/MtChimney/scripts.pory"
	.string "me up, baby!$"
# 806 "data/maps/MtChimney/scripts.pory"

# 807 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaIntro:
# 808 "data/maps/MtChimney/scripts.pory"
	.string "I've finally made it to Mt. Chimney.\n"
# 809 "data/maps/MtChimney/scripts.pory"
	.string "I want to make my Pokémon battle!$"
# 810 "data/maps/MtChimney/scripts.pory"

# 811 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaDefeat:
# 812 "data/maps/MtChimney/scripts.pory"
	.string "The way you battle…\n"
# 813 "data/maps/MtChimney/scripts.pory"
	.string "It's like a Mt. Chimney eruption!$"
# 814 "data/maps/MtChimney/scripts.pory"

# 815 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaPostBattle:
# 816 "data/maps/MtChimney/scripts.pory"
	.string "Like I said, I've finally made it to\n"
# 817 "data/maps/MtChimney/scripts.pory"
	.string "Mt. Chimney. It would be a shame if\l"
# 818 "data/maps/MtChimney/scripts.pory"
	.string "I only do a little sightseeing…\p"
# 819 "data/maps/MtChimney/scripts.pory"
	.string "I want to get in some battles and buy\n"
# 820 "data/maps/MtChimney/scripts.pory"
	.string "Cookies as souvenirs.$"
# 821 "data/maps/MtChimney/scripts.pory"

# 822 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyIntro:
# 823 "data/maps/MtChimney/scripts.pory"
	.string "Since I bathed in the hot springs,\n"
# 824 "data/maps/MtChimney/scripts.pory"
	.string "I've been feeling great!\l"
# 825 "data/maps/MtChimney/scripts.pory"
	.string "I'm sure I'm going to win!$"
# 826 "data/maps/MtChimney/scripts.pory"

# 827 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyDefeat:
# 828 "data/maps/MtChimney/scripts.pory"
	.string "Yowch!\n"
# 829 "data/maps/MtChimney/scripts.pory"
	.string "I'm getting a chill out of the water.$"
# 830 "data/maps/MtChimney/scripts.pory"

# 831 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyPostBattle:
# 832 "data/maps/MtChimney/scripts.pory"
	.string "I'll have to take another dip in the\n"
# 833 "data/maps/MtChimney/scripts.pory"
	.string "hot springs. Want to join me?\p"
# 834 "data/maps/MtChimney/scripts.pory"
	.string "Just joking!$"
# 835 "data/maps/MtChimney/scripts.pory"

# 836 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerIntro:
# 837 "data/maps/MtChimney/scripts.pory"
	.string "This is one fine mountain! Plenty of\n"
# 838 "data/maps/MtChimney/scripts.pory"
	.string "hot people around for company!$"
# 839 "data/maps/MtChimney/scripts.pory"

# 840 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerDefeat:
# 841 "data/maps/MtChimney/scripts.pory"
	.string "Oh, you're a real firebrand, too!$"
# 842 "data/maps/MtChimney/scripts.pory"

# 843 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostBattle:
# 844 "data/maps/MtChimney/scripts.pory"
	.string "I think I need a dip in Lavaridge\n"
# 845 "data/maps/MtChimney/scripts.pory"
	.string "Hot Spring with the locals!$"
# 846 "data/maps/MtChimney/scripts.pory"

# 847 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRegister:
# 848 "data/maps/MtChimney/scripts.pory"
	.string "I like little fireballs like you.\n"
# 849 "data/maps/MtChimney/scripts.pory"
	.string "Let me register you in my PokéNav.$"
# 850 "data/maps/MtChimney/scripts.pory"

# 851 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchIntro:
# 852 "data/maps/MtChimney/scripts.pory"
	.string "I'm happily surrounded by hot people\n"
# 853 "data/maps/MtChimney/scripts.pory"
	.string "around these parts. I won't lose!$"
# 854 "data/maps/MtChimney/scripts.pory"

# 855 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchDefeat:
# 856 "data/maps/MtChimney/scripts.pory"
	.string "Gosh, you're still the same\n"
# 857 "data/maps/MtChimney/scripts.pory"
	.string "firebrand as before!$"
# 858 "data/maps/MtChimney/scripts.pory"

# 859 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostRematch:
# 860 "data/maps/MtChimney/scripts.pory"
	.string "Actually, it really is hot here.\n"
# 861 "data/maps/MtChimney/scripts.pory"
	.string "I'm overdressed for these parts.$"
