# 1 "data/maps/RustboroCity/scripts.pory"

# 2 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_LITTLE_BOY, 7
# 3 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_LITTLE_GIRL, 8
# 4 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 9
# 5 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_GRUNT, 10
# 6 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_RIVAL, 14
# 7 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_SCIENTIST, 15
# 8 "data/maps/RustboroCity/scripts.pory"

# 9 "data/maps/RustboroCity/scripts.pory"
RustboroCity_MapScripts::
# 10 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_OnTransition
# 11 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_OnFrame
# 12 "data/maps/RustboroCity/scripts.pory"
	.byte 0
# 13 "data/maps/RustboroCity/scripts.pory"

# 14 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnTransition:
# 15 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 16 "data/maps/RustboroCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 17 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_HideMapNamePopup
# 18 "data/maps/RustboroCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 19 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_PositionScientistForExit
# 20 "data/maps/RustboroCity/scripts.pory"
	end
# 21 "data/maps/RustboroCity/scripts.pory"

# 22 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistForExit::
# 23 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_TEMP_0, 11, RustboroCity_EventScript_PositionScientistLeftExit
# 24 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 12, 15
# 25 "data/maps/RustboroCity/scripts.pory"
	end
# 26 "data/maps/RustboroCity/scripts.pory"

# 27 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistLeftExit::
# 28 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 11, 15
# 29 "data/maps/RustboroCity/scripts.pory"
	end
# 30 "data/maps/RustboroCity/scripts.pory"

# 31 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HideMapNamePopup::
# 32 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 33 "data/maps/RustboroCity/scripts.pory"
	return
# 34 "data/maps/RustboroCity/scripts.pory"

# 35 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnFrame:
# 36 "data/maps/RustboroCity/scripts.pory"
	map_script_2 VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_ScientistAddMatchCall
# 37 "data/maps/RustboroCity/scripts.pory"
	.2byte 0
# 38 "data/maps/RustboroCity/scripts.pory"

# 39 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ScientistAddMatchCall::
# 40 "data/maps/RustboroCity/scripts.pory"
	lockall
# 41 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 1
# 42 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_PlayerWalkDown
# 43 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 44 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 45 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 46 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_SCIENTIST
# 47 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistApproachPlayer
# 48 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 49 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 50 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_ExclamationMark
# 51 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 52 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_Delay48
# 53 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 54 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 55 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 56 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistWalkInPlaceDown
# 57 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 58 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevelopedNewPokenavFeature, MSGBOX_DEFAULT
# 59 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 60 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceFasterLeft
# 61 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 62 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 63 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 64 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 65 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 66 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 67 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 68 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 69 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 70 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceFasterDown
# 71 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 72 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_AddedMatchCallPleaseCallMrStone, MSGBOX_DEFAULT
# 73 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 74 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 75 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 76 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RECEIVED_STAT_EDITOR
# 77 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 78 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_IdBetterGetBackToWork, MSGBOX_DEFAULT
# 79 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 80 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistLeave
# 81 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 82 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 83 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_SCIENTIST
# 84 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 7
# 85 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
# 86 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 87 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 88 "data/maps/RustboroCity/scripts.pory"
	end
# 89 "data/maps/RustboroCity/scripts.pory"

# 90 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkInPlaceDown:
# 91 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_down
# 92 "data/maps/RustboroCity/scripts.pory"
	step_end
# 93 "data/maps/RustboroCity/scripts.pory"

# 94 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_PlayerWalkDown:
# 95 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 96 "data/maps/RustboroCity/scripts.pory"
	step_end
# 97 "data/maps/RustboroCity/scripts.pory"

# 98 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistApproachPlayer:
# 99 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 100 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 101 "data/maps/RustboroCity/scripts.pory"
	step_end
# 102 "data/maps/RustboroCity/scripts.pory"

# 103 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 104 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkAroundPlayer:
# 105 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 106 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 107 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 108 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 109 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 110 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 111 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 112 "data/maps/RustboroCity/scripts.pory"
	step_end
# 113 "data/maps/RustboroCity/scripts.pory"

# 114 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistLeave:
# 115 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 116 "data/maps/RustboroCity/scripts.pory"
	step_end
# 117 "data/maps/RustboroCity/scripts.pory"

# 118 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatMan::
# 119 "data/maps/RustboroCity/scripts.pory"
	lock
# 120 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 121 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_EventScript_FatManSawGrunt
# 122 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WeShortenItToDevon, MSGBOX_DEFAULT
# 123 "data/maps/RustboroCity/scripts.pory"
	release
# 124 "data/maps/RustboroCity/scripts.pory"
	end
# 125 "data/maps/RustboroCity/scripts.pory"

# 126 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatManSawGrunt::
# 127 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner, MSGBOX_DEFAULT
# 128 "data/maps/RustboroCity/scripts.pory"
	release
# 129 "data/maps/RustboroCity/scripts.pory"
	end
# 130 "data/maps/RustboroCity/scripts.pory"

# 131 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee2::
# 132 "data/maps/RustboroCity/scripts.pory"
	lock
# 133 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 134 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureNewAroundHere, MSGBOX_DEFAULT
# 135 "data/maps/RustboroCity/scripts.pory"
	release
# 136 "data/maps/RustboroCity/scripts.pory"
	end
# 137 "data/maps/RustboroCity/scripts.pory"

# 138 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Woman::
# 139 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
# 140 "data/maps/RustboroCity/scripts.pory"
	end
# 141 "data/maps/RustboroCity/scripts.pory"

# 142 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1::
# 143 "data/maps/RustboroCity/scripts.pory"
	lock
# 144 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 145 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_EventScript_Man1HaveBadge
# 146 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HaveYouChallengedGym, MSGBOX_DEFAULT
# 147 "data/maps/RustboroCity/scripts.pory"
	release
# 148 "data/maps/RustboroCity/scripts.pory"
	end
# 149 "data/maps/RustboroCity/scripts.pory"

# 150 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1HaveBadge::
# 151 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge, MSGBOX_DEFAULT
# 152 "data/maps/RustboroCity/scripts.pory"
	release
# 153 "data/maps/RustboroCity/scripts.pory"
	end
# 154 "data/maps/RustboroCity/scripts.pory"

# 155 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2::
# 156 "data/maps/RustboroCity/scripts.pory"
	lock
# 157 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 158 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2BrineyLeftTunnel
# 159 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel, MSGBOX_DEFAULT
# 160 "data/maps/RustboroCity/scripts.pory"
	release
# 161 "data/maps/RustboroCity/scripts.pory"
	end
# 162 "data/maps/RustboroCity/scripts.pory"

# 163 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2BrineyLeftTunnel::
# 164 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyLovesPeeko, MSGBOX_DEFAULT
# 165 "data/maps/RustboroCity/scripts.pory"
	release
# 166 "data/maps/RustboroCity/scripts.pory"
	end
# 167 "data/maps/RustboroCity/scripts.pory"

# 168 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Twin::
# 169 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
# 170 "data/maps/RustboroCity/scripts.pory"
	end
