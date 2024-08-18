# 1 "data/maps/PetalburgWoods/scripts.pory"

# 2 "data/maps/PetalburgWoods/scripts.pory"
.set LOCALID_GRUNT, 3
# 3 "data/maps/PetalburgWoods/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 4
# 4 "data/maps/PetalburgWoods/scripts.pory"

# 5 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_MapScripts::
# 6 "data/maps/PetalburgWoods/scripts.pory"
	.byte 0
# 7 "data/maps/PetalburgWoods/scripts.pory"

# 8 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft::
# 9 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 10 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 11 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft
# 12 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 13 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 14 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 15 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 16 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 17 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 18 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 19 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 20 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherLeft
# 21 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 22 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 23 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 24 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 25 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 26 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft
# 27 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 28 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 29 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 30 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
# 31 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 32 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 33 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 34 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 35 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 36 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 37 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 38 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitLeft
# 39 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 40 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 41 "data/maps/PetalburgWoods/scripts.pory"
	end
# 42 "data/maps/PetalburgWoods/scripts.pory"

# 43 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight::
# 44 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 45 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 46 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerRight
# 47 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 48 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 49 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 50 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 51 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 52 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 53 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 54 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 55 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 56 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 57 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherRight
# 58 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 59 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 60 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 61 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 62 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 63 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight
# 64 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 65 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 66 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 67 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 68 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 69 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 70 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 71 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 72 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 73 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 74 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitRight
# 75 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 76 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 77 "data/maps/PetalburgWoods/scripts.pory"
	end
# 78 "data/maps/PetalburgWoods/scripts.pory"

# 79 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherIntro::
# 80 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
# 81 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 82 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
# 83 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 84 "data/maps/PetalburgWoods/scripts.pory"
	return
# 85 "data/maps/PetalburgWoods/scripts.pory"

# 86 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherPostBattle::
# 87 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouveGotSomeNerve, MSGBOX_DEFAULT
# 88 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 89 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaRunAway
# 90 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 91 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_GRUNT
# 92 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 93 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 94 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
# 95 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_TM_FRUSTRATION
# 96 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 97 "data/maps/PetalburgWoods/scripts.pory"
	end
# 98 "data/maps/PetalburgWoods/scripts.pory"

# 99 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherFinish::
# 100 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
# 101 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherStartExit
# 102 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 103 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ICantBeWastingTime, MSGBOX_DEFAULT
# 104 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 105 "data/maps/PetalburgWoods/scripts.pory"
	return
# 106 "data/maps/PetalburgWoods/scripts.pory"

# 107 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RemoveDevonResearcher::
# 108 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 109 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
# 110 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
# 111 "data/maps/PetalburgWoods/scripts.pory"
	end
# 112 "data/maps/PetalburgWoods/scripts.pory"

# 113 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherLookAround:
# 114 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 115 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 116 "data/maps/PetalburgWoods/scripts.pory"
	delay_4
# 117 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 118 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 119 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 120 "data/maps/PetalburgWoods/scripts.pory"
	face_left
# 121 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 122 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 123 "data/maps/PetalburgWoods/scripts.pory"
	face_down
# 124 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 125 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 126 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 127 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 128 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 129 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 130 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 131 "data/maps/PetalburgWoods/scripts.pory"

# 132 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitLeft:
# 133 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 134 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 135 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 136 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 137 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 138 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 139 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 140 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 141 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 142 "data/maps/PetalburgWoods/scripts.pory"

# 143 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft:
# 144 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 145 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 146 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 147 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 148 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 149 "data/maps/PetalburgWoods/scripts.pory"

# 150 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerRight:
# 151 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 152 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 153 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 154 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 155 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 156 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_right
# 157 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 158 "data/maps/PetalburgWoods/scripts.pory"

# 159 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitRight:
# 160 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 161 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 162 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 163 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 164 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 165 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 166 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 167 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 168 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 169 "data/maps/PetalburgWoods/scripts.pory"

# 170 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_WatchResearcherLeave:
# 171 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 172 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 173 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 174 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 175 "data/maps/PetalburgWoods/scripts.pory"

# 176 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft:
# 177 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 178 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 179 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 180 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 181 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 182 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 183 "data/maps/PetalburgWoods/scripts.pory"

