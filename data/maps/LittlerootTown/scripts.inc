# 1 "data/maps/LittlerootTown/scripts.pory"

# 2 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_TWIN, 1
# 3 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_MOM, 4
# 4 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_RIVAL, 7
# 5 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_BIRCH, 8
# 6 "data/maps/LittlerootTown/scripts.pory"

# 7 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts::
# 8 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
# 9 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_OnFrame
# 10 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_OnWarp
# 11 "data/maps/LittlerootTown/scripts.pory"
	.byte 0
# 12 "data/maps/LittlerootTown/scripts.pory"

# 13 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 14 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 15 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Saving Birch
# 16 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Received Pokedex
# 17 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Running Shoes
# 18 "data/maps/LittlerootTown/scripts.pory"

# 19 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 20 "data/maps/LittlerootTown/scripts.pory"
	@ 1: In truck male
# 21 "data/maps/LittlerootTown/scripts.pory"
	@ 2: In truck female
# 22 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered house
# 23 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Told to go set clock
# 24 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 25 "data/maps/LittlerootTown/scripts.pory"
	@ 6: Set clock
# 26 "data/maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 27 "data/maps/LittlerootTown/scripts.pory"

# 28 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 29 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 30 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 31 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 32 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 33 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 34 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 35 "data/maps/LittlerootTown/scripts.pory"

# 36 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 37 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 38 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 39 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 40 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 41 "data/maps/LittlerootTown/scripts.pory"

# 42 "data/maps/LittlerootTown/scripts.pory"

# 43 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition:
# 44 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 45 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 46 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_MoveMomToMaysDoor
# 47 "data/maps/LittlerootTown/scripts.pory"
	call_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_SetTwinPos
# 48 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 3, LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
# 49 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 50 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 51 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
# 52 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
# 53 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_HideMapNamePopup
# 54 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 55 "data/maps/LittlerootTown/scripts.pory"
	end
# 56 "data/maps/LittlerootTown/scripts.pory"

# 57 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 58 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 59 "data/maps/LittlerootTown/scripts.pory"
	return
# 60 "data/maps/LittlerootTown/scripts.pory"

# 61 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 62 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 63 "data/maps/LittlerootTown/scripts.pory"
	return
# 64 "data/maps/LittlerootTown/scripts.pory"

# 65 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 66 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 67 "data/maps/LittlerootTown/scripts.pory"
	return
# 68 "data/maps/LittlerootTown/scripts.pory"

# 69 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 70 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 71 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 72 "data/maps/LittlerootTown/scripts.pory"
	return
# 73 "data/maps/LittlerootTown/scripts.pory"

# 74 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 75 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 76 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 77 "data/maps/LittlerootTown/scripts.pory"
	return
# 78 "data/maps/LittlerootTown/scripts.pory"

# 79 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 80 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 8
# 81 "data/maps/LittlerootTown/scripts.pory"
	return
# 82 "data/maps/LittlerootTown/scripts.pory"

# 83 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 84 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 85 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 10, 1
# 86 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_UP
# 87 "data/maps/LittlerootTown/scripts.pory"
	return
# 88 "data/maps/LittlerootTown/scripts.pory"

# 89 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 90 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 7, 2
# 91 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 92 "data/maps/LittlerootTown/scripts.pory"
	return
# 93 "data/maps/LittlerootTown/scripts.pory"

# 94 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 95 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 96 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_DOWN
# 97 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 98 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 99 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 100 "data/maps/LittlerootTown/scripts.pory"
	return
# 101 "data/maps/LittlerootTown/scripts.pory"

# 102 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 103 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 5, 9
# 104 "data/maps/LittlerootTown/scripts.pory"
	return
# 105 "data/maps/LittlerootTown/scripts.pory"

# 106 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 107 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 9
# 108 "data/maps/LittlerootTown/scripts.pory"
	return
# 109 "data/maps/LittlerootTown/scripts.pory"

# 110 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 111 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 112 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 113 "data/maps/LittlerootTown/scripts.pory"

# 114 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 115 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 116 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 117 "data/maps/LittlerootTown/scripts.pory"

# 118 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 119 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 120 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 121 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 122 "data/maps/LittlerootTown/scripts.pory"