# 171 "data/maps/RustboroCity/scripts.pory"

# 172 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_NinjaBoy::
# 173 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
# 174 "data/maps/RustboroCity/scripts.pory"
	end
# 175 "data/maps/RustboroCity/scripts.pory"

# 176 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TunnelSign::
# 177 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
# 178 "data/maps/RustboroCity/scripts.pory"
	end
# 179 "data/maps/RustboroCity/scripts.pory"

# 180 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpSign::
# 181 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
# 182 "data/maps/RustboroCity/scripts.pory"
	end
# 183 "data/maps/RustboroCity/scripts.pory"

# 184 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_GymSign::
# 185 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
# 186 "data/maps/RustboroCity/scripts.pory"
	end
# 187 "data/maps/RustboroCity/scripts.pory"

# 188 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 189 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpBranchOfficeSign::
# 190 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpBranchOfficeSign, MSGBOX_SIGN
# 191 "data/maps/RustboroCity/scripts.pory"
	end
# 192 "data/maps/RustboroCity/scripts.pory"

# 193 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CitySign::
# 194 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
# 195 "data/maps/RustboroCity/scripts.pory"
	end
# 196 "data/maps/RustboroCity/scripts.pory"

# 197 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TrainersSchoolSign::
# 198 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
# 199 "data/maps/RustboroCity/scripts.pory"
	end
# 200 "data/maps/RustboroCity/scripts.pory"

# 201 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CuttersHouseSign::
# 202 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
# 203 "data/maps/RustboroCity/scripts.pory"
	end
# 204 "data/maps/RustboroCity/scripts.pory"

# 205 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleBoy::
# 206 "data/maps/RustboroCity/scripts.pory"
	lock
# 207 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 208 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp, MSGBOX_DEFAULT
# 209 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_BOY, Common_Movement_FaceOriginalDirection
# 210 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 211 "data/maps/RustboroCity/scripts.pory"
	release
# 212 "data/maps/RustboroCity/scripts.pory"
	end
# 213 "data/maps/RustboroCity/scripts.pory"

# 214 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleGirl::
# 215 "data/maps/RustboroCity/scripts.pory"
	lock
# 216 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 217 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonChangeShape, MSGBOX_DEFAULT
# 218 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
# 219 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 220 "data/maps/RustboroCity/scripts.pory"
	release
# 221 "data/maps/RustboroCity/scripts.pory"
	end
# 222 "data/maps/RustboroCity/scripts.pory"

# 223 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man2::
# 224 "data/maps/RustboroCity/scripts.pory"
	lock
# 225 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 226 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TradePokemonGrowFast, MSGBOX_DEFAULT
# 227 "data/maps/RustboroCity/scripts.pory"
	release
# 228 "data/maps/RustboroCity/scripts.pory"
	end
# 229 "data/maps/RustboroCity/scripts.pory"

# 230 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger0::
# 231 "data/maps/RustboroCity/scripts.pory"
	lockall
# 232 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 233 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 234 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 0
# 235 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 236 "data/maps/RustboroCity/scripts.pory"
	end
# 237 "data/maps/RustboroCity/scripts.pory"

# 238 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger1::
# 239 "data/maps/RustboroCity/scripts.pory"
	lockall
# 240 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 241 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 242 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 1
# 243 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 244 "data/maps/RustboroCity/scripts.pory"
	end
# 245 "data/maps/RustboroCity/scripts.pory"

# 246 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger2::
# 247 "data/maps/RustboroCity/scripts.pory"
	lockall
# 248 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 249 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 250 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 2
# 251 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 252 "data/maps/RustboroCity/scripts.pory"
	end
# 253 "data/maps/RustboroCity/scripts.pory"

# 254 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger3::
# 255 "data/maps/RustboroCity/scripts.pory"
	lockall
# 256 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 257 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 258 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 3
# 259 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 260 "data/maps/RustboroCity/scripts.pory"
	end
# 261 "data/maps/RustboroCity/scripts.pory"

# 262 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger4::
# 263 "data/maps/RustboroCity/scripts.pory"
	lockall
# 264 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 265 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 266 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 4
# 267 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 268 "data/maps/RustboroCity/scripts.pory"
	end
# 269 "data/maps/RustboroCity/scripts.pory"

# 270 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene::
# 271 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_OutOfTheWay, MSGBOX_DEFAULT
# 272 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 273 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 274 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_GRUNT
# 275 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_DEVON_EMPLOYEE
# 276 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_GRUNT, RustboroCity_Movement_GruntEscape
# 277 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 278 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_GRUNT
# 279 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt1
# 280 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 281 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WaitDontTakeMyGoods, MSGBOX_DEFAULT
# 282 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 283 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt2
# 284 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 285 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 286 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 287 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 30, 10
# 288 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 289 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEVON_GOODS_STOLEN
# 290 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 2
# 291 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
# 292 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE116_STATE, 1
# 293 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 294 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 295 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 296 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 297 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 298 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 299 "data/maps/RustboroCity/scripts.pory"
	end
# 300 "data/maps/RustboroCity/scripts.pory"

# 301 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 302 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ShadyCharacterTookOff::
# 303 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 304 "data/maps/RustboroCity/scripts.pory"
	return
# 305 "data/maps/RustboroCity/scripts.pory"

# 306 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 307 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_YouGotItThankYou::
# 308 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 309 "data/maps/RustboroCity/scripts.pory"
	return
# 310 "data/maps/RustboroCity/scripts.pory"

# 311 "data/maps/RustboroCity/scripts.pory"
@ Unknown, unused employee movements. Based on the differences in movement theyre for approaching an object (probably the player) in different positions
# 312 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachUp::
# 313 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachUp
# 314 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 315 "data/maps/RustboroCity/scripts.pory"
	return
# 316 "data/maps/RustboroCity/scripts.pory"

# 317 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 318 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachLeft::
# 319 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachLeft
# 320 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 321 "data/maps/RustboroCity/scripts.pory"
	return
# 322 "data/maps/RustboroCity/scripts.pory"

# 323 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 324 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachRight::
# 325 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachRight
# 326 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 327 "data/maps/RustboroCity/scripts.pory"
	return
# 328 "data/maps/RustboroCity/scripts.pory"

# 329 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 330 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachDown::
# 331 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachDown
# 332 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 333 "data/maps/RustboroCity/scripts.pory"
	return
# 334 "data/maps/RustboroCity/scripts.pory"

# 335 "data/maps/RustboroCity/scripts.pory"
@ Unused, similar movement to the above scripts
# 336 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerFar::
# 337 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerFar
# 338 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 339 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 340 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 341 "data/maps/RustboroCity/scripts.pory"
	return
# 342 "data/maps/RustboroCity/scripts.pory"

# 343 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 344 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscapeExtended:
# 345 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 346 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 347 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 348 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 349 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 350 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 351 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 352 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 353 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 354 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 355 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 356 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 357 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 358 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 359 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 360 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 361 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 362 "data/maps/RustboroCity/scripts.pory"
	step_end