# 184 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight:
# 185 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 186 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 187 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 188 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 189 "data/maps/PetalburgWoods/scripts.pory"

# 190 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherStartExit:
# 191 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_down
# 192 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 193 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 194 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 195 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 196 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 197 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 198 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 199 "data/maps/PetalburgWoods/scripts.pory"

# 200 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherLeft:
# 201 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 202 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 203 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 204 "data/maps/PetalburgWoods/scripts.pory"

# 205 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaBackOff:
# 206 "data/maps/PetalburgWoods/scripts.pory"
	lock_facing_direction
# 207 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 208 "data/maps/PetalburgWoods/scripts.pory"
	unlock_facing_direction
# 209 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 210 "data/maps/PetalburgWoods/scripts.pory"

# 211 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaRunAway:
# 212 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 213 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 214 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 215 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 216 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 217 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 218 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 219 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 220 "data/maps/PetalburgWoods/scripts.pory"

# 221 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherRight:
# 222 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 223 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 224 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 225 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 226 "data/maps/PetalburgWoods/scripts.pory"

# 227 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaEntrance:
# 228 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 229 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 230 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 231 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 232 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 233 "data/maps/PetalburgWoods/scripts.pory"

# 234 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachPlayer:
# 235 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 236 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 237 "data/maps/PetalburgWoods/scripts.pory"

# 238 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy1::
# 239 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
# 240 "data/maps/PetalburgWoods/scripts.pory"
	end
# 241 "data/maps/PetalburgWoods/scripts.pory"

# 242 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy2::
# 243 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
# 244 "data/maps/PetalburgWoods/scripts.pory"
	end
# 245 "data/maps/PetalburgWoods/scripts.pory"

# 246 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Girl::
# 247 "data/maps/PetalburgWoods/scripts.pory"
	lock
# 248 "data/maps/PetalburgWoods/scripts.pory"
	faceplayer
# 249 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_RECEIVED_MIRACLE_SEED, PetalburgWoods_EventScript_ExplainMiracleSeed
# 250 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
# 251 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
# 252 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 253 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_RECEIVED_MIRACLE_SEED
# 254 "data/maps/PetalburgWoods/scripts.pory"
	release
# 255 "data/maps/PetalburgWoods/scripts.pory"
	end
# 256 "data/maps/PetalburgWoods/scripts.pory"

# 257 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_ExplainMiracleSeed::
# 258 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
# 259 "data/maps/PetalburgWoods/scripts.pory"
	release
# 260 "data/maps/PetalburgWoods/scripts.pory"
	end
# 261 "data/maps/PetalburgWoods/scripts.pory"

# 262 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign1::
# 263 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
# 264 "data/maps/PetalburgWoods/scripts.pory"
	end
# 265 "data/maps/PetalburgWoods/scripts.pory"

# 266 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign2::
# 267 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
# 268 "data/maps/PetalburgWoods/scripts.pory"
	end
# 269 "data/maps/PetalburgWoods/scripts.pory"

# 270 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Lyle::
# 271 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin
# 272 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
# 273 "data/maps/PetalburgWoods/scripts.pory"
	end
# 274 "data/maps/PetalburgWoods/scripts.pory"

# 275 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_James::
# 276 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_JAMES_1, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose, PetalburgWoods_EventScript_TryRegisterJames
# 277 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 278 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgWoods_EventScript_JamesRematch
# 279 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_0x8004, TRAINER_JAMES_1
# 280 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 281 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_TryRegisterJames2
# 282 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 283 "data/maps/PetalburgWoods/scripts.pory"
	release
# 284 "data/maps/PetalburgWoods/scripts.pory"
	end
# 285 "data/maps/PetalburgWoods/scripts.pory"

# 286 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames::
# 287 "data/maps/PetalburgWoods/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 288 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 289 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames
# 290 "data/maps/PetalburgWoods/scripts.pory"
	release
# 291 "data/maps/PetalburgWoods/scripts.pory"
	end
# 292 "data/maps/PetalburgWoods/scripts.pory"

# 293 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames::
# 294 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
# 295 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 296 "data/maps/PetalburgWoods/scripts.pory"
	release
# 297 "data/maps/PetalburgWoods/scripts.pory"
	end
# 298 "data/maps/PetalburgWoods/scripts.pory"