# 123 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 124 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 125 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 126 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 127 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 128 "data/maps/LittlerootTown/scripts.pory"

# 129 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouse:
# 130 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 131 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 132 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 133 "data/maps/LittlerootTown/scripts.pory"

# 134 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor:
# 135 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 136 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 137 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 138 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 139 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 140 "data/maps/LittlerootTown/scripts.pory"

# 141 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerEnterHouse:
# 142 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 143 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 144 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 145 "data/maps/LittlerootTown/scripts.pory"

# 146 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 147 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 148 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 149 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 150 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 151 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 152 "data/maps/LittlerootTown/scripts.pory"

# 153 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 154 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 155 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 156 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 157 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 158 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 159 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 160 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 161 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 162 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 163 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 164 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 165 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 166 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 167 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 168 "data/maps/LittlerootTown/scripts.pory"
	end
# 169 "data/maps/LittlerootTown/scripts.pory"

# 170 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 171 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 172 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 173 "data/maps/LittlerootTown/scripts.pory"

# 174 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 175 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_BIRCH
# 176 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_RIVAL
# 177 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 178 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 179 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 180 "data/maps/LittlerootTown/scripts.pory"
	end
# 181 "data/maps/LittlerootTown/scripts.pory"

# 182 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 183 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 6, 10
# 184 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 5, 10
# 185 "data/maps/LittlerootTown/scripts.pory"
	end
# 186 "data/maps/LittlerootTown/scripts.pory"

# 187 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 188 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 13, 10
# 189 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 14, 10
# 190 "data/maps/LittlerootTown/scripts.pory"
	end
# 191 "data/maps/LittlerootTown/scripts.pory"

# 192 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 193 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 194 "data/maps/LittlerootTown/scripts.pory"
	end
# 195 "data/maps/LittlerootTown/scripts.pory"

# 196 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 197 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 198 "data/maps/LittlerootTown/scripts.pory"
	end
# 199 "data/maps/LittlerootTown/scripts.pory"

# 200 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 201 "data/maps/LittlerootTown/scripts.pory"
	lock
# 202 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 203 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 204 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 205 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 206 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 207 "data/maps/LittlerootTown/scripts.pory"
	release
# 208 "data/maps/LittlerootTown/scripts.pory"
	end
# 209 "data/maps/LittlerootTown/scripts.pory"

# 210 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 211 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 212 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 213 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 214 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 215 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 216 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 217 "data/maps/LittlerootTown/scripts.pory"
	release
# 218 "data/maps/LittlerootTown/scripts.pory"
	end
# 219 "data/maps/LittlerootTown/scripts.pory"

# 220 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 221 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 222 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 223 "data/maps/LittlerootTown/scripts.pory"
	release
# 224 "data/maps/LittlerootTown/scripts.pory"
	end
# 225 "data/maps/LittlerootTown/scripts.pory"

# 226 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 227 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 228 "data/maps/LittlerootTown/scripts.pory"
	release
# 229 "data/maps/LittlerootTown/scripts.pory"
	end
# 230 "data/maps/LittlerootTown/scripts.pory"

# 231 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 232 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 233 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 234 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 235 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 236 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 237 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 238 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 239 "data/maps/LittlerootTown/scripts.pory"
	end
# 240 "data/maps/LittlerootTown/scripts.pory"

# 241 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 242 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 243 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 244 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 245 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 246 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 247 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 248 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 249 "data/maps/LittlerootTown/scripts.pory"
	return
# 250 "data/maps/LittlerootTown/scripts.pory"

# 251 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 252 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 253 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 254 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 255 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 256 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 257 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 258 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 259 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 260 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 261 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 262 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 263 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 264 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 265 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 266 "data/maps/LittlerootTown/scripts.pory"

# 267 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 268 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 269 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 270 "data/maps/LittlerootTown/scripts.pory"

# 271 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 272 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 273 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 274 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 275 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 276 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 277 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 278 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 279 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 280 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 281 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 282 "data/maps/LittlerootTown/scripts.pory"

# 283 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 284 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 285 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 286 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 287 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 288 "data/maps/LittlerootTown/scripts.pory"

# 289 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 290 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 291 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 292 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 293 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 294 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnRight
# 295 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 296 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 297 "data/maps/LittlerootTown/scripts.pory"
	end
