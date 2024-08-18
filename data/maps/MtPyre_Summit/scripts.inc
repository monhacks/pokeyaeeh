# 1 "data/maps/MtPyre_Summit/scripts.pory"

# 2 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_ARCHIE, 2
# 3 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_OLD_LADY, 3
# 4 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_GRUNT_1, 4
# 5 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_GRUNT_2, 5
# 6 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_GRUNT_3, 6
# 7 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_GRUNT_4, 7
# 8 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_MAXIE, 8
# 9 "data/maps/MtPyre_Summit/scripts.pory"

# 10 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_MapScripts::
# 11 "data/maps/MtPyre_Summit/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtPyre_Summit_OnTransition
# 12 "data/maps/MtPyre_Summit/scripts.pory"
	.byte 0
# 13 "data/maps/MtPyre_Summit/scripts.pory"

# 14 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_OnTransition:
# 15 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_MT_PYRE_STATE, 2, MtPyre_Summit_EventScript_SetArchieMaxiePositions
# 16 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 17 "data/maps/MtPyre_Summit/scripts.pory"

# 18 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_SetArchieMaxiePositions::
# 19 "data/maps/MtPyre_Summit/scripts.pory"
	setobjectxyperm LOCALID_MAXIE, 23, 6
# 20 "data/maps/MtPyre_Summit/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 22, 6
# 21 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 22 "data/maps/MtPyre_Summit/scripts.pory"

# 23 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaTrigger0::
# 24 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 25 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 0
# 26 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
# 27 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 28 "data/maps/MtPyre_Summit/scripts.pory"

# 29 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaTrigger1::
# 30 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 31 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 1
# 32 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
# 33 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 34 "data/maps/MtPyre_Summit/scripts.pory"

# 35 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaTrigger2::
# 36 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 37 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 2
# 38 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
# 39 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 40 "data/maps/MtPyre_Summit/scripts.pory"

# 41 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieBattle::
# 42 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ArchieWhatAreYouDoingHere, MSGBOX_DEFAULT
# 43 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_no_intro TRAINER_ARCHIE_MT_PYRE, MtPyre_Summit_Text_ArchieDefeat
# 44 "data/maps/MtPyre_Summit/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 45 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 46 "data/maps/MtPyre_Summit/scripts.pory"

# 47 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaExits::
# 48 "data/maps/MtPyre_Summit/scripts.pory"
	delay 4
# 49 "data/maps/MtPyre_Summit/scripts.pory"
	playse SE_PIN
# 50 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_ExclamationMark
# 51 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 52 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_Delay48
# 53 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 54 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FacePlayer
# 55 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 56 "data/maps/MtPyre_Summit/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 57 "data/maps/MtPyre_Summit/scripts.pory"
	call MtPyre_Summit_EventScript_ArchieBattle
# 58 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 59 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 60 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 61 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 62 "data/maps/MtPyre_Summit/scripts.pory"
	delay 50
# 63 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_ArchieFacePlayer0
# 64 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_ArchieFacePlayer1
# 65 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_ArchieFacePlayer2
# 66 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ArchieWeGotTheOrbLetsGo, MSGBOX_DEFAULT
# 67 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 68 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreen FADE_TO_BLACK
# 69 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_ARCHIE
# 70 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 71 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 72 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_GRUNT_3
# 73 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_GRUNT_4
# 74 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE
# 75 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_TEAM_AQUA
# 76 "data/maps/MtPyre_Summit/scripts.pory"
	fadedefaultbgm
# 77 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 78 "data/maps/MtPyre_Summit/scripts.pory"
	delay 20
# 79 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 1
# 80 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_OldLadyApproachPlayer0
# 81 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_OldLadyApproachPlayer1
# 82 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_OldLadyApproachPlayer2
# 83 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis, MSGBOX_DEFAULT
# 84 "data/maps/MtPyre_Summit/scripts.pory"
	giveitem ITEM_MAGMA_EMBLEM
# 85 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_RECEIVED_RED_OR_BLUE_ORB
# 86 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
# 87 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
# 88 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 89 "data/maps/MtPyre_Summit/scripts.pory"

