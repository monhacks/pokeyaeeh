# 1 "data/maps/SootopolisCity/scripts.pory"

# 2 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_EXPERT, 1
# 3 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_WOMAN_2, 2
# 4 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_KIRI, 3
# 5 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_NINJA_BOY, 4
# 6 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_BOY_1, 5
# 7 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_STEVEN, 7
# 8 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_WOMAN_1, 8
# 9 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_GROUDON, 9
# 10 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_KYOGRE, 10
# 11 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_RAYQUAZA, 11
# 12 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_MANIAC, 12
# 13 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_GIRL, 13
# 14 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_BLACK_BELT, 14
# 15 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_BOY_2, 15
# 16 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_MAXIE, 16
# 17 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_ARCHIE, 17
# 18 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_WALLACE, 18
# 19 "data/maps/SootopolisCity/scripts.pory"

# 20 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_MapScripts::
# 21 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SootopolisCity_OnLoad
# 22 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_OnTransition
# 23 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SootopolisCity_OnResume
# 24 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SootopolisCity_OnFrame
# 25 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SootopolisCity_OnWarp
# 26 "data/maps/SootopolisCity/scripts.pory"
	.byte 0
# 27 "data/maps/SootopolisCity/scripts.pory"

# 28 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnLoad:
# 29 "data/maps/SootopolisCity/scripts.pory"
	call_if_unset FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_LockGymDoor
# 30 "data/maps/SootopolisCity/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_EventScript_LegendariesNotArrived
# 31 "data/maps/SootopolisCity/scripts.pory"
	call_if_unset FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_LockHouseDoors
# 32 "data/maps/SootopolisCity/scripts.pory"
	end
# 33 "data/maps/SootopolisCity/scripts.pory"

# 34 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendariesNotArrived::
# 35 "data/maps/SootopolisCity/scripts.pory"
	end
# 36 "data/maps/SootopolisCity/scripts.pory"

# 37 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LockHouseDoors::
# 38 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 9, 6, METATILE_Sootopolis_Door_Closed, TRUE
# 39 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 9, 17, METATILE_Sootopolis_Door_Closed, TRUE
# 40 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 9, 26, METATILE_Sootopolis_Door_Closed, TRUE
# 41 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 44, 17, METATILE_Sootopolis_Door_Closed, TRUE
# 42 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 8, 35, METATILE_Sootopolis_Door_Closed, TRUE
# 43 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 53, 28, METATILE_Sootopolis_Door_Closed, TRUE
# 44 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 45, 6, METATILE_Sootopolis_Door_Closed, TRUE
# 45 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 48, 25, METATILE_Sootopolis_Door_Closed, TRUE
# 46 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 51, 36, METATILE_Sootopolis_Door_Closed, TRUE
# 47 "data/maps/SootopolisCity/scripts.pory"
	return
# 48 "data/maps/SootopolisCity/scripts.pory"

# 49 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LockGymDoor::
# 50 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 31, 32, METATILE_Sootopolis_GymDoor_Closed, TRUE
# 51 "data/maps/SootopolisCity/scripts.pory"
	return
# 52 "data/maps/SootopolisCity/scripts.pory"

# 53 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnTransition:
# 54 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_VISITED_SOOTOPOLIS_CITY
# 55 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_HideMapNamePopup
# 56 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_HideMapNamePopup
# 57 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetWeather
# 58 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetLayout
# 59 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_SetBattleSpectators
# 60 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_SetBattleSpectators
# 61 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_SetBattleSpectators
# 62 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_SetBattleSpectators
# 63 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_SetBattleSpectators
# 64 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_SetBattleSpectators
# 65 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos
# 66 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos
# 67 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos
# 68 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_SetExitCaveOfOriginObjPos
# 69 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_SetOutsideGymObjPos
# 70 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 7, SootopolisCity_EventScript_SetExpertBlockCaveEntrance
# 71 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 8, SootopolisCity_EventScript_SetEnterCaveOfOriginObjPos
# 72 "data/maps/SootopolisCity/scripts.pory"
	end
# 73 "data/maps/SootopolisCity/scripts.pory"

# 74 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_HideMapNamePopup::
# 75 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 76 "data/maps/SootopolisCity/scripts.pory"
	return
# 77 "data/maps/SootopolisCity/scripts.pory"

# 78 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetBattleSpectators::
# 79 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_KIRI, 13, 48
# 80 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_BOY_1, 46, 32
# 81 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_NINJA_BOY, 48, 41
# 82 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_WOMAN_1, 45, 43
# 83 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_KIRI, MOVEMENT_TYPE_FACE_UP
# 84 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_BOY_1, MOVEMENT_TYPE_FACE_LEFT
# 85 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_NINJA_BOY, MOVEMENT_TYPE_FACE_LEFT
# 86 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_WOMAN_1, MOVEMENT_TYPE_FACE_LEFT
# 87 "data/maps/SootopolisCity/scripts.pory"
	return
# 88 "data/maps/SootopolisCity/scripts.pory"

# 89 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetLayout::
# 90 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 0, SootopolisCity_EventScript_SetNormalLayout
# 91 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 7, SootopolisCity_EventScript_SetNormalLayout
# 92 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_SetLegendariesLayout
# 93 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_SetLegendariesLayout
# 94 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_SetLegendariesLayout
# 95 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_SetLegendariesLayout
# 96 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_SetLegendariesLayout
# 97 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_SetLegendariesLayout
# 98 "data/maps/SootopolisCity/scripts.pory"
	return
# 99 "data/maps/SootopolisCity/scripts.pory"

# 100 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetNormalLayout::
# 101 "data/maps/SootopolisCity/scripts.pory"
	return
# 102 "data/maps/SootopolisCity/scripts.pory"

# 103 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetLegendariesLayout::
# 104 "data/maps/SootopolisCity/scripts.pory"
	setmaplayoutindex LAYOUT_SOOTOPOLIS_CITY_LEGENDS_BATTLE
# 105 "data/maps/SootopolisCity/scripts.pory"
	return
# 106 "data/maps/SootopolisCity/scripts.pory"

# 107 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWeather::
# 108 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 0, SootopolisCity_EventScript_SetNormalWeather
# 109 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 7, SootopolisCity_EventScript_SetNormalWeather
# 110 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_SetDownpour
# 111 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_SetDownpour
# 112 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SKY_PILLAR_STATE, 1, Common_EventScript_SetAbnormalWeather
# 113 "data/maps/SootopolisCity/scripts.pory"
	return
# 114 "data/maps/SootopolisCity/scripts.pory"

# 115 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetNormalWeather::
# 116 "data/maps/SootopolisCity/scripts.pory"
	return
# 117 "data/maps/SootopolisCity/scripts.pory"

# 118 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetDownpour::
# 119 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_DOWNPOUR
# 120 "data/maps/SootopolisCity/scripts.pory"
	return
# 121 "data/maps/SootopolisCity/scripts.pory"

# 122 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos::
# 123 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_MOVE_CAVE_OF_ORIGIN_EXPERT, SootopolisCity_EventScript_SetEnterCaveOfOriginObjPos
# 124 "data/maps/SootopolisCity/scripts.pory"
	return
# 125 "data/maps/SootopolisCity/scripts.pory"

# 126 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetEnterCaveOfOriginObjPos::
# 127 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_EXPERT, 30, 18
# 128 "data/maps/SootopolisCity/scripts.pory"
	return
# 129 "data/maps/SootopolisCity/scripts.pory"

# 130 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetExitCaveOfOriginObjPos::
# 131 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_EXPERT, 30, 18
# 132 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_WALLACE, 31, 18
# 133 "data/maps/SootopolisCity/scripts.pory"
	end
# 134 "data/maps/SootopolisCity/scripts.pory"

# 135 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetOutsideGymObjPos::
# 136 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_EXPERT, 31, 18
# 137 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_MAXIE, 33, 35
# 138 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 34, 35
# 139 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_WALLACE_STATE, 0, SootopolisCity_EventScript_SetWallaceMiddle
# 140 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_WALLACE_STATE, 1, SootopolisCity_EventScript_SetWallaceRight
# 141 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_WALLACE_STATE, 2, SootopolisCity_EventScript_SetWallaceLeft
# 142 "data/maps/SootopolisCity/scripts.pory"
	return
# 143 "data/maps/SootopolisCity/scripts.pory"

# 144 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWallaceMiddle::
# 145 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_WALLACE, 31, 33
# 146 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_WALLACE, MOVEMENT_TYPE_FACE_DOWN
# 147 "data/maps/SootopolisCity/scripts.pory"
	return
# 148 "data/maps/SootopolisCity/scripts.pory"

# 149 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWallaceRight::
# 150 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_WALLACE, 32, 33
# 151 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_WALLACE, MOVEMENT_TYPE_FACE_DOWN
# 152 "data/maps/SootopolisCity/scripts.pory"
	return
