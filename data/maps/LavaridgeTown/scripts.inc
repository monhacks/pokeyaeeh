# 1 "data/maps/LavaridgeTown/scripts.pory"

# 2 "data/maps/LavaridgeTown/scripts.pory"
.set LOCALID_RIVAL_ON_BIKE, 7
# 3 "data/maps/LavaridgeTown/scripts.pory"
.set LOCALID_RIVAL, 8
# 4 "data/maps/LavaridgeTown/scripts.pory"

# 5 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_MapScripts::
# 6 "data/maps/LavaridgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_OnTransition
# 7 "data/maps/LavaridgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LavaridgeTown_OnFrame
# 8 "data/maps/LavaridgeTown/scripts.pory"
	.byte 0
# 9 "data/maps/LavaridgeTown/scripts.pory"

# 10 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_OnTransition:
# 11 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_VISITED_LAVARIDGE_TOWN
# 12 "data/maps/LavaridgeTown/scripts.pory"
	call_if_set FLAG_WHITEOUT_TO_LAVARIDGE, LavaridgeTown_EventScript_ClearLavaridgeWhiteOut
# 13 "data/maps/LavaridgeTown/scripts.pory"
	call_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, LavaridgeTown_EventScript_ShowMtChimneyTrainers
# 14 "data/maps/LavaridgeTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 15 "data/maps/LavaridgeTown/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 16 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_CheckSetRivalPos
# 17 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_HideMapNamePopup
# 18 "data/maps/LavaridgeTown/scripts.pory"
	end
# 19 "data/maps/LavaridgeTown/scripts.pory"

# 20 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ClearLavaridgeWhiteOut::
# 21 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_WHITEOUT_TO_LAVARIDGE
# 22 "data/maps/LavaridgeTown/scripts.pory"
	return
# 23 "data/maps/LavaridgeTown/scripts.pory"

# 24 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_CheckSetRivalPos::
# 25 "data/maps/LavaridgeTown/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 26 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_0x8004, 9, LavaridgeTown_EventScript_SetRivalPos
# 27 "data/maps/LavaridgeTown/scripts.pory"
	return
# 28 "data/maps/LavaridgeTown/scripts.pory"

# 29 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_SetRivalPos::
# 30 "data/maps/LavaridgeTown/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 11, 9
# 31 "data/maps/LavaridgeTown/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 9, 8
# 32 "data/maps/LavaridgeTown/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_UP
# 33 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_LAVARIDGE_TOWN_RIVAL
# 34 "data/maps/LavaridgeTown/scripts.pory"
	return
# 35 "data/maps/LavaridgeTown/scripts.pory"

# 36 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ShowMtChimneyTrainers::
# 37 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
# 38 "data/maps/LavaridgeTown/scripts.pory"
	return
# 39 "data/maps/LavaridgeTown/scripts.pory"

# 40 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HideMapNamePopup::
# 41 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 42 "data/maps/LavaridgeTown/scripts.pory"
	return
# 43 "data/maps/LavaridgeTown/scripts.pory"

# 44 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_OnFrame:
# 45 "data/maps/LavaridgeTown/scripts.pory"
	map_script_2 VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_RivalGiveGoGoggles
# 46 "data/maps/LavaridgeTown/scripts.pory"
	.2byte 0
# 47 "data/maps/LavaridgeTown/scripts.pory"

# 48 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalGiveGoGoggles::
# 49 "data/maps/LavaridgeTown/scripts.pory"
	lockall
# 50 "data/maps/LavaridgeTown/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 51 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalNoticePlayer
# 52 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExitHerbShop
# 53 "data/maps/LavaridgeTown/scripts.pory"
	delay 20
# 54 "data/maps/LavaridgeTown/scripts.pory"
	checkplayergender
# 55 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LavaridgeTown_EventScript_PlayMayMusic
# 56 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LavaridgeTown_EventScript_PlayBrendanMusic
# 57 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalApproachPlayer1
# 58 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalApproachPlayer2
# 59 "data/maps/LavaridgeTown/scripts.pory"
	checkplayergender
# 60 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LavaridgeTown_EventScript_MayGiveGoGoggles
# 61 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LavaridgeTown_EventScript_BrendanGiveGoGoggles
# 62 "data/maps/LavaridgeTown/scripts.pory"
	end