# 363 "data/maps/RustboroCity/scripts.pory"

# 364 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscape:
# 365 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 366 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 367 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 368 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 369 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 370 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 371 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 372 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 373 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 374 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 375 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 376 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 377 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 378 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 379 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 380 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 381 "data/maps/RustboroCity/scripts.pory"
	step_end
# 382 "data/maps/RustboroCity/scripts.pory"

# 383 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt1:
# 384 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 385 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 386 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 387 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 388 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 389 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 390 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 391 "data/maps/RustboroCity/scripts.pory"
	step_end
# 392 "data/maps/RustboroCity/scripts.pory"

# 393 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt2:
# 394 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 395 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 396 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 397 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 398 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 399 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 400 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 401 "data/maps/RustboroCity/scripts.pory"
	step_end
# 402 "data/maps/RustboroCity/scripts.pory"

# 403 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 404 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachUp:
# 405 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 406 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 407 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 408 "data/maps/RustboroCity/scripts.pory"
	step_end
# 409 "data/maps/RustboroCity/scripts.pory"

# 410 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 411 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachLeft:
# 412 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 413 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 414 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 415 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 416 "data/maps/RustboroCity/scripts.pory"
	step_end
# 417 "data/maps/RustboroCity/scripts.pory"

# 418 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 419 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachRight:
# 420 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 421 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 422 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 423 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 424 "data/maps/RustboroCity/scripts.pory"
	step_end
# 425 "data/maps/RustboroCity/scripts.pory"

# 426 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 427 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachDown:
# 428 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 429 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 430 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 431 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 432 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 433 "data/maps/RustboroCity/scripts.pory"
	step_end
# 434 "data/maps/RustboroCity/scripts.pory"

# 435 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 436 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerFar:
# 437 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 438 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 439 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 440 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 441 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 442 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 443 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_down
# 444 "data/maps/RustboroCity/scripts.pory"
	step_end
# 445 "data/maps/RustboroCity/scripts.pory"

# 446 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee1::
# 447 "data/maps/RustboroCity/scripts.pory"
	lock
# 448 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 449 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_EventScript_ReturnGoodsSpokeToEmployee
# 450 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 451 "data/maps/RustboroCity/scripts.pory"
	release
# 452 "data/maps/RustboroCity/scripts.pory"
	end
# 453 "data/maps/RustboroCity/scripts.pory"

# 454 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsSpokeToEmployee::
# 455 "data/maps/RustboroCity/scripts.pory"
	waitse
# 456 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 4
# 457 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 458 "data/maps/RustboroCity/scripts.pory"
	end
# 459 "data/maps/RustboroCity/scripts.pory"

# 460 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger0::
# 461 "data/maps/RustboroCity/scripts.pory"
	lockall
# 462 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 463 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 464 "data/maps/RustboroCity/scripts.pory"
	end
# 465 "data/maps/RustboroCity/scripts.pory"

# 466 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger1::
# 467 "data/maps/RustboroCity/scripts.pory"
	lockall
# 468 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 469 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 470 "data/maps/RustboroCity/scripts.pory"
	end
# 471 "data/maps/RustboroCity/scripts.pory"

# 472 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger2::
# 473 "data/maps/RustboroCity/scripts.pory"
	lockall
# 474 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 475 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 476 "data/maps/RustboroCity/scripts.pory"
	end
# 477 "data/maps/RustboroCity/scripts.pory"

# 478 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger3::
# 479 "data/maps/RustboroCity/scripts.pory"
	lockall
# 480 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 481 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 482 "data/maps/RustboroCity/scripts.pory"
	end
# 483 "data/maps/RustboroCity/scripts.pory"

# 484 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods::
# 485 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp1
# 486 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft1
# 487 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown1
# 488 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown1
# 489 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
# 490 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 3
# 491 "data/maps/RustboroCity/scripts.pory"
	copyobjectxytoperm LOCALID_DEVON_EMPLOYEE
# 492 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HelpMeIWasRobbed, MSGBOX_DEFAULT
# 493 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 494 "data/maps/RustboroCity/scripts.pory"
	end
# 495 "data/maps/RustboroCity/scripts.pory"

# 496 "data/maps/RustboroCity/scripts.pory"
@ The below movement scripts are either partially or fully duplicated by the movement scripts when the player returns the goods
# 497 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp1::
# 498 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 499 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 500 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 501 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 502 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 503 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 504 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 505 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 506 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 507 "data/maps/RustboroCity/scripts.pory"
	return
# 508 "data/maps/RustboroCity/scripts.pory"

# 509 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft1::
# 510 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 511 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 512 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 513 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 514 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 515 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 516 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 517 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 518 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 519 "data/maps/RustboroCity/scripts.pory"
	return
# 520 "data/maps/RustboroCity/scripts.pory"

# 521 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown1::
# 522 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 523 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 524 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 525 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 526 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 527 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 528 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 529 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 530 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 531 "data/maps/RustboroCity/scripts.pory"
	return
# 532 "data/maps/RustboroCity/scripts.pory"

# 533 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown1::
# 534 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 535 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 536 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 537 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 538 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 539 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 540 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 541 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 542 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 543 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 544 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 545 "data/maps/RustboroCity/scripts.pory"
	return
# 546 "data/maps/RustboroCity/scripts.pory"

# 547 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerDown:
# 548 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 549 "data/maps/RustboroCity/scripts.pory"
	step_end
# 550 "data/maps/RustboroCity/scripts.pory"

# 551 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger0::
# 552 "data/maps/RustboroCity/scripts.pory"
	lockall
# 553 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 554 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 555 "data/maps/RustboroCity/scripts.pory"
	end
# 556 "data/maps/RustboroCity/scripts.pory"

# 557 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger1::
# 558 "data/maps/RustboroCity/scripts.pory"
	lockall
# 559 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 560 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 561 "data/maps/RustboroCity/scripts.pory"
	end
# 562 "data/maps/RustboroCity/scripts.pory"

# 563 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger2::
# 564 "data/maps/RustboroCity/scripts.pory"
	lockall
# 565 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 566 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 567 "data/maps/RustboroCity/scripts.pory"
	end
# 568 "data/maps/RustboroCity/scripts.pory"

# 569 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger3::
# 570 "data/maps/RustboroCity/scripts.pory"
	lockall
# 571 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 572 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 573 "data/maps/RustboroCity/scripts.pory"
	end
# 574 "data/maps/RustboroCity/scripts.pory"

# 575 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods::
# 576 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp2
# 577 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft2
# 578 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown2
# 579 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown2
# 580 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, RustboroCity_EventScript_EmployeeFacePlayerRight
# 581 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 582 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_TM_CHARGE_BEAM
# 583 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, RustboroCity_EventScript_BagFull
# 584 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 585 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 586 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 587 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 588 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 5
# 589 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 590 "data/maps/RustboroCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_3F, 2, 2
# 591 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 592 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 593 "data/maps/RustboroCity/scripts.pory"
	end