# 298 "data/maps/LittlerootTown/scripts.pory"

# 299 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 300 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 301 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 302 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 303 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 304 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 305 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 306 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 307 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 308 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 309 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 310 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 311 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 312 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 313 "data/maps/LittlerootTown/scripts.pory"

# 314 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 315 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 316 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 317 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 318 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 319 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 320 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 321 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 322 "data/maps/LittlerootTown/scripts.pory"

# 323 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 324 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 325 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterRight
# 326 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 327 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 328 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 329 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 330 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 331 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 332 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 333 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 334 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 335 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 336 "data/maps/LittlerootTown/scripts.pory"
	end
# 337 "data/maps/LittlerootTown/scripts.pory"

# 338 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 339 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 340 "data/maps/LittlerootTown/scripts.pory"
	end
# 341 "data/maps/LittlerootTown/scripts.pory"

# 342 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 343 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 344 "data/maps/LittlerootTown/scripts.pory"
	end
# 345 "data/maps/LittlerootTown/scripts.pory"

# 346 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 347 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 348 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 349 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 350 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 351 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 352 "data/maps/LittlerootTown/scripts.pory"
	end
# 353 "data/maps/LittlerootTown/scripts.pory"

# 354 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 355 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 356 "data/maps/LittlerootTown/scripts.pory"
	return
# 357 "data/maps/LittlerootTown/scripts.pory"

# 358 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 359 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 360 "data/maps/LittlerootTown/scripts.pory"
	return
# 361 "data/maps/LittlerootTown/scripts.pory"

# 362 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 363 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 364 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 365 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 366 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 367 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 368 "data/maps/LittlerootTown/scripts.pory"
	end
# 369 "data/maps/LittlerootTown/scripts.pory"

# 370 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 371 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 372 "data/maps/LittlerootTown/scripts.pory"
	return
# 373 "data/maps/LittlerootTown/scripts.pory"

# 374 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 375 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 376 "data/maps/LittlerootTown/scripts.pory"
	return
# 377 "data/maps/LittlerootTown/scripts.pory"

# 378 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 379 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 380 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 381 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 10, 9
# 382 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 383 "data/maps/LittlerootTown/scripts.pory"
	end
# 384 "data/maps/LittlerootTown/scripts.pory"

# 385 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 386 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 387 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 388 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 11, 9
# 389 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 390 "data/maps/LittlerootTown/scripts.pory"
	end
# 391 "data/maps/LittlerootTown/scripts.pory"

# 392 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 393 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 394 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 395 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 396 "data/maps/LittlerootTown/scripts.pory"
	end
# 397 "data/maps/LittlerootTown/scripts.pory"

# 398 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 399 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 400 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 401 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 402 "data/maps/LittlerootTown/scripts.pory"
	end
# 403 "data/maps/LittlerootTown/scripts.pory"

# 404 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 405 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 406 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 407 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 408 "data/maps/LittlerootTown/scripts.pory"
	end
# 409 "data/maps/LittlerootTown/scripts.pory"

# 410 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 411 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 412 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 413 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 414 "data/maps/LittlerootTown/scripts.pory"
	end
# 415 "data/maps/LittlerootTown/scripts.pory"

# 416 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 417 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 418 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 419 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 420 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 421 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 422 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 423 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 424 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 425 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 426 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 427 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 428 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 429 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 430 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 431 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 432 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 433 "data/maps/LittlerootTown/scripts.pory"
	end
# 434 "data/maps/LittlerootTown/scripts.pory"

# 435 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 436 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 437 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 438 "data/maps/LittlerootTown/scripts.pory"
	return
# 439 "data/maps/LittlerootTown/scripts.pory"

# 440 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 441 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 442 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 443 "data/maps/LittlerootTown/scripts.pory"
	return
# 444 "data/maps/LittlerootTown/scripts.pory"

# 445 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 446 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterRight
# 447 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 448 "data/maps/LittlerootTown/scripts.pory"
	return
# 449 "data/maps/LittlerootTown/scripts.pory"

# 450 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 451 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterLeft
# 452 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 453 "data/maps/LittlerootTown/scripts.pory"
	return
# 454 "data/maps/LittlerootTown/scripts.pory"