# 153 "data/maps/SootopolisCity/scripts.pory"

# 154 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWallaceLeft::
# 155 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_WALLACE, 30, 33
# 156 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_WALLACE, MOVEMENT_TYPE_FACE_DOWN
# 157 "data/maps/SootopolisCity/scripts.pory"
	return
# 158 "data/maps/SootopolisCity/scripts.pory"

# 159 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetExpertBlockCaveEntrance::
# 160 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_EXPERT, 31, 18
# 161 "data/maps/SootopolisCity/scripts.pory"
	return
# 162 "data/maps/SootopolisCity/scripts.pory"

# 163 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnWarp:
# 164 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_PlayerFaceLegendaries
# 165 "data/maps/SootopolisCity/scripts.pory"
	.2byte 0
# 166 "data/maps/SootopolisCity/scripts.pory"

# 167 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries::
# 168 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_PlayerFaceLegendaries1
# 169 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 2, SootopolisCity_EventScript_PlayerFaceLegendaries2
# 170 "data/maps/SootopolisCity/scripts.pory"
	end
# 171 "data/maps/SootopolisCity/scripts.pory"

# 172 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries1::
# 173 "data/maps/SootopolisCity/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 174 "data/maps/SootopolisCity/scripts.pory"
	return
# 175 "data/maps/SootopolisCity/scripts.pory"

# 176 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries2::
# 177 "data/maps/SootopolisCity/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 178 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 3
# 179 "data/maps/SootopolisCity/scripts.pory"
	return
# 180 "data/maps/SootopolisCity/scripts.pory"

# 181 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnResume:
# 182 "data/maps/SootopolisCity/scripts.pory"
	setdivewarp MAP_UNDERWATER_SOOTOPOLIS_CITY, 9, 6
# 183 "data/maps/SootopolisCity/scripts.pory"
	end
# 184 "data/maps/SootopolisCity/scripts.pory"

# 185 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnFrame:
# 186 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_StartLegendariesScene
# 187 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_StartRayquazaScene
# 188 "data/maps/SootopolisCity/scripts.pory"
	.2byte 0
# 189 "data/maps/SootopolisCity/scripts.pory"

# 190 "data/maps/SootopolisCity/scripts.pory"
@ If not at PokeCenter, assumed to have arrived via Dive
# 191 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartLegendariesScene::
# 192 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 193 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_MOVE_CAVE_OF_ORIGIN_EXPERT
# 194 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 2
# 195 "data/maps/SootopolisCity/scripts.pory"
	special StorePlayerCoordsInVars
# 196 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8004, 43, SootopolisCity_EventScript_LegendariesSceneFromDive
# 197 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8005, 32, SootopolisCity_EventScript_LegendariesSceneFromDive
# 198 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_LegendariesSceneFromPokeCenter
# 199 "data/maps/SootopolisCity/scripts.pory"
	end
# 200 "data/maps/SootopolisCity/scripts.pory"

# 201 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendariesSceneFromPokeCenter::
# 202 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 203 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 204 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromPokeCenter
# 205 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 206 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 207 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 208 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 209 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_ABNORMAL
# 210 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 211 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, FALSE @ Just do Groudon/Kyogre fight scene
# 212 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 213 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 214 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, Common_Movement_WalkInPlaceFasterLeft
# 215 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, Common_Movement_WalkInPlaceFasterRight
# 216 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 217 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 218 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 219 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 220 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 221 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonDefend
# 222 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 223 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 224 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 225 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 226 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 227 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 228 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 229 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 230 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 231 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 232 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 233 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 234 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreDefend
# 235 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonAttack
# 236 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 237 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 238 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 239 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 240 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 241 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 242 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 243 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 244 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 245 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 246 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 247 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 248 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 249 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonDefend
# 250 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 251 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 252 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 253 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 254 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 255 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 256 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 257 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 258 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 259 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 260 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 261 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreIdle
# 262 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonIdle
# 263 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanBackToPokeCenter
# 264 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 265 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 266 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 267 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 268 "data/maps/SootopolisCity/scripts.pory"
	end
# 269 "data/maps/SootopolisCity/scripts.pory"

# 270 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanToActionFromPokeCenter:
# 271 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 272 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 273 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 274 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 275 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 276 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 277 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 278 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 279 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 280 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 281 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 282 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 283 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 284 "data/maps/SootopolisCity/scripts.pory"

# 285 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanBackToPokeCenter:
# 286 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 287 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 288 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 289 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 290 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 291 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 292 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 293 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 294 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 295 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 296 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 297 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 298 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 299 "data/maps/SootopolisCity/scripts.pory"

# 300 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendariesSceneFromDive::
# 301 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 302 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 303 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromDive
# 304 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 305 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 306 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 307 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 308 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_ABNORMAL
# 309 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 310 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, FALSE @ Just do Groudon/Kyogre fight scene
# 311 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 312 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 313 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, Common_Movement_WalkInPlaceFasterLeft
# 314 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, Common_Movement_WalkInPlaceFasterRight
# 315 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 316 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 317 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 318 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 319 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 320 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonDefend
# 321 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 322 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 323 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 324 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 325 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 326 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 327 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 328 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 329 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 330 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 331 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 332 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 333 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreDefend
# 334 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonAttack
# 335 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 336 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 337 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 338 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 339 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 340 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 341 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 342 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 343 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 344 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 345 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 346 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 347 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 348 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonDefend
# 349 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 350 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 351 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 352 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 353 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 354 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 355 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 356 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 357 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 358 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 359 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 360 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreIdle
# 361 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonIdle
# 362 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanBackToDive
# 363 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 364 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 365 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 366 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 367 "data/maps/SootopolisCity/scripts.pory"
	end
# 368 "data/maps/SootopolisCity/scripts.pory"

# 369 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanToActionFromDive:
# 370 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 371 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 372 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 373 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 374 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 375 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 376 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 377 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 378 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 379 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 380 "data/maps/SootopolisCity/scripts.pory"

# 381 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanBackToDive:
# 382 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 383 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 384 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 385 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 386 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 387 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 388 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 389 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 390 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 391 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 392 "data/maps/SootopolisCity/scripts.pory"

# 393 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreAttack:
# 394 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 395 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 396 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 397 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 398 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 399 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 400 "data/maps/SootopolisCity/scripts.pory"
	init_affine_anim
# 401 "data/maps/SootopolisCity/scripts.pory"
	walk_left_affine
# 402 "data/maps/SootopolisCity/scripts.pory"
	clear_affine_anim
# 403 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 404 "data/maps/SootopolisCity/scripts.pory"

# 405 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreDefend:
# 406 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 407 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 408 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 409 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 410 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 411 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 412 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 413 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 414 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 415 "data/maps/SootopolisCity/scripts.pory"
	init_affine_anim
# 416 "data/maps/SootopolisCity/scripts.pory"
	walk_left_affine
# 417 "data/maps/SootopolisCity/scripts.pory"
	clear_affine_anim
# 418 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 419 "data/maps/SootopolisCity/scripts.pory"

# 420 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreMoveBack:
# 421 "data/maps/SootopolisCity/scripts.pory"
	lock_facing_direction
# 422 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 423 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 424 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 425 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 426 "data/maps/SootopolisCity/scripts.pory"
	unlock_facing_direction
# 427 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 428 "data/maps/SootopolisCity/scripts.pory"

# 429 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreIdle:
# 430 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 431 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 432 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 433 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 434 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 435 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 436 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 437 "data/maps/SootopolisCity/scripts.pory"

# 438 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonAttack:
# 439 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 440 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 441 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 442 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 443 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 444 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 445 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_right
# 446 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 447 "data/maps/SootopolisCity/scripts.pory"

# 448 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonDefend:
# 449 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 450 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 451 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 452 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 453 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 454 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 455 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 456 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 457 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 458 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_right
# 459 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 460 "data/maps/SootopolisCity/scripts.pory"

# 461 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonMoveBack:
# 462 "data/maps/SootopolisCity/scripts.pory"
	lock_facing_direction
# 463 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 464 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 465 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 466 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 467 "data/maps/SootopolisCity/scripts.pory"
	unlock_facing_direction
# 468 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 469 "data/maps/SootopolisCity/scripts.pory"

# 470 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonIdle:
# 471 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 472 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 473 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 474 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 475 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 476 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 477 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 478 "data/maps/SootopolisCity/scripts.pory"

# 479 "data/maps/SootopolisCity/scripts.pory"
@ If not at PokeCenter, assumed to have arrived via Dive
# 480 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartRayquazaScene::
# 481 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 482 "data/maps/SootopolisCity/scripts.pory"
	special StorePlayerCoordsInVars