# 594 "data/maps/RustboroCity/scripts.pory"

# 595 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BagFull::
# 596 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 597 "data/maps/RustboroCity/scripts.pory"
	return
# 598 "data/maps/RustboroCity/scripts.pory"

# 599 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp2::
# 600 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 601 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 602 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 603 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 604 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 605 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 606 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 607 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 608 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 609 "data/maps/RustboroCity/scripts.pory"
	return
# 610 "data/maps/RustboroCity/scripts.pory"

# 611 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft2::
# 612 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterRight
# 613 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 614 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 615 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 616 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 617 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 618 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 619 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 620 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 621 "data/maps/RustboroCity/scripts.pory"
	return
# 622 "data/maps/RustboroCity/scripts.pory"

# 623 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown2::
# 624 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 625 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 626 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 627 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 628 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 629 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 630 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 631 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 632 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 633 "data/maps/RustboroCity/scripts.pory"
	return
# 634 "data/maps/RustboroCity/scripts.pory"

# 635 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown2::
# 636 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 637 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 638 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 639 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 640 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 641 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 642 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 643 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 644 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 645 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 646 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 647 "data/maps/RustboroCity/scripts.pory"
	return
# 648 "data/maps/RustboroCity/scripts.pory"

# 649 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerRight::
# 650 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 651 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 652 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 653 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 654 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 655 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 656 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 657 "data/maps/RustboroCity/scripts.pory"
	return
# 658 "data/maps/RustboroCity/scripts.pory"

# 659 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Rival::
# 660 "data/maps/RustboroCity/scripts.pory"
	lockall
# 661 "data/maps/RustboroCity/scripts.pory"
	call_if_unset FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_PlayRivalMusic
# 662 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 663 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 664 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 665 "data/maps/RustboroCity/scripts.pory"

# 666 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayRivalMusic::
# 667 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 668 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_PlayMayMusic
# 669 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_PlayBrendanMusic
# 670 "data/maps/RustboroCity/scripts.pory"
	return
# 671 "data/maps/RustboroCity/scripts.pory"

# 672 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayMayMusic::
# 673 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 674 "data/maps/RustboroCity/scripts.pory"
	return
# 675 "data/maps/RustboroCity/scripts.pory"

# 676 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayBrendanMusic::
# 677 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 678 "data/maps/RustboroCity/scripts.pory"
	return
# 679 "data/maps/RustboroCity/scripts.pory"

# 680 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger0::
# 681 "data/maps/RustboroCity/scripts.pory"
	lockall
# 682 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 683 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 684 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 685 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 686 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 687 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 688 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 689 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 690 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer0
# 691 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 692 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 693 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 694 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 695 "data/maps/RustboroCity/scripts.pory"

# 696 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger1::
# 697 "data/maps/RustboroCity/scripts.pory"
	lockall
# 698 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 699 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 700 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 701 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 702 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 703 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 704 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 705 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 706 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer1
# 707 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 708 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 709 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 710 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 711 "data/maps/RustboroCity/scripts.pory"

# 712 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger2::
# 713 "data/maps/RustboroCity/scripts.pory"
	lockall
# 714 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 715 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 716 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 717 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 718 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 719 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 720 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 721 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 722 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer2
# 723 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 724 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 725 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 726 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 727 "data/maps/RustboroCity/scripts.pory"

# 728 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger3::
# 729 "data/maps/RustboroCity/scripts.pory"
	lockall
# 730 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 731 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 732 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 733 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 734 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 735 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 736 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 737 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 738 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer3
# 739 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 740 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 741 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 742 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 743 "data/maps/RustboroCity/scripts.pory"

# 744 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger4::
# 745 "data/maps/RustboroCity/scripts.pory"
	lockall
# 746 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 747 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 748 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 749 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 750 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 751 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 752 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 753 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 754 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer4
# 755 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 756 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 757 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 758 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 759 "data/maps/RustboroCity/scripts.pory"

# 760 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger5::
# 761 "data/maps/RustboroCity/scripts.pory"
	lockall
# 762 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 763 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 764 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 765 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 766 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 767 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 768 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 769 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 770 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer5
# 771 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 772 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 773 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 774 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 775 "data/maps/RustboroCity/scripts.pory"

# 776 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger6::
# 777 "data/maps/RustboroCity/scripts.pory"
	lockall
# 778 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 779 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 780 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 781 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 782 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 783 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 784 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 785 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 786 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer6
# 787 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 788 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 789 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 790 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 791 "data/maps/RustboroCity/scripts.pory"

# 792 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger7::
# 793 "data/maps/RustboroCity/scripts.pory"
	lockall
# 794 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 795 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 796 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 797 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 798 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 799 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 800 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 801 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 802 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer7
# 803 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 804 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 805 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 806 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 807 "data/maps/RustboroCity/scripts.pory"

# 808 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalEncounter::
# 809 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 810 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_MayEncounter
# 811 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_BrendanEncounter
# 812 "data/maps/RustboroCity/scripts.pory"
	end
# 813 "data/maps/RustboroCity/scripts.pory"

# 814 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayEncounter::
# 815 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_MayGiveFly
# 816 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 817 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayHiLetsRegister, MSGBOX_DEFAULT
# 818 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 819 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 820 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 821 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredMay, MSGBOX_DEFAULT
# 822 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 823 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 824 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 825 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 826 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 827 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 828 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 0
# 829 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayPassedBrineyWantToBattle, MSGBOX_DEFAULT
# 830 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleMay
# 831 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 832 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 833 "data/maps/RustboroCity/scripts.pory"
	end
# 834 "data/maps/RustboroCity/scripts.pory"

# 835 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMay::
# 836 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayImNotGoingToLose, MSGBOX_DEFAULT
# 837 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 838 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleMayTreecko
# 839 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleMayTorchic
# 840 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleMayMudkip
# 841 "data/maps/RustboroCity/scripts.pory"
	end
# 842 "data/maps/RustboroCity/scripts.pory"

# 843 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayGiveFly::
# 844 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_FLY, RustboroCity_EventScript_MayBrineyHint
# 845 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayGiveFly, MSGBOX_DEFAULT
# 846 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_HM_FLY, 1
# 847 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayMrBrineyHint, MSGBOX_DEFAULT
# 848 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 849 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLY
# 850 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 851 "data/maps/RustboroCity/scripts.pory"
	end
# 852 "data/maps/RustboroCity/scripts.pory"

# 853 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayBrineyHint::
# 854 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayMrBrineyHint, MSGBOX_DEFAULT
# 855 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 856 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 857 "data/maps/RustboroCity/scripts.pory"
	end
# 858 "data/maps/RustboroCity/scripts.pory"

# 859 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RestoreBgm::
# 860 "data/maps/RustboroCity/scripts.pory"
	savebgm MUS_DUMMY
# 861 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 862 "data/maps/RustboroCity/scripts.pory"
	return
# 863 "data/maps/RustboroCity/scripts.pory"