# 90 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer0::
# 91 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieFacePlayer0
# 92 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 93 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 94 "data/maps/MtPyre_Summit/scripts.pory"

# 95 "data/maps/MtPyre_Summit/scripts.pory"
@ Archie is already facing player
# 96 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer1::
# 97 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 98 "data/maps/MtPyre_Summit/scripts.pory"

# 99 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer2::
# 100 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieFacePlayer2
# 101 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 102 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 103 "data/maps/MtPyre_Summit/scripts.pory"

# 104 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer0::
# 105 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer0
# 106 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 107 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 108 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 109 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 110 "data/maps/MtPyre_Summit/scripts.pory"

# 111 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer1::
# 112 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer1
# 113 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 114 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 115 "data/maps/MtPyre_Summit/scripts.pory"

# 116 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer2::
# 117 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer2
# 118 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 119 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 120 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 121 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 122 "data/maps/MtPyre_Summit/scripts.pory"

# 123 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer0:
# 124 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 125 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 126 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 127 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 128 "data/maps/MtPyre_Summit/scripts.pory"

# 129 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer1:
# 130 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 131 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 132 "data/maps/MtPyre_Summit/scripts.pory"

# 133 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer2:
# 134 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 135 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 136 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 137 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 138 "data/maps/MtPyre_Summit/scripts.pory"

# 139 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieFacePlayer0:
# 140 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 141 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 142 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 143 "data/maps/MtPyre_Summit/scripts.pory"

# 144 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieFacePlayer2:
# 145 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 146 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 147 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 148 "data/maps/MtPyre_Summit/scripts.pory"

# 149 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldMan::
# 150 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 151 "data/maps/MtPyre_Summit/scripts.pory"
	faceplayer
# 152 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, MtPyre_Summit_EventScript_OldManAfterRayquaza
# 153 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WillYouHearOutMyTale, MSGBOX_YESNO
# 154 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_OldManTale
# 155 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, NO, MtPyre_Summit_EventScript_DeclineOldManTale
# 156 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 157 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 158 "data/maps/MtPyre_Summit/scripts.pory"

# 159 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManAfterRayquaza::
# 160 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_HearTheNewLegendOfHoenn, MSGBOX_YESNO
# 161 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_OldManNewTale
# 162 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, NO, MtPyre_Summit_EventScript_DeclineOldManTale
# 163 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 164 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 165 "data/maps/MtPyre_Summit/scripts.pory"

# 166 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManTale::
# 167 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GroudonKyogreTale, MSGBOX_DEFAULT
# 168 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 169 "data/maps/MtPyre_Summit/scripts.pory"

# 170 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_DeclineOldManTale::
# 171 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WellThatTooIsFine, MSGBOX_DEFAULT
# 172 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 173 "data/maps/MtPyre_Summit/scripts.pory"

# 174 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManNewTale::
# 175 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_HoennTrioTale, MSGBOX_DEFAULT
# 176 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 177 "data/maps/MtPyre_Summit/scripts.pory"

# 178 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLady::
# 179 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 180 "data/maps/MtPyre_Summit/scripts.pory"
	faceplayer
# 181 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_RETURNED_RED_OR_BLUE_ORB, MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned
# 182 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_ge VAR_MT_PYRE_STATE, 3, MtPyre_Summit_EventScript_OldLadyOrbsReturned
# 183 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, MtPyre_Summit_EventScript_OldLadyLegendariesAwake
# 184 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_OrbsHaveBeenTaken, MSGBOX_DEFAULT
# 185 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 186 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 187 "data/maps/MtPyre_Summit/scripts.pory"

# 188 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyOrbsReturned::
# 189 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs, MSGBOX_DEFAULT
# 190 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_RETURNED_RED_OR_BLUE_ORB
# 191 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 192 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 193 "data/maps/MtPyre_Summit/scripts.pory"