# 483 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8004, 43, SootopolisCity_EventScript_RayquazaSceneFromDive
# 484 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8005, 32, SootopolisCity_EventScript_RayquazaSceneFromDive
# 485 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_RayquazaSceneFromPokeCenter
# 486 "data/maps/SootopolisCity/scripts.pory"
	end
# 487 "data/maps/SootopolisCity/scripts.pory"

# 488 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_RayquazaSceneFromPokeCenter::
# 489 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 490 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 491 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromPokeCenter
# 492 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 493 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 494 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 495 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 496 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetRoughWater
# 497 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_GROUDON
# 498 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_KYOGRE
# 499 "data/maps/SootopolisCity/scripts.pory"
	addobject LOCALID_RAYQUAZA
# 500 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, TRUE
# 501 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 502 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 503 "data/maps/SootopolisCity/scripts.pory"
	playse SE_THUNDER
# 504 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 505 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanUp
# 506 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 507 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 508 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 509 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 510 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 511 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 512 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 513 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 514 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 515 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 516 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 517 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 518 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 519 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 520 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 521 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 522 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 523 "data/maps/SootopolisCity/scripts.pory"
	waitmoncry
# 524 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_NONE
# 525 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 526 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_RAYQUAZA, SootopolisCity_Movement_RayquazaFlyOff
# 527 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 528 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_RAYQUAZA
# 529 "data/maps/SootopolisCity/scripts.pory"
	special WaitWeather
# 530 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 531 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_SYS_WEATHER_CTRL
# 532 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 3
# 533 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 534 "data/maps/SootopolisCity/scripts.pory"
	fadenewbgm MUS_SOOTOPOLIS
# 535 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 536 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 537 "data/maps/SootopolisCity/scripts.pory"
	warpwhitefade MAP_SOOTOPOLIS_CITY, 43, 32
# 538 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 539 "data/maps/SootopolisCity/scripts.pory"
	end
# 540 "data/maps/SootopolisCity/scripts.pory"

# 541 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_RayquazaSceneFromDive::
# 542 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 543 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 544 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromDive
# 545 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 546 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 547 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 548 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 549 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetRoughWater
# 550 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_GROUDON
# 551 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_KYOGRE
# 552 "data/maps/SootopolisCity/scripts.pory"
	addobject LOCALID_RAYQUAZA
# 553 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, TRUE
# 554 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 555 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 556 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 557 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanUp
# 558 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerApproachLegendaries
# 559 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 560 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 561 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 562 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 563 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 564 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 565 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 566 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 567 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 568 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 569 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 570 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 571 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 572 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 573 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 574 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 575 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 576 "data/maps/SootopolisCity/scripts.pory"
	waitmoncry
# 577 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_NONE
# 578 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 579 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_RAYQUAZA, SootopolisCity_Movement_RayquazaFlyOff
# 580 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 581 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_RAYQUAZA
# 582 "data/maps/SootopolisCity/scripts.pory"
	special WaitWeather
# 583 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 584 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_SYS_WEATHER_CTRL
# 585 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 2
# 586 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 587 "data/maps/SootopolisCity/scripts.pory"
	fadenewbgm MUS_SURF
# 588 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 589 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 590 "data/maps/SootopolisCity/scripts.pory"
	warpwhitefade MAP_SOOTOPOLIS_CITY, 29, 53
# 591 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 592 "data/maps/SootopolisCity/scripts.pory"
	end
# 593 "data/maps/SootopolisCity/scripts.pory"

# 594 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetRoughWater::
# 595 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 43, METATILE_Sootopolis_RoughWater, FALSE
# 596 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 43, METATILE_Sootopolis_RoughWater, FALSE
# 597 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 43, METATILE_Sootopolis_RoughWater, FALSE
# 598 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 43, METATILE_Sootopolis_RoughWater, FALSE
# 599 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 44, METATILE_Sootopolis_RoughWater, FALSE
# 600 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 44, METATILE_Sootopolis_RoughWater, FALSE
# 601 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 44, METATILE_Sootopolis_RoughWater, FALSE
# 602 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 44, METATILE_Sootopolis_RoughWater, FALSE
# 603 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 45, METATILE_Sootopolis_RoughWater, FALSE
# 604 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 45, METATILE_Sootopolis_RoughWater, FALSE
# 605 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 45, METATILE_Sootopolis_RoughWater, FALSE
# 606 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 45, METATILE_Sootopolis_RoughWater, FALSE
# 607 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 43, METATILE_Sootopolis_RoughWater, FALSE
# 608 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 43, METATILE_Sootopolis_RoughWater, FALSE
# 609 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 43, METATILE_Sootopolis_RoughWater, FALSE
# 610 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 43, METATILE_Sootopolis_RoughWater, FALSE
# 611 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 44, METATILE_Sootopolis_RoughWater, FALSE
# 612 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 44, METATILE_Sootopolis_RoughWater, FALSE
# 613 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 44, METATILE_Sootopolis_RoughWater, FALSE
# 614 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 44, METATILE_Sootopolis_RoughWater, FALSE
# 615 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 45, METATILE_Sootopolis_RoughWater, FALSE
# 616 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 45, METATILE_Sootopolis_RoughWater, FALSE
# 617 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 45, METATILE_Sootopolis_RoughWater, FALSE
# 618 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 45, METATILE_Sootopolis_RoughWater, FALSE
# 619 "data/maps/SootopolisCity/scripts.pory"
	return
# 620 "data/maps/SootopolisCity/scripts.pory"

# 621 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_RayquazaFlyOff:
# 622 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_up
# 623 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 624 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 625 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 626 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 627 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 628 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 629 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 630 "data/maps/SootopolisCity/scripts.pory"

# 631 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanUp:
# 632 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 633 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 634 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 635 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 636 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 637 "data/maps/SootopolisCity/scripts.pory"

# 638 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerApproachLegendaries:
# 639 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 640 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 641 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 642 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 643 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 644 "data/maps/SootopolisCity/scripts.pory"

# 645 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_ExpertMoveAside:
# 646 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_left
# 647 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_right
# 648 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 649 "data/maps/SootopolisCity/scripts.pory"

# 650 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CaveOfOriginExpert::
# 651 "data/maps/SootopolisCity/scripts.pory"
	lock
# 652 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 653 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 7, SootopolisCity_EventScript_ExpertPostLegendaries
# 654 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_ExpertLegendaries
# 655 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_ExpertLeadToCave
# 656 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CaveOfOriginPleaseLeave, MSGBOX_DEFAULT
# 657 "data/maps/SootopolisCity/scripts.pory"
	release
# 658 "data/maps/SootopolisCity/scripts.pory"
	end
# 659 "data/maps/SootopolisCity/scripts.pory"

# 660 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertLeadToCave::
# 661 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_LeadSuperiorTrainerToCave, MSGBOX_DEFAULT
# 662 "data/maps/SootopolisCity/scripts.pory"
	release
# 663 "data/maps/SootopolisCity/scripts.pory"
	end
# 664 "data/maps/SootopolisCity/scripts.pory"

# 665 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertPostLegendaries::
# 666 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CaveOfOriginSleepsToo, MSGBOX_DEFAULT
# 667 "data/maps/SootopolisCity/scripts.pory"
	release
# 668 "data/maps/SootopolisCity/scripts.pory"
	end
# 669 "data/maps/SootopolisCity/scripts.pory"

# 670 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertLegendaries::
# 671 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AwakenedPokemonClash, MSGBOX_DEFAULT
# 672 "data/maps/SootopolisCity/scripts.pory"
	release
# 673 "data/maps/SootopolisCity/scripts.pory"
	end
# 674 "data/maps/SootopolisCity/scripts.pory"

# 675 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertMove::
# 676 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_MOVE_CAVE_OF_ORIGIN_EXPERT, SootopolisCity_EventScript_ExpertMoveAside
# 677 "data/maps/SootopolisCity/scripts.pory"
	end
# 678 "data/maps/SootopolisCity/scripts.pory"

# 679 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertMoveAside::
# 680 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_EXPERT, 30, 18
# 681 "data/maps/SootopolisCity/scripts.pory"
	playse SE_PIN
# 682 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_EXPERT, Common_Movement_ExclamationMark
# 683 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 684 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_EXPERT, Common_Movement_Delay48
# 685 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 686 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_EXPERT, SootopolisCity_Movement_ExpertMoveAside
# 687 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 688 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 3
# 689 "data/maps/SootopolisCity/scripts.pory"
	end
# 690 "data/maps/SootopolisCity/scripts.pory"

# 691 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Kiri::
# 692 "data/maps/SootopolisCity/scripts.pory"
	lock
# 693 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 694 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_KiriGiveBerry
# 695 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 7, SootopolisCity_EventScript_KiriGiveBerry
# 696 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_KiriRayquaza
# 697 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_BigPokemonFighting, MSGBOX_DEFAULT
# 698 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 699 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KIRI, Common_Movement_FaceOriginalDirection
# 700 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 701 "data/maps/SootopolisCity/scripts.pory"
	release