# 455 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 456 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 457 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 458 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 459 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 460 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 461 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 462 "data/maps/LittlerootTown/scripts.pory"
	return
# 463 "data/maps/LittlerootTown/scripts.pory"

# 464 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 465 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 466 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 467 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 468 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 469 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 470 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 471 "data/maps/LittlerootTown/scripts.pory"
	return
# 472 "data/maps/LittlerootTown/scripts.pory"

# 473 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 474 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 475 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 476 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 477 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 478 "data/maps/LittlerootTown/scripts.pory"
	return
# 479 "data/maps/LittlerootTown/scripts.pory"

# 480 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 481 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 482 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 483 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 484 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 485 "data/maps/LittlerootTown/scripts.pory"
	return
# 486 "data/maps/LittlerootTown/scripts.pory"

# 487 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 488 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 489 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 490 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 491 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 492 "data/maps/LittlerootTown/scripts.pory"
	return
# 493 "data/maps/LittlerootTown/scripts.pory"

# 494 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 495 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 496 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 497 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 498 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 499 "data/maps/LittlerootTown/scripts.pory"
	return
# 500 "data/maps/LittlerootTown/scripts.pory"

# 501 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 502 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 503 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 504 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 505 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 506 "data/maps/LittlerootTown/scripts.pory"
	return
# 507 "data/maps/LittlerootTown/scripts.pory"

# 508 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 509 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 510 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 511 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 512 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 513 "data/maps/LittlerootTown/scripts.pory"
	return
# 514 "data/maps/LittlerootTown/scripts.pory"

# 515 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 516 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 517 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 518 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 519 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 520 "data/maps/LittlerootTown/scripts.pory"
	return
# 521 "data/maps/LittlerootTown/scripts.pory"

# 522 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 523 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 524 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 525 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 526 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 527 "data/maps/LittlerootTown/scripts.pory"
	return
# 528 "data/maps/LittlerootTown/scripts.pory"

# 529 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 530 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 531 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 532 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 533 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 534 "data/maps/LittlerootTown/scripts.pory"
	return
# 535 "data/maps/LittlerootTown/scripts.pory"

# 536 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 537 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 538 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 539 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 540 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 541 "data/maps/LittlerootTown/scripts.pory"
	return
# 542 "data/maps/LittlerootTown/scripts.pory"

# 543 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 544 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 545 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 546 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 547 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 548 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 549 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 550 "data/maps/LittlerootTown/scripts.pory"
	return
# 551 "data/maps/LittlerootTown/scripts.pory"

# 552 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 553 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 554 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 555 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 556 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 557 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 558 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 559 "data/maps/LittlerootTown/scripts.pory"
	return
# 560 "data/maps/LittlerootTown/scripts.pory"

# 561 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 562 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome0
# 563 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 564 "data/maps/LittlerootTown/scripts.pory"
	return
# 565 "data/maps/LittlerootTown/scripts.pory"

# 566 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 567 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome1
# 568 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 569 "data/maps/LittlerootTown/scripts.pory"
	return
# 570 "data/maps/LittlerootTown/scripts.pory"

# 571 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 572 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 573 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 574 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 575 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 576 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 577 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 578 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 579 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 580 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 581 "data/maps/LittlerootTown/scripts.pory"
	return
# 582 "data/maps/LittlerootTown/scripts.pory"

# 583 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 584 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 585 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 586 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 587 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 588 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 589 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 590 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 591 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 592 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 593 "data/maps/LittlerootTown/scripts.pory"
	return
# 594 "data/maps/LittlerootTown/scripts.pory"

# 595 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 596 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 597 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 598 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 599 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 600 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 601 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 602 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 603 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 604 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 605 "data/maps/LittlerootTown/scripts.pory"
	return
# 606 "data/maps/LittlerootTown/scripts.pory"

# 607 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 608 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 609 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 610 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 611 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 612 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 613 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 614 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 615 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 616 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 617 "data/maps/LittlerootTown/scripts.pory"
	return
# 618 "data/maps/LittlerootTown/scripts.pory"

# 619 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 620 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 621 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 622 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 623 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 624 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 625 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 626 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 627 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 628 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 629 "data/maps/LittlerootTown/scripts.pory"
	return
# 630 "data/maps/LittlerootTown/scripts.pory"