# 194 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyLegendariesAwake::
# 195 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GroudonKyogreAwakened, MSGBOX_DEFAULT
# 196 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 197 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 198 "data/maps/MtPyre_Summit/scripts.pory"

# 199 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned::
# 200 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_SuperAncientPokemonTaughtUs, MSGBOX_DEFAULT
# 201 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 202 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 203 "data/maps/MtPyre_Summit/scripts.pory"

# 204 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger0::
# 205 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 206 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 0
# 207 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 208 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 209 "data/maps/MtPyre_Summit/scripts.pory"

# 210 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger1::
# 211 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 212 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 1
# 213 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 214 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 215 "data/maps/MtPyre_Summit/scripts.pory"

# 216 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger2::
# 217 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 218 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 2
# 219 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 220 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 221 "data/maps/MtPyre_Summit/scripts.pory"

# 222 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs::
# 223 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 224 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 225 "data/maps/MtPyre_Summit/scripts.pory"
	delay 60
# 226 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_ArchieMaxieBeginExit0
# 227 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_ArchieMaxieBeginExit1
# 228 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_ArchieMaxieBeginExit2
# 229 "data/maps/MtPyre_Summit/scripts.pory"
	playse SE_PIN
# 230 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 231 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 232 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_Delay48
# 233 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 234 "data/maps/MtPyre_Summit/scripts.pory"
	delay 30
# 235 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_MaxieApproachPlayer0
# 236 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_MaxieApproachPlayer1
# 237 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_MaxieApproachPlayer2
# 238 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_MaxieSilence, MSGBOX_DEFAULT
# 239 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 240 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_MaxieApproachArchie0
# 241 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_MaxieApproachArchie1
# 242 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_MaxieApproachArchie2
# 243 "data/maps/MtPyre_Summit/scripts.pory"
	delay 30
# 244 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 245 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 246 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 247 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_ARCHIE
# 248 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MAXIE
# 249 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 3
# 250 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
# 251 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 252 "data/maps/MtPyre_Summit/scripts.pory"

# 253 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit0::
# 254 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0
# 255 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 256 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 257 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 258 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 259 "data/maps/MtPyre_Summit/scripts.pory"

# 260 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit1::
# 261 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1
# 262 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 263 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 264 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 265 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 266 "data/maps/MtPyre_Summit/scripts.pory"

# 267 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit2::
# 268 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2
# 269 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 270 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 271 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 272 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 273 "data/maps/MtPyre_Summit/scripts.pory"

# 274 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer0::
# 275 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie0
# 276 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 277 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer0
# 278 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 279 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 280 "data/maps/MtPyre_Summit/scripts.pory"

# 281 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer1::
# 282 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
# 283 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 284 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer1
# 285 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 286 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 287 "data/maps/MtPyre_Summit/scripts.pory"

# 288 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer2::
# 289 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
# 290 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 291 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer2
# 292 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 293 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 294 "data/maps/MtPyre_Summit/scripts.pory"

# 295 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie0::
# 296 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 297 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie0
# 298 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 299 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 300 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 301 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 302 "data/maps/MtPyre_Summit/scripts.pory"

# 303 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie1::
# 304 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 305 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie1
# 306 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 307 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 308 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 309 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 310 "data/maps/MtPyre_Summit/scripts.pory"

# 311 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie2::
# 312 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 313 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie2
# 314 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 315 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 316 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 317 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 318 "data/maps/MtPyre_Summit/scripts.pory"

# 319 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerFaceMaxie0:
# 320 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 321 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 322 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 323 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 324 "data/maps/MtPyre_Summit/scripts.pory"

# 325 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerFaceMaxie:
# 326 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 327 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 328 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 329 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 330 "data/maps/MtPyre_Summit/scripts.pory"

# 331 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieExit:
# 332 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 333 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 334 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 335 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 336 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 337 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 338 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 339 "data/maps/MtPyre_Summit/scripts.pory"

# 340 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieExit:
# 341 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 342 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 343 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 344 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 345 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 346 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 347 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 348 "data/maps/MtPyre_Summit/scripts.pory"