# 299 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames2::
# 300 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames2
# 301 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 302 "data/maps/PetalburgWoods/scripts.pory"
	release
# 303 "data/maps/PetalburgWoods/scripts.pory"
	end
# 304 "data/maps/PetalburgWoods/scripts.pory"

# 305 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames2::
# 306 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
# 307 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 308 "data/maps/PetalburgWoods/scripts.pory"
	release
# 309 "data/maps/PetalburgWoods/scripts.pory"
	end
# 310 "data/maps/PetalburgWoods/scripts.pory"

# 311 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_JamesRematch::
# 312 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
# 313 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
# 314 "data/maps/PetalburgWoods/scripts.pory"
	end
# 315 "data/maps/PetalburgWoods/scripts.pory"

# 316 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NotAOneToBeFound:
# 317 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hmmm…\n"
# 318 "data/maps/PetalburgWoods/scripts.pory"
	.string "Not a one to be found…$"
# 319 "data/maps/PetalburgWoods/scripts.pory"

# 320 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HaveYouSeenShroomish:
# 321 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hello, have you seen any Pokémon\n"
# 322 "data/maps/PetalburgWoods/scripts.pory"
	.string "called Shroomish around here?\p"
# 323 "data/maps/PetalburgWoods/scripts.pory"
	.string "I really love that Pokémon.$"
# 324 "data/maps/PetalburgWoods/scripts.pory"

# 325 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWasGoingToAmbushYou:
# 326 "data/maps/PetalburgWoods/scripts.pory"
	.string "I was going to ambush you, but you\n"
# 327 "data/maps/PetalburgWoods/scripts.pory"
	.string "had to dawdle in Petalburg Woods\l"
# 328 "data/maps/PetalburgWoods/scripts.pory"
	.string "forever, didn't you?\p"
# 329 "data/maps/PetalburgWoods/scripts.pory"
	.string "I got sick of waiting, so here I am!$"
# 330 "data/maps/PetalburgWoods/scripts.pory"

# 331 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HandOverThosePapers:
# 332 "data/maps/PetalburgWoods/scripts.pory"
	.string "You! Devon Researcher!\p"
# 333 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hand over those papers!$"
# 334 "data/maps/PetalburgWoods/scripts.pory"

# 335 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouHaveToHelpMe:
# 336 "data/maps/PetalburgWoods/scripts.pory"
	.string "Aiyeeeh!\p"
# 337 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're a Pokémon Trainer, aren't you?\n"
# 338 "data/maps/PetalburgWoods/scripts.pory"
	.string "You've got to help me, please!$"
# 339 "data/maps/PetalburgWoods/scripts.pory"

# 340 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NoOneCrossesTeamAqua:
# 341 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hunh? What do you think you're doing?\n"
# 342 "data/maps/PetalburgWoods/scripts.pory"
	.string "What, you're going to protect him?\p"
# 343 "data/maps/PetalburgWoods/scripts.pory"
	.string "No one who crosses Team Aqua\n"
# 344 "data/maps/PetalburgWoods/scripts.pory"
	.string "gets any mercy, not even a kid!\p"
# 345 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me!$"
# 346 "data/maps/PetalburgWoods/scripts.pory"

# 347 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureKiddingMe:
# 348 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're kidding me! You're tough!$"
# 349 "data/maps/PetalburgWoods/scripts.pory"

# 350 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouveGotSomeNerve:
# 351 "data/maps/PetalburgWoods/scripts.pory"
	.string "Grrr… You've got some nerve\n"
# 352 "data/maps/PetalburgWoods/scripts.pory"
	.string "meddling with Team Aqua!\l"
# 353 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me again!\p"
# 354 "data/maps/PetalburgWoods/scripts.pory"
	.string "I wish I could say that, but I'm out of\n"
# 355 "data/maps/PetalburgWoods/scripts.pory"
	.string "Pokémon…\p"
# 356 "data/maps/PetalburgWoods/scripts.pory"
	.string "And, hey, we of Team Aqua are also\n"
# 357 "data/maps/PetalburgWoods/scripts.pory"
	.string "after something in Rustboro.\p"
# 358 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll let you go today!$"
# 359 "data/maps/PetalburgWoods/scripts.pory"