# 702 "data/maps/SootopolisCity/scripts.pory"
	end
# 703 "data/maps/SootopolisCity/scripts.pory"

# 704 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriRayquaza::
# 705 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_PrettyMonCameFromSky, MSGBOX_DEFAULT
# 706 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 707 "data/maps/SootopolisCity/scripts.pory"
	release
# 708 "data/maps/SootopolisCity/scripts.pory"
	end
# 709 "data/maps/SootopolisCity/scripts.pory"

# 710 "data/maps/SootopolisCity/scripts.pory"
@ Gives 2 berries daily. First ranges from FIRST_KIRI_BERRY to LAST_KIRI_BERRY, second is always Figy or Iapapa
# 711 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriGiveBerry::
# 712 "data/maps/SootopolisCity/scripts.pory"
	dotimebasedevents
# 713 "data/maps/SootopolisCity/scripts.pory"
	special GetPlayerBigGuyGirlString
# 714 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY, SootopolisCity_EventScript_KiriReceivedBerry
# 715 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NameIsKiriHaveOneOfThese, MSGBOX_DEFAULT
# 716 "data/maps/SootopolisCity/scripts.pory"
	random NUM_KIRI_BERRIES
# 717 "data/maps/SootopolisCity/scripts.pory"
	addvar VAR_RESULT, NUM_KIRI_BERRIES_SKIPPED
# 718 "data/maps/SootopolisCity/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 719 "data/maps/SootopolisCity/scripts.pory"
	giveitem VAR_RESULT
# 720 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 721 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY
# 722 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiveYouThisBerryToo, MSGBOX_DEFAULT
# 723 "data/maps/SootopolisCity/scripts.pory"
	random 2
# 724 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SootopolisCity_EventScript_GiveFigyBerry
# 725 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SootopolisCity_EventScript_GiveIapapaBerry
# 726 "data/maps/SootopolisCity/scripts.pory"
	end
# 727 "data/maps/SootopolisCity/scripts.pory"

# 728 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveFigyBerry::
# 729 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_FIGY_BERRY
# 730 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 731 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatKindOfWishInYourName, MSGBOX_DEFAULT
# 732 "data/maps/SootopolisCity/scripts.pory"
	release
# 733 "data/maps/SootopolisCity/scripts.pory"
	end
# 734 "data/maps/SootopolisCity/scripts.pory"

# 735 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveIapapaBerry::
# 736 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_IAPAPA_BERRY
# 737 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 738 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatKindOfWishInYourName, MSGBOX_DEFAULT
# 739 "data/maps/SootopolisCity/scripts.pory"
	release
# 740 "data/maps/SootopolisCity/scripts.pory"
	end
# 741 "data/maps/SootopolisCity/scripts.pory"

# 742 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriReceivedBerry::
# 743 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_LikeSeasonBornIn, MSGBOX_YESNO
# 744 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SootopolisCity_EventScript_KiriLikeSeasonBornIn
# 745 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_OhDoesntMatter, MSGBOX_DEFAULT
# 746 "data/maps/SootopolisCity/scripts.pory"
	release
# 747 "data/maps/SootopolisCity/scripts.pory"
	end
# 748 "data/maps/SootopolisCity/scripts.pory"

# 749 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriLikeSeasonBornIn::
# 750 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThenILoveAutumn, MSGBOX_DEFAULT
# 751 "data/maps/SootopolisCity/scripts.pory"
	release
# 752 "data/maps/SootopolisCity/scripts.pory"
	end
# 753 "data/maps/SootopolisCity/scripts.pory"

# 754 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman2::
# 755 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 756 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WOMAN_2, Common_Movement_FacePlayer
# 757 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 758 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_Woman2Rayquaza
# 759 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WeatherWentWild, MSGBOX_DEFAULT
# 760 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 761 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WOMAN_2, Common_Movement_FaceOriginalDirection
# 762 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 763 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 764 "data/maps/SootopolisCity/scripts.pory"
	end
# 765 "data/maps/SootopolisCity/scripts.pory"

# 766 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman2Rayquaza::
# 767 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_YouBroughtFlyingMon, MSGBOX_DEFAULT
# 768 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 769 "data/maps/SootopolisCity/scripts.pory"
	end
# 770 "data/maps/SootopolisCity/scripts.pory"

# 771 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Man::
# 772 "data/maps/SootopolisCity/scripts.pory"
	lock
# 773 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 774 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 7, SootopolisCity_EventScript_ManPostLegendaries
# 775 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NoOrdinaryTourist, MSGBOX_DEFAULT
# 776 "data/maps/SootopolisCity/scripts.pory"
	release
# 777 "data/maps/SootopolisCity/scripts.pory"
	end
# 778 "data/maps/SootopolisCity/scripts.pory"

# 779 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ManPostLegendaries::
# 780 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CityRegainedCalm, MSGBOX_DEFAULT
# 781 "data/maps/SootopolisCity/scripts.pory"
	release
# 782 "data/maps/SootopolisCity/scripts.pory"
	end
# 783 "data/maps/SootopolisCity/scripts.pory"

# 784 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1::
# 785 "data/maps/SootopolisCity/scripts.pory"
	lock
# 786 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 787 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 7, SootopolisCity_EventScript_Woman1PostLegendaries
# 788 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_Woman1Rayquaza
# 789 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_Woman1Legendaries
# 790 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisSkyBeautiful, MSGBOX_DEFAULT
# 791 "data/maps/SootopolisCity/scripts.pory"
	release
# 792 "data/maps/SootopolisCity/scripts.pory"
	end
# 793 "data/maps/SootopolisCity/scripts.pory"

# 794 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1Legendaries::
# 795 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiganticPokemonFight, MSGBOX_DEFAULT
# 796 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 797 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WOMAN_1, Common_Movement_FaceOriginalDirection
# 798 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 799 "data/maps/SootopolisCity/scripts.pory"
	release
# 800 "data/maps/SootopolisCity/scripts.pory"
	end
# 801 "data/maps/SootopolisCity/scripts.pory"

# 802 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1PostLegendaries::
# 803 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NightSkyFavoriteScenery, MSGBOX_DEFAULT
# 804 "data/maps/SootopolisCity/scripts.pory"
	release
# 805 "data/maps/SootopolisCity/scripts.pory"
	end
# 806 "data/maps/SootopolisCity/scripts.pory"

# 807 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1Rayquaza::
# 808 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_FearedWorstWhenPokemonFlewDown, MSGBOX_DEFAULT
# 809 "data/maps/SootopolisCity/scripts.pory"
	release
# 810 "data/maps/SootopolisCity/scripts.pory"
	end
# 811 "data/maps/SootopolisCity/scripts.pory"

# 812 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoy::
# 813 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 814 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_NINJA_BOY, Common_Movement_FacePlayer
# 815 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 816 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_NinjaBoyRayquaza
# 817 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 7, SootopolisCity_EventScript_NinjaBoyNormal
# 818 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_NinjaBoyNormal
# 819 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThisIsWicked, MSGBOX_DEFAULT
# 820 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 821 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_NINJA_BOY, Common_Movement_FaceOriginalDirection
# 822 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 823 "data/maps/SootopolisCity/scripts.pory"
	release
# 824 "data/maps/SootopolisCity/scripts.pory"
	end
# 825 "data/maps/SootopolisCity/scripts.pory"

# 826 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoyNormal::
# 827 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WonderWhatWorldIsLike, MSGBOX_DEFAULT
# 828 "data/maps/SootopolisCity/scripts.pory"
	release
# 829 "data/maps/SootopolisCity/scripts.pory"
	end
# 830 "data/maps/SootopolisCity/scripts.pory"

# 831 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoyRayquaza::
# 832 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThatWasWicked, MSGBOX_DEFAULT
# 833 "data/maps/SootopolisCity/scripts.pory"
	release
# 834 "data/maps/SootopolisCity/scripts.pory"
	end
# 835 "data/maps/SootopolisCity/scripts.pory"

# 836 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1::
# 837 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 838 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BOY_1, Common_Movement_FacePlayer
# 839 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 840 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_Boy1Rayquaza
# 841 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SootopolisCity_EventScript_Boy1GameClear
# 842 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 7, SootopolisCity_EventScript_Boy1Normal
# 843 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_Boy1Normal
# 844 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiantPokemonSuddenlyAppeared, MSGBOX_DEFAULT
# 845 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 846 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BOY_1, Common_Movement_FaceOriginalDirection
# 847 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 848 "data/maps/SootopolisCity/scripts.pory"
	release
# 849 "data/maps/SootopolisCity/scripts.pory"
	end
# 850 "data/maps/SootopolisCity/scripts.pory"