# 349 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0:
# 350 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 351 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 352 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 353 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 354 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 355 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 356 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 357 "data/maps/MtPyre_Summit/scripts.pory"

# 358 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1:
# 359 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 360 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 361 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 362 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 363 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 364 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 365 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 366 "data/maps/MtPyre_Summit/scripts.pory"

# 367 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2:
# 368 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 369 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 370 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 371 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 372 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 373 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 374 "data/maps/MtPyre_Summit/scripts.pory"

# 375 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer0:
# 376 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 377 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 378 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 379 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 380 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 381 "data/maps/MtPyre_Summit/scripts.pory"

# 382 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer1:
# 383 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 384 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 385 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 386 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 387 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 388 "data/maps/MtPyre_Summit/scripts.pory"

# 389 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer2:
# 390 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 391 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 392 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 393 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 394 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 395 "data/maps/MtPyre_Summit/scripts.pory"

# 396 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieWatchMaxie:
# 397 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 398 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_up
# 399 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 400 "data/maps/MtPyre_Summit/scripts.pory"

# 401 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchMaxie:
# 402 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 403 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 404 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 405 "data/maps/MtPyre_Summit/scripts.pory"

# 406 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie0:
# 407 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 408 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 409 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 410 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 411 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 412 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 413 "data/maps/MtPyre_Summit/scripts.pory"

# 414 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie1:
# 415 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 416 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 417 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 418 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 419 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 420 "data/maps/MtPyre_Summit/scripts.pory"

# 421 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie2:
# 422 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 423 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 424 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 425 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 426 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 427 "data/maps/MtPyre_Summit/scripts.pory"

# 428 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt1::
# 429 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_1, MtPyre_Summit_Text_Grunt1Intro, MtPyre_Summit_Text_Grunt1Defeat
# 430 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 431 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 432 "data/maps/MtPyre_Summit/scripts.pory"

# 433 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt2::
# 434 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_2, MtPyre_Summit_Text_Grunt2Intro, MtPyre_Summit_Text_Grunt2Defeat
# 435 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 436 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 437 "data/maps/MtPyre_Summit/scripts.pory"

# 438 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt3::
# 439 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_3, MtPyre_Summit_Text_Grunt3Intro, MtPyre_Summit_Text_Grunt3Defeat
# 440 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 441 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 442 "data/maps/MtPyre_Summit/scripts.pory"

# 443 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt4::
# 444 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_4, MtPyre_Summit_Text_Grunt4Intro, MtPyre_Summit_Text_Grunt4Defeat
# 445 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 446 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 447 "data/maps/MtPyre_Summit/scripts.pory"

# 448 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1Intro:
# 449 "data/maps/MtPyre_Summit/scripts.pory"
	.string "No! Those Team Magma goons got\n"
# 450 "data/maps/MtPyre_Summit/scripts.pory"
	.string "here ahead of us!\p"
# 451 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We can't fall behind!$"
# 452 "data/maps/MtPyre_Summit/scripts.pory"

# 453 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1Defeat:
# 454 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I thought you were one of the Magmas\n"
# 455 "data/maps/MtPyre_Summit/scripts.pory"
	.string "who happened to come back…$"
# 456 "data/maps/MtPyre_Summit/scripts.pory"

# 457 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1PostBattle:
# 458 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Yeah, so you are strong…\n"
# 459 "data/maps/MtPyre_Summit/scripts.pory"
	.string "But there're a lot of us!$"
# 460 "data/maps/MtPyre_Summit/scripts.pory"

# 461 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2Intro:
# 462 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Hah!\n"
# 463 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Too bad for you!\p"
# 464 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you came earlier, you only would've\n"
# 465 "data/maps/MtPyre_Summit/scripts.pory"
	.string "had to battle the wimpy Team Magma.\p"
# 466 "data/maps/MtPyre_Summit/scripts.pory"
	.string "But since you arrived now, you have\n"
# 467 "data/maps/MtPyre_Summit/scripts.pory"
	.string "to take on us toughies!$"