# 360 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ThatWasAwfullyClose:
# 361 "data/maps/PetalburgWoods/scripts.pory"
	.string "Whew…\n"
# 362 "data/maps/PetalburgWoods/scripts.pory"
	.string "That was awfully close!\p"
# 363 "data/maps/PetalburgWoods/scripts.pory"
	.string "Thanks to you, he didn't rob me of\n"
# 364 "data/maps/PetalburgWoods/scripts.pory"
	.string "these important papers.\p"
# 365 "data/maps/PetalburgWoods/scripts.pory"
	.string "I know, I'll give you a TM that my\n"
# 366 "data/maps/PetalburgWoods/scripts.pory"
	.string "boss gave to me, as a thanks!$"
# 367 "data/maps/PetalburgWoods/scripts.pory"

# 368 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro:
# 369 "data/maps/PetalburgWoods/scripts.pory"
	.string "Didn't that Team Aqua thug say\n"
# 370 "data/maps/PetalburgWoods/scripts.pory"
	.string "they were after something in\l"
# 371 "data/maps/PetalburgWoods/scripts.pory"
	.string "Rustboro, too?$"
# 372 "data/maps/PetalburgWoods/scripts.pory"

# 373 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICantBeWastingTime:
# 374 "data/maps/PetalburgWoods/scripts.pory"
	.string "Uh-oh! It's a crisis!\n"
# 375 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be wasting time!$"
# 376 "data/maps/PetalburgWoods/scripts.pory"

# 377 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_GoBugPokemonTeam:
# 378 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a whole bunch of Pokémon!\p"
# 379 "data/maps/PetalburgWoods/scripts.pory"
	.string "Go, go, go!\n"
# 380 "data/maps/PetalburgWoods/scripts.pory"
	.string "My Bug Pokémon team!$"
# 381 "data/maps/PetalburgWoods/scripts.pory"

# 382 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICouldntWin:
# 383 "data/maps/PetalburgWoods/scripts.pory"
	.string "I have all these Pokémon,\n"
# 384 "data/maps/PetalburgWoods/scripts.pory"
	.string "but I couldn't win…$"
# 385 "data/maps/PetalburgWoods/scripts.pory"

# 386 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ImOutOfPokeBalls:
# 387 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a bunch of Pokémon.\n"
# 388 "data/maps/PetalburgWoods/scripts.pory"
	.string "Now I'm out of Poké Balls.$"
# 389 "data/maps/PetalburgWoods/scripts.pory"

# 390 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_InstantlyPopularWithBugPokemon:
# 391 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you take Bug Pokémon to school,\n"
# 392 "data/maps/PetalburgWoods/scripts.pory"
	.string "you get to be instantly popular!$"
# 393 "data/maps/PetalburgWoods/scripts.pory"

# 394 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfILose:
# 395 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 396 "data/maps/PetalburgWoods/scripts.pory"

# 397 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_PeopleRespectYou:
# 398 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you have a big Bug Pokémon,\n"
# 399 "data/maps/PetalburgWoods/scripts.pory"
	.string "people respect you for it.$"
# 400 "data/maps/PetalburgWoods/scripts.pory"

# 401 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch1:
# 402 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my Bug\n"
# 403 "data/maps/PetalburgWoods/scripts.pory"
	.string "Pokémon grow up!\p"
# 404 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my PokéNav!$"
# 405 "data/maps/PetalburgWoods/scripts.pory"

# 406 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch2:
# 407 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my Bug \n"
# 408 "data/maps/PetalburgWoods/scripts.pory"
	.string "Pokémon grow up!\p"
# 409 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my PokéNav!$"
# 410 "data/maps/PetalburgWoods/scripts.pory"

# 411 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MyPokemonHaveGrown:
# 412 "data/maps/PetalburgWoods/scripts.pory"
	.string "My Bug Pokémon have grown.\n"
# 413 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll be popular again.$"
# 414 "data/maps/PetalburgWoods/scripts.pory"

# 415 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfLose:
# 416 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 417 "data/maps/PetalburgWoods/scripts.pory"

# 418 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IveBeenTrainingHard:
# 419 "data/maps/PetalburgWoods/scripts.pory"
	.string "You get to be popular if you have\n"
# 420 "data/maps/PetalburgWoods/scripts.pory"
	.string "strong Pokémon, right?\l"