# 851 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1Rayquaza::
# 852 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatIsThatGreenPokemon, MSGBOX_DEFAULT
# 853 "data/maps/SootopolisCity/scripts.pory"
	release
# 854 "data/maps/SootopolisCity/scripts.pory"
	end
# 855 "data/maps/SootopolisCity/scripts.pory"

# 856 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1GameClear::
# 857 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhereDidLegendariesGo, MSGBOX_DEFAULT
# 858 "data/maps/SootopolisCity/scripts.pory"
	release
# 859 "data/maps/SootopolisCity/scripts.pory"
	end
# 860 "data/maps/SootopolisCity/scripts.pory"

# 861 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1Normal::
# 862 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_PhysicallyFitLivingHere, MSGBOX_DEFAULT
# 863 "data/maps/SootopolisCity/scripts.pory"
	release
# 864 "data/maps/SootopolisCity/scripts.pory"
	end
# 865 "data/maps/SootopolisCity/scripts.pory"

# 866 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GymSign::
# 867 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GymSign, MSGBOX_SIGN
# 868 "data/maps/SootopolisCity/scripts.pory"
	end
# 869 "data/maps/SootopolisCity/scripts.pory"

# 870 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CitySign::
# 871 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CitySign, MSGBOX_SIGN
# 872 "data/maps/SootopolisCity/scripts.pory"
	end
# 873 "data/maps/SootopolisCity/scripts.pory"

# 874 "data/maps/SootopolisCity/scripts.pory"
EventScript_ClosedSootopolisDoor::
# 875 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoorIsClosed, MSGBOX_SIGN
# 876 "data/maps/SootopolisCity/scripts.pory"
	end
# 877 "data/maps/SootopolisCity/scripts.pory"

# 878 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy2::
# 879 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 880 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BOY_2, Common_Movement_FacePlayer
# 881 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 882 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_Boy2Rayquaza
# 883 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_TwoPokemonArentAngry, MSGBOX_DEFAULT
# 884 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 885 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BOY_2, Common_Movement_FaceOriginalDirection
# 886 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 887 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 888 "data/maps/SootopolisCity/scripts.pory"
	end
# 889 "data/maps/SootopolisCity/scripts.pory"

# 890 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy2Rayquaza::
# 891 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_FlyingMonStoppedRampage, MSGBOX_DEFAULT
# 892 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 893 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 894 "data/maps/SootopolisCity/scripts.pory"
	end
# 895 "data/maps/SootopolisCity/scripts.pory"

# 896 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_BlackBelt::
# 897 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 898 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_BlackBeltRayquaza
# 899 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GoRedAndBlueMon, MSGBOX_DEFAULT
# 900 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 901 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BLACK_BELT, Common_Movement_FacePlayer
# 902 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 903 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoYouKnowMonNames, MSGBOX_DEFAULT
# 904 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 905 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BLACK_BELT, Common_Movement_FaceOriginalDirection
# 906 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 907 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 908 "data/maps/SootopolisCity/scripts.pory"
	end
# 909 "data/maps/SootopolisCity/scripts.pory"

# 910 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_BlackBeltRayquaza::
# 911 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BLACK_BELT, Common_Movement_FacePlayer
# 912 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 913 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GreenOneSettlesThings, MSGBOX_DEFAULT
# 914 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 915 "data/maps/SootopolisCity/scripts.pory"
	end
# 916 "data/maps/SootopolisCity/scripts.pory"

# 917 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Girl::
# 918 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 919 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GIRL, Common_Movement_FacePlayer
# 920 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 921 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_GirlRayquaza
# 922 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisWillBeWrecked, MSGBOX_DEFAULT
# 923 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 924 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GIRL, Common_Movement_FaceOriginalDirection
# 925 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 926 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 927 "data/maps/SootopolisCity/scripts.pory"
	end
# 928 "data/maps/SootopolisCity/scripts.pory"

# 929 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GirlRayquaza::
# 930 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisDidntGetWrecked, MSGBOX_DEFAULT
# 931 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 932 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 933 "data/maps/SootopolisCity/scripts.pory"
	end
# 934 "data/maps/SootopolisCity/scripts.pory"

# 935 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Maniac::
# 936 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 937 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_MANIAC, Common_Movement_FacePlayer
# 938 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 939 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_ManiacRayquaza
# 940 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SeeingLegendWithOwnEyes, MSGBOX_DEFAULT
# 941 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 942 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_MANIAC, Common_Movement_FaceOriginalDirection
# 943 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 944 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 945 "data/maps/SootopolisCity/scripts.pory"
	end
# 946 "data/maps/SootopolisCity/scripts.pory"

# 947 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ManiacRayquaza::
# 948 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SawLegendWithOwnEyes, MSGBOX_DEFAULT
# 949 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 950 "data/maps/SootopolisCity/scripts.pory"
	end
# 951 "data/maps/SootopolisCity/scripts.pory"

# 952 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Wallace::
# 953 "data/maps/SootopolisCity/scripts.pory"
	lock
# 954 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 955 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_GoToSkyPillar
# 956 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_WATERFALL, SootopolisCity_EventScript_GoToGym
# 957 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_GiveWaterfall
# 958 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AquaMagmaDidntMeanHarm, MSGBOX_DEFAULT
# 959 "data/maps/SootopolisCity/scripts.pory"
	release
# 960 "data/maps/SootopolisCity/scripts.pory"
	end
# 961 "data/maps/SootopolisCity/scripts.pory"

# 962 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveWaterfall::
# 963 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThankYouForHelpAcceptThis, MSGBOX_DEFAULT
# 964 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_HM_WATERFALL
# 965 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_RECEIVED_HM_WATERFALL
# 966 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ExplainWaterfallGoToGym, MSGBOX_DEFAULT
# 967 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 968 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SootopolisCity_EventScript_WallaceMoveFromGym
# 969 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SootopolisCity_EventScript_WallaceMoveFromGym
# 970 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SootopolisCity_EventScript_WallaceMoveFromGymWest
# 971 "data/maps/SootopolisCity/scripts.pory"
	release
# 972 "data/maps/SootopolisCity/scripts.pory"
	end
# 973 "data/maps/SootopolisCity/scripts.pory"

# 974 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_WallaceMoveFromGym::
# 975 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WALLACE, SootopolisCity_Movement_WallaceMoveFromGym
# 976 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 977 "data/maps/SootopolisCity/scripts.pory"
	copyobjectxytoperm LOCALID_WALLACE
# 978 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_WALLACE_STATE, 1
# 979 "data/maps/SootopolisCity/scripts.pory"
	return
# 980 "data/maps/SootopolisCity/scripts.pory"

# 981 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_WallaceMoveFromGymWest::
# 982 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WALLACE, SootopolisCity_Movement_WallaceMoveFromGymWest
# 983 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 984 "data/maps/SootopolisCity/scripts.pory"
	copyobjectxytoperm LOCALID_WALLACE
# 985 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_WALLACE_STATE, 2
# 986 "data/maps/SootopolisCity/scripts.pory"
	return
# 987 "data/maps/SootopolisCity/scripts.pory"

# 988 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GoToSkyPillar::
# 989 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_HaventYouScaledSkyPillar, MSGBOX_DEFAULT
# 990 "data/maps/SootopolisCity/scripts.pory"
	release
# 991 "data/maps/SootopolisCity/scripts.pory"
	end
# 992 "data/maps/SootopolisCity/scripts.pory"

# 993 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GoToGym::
# 994 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_YouAreAWonderfulTrainer, MSGBOX_DEFAULT
# 995 "data/maps/SootopolisCity/scripts.pory"
	release
# 996 "data/maps/SootopolisCity/scripts.pory"
	end
# 997 "data/maps/SootopolisCity/scripts.pory"

# 998 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_WallaceMoveFromGym:
# 999 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1000 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_down
# 1001 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1002 "data/maps/SootopolisCity/scripts.pory"

# 1003 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_WallaceMoveFromGymWest:
# 1004 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1005 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_down
# 1006 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1007 "data/maps/SootopolisCity/scripts.pory"

# 1008 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Maxie::
# 1009 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1010 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_MaxieRayquaza
# 1011 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GroudonPleaseStop, MSGBOX_DEFAULT
# 1012 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1013 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1014 "data/maps/SootopolisCity/scripts.pory"
	end
# 1015 "data/maps/SootopolisCity/scripts.pory"

# 1016 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_MaxieRayquaza::
# 1017 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AfterAllOurScheming, MSGBOX_DEFAULT
# 1018 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_MET_MAXIE_SOOTOPOLIS
# 1019 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_MET_ARCHIE_SOOTOPOLIS, SootopolisCity_EventScript_MaxieArchieLeave
# 1020 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1021 "data/maps/SootopolisCity/scripts.pory"
	end