# 63 "data/maps/LavaridgeTown/scripts.pory"

# 64 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_MayGiveGoGoggles::
# 65 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_MayNiceBadgesTakeThis, MSGBOX_DEFAULT
# 66 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 67 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_GO_GOGGLES
# 68 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_MayExplainGoGogglesChallengeDad, MSGBOX_DEFAULT
# 69 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalExit
# 70 "data/maps/LavaridgeTown/scripts.pory"
	end
# 71 "data/maps/LavaridgeTown/scripts.pory"

# 72 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_BrendanGiveGoGoggles::
# 73 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BrendanNiceBadgesTakeThis, MSGBOX_DEFAULT
# 74 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 75 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_GO_GOGGLES
# 76 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad, MSGBOX_DEFAULT
# 77 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalExit
# 78 "data/maps/LavaridgeTown/scripts.pory"
	end
# 79 "data/maps/LavaridgeTown/scripts.pory"

# 80 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit::
# 81 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
# 82 "data/maps/LavaridgeTown/scripts.pory"
	removeobject LOCALID_RIVAL
# 83 "data/maps/LavaridgeTown/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 84 "data/maps/LavaridgeTown/scripts.pory"
	delay 30
# 85 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExit1
# 86 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExit2
# 87 "data/maps/LavaridgeTown/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 88 "data/maps/LavaridgeTown/scripts.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 2
# 89 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 90 "data/maps/LavaridgeTown/scripts.pory"
	savebgm MUS_DUMMY
# 91 "data/maps/LavaridgeTown/scripts.pory"
	fadedefaultbgm
# 92 "data/maps/LavaridgeTown/scripts.pory"
	releaseall
# 93 "data/maps/LavaridgeTown/scripts.pory"
	end
# 94 "data/maps/LavaridgeTown/scripts.pory"

# 95 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_PlayMayMusic::
# 96 "data/maps/LavaridgeTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 97 "data/maps/LavaridgeTown/scripts.pory"
	return
# 98 "data/maps/LavaridgeTown/scripts.pory"

# 99 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_PlayBrendanMusic::
# 100 "data/maps/LavaridgeTown/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 101 "data/maps/LavaridgeTown/scripts.pory"
	return
# 102 "data/maps/LavaridgeTown/scripts.pory"

# 103 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalNoticePlayer::
# 104 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 105 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 106 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 107 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 108 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 109 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 110 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 111 "data/maps/LavaridgeTown/scripts.pory"
	return
# 112 "data/maps/LavaridgeTown/scripts.pory"

# 113 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExitHerbShop::
# 114 "data/maps/LavaridgeTown/scripts.pory"
	opendoor 12, 15
# 115 "data/maps/LavaridgeTown/scripts.pory"
	waitdooranim
# 116 "data/maps/LavaridgeTown/scripts.pory"
	addobject LOCALID_RIVAL
# 117 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_RivalExitHerbShop
# 118 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 119 "data/maps/LavaridgeTown/scripts.pory"
	closedoor 12, 15
# 120 "data/maps/LavaridgeTown/scripts.pory"
	waitdooranim
# 121 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterLeft
# 122 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 123 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 124 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 125 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 126 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 127 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 128 "data/maps/LavaridgeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 129 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 130 "data/maps/LavaridgeTown/scripts.pory"
	return
# 131 "data/maps/LavaridgeTown/scripts.pory"

# 132 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalApproachPlayer1::
# 133 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_RivalApproachPlayer1
# 134 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 135 "data/maps/LavaridgeTown/scripts.pory"
	return
# 136 "data/maps/LavaridgeTown/scripts.pory"

# 137 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalApproachPlayer2::
# 138 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_RivalApproachPlayer2
# 139 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 140 "data/maps/LavaridgeTown/scripts.pory"
	return
# 141 "data/maps/LavaridgeTown/scripts.pory"

# 142 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit1::
# 143 "data/maps/LavaridgeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LavaridgeTown_Movement_PlayerWatchRivalExit
# 144 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, LavaridgeTown_Movement_RivalExit1
# 145 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 146 "data/maps/LavaridgeTown/scripts.pory"
	return
# 147 "data/maps/LavaridgeTown/scripts.pory"