# 864 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTreecko::
# 865 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, RustboroCity_Text_MayDefeat
# 866 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 867 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayGiveFly
# 868 "data/maps/RustboroCity/scripts.pory"
	end
# 869 "data/maps/RustboroCity/scripts.pory"

# 870 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTorchic::
# 871 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, RustboroCity_Text_MayDefeat
# 872 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 873 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayGiveFly
# 874 "data/maps/RustboroCity/scripts.pory"
	end
# 875 "data/maps/RustboroCity/scripts.pory"

# 876 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayMudkip::
# 877 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, RustboroCity_Text_MayDefeat
# 878 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 879 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayGiveFly
# 880 "data/maps/RustboroCity/scripts.pory"
	end
# 881 "data/maps/RustboroCity/scripts.pory"

# 882 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanEncounter::
# 883 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanGiveFly
# 884 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 885 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanHiLetsRegister, MSGBOX_DEFAULT
# 886 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 887 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 888 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 889 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 890 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 891 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 892 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 893 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 894 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 895 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 896 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanPassedBrineyWantToBattle, MSGBOX_DEFAULT
# 897 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleBrendan
# 898 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 899 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 900 "data/maps/RustboroCity/scripts.pory"
	end
# 901 "data/maps/RustboroCity/scripts.pory"

# 902 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendan::
# 903 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanIWontGoEasy, MSGBOX_DEFAULT
# 904 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 905 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleBrendanTreecko
# 906 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleBrendanTorchic
# 907 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleBrendanMudkip
# 908 "data/maps/RustboroCity/scripts.pory"
	end
# 909 "data/maps/RustboroCity/scripts.pory"

# 910 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanGiveFly::
# 911 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_FLY, RustboroCity_EventScript_BrendanBrineyHint
# 912 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanGiveFly, MSGBOX_DEFAULT
# 913 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_HM_FLY, 1
# 914 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanMrBrineyHint, MSGBOX_DEFAULT
# 915 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 916 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLY
# 917 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 918 "data/maps/RustboroCity/scripts.pory"
	end
# 919 "data/maps/RustboroCity/scripts.pory"

# 920 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanBrineyHint::
# 921 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanMrBrineyHint, MSGBOX_DEFAULT
# 922 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 923 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 924 "data/maps/RustboroCity/scripts.pory"
	end
# 925 "data/maps/RustboroCity/scripts.pory"

# 926 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTreecko::
# 927 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, RustboroCity_Text_BrendanDefeat
# 928 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 929 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanGiveFly
# 930 "data/maps/RustboroCity/scripts.pory"
	end
# 931 "data/maps/RustboroCity/scripts.pory"

# 932 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTorchic::
# 933 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, RustboroCity_Text_BrendanDefeat
# 934 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 935 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanGiveFly
# 936 "data/maps/RustboroCity/scripts.pory"
	end
# 937 "data/maps/RustboroCity/scripts.pory"

# 938 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanMudkip::
# 939 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, RustboroCity_Text_BrendanDefeat
# 940 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 941 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanGiveFly
# 942 "data/maps/RustboroCity/scripts.pory"
	end
# 943 "data/maps/RustboroCity/scripts.pory"

# 944 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer0:
# 945 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 946 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 947 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 948 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 949 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 950 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 951 "data/maps/RustboroCity/scripts.pory"
	step_end
# 952 "data/maps/RustboroCity/scripts.pory"

# 953 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer1:
# 954 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 955 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 956 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 957 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 958 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 959 "data/maps/RustboroCity/scripts.pory"
	step_end
# 960 "data/maps/RustboroCity/scripts.pory"

# 961 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer2:
# 962 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 963 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 964 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 965 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 966 "data/maps/RustboroCity/scripts.pory"
	step_end
# 967 "data/maps/RustboroCity/scripts.pory"

# 968 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer3:
# 969 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 970 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 971 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 972 "data/maps/RustboroCity/scripts.pory"
	step_end
# 973 "data/maps/RustboroCity/scripts.pory"

# 974 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer4:
# 975 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 976 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 977 "data/maps/RustboroCity/scripts.pory"
	step_end
# 978 "data/maps/RustboroCity/scripts.pory"

# 979 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer5:
# 980 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 981 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 982 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 983 "data/maps/RustboroCity/scripts.pory"
	step_end
# 984 "data/maps/RustboroCity/scripts.pory"

# 985 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer6:
# 986 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 987 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 988 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 989 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 990 "data/maps/RustboroCity/scripts.pory"
	step_end
# 991 "data/maps/RustboroCity/scripts.pory"

# 992 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer7:
# 993 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 994 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 995 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 996 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 997 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 998 "data/maps/RustboroCity/scripts.pory"
	step_end
# 999 "data/maps/RustboroCity/scripts.pory"

# 1000 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy1::
# 1001 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouCanHave2On2Battle, MSGBOX_NPC
# 1002 "data/maps/RustboroCity/scripts.pory"
	end
# 1003 "data/maps/RustboroCity/scripts.pory"

# 1004 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WeShortenItToDevon:
# 1005 "data/maps/RustboroCity/scripts.pory"
	.string "The Devon Corporation…\n"
# 1006 "data/maps/RustboroCity/scripts.pory"
	.string "We all just shorten it to Devon.\p"
# 1007 "data/maps/RustboroCity/scripts.pory"
	.string "That company makes all sorts of\n"
# 1008 "data/maps/RustboroCity/scripts.pory"
	.string "convenient products.$"
# 1009 "data/maps/RustboroCity/scripts.pory"

# 1010 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_SneakyLookingManWentAroundCorner:
# 1011 "data/maps/RustboroCity/scripts.pory"
	.string "Hm? A sneaky-looking man?\p"
# 1012 "data/maps/RustboroCity/scripts.pory"
	.string "Come to think of it, yes, a shady-\n"
# 1013 "data/maps/RustboroCity/scripts.pory"
	.string "looking guy went around the corner.$"
# 1014 "data/maps/RustboroCity/scripts.pory"

# 1015 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HaveYouChallengedGym:
# 1016 "data/maps/RustboroCity/scripts.pory"
	.string "Have you taken the Pokémon Gym\n"
# 1017 "data/maps/RustboroCity/scripts.pory"
	.string "challenge?\p"
# 1018 "data/maps/RustboroCity/scripts.pory"
	.string "When you get that shiny Gym Badge\n"
# 1019 "data/maps/RustboroCity/scripts.pory"
	.string "in hand, I guess Trainers begin to\l"
# 1020 "data/maps/RustboroCity/scripts.pory"
	.string "realize what is required of them.$"
# 1021 "data/maps/RustboroCity/scripts.pory"

# 1022 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HeyThatsRustborosGymBadge:
# 1023 "data/maps/RustboroCity/scripts.pory"
	.string "Hey, that's Rustboro's Gym Badge!\p"
# 1024 "data/maps/RustboroCity/scripts.pory"
	.string "Out of all the Pokémon Gym Badges,\n"
# 1025 "data/maps/RustboroCity/scripts.pory"
	.string "Rustboro's is the coolest, I'd say.$"