# 1022 "data/maps/SootopolisCity/scripts.pory"

# 1023 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Archie::
# 1024 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1025 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_ArchieRayquaza
# 1026 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_KyogreCalmDown, MSGBOX_DEFAULT
# 1027 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1028 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1029 "data/maps/SootopolisCity/scripts.pory"
	end
# 1030 "data/maps/SootopolisCity/scripts.pory"

# 1031 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ArchieRayquaza::
# 1032 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_TryingMeaninglessToPokemon, MSGBOX_DEFAULT
# 1033 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_MET_ARCHIE_SOOTOPOLIS
# 1034 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_MET_MAXIE_SOOTOPOLIS, SootopolisCity_EventScript_MaxieArchieLeave
# 1035 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1036 "data/maps/SootopolisCity/scripts.pory"
	end
# 1037 "data/maps/SootopolisCity/scripts.pory"

# 1038 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_MaxieArchieLeave::
# 1039 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 1040 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 1041 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE
# 1042 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE
# 1043 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE
# 1044 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 2
# 1045 "data/maps/SootopolisCity/scripts.pory"
	warpsilent MAP_SOOTOPOLIS_CITY, 31, 34
# 1046 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 1047 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1048 "data/maps/SootopolisCity/scripts.pory"
	end
# 1049 "data/maps/SootopolisCity/scripts.pory"

# 1050 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 1051 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_Levitate::
# 1052 "data/maps/SootopolisCity/scripts.pory"
	levitate
# 1053 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1054 "data/maps/SootopolisCity/scripts.pory"

# 1055 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 1056 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_DestroyTask::
# 1057 "data/maps/SootopolisCity/scripts.pory"
	destroy_extra_task
# 1058 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1059 "data/maps/SootopolisCity/scripts.pory"

# 1060 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GymSign:
# 1061 "data/maps/SootopolisCity/scripts.pory"
	.string "Sootopolis City Pokémon Gym\n"
# 1062 "data/maps/SootopolisCity/scripts.pory"
	.string "Leader: Chal\p"
# 1063 "data/maps/SootopolisCity/scripts.pory"
	.string "“The one who edges!”$"
# 1064 "data/maps/SootopolisCity/scripts.pory"

# 1065 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CitySign:
# 1066 "data/maps/SootopolisCity/scripts.pory"
	.string "Sootopolis City\p"
# 1067 "data/maps/SootopolisCity/scripts.pory"
	.string "“The mystical city where history\n"
# 1068 "data/maps/SootopolisCity/scripts.pory"
	.string "slumbers.”$"
# 1069 "data/maps/SootopolisCity/scripts.pory"

# 1070 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DoorIsClosed:
# 1071 "data/maps/SootopolisCity/scripts.pory"
	.string "The door is closed.$"
# 1072 "data/maps/SootopolisCity/scripts.pory"

# 1073 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_PhysicallyFitLivingHere:
# 1074 "data/maps/SootopolisCity/scripts.pory"
	.string "Diving in the sea. Climbing up and\n"
# 1075 "data/maps/SootopolisCity/scripts.pory"
	.string "down stairs all the time…\p"
# 1076 "data/maps/SootopolisCity/scripts.pory"
	.string "If you live in this town, you end up\n"
# 1077 "data/maps/SootopolisCity/scripts.pory"
	.string "getting physically fit.$"
# 1078 "data/maps/SootopolisCity/scripts.pory"

# 1079 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GiantPokemonSuddenlyAppeared:
# 1080 "data/maps/SootopolisCity/scripts.pory"
	.string "These giant Pokémon suddenly appeared\n"
# 1081 "data/maps/SootopolisCity/scripts.pory"
	.string "in the middle of the city!\p"
# 1082 "data/maps/SootopolisCity/scripts.pory"
	.string "And, I've never seen them before!\p"
# 1083 "data/maps/SootopolisCity/scripts.pory"
	.string "Why are they smashing into each\n"
# 1084 "data/maps/SootopolisCity/scripts.pory"
	.string "other like that?\p"
# 1085 "data/maps/SootopolisCity/scripts.pory"
	.string "Why can't they be friends, those\n"
# 1086 "data/maps/SootopolisCity/scripts.pory"
	.string "Pokémon?$"
# 1087 "data/maps/SootopolisCity/scripts.pory"

# 1088 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WhatIsThatGreenPokemon:
# 1089 "data/maps/SootopolisCity/scripts.pory"
	.string "What? What? What?\n"
# 1090 "data/maps/SootopolisCity/scripts.pory"
	.string "What is that green Pokémon?!$"
# 1091 "data/maps/SootopolisCity/scripts.pory"

# 1092 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WhereDidLegendariesGo:
# 1093 "data/maps/SootopolisCity/scripts.pory"
	.string "Groudon and Kyogre…\n"
# 1094 "data/maps/SootopolisCity/scripts.pory"
	.string "Where did they go?\p"
# 1095 "data/maps/SootopolisCity/scripts.pory"
	.string "Will they cause droughts or downpours\n"
# 1096 "data/maps/SootopolisCity/scripts.pory"
	.string "somewhere else?$"
# 1097 "data/maps/SootopolisCity/scripts.pory"

# 1098 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_TwoPokemonArentAngry:
# 1099 "data/maps/SootopolisCity/scripts.pory"
	.string "I just get this sense somehow that\n"
# 1100 "data/maps/SootopolisCity/scripts.pory"
	.string "the two Pokémon aren't angry.\p"
# 1101 "data/maps/SootopolisCity/scripts.pory"
	.string "I think… They probably can't control\n"
# 1102 "data/maps/SootopolisCity/scripts.pory"
	.string "their own power…$"
# 1103 "data/maps/SootopolisCity/scripts.pory"

# 1104 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_FlyingMonStoppedRampage:
# 1105 "data/maps/SootopolisCity/scripts.pory"
	.string "That flying Pokémon came down from\n"
# 1106 "data/maps/SootopolisCity/scripts.pory"
	.string "the sky and stopped the rampaging\l"
# 1107 "data/maps/SootopolisCity/scripts.pory"
	.string "Pokémon…$"
# 1108 "data/maps/SootopolisCity/scripts.pory"

# 1109 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WonderWhatWorldIsLike:
# 1110 "data/maps/SootopolisCity/scripts.pory"
	.string "I… I've never been out of this city.\p"
# 1111 "data/maps/SootopolisCity/scripts.pory"
	.string "I wonder what the world is like on\n"
# 1112 "data/maps/SootopolisCity/scripts.pory"
	.string "the other side of this round sky?$"
# 1113 "data/maps/SootopolisCity/scripts.pory"

# 1114 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThisIsWicked:
# 1115 "data/maps/SootopolisCity/scripts.pory"
	.string "Wow!\n"
# 1116 "data/maps/SootopolisCity/scripts.pory"
	.string "This is wicked!$"
# 1117 "data/maps/SootopolisCity/scripts.pory"

# 1118 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThatWasWicked:
# 1119 "data/maps/SootopolisCity/scripts.pory"
	.string "Wow!\n"
# 1120 "data/maps/SootopolisCity/scripts.pory"
	.string "That was wicked!$"
# 1121 "data/maps/SootopolisCity/scripts.pory"

# 1122 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GoRedAndBlueMon:
# 1123 "data/maps/SootopolisCity/scripts.pory"
	.string "Go for it, red Pokémon!\n"
# 1124 "data/maps/SootopolisCity/scripts.pory"
	.string "Don't back off, blue Pokémon!$"
# 1125 "data/maps/SootopolisCity/scripts.pory"

# 1126 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DoYouKnowMonNames:
# 1127 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\p"
# 1128 "data/maps/SootopolisCity/scripts.pory"
	.string "Hi, do you know the names of those\n"
# 1129 "data/maps/SootopolisCity/scripts.pory"
	.string "Pokémon fighting over there?$"
# 1130 "data/maps/SootopolisCity/scripts.pory"

# 1131 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GreenOneSettlesThings:
# 1132 "data/maps/SootopolisCity/scripts.pory"
	.string "I was wondering which one would win,\n"
# 1133 "data/maps/SootopolisCity/scripts.pory"
	.string "the red one or the blue one, but, oh no,\l"
# 1134 "data/maps/SootopolisCity/scripts.pory"
	.string "it's the green one that settles things!\p"
# 1135 "data/maps/SootopolisCity/scripts.pory"
	.string "Talk about a huge turn of events!$"
# 1136 "data/maps/SootopolisCity/scripts.pory"

# 1137 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SeeingLegendWithOwnEyes:
# 1138 "data/maps/SootopolisCity/scripts.pory"
	.string "There's an ancient legend that claims\n"
# 1139 "data/maps/SootopolisCity/scripts.pory"
	.string "the land and sea were shaped by\l"
# 1140 "data/maps/SootopolisCity/scripts.pory"
	.string "a colossal battle between Pokémon.\p"