# 631 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 632 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 633 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 634 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 635 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 636 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 637 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 638 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 639 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 640 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 641 "data/maps/LittlerootTown/scripts.pory"
	return
# 642 "data/maps/LittlerootTown/scripts.pory"

# 643 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 644 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 645 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 646 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 647 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 648 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 649 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 650 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 651 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 652 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 653 "data/maps/LittlerootTown/scripts.pory"
	return
# 654 "data/maps/LittlerootTown/scripts.pory"

# 655 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 656 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 657 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 658 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 659 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 660 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 661 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 662 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 663 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 664 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 665 "data/maps/LittlerootTown/scripts.pory"
	return
# 666 "data/maps/LittlerootTown/scripts.pory"

# 667 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
# 668 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 669 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 670 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 671 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 672 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 673 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 674 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 675 "data/maps/LittlerootTown/scripts.pory"

# 676 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
# 677 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 678 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 679 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 680 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 681 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 682 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 683 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 684 "data/maps/LittlerootTown/scripts.pory"

# 685 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 686 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 687 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 688 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 689 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 690 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 691 "data/maps/LittlerootTown/scripts.pory"

# 692 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 693 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 694 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 695 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 696 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 697 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 698 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 699 "data/maps/LittlerootTown/scripts.pory"

# 700 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 701 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 702 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 703 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 704 "data/maps/LittlerootTown/scripts.pory"

# 705 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 706 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 707 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 708 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 709 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 710 "data/maps/LittlerootTown/scripts.pory"

# 711 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 712 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 713 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 714 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 715 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 716 "data/maps/LittlerootTown/scripts.pory"

# 717 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 718 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 719 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 720 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 721 "data/maps/LittlerootTown/scripts.pory"

# 722 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 723 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 724 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 725 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 726 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 727 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 728 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 729 "data/maps/LittlerootTown/scripts.pory"

# 730 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 731 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 732 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 733 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 734 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 735 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 736 "data/maps/LittlerootTown/scripts.pory"

# 737 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 738 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 739 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 740 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 741 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 742 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 743 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 744 "data/maps/LittlerootTown/scripts.pory"

# 745 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 746 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 747 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 748 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 749 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 750 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 751 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 752 "data/maps/LittlerootTown/scripts.pory"

# 753 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 754 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 755 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 756 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 757 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 758 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 759 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 760 "data/maps/LittlerootTown/scripts.pory"

# 761 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 762 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 763 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 764 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 765 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 766 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 767 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 768 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 769 "data/maps/LittlerootTown/scripts.pory"

# 770 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 771 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 772 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 773 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 774 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 775 "data/maps/LittlerootTown/scripts.pory"

# 776 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 777 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 778 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 779 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 780 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 781 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 782 "data/maps/LittlerootTown/scripts.pory"

# 783 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 784 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 785 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 786 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 787 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 788 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 789 "data/maps/LittlerootTown/scripts.pory"

# 790 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 791 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 792 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 793 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 794 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 795 "data/maps/LittlerootTown/scripts.pory"

# 796 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 797 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 798 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 799 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 800 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 801 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 802 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 803 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 804 "data/maps/LittlerootTown/scripts.pory"

# 805 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 806 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 807 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 808 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 809 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 810 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 811 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 812 "data/maps/LittlerootTown/scripts.pory"

# 813 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 814 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 815 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 816 "data/maps/LittlerootTown/scripts.pory"

# 817 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 818 "data/maps/LittlerootTown/scripts.pory"
	lock
# 819 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 820 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 821 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 822 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 823 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 824 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterUp
# 825 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 826 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 827 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 828 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 829 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 830 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 831 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 832 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 833 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 834 "data/maps/LittlerootTown/scripts.pory"
	end
# 835 "data/maps/LittlerootTown/scripts.pory"

# 836 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 837 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_MOM
# 838 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 839 "data/maps/LittlerootTown/scripts.pory"
	release
# 840 "data/maps/LittlerootTown/scripts.pory"
	end
# 841 "data/maps/LittlerootTown/scripts.pory"

# 842 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 843 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayerGetOldRod, MSGBOX_DEFAULT
# 844 "data/maps/LittlerootTown/scripts.pory"
	giveitem ITEM_OLD_ROD