# 1026 "data/maps/RustboroCity/scripts.pory"

# 1027 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureNewAroundHere:
# 1028 "data/maps/RustboroCity/scripts.pory"
	.string "Oh? Who might you be?\n"
# 1029 "data/maps/RustboroCity/scripts.pory"
	.string "You're a new face around these parts.\p"
# 1030 "data/maps/RustboroCity/scripts.pory"
	.string "Have you just transferred into the\n"
# 1031 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon Trainer's School?$"
# 1032 "data/maps/RustboroCity/scripts.pory"

# 1033 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymLeaderIsntEasyWithFire:
# 1034 "data/maps/RustboroCity/scripts.pory"
	.string "I challenged the Gym Leader, but…\p"
# 1035 "data/maps/RustboroCity/scripts.pory"
	.string "It's not going to be easy winning with\n"
# 1036 "data/maps/RustboroCity/scripts.pory"
	.string "my Fire-type Pokémon…\p"
# 1037 "data/maps/RustboroCity/scripts.pory"
	.string "Fire-type Pokémon don't match up\n"
# 1038 "data/maps/RustboroCity/scripts.pory"
	.string "well against Rock-type Pokémon…$"
# 1039 "data/maps/RustboroCity/scripts.pory"

# 1040 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyWalksInTheTunnel:
# 1041 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor Mr. Briney lives in\n"
# 1042 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1043 "data/maps/RustboroCity/scripts.pory"
	.string "He goes for walks in the tunnel every\n"
# 1044 "data/maps/RustboroCity/scripts.pory"
	.string "so often.$"
# 1045 "data/maps/RustboroCity/scripts.pory"

# 1046 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyLovesPeeko:
# 1047 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor Mr. Briney lives in\n"
# 1048 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1049 "data/maps/RustboroCity/scripts.pory"
	.string "He said he was going shopping in\n"
# 1050 "data/maps/RustboroCity/scripts.pory"
	.string "Slateport for his pet, Peeko.\p"
# 1051 "data/maps/RustboroCity/scripts.pory"
	.string "That old sea dog, he must really love\n"
# 1052 "data/maps/RustboroCity/scripts.pory"
	.string "that Peeko.$"
# 1053 "data/maps/RustboroCity/scripts.pory"

# 1054 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WowYouHavePokemon:
# 1055 "data/maps/RustboroCity/scripts.pory"
	.string "Wow, you have Pokémon with you, too.\p"
# 1056 "data/maps/RustboroCity/scripts.pory"
	.string "When I get bigger, I'm going to go\n"
# 1057 "data/maps/RustboroCity/scripts.pory"
	.string "places with Pokémon, too.$"
# 1058 "data/maps/RustboroCity/scripts.pory"

# 1059 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CatchRarePokemonIfIGoToSchool:
# 1060 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon Trainer's School!\p"
# 1061 "data/maps/RustboroCity/scripts.pory"
	.string "If I go to this school, will I be able\n"
# 1062 "data/maps/RustboroCity/scripts.pory"
	.string "to catch rare Pokémon easily?$"
# 1063 "data/maps/RustboroCity/scripts.pory"

# 1064 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonCanChangeLookFromExp:
# 1065 "data/maps/RustboroCity/scripts.pory"
	.string "If a Pokémon gains experience in\n"
# 1066 "data/maps/RustboroCity/scripts.pory"
	.string "battles, it can sometimes change in\l"
# 1067 "data/maps/RustboroCity/scripts.pory"
	.string "the way it looks.$"
# 1068 "data/maps/RustboroCity/scripts.pory"

# 1069 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonChangeShape:
# 1070 "data/maps/RustboroCity/scripts.pory"
	.string "A Pokémon changes shape?\n"
# 1071 "data/maps/RustboroCity/scripts.pory"
	.string "If one did that, I would be shocked!$"
# 1072 "data/maps/RustboroCity/scripts.pory"

# 1073 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TradePokemonGrowFast:
# 1074 "data/maps/RustboroCity/scripts.pory"
	.string "A Pokémon you get in a trade from\n"
# 1075 "data/maps/RustboroCity/scripts.pory"
	.string "someone grows fast.\p"
# 1076 "data/maps/RustboroCity/scripts.pory"
	.string "But if you don't have certain Gym\n"
# 1077 "data/maps/RustboroCity/scripts.pory"
	.string "Badges, it may not obey you…$"
# 1078 "data/maps/RustboroCity/scripts.pory"

# 1079 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_OutOfTheWay:
# 1080 "data/maps/RustboroCity/scripts.pory"
	.string "Get out!\n"
# 1081 "data/maps/RustboroCity/scripts.pory"
	.string "Out of the way!$"
# 1082 "data/maps/RustboroCity/scripts.pory"

# 1083 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WaitDontTakeMyGoods:
# 1084 "data/maps/RustboroCity/scripts.pory"
	.string "Wait! Pleeeaaase!\p"
# 1085 "data/maps/RustboroCity/scripts.pory"
	.string "Don't take my Goods!$"
# 1086 "data/maps/RustboroCity/scripts.pory"

# 1087 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HelpMeIWasRobbed:
# 1088 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, it's you!\p"
# 1089 "data/maps/RustboroCity/scripts.pory"
	.string "You're that fantastic Trainer who\n"
# 1090 "data/maps/RustboroCity/scripts.pory"
	.string "helped me in Petalburg Woods!\p"
# 1091 "data/maps/RustboroCity/scripts.pory"
	.string "Help me! I was robbed by Team Aqua!\n"
# 1092 "data/maps/RustboroCity/scripts.pory"
	.string "I have to get the Devon Goods back!\p"
# 1093 "data/maps/RustboroCity/scripts.pory"
	.string "If I don't…\n"
# 1094 "data/maps/RustboroCity/scripts.pory"
	.string "I'm going to be in serious trouble.$"
# 1095 "data/maps/RustboroCity/scripts.pory"

# 1096 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel:
# 1097 "data/maps/RustboroCity/scripts.pory"
	.string "That shady character, I think he took\n"
# 1098 "data/maps/RustboroCity/scripts.pory"
	.string "off towards the tunnel over there.$"
# 1099 "data/maps/RustboroCity/scripts.pory"

# 1100 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouGotItThankYou:
# 1101 "data/maps/RustboroCity/scripts.pory"
	.string "Oh! How did it go?\n"
# 1102 "data/maps/RustboroCity/scripts.pory"
	.string "The Devon Goods?\p"
# 1103 "data/maps/RustboroCity/scripts.pory"
	.string "You did!\n"
# 1104 "data/maps/RustboroCity/scripts.pory"
	.string "You got them back!\p"
# 1105 "data/maps/RustboroCity/scripts.pory"
	.string "You really are a great Trainer!\p"
# 1106 "data/maps/RustboroCity/scripts.pory"
	.string "I know! As my thanks, I'll give you\n"
# 1107 "data/maps/RustboroCity/scripts.pory"
	.string "another TM!$"
# 1108 "data/maps/RustboroCity/scripts.pory"