# 1141 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, I'm seeing that happen with\n"
# 1142 "data/maps/SootopolisCity/scripts.pory"
	.string "my very own eyes!\p"
# 1143 "data/maps/SootopolisCity/scripts.pory"
	.string "Whoa! I never expected to be\n"
# 1144 "data/maps/SootopolisCity/scripts.pory"
	.string "witness to something this huge!$"
# 1145 "data/maps/SootopolisCity/scripts.pory"

# 1146 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SawLegendWithOwnEyes:
# 1147 "data/maps/SootopolisCity/scripts.pory"
	.string "There's an ancient legend that claims\n"
# 1148 "data/maps/SootopolisCity/scripts.pory"
	.string "the land and sea were shaped by\l"
# 1149 "data/maps/SootopolisCity/scripts.pory"
	.string "a colossal battle between Pokémon.\p"
# 1150 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, I saw that happen with\n"
# 1151 "data/maps/SootopolisCity/scripts.pory"
	.string "my very own eyes!\p"
# 1152 "data/maps/SootopolisCity/scripts.pory"
	.string "Whoa! I never expected to be\n"
# 1153 "data/maps/SootopolisCity/scripts.pory"
	.string "witness to something this huge!$"
# 1154 "data/maps/SootopolisCity/scripts.pory"

# 1155 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_BigPokemonFighting:
# 1156 "data/maps/SootopolisCity/scripts.pory"
	.string "A big Pokémon is fighting with\n"
# 1157 "data/maps/SootopolisCity/scripts.pory"
	.string "another big Pokémon!\p"
# 1158 "data/maps/SootopolisCity/scripts.pory"
	.string "Please, someone make them stop!$"
# 1159 "data/maps/SootopolisCity/scripts.pory"

# 1160 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_PrettyMonCameFromSky:
# 1161 "data/maps/SootopolisCity/scripts.pory"
	.string "A pretty Pokémon came down from\n"
# 1162 "data/maps/SootopolisCity/scripts.pory"
	.string "the sky…$"
# 1163 "data/maps/SootopolisCity/scripts.pory"

# 1164 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SootopolisWillBeWrecked:
# 1165 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh, no!\n"
# 1166 "data/maps/SootopolisCity/scripts.pory"
	.string "Sootopolis City will get wrecked!$"
# 1167 "data/maps/SootopolisCity/scripts.pory"

# 1168 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SootopolisDidntGetWrecked:
# 1169 "data/maps/SootopolisCity/scripts.pory"
	.string "Sootopolis City didn't get wrecked!$"
# 1170 "data/maps/SootopolisCity/scripts.pory"

# 1171 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_NoOrdinaryTourist:
# 1172 "data/maps/SootopolisCity/scripts.pory"
	.string "Hm!\n"
# 1173 "data/maps/SootopolisCity/scripts.pory"
	.string "You've come all the way to Sootopolis?\l"
# 1174 "data/maps/SootopolisCity/scripts.pory"
	.string "You're no ordinary tourist.\p"
# 1175 "data/maps/SootopolisCity/scripts.pory"
	.string "But I suppose that doesn't make you\n"
# 1176 "data/maps/SootopolisCity/scripts.pory"
	.string "an extraordinary tourist, either.$"
# 1177 "data/maps/SootopolisCity/scripts.pory"

# 1178 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CityRegainedCalm:
# 1179 "data/maps/SootopolisCity/scripts.pory"
	.string "The city has regained its calm…$"
# 1180 "data/maps/SootopolisCity/scripts.pory"

# 1181 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CaveOfOriginPleaseLeave:
# 1182 "data/maps/SootopolisCity/scripts.pory"
	.string "Who might you be?\p"
# 1183 "data/maps/SootopolisCity/scripts.pory"
	.string "This is the Cave of Origin.\p"
# 1184 "data/maps/SootopolisCity/scripts.pory"
	.string "The spirits of Pokémon, becalmed at\n"
# 1185 "data/maps/SootopolisCity/scripts.pory"
	.string "Mt. Pyre, are said to be revived here.$"
# 1186 "data/maps/SootopolisCity/scripts.pory"

# 1187 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_LeadSuperiorTrainerToCave:
# 1188 "data/maps/SootopolisCity/scripts.pory"
	.string "A person with a strong will and\n"
# 1189 "data/maps/SootopolisCity/scripts.pory"
	.string "superior talent…\p"
# 1190 "data/maps/SootopolisCity/scripts.pory"
	.string "A Trainer who has knowledge and\n"
# 1191 "data/maps/SootopolisCity/scripts.pory"
	.string "experience of many kinds of Pokémon…\p"
# 1192 "data/maps/SootopolisCity/scripts.pory"
	.string "If such a person were to appear, I was\n"
# 1193 "data/maps/SootopolisCity/scripts.pory"
	.string "instructed to let that Trainer to this\l"
# 1194 "data/maps/SootopolisCity/scripts.pory"
	.string "Cave.$"
# 1195 "data/maps/SootopolisCity/scripts.pory"

# 1196 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_AwakenedPokemonClash:
# 1197 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh, my…\p"
# 1198 "data/maps/SootopolisCity/scripts.pory"
	.string "The clash between the two awakened\n"
# 1199 "data/maps/SootopolisCity/scripts.pory"
	.string "Pokémon was quelled by the awakening\l"
# 1200 "data/maps/SootopolisCity/scripts.pory"
	.string "of a third Pokémon…$"
# 1201 "data/maps/SootopolisCity/scripts.pory"

# 1202 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CaveOfOriginSleepsToo:
# 1203 "data/maps/SootopolisCity/scripts.pory"
	.string "This is the Cave of Origin…\p"
# 1204 "data/maps/SootopolisCity/scripts.pory"
	.string "With the passing of the crisis,\n"
# 1205 "data/maps/SootopolisCity/scripts.pory"
	.string "the cave, too, shall sleep…$"
# 1206 "data/maps/SootopolisCity/scripts.pory"

# 1207 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SootopolisSkyBeautiful:
# 1208 "data/maps/SootopolisCity/scripts.pory"
	.string "Sootopolis sprang up as a town in\n"
# 1209 "data/maps/SootopolisCity/scripts.pory"
	.string "the crater of a volcano.\p"
# 1210 "data/maps/SootopolisCity/scripts.pory"
	.string "If you look up at the sky, the lip of\n"
# 1211 "data/maps/SootopolisCity/scripts.pory"
	.string "the crater is also visible.\l"
# 1212 "data/maps/SootopolisCity/scripts.pory"
	.string "So, all you see is the sky in a circle.\p"
# 1213 "data/maps/SootopolisCity/scripts.pory"
	.string "But that's what makes the sky above\n"
# 1214 "data/maps/SootopolisCity/scripts.pory"
	.string "Sootopolis the most beautiful.$"
# 1215 "data/maps/SootopolisCity/scripts.pory"

# 1216 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GiganticPokemonFight:
# 1217 "data/maps/SootopolisCity/scripts.pory"
	.string "When two Pokémon that gigantic\n"
# 1218 "data/maps/SootopolisCity/scripts.pory"
	.string "are fighting that savagely, there's\l"
# 1219 "data/maps/SootopolisCity/scripts.pory"
	.string "not much that we can do.$"
# 1220 "data/maps/SootopolisCity/scripts.pory"

# 1221 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_FearedWorstWhenPokemonFlewDown:
# 1222 "data/maps/SootopolisCity/scripts.pory"
	.string "When that third Pokémon flew down,\n"
# 1223 "data/maps/SootopolisCity/scripts.pory"
	.string "I feared the worst.$"
# 1224 "data/maps/SootopolisCity/scripts.pory"

# 1225 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_NightSkyFavoriteScenery:
# 1226 "data/maps/SootopolisCity/scripts.pory"
	.string "A circle of a night sky framed by\n"
# 1227 "data/maps/SootopolisCity/scripts.pory"
	.string "the crater of a volcano…\p"
# 1228 "data/maps/SootopolisCity/scripts.pory"
	.string "And in that ring, stars flicker and\n"
# 1229 "data/maps/SootopolisCity/scripts.pory"
	.string "blink as if they were alive…\l"
# 1230 "data/maps/SootopolisCity/scripts.pory"
	.string "It's my favorite scenery.$"
# 1231 "data/maps/SootopolisCity/scripts.pory"

# 1232 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WeatherWentWild:
# 1233 "data/maps/SootopolisCity/scripts.pory"
	.string "The weather was clear this morning,\n"
# 1234 "data/maps/SootopolisCity/scripts.pory"
	.string "but…\p"
# 1235 "data/maps/SootopolisCity/scripts.pory"
	.string "All of a sudden, dark clouds brewed up,\n"
# 1236 "data/maps/SootopolisCity/scripts.pory"
	.string "rain started falling in sheets, and\l"