# 845 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayerGetCandyBox, MSGBOX_DEFAULT
# 846 "data/maps/LittlerootTown/scripts.pory"
	giveitem ITEM_CANDY_BOX
# 847 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayerGetRepellent, MSGBOX_DEFAULT
# 848 "data/maps/LittlerootTown/scripts.pory"
	giveitem ITEM_REPELLENT
# 849 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 850 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 851 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 852 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 853 "data/maps/LittlerootTown/scripts.pory"
	return
# 854 "data/maps/LittlerootTown/scripts.pory"

# 855 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 856 "data/maps/LittlerootTown/scripts.pory"
	.string "Mom: {PLAYER}, we're here, honey!\p"
# 857 "data/maps/LittlerootTown/scripts.pory"
	.string "It must be tiring riding with our things\n"
# 858 "data/maps/LittlerootTown/scripts.pory"
	.string "in the moving truck.\p"
# 859 "data/maps/LittlerootTown/scripts.pory"
	.string "Well, this is Littleroot Town.\p"
# 860 "data/maps/LittlerootTown/scripts.pory"
	.string "How do you like it?\n"
# 861 "data/maps/LittlerootTown/scripts.pory"
	.string "This is our new home!\p"
# 862 "data/maps/LittlerootTown/scripts.pory"
	.string "It has a quaint feel, but it seems to be\n"
# 863 "data/maps/LittlerootTown/scripts.pory"
	.string "an easy place to live, don't you think?\p"
# 864 "data/maps/LittlerootTown/scripts.pory"
	.string "And, you get your own room, {PLAYER}!\n"
# 865 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go inside.$"
# 866 "data/maps/LittlerootTown/scripts.pory"

# 867 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 868 "data/maps/LittlerootTown/scripts.pory"
	.string "Mom: Wait, {PLAYER}!$"
# 869 "data/maps/LittlerootTown/scripts.pory"

# 870 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayerGetOldRod:
# 871 "data/maps/LittlerootTown/scripts.pory"
	.string "Mom: {PLAYER}! {PLAYER}! Did you\n"
# 872 "data/maps/LittlerootTown/scripts.pory"
	.string "introduce yourself to Prof. Birch?\p"
# 873 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh! What an adorable Pokémon!\n"
# 874 "data/maps/LittlerootTown/scripts.pory"
	.string "You got it from Prof. Birch. How nice!\p"
# 875 "data/maps/LittlerootTown/scripts.pory"
	.string "You're your father's child, all right.\n"
# 876 "data/maps/LittlerootTown/scripts.pory"
	.string "You look good together with Pokémon!\p"
# 877 "data/maps/LittlerootTown/scripts.pory"
	.string "Here, honey! If you're going out on an\n"
# 878 "data/maps/LittlerootTown/scripts.pory"
	.string "adventure, take this fishing rod, too!\p"
# 879 "data/maps/LittlerootTown/scripts.pory"
	.string "It's your dad's old rod.$"
# 880 "data/maps/LittlerootTown/scripts.pory"

# 881 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayerGetCandyBox:
# 882 "data/maps/LittlerootTown/scripts.pory"
	.string "Mom: You can fish anywhere near a body\n"
# 883 "data/maps/LittlerootTown/scripts.pory"
	.string "of water.\p"
# 884 "data/maps/LittlerootTown/scripts.pory"
	.string "Just use the rod and press {A_BUTTON} when a\n"
# 885 "data/maps/LittlerootTown/scripts.pory"
	.string "Pokémon is reeled in!\p"
# 886 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh! Also here's some candy for you!\p"
# 887 "data/maps/LittlerootTown/scripts.pory"
	.string "In case you or your Pokémon are hungry\n"
# 888 "data/maps/LittlerootTown/scripts.pory"
	.string "grab a treat!$"
# 889 "data/maps/LittlerootTown/scripts.pory"

# 890 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayerGetRepellent:
# 891 "data/maps/LittlerootTown/scripts.pory"
	.string "Mom: It's a scary world out there.\p"
# 892 "data/maps/LittlerootTown/scripts.pory"
	.string "You need some Repellent otherwise\n"
# 893 "data/maps/LittlerootTown/scripts.pory"
	.string "wild Pokémon might attack you!$"