# 148 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit2::
# 149 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, LavaridgeTown_Movement_RivalExit2
# 150 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 151 "data/maps/LavaridgeTown/scripts.pory"
	return
# 152 "data/maps/LavaridgeTown/scripts.pory"

# 153 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExit2:
# 154 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 155 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 156 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 157 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 158 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 159 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 160 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 161 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 162 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 163 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 164 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 165 "data/maps/LavaridgeTown/scripts.pory"

# 166 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_PlayerWatchRivalExit:
# 167 "data/maps/LavaridgeTown/scripts.pory"
	delay_16
# 168 "data/maps/LavaridgeTown/scripts.pory"
	delay_8
# 169 "data/maps/LavaridgeTown/scripts.pory"
	walk_in_place_faster_right
# 170 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 171 "data/maps/LavaridgeTown/scripts.pory"

# 172 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExit1:
# 173 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_down
# 174 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 175 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 176 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 177 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 178 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 179 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 180 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 181 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 182 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 183 "data/maps/LavaridgeTown/scripts.pory"

# 184 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalApproachPlayer2:
# 185 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 186 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 187 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 188 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 189 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 190 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 191 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 192 "data/maps/LavaridgeTown/scripts.pory"

# 193 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalApproachPlayer1:
# 194 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 195 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 196 "data/maps/LavaridgeTown/scripts.pory"
	walk_up
# 197 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 198 "data/maps/LavaridgeTown/scripts.pory"

# 199 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExitHerbShop:
# 200 "data/maps/LavaridgeTown/scripts.pory"
	walk_down
# 201 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 202 "data/maps/LavaridgeTown/scripts.pory"

# 203 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsTrigger::
# 204 "data/maps/LavaridgeTown/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 205 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, DIR_SOUTH, LavaridgeTown_EventScript_EnteredHotSprings
# 206 "data/maps/LavaridgeTown/scripts.pory"
	end
# 207 "data/maps/LavaridgeTown/scripts.pory"

# 208 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_EnteredHotSprings::
# 209 "data/maps/LavaridgeTown/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_HOT_SPRINGS
# 210 "data/maps/LavaridgeTown/scripts.pory"
	end
# 211 "data/maps/LavaridgeTown/scripts.pory"

# 212 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ExpertM::
# 213 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsNeverRunDry, MSGBOX_NPC
# 214 "data/maps/LavaridgeTown/scripts.pory"
	end
# 215 "data/maps/LavaridgeTown/scripts.pory"

# 216 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_OldMan::
# 217 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_PokemonNippedBackside, MSGBOX_SIGN
# 218 "data/maps/LavaridgeTown/scripts.pory"
	end
# 219 "data/maps/LavaridgeTown/scripts.pory"

# 220 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_Twin::
# 221 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BatheInHotSpringsEveryDay, MSGBOX_NPC
# 222 "data/maps/LavaridgeTown/scripts.pory"
	end
# 223 "data/maps/LavaridgeTown/scripts.pory"

# 224 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsOldWoman1::
# 225 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_IfPokemonInHotSprings, MSGBOX_NPC
# 226 "data/maps/LavaridgeTown/scripts.pory"
	end
# 227 "data/maps/LavaridgeTown/scripts.pory"

# 228 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsOldWomanScald::
# 229 "data/maps/LavaridgeTown/scripts.pory"
	lockall
# 230 "data/maps/LavaridgeTown/scripts.pory"
	faceplayer
# 231 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_set FLAG_ITEM_LAVARIDGE_TOWN_TM_SCALD, LavaridgeTown_EventScript_HotSpringsClaims
# 232 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsGiveScald, MSGBOX_NPC
# 233 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_TM_SCALD, 1
# 234 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsExplainScald, MSGBOX_NPC
# 235 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_ITEM_LAVARIDGE_TOWN_TM_SCALD
# 236 "data/maps/LavaridgeTown/scripts.pory"
	releaseall
# 237 "data/maps/LavaridgeTown/scripts.pory"
	end
# 238 "data/maps/LavaridgeTown/scripts.pory"

# 239 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsClaims::
# 240 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsClaims, MSGBOX_NPC
# 241 "data/maps/LavaridgeTown/scripts.pory"
	releaseall