# 468 "data/maps/MtPyre_Summit/scripts.pory"

# 469 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2Defeat:
# 470 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Urgh… I should've let you take on\n"
# 471 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Team Magma first…$"
# 472 "data/maps/MtPyre_Summit/scripts.pory"

# 473 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2PostBattle:
# 474 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You don't know anything!\n"
# 475 "data/maps/MtPyre_Summit/scripts.pory"
	.string "So why are you messing with us?$"
# 476 "data/maps/MtPyre_Summit/scripts.pory"

# 477 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3Intro:
# 478 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You…\n"
# 479 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We saw you at Mt. Chimney.\p"
# 480 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You don't belong to either Team,\n"
# 481 "data/maps/MtPyre_Summit/scripts.pory"
	.string "so why would you be here?$"
# 482 "data/maps/MtPyre_Summit/scripts.pory"

# 483 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3Defeat:
# 484 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you're going to mess with anyone,\n"
# 485 "data/maps/MtPyre_Summit/scripts.pory"
	.string "let it be Team Magma…$"
# 486 "data/maps/MtPyre_Summit/scripts.pory"

# 487 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3PostBattle:
# 488 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Heh, it doesn't matter!\n"
# 489 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We bought ourselves some time!\p"
# 490 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Boss should have snatched what\n"
# 491 "data/maps/MtPyre_Summit/scripts.pory"
	.string "he was after!$"
# 492 "data/maps/MtPyre_Summit/scripts.pory"

# 493 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4Intro:
# 494 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, I know!\n"
# 495 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You tried to join Team Magma,\l"
# 496 "data/maps/MtPyre_Summit/scripts.pory"
	.string "but they wouldn't have you!\p"
# 497 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, don't think that we'll let you\n"
# 498 "data/maps/MtPyre_Summit/scripts.pory"
	.string "join our Team Aqua!$"
# 499 "data/maps/MtPyre_Summit/scripts.pory"

# 500 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4Defeat:
# 501 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you want to join Team Aqua that\n"
# 502 "data/maps/MtPyre_Summit/scripts.pory"
	.string "badly, we can consider it…$"
# 503 "data/maps/MtPyre_Summit/scripts.pory"

# 504 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4PostBattle:
# 505 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We have a great combination going\n"
# 506 "data/maps/MtPyre_Summit/scripts.pory"
	.string "with us members and our leader.$"
# 507 "data/maps/MtPyre_Summit/scripts.pory"

# 508 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ArchieWhatAreYouDoingHere:
# 509 "data/maps/MtPyre_Summit/scripts.pory"
	.string "{PLAYER}…\n"
# 510 "data/maps/MtPyre_Summit/scripts.pory"
	.string "What are you doing here?\p"
# 511 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\p"
# 512 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I see.\n"
# 513 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You want to stop us!\p"
# 514 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Fine, I didn't think we'd need to this!$"
# 515 "data/maps/MtPyre_Summit/scripts.pory"

# 516 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ArchieDefeat:
# 517 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You'll regret this, {PLAYER}!$"
# 518 "data/maps/MtPyre_Summit/scripts.pory"

# 519 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ArchieWeGotTheOrbLetsGo:
# 520 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Archie: Team Magma's Maxie got ahead\n"
# 521 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of us, but we also got what we wanted.\p"
# 522 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Blue Orb preserved at Mt. Pyre…\n"
# 523 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I, Archie, now have it in my possession!\p"
# 524 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Fufufu… Now we can bring our ultimate\n"
# 525 "data/maps/MtPyre_Summit/scripts.pory"
	.string "objective to fruition!\p"
# 526 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Okay, Team!\n"
# 527 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We're pulling out!$"
# 528 "data/maps/MtPyre_Summit/scripts.pory"

# 529 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis:
# 530 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, no…\n"
# 531 "data/maps/MtPyre_Summit/scripts.pory"
	.string "This cannot happen…\p"
# 532 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Not only the Red Orb, but even\n"
# 533 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the Blue Orb has been taken…\p"
# 534 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Blue Orb and Red Orb must never\n"
# 535 "data/maps/MtPyre_Summit/scripts.pory"
	.string "be separated. They belong together.\p"