# 1237 "data/maps/SootopolisCity/scripts.pory"
	.string "there was thunder and lightning, too.\p"
# 1238 "data/maps/SootopolisCity/scripts.pory"
	.string "The weather just went completely\n"
# 1239 "data/maps/SootopolisCity/scripts.pory"
	.string "wild!\p"
# 1240 "data/maps/SootopolisCity/scripts.pory"
	.string "Is all of this because of those\n"
# 1241 "data/maps/SootopolisCity/scripts.pory"
	.string "Pokémon?$"
# 1242 "data/maps/SootopolisCity/scripts.pory"

# 1243 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_YouBroughtFlyingMon:
# 1244 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh?\p"
# 1245 "data/maps/SootopolisCity/scripts.pory"
	.string "It was you who brought that flying\n"
# 1246 "data/maps/SootopolisCity/scripts.pory"
	.string "Pokémon here?\p"
# 1247 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, aren't you amazing!$"
# 1248 "data/maps/SootopolisCity/scripts.pory"

# 1249 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GroudonPleaseStop:
# 1250 "data/maps/SootopolisCity/scripts.pory"
	.string "Maxie: G… Groudon…\n"
# 1251 "data/maps/SootopolisCity/scripts.pory"
	.string "Please! Stop what you're doing!\p"
# 1252 "data/maps/SootopolisCity/scripts.pory"
	.string "I know the extent of your power now!\p"
# 1253 "data/maps/SootopolisCity/scripts.pory"
	.string "If you keep going, all Hoenn, not just\n"
# 1254 "data/maps/SootopolisCity/scripts.pory"
	.string "Sootopolis, will be utterly ruined!$"
# 1255 "data/maps/SootopolisCity/scripts.pory"

# 1256 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_AfterAllOurScheming:
# 1257 "data/maps/SootopolisCity/scripts.pory"
	.string "Maxie: So the super-ancient Pokémon\n"
# 1258 "data/maps/SootopolisCity/scripts.pory"
	.string "weren't only Groudon and Kyogre…\p"
# 1259 "data/maps/SootopolisCity/scripts.pory"
	.string "After all our fruitless scheming and\n"
# 1260 "data/maps/SootopolisCity/scripts.pory"
	.string "frantic efforts, that one Pokémon's\l"
# 1261 "data/maps/SootopolisCity/scripts.pory"
	.string "simple action puts everything right\l"
# 1262 "data/maps/SootopolisCity/scripts.pory"
	.string "again as if nothing had happened…\p"
# 1263 "data/maps/SootopolisCity/scripts.pory"
	.string "Fu…\n"
# 1264 "data/maps/SootopolisCity/scripts.pory"
	.string "Fuhahaha…$"
# 1265 "data/maps/SootopolisCity/scripts.pory"

# 1266 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_KyogreCalmDown:
# 1267 "data/maps/SootopolisCity/scripts.pory"
	.string "Archie: Kyogre! What's wrong?!\n"
# 1268 "data/maps/SootopolisCity/scripts.pory"
	.string "Look over here! It's the Blue Orb!\l"
# 1269 "data/maps/SootopolisCity/scripts.pory"
	.string "Calm down! Kyogre!\p"
# 1270 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\n"
# 1271 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\p"
# 1272 "data/maps/SootopolisCity/scripts.pory"
	.string "It's no good!\n"
# 1273 "data/maps/SootopolisCity/scripts.pory"
	.string "It's not responding at all!$"
# 1274 "data/maps/SootopolisCity/scripts.pory"

# 1275 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_TryingMeaninglessToPokemon:
# 1276 "data/maps/SootopolisCity/scripts.pory"
	.string "Archie: Kyogre and Groudon both\n"
# 1277 "data/maps/SootopolisCity/scripts.pory"
	.string "flew off to who knows where.\p"
# 1278 "data/maps/SootopolisCity/scripts.pory"
	.string "The weather in Hoenn has returned\n"
# 1279 "data/maps/SootopolisCity/scripts.pory"
	.string "to its normal state…\p"
# 1280 "data/maps/SootopolisCity/scripts.pory"
	.string "Haha…\n"
# 1281 "data/maps/SootopolisCity/scripts.pory"
	.string "Hahaha…\p"
# 1282 "data/maps/SootopolisCity/scripts.pory"
	.string "Maybe what we were trying to do was\n"
# 1283 "data/maps/SootopolisCity/scripts.pory"
	.string "something small, even meaningless,\l"
# 1284 "data/maps/SootopolisCity/scripts.pory"
	.string "to Pokémon…$"
# 1285 "data/maps/SootopolisCity/scripts.pory"

# 1286 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_HaventYouScaledSkyPillar:
# 1287 "data/maps/SootopolisCity/scripts.pory"
	.string "???: Oh?\n"
# 1288 "data/maps/SootopolisCity/scripts.pory"
	.string "{PLAYER}{KUN}?\p"
# 1289 "data/maps/SootopolisCity/scripts.pory"
	.string "Haven't you scaled the Sky Pillar\n"
# 1290 "data/maps/SootopolisCity/scripts.pory"
	.string "yet?\p"
# 1291 "data/maps/SootopolisCity/scripts.pory"
	.string "I'm sure that you can make it to\n"
# 1292 "data/maps/SootopolisCity/scripts.pory"
	.string "the top of the Sky Pillar…$"
# 1293 "data/maps/SootopolisCity/scripts.pory"

# 1294 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_AquaMagmaDidntMeanHarm:
# 1295 "data/maps/SootopolisCity/scripts.pory"
	.string "???: {PLAYER}{KUN}…\p"
# 1296 "data/maps/SootopolisCity/scripts.pory"
	.string "The leaders of Team Magma and Aqua,\n"
# 1297 "data/maps/SootopolisCity/scripts.pory"
	.string "I don't think they meant harm.\p"
# 1298 "data/maps/SootopolisCity/scripts.pory"
	.string "It wouldn't hurt to hear what they\n"
# 1299 "data/maps/SootopolisCity/scripts.pory"
	.string "have to say for themselves.$"
# 1300 "data/maps/SootopolisCity/scripts.pory"

# 1301 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThankYouForHelpAcceptThis:
# 1302 "data/maps/SootopolisCity/scripts.pory"
	.string "???: {PLAYER}{KUN}…\n"
# 1303 "data/maps/SootopolisCity/scripts.pory"
	.string "My eyes didn't deceive me.\p"
# 1304 "data/maps/SootopolisCity/scripts.pory"
	.string "Thanks to you, Sootopolis…\n"
# 1305 "data/maps/SootopolisCity/scripts.pory"
	.string "No, all of Hoenn was saved.\p"
# 1306 "data/maps/SootopolisCity/scripts.pory"
	.string "On behalf of the people, I thank you.\p"
# 1307 "data/maps/SootopolisCity/scripts.pory"
	.string "This is a gift from me.\n"
# 1308 "data/maps/SootopolisCity/scripts.pory"
	.string "Please accept it.$"
# 1309 "data/maps/SootopolisCity/scripts.pory"

# 1310 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ExplainWaterfallGoToGym:
# 1311 "data/maps/SootopolisCity/scripts.pory"
	.string "That Hidden Machine contains\n"
# 1312 "data/maps/SootopolisCity/scripts.pory"
	.string "Waterfall.\p"
# 1313 "data/maps/SootopolisCity/scripts.pory"
	.string "If you have the Noir Badge,\n"
# 1314 "data/maps/SootopolisCity/scripts.pory"
	.string "your Pokémon can scale giant waterfalls\l"
# 1315 "data/maps/SootopolisCity/scripts.pory"
	.string "with it.\p"
# 1316 "data/maps/SootopolisCity/scripts.pory"
	.string "And where does one get the Noir Badge?\n"
# 1317 "data/maps/SootopolisCity/scripts.pory"
	.string "You know, don't you?\p"
# 1318 "data/maps/SootopolisCity/scripts.pory"
	.string "That's right! You have to beat\n"
# 1319 "data/maps/SootopolisCity/scripts.pory"
	.string "the Sootopolis Gym Leader.\p"
# 1320 "data/maps/SootopolisCity/scripts.pory"
	.string "When you're all set to go, step through\n"
# 1321 "data/maps/SootopolisCity/scripts.pory"
	.string "that door.$"
# 1322 "data/maps/SootopolisCity/scripts.pory"

# 1323 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_YouAreAWonderfulTrainer:
# 1324 "data/maps/SootopolisCity/scripts.pory"
	.string "???: I'm sure that you will be\n"
# 1325 "data/maps/SootopolisCity/scripts.pory"
	.string "able to get that Badge, {PLAYER}!\p"
# 1326 "data/maps/SootopolisCity/scripts.pory"
	.string "You are a wonderful Trainer!$"