# 242 "data/maps/LavaridgeTown/scripts.pory"
	end
# 243 "data/maps/LavaridgeTown/scripts.pory"

# 244 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ExpertF::
# 245 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_OhYouLikeHotSprings, MSGBOX_NPC
# 246 "data/maps/LavaridgeTown/scripts.pory"
	end
# 247 "data/maps/LavaridgeTown/scripts.pory"

# 248 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_EggWoman::
# 249 "data/maps/LavaridgeTown/scripts.pory"
	lock
# 250 "data/maps/LavaridgeTown/scripts.pory"
	faceplayer
# 251 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_LAVARIDGE_EGG, LavaridgeTown_EventScript_ReceivedEgg
# 252 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HaveEggWillYouTakeIt, MSGBOX_YESNO
# 253 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LavaridgeTown_EventScript_DeclineEgg
# 254 "data/maps/LavaridgeTown/scripts.pory"
	getpartysize
# 255 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, LavaridgeTown_EventScript_NoRoomForEgg
# 256 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg, MSGBOX_DEFAULT
# 257 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_LAVARIDGE_EGG
# 258 "data/maps/LavaridgeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 259 "data/maps/LavaridgeTown/scripts.pory"
	message LavaridgeTown_Text_ReceivedTheEgg
# 260 "data/maps/LavaridgeTown/scripts.pory"
	waitfanfare
# 261 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_WYNAUT
# 262 "data/maps/LavaridgeTown/scripts.pory"
	release
# 263 "data/maps/LavaridgeTown/scripts.pory"
	end
# 264 "data/maps/LavaridgeTown/scripts.pory"

# 265 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ReceivedEgg::
# 266 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare, MSGBOX_DEFAULT
# 267 "data/maps/LavaridgeTown/scripts.pory"
	release
# 268 "data/maps/LavaridgeTown/scripts.pory"
	end
# 269 "data/maps/LavaridgeTown/scripts.pory"

# 270 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_NoRoomForEgg::
# 271 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_NoRoomForThisEgg, MSGBOX_DEFAULT
# 272 "data/maps/LavaridgeTown/scripts.pory"
	release
# 273 "data/maps/LavaridgeTown/scripts.pory"
	end
# 274 "data/maps/LavaridgeTown/scripts.pory"

# 275 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_DeclineEgg::
# 276 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_AsYouWishThen, MSGBOX_DEFAULT
# 277 "data/maps/LavaridgeTown/scripts.pory"
	release
# 278 "data/maps/LavaridgeTown/scripts.pory"
	end
# 279 "data/maps/LavaridgeTown/scripts.pory"

# 280 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_TownSign::
# 281 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_TownSign, MSGBOX_SIGN
# 282 "data/maps/LavaridgeTown/scripts.pory"
	end
# 283 "data/maps/LavaridgeTown/scripts.pory"

# 284 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_GymSign::
# 285 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_GymSign, MSGBOX_SIGN
# 286 "data/maps/LavaridgeTown/scripts.pory"
	end
# 287 "data/maps/LavaridgeTown/scripts.pory"

# 288 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HerbShopSign::
# 289 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HerbShopSign, MSGBOX_SIGN
# 290 "data/maps/LavaridgeTown/scripts.pory"
	end
# 291 "data/maps/LavaridgeTown/scripts.pory"

# 292 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_MayNiceBadgesTakeThis:
# 293 "data/maps/LavaridgeTown/scripts.pory"
	.string "May: {PLAYER}{KUN}! Long time no see!\p"
# 294 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh? While I visited the hot springs,\n"
# 295 "data/maps/LavaridgeTown/scripts.pory"
	.string "you got the Lavaridge Gym Badge.\p"
# 296 "data/maps/LavaridgeTown/scripts.pory"
	.string "You must have collected\n"
# 297 "data/maps/LavaridgeTown/scripts.pory"
	.string "good Pokémon…\l"
# 298 "data/maps/LavaridgeTown/scripts.pory"
	.string "No, I believe you raised some.\p"
# 299 "data/maps/LavaridgeTown/scripts.pory"
	.string "I guess it would be okay for you to\n"
# 300 "data/maps/LavaridgeTown/scripts.pory"
	.string "have this.$"