# 536 "data/maps/MtPyre_Summit/scripts.pory"
	.string "What are those men trying to do with\n"
# 537 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the two Orbs?\p"
# 538 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\n"
# 539 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\p"
# 540 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, yes. Was it Team Magma who came\n"
# 541 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and took the Red Orb first?\p"
# 542 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, in their haste, they left this\n"
# 543 "data/maps/MtPyre_Summit/scripts.pory"
	.string "behind.\p"
# 544 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I couldn't imagine what exactly it\n"
# 545 "data/maps/MtPyre_Summit/scripts.pory"
	.string "could be.\p"
# 546 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I would like you to have it.\n"
# 547 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Perhaps it will be useful in some way.$"
# 548 "data/maps/MtPyre_Summit/scripts.pory"

# 549 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_OrbsHaveBeenTaken:
# 550 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Blue Orb and Red Orb taken by\n"
# 551 "data/maps/MtPyre_Summit/scripts.pory"
	.string "those sinister men…\p"
# 552 "data/maps/MtPyre_Summit/scripts.pory"
	.string "They must never be apart…\n"
# 553 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I fear something terrible will happen…$"
# 554 "data/maps/MtPyre_Summit/scripts.pory"

# 555 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_GroudonKyogreAwakened:
# 556 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, my goodness…\p"
# 557 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You say that both Groudon and Kyogre\n"
# 558 "data/maps/MtPyre_Summit/scripts.pory"
	.string "have been awakened?\p"
# 559 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is said that the Blue Orb and\n"
# 560 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the Red Orb quelled the rage of\l"
# 561 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the two Pokémon…\p"
# 562 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is also said that the true owner\n"
# 563 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of the Orbs still exists.\p"
# 564 "data/maps/MtPyre_Summit/scripts.pory"
	.string "However, no one knows who, or what\n"
# 565 "data/maps/MtPyre_Summit/scripts.pory"
	.string "exactly, the Orbs belong to.\p"
# 566 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It could be a human, or perhaps\n"
# 567 "data/maps/MtPyre_Summit/scripts.pory"
	.string "a Pokémon, but no one knows.$"
# 568 "data/maps/MtPyre_Summit/scripts.pory"

# 569 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs:
# 570 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The two men who took the Orbs came\n"
# 571 "data/maps/MtPyre_Summit/scripts.pory"
	.string "back to return them on their own.\p"
# 572 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Those men…\n"
# 573 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Perhaps they are not so evil after all…$"
# 574 "data/maps/MtPyre_Summit/scripts.pory"

# 575 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_SuperAncientPokemonTaughtUs:
# 576 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The embodiments of the land, sea,\n"
# 577 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the sky…\p"
# 578 "data/maps/MtPyre_Summit/scripts.pory"
	.string "That is said to be the identities of\n"
# 579 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the super-ancient Pokémon…\p"
# 580 "data/maps/MtPyre_Summit/scripts.pory"
	.string "In the same way that we humans and\n"
# 581 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Pokémon have life, our world, too,\l"
# 582 "data/maps/MtPyre_Summit/scripts.pory"
	.string "is alive…\p"
# 583 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The super-ancient Pokémon have\n"
# 584 "data/maps/MtPyre_Summit/scripts.pory"
	.string "taught us that…$"
# 585 "data/maps/MtPyre_Summit/scripts.pory"

# 586 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WillYouHearOutMyTale:
# 587 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Mt. Pyre is where we calm the spirits\n"
# 588 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of Pokémon that have passed on…\p"
# 589 "data/maps/MtPyre_Summit/scripts.pory"
	.string "This is a high place where one can\n"
# 590 "data/maps/MtPyre_Summit/scripts.pory"
	.string "see all of Hoenn…\p"
# 591 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The disembodied spirits of Pokémon\n"
# 592 "data/maps/MtPyre_Summit/scripts.pory"
	.string "must find solace here…\p"