# 1109 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureLoadedWithItems:
# 1110 "data/maps/RustboroCity/scripts.pory"
	.string "You debug using lil bro!\n"
# 1111 "data/maps/RustboroCity/scripts.pory"
	.string "I can't give you this TM.$"
# 1112 "data/maps/RustboroCity/scripts.pory"

# 1113 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseComeWithMe:
# 1114 "data/maps/RustboroCity/scripts.pory"
	.string "Excuse me, please!\n"
# 1115 "data/maps/RustboroCity/scripts.pory"
	.string "Please come with me!$"
# 1116 "data/maps/RustboroCity/scripts.pory"

# 1117 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayHiLetsRegister:
# 1118 "data/maps/RustboroCity/scripts.pory"
	.string "May: Oh, hi, {PLAYER}{KUN}!\p"
# 1119 "data/maps/RustboroCity/scripts.pory"
	.string "You had a Match Call feature put\n"
# 1120 "data/maps/RustboroCity/scripts.pory"
	.string "on your PokéNav!\p"
# 1121 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1122 "data/maps/RustboroCity/scripts.pory"
	.string "contact one another anytime!\p"
# 1123 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1124 "data/maps/RustboroCity/scripts.pory"

# 1125 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredMay:
# 1126 "data/maps/RustboroCity/scripts.pory"
	.string "Registered May\n"
# 1127 "data/maps/RustboroCity/scripts.pory"
	.string "in the PokéNav.$"
# 1128 "data/maps/RustboroCity/scripts.pory"

# 1129 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayPassedBrineyWantToBattle:
# 1130 "data/maps/RustboroCity/scripts.pory"
	.string "May: Oh, by the way, I passed\n"
# 1131 "data/maps/RustboroCity/scripts.pory"
	.string "Mr. Briney in Petalburg Woods.\p"
# 1132 "data/maps/RustboroCity/scripts.pory"
	.string "I guess he's on his way home to his\n"
# 1133 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1134 "data/maps/RustboroCity/scripts.pory"
	.string "How's your Pokédex coming along,\n"
# 1135 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}? Mine's looking pretty decent!\p"
# 1136 "data/maps/RustboroCity/scripts.pory"
	.string "So…\n"
# 1137 "data/maps/RustboroCity/scripts.pory"
	.string "Let's have a little battle to test our\l"
# 1138 "data/maps/RustboroCity/scripts.pory"
	.string "skills!$"
# 1139 "data/maps/RustboroCity/scripts.pory"

# 1140 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayWantToBattle:
# 1141 "data/maps/RustboroCity/scripts.pory"
	.string "May: So, what do you think?\n"
# 1142 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle here?$"
# 1143 "data/maps/RustboroCity/scripts.pory"

# 1144 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayImNotGoingToLose:
# 1145 "data/maps/RustboroCity/scripts.pory"
	.string "You just became a Trainer, {PLAYER}.\n"
# 1146 "data/maps/RustboroCity/scripts.pory"
	.string "I'm not going to lose!$"
# 1147 "data/maps/RustboroCity/scripts.pory"

# 1148 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayDefeat:
# 1149 "data/maps/RustboroCity/scripts.pory"
	.string "Yikes!\n"
# 1150 "data/maps/RustboroCity/scripts.pory"
	.string "You're better than I expected!$"
# 1151 "data/maps/RustboroCity/scripts.pory"

# 1152 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayGiveFly:
# 1153 "data/maps/RustboroCity/scripts.pory"
	.string "Nice battle, {PLAYER}!\p"
# 1154 "data/maps/RustboroCity/scripts.pory"
	.string "Here's a reward for your efforts!$"
# 1155 "data/maps/RustboroCity/scripts.pory"

# 1156 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayMrBrineyHint:
# 1157 "data/maps/RustboroCity/scripts.pory"
	.string "May: Oh, by the way, Mr. Briney, who\n"
# 1158 "data/maps/RustboroCity/scripts.pory"
	.string "I just passed…\p"
# 1159 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}, you just moved here so you\n"
# 1160 "data/maps/RustboroCity/scripts.pory"
	.string "might not know this, but Mr. Briney\l"
# 1161 "data/maps/RustboroCity/scripts.pory"
	.string "was once a revered seafarer.$"
# 1162 "data/maps/RustboroCity/scripts.pory"

# 1163 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanHiLetsRegister:
# 1164 "data/maps/RustboroCity/scripts.pory"
	.string "Brendan: Oh, hey, {PLAYER}!\p"
# 1165 "data/maps/RustboroCity/scripts.pory"
	.string "You had a Match Call feature put\n"
# 1166 "data/maps/RustboroCity/scripts.pory"
	.string "on your PokéNav! Cool!\p"
# 1167 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1168 "data/maps/RustboroCity/scripts.pory"
	.string "get in touch anytime!\p"
# 1169 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1170 "data/maps/RustboroCity/scripts.pory"

# 1171 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredBrendan:
# 1172 "data/maps/RustboroCity/scripts.pory"
	.string "Registered Brendan\n"
# 1173 "data/maps/RustboroCity/scripts.pory"
	.string "in the PokéNav.$"
# 1174 "data/maps/RustboroCity/scripts.pory"

# 1175 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanPassedBrineyWantToBattle:
# 1176 "data/maps/RustboroCity/scripts.pory"
	.string "Brendan: By the way, {PLAYER}, I walked\n"
# 1177 "data/maps/RustboroCity/scripts.pory"
	.string "by Mr. Briney in Petalburg Woods.\p"
# 1178 "data/maps/RustboroCity/scripts.pory"
	.string "I bet he was on his way home to his\n"
# 1179 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1180 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, how's your Pokédex?\n"
# 1181 "data/maps/RustboroCity/scripts.pory"
	.string "Have you filled in any pages yet?\p"
# 1182 "data/maps/RustboroCity/scripts.pory"
	.string "Mine rules.\p"
# 1183 "data/maps/RustboroCity/scripts.pory"
	.string "Let's have a friendly battle to see how\n"
# 1184 "data/maps/RustboroCity/scripts.pory"
	.string "strong we are!$"
# 1185 "data/maps/RustboroCity/scripts.pory"

# 1186 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanIWontGoEasy:
# 1187 "data/maps/RustboroCity/scripts.pory"
	.string "I know you just became a Trainer,\n"
# 1188 "data/maps/RustboroCity/scripts.pory"
	.string " but I won't go easy!$"
# 1189 "data/maps/RustboroCity/scripts.pory"

# 1190 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanDefeat:
# 1191 "data/maps/RustboroCity/scripts.pory"
	.string "Hmm…\n"
# 1192 "data/maps/RustboroCity/scripts.pory"
	.string "You're pretty good.$"
# 1193 "data/maps/RustboroCity/scripts.pory"

# 1194 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanGiveFly:
# 1195 "data/maps/RustboroCity/scripts.pory"
	.string "Wow! You're strong!\p"
# 1196 "data/maps/RustboroCity/scripts.pory"
	.string "To be fair, I did go easy on you, haha.\p"