# 301 "data/maps/LavaridgeTown/scripts.pory"

# 302 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_MayExplainGoGogglesChallengeDad:
# 303 "data/maps/LavaridgeTown/scripts.pory"
	.string "May: With those Go-Goggles, you'll\n"
# 304 "data/maps/LavaridgeTown/scripts.pory"
	.string "have no trouble getting through the\l"
# 305 "data/maps/LavaridgeTown/scripts.pory"
	.string "desert near Route 111.\p"
# 306 "data/maps/LavaridgeTown/scripts.pory"
	.string "But, wow, {PLAYER}{KUN}…\n"
# 307 "data/maps/LavaridgeTown/scripts.pory"
	.string "Challenging Gyms…\p"
# 308 "data/maps/LavaridgeTown/scripts.pory"
	.string "You're trying hard because you don't\n"
# 309 "data/maps/LavaridgeTown/scripts.pory"
	.string "want to lose to me, I bet!\p"
# 310 "data/maps/LavaridgeTown/scripts.pory"
	.string "See you again!$"
# 311 "data/maps/LavaridgeTown/scripts.pory"

# 312 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BrendanNiceBadgesTakeThis:
# 313 "data/maps/LavaridgeTown/scripts.pory"
	.string "Brendan: {PLAYER}, hey, it's been a while.\n"
# 314 "data/maps/LavaridgeTown/scripts.pory"
	.string "How's it going?\p"
# 315 "data/maps/LavaridgeTown/scripts.pory"
	.string "Hmm…\n"
# 316 "data/maps/LavaridgeTown/scripts.pory"
	.string "That's a decent collection of Badges.\p"
# 317 "data/maps/LavaridgeTown/scripts.pory"
	.string "All right, then.\n"
# 318 "data/maps/LavaridgeTown/scripts.pory"
	.string "You may as well have this.$"
# 319 "data/maps/LavaridgeTown/scripts.pory"

# 320 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad:
# 321 "data/maps/LavaridgeTown/scripts.pory"
	.string "Brendan: Keep those with you if you're\n"
# 322 "data/maps/LavaridgeTown/scripts.pory"
	.string "planning on going into that desert near\l"
# 323 "data/maps/LavaridgeTown/scripts.pory"
	.string "Route 111.\p"
# 324 "data/maps/LavaridgeTown/scripts.pory"
	.string "There should be some Pokémon that\n"
# 325 "data/maps/LavaridgeTown/scripts.pory"
	.string "are exclusively desert-dwellers.\l"
# 326 "data/maps/LavaridgeTown/scripts.pory"
	.string "You might look around for those.\p"
# 327 "data/maps/LavaridgeTown/scripts.pory"
	.string "As for me…\n"
# 328 "data/maps/LavaridgeTown/scripts.pory"
	.string "I'm considering challenging Norman,\l"
# 329 "data/maps/LavaridgeTown/scripts.pory"
	.string "the Gym Leader of Petalburg.\p"
# 330 "data/maps/LavaridgeTown/scripts.pory"
	.string "See you around!$"
# 331 "data/maps/LavaridgeTown/scripts.pory"

# 332 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HaveEggWillYouTakeIt:
# 333 "data/maps/LavaridgeTown/scripts.pory"
	.string "I have here an Egg.\p"
# 334 "data/maps/LavaridgeTown/scripts.pory"
	.string "I'd hoped to hatch it by covering it in\n"
# 335 "data/maps/LavaridgeTown/scripts.pory"
	.string "hot sand by the hot springs.\l"
# 336 "data/maps/LavaridgeTown/scripts.pory"
	.string "But that doesn't seem to be enough…\p"
# 337 "data/maps/LavaridgeTown/scripts.pory"
	.string "I've heard it would be best if it were\n"
# 338 "data/maps/LavaridgeTown/scripts.pory"
	.string "kept together with Pokémon and\l"
# 339 "data/maps/LavaridgeTown/scripts.pory"
	.string "carried about.\p"
# 340 "data/maps/LavaridgeTown/scripts.pory"
	.string "You are a Trainer, yes?\n"
# 341 "data/maps/LavaridgeTown/scripts.pory"
	.string "And your Pokémon radiate vitality.\p"
# 342 "data/maps/LavaridgeTown/scripts.pory"
	.string "So, what say you?\n"