# 894 "data/maps/LittlerootTown/scripts.pory"

# 895 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens:
# 896 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 897 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 898 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 899 "data/maps/LittlerootTown/scripts.pory"
	.string "Pokémon now…\l"
# 900 "data/maps/LittlerootTown/scripts.pory"
	.string "Your father will be overjoyed.\p"
# 901 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 902 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 903 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go get them, honey!$"
# 904 "data/maps/LittlerootTown/scripts.pory"

# 905 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems:
# 906 "data/maps/LittlerootTown/scripts.pory"
	.string "If you use a PC, you can store items\n"
# 907 "data/maps/LittlerootTown/scripts.pory"
	.string "and Pokémon.\p"
# 908 "data/maps/LittlerootTown/scripts.pory"
	.string "The power of science is staggering!$"
# 909 "data/maps/LittlerootTown/scripts.pory"

# 910 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 911 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch spends days in his Lab\n"
# 912 "data/maps/LittlerootTown/scripts.pory"
	.string "studying, then he'll suddenly go out in\l"
# 913 "data/maps/LittlerootTown/scripts.pory"
	.string "the wild to do more research…\p"
# 914 "data/maps/LittlerootTown/scripts.pory"
	.string "When does Prof. Birch spend time\n"
# 915 "data/maps/LittlerootTown/scripts.pory"
	.string "at home?$"
# 916 "data/maps/LittlerootTown/scripts.pory"

# 917 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 918 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
# 919 "data/maps/LittlerootTown/scripts.pory"
	.string "If you go outside and go in the grass,\n"
# 920 "data/maps/LittlerootTown/scripts.pory"
	.string "wild Pokémon will jump out!$"
# 921 "data/maps/LittlerootTown/scripts.pory"

# 922 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 923 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 924 "data/maps/LittlerootTown/scripts.pory"
	.string "your own Pokémon.$"
# 925 "data/maps/LittlerootTown/scripts.pory"

# 926 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 927 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
# 928 "data/maps/LittlerootTown/scripts.pory"
	.string "There are scary Pokémon outside!\n"
# 929 "data/maps/LittlerootTown/scripts.pory"
	.string "I can hear their cries!\p"
# 930 "data/maps/LittlerootTown/scripts.pory"
	.string "I want to go see what's going on,\n"
# 931 "data/maps/LittlerootTown/scripts.pory"
	.string "but I don't have any Pokémon…\p"
# 932 "data/maps/LittlerootTown/scripts.pory"
	.string "Can you go see what's happening\n"
# 933 "data/maps/LittlerootTown/scripts.pory"
	.string "for me?$"
# 934 "data/maps/LittlerootTown/scripts.pory"

# 935 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 936 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved Prof. Birch!\n"
# 937 "data/maps/LittlerootTown/scripts.pory"
	.string "I'm so glad!$"
# 938 "data/maps/LittlerootTown/scripts.pory"

# 939 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 940 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch Pokémon?\n"
# 941 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"
# 942 "data/maps/LittlerootTown/scripts.pory"

# 943 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 944 "data/maps/LittlerootTown/scripts.pory"
	.string "Littleroot Town\n"
# 945 "data/maps/LittlerootTown/scripts.pory"
	.string "“A town that can't be shaded any hue.”$"
# 946 "data/maps/LittlerootTown/scripts.pory"

# 947 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 948 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch's Pokémon Lab$"
# 949 "data/maps/LittlerootTown/scripts.pory"

# 950 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 951 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s House$"
# 952 "data/maps/LittlerootTown/scripts.pory"

# 953 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 954 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch's House$"
# 955 "data/maps/LittlerootTown/scripts.pory"

# 956 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 957 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch: Well, well, {PLAYER}{KUN}!\n"
# 958 "data/maps/LittlerootTown/scripts.pory"
	.string "That was good work out there!\p"
# 959 "data/maps/LittlerootTown/scripts.pory"
	.string "I knew there was something special\n"
# 960 "data/maps/LittlerootTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 961 "data/maps/LittlerootTown/scripts.pory"
	.string "but I never expected this.\p"
# 962 "data/maps/LittlerootTown/scripts.pory"
	.string "I have something to show you.\n"
# 963 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go to my Lab.$"