# 1197 "data/maps/RustboroCity/scripts.pory"
	.string "This should make travels easier!$"
# 1198 "data/maps/RustboroCity/scripts.pory"

# 1199 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanMrBrineyHint:
# 1200 "data/maps/RustboroCity/scripts.pory"
	.string "Brendan: By the way, you know\n"
# 1201 "data/maps/RustboroCity/scripts.pory"
	.string "Mr. Briney? The guy I just passed?\p"
# 1202 "data/maps/RustboroCity/scripts.pory"
	.string "I bet you didn't know this, since you\n"
# 1203 "data/maps/RustboroCity/scripts.pory"
	.string "just moved here, {PLAYER}, but\l"
# 1204 "data/maps/RustboroCity/scripts.pory"
	.string "Mr. Briney was once a great sailor.$"
# 1205 "data/maps/RustboroCity/scripts.pory"

# 1206 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TunnelNearingCompletion:
# 1207 "data/maps/RustboroCity/scripts.pory"
	.string "“Timesaving tunnel nearing\n"
# 1208 "data/maps/RustboroCity/scripts.pory"
	.string "completion!”\p"
# 1209 "data/maps/RustboroCity/scripts.pory"
	.string "…Is what it says on the sign, but\n"
# 1210 "data/maps/RustboroCity/scripts.pory"
	.string "there's also a big “X” splashed\l"
# 1211 "data/maps/RustboroCity/scripts.pory"
	.string "across it in red paint…$"
# 1212 "data/maps/RustboroCity/scripts.pory"

# 1213 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpSign:
# 1214 "data/maps/RustboroCity/scripts.pory"
	.string "Devon Corporation\p"
# 1215 "data/maps/RustboroCity/scripts.pory"
	.string "“For all your living needs, we make\n"
# 1216 "data/maps/RustboroCity/scripts.pory"
	.string "it all.”$"
# 1217 "data/maps/RustboroCity/scripts.pory"

# 1218 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymSign:
# 1219 "data/maps/RustboroCity/scripts.pory"
	.string "Rustboro City Pokémon Gym\n"
# 1220 "data/maps/RustboroCity/scripts.pory"
	.string "Leader: Dor\p"
# 1221 "data/maps/RustboroCity/scripts.pory"
	.string "“The pedophilic Gym Leader!”$"
# 1222 "data/maps/RustboroCity/scripts.pory"

# 1223 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpBranchOfficeSign:
# 1224 "data/maps/RustboroCity/scripts.pory"
	.string "Devon Corp. Branch Office\p"
# 1225 "data/maps/RustboroCity/scripts.pory"
	.string "“Access limited to Devon employees\n"
# 1226 "data/maps/RustboroCity/scripts.pory"
	.string "and authorized personnel.”$"
# 1227 "data/maps/RustboroCity/scripts.pory"

# 1228 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CitySign:
# 1229 "data/maps/RustboroCity/scripts.pory"
	.string "Rustboro City\p"
# 1230 "data/maps/RustboroCity/scripts.pory"
	.string "“The city probing the integration of\n"
# 1231 "data/maps/RustboroCity/scripts.pory"
	.string "nature and science.”$"
# 1232 "data/maps/RustboroCity/scripts.pory"

# 1233 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TrainersSchoolSign:
# 1234 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon Trainer's School\p"
# 1235 "data/maps/RustboroCity/scripts.pory"
	.string "“We'll teach you anything about\n"
# 1236 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon!”$"
# 1237 "data/maps/RustboroCity/scripts.pory"

# 1238 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CuttersHouse:
# 1239 "data/maps/RustboroCity/scripts.pory"
	.string "Cutter's House$"
# 1240 "data/maps/RustboroCity/scripts.pory"

# 1241 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevelopedNewPokenavFeature:
# 1242 "data/maps/RustboroCity/scripts.pory"
	.string "Wait a moment, {PLAYER}.\p"
# 1243 "data/maps/RustboroCity/scripts.pory"
	.string "We've been working on a new tool,\n"
# 1244 "data/maps/RustboroCity/scripts.pory"
	.string "and since you're a Trainer,\l"
# 1245 "data/maps/RustboroCity/scripts.pory"
	.string "I think you'll really like it!\p"
# 1246 "data/maps/RustboroCity/scripts.pory"
	.string "Please, wait.$"
# 1247 "data/maps/RustboroCity/scripts.pory"

# 1248 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_AddedMatchCallPleaseCallMrStone:
# 1249 "data/maps/RustboroCity/scripts.pory"
	.string "There you go, {PLAYER}!\p"
# 1250 "data/maps/RustboroCity/scripts.pory"
	.string "Now you can edit your Pokémon's\n"
# 1251 "data/maps/RustboroCity/scripts.pory"
	.string "freely!\p"
# 1252 "data/maps/RustboroCity/scripts.pory"
	.string "It does seem a little unethical, but\n"
# 1253 "data/maps/RustboroCity/scripts.pory"
	.string "don't worry, it doesn't hurt the\l"
# 1254 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon at all!\p"
# 1255 "data/maps/RustboroCity/scripts.pory"
	.string "… … …\n"
# 1256 "data/maps/RustboroCity/scripts.pory"
	.string "… … …\p"
# 1257 "data/maps/RustboroCity/scripts.pory"
	.string "Don't ask too many questions.\p"
# 1258 "data/maps/RustboroCity/scripts.pory"
	.string "I'm not paid enough to answer them!$"
# 1259 "data/maps/RustboroCity/scripts.pory"

# 1260 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseSelectPokenav:
# 1261 "data/maps/RustboroCity/scripts.pory"
	.string "Please select the PokéNav.$"
# 1262 "data/maps/RustboroCity/scripts.pory"

# 1263 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_IdBetterGetBackToWork:
# 1264 "data/maps/RustboroCity/scripts.pory"
	.string "Okay, I'd better get back to work.\n"
# 1265 "data/maps/RustboroCity/scripts.pory"
	.string "Take care, {PLAYER}!$"
# 1266 "data/maps/RustboroCity/scripts.pory"

# 1267 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouCanHave2On2Battle:
# 1268 "data/maps/RustboroCity/scripts.pory"
	.string "Did you know this?\p"
# 1269 "data/maps/RustboroCity/scripts.pory"
	.string "You can have a 2-on-2 battle even\n"
# 1270 "data/maps/RustboroCity/scripts.pory"
	.string "if you're not with another Trainer.\p"
# 1271 "data/maps/RustboroCity/scripts.pory"
	.string "If you catch the eyes of two Trainers\n"
# 1272 "data/maps/RustboroCity/scripts.pory"
	.string "when you have two or more Pokémon,\l"
# 1273 "data/maps/RustboroCity/scripts.pory"
	.string "they'll both challenge you.\p"
# 1274 "data/maps/RustboroCity/scripts.pory"
	.string "Don't you think it'd be cool if you\n"
# 1275 "data/maps/RustboroCity/scripts.pory"
	.string "could beat two Trainers by yourself?$"