# 343 "data/maps/LavaridgeTown/scripts.pory"
	.string "Will you take this Egg to hatch?$"
# 344 "data/maps/LavaridgeTown/scripts.pory"

# 345 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg:
# 346 "data/maps/LavaridgeTown/scripts.pory"
	.string "Good! I hope you'll walk plenty with\n"
# 347 "data/maps/LavaridgeTown/scripts.pory"
	.string "this here Egg!$"
# 348 "data/maps/LavaridgeTown/scripts.pory"

# 349 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_ReceivedTheEgg:
# 350 "data/maps/LavaridgeTown/scripts.pory"
	.string "{PLAYER} received the Egg.$"
# 351 "data/maps/LavaridgeTown/scripts.pory"

# 352 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_NoRoomForThisEgg:
# 353 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh? You've too many Pokémon.\n"
# 354 "data/maps/LavaridgeTown/scripts.pory"
	.string "There's no room for this Egg…$"
# 355 "data/maps/LavaridgeTown/scripts.pory"

# 356 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_AsYouWishThen:
# 357 "data/maps/LavaridgeTown/scripts.pory"
	.string "As you wish, then…\p"
# 358 "data/maps/LavaridgeTown/scripts.pory"
	.string "If you have a change of heart about\n"
# 359 "data/maps/LavaridgeTown/scripts.pory"
	.string "hatching this Egg, I will be here.$"
# 360 "data/maps/LavaridgeTown/scripts.pory"

# 361 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare:
# 362 "data/maps/LavaridgeTown/scripts.pory"
	.string "Every so often, an Egg will be found at\n"
# 363 "data/maps/LavaridgeTown/scripts.pory"
	.string "the Pokémon Day Care.\p"
# 364 "data/maps/LavaridgeTown/scripts.pory"
	.string "Or at least that's how the rumor goes.$"
# 365 "data/maps/LavaridgeTown/scripts.pory"

# 366 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HotSpringsNeverRunDry:
# 367 "data/maps/LavaridgeTown/scripts.pory"
	.string "We draw as much hot water as we need,\n"
# 368 "data/maps/LavaridgeTown/scripts.pory"
	.string "and yet the hot springs never run dry.\p"
# 369 "data/maps/LavaridgeTown/scripts.pory"
	.string "Isn't it magical?\p"
# 370 "data/maps/LavaridgeTown/scripts.pory"
	.string "These hot springs appear near active\n"
# 371 "data/maps/LavaridgeTown/scripts.pory"
	.string "volcanoes. Veins of water under the\l"
# 372 "data/maps/LavaridgeTown/scripts.pory"
	.string "ground are heated by magma to well up\l"
# 373 "data/maps/LavaridgeTown/scripts.pory"
	.string "as hot springs.$"
# 374 "data/maps/LavaridgeTown/scripts.pory"

# 375 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_PokemonNippedBackside:
# 376 "data/maps/LavaridgeTown/scripts.pory"
	.string "Being buried in this hot sand is…\n"
# 377 "data/maps/LavaridgeTown/scripts.pory"
	.string "Sigh…\p"
# 378 "data/maps/LavaridgeTown/scripts.pory"
	.string "So warm and heavenly…\p"
# 379 "data/maps/LavaridgeTown/scripts.pory"
	.string "Eh? Gyaah! Ouch!\p"
# 380 "data/maps/LavaridgeTown/scripts.pory"
	.string "A Pokémon nipped my backside!$"
# 381 "data/maps/LavaridgeTown/scripts.pory"

# 382 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_OhYouLikeHotSprings:
# 383 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh, you like hot springs, do you?\p"
# 384 "data/maps/LavaridgeTown/scripts.pory"
	.string "That's surprising for one as young\n"
# 385 "data/maps/LavaridgeTown/scripts.pory"
	.string "as you.$"
# 386 "data/maps/LavaridgeTown/scripts.pory"

# 387 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BatheInHotSpringsEveryDay:
# 388 "data/maps/LavaridgeTown/scripts.pory"
	.string "I bathe in the hot springs every day.\p"
# 389 "data/maps/LavaridgeTown/scripts.pory"
	.string "I want to become a strong gym Leader\n"