# 421 "data/maps/PetalburgWoods/scripts.pory"
	.string "So, I've been training hard.$"
# 422 "data/maps/PetalburgWoods/scripts.pory"

# 423 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_StayOutOfTallGrass:
# 424 "data/maps/PetalburgWoods/scripts.pory"
	.string "Yo, there!\n"
# 425 "data/maps/PetalburgWoods/scripts.pory"
	.string "Your Pokémon doing okay?\p"
# 426 "data/maps/PetalburgWoods/scripts.pory"
	.string "If your Pokémon are weak and you want\n"
# 427 "data/maps/PetalburgWoods/scripts.pory"
	.string "to avoid battles, you should stay out\l"
# 428 "data/maps/PetalburgWoods/scripts.pory"
	.string "of tall grass.$"
# 429 "data/maps/PetalburgWoods/scripts.pory"

# 430 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HiddenItemsExplanation:
# 431 "data/maps/PetalburgWoods/scripts.pory"
	.string "Sometimes, there are things on the\n"
# 432 "data/maps/PetalburgWoods/scripts.pory"
	.string "ground even if you can't see them.\p"
# 433 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's why I always check where I'm\n"
# 434 "data/maps/PetalburgWoods/scripts.pory"
	.string "walking.$"
# 435 "data/maps/PetalburgWoods/scripts.pory"

# 436 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TryUsingThisItem:
# 437 "data/maps/PetalburgWoods/scripts.pory"
	.string "Oh, neat!\n"
# 438 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's the Badge from Rustboro Gym!\p"
# 439 "data/maps/PetalburgWoods/scripts.pory"
	.string "You must be a Trainer.\n"
# 440 "data/maps/PetalburgWoods/scripts.pory"
	.string "You should try using this item.$"
# 441 "data/maps/PetalburgWoods/scripts.pory"

# 442 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MiracleSeedExplanation:
# 443 "data/maps/PetalburgWoods/scripts.pory"
	.string "It's a Miracle Seed.\n"
# 444 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a Pokémon holds that item, its\l"
# 445 "data/maps/PetalburgWoods/scripts.pory"
	.string "Grass-type moves become stronger.\p"
# 446 "data/maps/PetalburgWoods/scripts.pory"
	.string "Besides Miracle Seed, I think there are\n"
# 447 "data/maps/PetalburgWoods/scripts.pory"
	.string "other convenient items for Pokémon\l"
# 448 "data/maps/PetalburgWoods/scripts.pory"
	.string "to hold.$"
# 449 "data/maps/PetalburgWoods/scripts.pory"

# 450 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsExperience:
# 451 "data/maps/PetalburgWoods/scripts.pory"
	.string "Trainer Tips\p"
# 452 "data/maps/PetalburgWoods/scripts.pory"
	.string "Any Pokémon that appears even once\n"
# 453 "data/maps/PetalburgWoods/scripts.pory"
	.string "in a battle is awarded Exp Points.\p"
# 454 "data/maps/PetalburgWoods/scripts.pory"
	.string "To raise a weak Pokémon, put it at the\n"
# 455 "data/maps/PetalburgWoods/scripts.pory"
	.string "left of the team list.\p"
# 456 "data/maps/PetalburgWoods/scripts.pory"
	.string "As soon as a battle starts, switch it\n"
# 457 "data/maps/PetalburgWoods/scripts.pory"
	.string "out. It will earn Exp Points without\l"
# 458 "data/maps/PetalburgWoods/scripts.pory"
	.string "being exposed to any harm.$"
# 459 "data/maps/PetalburgWoods/scripts.pory"

# 460 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsPP:
# 461 "data/maps/PetalburgWoods/scripts.pory"
	.string "Trainer Tips\p"
# 462 "data/maps/PetalburgWoods/scripts.pory"
	.string "In addition to Hit Points (HP), Pokémon\n"
# 463 "data/maps/PetalburgWoods/scripts.pory"
	.string "have Power Points (PP) that are used to\l"
# 464 "data/maps/PetalburgWoods/scripts.pory"
	.string "make moves during battle.\p"
# 465 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a Pokémon runs out of PP, it must be\n"
# 466 "data/maps/PetalburgWoods/scripts.pory"
	.string "taken to a Pokémon Center.$"