# 593 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Is it coincidence that you are here…\p"
# 594 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Will you hear out my tale? A tale long\n"
# 595 "data/maps/MtPyre_Summit/scripts.pory"
	.string "told in the Hoenn region?$"
# 596 "data/maps/MtPyre_Summit/scripts.pory"

# 597 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_GroudonKyogreTale:
# 598 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It happened long, long ago…\p"
# 599 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was wracked by a ferocious\n"
# 600 "data/maps/MtPyre_Summit/scripts.pory"
	.string "clash between the Pokémon of the land\l"
# 601 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the Pokémon of the sea…\p"
# 602 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the land raised\n"
# 603 "data/maps/MtPyre_Summit/scripts.pory"
	.string "mountains and created continents…\p"
# 604 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the sea raised huge\n"
# 605 "data/maps/MtPyre_Summit/scripts.pory"
	.string "waves and carved out oceans…\p"
# 606 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Their fierce duel raged without end.\p"
# 607 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was engulfed in massive\n"
# 608 "data/maps/MtPyre_Summit/scripts.pory"
	.string "infernos and vicious storms.\p"
# 609 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Blue Orb and the Red Orb brought\n"
# 610 "data/maps/MtPyre_Summit/scripts.pory"
	.string "an end to the calamity.\p"
# 611 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Light poured from the two Orbs and\n"
# 612 "data/maps/MtPyre_Summit/scripts.pory"
	.string "becalmed the enraged adversaries.\p"
# 613 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The pair, made docile, dove deep into\n"
# 614 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the sea where eventually they\l"
# 615 "data/maps/MtPyre_Summit/scripts.pory"
	.string "disappeared…$"
# 616 "data/maps/MtPyre_Summit/scripts.pory"

# 617 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WellThatTooIsFine:
# 618 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I see…\n"
# 619 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, that, too, is fine…$"
# 620 "data/maps/MtPyre_Summit/scripts.pory"

# 621 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_MaxieSilence:
# 622 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Maxie: {PLAYER}…\p"
# 623 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\n"
# 624 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\p"
# 625 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We'll be at our hideouts,\n"
# 626 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\l"
# 627 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …$"
# 628 "data/maps/MtPyre_Summit/scripts.pory"

# 629 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_HearTheNewLegendOfHoenn:
# 630 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is my role to pass on the legends\n"
# 631 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of Hoenn to future generations.\p"
# 632 "data/maps/MtPyre_Summit/scripts.pory"
	.string "And the crisis that just ended in\n"
# 633 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Sootopolis rewrote a legend…\p"
# 634 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Have you the time to hear the new\n"
# 635 "data/maps/MtPyre_Summit/scripts.pory"
	.string "legend of Hoenn?$"
# 636 "data/maps/MtPyre_Summit/scripts.pory"

# 637 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_HoennTrioTale:
# 638 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It happened long, long ago…\p"
# 639 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was wracked by a ferocious\n"
# 640 "data/maps/MtPyre_Summit/scripts.pory"
	.string "clash between the Pokémon of the land\l"
# 641 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the Pokémon of the sea…\p"
# 642 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the land raised\n"
# 643 "data/maps/MtPyre_Summit/scripts.pory"
	.string "mountains and created continents…\p"
# 644 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the sea raised huge\n"
# 645 "data/maps/MtPyre_Summit/scripts.pory"
	.string "waves and carved out oceans…\p"
# 646 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Their fierce duel raged without end.\p"
# 647 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was engulfed in massive\n"
# 648 "data/maps/MtPyre_Summit/scripts.pory"
	.string "fires and vicious storms.\p"
# 649 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It was then that the Pokémon of\n"
# 650 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the sky descended from a storm.\p"
# 651 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon, shining a vivid green,\n"
# 652 "data/maps/MtPyre_Summit/scripts.pory"
	.string "becalmed the two enraged Pokémon.\p"
# 653 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Then, its duty done, the green Pokémon\n"
# 654 "data/maps/MtPyre_Summit/scripts.pory"
	.string "flew off into the wild blue yonder…$"