# 390 "data/maps/LavaridgeTown/scripts.pory"
	.string "like Qanak.$"
# 391 "data/maps/LavaridgeTown/scripts.pory"

# 392 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_IfPokemonInHotSprings:
# 393 "data/maps/LavaridgeTown/scripts.pory"
	.string "If people put Pokémon in hot springs,\n"
# 394 "data/maps/LavaridgeTown/scripts.pory"
	.string "it might be seriously strange.\p"
# 395 "data/maps/LavaridgeTown/scripts.pory"
	.string "Why, it might be an electric bath, or\n"
# 396 "data/maps/LavaridgeTown/scripts.pory"
	.string "a bubble bath, or even a lava bath…$"
# 397 "data/maps/LavaridgeTown/scripts.pory"

# 398 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HotSpringsClaims:
# 399 "data/maps/LavaridgeTown/scripts.pory"
	.string "They're claiming that these hot springs\n"
# 400 "data/maps/LavaridgeTown/scripts.pory"
	.string "are good for calming nervous tension,\l"
# 401 "data/maps/LavaridgeTown/scripts.pory"
	.string "relieving aching muscles, solving\l"
# 402 "data/maps/LavaridgeTown/scripts.pory"
	.string "romantic problems, and attracting\l"
# 403 "data/maps/LavaridgeTown/scripts.pory"
	.string "money…$"
# 404 "data/maps/LavaridgeTown/scripts.pory"

# 405 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HotSpringsGiveScald:
# 406 "data/maps/LavaridgeTown/scripts.pory"
	.string "They're claiming that these hot springs\n"
# 407 "data/maps/LavaridgeTown/scripts.pory"
	.string "are good for calming nervous tension,\l"
# 408 "data/maps/LavaridgeTown/scripts.pory"
	.string "relieving aching muscles, solving\l"
# 409 "data/maps/LavaridgeTown/scripts.pory"
	.string "romantic problems, and attracting\l"
# 410 "data/maps/LavaridgeTown/scripts.pory"
	.string "money…\p"
# 411 "data/maps/LavaridgeTown/scripts.pory"
	.string "Do you have any romantic problems?\p"
# 412 "data/maps/LavaridgeTown/scripts.pory"
	.string "… … … …\p"
# 413 "data/maps/LavaridgeTown/scripts.pory"
	.string "Ha ha, I'm only joking!\n"
# 414 "data/maps/LavaridgeTown/scripts.pory"
	.string "Here, have this gift from me.$"
# 415 "data/maps/LavaridgeTown/scripts.pory"

# 416 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HotSpringsExplainScald:
# 417 "data/maps/LavaridgeTown/scripts.pory"
	.string "Like the hot springs, Scald, is burning\n"
# 418 "data/maps/LavaridgeTown/scripts.pory"
	.string "hot water.\p"
# 419 "data/maps/LavaridgeTown/scripts.pory"
	.string "Be careful with it, our you'll burn\n"
# 420 "data/maps/LavaridgeTown/scripts.pory"
	.string "yourself, ha ha.$"
# 421 "data/maps/LavaridgeTown/scripts.pory"

# 422 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_TownSign:
# 423 "data/maps/LavaridgeTown/scripts.pory"
	.string "Lavaridge Town\p"
# 424 "data/maps/LavaridgeTown/scripts.pory"
	.string "“Pokémon Center Hot Springs\n"
# 425 "data/maps/LavaridgeTown/scripts.pory"
	.string "An excellent place for relaxing!”$"
# 426 "data/maps/LavaridgeTown/scripts.pory"

# 427 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_GymSign:
# 428 "data/maps/LavaridgeTown/scripts.pory"
	.string "Lavaridge Town Pokémon Gym\n"
# 429 "data/maps/LavaridgeTown/scripts.pory"
	.string "Leader: Qanak\l"
# 430 "data/maps/LavaridgeTown/scripts.pory"
	.string "“Being normal is overrated!”$"
# 431 "data/maps/LavaridgeTown/scripts.pory"

# 432 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HerbShopSign:
# 433 "data/maps/LavaridgeTown/scripts.pory"
	.string "Pokémon Herb Shop\n"
# 434 "data/maps/LavaridgeTown/scripts.pory"
	.string "“Bitter taste--better cure!”$"
